unsigned __int64 __fastcall sub_174D00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6,
        __int32 a7,
        char a8,
        __int64 a9)
{
  __int64 v13; // rdi
  __int8 v14; // r8
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // r12
  __m128i v20; // xmm1
  __m128i v21; // xmm1
  __int64 v22; // rdi
  __int64 v23; // rdi
  __int64 v24; // r15
  __m128i v25; // xmm1
  __m128i v26; // xmm1
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  int v33; // r9d
  char v34; // al
  __int64 *v36; // rdi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // r9d
  _BYTE *v41; // rax
  __int64 v42; // rsi
  __m128i v43; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v44; // [rsp+10h] [rbp-A8h]
  __int64 v45; // [rsp+18h] [rbp-A0h]
  _QWORD v46[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v47; // [rsp+30h] [rbp-88h] BYREF
  __int64 v48; // [rsp+38h] [rbp-80h]
  __int64 v49[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v50; // [rsp+60h] [rbp-58h] BYREF
  __m128i v51; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v52; // [rsp+78h] [rbp-40h]

  v13 = a1 + 72;
  v44 = a9;
  v43.m128i_i32[0] = a7;
  v52 = __readfsqword(0x28u);
  *(_QWORD *)(v13 - 72) = off_4D8500;
  *(_QWORD *)(v13 - 64) = 0;
  *(_QWORD *)(v13 - 56) = 0;
  *(_QWORD *)(v13 - 48) = 0;
  *(_QWORD *)(v13 - 40) = 0;
  *(_BYTE *)(v13 - 32) = 0;
  *(_QWORD *)(v13 - 28) = 0;
  *(_QWORD *)(v13 - 16) = a3;
  *(_QWORD *)(v13 - 8) = a4;
  v45 = v13;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 144) = 0;
  sub_124DE0(v13, (__int64)a4);
  v14 = v43.m128i_i8[0];
  *(_QWORD *)(a1 + 312) = a2;
  v15 = v45;
  *(_QWORD *)(a1 + 328) = a6;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_QWORD *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 272) = 0;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_QWORD *)(a1 + 320) = a5;
  *(_QWORD *)(a1 + 336) = 0;
  *(_DWORD *)(a1 + 344) = 0;
  *(_BYTE *)(a1 + 348) = 0;
  *(_WORD *)(a1 + 349) = 0;
  *(_BYTE *)(a1 + 351) = v14;
  *(_BYTE *)(a1 + 352) = a8;
  *(_WORD *)(a1 + 354) = 256;
  *(_OWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 256) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  sub_11D2D0(v15, (__int64)a4);
  v16 = *(_QWORD *)(a1 + 56);
  v17 = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 64LL);
  sub_127460((__int64)v49, v17, v16, 0);
  sub_642D0((__int64 *)(a1 + 232), v49);
  v18 = *(_QWORD *)(a1 + 248);
  v19 = v50;
  v50 = 0;
  v20 = _mm_loadu_si128(&v51);
  v51 = 0;
  if ( v18 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    v43 = v20;
    qfree(v18);
    v21 = _mm_load_si128(&v43);
    v22 = v50;
    *(_QWORD *)(a1 + 248) = v19;
    *(__m128i *)(a1 + 256) = v21;
    if ( v22 )
    {
      v51.m128i_i64[0] = 0;
      qfree(v22);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) = v19;
    *(__m128i *)(a1 + 256) = v20;
  }
  qfree(v49[0]);
  sub_127460((__int64)v49, *(_QWORD *)(a1 + 320), *(_QWORD *)(a1 + 56), 0x100u);
  sub_642D0((__int64 *)(a1 + 272), v49);
  v23 = *(_QWORD *)(a1 + 288);
  v24 = v50;
  v50 = 0;
  v25 = _mm_loadu_si128(&v51);
  v51 = 0;
  if ( v23 )
  {
    *(_QWORD *)(a1 + 296) = 0;
    v43 = v25;
    qfree(v23);
    v26 = _mm_load_si128(&v43);
    v27 = v50;
    *(_QWORD *)(a1 + 288) = v24;
    *(__m128i *)(a1 + 296) = v26;
    if ( v27 )
    {
      v51.m128i_i64[0] = 0;
      qfree(v27);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 288) = v24;
    *(__m128i *)(a1 + 296) = v25;
  }
  qfree(v49[0]);
  if ( sub_11FDC0(*(_BYTE **)(a1 + 56), 1) )
  {
    v28 = *(_QWORD *)(a1 + 56);
    v29 = *(_QWORD *)(a1 + 320);
    v43.m128i_i64[0] = (__int64)v46;
    sub_127460((__int64)v46, v29, v28, 1u);
    if ( v48 && sub_11FDC0(*(_BYTE **)(a1 + 56), 0) )
    {
      v49[0] = 0;
      v49[1] = 0;
      v50 = 0;
      v51 = 0;
      v50 = qvector_reserve(&v50, 0, 1, 16);
      v36 = (__int64 *)v43.m128i_i64[0];
      v37 = 16 * v51.m128i_i64[0];
      *(__m128i *)(v50 + v37) = _mm_load_si128((const __m128i *)&xmmword_41F900);
      ++v51.m128i_i64[0];
      sub_64040(v36, v49, v37, v38, v39, v40);
      sub_318020(&v47, &v50);
      if ( v50 )
      {
        v51.m128i_i64[0] = 0;
        qfree(v50);
      }
      qfree(v49[0]);
    }
    sub_64040((__int64 *)v43.m128i_i64[0], (__int64 *)(a1 + 272), v30, v31, v32, v33);
    sub_318020(&v47, a1 + 288);
    sub_63C80((__int64 *)(a1 + 192), (__int64 *)v43.m128i_i64[0]);
    sub_317070(a1 + 208, &v47);
    if ( v47 )
    {
      v48 = 0;
      qfree(v47);
    }
    qfree(v46[0]);
  }
  if ( !*(_QWORD *)(v44 + 24) )
    goto LABEL_13;
  v41 = sub_11FDC0(a4, 1);
  if ( !v41 )
    goto LABEL_13;
  if ( v41[64] != 8 )
  {
    v34 = 0;
    goto LABEL_14;
  }
  v42 = *((_QWORD *)v41 + 9);
  if ( (*(_BYTE *)(v42 + 280) & 0x10) == 0 )
    v34 = sub_318830(v44 + 16, v42 + 152) ^ 1;
  else
LABEL_13:
    v34 = 1;
LABEL_14:
  *(_BYTE *)(a1 + 353) = v34;
  return v52 - __readfsqword(0x28u);
}
