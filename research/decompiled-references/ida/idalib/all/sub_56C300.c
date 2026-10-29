unsigned __int64 __fastcall sub_56C300(__int64 *a1, int a2, int a3)
{
  __int64 v3; // r10
  __int64 v4; // r9
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 *v11; // rbp
  int v12; // r12d
  unsigned __int64 v13; // rax
  char *v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r10
  __m128i v17; // xmm0
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm0
  __int64 v21; // r14
  char *v22; // rbx
  char *v23; // r13
  char *v24; // rbp
  void *v25; // rdi
  void *v26; // rdi
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rax
  char *v31; // rcx
  unsigned __int64 v32; // r8
  __int64 v33; // rax
  unsigned __int64 v34; // rsi
  unsigned __int64 i; // r14
  __int64 v36; // rcx
  int v37; // eax
  int v38; // edi
  __m128i v39; // xmm0
  unsigned __int64 v40; // xmm0_8
  unsigned __int64 *v41; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rax
  int v46; // [rsp+0h] [rbp-1B0h]
  unsigned __int64 v47; // [rsp+0h] [rbp-1B0h]
  __int64 *v48; // [rsp+8h] [rbp-1A8h]
  unsigned __int64 v49; // [rsp+10h] [rbp-1A0h]
  __int64 v50; // [rsp+18h] [rbp-198h]
  void *ptr; // [rsp+28h] [rbp-188h] BYREF
  __int128 v52; // [rsp+30h] [rbp-180h]
  __int64 v53; // [rsp+48h] [rbp-168h] BYREF
  __int64 v54; // [rsp+50h] [rbp-160h]
  void *v55; // [rsp+58h] [rbp-158h]
  __int128 v56; // [rsp+60h] [rbp-150h]
  void *v57; // [rsp+70h] [rbp-140h]
  __int128 v58; // [rsp+78h] [rbp-138h]
  __int128 v59[3]; // [rsp+88h] [rbp-128h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-F8h]
  int v61; // [rsp+C0h] [rbp-F0h]
  __int64 v62; // [rsp+C8h] [rbp-E8h]
  char v63; // [rsp+D0h] [rbp-E0h]
  __int128 v64; // [rsp+D8h] [rbp-D8h] BYREF
  void *v65; // [rsp+E8h] [rbp-C8h]
  __int128 v66; // [rsp+F0h] [rbp-C0h]
  void *v67; // [rsp+100h] [rbp-B0h]
  __int128 v68; // [rsp+108h] [rbp-A8h]
  _OWORD v69[3]; // [rsp+118h] [rbp-98h] BYREF
  __int64 v70; // [rsp+148h] [rbp-68h]
  int v71; // [rsp+150h] [rbp-60h]
  __int64 v72; // [rsp+158h] [rbp-58h]
  char v73; // [rsp+160h] [rbp-50h]
  unsigned __int64 v74; // [rsp+170h] [rbp-40h]

  v3 = a2;
  v4 = 144LL * a2;
  v5 = 144LL * (a3 - 1);
  v74 = __readfsqword(0x28u);
  v6 = *a1;
  v52 = 0;
  ptr = nullptr;
  v7 = v6 + v4;
  v8 = v6 + v5;
  v9 = *(_QWORD *)(v6 + v4);
  if ( (v9 & 7) != 0 )
  {
    if ( !under_debugger )
      interr(1775);
    BUG();
  }
  v11 = a1;
  v12 = a2;
  v13 = (unsigned __int64)(*(_QWORD *)v8 + *(_QWORD *)(v8 + 8) + 7LL - v9) >> 3;
  if ( v13 )
  {
    v50 = 144LL * (a3 - 1);
    v47 = (unsigned __int64)(*(_QWORD *)v8 + *(_QWORD *)(v8 + 8) + 7LL - v9) >> 3;
    ptr = (void *)qvector_reserve(&ptr, 0, v13, 1);
    v43 = v52;
    v3 = a2;
    v4 = 144LL * a2;
    v5 = v50;
    if ( (unsigned __int64)v52 < v47 )
    {
      *((_BYTE *)ptr + v52) = 0;
      v44 = v43 + 1;
      if ( v44 < v47 )
      {
        do
          *((_BYTE *)ptr + v44++) = 0;
        while ( v47 != v44 );
      }
    }
    v6 = *a1;
    *(_QWORD *)&v52 = v47;
    v14 = (char *)(v6 + 144LL * a2);
  }
  else
  {
    v14 = (char *)(v6 + v4);
  }
  if ( a2 < a3 )
  {
    v15 = v4;
    v16 = 144 * (v3 + (unsigned int)(a3 - a2));
    do
    {
      v17 = _mm_loadu_si128((const __m128i *)(v6 + v15));
      if ( v17.m128i_i64[0] < _mm_add_epi64(v17, _mm_srli_si128(v17, 8)).m128i_u64[0] )
      {
        v18 = v17.m128i_i64[0] - v9;
        do
        {
          v19 = v18;
          v18 += 8LL;
          *((_BYTE *)ptr + (v19 >> 3)) = 1;
          v20 = _mm_loadu_si128((const __m128i *)(v6 + v15));
        }
        while ( v9 + v18 < _mm_add_epi64(v20, _mm_srli_si128(v20, 8)).m128i_u64[0] );
        v6 = *v11;
      }
      v15 += 144;
    }
    while ( v16 != v15 );
    v14 = (char *)(v6 + v4);
  }
  if ( v5 != v4 )
  {
    do
    {
      if ( *(_QWORD *)(v8 + 8) )
        break;
      v8 -= 144;
    }
    while ( v8 != v7 );
  }
  v46 = *(_DWORD *)(v8 + 128);
  v21 = 144LL * (a3 - a2);
  v22 = &v14[v21];
  if ( &v14[v21] != v14 )
  {
    v48 = v11;
    v23 = v14;
    v24 = v14;
    do
    {
      clear_tinfo_t(v24 + 64);
      v25 = *((void **)v24 + 5);
      if ( v25 )
      {
        *((_QWORD *)v24 + 6) = 0;
        qfree(v25);
      }
      v26 = *((void **)v24 + 2);
      if ( v26 )
      {
        *((_QWORD *)v24 + 3) = 0;
        qfree(v26);
      }
      v24 += 144;
    }
    while ( v22 != v24 );
    v11 = v48;
    v14 = v23;
    v6 = *v48;
  }
  memmove(v14, v22, v6 + 144 * v11[1] - (_QWORD)v22);
  v27 = v52;
  v11[1] -= 0x8E38E38E38E38E39LL * (v21 >> 4);
  if ( v27 )
  {
    v49 = 0;
    v28 = 0;
    do
    {
      v29 = 0;
      v30 = v27 - v28;
      v31 = (char *)ptr + v28;
      while ( v31[v29] )
      {
        if ( v30 == ++v29 )
          goto LABEL_31;
      }
      if ( v29 )
      {
        v30 = v29;
      }
      else
      {
        while ( !v31[v29] )
        {
          if ( v30 == ++v29 )
            goto LABEL_31;
        }
        v30 = v29;
      }
      do
LABEL_31:
        v32 = v30--;
      while ( (v30 & v32) != 0 );
      v33 = 8;
      v34 = v9 + 8 * v28;
      if ( v32 <= 8 )
        v33 = v32;
      for ( i = v33; ; i >>= 1 )
      {
        v36 = 8 * i;
        if ( !(v34 % (8 * i)) )
          break;
      }
      v37 = *((unsigned __int8 *)v11 + 49);
      if ( !(_BYTE)v37 )
        v37 = *((_DWORD *)v11 + 10);
      if ( v37 < i )
      {
        do
          i >>= 1;
        while ( v37 < i );
        v36 = 8 * i;
      }
      v55 = nullptr;
      v57 = nullptr;
      v60 = 1;
      v61 = -1;
      v62 = 0;
      v63 = 0;
      v54 = v36;
      v53 = v9 + 8 * v28;
      v56 = 0;
      v58 = 0;
      v59[0] = 0;
      if ( v28 || v12 <= 0 )
      {
        v38 = v12;
      }
      else
      {
        v38 = v12;
        v39 = _mm_loadu_si128((const __m128i *)(*v11 + 144LL * (v12 - 1)));
        v40 = _mm_add_epi64(v39, _mm_srli_si128(v39, 8)).m128i_u64[0];
        if ( v40 < v34 )
        {
          *((_QWORD *)&v64 + 1) = v34 - v40;
          v70 = 1;
          v65 = nullptr;
          v67 = nullptr;
          v71 = -1;
          v72 = 0;
          v73 = 0;
          v66 = 0;
          v68 = 0;
          v69[0] = 0;
          *(_QWORD *)&v64 = v40;
          sub_56C170(v11, v12, (__int64)&v64);
          clear_tinfo_t(v69);
          if ( v67 )
          {
            *(_QWORD *)&v68 = 0;
            qfree(v67);
          }
          if ( v65 )
          {
            *(_QWORD *)&v66 = 0;
            qfree(v65);
          }
          v38 = v12 + 1;
        }
      }
      v12 = v38 + 1;
      sub_56C170(v11, v38, (__int64)&v53);
      v28 += i;
      if ( v28 >= v27 && 8 * v46 != v54 )
        v49 = v53 + v54;
      clear_tinfo_t(v59);
      if ( v57 )
      {
        *(_QWORD *)&v58 = 0;
        qfree(v57);
      }
      if ( v55 )
      {
        *(_QWORD *)&v56 = 0;
        qfree(v55);
      }
    }
    while ( v28 < v27 );
    if ( v49 )
    {
      if ( v12 < (unsigned __int64)v11[1] )
      {
        v41 = (unsigned __int64 *)(*v11 + 144LL * v12);
        if ( v49 < *v41 )
        {
          v64 = 0;
          v65 = nullptr;
          v70 = 1;
          v67 = nullptr;
          v71 = -1;
          v72 = 0;
          v73 = 0;
          v66 = 0;
          v68 = 0;
          v69[0] = 0;
          v45 = *v41;
          *(_QWORD *)&v64 = v49;
          *((_QWORD *)&v64 + 1) = v45 - v49;
          sub_56C170(v11, v12, (__int64)&v64);
          clear_tinfo_t(v69);
          if ( v67 )
          {
            *(_QWORD *)&v68 = 0;
            qfree(v67);
          }
          if ( v65 )
          {
            *(_QWORD *)&v66 = 0;
            qfree(v65);
          }
        }
      }
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v52 = 0;
    qfree(ptr);
  }
  return v74 - __readfsqword(0x28u);
}
