__int64 __fastcall sub_283DB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 (__fastcall *v10)(__int64, __int64); // rdx
  __m128i *v11; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  __m128i v18; // xmm0
  __m128i v19; // [rsp+0h] [rbp-88h] BYREF
  __m128i v20; // [rsp+10h] [rbp-78h] BYREF
  __int64 v21; // [rsp+20h] [rbp-68h]
  __int64 v22; // [rsp+28h] [rbp-60h]
  __m128i v23[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v24; // [rsp+50h] [rbp-38h]
  __int64 v25; // [rsp+58h] [rbp-30h]
  unsigned __int64 v26; // [rsp+68h] [rbp-20h]

  v26 = __readfsqword(0x28u);
  v19 = 0;
  v20.m128i_i64[0] = 0;
  v20.m128i_i64[1] = -1;
  v21 = 0;
  v22 = 0;
  sub_1EA680(a1[2] + 384LL, a2, a3, a4, 0.0);
  v7 = sub_174EF0((__int64)a1, (__int64)&v19);
  if ( (_BYTE)v7 )
  {
    v15 = *(_QWORD *)(sub_1EA680(a1[2] + 384LL, (__int64)&v19, v5, v6, 0.0) + 40);
    v23[0] = _mm_load_si128(&v19);
    v18 = _mm_load_si128(&v20);
    v24 = v21;
    v25 = v15;
    v23[1] = v18;
    if ( v15 )
      v25 = (*(__int64 (__fastcall **)(__int64, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v15 + 16LL))(
              v15,
              &v19,
              v13,
              v14,
              v16,
              v17,
              v19.m128i_i64[0],
              v19.m128i_i64[1],
              v20.m128i_i64[0],
              v20.m128i_i64[1]);
    v11 = v23;
    sub_1F1140(a1[2] + 384LL, v23, 1u, *(double *)v18.m128i_i64, v14, v16, v17);
    if ( v25 )
      qfree(v25, v23[0].m128i_i8);
  }
  else
  {
    v10 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 408LL);
    if ( v10 == sub_2835D0 )
      (*(void (__fastcall **)(_QWORD *, _QWORD, __int64, __int64 (__fastcall *)(__int64, __int64), __int64, __int64, __int64, __int64, __int64, __int64))(*a1 + 152LL))(
        a1,
        0,
        1,
        sub_2835D0,
        v8,
        v9,
        v19.m128i_i64[0],
        v19.m128i_i64[1],
        v20.m128i_i64[0],
        v20.m128i_i64[1]);
    else
      ((void (__fastcall *)(_QWORD *, _QWORD, __int64 (__fastcall *)(__int64, __int64), __int64 (__fastcall *)(__int64, __int64), __int64, __int64, __int64, __int64, __int64, __int64))v10)(
        a1,
        0,
        v10,
        sub_2835D0,
        v8,
        v9,
        v19.m128i_i64[0],
        v19.m128i_i64[1],
        v20.m128i_i64[0],
        v20.m128i_i64[1]);
    v11 = nullptr;
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*a1 + 152LL))(a1, 0, 0);
  }
  if ( v22 )
    qfree(v22, v11->m128i_i8);
  return v7;
}
