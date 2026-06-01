/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442DA0
// Address: 0x0000000000442DA0

//----- (0000000000442DA0) ----------------------------------------------------
unsigned __int64 __fastcall sub_442DA0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  unsigned __int64 v12; // r13
  unsigned __int8 *v14; // rdi
  unsigned __int64 v15; // rax
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned __int64 v19; // r12
  __int64 v20; // rdi
  unsigned __int8 *v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int8 *v23; // rdi
  unsigned __int64 v24; // r12
  unsigned __int64 v25; // rdi
  unsigned __int8 v26[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v27; // [rsp+8h] [rbp-50h]
  __int64 v28; // [rsp+18h] [rbp-40h]
  unsigned __int64 v29; // [rsp+28h] [rbp-30h]

  v12 = *(_QWORD *)(a1 + 8);
  v29 = __readfsqword(0x28u);
  if ( a2 < v12 )
  {
    v24 = a2;
    do
    {
      v25 = v24++;
      sub_441540(*(_QWORD *)a1 + 32 * v25, a4, a5, a6, a7, a8, a9, a10, a11);
    }
    while ( v12 != v24 );
    *(_QWORD *)(a1 + 8) = a2;
  }
  else if ( v12 < a2 )
  {
    v14 = *(unsigned __int8 **)a1;
    v15 = *(_QWORD *)(a1 + 16);
    if ( a3 < v14 || a3 >= &v14[32 * v15] )
    {
      if ( v15 >= a2
        || (v21 = (unsigned __int8 *)sub_481540(a1, v14, a2, 0x20u),
            v12 = *(_QWORD *)(a1 + 8),
            *(_QWORD *)a1 = v21,
            v14 = v21,
            v12 < a2) )
      {
        while ( 1 )
        {
          v22 = v12++;
          v23 = &v14[32 * v22];
          *v23 = 2;
          *((_QWORD *)v23 + 3) = 0;
          *(_OWORD *)(v23 + 8) = 0;
          sub_4418C0(v23, a3, a4, (__m128)0LL, a6, a7, a8, a9, a10, a11);
          if ( v12 >= a2 )
            break;
          v14 = *(unsigned __int8 **)a1;
        }
        *(_QWORD *)(a1 + 8) = a2;
      }
      else
      {
        *(_QWORD *)(a1 + 8) = a2;
      }
    }
    else
    {
      v26[0] = 2;
      v28 = 0;
      v27 = 0;
      sub_4418C0(v26, a3, 0.0, a5, a6, a7, a8, a9, a10, a11);
      if ( *(_QWORD *)(a1 + 16) < a2 )
        *(_QWORD *)a1 = sub_481540(a1, *(void **)a1, a2, 0x20u);
      v19 = *(_QWORD *)(a1 + 8);
      if ( v19 < a2 )
      {
        do
        {
          a6 = 0;
          v20 = *(_QWORD *)a1 + 32 * v19;
          *(_BYTE *)v20 = 2;
          *(_QWORD *)(v20 + 24) = 0;
          *(_OWORD *)(v20 + 8) = 0;
          sub_4418C0((unsigned __int8 *)v20, v26, 0.0, a5, (__m128)0LL, a7, v17, v18, a10, a11);
          ++v19;
        }
        while ( a2 != v19 );
      }
      *(_QWORD *)(a1 + 8) = a2;
      sub_441540((__int64)v26, 0.0, a5, a6, a7, v17, v18, a10, a11);
    }
  }
  return v29 - __readfsqword(0x28u);
}
// 442E70: variable 'v17' is possibly undefined
// 442E70: variable 'v18' is possibly undefined
// 442EE7: variable 'a8' is possibly undefined
// 442EE7: variable 'a9' is possibly undefined
