unsigned __int64 __fastcall sub_2D42D0(_DWORD *a1, __int64 a2, int a3, int *a4, char a5)
{
  const char *v5; // rsi
  char *v6; // rdi
  __int64 v8; // rsi
  char *v9; // rsi
  __int32 v10; // r12d
  char v11; // al
  unsigned __int64 v12; // rbp
  __int64 v13; // rbx
  bool v14; // bp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  const char *v18; // r14
  void *v19; // r9
  char *v20; // r13
  void *v21; // r15
  char *v22; // rbx
  __int64 v23; // rdi
  char *v24; // rax
  int v25; // eax
  size_t v26; // rax
  __int64 v27; // r15
  size_t v28; // rbp
  __int128 v29; // rax
  unsigned __int64 v30; // rdi
  void *v31; // rbp
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  char *v34; // rax
  void *v35; // rdi
  __m128i v36; // xmm0
  char *v37; // rax
  unsigned __int64 v38; // rax
  __int64 *v39; // rbx
  _QWORD *v40; // r13
  __int64 v41; // rsi
  __int64 v42; // rax
  const char *v43; // rsi
  __int32 v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rbp
  __int64 *v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rdi
  int *v51; // rax
  char *v52; // rdx
  __int64 v53; // rbp
  __int64 v54; // rbx
  char *v55; // rax
  __int64 v56; // rdi
  void **v57; // r13
  int v58; // r14d
  __int64 v59; // r15
  unsigned __int64 v60; // rbx
  char *v61; // rax
  unsigned int v62; // edi
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r14
  _BYTE *v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v69; // [rsp+18h] [rbp-140h]
  __m128i v70; // [rsp+20h] [rbp-138h] BYREF
  __int64 v71; // [rsp+30h] [rbp-128h]
  void *p_dest; // [rsp+38h] [rbp-120h]
  int *v73; // [rsp+40h] [rbp-118h]
  char v74; // [rsp+4Ah] [rbp-10Eh]
  char v75; // [rsp+4Bh] [rbp-10Dh]
  int v76; // [rsp+4Ch] [rbp-10Ch]
  __int64 v77; // [rsp+50h] [rbp-108h]
  __int64 v78; // [rsp+58h] [rbp-100h]
  char *v79; // [rsp+60h] [rbp-F8h] BYREF
  __int128 v80; // [rsp+68h] [rbp-F0h]
  void *dest; // [rsp+80h] [rbp-D8h] BYREF
  __int128 v82; // [rsp+88h] [rbp-D0h]
  void *v83; // [rsp+A0h] [rbp-B8h] BYREF
  __m128i v84; // [rsp+A8h] [rbp-B0h] BYREF
  __int64 v85; // [rsp+C0h] [rbp-98h] BYREF
  __int128 v86; // [rsp+C8h] [rbp-90h]
  __int64 v87; // [rsp+D8h] [rbp-80h]
  __int64 v88; // [rsp+F0h] [rbp-68h]
  __int128 v89; // [rsp+F8h] [rbp-60h]
  int v90; // [rsp+108h] [rbp-50h]
  int v91; // [rsp+10Ch] [rbp-4Ch]
  unsigned __int64 v92; // [rsp+118h] [rbp-40h]

  v77 = a2;
  v73 = a4;
  v92 = __readfsqword(0x28u);
  LOBYTE(v76) = 0;
  if ( !a5 )
    LOBYTE(v76) = *((_BYTE *)a4 + 56);
  v80 = 0;
  v79 = nullptr;
  if ( (unsigned __int8)callui(66, (unsigned int)&v79, a3, *v73, (int)v77 + 100, (unsigned int)&callui)
    && (unsigned __int64)v80 > 1
    || *v73 <= 0 )
  {
    v5 = (const char *)&v79;
    sub_2D4060(v77, &v79);
  }
  else
  {
    dest = nullptr;
    v82 = 0;
    if ( dword_8BA8F4 <= 1 )
    {
      LOBYTE(v76) = 0;
      if ( dword_8BA8F4 != 1 )
      {
        v44 = 0;
        p_dest = &dest;
        goto LABEL_93;
      }
    }
    p_dest = &dest;
    v78 = getinf(30);
    if ( (a1[9] & 1) != 0 )
    {
      p_dest = &dest;
      setinf(30, 0);
    }
    v85 = 0;
    v88 = 0;
    v8 = *((_QWORD *)a1 + 1);
    v86 = 0;
    v89 = 0;
    linearray_t_ctr(&v85, v8);
    v91 = 500;
    p_dest = &dest;
    v9 = *((char **)a1 + 3);
    linearray_t_set_place(&v85, v9);
    a1[8] = -1;
    v10 = 0;
    p_dest = &dest;
LABEL_14:
    if ( !(unsigned __int8)linearray_t_ending(&v85) )
    {
      v11 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 16LL))(a1);
      v12 = v82;
      if ( v11 || (unsigned __int64)v82 >= *v73 )
        goto LABEL_81;
      *((_QWORD *)a1 + 3) = v87;
      v74 = (**(__int64 (__fastcall ***)(_DWORD *))a1)(a1);
      v75 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 8LL))(a1);
      v69 = (int)v86;
      if ( !(_DWORD)v86 )
        goto LABEL_53;
      v13 = 0;
      while ( 1 )
      {
        v14 = 0;
        if ( v74 )
          v14 = v90 == v13;
        v15 = linearray_t_down(&v85);
        v16 = v82;
        v17 = v82;
        if ( *(_QWORD *)(v15 + 8) )
        {
          v18 = *(const char **)v15;
          if ( !(_QWORD)v82 )
          {
            if ( !*v18 )
              goto LABEL_39;
            if ( v14 )
            {
              if ( dword_8BA8F4 != 1 )
                goto LABEL_41;
            }
            else
            {
              v9 = (char *)a1;
              v38 = dword_8BA8F4;
              if ( a1[8] != -1 )
              {
LABEL_65:
                if ( (unsigned __int64)v82 >= v38 && (unsigned __int64)v82 >= *v73 )
                {
                  if ( (_BYTE)v76 )
                  {
                    v39 = (__int64 *)((char *)dest + 24 * v82 - 24);
                    v9 = (char *)*v39;
                    if ( (unsigned __int64)v39[2] <= 3 )
                    {
                      v66 = qvector_reserve(v39, v9, 4, 1);
                      *v39 = v66;
                      v9 = (char *)v66;
                    }
                    v39[1] = 4;
                    *(_WORD *)v9 = 11822;
                    v9[2] = 46;
                    *(_BYTE *)(*v39 + 3) = 0;
LABEL_53:
                    if ( v74 && a1[8] == -1 )
                      a1[8] = 0;
                  }
                  goto LABEL_14;
                }
                goto LABEL_42;
              }
              if ( dword_8BA8F4 )
                goto LABEL_42;
            }
            goto LABEL_26;
          }
        }
        else
        {
          v18 = &s1;
          if ( !(_QWORD)v82 )
            goto LABEL_39;
        }
        if ( !v14 )
        {
          v38 = dword_8BA8F4;
          if ( a1[8] != -1 )
            goto LABEL_65;
          if ( (unsigned __int64)v82 < dword_8BA8F4 )
            goto LABEL_42;
          v70.m128i_i32[0] = 1;
          v17 = 1;
          goto LABEL_27;
        }
        v70.m128i_i32[0] = dword_8BA8F4;
        if ( (unsigned __int64)v82 < dword_8BA8F4 - 1 )
          goto LABEL_41;
        if ( (_QWORD)v82 != 1 )
        {
          v70.m128i_i32[0] = 2;
          v17 = 2;
          goto LABEL_27;
        }
LABEL_26:
        v70.m128i_i32[0] = v82;
LABEL_27:
        v19 = dest;
        v20 = (char *)dest + 24 * v17;
        v70.m128i_i64[1] = 24 * v17;
        if ( v20 == dest )
        {
          v24 = (char *)dest + 24 * v17;
        }
        else
        {
          v71 = v13;
          v21 = dest;
          v22 = (char *)dest;
          do
          {
            v23 = *(_QWORD *)v22;
            if ( *(_QWORD *)v22 )
            {
              *((_QWORD *)v22 + 1) = 0;
              qfree(v23, v9);
            }
            v22 += 24;
          }
          while ( v20 != v22 );
          v13 = v71;
          v24 = (char *)dest;
          v19 = v21;
          v16 = v82;
        }
        memmove(v19, v20, &v24[24 * v16] - v20);
        *(_QWORD *)&v82 = v82 - 0xAAAAAAAAAAAAAAABLL * (v70.m128i_i64[1] >> 3);
        if ( (_QWORD)v82 && (_BYTE)v76 )
        {
          v40 = dest;
          v41 = *(_QWORD *)dest;
          if ( *((_QWORD *)dest + 2) <= 3u )
          {
            v42 = qvector_reserve(dest, v41, 4, 1);
            *v40 = v42;
            v41 = v42;
          }
          v40[1] = 4;
          *(_WORD *)v41 = 11822;
          *(_BYTE *)(v41 + 2) = 46;
          *(_BYTE *)(*v40 + 3LL) = 0;
        }
        v25 = a1[8];
        if ( v25 != -1 )
          a1[8] = v25 - v70.m128i_i32[0];
        if ( v70.m128i_i32[0] <= v10 )
          v10 -= v70.m128i_i32[0];
LABEL_39:
        if ( v14 )
        {
          LODWORD(v17) = v82;
LABEL_41:
          a1[8] = v17;
        }
LABEL_42:
        v83 = nullptr;
        v84 = 0;
        if ( v18 )
        {
          v26 = strlen(v18);
          v27 = v26 + 1;
          v28 = v26;
          v83 = (void *)qvector_reserve(&v83, 0, v26 + 1, 1);
          v84.m128i_i64[0] = v27;
          memmove(v83, v18, v28);
          *((_BYTE *)v83 + v28) = 0;
        }
        v29 = v82;
        v9 = (char *)dest;
        v30 = v82 + 1;
        if ( &v83 < dest || &v83 >= (void **)((char *)dest + 24 * *((_QWORD *)&v82 + 1)) )
        {
          if ( *((_QWORD *)&v82 + 1) < v30 )
          {
            dest = (void *)qvector_reserve(p_dest, dest, v82 + 1, 24);
            v9 = (char *)dest;
            *(_QWORD *)&v29 = v82;
          }
          v36 = _mm_loadu_si128(&v84);
          v37 = &v9[24 * v29];
          *(_QWORD *)v37 = v83;
          *(__m128i *)(v37 + 8) = v36;
          *(_QWORD *)&v82 = v82 + 1;
        }
        else
        {
          v31 = v83;
          v32 = _mm_loadl_epi64(&v84);
          v83 = nullptr;
          v33 = _mm_loadl_epi64((const __m128i *)&v84.m128i_u64[1]);
          v84 = 0;
          if ( *((_QWORD *)&v82 + 1) < v30 )
          {
            v70.m128i_i64[1] = v33.m128i_i64[0];
            v70.m128i_i64[0] = v32.m128i_i64[0];
            dest = (void *)qvector_reserve(p_dest, dest, v82 + 1, 24);
            v9 = (char *)dest;
            v33 = _mm_loadl_epi64((const __m128i *)&v70.m128i_u64[1]);
            *(_QWORD *)&v29 = v82;
            v32 = _mm_loadl_epi64(&v70);
          }
          v34 = &v9[24 * v29];
          *(_QWORD *)v34 = v31;
          v35 = v83;
          *(__m128i *)(v34 + 8) = _mm_unpacklo_epi64(v32, v33);
          *(_QWORD *)&v82 = v82 + 1;
          if ( v35 )
          {
            v84.m128i_i64[0] = 0;
            qfree(v35, v9, *((_QWORD *)&v29 + 1));
          }
        }
        if ( !v75 )
          v10 += dword_8BA8F4 > v10;
        if ( v69 == ++v13 )
          goto LABEL_53;
      }
    }
    v12 = v82;
LABEL_81:
    if ( v12 == 1 )
    {
      v57 = (void **)dest;
      v58 = 0;
      v59 = *((_QWORD *)dest + 1);
      while ( 1 )
      {
        v60 = v58;
        v61 = &byte_8CBC80;
        if ( v59 | v58 )
          v61 = (char *)*v57 + v58;
        v62 = *v61;
        if ( v62 > 0x7F || !isspace(v62) )
          break;
        ++v58;
      }
      if ( v59 )
      {
        v63 = v59 - 1;
        if ( v59 != 1 )
        {
          if ( v58 )
          {
            v64 = 0;
            if ( v60 < v63 )
            {
              v64 = v63 - v60;
              v12 = v59 - v60;
              memmove(*v57, (char *)*v57 + v60, v63 - v60);
            }
            v65 = *v57;
            if ( (unsigned __int64)v57[2] < v12 )
            {
              v67 = qvector_reserve(v57, v65, v12, 1);
              *v57 = (void *)v67;
              v65 = (_BYTE *)v67;
            }
            v57[1] = (void *)v12;
            v65[v64] = 0;
            v12 = v82;
          }
        }
      }
    }
    v43 = (const char *)(unsigned __int8)v78;
    v44 = v10 + ((unsigned __int8)v76 & (dword_8BA8F4 > v10));
    if ( v12 < v44 )
      v44 = v12;
    setinf(30, (unsigned __int8)v78);
    linearray_t_dtr(&v85);
    if ( v88 )
    {
      *(_QWORD *)&v89 = 0;
      qfree(v88, v43);
    }
    v45 = v85;
    if ( v85 )
    {
      v46 = v86;
      if ( (_QWORD)v86 )
      {
        v47 = 0;
        do
        {
          v48 = (__int64 *)(v45 + 24 * v47);
          v49 = *v48;
          if ( *v48 )
          {
            v48[1] = 0;
            qfree(v49, v43);
            v45 = v85;
          }
          ++v47;
        }
        while ( v46 != v47 );
      }
      *(_QWORD *)&v86 = 0;
      qfree(v45, v43);
    }
LABEL_93:
    v50 = v77;
    v51 = v73;
    v5 = (const char *)p_dest;
    *(_DWORD *)(v77 + 100) = v44;
    sub_2D1580(v50, (__int64)v5, (_QWORD *)v51 + 1, *((const void **)v51 + 4));
    v52 = (char *)dest;
    if ( dest )
    {
      v53 = v82;
      if ( (_QWORD)v82 )
      {
        v54 = 0;
        do
        {
          v55 = &v52[24 * v54];
          v56 = *(_QWORD *)v55;
          if ( *(_QWORD *)v55 )
          {
            *((_QWORD *)v55 + 1) = 0;
            qfree(v56, v5);
            v52 = (char *)dest;
          }
          ++v54;
        }
        while ( v53 != v54 );
      }
      *(_QWORD *)&v82 = 0;
      qfree(v52, v5);
    }
  }
  v6 = v79;
  *(_BYTE *)(v77 + 104) = v76;
  if ( v6 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v6, v5);
  }
  return v92 - __readfsqword(0x28u);
}
