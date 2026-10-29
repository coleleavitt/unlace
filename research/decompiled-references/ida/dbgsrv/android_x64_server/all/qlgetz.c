/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qlgetz
// Address: 0x00000000000BEAC0

//----- (00000000000BEAC0) ----------------------------------------------------
__int64 __fastcall qlgetz(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbp
  unsigned __int64 v7; // r13
  char v8; // al
  __int64 v10; // [rsp+0h] [rbp-48h]
  char ptr; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v12; // [rsp+10h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  if ( a4 <= 0 )
    return a3;
  if ( a2 == -1 )
  {
    v10 = 0;
    goto LABEL_11;
  }
  if ( !a1 )
  {
    v10 = -1;
    goto LABEL_11;
  }
  if ( *(int *)a1 >= 2 )
  {
    v6 = *(_QWORD *)(a1 + 24);
LABEL_10:
    v10 = v6;
    *(_QWORD *)(a1 + 24) = a2;
    goto LABEL_11;
  }
  v6 = -1;
  if ( (unsigned int)qfseek(*(FILE **)(a1 + 8), 0, 1) )
  {
    if ( *(int *)a1 >= 2 )
      goto LABEL_10;
  }
  else
  {
    v6 = qftell(*(FILE **)(a1 + 8));
    if ( *(int *)a1 >= 2 )
      goto LABEL_10;
  }
  v10 = v6;
  if ( !(unsigned int)qfseek(*(FILE **)(a1 + 8), a2, 0) )
    qftell(*(FILE **)(a1 + 8));
LABEL_11:
  v7 = 1;
  while ( v7 < a4 && a1 )
  {
    if ( *(int *)a1 < 2 )
    {
      if ( qfread(*(FILE **)(a1 + 8), &ptr, 1) != 1 )
        break;
    }
    else if ( sub_BE3E0(a1, &ptr, 1) != 1 )
    {
      break;
    }
    v8 = ptr;
    *(_BYTE *)(a3 + v7++ - 1) = ptr;
    if ( !v8 )
      goto LABEL_19;
  }
  *(_BYTE *)(a3 + v7 - 1) = 0;
  if ( !a1 )
    return a3;
LABEL_19:
  if ( a2 != -1 )
  {
    if ( *(int *)a1 < 2 )
    {
      if ( !(unsigned int)qfseek(*(FILE **)(a1 + 8), v10, 0) )
        qftell(*(FILE **)(a1 + 8));
    }
    else
    {
      *(_QWORD *)(a1 + 24) = v10;
    }
  }
  return a3;
}
// BEBBC: conditional instruction was optimized away because rbx.8!=0
