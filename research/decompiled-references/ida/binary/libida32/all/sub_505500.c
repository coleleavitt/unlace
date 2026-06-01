unsigned __int64 __fastcall sub_505500(_QWORD *a1, unsigned int a2, unsigned int a3, int a4, char a5)
{
  __int64 v6; // rax
  signed int v7; // edx
  int i; // eax
  __int64 *v9; // rbp
  __m128i *v10; // r15
  unsigned int *v11; // r13
  const __m128i *v12; // rbx
  __int64 v13; // r12
  __m128i *v14; // r13
  const char *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r9
  unsigned int *v18; // r15
  __int64 v19; // rax
  size_t v20; // r10
  size_t v21; // r9
  size_t v22; // r11
  unsigned __int64 v23; // r8
  __int64 v24; // rax
  char *v25; // r9
  signed __int64 v26; // rbx
  __int64 v27; // rax
  void **v28; // rdi
  const __m128i *v29; // rbx
  unsigned int v30; // r12d
  __int64 v31; // rdx
  char *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int32 v36; // r9d
  __int8 v37; // r8
  const char *v38; // rsi
  unsigned __int32 v39; // r11d
  unsigned __int32 v40; // r10d
  __m128i *v41; // rax
  __int64 v42; // rax
  size_t v43; // r12
  size_t v44; // r13
  size_t v45; // r9
  char *v46; // rsi
  size_t v47; // rax
  size_t v48; // r12
  __int64 v49; // rsi
  int v50; // ecx
  int v51; // ebp
  __int64 v52; // r8
  unsigned __int8 v53; // bp
  __int64 *v54; // r8
  __int64 *v55; // r12
  __int64 v56; // r15
  __int64 j; // rax
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // r13
  __int64 v62; // rax
  char *v63; // rsi
  size_t v64; // rax
  int v66; // [rsp+8h] [rbp-F0h]
  signed int v67; // [rsp+Ch] [rbp-ECh]
  unsigned __int64 src; // [rsp+10h] [rbp-E8h]
  unsigned __int32 srcc; // [rsp+10h] [rbp-E8h]
  void *srce; // [rsp+10h] [rbp-E8h]
  void *srca; // [rsp+10h] [rbp-E8h]
  char *srcb; // [rsp+10h] [rbp-E8h]
  void *srcg; // [rsp+10h] [rbp-E8h]
  void *srcd; // [rsp+10h] [rbp-E8h]
  void *srcf; // [rsp+10h] [rbp-E8h]
  unsigned __int32 v76; // [rsp+18h] [rbp-E0h]
  void *v77; // [rsp+18h] [rbp-E0h]
  void *v78; // [rsp+18h] [rbp-E0h]
  __int8 v79; // [rsp+20h] [rbp-D8h]
  size_t v80; // [rsp+20h] [rbp-D8h]
  size_t v81; // [rsp+20h] [rbp-D8h]
  __int32 v82; // [rsp+28h] [rbp-D0h]
  unsigned int v83; // [rsp+38h] [rbp-C0h]
  unsigned int v86; // [rsp+44h] [rbp-B4h]
  unsigned __int64 v87; // [rsp+48h] [rbp-B0h]
  void *v88; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v89; // [rsp+58h] [rbp-A0h]
  void *v90; // [rsp+70h] [rbp-88h] BYREF
  size_t n[3]; // [rsp+78h] [rbp-80h]
  void *ptr; // [rsp+90h] [rbp-68h] BYREF
  __int128 v93; // [rsp+98h] [rbp-60h]
  _BYTE v94[5]; // [rsp+B3h] [rbp-45h] BYREF
  _QWORD v95[8]; // [rsp+B8h] [rbp-40h] BYREF

  v95[0] = __readfsqword(0x28u);
  v86 = a2 + a4;
  v6 = a1[1];
  v7 = *(_DWORD *)(v6 + 72);
  v67 = *(_DWORD *)(v6 + 68);
  if ( v67 <= v7 )
  {
    for ( i = *(_DWORD *)(v6 + 68); ; i = *(_DWORD *)(v6 + 68) )
    {
      v9 = (__int64 *)(a1[2] + ((__int64)(v67 - i) << 6));
      v10 = (__m128i *)sub_4FED00((unsigned int **)v9, a2);
      if ( v10 == (__m128i *)(*v9 + 17 * v9[1]) )
        goto LABEL_34;
      if ( v10->m128i_i32[0] < a2 )
      {
        sub_5044E0(*a1, a2, v67, v10->m128i_u32[2], 3u, 0);
        v10 = (__m128i *)sub_4FED00((unsigned int **)v9, a2);
      }
      v11 = sub_4FED00((unsigned int **)v9, v86);
      if ( v11 != (unsigned int *)(*v9 + 17 * v9[1]) && *v11 < v86 )
      {
        sub_5044E0(*a1, v86, v67, v10->m128i_u32[2], 3u, 0);
        v11 = sub_4FED00((unsigned int **)v9, v86);
        v10 = (__m128i *)sub_4FED00((unsigned int **)v9, a2);
      }
      v88 = nullptr;
      v89 = 0;
      if ( v10 == (__m128i *)v11 )
      {
        v12 = nullptr;
        v13 = 0;
        v14 = nullptr;
        goto LABEL_11;
      }
      v28 = &v88;
      v87 = 0xF0F0F0F0F0F0F0F1LL * ((char *)v11 - (char *)v10);
      v88 = (void *)qvector_reserve(&v88, 0, v87, 17);
      v29 = v10;
      v30 = a3 - a2;
      v83 = (unsigned __int8)(v67 - *(_BYTE *)(a1[1] + 68LL) + 97);
      do
      {
        if ( !a5 )
        {
          v34 = v83;
          v28 = (void **)(a1 + 6);
          BYTE1(v34) = BYTE1(v83) | 1;
          sub_79B4D0(a1 + 6, *a1, v29->m128i_u32[0], v34);
        }
        v35 = v89;
        v36 = v29->m128i_i32[2];
        v37 = v29->m128i_i8[12];
        v38 = (const char *)v88;
        v39 = v30 + v29->m128i_i32[0];
        v40 = v30 + v29->m128i_i32[1];
        if ( *((_QWORD *)&v89 + 1) < (unsigned __int64)(v89 + 1) )
        {
          v28 = &v88;
          v82 = v29->m128i_i32[2];
          v79 = v29->m128i_i8[12];
          v76 = v30 + v29->m128i_i32[1];
          srcc = v30 + v29->m128i_i32[0];
          v88 = (void *)qvector_reserve(&v88, v88, v89 + 1, 17);
          v38 = (const char *)v88;
          v36 = v82;
          v35 = v89;
          v37 = v79;
          v40 = v76;
          v39 = srcc;
        }
        v29 = (const __m128i *)((char *)v29 + 17);
        v31 = 16 * v35;
        v32 = (char *)&v38[17 * v35];
        *(_DWORD *)v32 = v39;
        *((_DWORD *)v32 + 1) = v40;
        *((_DWORD *)v32 + 2) = v36;
        v32[12] = v37;
        v32[16] = 1;
        v33 = v89 + 1;
        *(_QWORD *)&v89 = v89 + 1;
      }
      while ( v11 != (unsigned int *)v29 );
      if ( v10 >= (__m128i *)v11 )
      {
        v14 = (__m128i *)v88;
        v13 = 17 * v33;
        v12 = (const __m128i *)((char *)v88 + 17 * v33);
        goto LABEL_11;
      }
      v90 = nullptr;
      *(_OWORD *)n = 0;
      if ( (unsigned __int8)must_journal(v28, v38, v31) )
      {
        v41 = v10;
        if ( (((_BYTE)v29 - (_BYTE)v10) & 1) == 0
          || (v41 = (__m128i *)((char *)v10 + 17), v10[1].m128i_i8[0] = 1, v29 != (const __m128i *)&v10[1].m128i_i8[1]) )
        {
          do
          {
            v41[1].m128i_i8[0] = 1;
            v41 = (__m128i *)((char *)v41 + 34);
            v41[-1].m128i_i8[15] = 1;
          }
          while ( v29 != v41 );
        }
        v38 = (const char *)v95;
        v42 = pack_dd(v94, v95, (unsigned int)v67) - (_QWORD)v94;
        v43 = v42;
        if ( v42 )
          break;
      }
LABEL_56:
      v48 = n[0];
      ptr = nullptr;
      v93 = 0;
      if ( n[0] )
      {
        ptr = (void *)qalloc_or_throw(n[0], v38);
        *((_QWORD *)&v93 + 1) = v48;
        memcpy(ptr, v90, v48);
        *(_QWORD *)&v93 = v48;
      }
      sub_505260((__int64 *)&ptr, v9, (__int64)v10, v10, v29, 0xBDu);
      if ( ptr )
      {
        *(_QWORD *)&v93 = 0;
        qfree(ptr);
      }
      memmove(v10, v29, *v9 + 17 * v9[1] - (_QWORD)v29);
      v9[1] -= v87;
      if ( v90 )
      {
        n[0] = 0;
        qfree(v90);
      }
      v14 = (__m128i *)v88;
      v13 = 17 * v89;
      v12 = (const __m128i *)((char *)v88 + 17 * v89);
LABEL_11:
      v15 = (const char *)a3;
      v9[3] = *v9 + 17 * v9[1];
      v18 = sub_4FED00((unsigned int **)v9, a3);
      if ( v14 < v12 )
      {
        v90 = nullptr;
        *(_OWORD *)n = 0;
        if ( (unsigned __int8)must_journal(v9, a3, v16) )
        {
          v15 = (const char *)v95;
          v19 = pack_dd(v94, v95, (unsigned int)v67) - (_QWORD)v94;
          v20 = v19;
          if ( v19 )
          {
            v21 = n[0];
            v22 = n[0] + v19;
            if ( __CFADD__(n[0], v19) )
            {
              if ( n[0] > 0x7FFFFFFFFFFFFFFELL )
              {
                if ( n[0] != 0x7FFFFFFFFFFFFFFFLL )
                  n[0] = 0x7FFFFFFFFFFFFFFFLL;
                goto LABEL_18;
              }
              v22 = 0x7FFFFFFFFFFFFFFFLL;
            }
            v63 = (char *)v90;
            v64 = n[0];
            if ( n[1] < v22 )
            {
              v81 = n[0];
              v78 = (void *)v20;
              srcf = (void *)v22;
              v90 = (void *)qvector_reserve(&v90, v90, v22, 1);
              v63 = (char *)v90;
              v64 = n[0];
              v21 = v81;
              v20 = (size_t)v78;
              v22 = (size_t)srcf;
            }
            v80 = v21;
            v77 = (void *)v20;
            srcg = (void *)v22;
            memset(&v63[v64], 0, v22 - v64);
            v20 = (size_t)v77;
            v21 = v80;
            n[0] = (size_t)srcg;
LABEL_18:
            v15 = v94;
            memcpy((char *)v90 + v21, v94, v20);
          }
        }
        ptr = nullptr;
        v93 = 0;
        if ( n[0] )
        {
          srca = (void *)n[0];
          ptr = (void *)qalloc_or_throw(n[0], v15);
          *((_QWORD *)&v93 + 1) = srca;
          memcpy(ptr, v90, (size_t)srca);
          *(_QWORD *)&v93 = srca;
        }
        sub_505260((__int64 *)&ptr, v9, (__int64)v18, v14, v12, 0xBCu);
        if ( ptr )
        {
          *(_QWORD *)&v93 = 0;
          qfree(ptr);
        }
        v23 = 0xF0F0F0F0F0F0F0F1LL * v13;
        if ( 0xF0F0F0F0F0F0F0F1LL * v13 )
        {
          v24 = v9[1];
          v25 = (char *)v18 - *v9;
          if ( v9[2] < v23 + v24 )
          {
            srcb = (char *)v18 - *v9;
            v62 = qvector_reserve(v9, *v9, v23 + v24, 17);
            v25 = srcb;
            v23 = 0xF0F0F0F0F0F0F0F1LL * v13;
            *v9 = v62;
            v18 = (unsigned int *)&srcb[v62];
            v24 = v9[1];
          }
          src = v23;
          v26 = (char *)v12 - (char *)v14;
          memmove((char *)v18 + v13, v18, 17 * v24 - (_QWORD)v25);
          v27 = 0;
          do
          {
            *(__m128i *)((char *)v18 + v27) = _mm_loadu_si128((__m128i *)((char *)v14 + v27));
            *((_BYTE *)v18 + v27 + 16) = v14[1].m128i_i8[v27];
            v27 += 17;
          }
          while ( v26 != v27 );
          v9[1] += src;
        }
        if ( v90 )
        {
          n[0] = 0;
          qfree(v90);
        }
        v14 = (__m128i *)v88;
        v17 = *v9 + 17 * v9[1];
      }
      v9[3] = v17;
      if ( v14 )
      {
        *(_QWORD *)&v89 = 0;
        qfree(v14);
      }
LABEL_34:
      v6 = a1[1];
      ++v67;
      v7 = *(_DWORD *)(v6 + 72);
      if ( v7 < v67 )
        goto LABEL_64;
    }
    v44 = n[0];
    v45 = n[0] + v42;
    if ( __CFADD__(n[0], v42) )
    {
      if ( n[0] > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( n[0] != 0x7FFFFFFFFFFFFFFFLL )
          n[0] = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_55;
      }
      v45 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v46 = (char *)v90;
    v47 = n[0];
    if ( n[1] < v45 )
    {
      srcd = (void *)v45;
      v90 = (void *)qvector_reserve(&v90, v90, v45, 1);
      v46 = (char *)v90;
      v47 = n[0];
      v45 = (size_t)srcd;
    }
    srce = (void *)v45;
    memset(&v46[v47], 0, v45 - v47);
    n[0] = (size_t)srce;
LABEL_55:
    v38 = v94;
    memcpy((char *)v90 + v44, v94, v43);
    goto LABEL_56;
  }
LABEL_64:
  if ( *((_DWORD *)a1 + 12) != -1 )
  {
    v49 = a1[3];
    if ( v49 )
    {
      v50 = *(_DWORD *)(v6 + 68);
      if ( v49 != v7 + 1 - v50 )
        sub_4FC990();
      if ( v50 <= *(_DWORD *)(v6 + 72) )
      {
        v66 = *(_DWORD *)(v6 + 68);
        do
        {
          v51 = v66 - *(_DWORD *)(v6 + 68);
          v52 = v51;
          v53 = v51 + 97;
          v54 = (__int64 *)(a1[2] + (v52 << 6));
          LODWORD(ptr) = *((_DWORD *)a1 + 12);
          v55 = v54;
          v56 = qword_2CA1698;
          for ( j = v54[5]; j; v55[5] = j )
          {
            sub_79B4D0(&ptr, v56, *(unsigned int *)(v55[4] + 4 * j - 4), v53);
            v58 = v55[5];
            if ( !v58 )
              break;
            j = v58 - 1;
          }
          v59 = *v55;
          v60 = *v55;
          if ( v55[1] )
          {
            do
            {
              if ( *(_BYTE *)(v60 + 16) )
              {
                if ( !(unsigned __int8)sub_4FC860((unsigned int *)v60, (int)ptr, v53) )
                {
                  if ( !under_debugger )
                    interr(1173);
                  BUG();
                }
                *(_BYTE *)(v60 + 16) = 0;
                v59 = *v55;
              }
              v60 += 17;
            }
            while ( v60 != v59 + 17 * v55[1] );
          }
          v6 = a1[1];
          ++v66;
        }
        while ( v66 <= *(_DWORD *)(v6 + 72) );
      }
    }
  }
  return v95[0] - __readfsqword(0x28u);
}

