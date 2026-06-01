unsigned __int64 __fastcall sub_27A540(__int64 *a1, const char *a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __m128i v14; // xmm1
  __int64 v15; // rbp
  __int64 v16; // rdi
  double v17; // xmm0_8
  __m128i v18; // xmm1
  __int64 v19; // rdi
  __int64 v21; // rax
  __m128i v22; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v23; // [rsp+10h] [rbp-68h] BYREF
  __int64 v24; // [rsp+18h] [rbp-60h]
  __int64 v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+30h] [rbp-48h] BYREF
  __m128i v27; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+48h] [rbp-30h]

  v5 = *a1;
  v28 = __readfsqword(0x28u);
  v25 = a3;
  v7 = a1[1];
  v23 = &idaplace_t___vtable;
  LODWORD(v24) = 0;
  if ( a1[2] < (unsigned __int64)(v7 + 1) )
  {
    v21 = qvector_reserve(a1, v5, v7 + 1, 272);
    v7 = a1[1];
    *a1 = v21;
    v5 = v21;
  }
  v8 = v5 + 272 * v7;
  *(_OWORD *)v8 = 0;
  *(_OWORD *)(v8 + 16) = 0;
  *(_OWORD *)(v8 + 56) = 0;
  *(_OWORD *)(v8 + 80) = 0;
  *(_OWORD *)(v8 + 96) = 0;
  *(_OWORD *)(v8 + 112) = 0;
  *(_OWORD *)(v8 + 136) = 0;
  *(_OWORD *)(v8 + 152) = 0;
  *(_OWORD *)(v8 + 168) = 0;
  *(_OWORD *)(v8 + 192) = 0;
  *(_OWORD *)(v8 + 216) = 0;
  *(_OWORD *)(v8 + 240) = 0;
  *(_QWORD *)(v8 + 32) = 0xFFFFFFFF00000001LL;
  *(_QWORD *)(v8 + 40) = 0;
  *(_QWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 72) = 0;
  *(_QWORD *)(v8 + 128) = 0;
  *(_QWORD *)(v8 + 184) = 0;
  *(_QWORD *)(v8 + 208) = 0;
  *(_QWORD *)(v8 + 232) = 0;
  *(_QWORD *)(v8 + 256) = -1;
  *(_QWORD *)(v8 + 264) = 0;
  ++a1[1];
  v9 = idaplace_t__clone(&v23);
  *(_BYTE *)(v8 + 32) = -1;
  *(_QWORD *)v8 = v9;
  *(_DWORD *)(v8 + 36) = -16776961;
  *(_BYTE *)(v8 + 40) = 1;
  sub_2A6440(&v26, a2, a4);
  v14 = _mm_loadu_si128(&v27);
  v15 = v26;
  v27 = 0;
  v16 = *(_QWORD *)(v8 + 8);
  v26 = 0;
  if ( v16 )
  {
    *(_QWORD *)(v8 + 16) = 0;
    v17 = qfree(v16, a2, v10, v11, v12, v13, *(_OWORD *)&v14, v23, v24, v25);
    v18 = _mm_load_si128(&v22);
    v19 = v26;
    *(_QWORD *)(v8 + 8) = v15;
    *(__m128i *)(v8 + 16) = v18;
    if ( v19 )
    {
      v27.m128i_i64[0] = 0;
      qfree(v19, a2, v17);
    }
  }
  else
  {
    *(_QWORD *)(v8 + 8) = v15;
    *(__m128i *)(v8 + 16) = v14;
  }
  return v28 - __readfsqword(0x28u);
}
