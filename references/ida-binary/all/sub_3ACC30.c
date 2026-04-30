unsigned __int64 __fastcall sub_3ACC30(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        double a4,
        double a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rsi
  __int128 v14; // kr00_16
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  double v21; // xmm4_8
  double v22; // xmm5_8
  __m128 v23; // xmm1
  double v24; // xmm0_8
  int v25; // edx
  __int64 v26; // rax
  double v27; // xmm0_8
  double v28; // xmm0_8
  __int128 v30; // [rsp+0h] [rbp-98h] BYREF
  __int64 v31; // [rsp+10h] [rbp-88h]
  __m128i v32; // [rsp+20h] [rbp-78h] BYREF
  double v33; // [rsp+30h] [rbp-68h]
  __int64 v34; // [rsp+38h] [rbp-60h]
  int v35; // [rsp+40h] [rbp-58h]
  __int64 v36; // [rsp+48h] [rbp-50h]
  unsigned __int64 v37; // [rsp+58h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v13 = *(_QWORD *)(a1 + 1000);
  v31 = 0;
  v30 = 0;
  sub_3AC5C0((__int64 *)&v30, v13, a2);
  v14 = v30;
  v15 = v31;
  v18 = sub_1EA6A0(a1 + 384, v13, v16, v17, 0.0);
  v23 = *(__m128 *)v18;
  v24 = *(double *)(v18 + 16);
  v25 = *(_DWORD *)(v18 + 32);
  v26 = *(_QWORD *)(v18 + 24);
  v36 = v15;
  v32 = (__m128i)v23;
  v34 = v26;
  v35 = v25;
  v33 = v24;
  if ( v15 )
    v36 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  sub_1FFC10(a1, &v32, a3, 0, v19, v20, v24, v23, a6, a7, v21, v22, a10, a11);
  if ( v36 )
    v24 = qfree(v36, v32.m128i_i8);
  v27 = qfree(v14, v32.m128i_i8, v24);
  v28 = qfree(*((_QWORD *)&v14 + 1), v32.m128i_i8, v27);
  qfree(v15, v32.m128i_i8, v28);
  return v37 - __readfsqword(0x28u);
}
