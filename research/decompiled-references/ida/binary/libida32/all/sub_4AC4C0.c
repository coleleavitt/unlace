unsigned __int64 __fastcall sub_4AC4C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v8; // rbx
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rsi
  unsigned int v14; // eax
  unsigned __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 i; // rdx
  unsigned __int64 v22; // r12
  __int64 v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // r13
  int v26; // eax
  __int64 v27; // r15
  __m128i v28; // xmm0
  int v29; // eax
  __m128i v30; // xmm1
  __int64 v31; // rcx
  int v32; // r14d
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __int64 v35; // rax
  __m128i v36; // xmm0
  int v37; // eax
  __int64 v38; // r12
  __m128i v39; // xmm0
  __m128i v40; // xmm2
  __int64 v41; // r15
  int v42; // eax
  int v43; // r13d
  void *v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rax
  __m128i v47; // xmm0
  void *v48; // rdi
  __m128i v49; // xmm0
  int v50; // eax
  __m128i v51; // xmm0
  int v52; // eax
  __m128i v53; // xmm3
  __m128i v55; // [rsp+0h] [rbp-118h] BYREF
  __m128i *v56; // [rsp+10h] [rbp-108h]
  __int64 v57; // [rsp+18h] [rbp-100h]
  __m128i v58; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v59; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v60; // [rsp+40h] [rbp-D8h] BYREF
  int v61; // [rsp+50h] [rbp-C8h]
  __int64 v62; // [rsp+58h] [rbp-C0h]
  __int64 v63; // [rsp+60h] [rbp-B8h]
  __m128i v64; // [rsp+68h] [rbp-B0h]
  int v65; // [rsp+78h] [rbp-A0h]
  int v66; // [rsp+7Ch] [rbp-9Ch]
  __m128i v67; // [rsp+80h] [rbp-98h] BYREF
  __m128i v68; // [rsp+90h] [rbp-88h]
  int v69; // [rsp+A0h] [rbp-78h]
  __int64 v70; // [rsp+A8h] [rbp-70h]
  __int64 v71; // [rsp+B0h] [rbp-68h]
  __m128i v72; // [rsp+B8h] [rbp-60h]
  int v73; // [rsp+C8h] [rbp-50h]
  int v74; // [rsp+CCh] [rbp-4Ch]
  unsigned __int64 v75; // [rsp+D8h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( a2 - a1 <= 1280 )
    return v75 - __readfsqword(0x28u);
  v8 = a2;
LABEL_3:
  v10 = 0xCCCCCCCCCCCCCCCDLL * (v6 >> 4);
  v11 = v10 >> 1;
  if ( a3 )
  {
    v12 = *(unsigned int *)(v8 - 8);
    --a3;
    v13 = 80 * v11;
    v14 = *(_DWORD *)(a1 + 152);
    v15 = a1 + 80;
    v16 = a1 + v13;
    v17 = *(unsigned int *)(v16 + 72);
    if ( v14 < (unsigned int)v17 )
    {
      if ( (unsigned int)v17 < (unsigned int)v12 )
        goto LABEL_7;
      if ( v14 < (unsigned int)v12 )
      {
LABEL_22:
        sub_4AC2B0(a1, v8 - 80, v17, v12, a5, a6);
        goto LABEL_8;
      }
    }
    else if ( v14 >= (unsigned int)v12 )
    {
      if ( (unsigned int)v17 >= (unsigned int)v12 )
      {
LABEL_7:
        sub_4AC2B0(a1, v16, v17, v12, a5, a6);
LABEL_8:
        for ( i = v8; ; i = v22 )
        {
          v24 = *(_DWORD *)(a1 + 72);
          if ( *(_DWORD *)(v15 + 72) >= v24 )
          {
            v22 = i - 80;
            if ( v24 >= *(_DWORD *)(i - 8) )
              goto LABEL_10;
          }
          else
          {
            do
              v15 += 80LL;
            while ( *(_DWORD *)(v15 + 72) < v24 );
            v22 = i - 80;
            if ( v24 >= *(_DWORD *)(i - 8) )
            {
LABEL_10:
              if ( v15 >= v22 )
                goto LABEL_17;
              goto LABEL_11;
            }
          }
          do
            v22 -= 80LL;
          while ( v24 < *(_DWORD *)(v22 + 72) );
          if ( v15 >= v22 )
          {
LABEL_17:
            sub_4AC4C0(v15, v8, a3);
            v6 = v15 - a1;
            if ( (__int64)(v15 - a1) <= 1280 )
              return v75 - __readfsqword(0x28u);
            v8 = v15;
            goto LABEL_3;
          }
LABEL_11:
          v23 = v15;
          v15 += 80LL;
          sub_4AC2B0(v23, v22, i, v18, v19, v20);
        }
      }
      goto LABEL_22;
    }
    sub_4AC2B0(a1, a1 + 80, v17, v12, a5, a6);
    goto LABEL_8;
  }
  v55.m128i_i64[0] = v11 - 1;
  v56 = &v59;
  v25 = a1 + 80 * (v11 - 1);
  while ( 1 )
  {
    v26 = *(_DWORD *)(v25 + 32);
    v27 = *(_QWORD *)(v25 + 40);
    v59 = _mm_loadu_si128((const __m128i *)v25);
    v28 = _mm_loadu_si128((const __m128i *)(v25 + 16));
    v61 = v26;
    v60 = v28;
    if ( v27 )
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v29 = *(_DWORD *)(v25 + 72);
    v30 = _mm_load_si128(&v59);
    v70 = 0;
    v31 = *(_QWORD *)(v25 + 48);
    v32 = *(_DWORD *)(v25 + 76);
    *(_QWORD *)(v25 + 48) = 0;
    v33 = _mm_loadu_si128((const __m128i *)(v25 + 56));
    v65 = v29;
    v67 = v30;
    v34 = _mm_load_si128(&v60);
    v63 = v31;
    v66 = v32;
    v69 = v61;
    v64 = v33;
    *(_OWORD *)(v25 + 56) = 0;
    v68 = v34;
    if ( v27 )
    {
      v35 = *(_QWORD *)v27;
      v57 = v31;
      v58 = v33;
      v70 = (*(__int64 (__fastcall **)(__int64))(v35 + 16))(v27);
      v33 = _mm_load_si128(&v58);
      v31 = v57;
    }
    v74 = v32;
    v71 = v31;
    v63 = 0;
    v73 = v65;
    v72 = v33;
    v64 = 0;
    sub_4A9DB0(a1, v55.m128i_i64[0], v10, (__int64)&v67);
    v25 -= 80;
    sub_4A9B00(&v67);
    if ( !v55.m128i_i64[0] )
      break;
    --v55.m128i_i64[0];
    v62 = v27;
    sub_4A9B00(v56);
  }
  v62 = v27;
  sub_4A9B00(v56);
  while ( v8 - a1 > 80 )
  {
    v36 = _mm_loadu_si128((const __m128i *)(v8 - 80));
    v37 = *(_DWORD *)(v8 - 48);
    v8 -= 80;
    v38 = *(_QWORD *)(v8 + 40);
    v59 = v36;
    v39 = _mm_loadu_si128((const __m128i *)(v8 + 16));
    v61 = v37;
    v60 = v39;
    if ( v38 )
      v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    v40 = _mm_loadu_si128((const __m128i *)(v8 + 56));
    v41 = *(_QWORD *)(v8 + 48);
    *(_QWORD *)(v8 + 48) = 0;
    v42 = *(_DWORD *)(v8 + 72);
    v43 = *(_DWORD *)(v8 + 76);
    *(_OWORD *)(v8 + 56) = 0;
    v63 = v41;
    v65 = v42;
    v66 = v43;
    v55 = v40;
    v64 = v40;
    if ( a1 != v8 )
    {
      v44 = *(void **)(v8 + 40);
      if ( v44 )
      {
        qfree(v44);
        *(_QWORD *)(v8 + 40) = 0;
      }
      *(__m128i *)v8 = _mm_loadu_si128((const __m128i *)a1);
      *(__m128i *)(v8 + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
      *(_DWORD *)(v8 + 32) = *(_DWORD *)(a1 + 32);
      v45 = *(_QWORD *)(a1 + 40);
      if ( v45 )
        *(_QWORD *)(v8 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
    }
    v46 = *(_QWORD *)(a1 + 48);
    v47 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    *(_QWORD *)(a1 + 48) = 0;
    *(_OWORD *)(a1 + 56) = 0;
    v48 = *(void **)(v8 + 48);
    if ( v48 )
    {
      *(_QWORD *)(v8 + 56) = 0;
      v57 = v46;
      v58 = v47;
      qfree(v48);
      v47 = _mm_load_si128(&v58);
      v46 = v57;
    }
    *(__m128i *)(v8 + 56) = v47;
    v49 = _mm_load_si128(&v59);
    *(_QWORD *)(v8 + 48) = v46;
    v50 = *(_DWORD *)(a1 + 72);
    v67 = v49;
    v51 = _mm_load_si128(&v60);
    *(_DWORD *)(v8 + 72) = v50;
    v52 = *(_DWORD *)(a1 + 76);
    v70 = 0;
    *(_DWORD *)(v8 + 76) = v52;
    v68 = v51;
    v69 = v61;
    if ( v38 )
      v70 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
    v74 = v43;
    v53 = _mm_load_si128(&v55);
    v71 = v41;
    v73 = v65;
    v72 = v53;
    v63 = 0;
    v64 = 0;
    sub_4A9DB0(a1, 0, 0xCCCCCCCCCCCCCCCDLL * ((v8 - a1) >> 4), (__int64)&v67);
    sub_4A9B00(&v67);
    v62 = v38;
    sub_4A9B00(v56);
  }
  return v75 - __readfsqword(0x28u);
}

