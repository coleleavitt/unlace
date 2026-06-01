__int64 __fastcall sub_11C2BD0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __m128i *a5, void *a6)
{
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r13
  void *v13; // rax
  void *v14; // rdx
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r9
  _QWORD *k; // rdx
  const __m128i *v21; // rbp
  const __m128i *v22; // rbx
  __int64 v23; // r15
  __int64 v24; // r14
  __int64 *v25; // rsi
  int v26; // eax
  int v27; // ebp
  int v28; // eax
  const void *v29; // r10
  unsigned int v30; // ecx
  int v31; // r11d
  __int64 v32; // rax
  const void *v33; // rsi
  unsigned int v34; // ecx
  int v35; // esi
  unsigned int v36; // ecx
  __int64 v37; // rsi
  int v39; // eax
  bool v40; // zf
  __int64 v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  __int64 *v45; // r15
  __m128i *v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  _QWORD *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rbp
  _QWORD *i; // rdx
  const __m128i *v53; // rbx
  __int64 v54; // r15
  __int64 v55; // r14
  const __m128i *v56; // rbp
  __int64 *v57; // rsi
  _QWORD *m; // rdx
  _QWORD *j; // rdx
  _QWORD *v61; // [rsp+28h] [rbp-A0h]
  __int64 v62; // [rsp+30h] [rbp-98h]
  const void *v63; // [rsp+30h] [rbp-98h]
  __int64 v64; // [rsp+30h] [rbp-98h]
  __int64 v65; // [rsp+38h] [rbp-90h]
  void *v66; // [rsp+38h] [rbp-90h]
  __int64 v67; // [rsp+38h] [rbp-90h]
  __m128i *v68; // [rsp+40h] [rbp-88h]
  unsigned int v69; // [rsp+48h] [rbp-80h]
  int v70; // [rsp+4Ch] [rbp-7Ch]
  __m128i *v71; // [rsp+50h] [rbp-78h] BYREF
  __m128i *v72; // [rsp+58h] [rbp-70h] BYREF
  void *s1[2]; // [rsp+60h] [rbp-68h] BYREF
  _QWORD *v74; // [rsp+70h] [rbp-58h] BYREF
  __int64 v75; // [rsp+78h] [rbp-50h]
  unsigned int v76; // [rsp+80h] [rbp-48h]

  v6 = 16 * a3;
  v7 = (__int64)a1;
  v8 = a2 + v6;
  *a1 = a1 + 2;
  v61 = a1 + 2;
  a1[1] = 0x300000000LL;
  v74 = nullptr;
  v75 = 0;
  v76 = 0;
  if ( a2 == a2 + v6 )
  {
    v10 = 0;
    v37 = 0;
    goto LABEL_36;
  }
  LODWORD(v9) = 0;
  v10 = 0;
  do
  {
    v11 = *(_QWORD *)(v8 - 8);
    v12 = *(_QWORD *)(v8 - 16);
    if ( v11 )
    {
      v13 = (void *)(v11 - 1);
      v14 = (void *)(v12 + 1);
    }
    else
    {
      v14 = *(void **)(v8 - 16);
      v13 = nullptr;
    }
    s1[0] = v14;
    s1[1] = v13;
    if ( !(_DWORD)v9 )
    {
      v71 = nullptr;
      goto LABEL_7;
    }
    v27 = v9 - 1;
    v28 = sub_2248890(v14, v13);
    a6 = s1[1];
    v29 = s1[0];
    v30 = v27 & v28;
    if ( s1[1] )
    {
      v31 = 1;
      a5 = nullptr;
      while ( 1 )
      {
        v32 = v10 + 16LL * v30;
        v33 = *(const void **)v32;
        if ( *(_QWORD *)v32 == -1 )
          break;
        if ( v33 == (const void *)-2LL )
        {
          if ( v29 == (const void *)-2LL )
            goto LABEL_34;
          if ( !a5 )
            a5 = (__m128i *)(v10 + 16LL * v30);
        }
        else if ( a6 == *(void **)(v32 + 8) )
        {
          v70 = v31;
          v69 = v30;
          v68 = a5;
          v66 = a6;
          v63 = v29;
          v39 = memcmp(v29, v33, (size_t)a6);
          v29 = v63;
          a6 = v66;
          a5 = v68;
          v30 = v69;
          v31 = v70;
          if ( !v39 )
            goto LABEL_34;
        }
        v34 = v31 + v30;
        ++v31;
        v30 = v27 & v34;
      }
    }
    else
    {
      v35 = 1;
      a5 = nullptr;
      while ( 1 )
      {
        v32 = v10 + 16LL * v30;
        if ( *(_QWORD *)v32 == -1 )
          break;
        if ( *(_QWORD *)v32 == -2 )
        {
          if ( s1[0] == (void *)-2LL )
            goto LABEL_34;
          if ( !a5 )
            a5 = (__m128i *)(v10 + 16LL * v30);
        }
        else if ( !*(_QWORD *)(v32 + 8) )
        {
          goto LABEL_34;
        }
        v36 = v35 + v30;
        ++v35;
        v30 = v27 & v36;
      }
    }
    if ( v29 != (const void *)-1LL )
    {
      v9 = v76;
      if ( !a5 )
        a5 = (__m128i *)v32;
      v26 = v75 + 1;
      v71 = a5;
      if ( 4 * ((int)v75 + 1) < 3 * v76 )
      {
        if ( v76 - (v26 + HIDWORD(v75)) > v76 >> 3 )
          goto LABEL_47;
        v64 = (__int64)v74;
        v48 = ((((((((((v76 - 1) | ((unsigned __int64)(v76 - 1) >> 1)) >> 2)
                   | (v76 - 1)
                   | ((unsigned __int64)(v76 - 1) >> 1)) >> 4)
                 | (((v76 - 1) | ((unsigned __int64)(v76 - 1) >> 1)) >> 2)
                 | (v76 - 1)
                 | ((unsigned __int64)(v76 - 1) >> 1)) >> 8)
               | (((((v76 - 1) | ((unsigned __int64)(v76 - 1) >> 1)) >> 2)
                 | (v76 - 1)
                 | ((unsigned __int64)(v76 - 1) >> 1)) >> 4)
               | (((v76 - 1) | ((unsigned __int64)(v76 - 1) >> 1)) >> 2)
               | (v76 - 1)
               | ((unsigned __int64)(v76 - 1) >> 1)) >> 16)
             | (((((((v76 - 1) | ((unsigned __int64)(v76 - 1) >> 1)) >> 2)
                 | (v76 - 1)
                 | ((unsigned __int64)(v76 - 1) >> 1)) >> 4)
               | (((v76 - 1) | ((unsigned __int64)(v76 - 1) >> 1)) >> 2)
               | (v76 - 1)
               | ((unsigned __int64)(v76 - 1) >> 1)) >> 8)
             | (((((v76 - 1) | ((unsigned __int64)(v76 - 1) >> 1)) >> 2) | (v76 - 1)
                                                                         | ((unsigned __int64)(v76 - 1) >> 1)) >> 4)
             | (((v76 - 1) | ((unsigned __int64)(v76 - 1) >> 1)) >> 2)
             | (v76 - 1)
             | ((unsigned __int64)(v76 - 1) >> 1))
            + 1;
        if ( (unsigned int)v48 < 0x40 )
          LODWORD(v48) = 64;
        v76 = v48;
        v49 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v48, 8, 64, v74, a5, a6);
        v50 = v64;
        v74 = v49;
        if ( v64 )
        {
          v51 = 16 * v9;
          v75 = 0;
          for ( i = &v49[2 * v76]; i != v49; *(v49 - 1) = 0 )
          {
            *v49 = -1;
            v49 += 2;
          }
          if ( v64 != v64 + v51 )
          {
            v67 = v8;
            v53 = (const __m128i *)(v64 + v51);
            v54 = v7;
            v55 = v51;
            v56 = (const __m128i *)v64;
            do
            {
              while ( v56->m128i_i64[0] == -1 || v56->m128i_i64[0] == -2 )
              {
                if ( v53 == ++v56 )
                  goto LABEL_71;
              }
              v57 = (__int64 *)v56++;
              sub_10E92B0((__int64 *)&v74, v57, &v72);
              *v72 = _mm_loadu_si128(v56 - 1);
              LODWORD(v75) = v75 + 1;
            }
            while ( v53 != v56 );
LABEL_71:
            v51 = v55;
            v8 = v67;
            v7 = v54;
            v50 = v64;
          }
          operator delete(v50, v51, 8);
        }
        else
        {
          v75 = 0;
          for ( j = &v49[2 * v76]; j != v49; *(v49 - 1) = 0 )
          {
            *v49 = -1;
            v49 += 2;
          }
        }
LABEL_20:
        sub_10E92B0((__int64 *)&v74, s1, &v71);
        a5 = v71;
        v26 = v75 + 1;
LABEL_47:
        v40 = a5->m128i_i64[0] == -1;
        LODWORD(v75) = v26;
        if ( !v40 )
          --HIDWORD(v75);
        v41 = *(unsigned int *)(v7 + 8);
        *a5 = _mm_load_si128((const __m128i *)s1);
        LODWORD(v42) = v41;
        v43 = 16 * v41;
        if ( 16 * v41 )
        {
          v44 = v41 + 1;
          if ( v44 > *(unsigned int *)(v7 + 12) )
          {
            sub_2237220(v7, v61, v44, 16);
            v45 = *(__int64 **)v7;
            v42 = *(unsigned int *)(v7 + 8);
            v43 = 16 * v42;
            v46 = (__m128i *)(*(_QWORD *)v7 + 16 * v42);
          }
          else
          {
            v45 = *(__int64 **)v7;
            v46 = (__m128i *)(*(_QWORD *)v7 + v43);
          }
          *v46 = _mm_loadu_si128((const __m128i *)&v45[(unsigned __int64)v43 / 8 - 2]);
          if ( *(_QWORD *)v7 + v43 - 16 - (__int64)v45 > 0 )
          {
            v47 = (*(_QWORD *)v7 + v43 - 16 - (__int64)v45) >> 4;
            memmove(
              (void *)(*(_QWORD *)v7 + -16 * v47 + v43),
              (const void *)(-16 * v47 + *(_QWORD *)v7 + v43 - 16),
              *(_QWORD *)v7 + v43 - 16 - (_QWORD)v45);
          }
          *(_DWORD *)(v7 + 8) = v42 + 1;
          *v45 = v12;
          v45[1] = v11;
        }
        else
        {
          sub_111E070(v7, v12, v11);
        }
        goto LABEL_34;
      }
LABEL_7:
      v62 = (__int64)v74;
      v15 = (((((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
              | (unsigned int)(2 * v9 - 1)
              | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
            | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v9 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 8)
          | (((((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
            | (unsigned int)(2 * v9 - 1)
            | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 4)
          | (((unsigned int)(2 * v9 - 1) | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1)) >> 2)
          | (unsigned int)(2 * v9 - 1)
          | ((unsigned __int64)(unsigned int)(2 * v9 - 1) >> 1);
      v16 = ((v15 >> 16) | v15) + 1;
      if ( (unsigned int)v16 < 0x40 )
        LODWORD(v16) = 64;
      v76 = v16;
      v17 = (_QWORD *)sub_22300B0(16LL * (unsigned int)v16, 8, 64, v74, a5, a6);
      v18 = v62;
      v74 = v17;
      if ( v62 )
      {
        v75 = 0;
        v19 = 16LL * (unsigned int)v9;
        for ( k = &v17[2 * v76]; k != v17; *(v17 - 1) = 0 )
        {
          *v17 = -1;
          v17 += 2;
        }
        if ( v62 != v62 + v19 )
        {
          v21 = (const __m128i *)(v62 + v19);
          v65 = v8;
          v22 = (const __m128i *)v62;
          v23 = v7;
          v24 = v19;
          do
          {
            while ( v22->m128i_i64[0] == -1 || v22->m128i_i64[0] == -2 )
            {
              if ( v21 == ++v22 )
                goto LABEL_18;
            }
            v25 = (__int64 *)v22++;
            sub_10E92B0((__int64 *)&v74, v25, &v72);
            *v72 = _mm_loadu_si128(v22 - 1);
            LODWORD(v75) = v75 + 1;
          }
          while ( v21 != v22 );
LABEL_18:
          v19 = v24;
          v8 = v65;
          v7 = v23;
          v18 = v62;
        }
        operator delete(v18, v19, 8);
      }
      else
      {
        v75 = 0;
        for ( m = &v17[2 * v76]; m != v17; *(v17 - 1) = 0 )
        {
          *v17 = -1;
          v17 += 2;
        }
      }
      goto LABEL_20;
    }
LABEL_34:
    v8 -= 16;
    LODWORD(v9) = v76;
    v10 = (__int64)v74;
  }
  while ( a2 != v8 );
  v37 = 16LL * v76;
LABEL_36:
  operator delete(v10, v37, 8);
  return v7;
}
