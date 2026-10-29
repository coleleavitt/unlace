/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_418D10
// Address: 0x00418D10

//----- (00418D10) --------------------------------------------------------
char __cdecl sub_418D10(DWORD *a1, unsigned int a2, int a3)
{
  int (__stdcall **v3)(int, int *); // edi
  DWORD *v4; // eax
  _BYTE *v5; // eax
  int v6; // ebx
  DWORD LastError; // esi
  int v8; // eax
  int v9; // ecx
  bool v10; // zf
  DWORD *v11; // eax
  char *v12; // eax
  char *v13; // eax
  char result; // al
  DWORD v15; // [esp-4h] [ebp-50h]
  DWORD v16; // [esp+1Ch] [ebp-30h]
  int v17; // [esp+20h] [ebp-2Ch] BYREF
  int v18; // [esp+24h] [ebp-28h]
  int v19; // [esp+28h] [ebp-24h]
  _BYTE *v20; // [esp+2Ch] [ebp-20h]
  unsigned int v21; // [esp+30h] [ebp-1Ch]
  int v22; // [esp+34h] [ebp-18h]
  DWORD *v23; // [esp+38h] [ebp-14h]
  char v24; // [esp+3Fh] [ebp-Dh]
  int v25; // [esp+48h] [ebp-4h]
  int v26[72]; // [esp+4Ch] [ebp+0h] BYREF
  CHAR MultiByteStr[260]; // [esp+16Ch] [ebp+120h] BYREF

  v3 = (int (__stdcall **)(int, int *))dword_4B6A1C;
  v4 = a1;
  v23 = a1;
  v21 = a2;
  if ( !dword_4B6A1C )
  {
    v5 = sub_4627C2(0x20u);
    v20 = v5;
    v25 = 0;
    if ( v5 )
      v3 = (int (__stdcall **)(int, int *))sub_417F30(v5);
    else
      v3 = nullptr;
    v4 = v23;
    dword_4B6A1C = (int)v3;
  }
  v6 = -1;
  LastError = 0;
  v15 = *v4;
  v25 = 1;
  v16 = v15;
  v8 = sub_418030(v15);
  v9 = 8;
  if ( v8 == 1 )
    v9 = 24;
  v10 = *((_BYTE *)v3 + 28) == 0;
  v20 = (_BYTE *)v9;
  if ( v10 )
    goto LABEL_13;
  v22 = 0;
  while ( 1 )
  {
    v6 = (*v3)(v9, (int *)v16);
    if ( v6 != -1 )
      break;
    LastError = GetLastError();
    if ( LastError == 24 )
    {
      v9 = (int)v20;
      if ( ++v22 < 5 )
        continue;
    }
    goto LABEL_13;
  }
  v26[0] = 548;
  if ( !v3[3](v6, v26) )
  {
    LastError = GetLastError();
LABEL_13:
    v11 = v23;
    if ( LastError == 299 && !v23[4] )
      v23[4] = 8;
    if ( v11[2] )
      v12 = (char *)v11[1];
    else
      v12 = (char *)::MultiByteStr;
    sub_45ACB0(v21, v12, a3);
    result = 0;
    goto LABEL_27;
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  LOBYTE(v25) = 3;
  sub_459B00((int)&v17, MultiByteStr, 0, 0xFDE9u);
  v13 = (char *)::MultiByteStr;
  if ( v18 )
    v13 = (char *)v17;
  sub_45ACB0(v21, v13, a3);
  LOBYTE(v25) = 4;
  if ( v17 )
  {
    v18 = 0;
    sub_453A20((void *)v17);
  }
  result = 1;
LABEL_27:
  v24 = result;
  v10 = *((_BYTE *)v3 + 28) == 0;
  v25 = 5;
  if ( !v10 && v6 != -1 )
  {
    CloseHandle((HANDLE)v6);
    return v24;
  }
  return result;
}
// 4B6A1C: using guessed type int dword_4B6A1C;
