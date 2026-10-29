__int64 __fastcall sub_4A6DB0(
        __int64 *a1,
        __int64 *a2,
        char a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v12; // rax
  double v13; // xmm4_8
  double v14; // xmm5_8
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __m128 v20; // xmm1
  __int64 v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rbx
  int v25[2]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v26[24]; // [rsp+8h] [rbp-80h] BYREF
  int v27[2]; // [rsp+20h] [rbp-68h] BYREF
  int v28[4]; // [rsp+28h] [rbp-60h]
  int v29[2]; // [rsp+38h] [rbp-50h]
  int v30[4]; // [rsp+40h] [rbp-48h]
  int v31; // [rsp+50h] [rbp-38h]
  __int64 v32; // [rsp+58h] [rbp-30h]

  v32 = __readfsqword(0x28u);
  sub_4E4770(a1 + 13);
  v12 = *a1;
  *(_QWORD *)v27 = 0;
  *(_QWORD *)v29 = 0;
  LOBYTE(v31) = 0;
  *(_OWORD *)v28 = 0;
  *(_OWORD *)v30 = 0;
  (*(void (__fastcall **)(__int64 *, int *, _QWORD))(v12 + 624))(a1, v27, a3 & 3);
  *(_QWORD *)v25 = 0;
  *(_OWORD *)v26 = 0;
  *(_QWORD *)&v26[16] = -1;
  sub_4A5780(
    (__int64)a1,
    (void **)v25,
    (__int64)v27,
    (a3 & 4) == 0 ? 1 : 5,
    nullptr,
    0,
    (__m128)0LL,
    a5,
    a6,
    a7,
    v13,
    v14,
    a10,
    a11);
  v15 = *(_QWORD *)v26;
  v16 = *(_QWORD *)v25;
  if ( a2 )
  {
    v17 = *a2;
    v18 = *(_QWORD *)&v26[16];
    *a2 = *(_QWORD *)v25;
    v19 = _mm_loadu_si128((const __m128i *)a2 + 1);
    v20 = _mm_loadh_ps((const double *)&v26[8]);
    *(_QWORD *)v25 = v17;
    v16 = v17;
    a2[3] = v18;
    *(__m128 *)(a2 + 1) = v20;
    *(__m128i *)&v26[8] = v19;
  }
  if ( v16 )
  {
    *(_QWORD *)v26 = 0;
    qfree(v16, (const char *)v25);
  }
  sub_4DE2C0();
  v21 = *(_QWORD *)v27;
  if ( *(_QWORD *)v27 )
  {
    v22 = *(_QWORD *)v28;
    if ( *(_QWORD *)v28 )
    {
      v23 = 0;
      do
      {
        ++v23;
        sub_4DE2C0();
        v21 = *(_QWORD *)v27;
      }
      while ( v22 != v23 );
    }
    *(_QWORD *)v28 = 0;
    qfree(v21, (const char *)v25);
  }
  return v15;
}
