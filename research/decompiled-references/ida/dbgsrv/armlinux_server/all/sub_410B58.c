/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_410B58
// Address: 0x0000000000410B58

//----- (0000000000410B58) ----------------------------------------------------
__int64 __fastcall sub_410B58(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  int v5; // w24
  char *v6; // x1
  __int64 v7; // x3
  unsigned __int64 v8; // x0
  __int64 v9; // x21
  unsigned __int64 v10; // x19
  char *v11; // x3
  __int64 v12; // x21
  size_t v13; // x2
  __int64 v14; // x19
  __int64 v15; // x22
  char *v16; // x19
  unsigned __int64 v17; // x23
  unsigned __int64 v18; // x23
  char *v19; // x0
  char *v20; // x25
  const void *v21; // x1
  __int64 v22; // x19
  __int64 v23; // x2
  char *v24; // x2
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 result; // x0

  v5 = a3;
  v6 = *(char **)(a1 + 40);
  v7 = *(_QWORD *)(a1 + 72);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = ((v7 - (__int64)v6) >> 3) + 1;
  v10 = a2 + v9;
  if ( v8 <= 2 * (a2 + v9) )
  {
    v17 = v8 + 2;
    if ( v8 < a2 )
      v8 = a2;
    v18 = v17 + v8;
    if ( v18 > 0x1FFFFFFFFFFFFFFFLL )
      sub_4A0308();
    v19 = (char *)sub_49E050(8 * v18);
    v20 = v19;
    v21 = *(const void **)(a1 + 40);
    v22 = 8 * ((v18 - v10) >> 1);
    v23 = *(_QWORD *)(a1 + 72) + 8LL;
    if ( v5 )
      v22 += 8 * a2;
    v16 = &v19[v22];
    if ( (const void *)v23 != v21 )
      memmove(v16, v21, v23 - (_QWORD)v21);
    v12 = 8 * v9;
    j__free_0(*(void **)a1);
    *(_QWORD *)a1 = v20;
    *(_QWORD *)(a1 + 8) = v18;
  }
  else
  {
    v11 = (char *)(v7 + 8);
    v12 = 8 * v9;
    v13 = v11 - v6;
    v14 = 8 * ((v8 - v10) >> 1);
    v15 = v14 + 8 * a2;
    if ( v5 )
      v14 = v15;
    v16 = (char *)(*(_QWORD *)a1 + v14);
    if ( v6 <= v16 )
    {
      if ( v6 != v11 )
        memmove(&v16[v12 - v13], v6, v13);
    }
    else if ( v6 != v11 )
    {
      memmove(v16, v6, v13);
    }
  }
  *(_QWORD *)(a1 + 40) = v16;
  v24 = &v16[v12 - 8];
  v25 = *(_QWORD *)v16;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)v16;
  *(_QWORD *)(a1 + 72) = v24;
  *(_QWORD *)(a1 + 32) = v25 + 504;
  v26 = *(_QWORD *)v24;
  *(_QWORD *)(a1 + 56) = *(_QWORD *)v24;
  result = v26 + 504;
  *(_QWORD *)(a1 + 64) = result;
  return result;
}
