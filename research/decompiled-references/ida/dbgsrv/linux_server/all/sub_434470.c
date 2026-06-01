/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_434470
// Address: 0x0000000000434470

//----- (0000000000434470) ----------------------------------------------------
__int64 __fastcall sub_434470(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbp
  __int64 v4; // rax
  int *v5; // r12
  __int64 v6; // rax
  const char *v7; // rsi

  sub_433550(a1);
  v1 = *(int *)(a1[23] + 48LL);
  if ( !(_DWORD)v1 )
  {
    v4 = a1[44];
    v5 = *(int **)(a1[43] + 8 * v4 - 8);
LABEL_8:
    if ( v4 )
    {
      v6 = v4 - 1;
      a1[44] = v6;
      if ( !v5 )
      {
LABEL_11:
        if ( v6 )
        {
          if ( !byte_4C94E1 )
            sub_481AC0(270);
          BUG();
        }
        return 0;
      }
    }
    else if ( !v5 )
    {
      return 0;
    }
    sub_433250((__int64)v5);
    operator delete(v5, 0x20u);
    v6 = a1[44];
    goto LABEL_11;
  }
  while ( 1 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1[13] + 64LL) + 8 * v1);
    if ( (unsigned int)sub_43D490(v2, v2 + 56) != 0x7FFFFFFF )
      return sub_434330((__int64)a1, 0, 0);
    v4 = a1[44];
    v5 = *(int **)(a1[43] + 8 * v4 - 8);
    if ( v5[6] > 0 )
      break;
    if ( !*(_DWORD *)(v2 + 48) )
      goto LABEL_8;
    v1 = *(int *)(a1[23] + 48LL);
  }
  v7 = s1;
  if ( *(_QWORD *)(v2 + 64) )
    v7 = *(const char **)(v2 + 56);
  sub_479F30(0, v7);
  return sub_479EB0(0x38u);
}
// 4C94E1: using guessed type char byte_4C94E1;
