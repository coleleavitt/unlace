__int64 __fastcall sub_FA570(_QWORD *a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebp
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i v12; // xmm0
  __m128i v13; // [rsp+0h] [rbp-88h] BYREF
  __m128i v14; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-68h]
  __int64 v16; // [rsp+28h] [rbp-60h]
  _OWORD v17[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+50h] [rbp-38h]
  __int64 v19; // [rsp+58h] [rbp-30h]
  unsigned __int64 v20; // [rsp+68h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  v13 = 0;
  v14.m128i_i64[0] = 0;
  v14.m128i_i64[1] = -1;
  v15 = 0;
  v16 = 0;
  sub_15D8D0(a1[1] + 440LL);
  v3 = sub_91180((__int64)a1, (__int64)&v13);
  if ( (_BYTE)v3 )
  {
    v9 = *(_QWORD *)(sub_15D8D0(a1[1] + 440LL) + 40);
    v17[0] = _mm_load_si128(&v13);
    v12 = _mm_load_si128(&v14);
    v18 = v15;
    v19 = v9;
    v17[1] = v12;
    if ( v9 )
      v19 = (*(__int64 (__fastcall **)(__int64, __m128i *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*(_QWORD *)v9 + 16LL))(
              v9,
              &v13,
              v7,
              v8,
              v10,
              v11,
              v13.m128i_i64[0],
              v13.m128i_i64[1],
              v14.m128i_i64[0],
              v14.m128i_i64[1]);
    sub_162240(a1[1] + 440LL, v17, 1);
    if ( v19 )
      qfree();
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *, _QWORD, _QWORD, __int64, __int64, __int64, __int64, __int64, __int64, __int64))(*a1 + 72LL))(
      a1,
      0,
      0,
      v2,
      v4,
      v5,
      v13.m128i_i64[0],
      v13.m128i_i64[1],
      v14.m128i_i64[0],
      v14.m128i_i64[1]);
  }
  if ( v16 )
    qfree();
  return v3;
}

