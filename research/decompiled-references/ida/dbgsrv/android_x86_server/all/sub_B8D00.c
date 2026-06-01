/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B8D00
// Address: 0x000B8D00

//----- (000B8D00) --------------------------------------------------------
int __cdecl sub_B8D00(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // eax
  unsigned int v5; // ecx
  char *v6; // eax
  int v7; // edi
  unsigned int v8; // edx
  unsigned int v9; // eax
  _DWORD v10[2]; // [esp+8h] [ebp-24h] BYREF
  unsigned int v11[7]; // [esp+10h] [ebp-1Ch] BYREF

  v11[2] = __readgsdword(0x14u);
  result = sub_B8BC0(a1, a2, a3, a4);
  if ( a2 != a3 && !result )
  {
    v11[0] = a2;
    v11[1] = a4 + a2;
    if ( a4 + a2 > a2 )
    {
      v5 = *(_DWORD *)(a1 + 4);
      if ( !v5 )
        goto LABEL_8;
      v6 = *(char **)a1;
      v7 = 0;
      while ( 1 )
      {
        v8 = *(_DWORD *)&v6[8 * v7 + 4];
        if ( v8 >= a2 )
          break;
        if ( ++v7 >= v5 )
          goto LABEL_8;
      }
      v9 = *(_DWORD *)&v6[8 * v7];
      if ( v8 == v9 || v9 > a2 || a4 + a2 - 1 > v8 - 1 )
      {
LABEL_8:
        if ( !(_BYTE)under_debugger )
          interr(42);
        BUG();
      }
    }
    rangeset_t_sub((char **)a1, v11);
    v10[0] = a3;
    v10[1] = a3 + a4;
    rangeset_t_add((_DWORD *)a1, v10);
    return 0;
  }
  return result;
}
// 13E34C: using guessed type int under_debugger;
