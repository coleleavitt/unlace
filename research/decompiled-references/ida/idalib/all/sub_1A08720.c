void __fastcall sub_1A08720(_QWORD *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // r13
  _QWORD *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __m128i *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int32 v14[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  if ( (unsigned __int8)sub_16211A0(*a1, a3, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, v14, 0xFFFFFFFFLL, 0) )
  {
    v4 = sub_168B6C0((__int64)a1);
    v5 = (_QWORD *)sub_168B6C0((__int64)a1);
    v8 = v5[294];
    v5[304] += 48LL;
    v9 = (__m128i *)((v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v5[295] >= (unsigned __int64)&v9[3] && v8 )
      v5[294] = v9 + 3;
    else
      v9 = (__m128i *)sub_986170((__int64)(v5 + 294), 48, 48, 3, v6, v7);
    sub_B13B80(v9, v4, a3, v14[0]);
    sub_B8CC60(a2, (__int64)v9, v10, v11, v12, v13);
  }
}
