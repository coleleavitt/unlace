__int64 __fastcall sub_39B950(
        _QWORD *a1,
        __m128i *a2,
        __int64 **a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __m128i *v14; // rsi
  int v15; // eax
  unsigned int v16; // ebp
  __int64 *v18; // r13
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  double v28; // xmm0_8
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  double v32; // xmm4_8
  double v33; // xmm5_8
  __int64 v34; // rdi
  __int128 v35; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+10h] [rbp-B8h]
  __int64 v37; // [rsp+18h] [rbp-B0h]
  __int64 v38; // [rsp+20h] [rbp-A8h]
  __int64 v39; // [rsp+28h] [rbp-A0h]
  __m128i v40; // [rsp+30h] [rbp-98h] BYREF
  __int64 v41; // [rsp+40h] [rbp-88h]
  __int64 v42; // [rsp+48h] [rbp-80h]
  __int64 v43; // [rsp+50h] [rbp-78h]
  __int64 v44; // [rsp+58h] [rbp-70h]
  __int64 v45; // [rsp+60h] [rbp-68h] BYREF
  __int128 v46; // [rsp+68h] [rbp-60h]
  __int128 v47; // [rsp+78h] [rbp-50h]
  __int64 v48; // [rsp+88h] [rbp-40h]
  char v49; // [rsp+90h] [rbp-38h]
  unsigned __int64 v50; // [rsp+98h] [rbp-30h]

  v50 = __readfsqword(0x28u);
  v46 = 0;
  v49 = 0;
  v45 = 0;
  v48 = 0;
  v47 = 0;
  sub_39B6B0(a1, (__int64)&v45, (__m128d)0LL);
  v14 = (__m128i *)&v45;
  v15 = sub_39B1C0((__int64)a1, &v45, a2->m128i_i32[1]);
  if ( v15 == -1 || (unsigned __int64)v15 >= a1[87] )
    goto LABEL_3;
  v18 = (__int64 *)(a1[86] + 16LL * v15);
  if ( a3 )
    *a3 = v18;
  v19 = v45 + 84LL * v15;
  if ( (unsigned __int8)QT::QRect::contains(v19 + 32, a2, 0) )
  {
    v14 = (__m128i *)*v18;
    sub_192AA0(0, *v18, -1, 1u);
    v16 = 2;
  }
  else
  {
    v14 = a2;
    if ( !(unsigned __int8)QT::QRect::contains(v19 + 64, a2, 0) )
    {
LABEL_3:
      v16 = 0;
      goto LABEL_4;
    }
    v22 = a1[84];
    v36 = 0;
    v37 = -1;
    v38 = 0;
    v39 = 0;
    v35 = 0;
    v23 = sub_1F3B50(v22, 1, v20, v21, 0.0);
    v28 = 0.0;
    v44 = v23;
    v41 = 0;
    v42 = -1;
    v43 = 0;
    v40 = 0;
    if ( v23 )
      v44 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v23 + 16LL))(
              v23,
              1,
              v24,
              v25,
              v26,
              v27,
              v35,
              *((_QWORD *)&v35 + 1),
              v36,
              v37,
              v38);
    v29 = sub_1EB5B0(a1[84], 1, v24, v25, 0.0);
    v14 = (__m128i *)&v35;
    v16 = 0;
    if ( (unsigned __int8)sub_174EF0(v29, (__int64)&v35) )
    {
      v14 = &v40;
      v34 = a1[84];
      HIWORD(v42) = HIWORD(v37);
      sub_1FFC10(v34, &v40, 1, 0, v30, v31, 0.0, a5, a6, a7, v32, v33, a10, a11);
      v16 = 1;
    }
    if ( v44 )
      v28 = qfree(v44, v14->m128i_i8);
    if ( v39 )
      qfree(v39, v14->m128i_i8, v28);
  }
LABEL_4:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, v14->m128i_i8);
  }
  return v16;
}
