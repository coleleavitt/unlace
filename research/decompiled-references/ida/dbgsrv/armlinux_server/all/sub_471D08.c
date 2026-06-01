/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471D08
// Address: 0x0000000000471D08

//----- (0000000000471D08) ----------------------------------------------------
__int64 __fastcall sub_471D08(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  __int64 v5; // x21
  unsigned __int64 v6; // x3
  int v7; // w23
  __int64 v8; // x20
  __int64 v9; // x23
  char *v10; // x22
  __int64 v11; // x21
  char *v12; // x0

  result = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
  v5 = (int)result;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = result;
  if ( (int)result > v6 )
  {
    if ( (unsigned __int64)(int)result > *(_QWORD *)(a1 + 16) )
    {
      v12 = (char *)sub_491288(a1, *(void **)a1, (int)result, 0x20u);
      *(_QWORD *)a1 = v12;
      result = (__int64)memset(&v12[32 * *(_QWORD *)(a1 + 8)], 0, 32 * (v5 - *(_QWORD *)(a1 + 8)));
    }
    else
    {
      result = (__int64)memset((void *)(*(_QWORD *)a1 + 32 * v6), 0, 32 * ((int)result - v6));
    }
    *(_QWORD *)(a1 + 8) = v5;
  }
  else if ( (int)result != v6 && (int)result < v6 )
  {
    *(_QWORD *)(a1 + 8) = (int)result;
  }
  if ( v7 > 0 )
  {
    v8 = 0;
    v9 = 32 * ((unsigned int)(v7 - 1) + 1LL);
    do
    {
      v10 = *(char **)a1;
      v11 = *(_QWORD *)a1 + v8;
      *(_QWORD *)&v10[v8] = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
      v8 += 32;
      *(_QWORD *)(v11 + 8) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
      *(_QWORD *)(v11 + 16) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
      result = (unsigned int)sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) != 0;
      *(_BYTE *)(v11 + 24) = result;
    }
    while ( v9 != v8 );
  }
  return result;
}
