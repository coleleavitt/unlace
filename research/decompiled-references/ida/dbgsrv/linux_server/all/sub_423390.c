/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423390
// Address: 0x0000000000423390

//----- (0000000000423390) ----------------------------------------------------
__int64 __fastcall sub_423390(
        __int64 a1,
        unsigned int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  char *v11; // rdi
  __int64 v12; // r12
  __int64 i; // rbp
  char *v14; // rbx
  void *v15; // rdi
  void *v16; // rdi
  __int64 v17; // r13
  _QWORD *v18; // r12
  void *v19; // rdi
  void *v20; // rdi
  __int64 v21; // rbx
  _QWORD *v22; // rbp
  void *v23; // rdi
  void *v24; // rdi
  void *v25; // rdi
  double v26; // xmm4_8
  double v27; // xmm5_8
  unsigned int v28; // ebx
  double v30; // xmm4_8
  double v31; // xmm5_8

  v11 = *(char **)(a1 + 456);
  if ( v11 )
  {
    v12 = *(_QWORD *)(a1 + 464);
    if ( v12 )
    {
      for ( i = 0; i != v12; ++i )
      {
        v14 = &v11[80 * i];
        v15 = *((void **)v14 + 5);
        if ( v15 )
        {
          *((_QWORD *)v14 + 6) = 0;
          j__free(v15);
        }
        v16 = *((void **)v14 + 2);
        if ( v16 )
        {
          *((_QWORD *)v14 + 3) = 0;
          j__free(v16);
        }
        v11 = *(char **)(a1 + 456);
      }
    }
    *(_QWORD *)(a1 + 464) = 0;
    j__free(v11);
    *(_QWORD *)(a1 + 456) = 0;
    *(_QWORD *)(a1 + 472) = 0;
  }
  v17 = *(_QWORD *)(a1 + 1176);
  *(_BYTE *)(a1 + 1414) = 0;
  while ( v17 )
  {
    v18 = (_QWORD *)v17;
    sub_4104B0(*(_QWORD **)(v17 + 24));
    v19 = *(void **)(v17 + 176);
    v17 = *(_QWORD *)(v17 + 16);
    if ( v19 )
    {
      v18[23] = 0;
      j__free(v19);
    }
    v20 = (void *)v18[19];
    if ( v20 )
    {
      v18[20] = 0;
      j__free(v20);
    }
    v21 = v18[15];
    while ( v21 )
    {
      v22 = (_QWORD *)v21;
      sub_40F970(*(_QWORD **)(v21 + 24));
      v23 = *(void **)(v21 + 40);
      v21 = *(_QWORD *)(v21 + 16);
      if ( v23 )
      {
        v22[6] = 0;
        j__free(v23);
      }
      operator delete(v22, 0x40u);
    }
    v24 = (void *)v18[10];
    if ( v24 )
    {
      v18[11] = 0;
      j__free(v24);
    }
    v25 = (void *)v18[7];
    if ( v25 )
    {
      v18[8] = 0;
      j__free(v25);
    }
    operator delete(v18, 0xD0u);
  }
  *(_QWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1184) = a1 + 1168;
  *(_QWORD *)(a1 + 1192) = a1 + 1168;
  *(_QWORD *)(a1 + 1200) = 0;
  if ( (unsigned __int8)sub_457D00((_QWORD *)a1, a3, a4, a5, a6, a7, a8, a9, a10)
    && (v28 = sub_4217E0(a1, a2, 2, *(double *)a3.m128_u64, a4, *(double *)a5.m128_u64, a6, v26, v27, a9, a10),
        (_BYTE)v28) )
  {
    sub_4223D0((_QWORD *)a1, *(double *)a3.m128_u64, a4, a5, a6, v30, v31, a9, a10);
    if ( !(unsigned __int8)sub_416030(a1) )
      sub_411B10(
        a1,
        "Debugger failed to correctly restore the instruction pointer after recovering from a broken connection.\n");
  }
  else
  {
    return 0;
  }
  return v28;
}
// 423549: variable 'a7' is possibly undefined
// 423549: variable 'a8' is possibly undefined
// 423573: variable 'v26' is possibly undefined
// 423573: variable 'v27' is possibly undefined
// 423584: variable 'v30' is possibly undefined
// 423584: variable 'v31' is possibly undefined
