/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140034EA0
// Address: 0x0000000140034EA0

//----- (0000000140034EA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_140034EA0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  __int128 v5; // xmm0
  char *v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  result = *(_QWORD *)(a1 + 8);
  if ( a2 <= result )
  {
    if ( a2 == result )
      return result;
  }
  else
  {
    if ( a2 > *(_QWORD *)(a1 + 16) )
      *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, a2, 0x10u);
    memset((void *)(*(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8)), 0, 16 * (a2 - *(_QWORD *)(a1 + 8)));
    result = a2;
    *(_QWORD *)(a1 + 8) = a2;
  }
  v5 = 0;
  if ( a2 < result )
    goto LABEL_21;
  if ( a2 <= result )
    return result;
  v6 = *(char **)a1;
  v7 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int64)v12 < *(_QWORD *)a1 || v12 >= &v6[16 * v7] )
  {
    if ( a2 > v7 )
    {
      *(_QWORD *)a1 = sub_14005ABE0(a1, v6, a2, 0x10u);
      v5 = 0;
    }
    result = *(_QWORD *)(a1 + 8);
    if ( result < a2 )
    {
      v10 = 16 * result;
      v11 = a2 - result;
      do
      {
        result = *(_QWORD *)a1;
        v10 += 16;
        *(_OWORD *)(*(_QWORD *)a1 + v10 - 16) = v5;
        --v11;
      }
      while ( v11 );
    }
    goto LABEL_21;
  }
  if ( a2 > v7 )
  {
    *(_QWORD *)a1 = sub_14005ABE0(a1, v6, a2, 0x10u);
    v5 = 0;
  }
  result = *(_QWORD *)(a1 + 8);
  if ( result >= a2 )
  {
LABEL_21:
    *(_QWORD *)(a1 + 8) = a2;
    return result;
  }
  v8 = 16 * result;
  v9 = a2 - result;
  do
  {
    result = *(_QWORD *)a1;
    v8 += 16;
    *(_OWORD *)(*(_QWORD *)a1 + v8 - 16) = v5;
    --v9;
  }
  while ( v9 );
  *(_QWORD *)(a1 + 8) = a2;
  return result;
}
