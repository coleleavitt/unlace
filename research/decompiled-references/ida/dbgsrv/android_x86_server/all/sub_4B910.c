/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4B910
// Address: 0x0004B910

//----- (0004B910) --------------------------------------------------------
int __cdecl sub_4B910(_DWORD *a1)
{
  int v1; // ecx
  int v2; // eax
  _DWORD *v3; // esi
  int v4; // eax
  int v5; // ecx
  int *v6; // edx
  char *v7; // eax
  int v8; // ecx
  int *v9; // edi
  int v10; // ecx
  int result; // eax
  int *v12; // esi
  int v13; // eax
  int *v14; // ecx
  int v15; // esi
  int *v16; // edi
  void *v17[9]; // [esp+18h] [ebp-24h] BYREF

  v17[4] = (void *)__readgsdword(0x14u);
  sub_4BD40((int)a1, 2);
  v1 = a1[45];
  v2 = *(unsigned __int16 *)(a1[44] + 2 * v1 - 2);
  if ( v1 )
    a1[45] = v1 - 1;
  *(_DWORD *)(*(_DWORD *)(a1[47] + 4 * a1[48] - 4) + 12) = v2;
  sub_4BF50(v17, a1 + 22);
  if ( v17[0] )
  {
    v17[1] = nullptr;
    qfree(v17[0]);
    v17[0] = nullptr;
    v17[2] = nullptr;
  }
  v3 = (_DWORD *)a1[25];
  while ( v3[3] )
  {
    v3 = *(_DWORD **)(*(_DWORD *)(a1[15] + 36) + 4 * *(_DWORD *)(a1[25] + 12));
    v4 = sub_5C350(v3, (int)(v3 + 5));
    v5 = a1[48];
    v6 = *(int **)(a1[47] + 4 * v5 - 4);
    if ( v4 != 0x7FFFFFFF )
    {
      if ( v5 )
        a1[48] = v5 - 1;
      v12 = v6;
      v13 = sub_4C980((int)a1, v6, 0, 0);
      v14 = v12;
      v15 = v13;
      if ( v14 )
      {
        v16 = v14;
        sub_4AEB0(v14);
        operator delete(v16);
      }
      return set_qerrno(v15);
    }
    if ( v6[3] > 0 )
    {
      if ( v3[6] )
        v7 = (char *)v3[5];
      else
        v7 = byte_EF875;
      set_error_string(0, v7);
      v15 = 56;
      return set_qerrno(v15);
    }
  }
  v8 = a1[48];
  v9 = *(int **)(a1[47] + 4 * v8 - 4);
  if ( v8 )
  {
    v10 = v8 - 1;
    a1[48] = v10;
    if ( !v9 )
      goto LABEL_14;
    goto LABEL_13;
  }
  v10 = 0;
  if ( v9 )
  {
LABEL_13:
    sub_4AEB0(v9);
    operator delete(v9);
    v10 = a1[48];
  }
LABEL_14:
  result = 0;
  if ( v10 )
  {
    if ( !(_BYTE)under_debugger )
      interr(270);
    BUG();
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
