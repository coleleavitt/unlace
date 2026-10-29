unsigned __int64 __fastcall sub_4C2BE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  __int64 v8; // rbx
  __int64 v10; // r12
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r13
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 i; // rdx
  unsigned __int64 v21; // r12
  __int64 v22; // rdi
  unsigned __int64 v23; // rax
  __int64 v25; // r15
  int v26; // eax
  __int64 v27; // r13
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i v30; // xmm1
  char *v31; // rcx
  int v32; // r14d
  __m128i v33; // xmm0
  __m128i v34; // xmm1
  __int64 v35; // rax
  __m128i v36; // xmm3
  __m128 v37; // xmm0
  void *v38; // rax
  __m128i v39; // xmm0
  int v40; // eax
  void *v41; // r12
  __m128i v42; // xmm0
  char *v43; // rax
  __m128i v44; // xmm2
  int v45; // r13d
  __int64 v46; // rax
  void *v47; // rdi
  __int64 v48; // rdi
  __int64 v49; // rax
  __m128i v50; // xmm0
  void *v51; // rdi
  __m128i v52; // xmm0
  __int64 v53; // rax
  __m128i v54; // xmm0
  __m128i v55; // [rsp+0h] [rbp-138h] BYREF
  __m128i v56; // [rsp+10h] [rbp-128h] BYREF
  __m128i v57; // [rsp+20h] [rbp-118h] BYREF
  char *v58; // [rsp+30h] [rbp-108h] BYREF
  __m128i *j; // [rsp+38h] [rbp-100h]
  __m128i v60; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v61; // [rsp+50h] [rbp-E8h] BYREF
  int v62; // [rsp+60h] [rbp-D8h]
  __int64 v63; // [rsp+68h] [rbp-D0h]
  char *v64; // [rsp+70h] [rbp-C8h]
  __m128i v65; // [rsp+78h] [rbp-C0h]
  __int64 v66; // [rsp+88h] [rbp-B0h]
  int v67; // [rsp+90h] [rbp-A8h]
  __m128i v68; // [rsp+A0h] [rbp-98h] BYREF
  __m128i v69; // [rsp+B0h] [rbp-88h]
  int v70; // [rsp+C0h] [rbp-78h]
  void *ptr[2]; // [rsp+C8h] [rbp-70h]
  __m128i v72; // [rsp+D8h] [rbp-60h]
  __int64 v73; // [rsp+E8h] [rbp-50h]
  int v74; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v75; // [rsp+F8h] [rbp-40h]

  v75 = __readfsqword(0x28u);
  v6 = a2 - a1;
  if ( a2 - a1 <= 1408 )
    return v75 - __readfsqword(0x28u);
  v8 = a2;
LABEL_3:
  v10 = 0x2E8BA2E8BA2E8BA3LL * (v6 >> 3);
  v11 = v10 >> 1;
  if ( a3 )
  {
    v12 = *(_QWORD *)(v8 - 16);
    --a3;
    v13 = a1 + 88;
    v14 = a1 + 88 * v11;
    v15 = *(_QWORD *)(a1 + 160);
    v16 = *(_QWORD *)(v14 + 72);
    if ( v15 < v16 )
    {
      if ( v16 < v12 )
        goto LABEL_7;
      if ( v15 < v12 )
      {
LABEL_22:
        sub_4C2960(a1, v8 - 88, v16, v12, a5, a6);
        goto LABEL_8;
      }
    }
    else if ( v15 >= v12 )
    {
      if ( v16 >= v12 )
      {
LABEL_7:
        sub_4C2960(a1, v14, v16, v12, a5, a6);
LABEL_8:
        for ( i = v8; ; i = v21 )
        {
          v23 = *(_QWORD *)(a1 + 72);
          if ( *(_QWORD *)(v13 + 72) >= v23 )
          {
            v21 = i - 88;
            if ( v23 >= *(_QWORD *)(i - 16) )
              goto LABEL_10;
          }
          else
          {
            do
              v13 += 88LL;
            while ( *(_QWORD *)(v13 + 72) < v23 );
            v21 = i - 88;
            if ( v23 >= *(_QWORD *)(i - 16) )
            {
LABEL_10:
              if ( v13 >= v21 )
                goto LABEL_17;
              goto LABEL_11;
            }
          }
          do
            v21 -= 88LL;
          while ( v23 < *(_QWORD *)(v21 + 72) );
          if ( v13 >= v21 )
          {
LABEL_17:
            sub_4C2BE0(v13, v8, a3);
            v6 = v13 - a1;
            if ( (__int64)(v13 - a1) <= 1408 )
              return v75 - __readfsqword(0x28u);
            v8 = v13;
            goto LABEL_3;
          }
LABEL_11:
          v22 = v13;
          v13 += 88LL;
          sub_4C2960(v22, v21, i, v17, v18, v19);
        }
      }
      goto LABEL_22;
    }
    sub_4C2960(a1, a1 + 88, v16, v12, a5, a6);
    goto LABEL_8;
  }
  v58 = (char *)(v11 - 1);
  v25 = a1 + 88 * v11;
  for ( j = &v60; ; sub_4C0590(j) )
  {
    v26 = *(_DWORD *)(v25 - 56);
    v27 = *(_QWORD *)(v25 - 48);
    v60 = _mm_loadu_si128((const __m128i *)(v25 - 88));
    v28 = _mm_loadu_si128((const __m128i *)(v25 - 72));
    v62 = v26;
    v61 = v28;
    if ( v27 )
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    v29 = *(_QWORD *)(v25 - 16);
    v30 = _mm_load_si128(&v60);
    ptr[0] = nullptr;
    v31 = *(char **)(v25 - 40);
    v32 = *(_DWORD *)(v25 - 8);
    *(_QWORD *)(v25 - 40) = 0;
    v33 = _mm_loadu_si128((const __m128i *)(v25 - 32));
    v66 = v29;
    v68 = v30;
    v34 = _mm_load_si128(&v61);
    v64 = v31;
    v67 = v32;
    v70 = v62;
    v65 = v33;
    *(_OWORD *)(v25 - 32) = 0;
    v69 = v34;
    if ( v27 )
    {
      v35 = *(_QWORD *)v27;
      v55.m128i_i64[0] = (__int64)v31;
      v56 = v33;
      ptr[0] = (void *)(*(__int64 (__fastcall **)(__int64))(v35 + 16))(v27);
      v33 = _mm_load_si128(&v56);
      v31 = (char *)v55.m128i_i64[0];
    }
    v74 = v32;
    ptr[1] = v31;
    v64 = nullptr;
    v73 = v66;
    v72 = v33;
    v65 = 0;
    sub_4C0890(a1, (__int64)v58, v10, (__int64)&v68);
    v25 -= 88;
    sub_4C0590(&v68);
    if ( !v58 )
      break;
    --v58;
    v63 = v27;
  }
  v63 = v27;
  sub_4C0590(j);
  while ( v8 - a1 > 88 )
  {
    v39 = _mm_loadu_si128((const __m128i *)(v8 - 88));
    v40 = *(_DWORD *)(v8 - 56);
    v8 -= 88;
    v41 = *(void **)(v8 + 40);
    v60 = v39;
    v42 = _mm_loadu_si128((const __m128i *)(v8 + 16));
    v62 = v40;
    v61 = v42;
    if ( v41 )
      v41 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v41 + 16LL))(v41);
    v43 = *(char **)(v8 + 48);
    v44 = _mm_loadu_si128((const __m128i *)(v8 + 56));
    *(_QWORD *)(v8 + 48) = 0;
    v45 = *(_DWORD *)(v8 + 80);
    *(_OWORD *)(v8 + 56) = 0;
    v58 = v43;
    v64 = v43;
    v46 = *(_QWORD *)(v8 + 72);
    v67 = v45;
    v66 = v46;
    v55 = v44;
    v65 = v44;
    if ( a1 != v8 )
    {
      v47 = *(void **)(v8 + 40);
      if ( v47 )
      {
        qfree(v47);
        *(_QWORD *)(v8 + 40) = 0;
      }
      *(__m128i *)v8 = _mm_loadu_si128((const __m128i *)a1);
      *(__m128i *)(v8 + 16) = _mm_loadu_si128((const __m128i *)(a1 + 16));
      *(_DWORD *)(v8 + 32) = *(_DWORD *)(a1 + 32);
      v48 = *(_QWORD *)(a1 + 40);
      if ( v48 )
        *(_QWORD *)(v8 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    v49 = *(_QWORD *)(a1 + 48);
    v50 = _mm_loadu_si128((const __m128i *)(a1 + 56));
    *(_QWORD *)(a1 + 48) = 0;
    *(_OWORD *)(a1 + 56) = 0;
    v51 = *(void **)(v8 + 48);
    if ( v51 )
    {
      *(_QWORD *)(v8 + 56) = 0;
      v56.m128i_i64[0] = v49;
      v57 = v50;
      qfree(v51);
      v50 = _mm_load_si128(&v57);
      v49 = v56.m128i_i64[0];
    }
    *(__m128i *)(v8 + 56) = v50;
    v52 = _mm_load_si128(&v60);
    *(_QWORD *)(v8 + 48) = v49;
    v53 = *(_QWORD *)(a1 + 72);
    v68 = v52;
    v54 = _mm_load_si128(&v61);
    *(_QWORD *)(v8 + 72) = v53;
    LODWORD(v53) = *(_DWORD *)(a1 + 80);
    v69 = v54;
    *(_DWORD *)(v8 + 80) = v53;
    v70 = v62;
    if ( v41 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v41 + 16LL))(v41);
    v36 = _mm_load_si128(&v55);
    v37 = _mm_loadh_ps((const double *)&v58);
    v74 = v45;
    v64 = nullptr;
    v72 = v36;
    v73 = v66;
    v65 = 0;
    *(__m128 *)ptr = v37;
    sub_4C0890(a1, 0, 0x2E8BA2E8BA2E8BA3LL * ((v8 - a1) >> 3), (__int64)&v68);
    v38 = ptr[0];
    if ( ptr[1] )
    {
      v58 = (char *)ptr[0];
      qfree(ptr[1]);
      v38 = v58;
    }
    if ( v38 )
      qfree(v38);
    if ( v41 )
      qfree(v41);
  }
  return v75 - __readfsqword(0x28u);
}
