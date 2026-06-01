__int64 __fastcall sub_55DF80(_QWORD *a1, _DWORD *a2, unsigned int a3, int a4, __int64 a5, __m128i *a6)
{
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r10
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rbx
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // [rsp+8h] [rbp-270h]
  __m128i v22; // [rsp+20h] [rbp-258h] BYREF
  void *v23; // [rsp+38h] [rbp-240h]
  __int64 v24; // [rsp+40h] [rbp-238h]
  __int64 v25; // [rsp+60h] [rbp-218h]
  __int128 v26; // [rsp+70h] [rbp-208h]
  __int64 v27; // [rsp+80h] [rbp-1F8h]
  void *v28; // [rsp+90h] [rbp-1E8h]
  __int64 v29; // [rsp+98h] [rbp-1E0h]
  unsigned int v30; // [rsp+B0h] [rbp-1C8h]
  void *v31; // [rsp+C0h] [rbp-1B8h]
  __int64 v32; // [rsp+C8h] [rbp-1B0h]
  __int64 v33; // [rsp+D8h] [rbp-1A0h]
  unsigned int v34; // [rsp+E4h] [rbp-194h]
  char v35; // [rsp+E8h] [rbp-190h]
  __int64 v36; // [rsp+ECh] [rbp-18Ch]
  __m128i v37; // [rsp+F4h] [rbp-184h] BYREF
  __m128i v38; // [rsp+104h] [rbp-174h] BYREF
  __m128i v39; // [rsp+114h] [rbp-164h] BYREF
  __m128i v40; // [rsp+124h] [rbp-154h] BYREF
  __m128i v41; // [rsp+134h] [rbp-144h] BYREF
  __m128i v42; // [rsp+144h] [rbp-134h] BYREF
  __m128i v43; // [rsp+154h] [rbp-124h] BYREF
  __m128i v44; // [rsp+164h] [rbp-114h] BYREF
  __m128i v45; // [rsp+174h] [rbp-104h] BYREF
  __m128i v46; // [rsp+184h] [rbp-F4h] BYREF
  __m128i v47; // [rsp+194h] [rbp-E4h] BYREF
  __m128i v48; // [rsp+1A4h] [rbp-D4h] BYREF
  __m128i v49; // [rsp+1B4h] [rbp-C4h] BYREF
  __int64 v50; // [rsp+1C4h] [rbp-B4h]
  char v51; // [rsp+1CCh] [rbp-ACh] BYREF
  void *ptr; // [rsp+1D0h] [rbp-A8h]
  __int128 v53; // [rsp+1D8h] [rbp-A0h]
  __int64 v54; // [rsp+1E8h] [rbp-90h]
  __int64 v55; // [rsp+1F0h] [rbp-88h]
  __int64 v56; // [rsp+1F8h] [rbp-80h]
  __int64 v57; // [rsp+200h] [rbp-78h]
  __int128 v58; // [rsp+208h] [rbp-70h]
  __int128 v59; // [rsp+218h] [rbp-60h]
  __int64 v60; // [rsp+228h] [rbp-50h]
  __int64 v61; // [rsp+230h] [rbp-48h]
  unsigned __int64 v62; // [rsp+238h] [rbp-40h]

  v8 = a1[4];
  v9 = a1[2];
  v10 = *(_QWORD *)(*a1 + 544LL);
  v62 = __readfsqword(0x28u);
  v20 = v10;
  sub_559580((__int64)&v22, a3, a5, 0);
  v34 = a3;
  v36 = 0;
  v38.m128i_i64[0] = 0;
  v37.m128i_i64[0] = -1;
  v22.m128i_i64[0] = (__int64)&off_2BCF860;
  v37.m128i_i64[1] = 0xFFFFFFFFLL;
  v12 = &v38.m128i_i64[1];
  do
  {
    *(_WORD *)v12 = 0;
    v12 += 3;
    *((_WORD *)v12 - 11) = 0;
    *((_WORD *)v12 - 10) = 0;
    *((_DWORD *)v12 - 1) = 0;
    *((_WORD *)v12 - 9) = 0;
    *(v12 - 2) = 0;
    *((_DWORD *)v12 - 2) = 0;
  }
  while ( &v51 != (char *)v12 );
  ptr = nullptr;
  v53 = 0;
  v13 = a5 & 0x1FF;
  v55 = v20;
  v54 = 0;
  v56 = v9;
  v57 = v8;
  v60 = -1;
  v61 = a5;
  v35 = 2;
  v58 = 0;
  v59 = 0;
  if ( v13 == 255 )
    v30 = v30 & 0xFFF27FFF | 0x98000;
  else
    v30 = v30 & 0xFFF2FFFF | 0x90000;
  if ( (~(_WORD)a5 & 0x600) != 0 )
    goto LABEL_10;
  if ( a6 )
  {
    if ( a6->m128i_i32[2] == a3 )
    {
      v18 = a6[13].m128i_i64[0];
      v37 = _mm_loadu_si128(a6);
      v19 = _mm_loadu_si128(a6 + 1);
      v50 = v18;
      v38 = v19;
      v39 = _mm_loadu_si128(a6 + 2);
      v40 = _mm_loadu_si128(a6 + 3);
      v41 = _mm_loadu_si128(a6 + 4);
      v42 = _mm_loadu_si128(a6 + 5);
      v43 = _mm_loadu_si128(a6 + 6);
      v44 = _mm_loadu_si128(a6 + 7);
      v45 = _mm_loadu_si128(a6 + 8);
      v46 = _mm_loadu_si128(a6 + 9);
      v47 = _mm_loadu_si128(a6 + 10);
      v48 = _mm_loadu_si128(a6 + 11);
      v49 = _mm_loadu_si128(a6 + 12);
      goto LABEL_10;
    }
    if ( (unsigned int)decode_insn(&v37, a3, v13, -1, 0, 0) )
    {
      v14 = v50;
      *a6 = _mm_loadu_si128(&v37);
      v15 = _mm_loadu_si128(&v38);
      a6[13].m128i_i64[0] = v14;
      a6[1] = v15;
      a6[2] = _mm_loadu_si128(&v39);
      a6[3] = _mm_loadu_si128(&v40);
      a6[4] = _mm_loadu_si128(&v41);
      a6[5] = _mm_loadu_si128(&v42);
      a6[6] = _mm_loadu_si128(&v43);
      a6[7] = _mm_loadu_si128(&v44);
      a6[8] = _mm_loadu_si128(&v45);
      a6[9] = _mm_loadu_si128(&v46);
      a6[10] = _mm_loadu_si128(&v47);
      a6[11] = _mm_loadu_si128(&v48);
      a6[12] = _mm_loadu_si128(&v49);
LABEL_10:
      v16 = sub_55DD00(&v22, a2, a4);
      goto LABEL_11;
    }
  }
  else if ( (unsigned int)decode_insn(&v37, a3, v13, -1, 0, 0) )
  {
    goto LABEL_10;
  }
  v16 = 0;
LABEL_11:
  v22.m128i_i64[0] = (__int64)&off_2BCF860;
  if ( ptr )
  {
    *(_QWORD *)&v53 = 0;
    qfree(ptr);
  }
  v27 = 0;
  v22.m128i_i64[0] = (__int64)&off_2BD10E8;
  v33 = 0;
  v25 = 0;
  v26 = 0;
  if ( v31 )
  {
    v32 = 0;
    qfree(v31);
  }
  if ( v28 )
  {
    v29 = 0;
    qfree(v28);
  }
  if ( v23 )
  {
    v24 = 0;
    qfree(v23);
  }
  return v16;
}

