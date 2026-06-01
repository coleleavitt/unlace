/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005C490
// Address: 0x000000014005C490

//----- (000000014005C490) ----------------------------------------------------
__int64 __fastcall sub_14005C490(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // ebp
  int v7; // r14d
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rsi
  _BYTE *v11; // rax
  int v12; // ecx
  char *v13; // rax
  int v14; // eax
  DWORD v15; // esi
  const CHAR *v16; // rdx
  DWORD LastError; // eax
  const char *v18; // rax
  const char *v19; // rcx
  LPCWSTR lpFileName; // [rsp+40h] [rbp-58h] BYREF
  __int64 v22; // [rsp+48h] [rbp-50h]
  struct _SECURITY_ATTRIBUTES SecurityAttributes; // [rsp+58h] [rbp-40h] BYREF

  v6 = 0;
  v7 = 0;
  if ( a1[1] )
  {
    v8 = 0;
    while ( 1 )
    {
      v9 = v8 + *a1;
      if ( *(int *)v9 > 2 )
        break;
      if ( !v6 )
      {
        *(_QWORD *)(a3 + 88) = GetStdHandle(0xFFFFFFF5);
        *(_QWORD *)(a3 + 80) = GetStdHandle(0xFFFFFFF6);
        *(_QWORD *)(a3 + 96) = GetStdHandle(0xFFFFFFF4);
      }
      v10 = -1;
      if ( (*(_BYTE *)(v9 + 32) & 8) == 0
        && *(_QWORD *)(v9 + 16)
        && (v11 = *(_BYTE **)(v9 + 8), *v11 == 38)
        && (v12 = (unsigned __int8)v11[1], (v12 & 0x80u) == 0)
        && isdigit(v12) )
      {
        v13 = &byte_140094B4F;
        if ( *(_QWORD *)(v9 + 16) )
          v13 = *(char **)(v9 + 8);
        if ( *v13 - 48 > 2 )
        {
          if ( a2 )
            sub_140002FB0(a2, "cannot redirect to channel %d on windows");
          goto LABEL_48;
        }
        switch ( *v13 )
        {
          case '0':
            v10 = *(_QWORD *)(a3 + 80);
            break;
          case '1':
            v10 = *(_QWORD *)(a3 + 88);
            break;
          case '2':
            v10 = *(_QWORD *)(a3 + 96);
            break;
        }
      }
      else
      {
        SecurityAttributes.nLength = 24;
        SecurityAttributes.lpSecurityDescriptor = nullptr;
        SecurityAttributes.bInheritHandle = 1;
        v14 = *(_DWORD *)(v9 + 32);
        if ( (v14 & 1) != 0 )
        {
          v15 = 0x80000000;
        }
        else
        {
          v15 = 0x40000000;
          if ( (v14 & 4) != 0 )
            v15 = 4;
        }
        v16 = Str1;
        if ( *(_QWORD *)(v9 + 16) )
          v16 = *(const CHAR **)(v9 + 8);
        sub_14005EDE0((WCHAR **)&lpFileName, v16);
        v10 = (__int64)CreateFileW(
                         lpFileName,
                         v15,
                         1u,
                         &SecurityAttributes,
                         (unsigned int)((*(_DWORD *)(v9 + 32) & 1) == 0) + 3,
                         0,
                         nullptr);
        if ( v10 == -1 )
        {
          if ( a2 )
          {
            LastError = GetLastError();
            v18 = (const char *)sub_14005A890(LastError);
            v19 = Str1;
            if ( *(_QWORD *)(v9 + 16) )
              v19 = *(const char **)(v9 + 8);
            sub_140002FB0(a2, "failed to redirect %d to %s: %s", *(_DWORD *)v9, v19, v18);
          }
          if ( lpFileName )
          {
            v22 = 0;
            j_free((void *)lpFileName);
          }
          goto LABEL_48;
        }
        if ( lpFileName )
        {
          v22 = 0;
          j_free((void *)lpFileName);
        }
      }
      if ( *(_DWORD *)v9 )
      {
        if ( *(_DWORD *)v9 == 1 )
        {
          *(_QWORD *)(a3 + 88) = v10;
        }
        else if ( *(_DWORD *)v9 == 2 )
        {
          *(_QWORD *)(a3 + 96) = v10;
        }
      }
      else
      {
        *(_QWORD *)(a3 + 80) = v10;
      }
      *(_DWORD *)(a3 + 60) |= 0x100u;
      v6 |= 1 << *(_DWORD *)v9;
      ++v7;
      v8 += 48;
      if ( (unsigned __int64)v7 >= a1[1] )
        goto LABEL_48;
    }
    if ( a2 )
      sub_140002FB0(a2, "cannot redirect channel %d on windows");
  }
LABEL_48:
  if ( v7 == a1[1] )
    return v6;
  if ( (v6 & 1) != 0 )
    CloseHandle(*(HANDLE *)(a3 + 80));
  if ( (v6 & 2) != 0 )
    CloseHandle(*(HANDLE *)(a3 + 88));
  if ( (v6 & 4) != 0 )
    CloseHandle(*(HANDLE *)(a3 + 96));
  return 0xFFFFFFFFLL;
}
// 140094B4F: using guessed type char byte_140094B4F;
