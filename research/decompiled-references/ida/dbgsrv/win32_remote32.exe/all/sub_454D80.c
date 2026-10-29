/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_454D80
// Address: 0x00454D80

//----- (00454D80) --------------------------------------------------------
int __usercall sub_454D80@<eax>(__m128i a1@<xmm0>, _DWORD *a2, LPVOID *a3, _DWORD *a4)
{
  int v4; // ebx
  int v5; // eax
  _DWORD *v6; // esi
  int v7; // ebx
  _BYTE *v8; // eax
  char v9; // al
  char *v10; // eax
  int v11; // eax
  int v12; // eax
  bool v13; // zf
  DWORD v14; // ebx
  const CHAR *v15; // eax
  char v16; // al
  DWORD LastError; // eax
  const char *v19; // eax
  const char *v20; // ecx
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [esp+10h] [ebp-30h] BYREF
  LPCWSTR lpFileName; // [esp+1Ch] [ebp-24h] BYREF
  int v23; // [esp+20h] [ebp-20h]
  int v24; // [esp+24h] [ebp-1Ch]
  int v25; // [esp+28h] [ebp-18h]
  unsigned int v26; // [esp+2Ch] [ebp-14h]
  int v27; // [esp+30h] [ebp-10h]
  int v28; // [esp+3Ch] [ebp-4h]

  v4 = 0;
  v27 = 0;
  v26 = 0;
  if ( a2[1] )
  {
    v5 = 0;
    v25 = 0;
    while ( 1 )
    {
      v6 = (_DWORD *)(v5 + *a2);
      if ( (int)*v6 > 2 )
        break;
      if ( !v4 )
      {
        a4[15] = GetStdHandle(0xFFFFFFF5);
        a4[14] = GetStdHandle(0xFFFFFFF6);
        a4[16] = GetStdHandle(0xFFFFFFF4);
      }
      v7 = -1;
      if ( (v6[4] & 8) == 0
        && v6[2]
        && (v8 = (_BYTE *)v6[1], *v8 == 38)
        && (v9 = v8[1], v9 >= 0)
        && sub_46B760(-1, (unsigned __int8)v9) )
      {
        v10 = &byte_48BE67;
        if ( v6[2] )
          v10 = (char *)v6[1];
        v11 = *v10 - 48;
        if ( v11 > 2 )
        {
          if ( a3 )
            sub_402970(a1, a3, "cannot redirect to channel %d on windows", v11);
LABEL_40:
          v4 = v27;
          goto LABEL_41;
        }
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 == 1 )
              v7 = a4[16];
          }
          else
          {
            v7 = a4[15];
          }
        }
        else
        {
          v7 = a4[14];
        }
      }
      else
      {
        v13 = (v6[4] & 1) == 0;
        SecurityAttributes.nLength = 12;
        SecurityAttributes.lpSecurityDescriptor = nullptr;
        SecurityAttributes.bInheritHandle = 1;
        if ( v13 )
        {
          v14 = 0x40000000;
          if ( (v6[4] & 4) != 0 )
            v14 = 4;
        }
        else
        {
          v14 = 0x80000000;
        }
        v15 = MultiByteStr;
        if ( v6[2] )
          v15 = (const CHAR *)v6[1];
        sub_4579C0((LPWSTR *)&lpFileName, v15);
        v16 = *((_BYTE *)v6 + 16);
        v28 = 0;
        v7 = (int)CreateFileW(lpFileName, v14, 1u, &SecurityAttributes, ((v16 & 1) == 0) + 3, 0, nullptr);
        if ( v7 == -1 )
        {
          if ( a3 )
          {
            LastError = GetLastError();
            v19 = (const char *)sub_453860(a1, LastError);
            v20 = MultiByteStr;
            if ( v6[2] )
              v20 = (const char *)v6[1];
            sub_402970(a1, a3, "failed to redirect %d to %s: %s", *v6, v20, v19);
          }
          v28 = 1;
          if ( lpFileName )
          {
            v23 = 0;
            sub_453A20((void *)lpFileName);
            lpFileName = nullptr;
            v24 = 0;
          }
          v28 = -1;
          goto LABEL_40;
        }
        v28 = 2;
        if ( lpFileName )
        {
          v23 = 0;
          sub_453A20((void *)lpFileName);
          lpFileName = nullptr;
          v24 = 0;
        }
        v28 = -1;
      }
      if ( *v6 )
      {
        if ( *v6 == 1 )
        {
          a4[15] = v7;
        }
        else if ( *v6 == 2 )
        {
          a4[16] = v7;
        }
      }
      else
      {
        a4[14] = v7;
      }
      a4[11] |= 0x100u;
      v4 = v27 | (1 << *v6);
      ++v26;
      v5 = v25 + 28;
      v27 = v4;
      v25 += 28;
      if ( v26 >= a2[1] )
        goto LABEL_41;
    }
    if ( a3 )
      sub_402970(a1, a3, "cannot redirect channel %d on windows", *v6);
  }
LABEL_41:
  if ( v26 == a2[1] )
    return v4;
  if ( (v4 & 1) != 0 )
    CloseHandle((HANDLE)a4[14]);
  if ( (v4 & 2) != 0 )
    CloseHandle((HANDLE)a4[15]);
  if ( (v4 & 4) != 0 )
    CloseHandle((HANDLE)a4[16]);
  return -1;
}
// 48BE67: using guessed type char byte_48BE67;
