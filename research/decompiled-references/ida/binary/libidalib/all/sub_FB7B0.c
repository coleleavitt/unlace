__int64 __fastcall sub_FB7B0(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  _QWORD **v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  const __m128i *v11; // r11
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __m128i v20; // [rsp+0h] [rbp-58h] BYREF
  __int128 v21; // [rsp+10h] [rbp-48h]
  __int64 v22; // [rsp+20h] [rbp-38h]
  _QWORD *v23; // [rsp+28h] [rbp-30h]
  unsigned __int64 v24; // [rsp+38h] [rbp-20h]

  v24 = __readfsqword(0x28u);
  v6 = (_QWORD **)sub_FB160(a1, a2);
  if ( !v6 )
    return 0;
  v12 = *v6;
  if ( !*v6 )
    return 0;
  v13 = v11[2].m128i_i64[0];
  v23 = v12;
  v22 = v13;
  v14 = *v12;
  v20 = _mm_loadu_si128(v11);
  v15 = _mm_loadu_si128(v11 + 1);
  v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, _QWORD *))(v14 + 16))(
          v12,
          a2,
          v7,
          v8,
          v9,
          v10,
          v20.m128i_i64[0],
          v20.m128i_i64[1],
          v15.m128i_i64[0],
          v15.m128i_i64[1],
          v22,
          v12);
  v17 = *(_QWORD *)(a1 + 8);
  v23 = (_QWORD *)v16;
  (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v17 + 304LL))(v17, &v20);
  v18 = *(_QWORD *)(a1 + 8);
  HIWORD(v21) += a4;
  sub_16B280(v18 + 440, &v20);
  if ( v23 )
    qfree();
  return 1;
}

