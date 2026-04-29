__int64 __fastcall sub_309E60(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  int v5; // eax
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __m128i v14; // xmm1
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rax
  unsigned int v18; // r15d
  __int64 v19; // r12
  int v20; // r14d
  unsigned int v21; // r13d
  __int64 v22; // r12
  __int64 v23; // rcx
  void *v24; // rax
  const void *v25; // rsi
  __int64 v26; // r12
  __int64 *v27; // rbx
  __int64 *v28; // rbp
  __int64 *v29; // rdi
  void *v31; // rax
  const void *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdx
  __m128i v35; // xmm0
  __int64 v36; // rdx
  void *v37; // rdx
  __int64 v38; // rax
  __int64 (__fastcall *v39)(__int64, int); // rax
  unsigned int v40; // r13d
  __int64 v41; // r14
  __int64 (__fastcall *v42)(__int64, int, int); // rax
  unsigned int v43; // r12d
  __int64 v44; // rax
  __m128i *v45; // rcx
  __int64 *v46; // rdx
  unsigned int v47; // eax
  __m128i v48; // [rsp+0h] [rbp-108h] BYREF
  __int64 *v49; // [rsp+10h] [rbp-F8h]
  __int64 v50; // [rsp+18h] [rbp-F0h]
  __int64 *v51; // [rsp+20h] [rbp-E8h]
  __int64 v52; // [rsp+28h] [rbp-E0h]
  size_t n; // [rsp+30h] [rbp-D8h]
  __m128i *v54; // [rsp+38h] [rbp-D0h]
  __m128i v55; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+50h] [rbp-B8h]
  _QWORD v57[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+70h] [rbp-98h] BYREF
  __int64 v59; // [rsp+78h] [rbp-90h]
  void *v60; // [rsp+80h] [rbp-88h] BYREF
  __m128i v61; // [rsp+88h] [rbp-80h]
  __int64 v62; // [rsp+A0h] [rbp-68h] BYREF
  void *v63; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v64; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v65; // [rsp+C8h] [rbp-40h]

  v3 = *a1;
  v65 = __readfsqword(0x28u);
  v54 = &v55;
  v48 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v55, (__m128i)(unsigned __int64)&v55);
  v5 = (*(__int64 (__fastcall **)(__int64 *))(v3 + 80))(a1);
  v6 = _mm_load_si128(&v48);
  v7 = *(_QWORD *)(a2 + 8) + 40LL * v5;
  v8 = *(_QWORD *)v7;
  *(_QWORD *)v7 = *(_QWORD *)(a2 + 72);
  v9 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v8;
  v10 = *(_QWORD *)(v7 + 8);
  *(_QWORD *)(v7 + 8) = v9;
  v11 = *(_QWORD *)(a2 + 88);
  *(_QWORD *)(a2 + 80) = v10;
  v12 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(v7 + 16) = v11;
  v13 = *(_QWORD *)(a2 + 96);
  v14 = _mm_loadu_si128((const __m128i *)(v7 + 24));
  v55 = v6;
  *(_QWORD *)(v7 + 24) = v13;
  v15 = *(_QWORD *)(a2 + 104);
  v56 = 0;
  *(_QWORD *)(v7 + 32) = v15;
  *(_QWORD *)(a2 + 88) = v12;
  *(__m128i *)(a2 + 96) = v14;
  v57[0] = 0;
  v57[1] = 0;
  sub_309BB0(a1, &v55, 1);
  v51 = v57;
  v48.m128i_i64[0] = (__int64)&v62;
  while ( v56 )
  {
    while ( 1 )
    {
      v16 = v55.m128i_i64[0];
      v17 = *(_QWORD *)v55.m128i_i64[0];
      v18 = *(_DWORD *)(v55.m128i_i64[0] + 16);
      **(_QWORD **)(v55.m128i_i64[0] + 8) = *(_QWORD *)v55.m128i_i64[0];
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(v16 + 8);
      qfree(v16);
      --v56;
      sub_5DDC0(v51, v18);
      if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 80))(a1) == v18 )
        break;
      v50 = a2 + 32;
      v49 = &v58;
      sub_5DA80(&v58, a2 + 32);
      v19 = *(_QWORD *)(a2 + 56);
      v60 = nullptr;
      v61 = 0;
      if ( v19 )
      {
        v31 = (void *)qalloc_or_throw(16 * v19);
        v32 = *(const void **)(a2 + 48);
        v60 = v31;
        v61.m128i_i64[1] = v19;
        memcpy(v31, v32, 16 * v19);
        v61.m128i_i64[0] = v19;
      }
      v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v18);
      v21 = 0;
      if ( v20 > 0 )
      {
        do
        {
          v22 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v18, v21);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v22, v18) )
          {
            sub_5DA80((__int64 *)v48.m128i_i64[0], v50);
            v23 = *(_QWORD *)(a2 + 56);
            v63 = nullptr;
            v64 = 0;
            if ( v23 )
            {
              v52 = v23;
              n = 16 * v23;
              v24 = (void *)qalloc_or_throw(16 * v23);
              v25 = *(const void **)(a2 + 48);
              v63 = v24;
              *((_QWORD *)&v64 + 1) = v52;
              memcpy(v24, v25, n);
              *(_QWORD *)&v64 = v52;
            }
            (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
              a2,
              v48.m128i_i64[0],
              (unsigned int)v22,
              v18);
            if ( *(_DWORD *)(a2 + 112) == 1 )
            {
              sub_5DD00(v49, (__int64 *)v48.m128i_i64[0]);
              sub_30F930(&v60, &v63);
            }
            else
            {
              sub_5E180(v49, (__int64 *)v48.m128i_i64[0]);
              sub_310D40(&v60, &v63);
            }
            if ( v63 )
            {
              *(_QWORD *)&v64 = 0;
              qfree(v63);
            }
            qfree(v62);
          }
          ++v21;
        }
        while ( v20 != v21 );
      }
      v26 = 40LL * (int)v18;
      if ( sub_11C570(v26 + *(_QWORD *)(a2 + 8), (__int64)v49) )
      {
        v33 = v26 + *(_QWORD *)(a2 + 8);
        v34 = *(_QWORD *)v33;
        v35 = _mm_loadu_si128((const __m128i *)(v33 + 24));
        *(_QWORD *)v33 = v58;
        v58 = v34;
        v36 = *(_QWORD *)(v33 + 8);
        *(_QWORD *)(v33 + 8) = v59;
        v59 = v36;
        v37 = *(void **)(v33 + 16);
        *(_QWORD *)(v33 + 16) = v60;
        v60 = v37;
        *(__m128i *)(v33 + 24) = v61;
        v38 = *a1;
        v61 = v35;
        v39 = *(__int64 (__fastcall **)(__int64, int))(v38 + 96);
        LODWORD(v49) = v39 == sub_5EB10 ? sub_5EB10((__int64)a1, v18) : (unsigned int)v39((__int64)a1, v18);
        if ( (int)v49 > 0 )
        {
          v40 = 0;
          do
          {
            v41 = *a1;
            v42 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
            if ( v42 == sub_5EB50 )
            {
              v43 = sub_5EB50((__int64)a1, v18, v40);
            }
            else
            {
              v47 = v42((__int64)a1, v18, v40);
              v41 = *a1;
              v43 = v47;
            }
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v41 + 152))(a1, v18, v43)
              && (unsigned __int8)sub_5DC10(v51, v43) )
            {
              v44 = qalloc_or_throw(24);
              v45 = v54;
              *(_DWORD *)(v44 + 16) = v43;
              *(_QWORD *)v44 = v45;
              v46 = (__int64 *)v55.m128i_i64[1];
              *(_QWORD *)(v44 + 8) = v55.m128i_i64[1];
              *v46 = v44;
              v55.m128i_i64[1] = v44;
              ++v56;
            }
            ++v40;
          }
          while ( (_DWORD)v49 != v40 );
        }
      }
      if ( v60 )
      {
        v61.m128i_i64[0] = 0;
        qfree(v60);
      }
      qfree(v58);
      if ( !v56 )
        goto LABEL_22;
    }
  }
LABEL_22:
  qfree(v57[0]);
  v27 = (__int64 *)v55.m128i_i64[0];
  v28 = (__int64 *)v54;
  if ( (__m128i *)v55.m128i_i64[0] != v54 )
  {
    do
    {
      v29 = v27;
      v27 = (__int64 *)*v27;
      *(_QWORD *)v29[1] = v27;
      v27[1] = v29[1];
      qfree(v29);
      --v56;
    }
    while ( v27 != v28 );
  }
  return 1;
}
