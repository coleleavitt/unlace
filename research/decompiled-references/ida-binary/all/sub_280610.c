unsigned __int64 __fastcall sub_280610(
        __int64 *a1,
        __int64 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v12; // rdi
  int v13; // r13d
  _DWORD *v14; // rbx
  _DWORD *v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  double v24; // xmm0_8
  __int64 v25; // rax
  __m128i *v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  double v29; // xmm4_8
  double v30; // xmm5_8
  __int64 v32; // rdi
  __int64 v33; // rax
  __int128 v34; // [rsp+0h] [rbp-98h] BYREF
  __int64 v35; // [rsp+10h] [rbp-88h]
  __int64 v36; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+20h] [rbp-78h]
  __int64 v38; // [rsp+28h] [rbp-70h]
  __m128i v39; // [rsp+30h] [rbp-68h] BYREF
  __int64 v40; // [rsp+40h] [rbp-58h]
  __int64 v41; // [rsp+48h] [rbp-50h]
  __int64 v42; // [rsp+50h] [rbp-48h]
  __int64 v43; // [rsp+58h] [rbp-40h]
  unsigned __int64 v44; // [rsp+68h] [rbp-30h]

  v44 = __readfsqword(0x28u);
  v10 = a1[8];
  if ( v10 && *(_DWORD *)(a2 + 64) == 1 )
  {
    v12 = *(_QWORD *)(v10 + 888);
    v13 = 10;
    if ( v12 )
      v13 = (int)sub_2856C0(v12, a2);
    v14 = (_DWORD *)a1[9];
    v15 = &v14[2 * a1[10]];
    if ( v14 != v15 )
    {
      while ( 1 )
      {
        QT::QEventPoint::position(*(QT::QEventPoint **)(a2 + 48));
        *(double *)a4.m128_u64 = *(double *)a4.m128_u64
                               + COERCE_DOUBLE(a4.m128_u64[0] & 0x8000000000000000LL | 0x3FE0000000000000LL);
        v17 = (unsigned int)(int)*(double *)a4.m128_u64;
        if ( *v14 <= (int)v17 && v13 + *v14 >= (int)v17 )
          break;
        v14 += 2;
        if ( v15 == v14 )
          return v44 - __readfsqword(0x28u);
      }
      v18 = a1[8];
      v35 = 0;
      v36 = -1;
      v37 = 0;
      v38 = 0;
      v34 = 0;
      v19 = sub_1F3B50(v18, 1, v17, v16, 0.0);
      v24 = 0.0;
      v43 = v19;
      v40 = 0;
      v41 = -1;
      v42 = 0;
      v39 = 0;
      if ( v19 )
        v43 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v19 + 16LL))(
                v19,
                1,
                v20,
                v21,
                v22,
                v23,
                v34,
                *((_QWORD *)&v34 + 1),
                v35,
                v36,
                v37);
      v25 = sub_1EB5B0(a1[8], 1, v20, v21, 0.0);
      v26 = (__m128i *)&v34;
      if ( (unsigned __int8)sub_174EF0(v25, (__int64)&v34) )
      {
        v32 = a1[8];
        v26 = &v39;
        HIWORD(v41) = HIWORD(v36);
        sub_1FFC10(v32, &v39, 1, 0, v27, v28, 0.0, a4, a5, a6, v29, v30, a9, a10);
        v33 = v14[1] == 1 ? sub_5313F0(unk_8CA140) : sub_5313F0(unk_8CA148);
        if ( v33 )
          sub_5314B0(v33);
      }
      if ( v43 )
        v24 = qfree(v43, v26->m128i_i8);
      if ( v38 )
        qfree(v38, v26->m128i_i8, v24);
    }
  }
  return v44 - __readfsqword(0x28u);
}
