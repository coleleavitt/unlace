unsigned __int64 __fastcall sub_2E4830(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // rbx
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdi
  int v16; // edi
  __m128i v17; // xmm0
  __int64 v18; // r13
  __int16 v19; // ax
  char v20; // si
  __int64 v21; // r8
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __m128i v24; // xmm1
  char v25; // dl
  __int64 v26; // r8
  __int64 v27; // r15
  __int64 v28; // r14
  __m128i v29; // xmm0
  __int64 v30; // rdi
  __int64 v31; // rbp
  __int64 v32; // rbx
  char v33; // r8
  __int64 v34; // xmm1_8
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // xmm0_8
  __int64 v40; // xmm1_8
  __int64 v41; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rbx
  __int64 v47; // r13
  __int64 v48; // r14
  __m128i v49; // xmm0
  __int64 v50; // rdi
  __m128i v51; // [rsp+0h] [rbp-108h] BYREF
  __int64 v52; // [rsp+18h] [rbp-F0h]
  __m128i v53; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-D8h]
  __int64 v55; // [rsp+38h] [rbp-D0h]
  __int64 (__fastcall **v56)(); // [rsp+40h] [rbp-C8h] BYREF
  __m128i v57; // [rsp+48h] [rbp-C0h]
  __int64 v58; // [rsp+58h] [rbp-B0h]
  __int64 v59; // [rsp+60h] [rbp-A8h]
  __m128i v60; // [rsp+68h] [rbp-A0h]
  __int64 v61; // [rsp+78h] [rbp-90h]
  __m128i v62; // [rsp+80h] [rbp-88h]
  int v63; // [rsp+90h] [rbp-78h]
  __int64 v64; // [rsp+98h] [rbp-70h]
  _BYTE v65[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v66; // [rsp+B0h] [rbp-58h]
  int (__fastcall *v67)(__int64, __int64, __int64 (__fastcall ***)()); // [rsp+B8h] [rbp-50h]
  unsigned __int64 v68; // [rsp+C8h] [rbp-40h]

  v52 = a2;
  v55 = a3;
  v68 = __readfsqword(0x28u);
  v51.m128i_i64[0] = (a3 - 1) / 2;
  if ( a2 >= v51.m128i_i64[0] )
  {
    v9 = v52;
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = 192 * (i + 1);
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 96) < 0 )
      {
        --v9;
        v11 = a1 + 96 * v9;
      }
      v12 = a1 + 96 * i;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v11 + 8);
      *(_DWORD *)(v12 + 16) = *(_DWORD *)(v11 + 16);
      *(_DWORD *)(v12 + 24) = *(_DWORD *)(v11 + 24);
      *(_BYTE *)(v12 + 28) = *(_BYTE *)(v11 + 28);
      *(_BYTE *)(v12 + 29) = *(_BYTE *)(v11 + 29);
      *(_BYTE *)(v12 + 30) = *(_BYTE *)(v11 + 30);
      *(_BYTE *)(v12 + 31) = *(_BYTE *)(v11 + 31);
      v13 = *(_QWORD *)(v11 + 32);
      v14 = _mm_loadu_si128((const __m128i *)(v11 + 40));
      *(_QWORD *)(v11 + 32) = 0;
      *(_OWORD *)(v11 + 40) = 0;
      v15 = *(_QWORD *)(v12 + 32);
      if ( v15 )
      {
        *(_QWORD *)(v12 + 40) = 0;
        v54 = v13;
        v53 = v14;
        qfree(v15);
        v13 = v54;
        v14 = _mm_load_si128(&v53);
      }
      *(_QWORD *)(v12 + 32) = v13;
      *(__m128i *)(v12 + 40) = v14;
      *(_QWORD *)(v12 + 56) = *(_QWORD *)(v11 + 56);
      *(_QWORD *)(v12 + 64) = *(_QWORD *)(v11 + 64);
      *(_DWORD *)(v12 + 72) = *(_DWORD *)(v11 + 72);
      *(_DWORD *)(v12 + 80) = *(_DWORD *)(v11 + 80);
      *(_QWORD *)(v12 + 88) = *(_QWORD *)(v11 + 88);
      if ( v9 >= v51.m128i_i64[0] )
        break;
    }
  }
  if ( (v55 & 1) == 0 && (v55 - 2) / 2 == v9 )
  {
    v45 = 2 * (v9 + 1);
    v46 = a1 + 96 * v9;
    v47 = a1 + 192 * (v9 + 1) - 96;
    *(_QWORD *)(v46 + 8) = *(_QWORD *)(v47 + 8);
    *(_DWORD *)(v46 + 16) = *(_DWORD *)(v47 + 16);
    *(_DWORD *)(v46 + 24) = *(_DWORD *)(v47 + 24);
    *(_BYTE *)(v46 + 28) = *(_BYTE *)(v47 + 28);
    *(_BYTE *)(v46 + 29) = *(_BYTE *)(v47 + 29);
    *(_BYTE *)(v46 + 30) = *(_BYTE *)(v47 + 30);
    *(_BYTE *)(v46 + 31) = *(_BYTE *)(v47 + 31);
    v48 = *(_QWORD *)(v47 + 32);
    v49 = _mm_loadu_si128((const __m128i *)(v47 + 40));
    *(_QWORD *)(v47 + 32) = 0;
    *(_OWORD *)(v47 + 40) = 0;
    v50 = *(_QWORD *)(v46 + 32);
    if ( v50 )
    {
      *(_QWORD *)(v46 + 40) = 0;
      v53.m128i_i64[0] = v45;
      v51 = v49;
      qfree(v50);
      v45 = v53.m128i_i64[0];
      v49 = _mm_load_si128(&v51);
    }
    *(_QWORD *)(v46 + 32) = v48;
    v9 = v45 - 1;
    *(__m128i *)(v46 + 40) = v49;
    *(_QWORD *)(v46 + 56) = *(_QWORD *)(v47 + 56);
    *(_QWORD *)(v46 + 64) = *(_QWORD *)(v47 + 64);
    *(_DWORD *)(v46 + 72) = *(_DWORD *)(v47 + 72);
    *(_DWORD *)(v46 + 80) = *(_DWORD *)(v47 + 80);
    *(_QWORD *)(v46 + 88) = *(_QWORD *)(v47 + 88);
  }
  v51.m128i_i64[0] = (__int64)v65;
  sub_2CDF20((__int64)v65, (const __m128i *)a5);
  v16 = *(_DWORD *)(a4 + 24);
  v17 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v18 = *(_QWORD *)(a4 + 32);
  v19 = *(_WORD *)(a4 + 28);
  v20 = *(_BYTE *)(a4 + 30);
  v58 = *(_QWORD *)(a4 + 24);
  v21 = *(_QWORD *)(a4 + 56);
  v57 = v17;
  v22 = _mm_loadu_si128((const __m128i *)(a4 + 40));
  v56 = off_4E2BE8;
  v23 = v52;
  v61 = v21;
  LODWORD(v21) = *(_DWORD *)(a4 + 80);
  *(_OWORD *)(a4 + 40) = 0;
  v24 = _mm_loadu_si128((const __m128i *)(a4 + 64));
  v25 = *(_BYTE *)(a4 + 31);
  v63 = v21;
  v26 = *(_QWORD *)(a4 + 88);
  v59 = v18;
  v64 = v26;
  *(_QWORD *)(a4 + 32) = 0;
  v60 = v22;
  v62 = v24;
  v27 = (v9 - 1) / 2;
  if ( v9 <= v23 )
  {
    v33 = HIBYTE(v19);
    v34 = _mm_srli_si128(v22, 8).m128i_u64[0];
    v32 = a1 + 96 * v9;
  }
  else
  {
    while ( 1 )
    {
      v31 = a1 + 96 * v27;
      if ( !v66 )
        std::__throw_bad_function_call();
      v32 = a1 + 96 * v9;
      if ( v67(v51.m128i_i64[0], a1 + 96 * v27, &v56) >= 0 )
      {
        v16 = v58;
        LOBYTE(v19) = BYTE4(v58);
        v33 = BYTE5(v58);
        v20 = BYTE6(v58);
        v25 = HIBYTE(v58);
        v18 = v59;
        v34 = v60.m128i_i64[1];
        v22.m128i_i64[0] = v60.m128i_i64[0];
        goto LABEL_21;
      }
      *(_QWORD *)(v32 + 8) = *(_QWORD *)(v31 + 8);
      *(_DWORD *)(v32 + 16) = *(_DWORD *)(v31 + 16);
      *(_DWORD *)(v32 + 24) = *(_DWORD *)(v31 + 24);
      *(_BYTE *)(v32 + 28) = *(_BYTE *)(v31 + 28);
      *(_BYTE *)(v32 + 29) = *(_BYTE *)(v31 + 29);
      *(_BYTE *)(v32 + 30) = *(_BYTE *)(v31 + 30);
      *(_BYTE *)(v32 + 31) = *(_BYTE *)(v31 + 31);
      v28 = *(_QWORD *)(v31 + 32);
      v29 = _mm_loadu_si128((const __m128i *)(v31 + 40));
      *(_QWORD *)(v31 + 32) = 0;
      *(_OWORD *)(v31 + 40) = 0;
      v30 = *(_QWORD *)(v32 + 32);
      if ( v30 )
      {
        *(_QWORD *)(v32 + 40) = 0;
        v53 = v29;
        qfree(v30);
        v29 = _mm_load_si128(&v53);
      }
      *(_QWORD *)(v32 + 32) = v28;
      v9 = v27;
      *(__m128i *)(v32 + 40) = v29;
      *(_QWORD *)(v32 + 56) = *(_QWORD *)(v31 + 56);
      *(_QWORD *)(v32 + 64) = *(_QWORD *)(v31 + 64);
      *(_DWORD *)(v32 + 72) = *(_DWORD *)(v31 + 72);
      *(_DWORD *)(v32 + 80) = *(_DWORD *)(v31 + 80);
      *(_QWORD *)(v32 + 88) = *(_QWORD *)(v31 + 88);
      if ( v52 >= v27 )
        break;
      v27 = (v27 - 1) / 2;
    }
    v16 = v58;
    LOBYTE(v19) = BYTE4(v58);
    v32 = a1 + 96 * v27;
    v33 = BYTE5(v58);
    v20 = BYTE6(v58);
    v25 = HIBYTE(v58);
    v18 = v59;
    v34 = v60.m128i_i64[1];
    v22.m128i_i64[0] = v60.m128i_i64[0];
  }
LABEL_21:
  v35 = v57.m128i_i64[0];
  *(_DWORD *)(v32 + 24) = v16;
  v36 = *(_QWORD *)(v32 + 32);
  *(_BYTE *)(v32 + 28) = v19;
  *(_QWORD *)(v32 + 8) = v35;
  LODWORD(v35) = v57.m128i_i32[2];
  *(_BYTE *)(v32 + 29) = v33;
  *(_DWORD *)(v32 + 16) = v35;
  *(_BYTE *)(v32 + 30) = v20;
  *(_BYTE *)(v32 + 31) = v25;
  v59 = 0;
  v60 = 0;
  if ( v36 )
  {
    *(_QWORD *)(v32 + 40) = 0;
    v53.m128i_i64[0] = v34;
    v52 = v22.m128i_i64[0];
    qfree(v36);
    v37 = v61;
    v38 = v59;
    *(_QWORD *)(v32 + 32) = v18;
    v39 = v52;
    v40 = v53.m128i_i64[0];
    *(_QWORD *)(v32 + 56) = v37;
    v41 = v62.m128i_i64[0];
    *(_QWORD *)(v32 + 40) = v39;
    *(_QWORD *)(v32 + 64) = v41;
    LODWORD(v41) = v62.m128i_i32[2];
    *(_QWORD *)(v32 + 48) = v40;
    *(_DWORD *)(v32 + 72) = v41;
    *(_DWORD *)(v32 + 80) = v63;
    *(_QWORD *)(v32 + 88) = v64;
    v56 = off_4E12A8;
    if ( v38 )
    {
      v60.m128i_i64[0] = 0;
      qfree(v38);
    }
  }
  else
  {
    v43 = v61;
    *(_QWORD *)(v32 + 32) = v18;
    *(_QWORD *)(v32 + 40) = v22.m128i_i64[0];
    *(_QWORD *)(v32 + 56) = v43;
    v44 = v62.m128i_i64[0];
    *(_QWORD *)(v32 + 48) = v34;
    *(_QWORD *)(v32 + 64) = v44;
    *(_DWORD *)(v32 + 72) = v62.m128i_i32[2];
    *(_DWORD *)(v32 + 80) = v63;
    *(_QWORD *)(v32 + 88) = v64;
  }
  sub_66C50(v51.m128i_i64[0]);
  return v68 - __readfsqword(0x28u);
}
