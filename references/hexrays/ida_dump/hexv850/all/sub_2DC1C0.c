unsigned __int64 __fastcall sub_2DC1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 i; // r14
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rax
  char v17; // al
  __m128i v18; // xmm0
  __int64 v19; // r12
  int v20; // eax
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm1
  __int64 v24; // r13
  __int64 v25; // r15
  __m128i v26; // xmm0
  __int64 v27; // rdi
  __int64 v28; // r14
  __int64 v29; // rbx
  __int64 v30; // xmm1_8
  __m128i v31; // xmm2
  __int64 v32; // rdi
  char v33; // al
  __int64 v34; // rdi
  __int64 v35; // xmm0_8
  __int64 v36; // xmm1_8
  int v37; // eax
  __m128i v38; // xmm0
  __int64 v39; // rax
  char v41; // al
  __m128i v42; // xmm0
  int v43; // eax
  __int64 v44; // rax
  __int64 v45; // r14
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 v48; // rax
  __m128i v49; // xmm0
  __int64 v50; // rdi
  __m128i v51; // [rsp+0h] [rbp-108h] BYREF
  __int64 v52; // [rsp+18h] [rbp-F0h]
  __m128i v53; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v54; // [rsp+30h] [rbp-D8h]
  __int64 v55; // [rsp+38h] [rbp-D0h]
  __int64 (__fastcall **v56)(); // [rsp+40h] [rbp-C8h] BYREF
  __m128i v57; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+58h] [rbp-B0h]
  __m128i v59; // [rsp+60h] [rbp-A8h]
  char v60; // [rsp+70h] [rbp-98h]
  __m128i v61; // [rsp+78h] [rbp-90h] BYREF
  int v62; // [rsp+88h] [rbp-80h]
  __int64 v63; // [rsp+90h] [rbp-78h]
  _BYTE v64[16]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-58h]
  int (__fastcall *v66)(__int64, __int64, __int64 (__fastcall ***)()); // [rsp+B8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+C8h] [rbp-40h]

  v52 = a2;
  v55 = a3;
  v67 = __readfsqword(0x28u);
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
      v10 = 176 * (i + 1);
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 88) < 0 )
      {
        --v9;
        v11 = a1 + 88 * v9;
      }
      v12 = a1 + 88 * i;
      *(__m128i *)(v12 + 8) = _mm_loadu_si128((const __m128i *)(v11 + 8));
      v13 = *(_QWORD *)(v11 + 24);
      v14 = _mm_loadu_si128((const __m128i *)(v11 + 32));
      *(_QWORD *)(v11 + 24) = 0;
      *(_OWORD *)(v11 + 32) = 0;
      v15 = *(_QWORD *)(v12 + 24);
      if ( v15 )
      {
        *(_QWORD *)(v12 + 32) = 0;
        v54 = v13;
        v53 = v14;
        qfree(v15);
        v13 = v54;
        v14 = _mm_load_si128(&v53);
      }
      *(_QWORD *)(v12 + 24) = v13;
      v16 = v51.m128i_i64[0];
      *(__m128i *)(v12 + 32) = v14;
      *(_BYTE *)(v12 + 48) = *(_BYTE *)(v11 + 48);
      *(__m128i *)(v12 + 56) = _mm_loadu_si128((const __m128i *)(v11 + 56));
      *(_DWORD *)(v12 + 72) = *(_DWORD *)(v11 + 72);
      *(_QWORD *)(v12 + 80) = *(_QWORD *)(v11 + 80);
      if ( v9 >= v16 )
        break;
    }
  }
  if ( (v55 & 1) == 0 && (v55 - 2) / 2 == v9 )
  {
    v45 = 2 * (v9 + 1);
    v46 = a1 + 176 * (v9 + 1) - 88;
    v47 = a1 + 88 * v9;
    *(__m128i *)(v47 + 8) = _mm_loadu_si128((const __m128i *)(v46 + 8));
    v48 = *(_QWORD *)(v46 + 24);
    v49 = _mm_loadu_si128((const __m128i *)(v46 + 32));
    *(_QWORD *)(v46 + 24) = 0;
    *(_OWORD *)(v46 + 32) = 0;
    v50 = *(_QWORD *)(v47 + 24);
    if ( v50 )
    {
      *(_QWORD *)(v47 + 32) = 0;
      v53.m128i_i64[0] = v48;
      v51 = v49;
      qfree(v50);
      v48 = v53.m128i_i64[0];
      v49 = _mm_load_si128(&v51);
    }
    *(_QWORD *)(v47 + 24) = v48;
    *(__m128i *)(v47 + 32) = v49;
    *(_BYTE *)(v47 + 48) = *(_BYTE *)(v46 + 48);
    *(__m128i *)(v47 + 56) = _mm_loadu_si128((const __m128i *)(v46 + 56));
    *(_DWORD *)(v47 + 72) = *(_DWORD *)(v46 + 72);
    *(_QWORD *)(v47 + 80) = *(_QWORD *)(v46 + 80);
    v9 = v45 - 1;
  }
  v51.m128i_i64[0] = (__int64)v64;
  sub_2C8840((__int64)v64, (const __m128i *)a5);
  v17 = *(_BYTE *)(a4 + 48);
  v18 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v19 = *(_QWORD *)(a4 + 24);
  *(_QWORD *)(a4 + 24) = 0;
  v60 = v17;
  v20 = *(_DWORD *)(a4 + 72);
  v57 = v18;
  v21 = _mm_loadu_si128((const __m128i *)(a4 + 32));
  v62 = v20;
  v56 = off_4B6560;
  v22 = *(_QWORD *)(a4 + 80);
  *(_OWORD *)(a4 + 32) = 0;
  v23 = _mm_loadu_si128((const __m128i *)(a4 + 56));
  v63 = v22;
  v58 = v19;
  v59 = v21;
  v61 = v23;
  v24 = (v9 - 1) / 2;
  if ( v9 <= v52 )
  {
    v30 = _mm_srli_si128(v21, 8).m128i_u64[0];
    v29 = a1 + 88 * v9;
  }
  else
  {
    while ( 1 )
    {
      v28 = a1 + 88 * v24;
      if ( !v65 )
        std::__throw_bad_function_call();
      v29 = a1 + 88 * v9;
      if ( v66(v51.m128i_i64[0], a1 + 88 * v24, &v56) >= 0 )
      {
        v19 = v58;
        v30 = v59.m128i_i64[1];
        v21.m128i_i64[0] = v59.m128i_i64[0];
        goto LABEL_21;
      }
      *(__m128i *)(v29 + 8) = _mm_loadu_si128((const __m128i *)(v28 + 8));
      v25 = *(_QWORD *)(v28 + 24);
      v26 = _mm_loadu_si128((const __m128i *)(v28 + 32));
      *(_QWORD *)(v28 + 24) = 0;
      *(_OWORD *)(v28 + 32) = 0;
      v27 = *(_QWORD *)(v29 + 24);
      if ( v27 )
      {
        *(_QWORD *)(v29 + 32) = 0;
        v53 = v26;
        qfree(v27);
        v26 = _mm_load_si128(&v53);
      }
      *(_QWORD *)(v29 + 24) = v25;
      *(__m128i *)(v29 + 32) = v26;
      *(_BYTE *)(v29 + 48) = *(_BYTE *)(v28 + 48);
      *(__m128i *)(v29 + 56) = _mm_loadu_si128((const __m128i *)(v28 + 56));
      *(_DWORD *)(v29 + 72) = *(_DWORD *)(v28 + 72);
      *(_QWORD *)(v29 + 80) = *(_QWORD *)(v28 + 80);
      v9 = v24;
      if ( v52 >= v24 )
        break;
      v24 = (v24 - 1) / 2;
    }
    v19 = v58;
    v21.m128i_i64[0] = v59.m128i_i64[0];
    v29 = a1 + 88 * v24;
    v30 = v59.m128i_i64[1];
  }
LABEL_21:
  v31 = _mm_loadu_si128(&v57);
  v32 = *(_QWORD *)(v29 + 24);
  v58 = 0;
  *(__m128i *)(v29 + 8) = v31;
  v59 = 0;
  if ( v32 )
  {
    *(_QWORD *)(v29 + 32) = 0;
    v53.m128i_i64[0] = v30;
    v52 = v21.m128i_i64[0];
    qfree(v32);
    v33 = v60;
    v34 = v58;
    *(_QWORD *)(v29 + 24) = v19;
    v35 = v52;
    v36 = v53.m128i_i64[0];
    *(_BYTE *)(v29 + 48) = v33;
    v37 = v62;
    *(_QWORD *)(v29 + 32) = v35;
    v38 = _mm_loadu_si128(&v61);
    *(_DWORD *)(v29 + 72) = v37;
    v39 = v63;
    *(_QWORD *)(v29 + 40) = v36;
    *(_QWORD *)(v29 + 80) = v39;
    v56 = off_4B4BF8;
    *(__m128i *)(v29 + 56) = v38;
    if ( v34 )
    {
      v59.m128i_i64[0] = 0;
      qfree(v34);
    }
  }
  else
  {
    v41 = v60;
    *(_QWORD *)(v29 + 32) = v21.m128i_i64[0];
    v42 = _mm_loadu_si128(&v61);
    *(_QWORD *)(v29 + 24) = v19;
    *(_BYTE *)(v29 + 48) = v41;
    v43 = v62;
    *(_QWORD *)(v29 + 40) = v30;
    *(_DWORD *)(v29 + 72) = v43;
    v44 = v63;
    *(__m128i *)(v29 + 56) = v42;
    *(_QWORD *)(v29 + 80) = v44;
  }
  sub_621D0(v51.m128i_i64[0]);
  return v67 - __readfsqword(0x28u);
}
