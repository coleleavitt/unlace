unsigned __int64 __fastcall sub_1752C0(
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
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // r12
  __m128i v22; // xmm1
  __m128i v23; // xmm1
  __int64 v24; // rdi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // rdi
  __int64 v28; // r15
  __m128i v29; // xmm1
  __m128i v30; // xmm1
  __int64 v31; // rdi
  int v32; // r8d
  int v33; // r9d
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  int v39; // r9d
  char v40; // al
  __int64 *v42; // rdi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  _BYTE *v47; // rax
  __int64 v48; // rsi
  __m128i v49; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+10h] [rbp-A8h]
  __int64 v51; // [rsp+18h] [rbp-A0h]
  __int64 v52[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v53; // [rsp+30h] [rbp-88h] BYREF
  __int64 v54; // [rsp+38h] [rbp-80h]
  __int64 v55[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v56; // [rsp+60h] [rbp-58h] BYREF
  __m128i v57; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v58; // [rsp+78h] [rbp-40h]

  v13 = a1 + 72;
  v50 = a9;
  v49.m128i_i32[0] = a7;
  v58 = __readfsqword(0x28u);
  *(_QWORD *)(v13 - 72) = off_4DDE40;
  *(_QWORD *)(v13 - 64) = 0;
  *(_QWORD *)(v13 - 56) = 0;
  *(_QWORD *)(v13 - 48) = 0;
  *(_QWORD *)(v13 - 40) = 0;
  *(_BYTE *)(v13 - 32) = 0;
  *(_QWORD *)(v13 - 28) = 0;
  *(_QWORD *)(v13 - 16) = a3;
  *(_QWORD *)(v13 - 8) = a4;
  v51 = v13;
  *(_OWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 144) = 0;
  sub_1253A0(v13, (__int64)a4);
  v14 = v49.m128i_i8[0];
  *(_QWORD *)(a1 + 312) = a2;
  v15 = v51;
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
  sub_11D890(v15, (__int64)a4);
  v16 = *(_QWORD *)(a1 + 56);
  v17 = *(_QWORD *)(a1 + 320);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 64LL);
  sub_127A20((__int64)v55, v17, v16, 0, v18, v19);
  sub_648D0((__int64 *)(a1 + 232), v55);
  v20 = *(_QWORD *)(a1 + 248);
  v21 = v56;
  v56 = 0;
  v22 = _mm_loadu_si128(&v57);
  v57 = 0;
  if ( v20 )
  {
    *(_QWORD *)(a1 + 256) = 0;
    v49 = v22;
    qfree(v20);
    v23 = _mm_load_si128(&v49);
    v24 = v56;
    *(_QWORD *)(a1 + 248) = v21;
    *(__m128i *)(a1 + 256) = v23;
    if ( v24 )
    {
      v57.m128i_i64[0] = 0;
      qfree(v24);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 248) = v21;
    *(__m128i *)(a1 + 256) = v22;
  }
  qfree(v55[0]);
  sub_127A20((__int64)v55, *(_QWORD *)(a1 + 320), *(_QWORD *)(a1 + 56), 256, v25, v26);
  sub_648D0((__int64 *)(a1 + 272), v55);
  v27 = *(_QWORD *)(a1 + 288);
  v28 = v56;
  v56 = 0;
  v29 = _mm_loadu_si128(&v57);
  v57 = 0;
  if ( v27 )
  {
    *(_QWORD *)(a1 + 296) = 0;
    v49 = v29;
    qfree(v27);
    v30 = _mm_load_si128(&v49);
    v31 = v56;
    *(_QWORD *)(a1 + 288) = v28;
    *(__m128i *)(a1 + 296) = v30;
    if ( v31 )
    {
      v57.m128i_i64[0] = 0;
      qfree(v31);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 288) = v28;
    *(__m128i *)(a1 + 296) = v29;
  }
  qfree(v55[0]);
  if ( sub_120380(*(_BYTE **)(a1 + 56), 1) )
  {
    v34 = *(_QWORD *)(a1 + 56);
    v35 = *(_QWORD *)(a1 + 320);
    v49.m128i_i64[0] = (__int64)v52;
    sub_127A20((__int64)v52, v35, v34, 1, v32, v33);
    if ( v54 && sub_120380(*(_BYTE **)(a1 + 56), 0) )
    {
      v55[0] = 0;
      v55[1] = 0;
      v56 = 0;
      v57 = 0;
      v56 = qvector_reserve((__int64)&v56, 0, 1, 16);
      v42 = (__int64 *)v49.m128i_i64[0];
      v43 = 16 * v57.m128i_i64[0];
      *(__m128i *)(v56 + v43) = _mm_load_si128((const __m128i *)&xmmword_424800);
      ++v57.m128i_i64[0];
      sub_64640(v42, v55, v43, v44, v45, v46);
      sub_317C60(&v53, &v56);
      if ( v56 )
      {
        v57.m128i_i64[0] = 0;
        qfree(v56);
      }
      qfree(v55[0]);
    }
    sub_64640((__int64 *)v49.m128i_i64[0], (__int64 *)(a1 + 272), v36, v37, v38, v39);
    sub_317C60(&v53, a1 + 288);
    sub_64280((__int64 *)(a1 + 192), (__int64 *)v49.m128i_i64[0]);
    sub_316CB0(a1 + 208, &v53);
    if ( v53 )
    {
      v54 = 0;
      qfree(v53);
    }
    qfree(v52[0]);
  }
  if ( !*(_QWORD *)(v50 + 24) )
    goto LABEL_13;
  v47 = sub_120380(a4, 1);
  if ( !v47 )
    goto LABEL_13;
  if ( v47[64] != 8 )
  {
    v40 = 0;
    goto LABEL_14;
  }
  v48 = *((_QWORD *)v47 + 9);
  if ( (*(_BYTE *)(v48 + 280) & 0x10) == 0 )
    v40 = sub_318470(v50 + 16, v48 + 152) ^ 1;
  else
LABEL_13:
    v40 = 1;
LABEL_14:
  *(_BYTE *)(a1 + 353) = v40;
  return v58 - __readfsqword(0x28u);
}
