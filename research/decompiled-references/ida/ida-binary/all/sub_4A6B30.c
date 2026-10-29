unsigned __int64 __fastcall sub_4A6B30(
        __int64 *a1,
        char *a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        char a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        unsigned int a15)
{
  __int64 v17; // rax
  double v19; // xmm0_8
  double v20; // xmm4_8
  double v21; // xmm5_8
  double v22; // xmm4_8
  double v23; // xmm5_8
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 v26; // rbx
  int v29[2]; // [rsp+10h] [rbp-90h] BYREF
  __int128 v30; // [rsp+18h] [rbp-88h]
  __int64 v31; // [rsp+28h] [rbp-78h]
  __int64 v32; // [rsp+30h] [rbp-70h] BYREF
  __int128 v33; // [rsp+38h] [rbp-68h]
  __int64 v34; // [rsp+48h] [rbp-58h]
  __int128 v35; // [rsp+50h] [rbp-50h]
  char v36; // [rsp+60h] [rbp-40h]
  unsigned __int64 v37; // [rsp+68h] [rbp-38h]

  v17 = *a1;
  v37 = __readfsqword(0x28u);
  v32 = 0;
  v34 = 0;
  v36 = 0;
  v33 = 0;
  v35 = 0;
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(v17 + 624))(a1, &v32, 7);
  v19 = 0.0;
  v31 = -1;
  *(_QWORD *)v29 = 0;
  v30 = 0;
  sub_4A5780((__int64)a1, (void **)v29, (__int64)&v32, a6 | 2, nullptr, 0, (__m128)0LL, a8, a9, a10, v20, v21, a13, a14);
  sub_4A22B0(
    (__int64)a1,
    a2,
    a3,
    a4,
    a5,
    (__int64)v29,
    0.0,
    a8,
    a9,
    a10,
    v22,
    v23,
    a13,
    a14,
    (unsigned __int64)&v32,
    0,
    a15);
  if ( *(_QWORD *)v29 )
  {
    *(_QWORD *)&v30 = 0;
    v19 = qfree(*(_QWORD *)v29, a2);
  }
  sub_4DE2C0();
  v24 = v32;
  if ( v32 )
  {
    v25 = v33;
    if ( (_QWORD)v33 )
    {
      v26 = 0;
      do
      {
        ++v26;
        sub_4DE2C0();
        v24 = v32;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v24, a2, v19);
  }
  return v37 - __readfsqword(0x28u);
}
