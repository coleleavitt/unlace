__int64 __fastcall sub_3111E0(__int64 *a1, __int64 a2)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r12
  int v22; // r14d
  unsigned int v23; // r13d
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rcx
  void *v27; // rax
  const void *v28; // rsi
  __int64 v29; // r12
  __int64 *v30; // rbx
  __int64 *v31; // rbp
  __int64 v32; // rdi
  void *v34; // rax
  const void *v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rdx
  __m128i v38; // xmm0
  __int64 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 (__fastcall *v42)(__int64, int); // rax
  unsigned int v43; // r13d
  __int64 v44; // r14
  __int64 (__fastcall *v45)(__int64, int, int); // rax
  unsigned int v46; // r12d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  __m128i *v50; // rcx
  __int64 *v51; // rdx
  unsigned int v52; // eax
  __m128i v53; // [rsp+0h] [rbp-108h] BYREF
  __int64 *v54; // [rsp+10h] [rbp-F8h]
  __int64 v55; // [rsp+18h] [rbp-F0h]
  __int64 *v56; // [rsp+20h] [rbp-E8h]
  __int64 v57; // [rsp+28h] [rbp-E0h]
  size_t n; // [rsp+30h] [rbp-D8h]
  __m128i *v59; // [rsp+38h] [rbp-D0h]
  __m128i v60; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+50h] [rbp-B8h]
  __int64 v62[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+70h] [rbp-98h] BYREF
  __int64 v64; // [rsp+78h] [rbp-90h]
  __int64 v65; // [rsp+80h] [rbp-88h] BYREF
  __m128i v66; // [rsp+88h] [rbp-80h]
  __int64 v67; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v69; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v70; // [rsp+C8h] [rbp-40h]

  v3 = *a1;
  v70 = __readfsqword(0x28u);
  v59 = &v60;
  v53 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v60, (__m128i)(unsigned __int64)&v60);
  v5 = (*(__int64 (__fastcall **)(__int64 *))(v3 + 80))(a1);
  v6 = _mm_load_si128(&v53);
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
  v60 = v6;
  *(_QWORD *)(v7 + 24) = v13;
  v15 = *(_QWORD *)(a2 + 104);
  v61 = 0;
  *(_QWORD *)(v7 + 32) = v15;
  *(_QWORD *)(a2 + 88) = v12;
  *(__m128i *)(a2 + 96) = v14;
  v62[0] = 0;
  v62[1] = 0;
  sub_310F30(a1, &v60, 1);
  v56 = v62;
  v53.m128i_i64[0] = (__int64)&v67;
  while ( v61 )
  {
    while ( 1 )
    {
      v16 = v60.m128i_i64[0];
      v17 = *(_QWORD *)v60.m128i_i64[0];
      v18 = *(_DWORD *)(v60.m128i_i64[0] + 16);
      **(_QWORD **)(v60.m128i_i64[0] + 8) = *(_QWORD *)v60.m128i_i64[0];
      *(_QWORD *)(v17 + 8) = *(_QWORD *)(v16 + 8);
      qfree(v16);
      --v61;
      sub_64340(v56, v18);
      if ( (*(unsigned int (__fastcall **)(__int64 *))(*a1 + 80))(a1) == v18 )
        break;
      v55 = a2 + 32;
      v54 = &v63;
      sub_64000(&v63, a2 + 32);
      v21 = *(_QWORD *)(a2 + 56);
      v65 = 0;
      v66 = 0;
      if ( v21 )
      {
        v34 = (void *)qalloc_or_throw(16 * v21, a2 + 32, v19, v20);
        v35 = *(const void **)(a2 + 48);
        v65 = (__int64)v34;
        v66.m128i_i64[1] = v21;
        memcpy(v34, v35, 16 * v21);
        v66.m128i_i64[0] = v21;
      }
      v22 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*a1 + 104))(a1, v18);
      v23 = 0;
      if ( v22 > 0 )
      {
        do
        {
          v24 = (*(unsigned int (__fastcall **)(__int64 *, _QWORD, _QWORD))(*a1 + 120))(a1, v18, v23);
          if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, __int64, _QWORD))(*a1 + 152))(a1, v24, v18) )
          {
            v25 = v55;
            sub_64000((__int64 *)v53.m128i_i64[0], v55);
            v26 = *(_QWORD *)(a2 + 56);
            v68 = 0;
            v69 = 0;
            if ( v26 )
            {
              v57 = v26;
              n = 16 * v26;
              v27 = (void *)qalloc_or_throw(16 * v26, v25, 16 * v26, v26);
              v28 = *(const void **)(a2 + 48);
              v68 = (__int64)v27;
              *((_QWORD *)&v69 + 1) = v57;
              memcpy(v27, v28, n);
              *(_QWORD *)&v69 = v57;
            }
            (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(
              a2,
              v53.m128i_i64[0],
              (unsigned int)v24,
              v18);
            if ( *(_DWORD *)(a2 + 112) == 1 )
            {
              sub_64280(v54, (__int64 *)v53.m128i_i64[0]);
              sub_316CB0(&v65, &v68);
            }
            else
            {
              sub_64700(v54, (__int64 *)v53.m128i_i64[0]);
              sub_3180C0(&v65, &v68);
            }
            if ( v68 )
            {
              *(_QWORD *)&v69 = 0;
              qfree(v68);
            }
            qfree(v67);
          }
          ++v23;
        }
        while ( v22 != v23 );
      }
      v29 = 40LL * (int)v18;
      if ( sub_122C30(v29 + *(_QWORD *)(a2 + 8), (__int64)v54) )
      {
        v36 = v29 + *(_QWORD *)(a2 + 8);
        v37 = *(_QWORD *)v36;
        v38 = _mm_loadu_si128((const __m128i *)(v36 + 24));
        *(_QWORD *)v36 = v63;
        v63 = v37;
        v39 = *(_QWORD *)(v36 + 8);
        *(_QWORD *)(v36 + 8) = v64;
        v64 = v39;
        v40 = *(_QWORD *)(v36 + 16);
        *(_QWORD *)(v36 + 16) = v65;
        v65 = v40;
        *(__m128i *)(v36 + 24) = v66;
        v41 = *a1;
        v66 = v38;
        v42 = *(__int64 (__fastcall **)(__int64, int))(v41 + 96);
        LODWORD(v54) = v42 == sub_65090 ? sub_65090((__int64)a1, v18) : (unsigned int)v42((__int64)a1, v18);
        if ( (int)v54 > 0 )
        {
          v43 = 0;
          do
          {
            v44 = *a1;
            v45 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112);
            if ( v45 == sub_650D0 )
            {
              v46 = sub_650D0((__int64)a1, v18, v43);
            }
            else
            {
              v52 = v45((__int64)a1, v18, v43);
              v44 = *a1;
              v46 = v52;
            }
            if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v44 + 152))(a1, v18, v46)
              && (unsigned __int8)sub_64190(v56, v46) )
            {
              v49 = qalloc_or_throw(24, v46, v47, v48);
              v50 = v59;
              *(_DWORD *)(v49 + 16) = v46;
              *(_QWORD *)v49 = v50;
              v51 = (__int64 *)v60.m128i_i64[1];
              *(_QWORD *)(v49 + 8) = v60.m128i_i64[1];
              *v51 = v49;
              v60.m128i_i64[1] = v49;
              ++v61;
            }
            ++v43;
          }
          while ( (_DWORD)v54 != v43 );
        }
      }
      if ( v65 )
      {
        v66.m128i_i64[0] = 0;
        qfree(v65);
      }
      qfree(v63);
      if ( !v61 )
        goto LABEL_22;
    }
  }
LABEL_22:
  qfree(v62[0]);
  v30 = (__int64 *)v60.m128i_i64[0];
  v31 = (__int64 *)v59;
  if ( (__m128i *)v60.m128i_i64[0] != v59 )
  {
    do
    {
      v32 = (__int64)v30;
      v30 = (__int64 *)*v30;
      **(_QWORD **)(v32 + 8) = v30;
      v30[1] = *(_QWORD *)(v32 + 8);
      qfree(v32);
      --v61;
    }
    while ( v30 != v31 );
  }
  return 1;
}
