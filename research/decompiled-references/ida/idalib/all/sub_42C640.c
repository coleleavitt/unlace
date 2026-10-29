unsigned __int64 __fastcall sub_42C640(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __m128i v5; // xmm1
  _QWORD *v6; // rbp
  unsigned __int64 i; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  __m128i v13; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-B8h] BYREF
  unsigned __int64 v15; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-A8h] BYREF
  __m128i v17; // [rsp+30h] [rbp-98h]
  _QWORD *v18; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v19[5]; // [rsp+48h] [rbp-80h] BYREF
  unsigned __int64 v20; // [rsp+98h] [rbp-30h]

  v3 = *(_QWORD **)(a2 + 1672);
  v20 = __readfsqword(0x28u);
  v13 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)sub_42B5E0, (__m128i)(unsigned __int64)sub_42FD00);
  memset(v19, 0, sizeof(v19));
  v18 = v3;
  sub_630CA0(*v3, 26, v19, 16);
  v5 = _mm_load_si128(&v13);
  v16[0] = a3;
  v16[1] = &v18;
  v17 = v5;
  if ( sub_42B5E0 )
  {
    v6 = *(_QWORD **)(a2 + 1672);
    for ( i = sub_631AD0(*v6, 19);
          i < sub_631AD0(*v6, 20);
          i = sub_3C1900(v6, i, v11, (__int64 (__fastcall **)(_QWORD, __int128 *, __int64))sub_42B180, nullptr) )
    {
      v8 = sub_3BE900(v6, i, 0);
      v14 = i;
      v15 = v8;
      if ( !v17.m128i_i64[0] )
        std::__throw_bad_function_call();
      if ( ((unsigned int (__fastcall *)(_QWORD *, __int64, unsigned __int64 *, unsigned __int64 *, __int64, __int64, __int64, __int64))v17.m128i_i64[1])(
             v16,
             a2,
             &v14,
             &v15,
             v9,
             v10,
             v13.m128i_i64[0],
             v13.m128i_i64[1]) )
      {
        break;
      }
      v11 = sub_631AD0(*v6, 20);
    }
    if ( v17.m128i_i64[0] )
      ((void (__fastcall *)(_QWORD *, _QWORD *, __int64))v17.m128i_i64[0])(v16, v16, 3);
  }
  return v20 - __readfsqword(0x28u);
}
