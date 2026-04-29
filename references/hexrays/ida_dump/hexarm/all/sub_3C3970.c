__int64 __fastcall sub_3C3970(
        _QWORD *a1,
        __int64 a2,
        const char *a3,
        double a4,
        __m128 a5,
        __m128i a6,
        __m128i a7,
        double a8,
        double a9,
        __m128 a10)
{
  const char *v12; // rcx
  double v13; // xmm4_8
  double v14; // xmm5_8
  unsigned int v15; // ebx
  __m128i v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // r12
  __int64 v20; // r13
  __int64 i; // rbx
  __int64 v22; // rax
  __int64 v23; // rdi
  __m128i v24; // xmm2
  __int64 v25; // rdx
  __int64 v26; // r15
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdi
  __m128i v30; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+10h] [rbp-B0h] BYREF
  __int128 v32; // [rsp+18h] [rbp-A8h]
  __int64 v33; // [rsp+30h] [rbp-90h] BYREF
  size_t v34; // [rsp+38h] [rbp-88h]
  __int64 v35; // [rsp+50h] [rbp-70h] BYREF
  __int128 v36; // [rsp+58h] [rbp-68h]
  __int64 v37; // [rsp+70h] [rbp-50h] BYREF
  __m128i v38; // [rsp+78h] [rbp-48h] BYREF
  unsigned __int64 v39; // [rsp+88h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  v32 = 0;
  v31 = 0;
  sub_3AE110(&v31, (__int64)a3, 0);
  sub_410650(&v33, &v31);
  v35 = 0;
  v36 = 0;
  get_ea_name(&v35, a3, 21, 0);
  if ( !v34 )
  {
    sub_2B5230((__int64)"No %ss to %a[%s] found from functions", "xref", 0.0, a3);
LABEL_5:
    v15 = 0;
    goto LABEL_6;
  }
  v12 = (const char *)&unk_4130E1;
  if ( v34 == 1 )
    v12 = (const char *)&unk_412793;
  if ( (unsigned int)sub_33D600(
                       1u,
                       (__int64)"AUTOHIDE REGISTRY\nDecompile %zu function%s that %s %a[%s]?",
                       v34,
                       v12,
                       "xref",
                       0.0,
                       a3) != 1 )
    goto LABEL_5;
  sub_3B96C0((__int64)&v37, a2, (__int64)a3, (__int64)&v33, 0.0, a5, a6, a7, v13, v14, a10);
  v17 = _mm_loadu_si128(&v38);
  v18 = *a1;
  v19 = v37;
  v38 = 0;
  v37 = 0;
  v30 = v17;
  if ( v18 )
  {
    v20 = a1[1];
    if ( v20 )
    {
      for ( i = 0; i != v20; ++i )
      {
        v22 = v18 + 48 * i;
        v23 = *(_QWORD *)(v22 + 16);
        if ( v23 )
        {
          *(_QWORD *)(v22 + 24) = 0;
          qfree(v23);
          v18 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v18);
    v24 = _mm_load_si128(&v30);
    v25 = v37;
    *a1 = v19;
    *(__m128i *)(a1 + 1) = v24;
    if ( v25 )
    {
      v26 = v38.m128i_i64[0];
      if ( v38.m128i_i64[0] )
      {
        v27 = 0;
        do
        {
          v28 = v25 + 48 * v27;
          v29 = *(_QWORD *)(v28 + 16);
          if ( v29 )
          {
            *(_QWORD *)(v28 + 24) = 0;
            qfree(v29);
            v25 = v37;
          }
          ++v27;
        }
        while ( v26 != v27 );
      }
      v38.m128i_i64[0] = 0;
      qfree(v25);
    }
  }
  else
  {
    *a1 = v19;
    *(__m128i *)(a1 + 1) = v17;
  }
  v15 = 1;
LABEL_6:
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  if ( v33 )
  {
    v34 = 0;
    qfree(v33);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  return v15;
}
