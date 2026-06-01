unsigned __int64 __fastcall sub_515CA0(char **a1, _BYTE *a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  size_t v6; // r12
  __int64 v7; // rax
  size_t v8; // rbp
  __int64 v9; // r12
  unsigned __int64 v10; // r13
  char *v11; // rbp
  __int64 v12; // rax
  char v13; // r12
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v16; // rax
  size_t v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // r10
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  size_t v23; // r13
  __int64 v24; // r12
  unsigned __int64 v25; // r8
  char *v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // r13
  __int64 v30; // r12
  unsigned __int64 v31; // r8
  char *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  char v35; // r12
  _BYTE *v36; // rsi
  unsigned __int64 v37; // r12
  char *v38; // rdi
  __int64 v39; // rax
  size_t v40; // r12
  __int64 v41; // rbp
  unsigned __int64 v42; // r13
  char *v43; // rax
  char *v44; // rbp
  _BYTE *v45; // rsi
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  char v48; // r12
  __int64 v49; // rdx
  __int64 v50; // r13
  __int64 v51; // r12
  __int64 v52; // rax
  size_t v53; // r9
  unsigned __int64 v54; // r8
  unsigned __int64 v55; // r10
  char *v56; // rsi
  __int64 v57; // rax
  __int64 v58; // rax
  size_t v59; // r13
  __int64 v60; // r12
  unsigned __int64 v61; // r8
  char *v62; // rsi
  __int64 v63; // rax
  __int64 v64; // rax
  size_t v65; // r13
  __int64 v66; // r12
  unsigned __int64 v67; // r8
  char *v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rax
  char v71; // r12
  _BYTE *v72; // rsi
  __int64 v73; // rbp
  unsigned __int64 v74; // r13
  void *v75; // rdi
  char *v77; // rbx
  char *v78; // rbp
  __m128i v79; // xmm0
  char v80; // al
  char *v81; // rbx
  char *v82; // rbp
  char *v83; // rsi
  __int64 v84; // rax
  char *v85; // rsi
  __int64 v86; // rax
  char *v87; // rsi
  __int64 v88; // rax
  __m128i v89; // [rsp+0h] [rbp-A8h] BYREF
  void **p_ptr; // [rsp+10h] [rbp-98h]
  _BYTE *v91; // [rsp+18h] [rbp-90h]
  size_t v92; // [rsp+20h] [rbp-88h]
  unsigned __int64 v93; // [rsp+28h] [rbp-80h]
  size_t n; // [rsp+30h] [rbp-78h]
  __int64 v95; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v97; // [rsp+48h] [rbp-60h]
  _BYTE src[5]; // [rsp+5Eh] [rbp-4Ah] BYREF
  char v99[5]; // [rsp+63h] [rbp-45h] BYREF
  _QWORD v100[8]; // [rsp+68h] [rbp-40h] BYREF

  v91 = a2;
  LOBYTE(v92) = a3;
  v100[0] = __readfsqword(0x28u);
  v97 = 0;
  ptr = nullptr;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_34;
  v5 = pack_dd(src, v99, *((unsigned int *)a1 + 14)) - (_QWORD)src;
  v6 = v5;
  if ( v5 )
  {
    v73 = v97;
    v74 = v97 + v5;
    if ( __CFADD__((_QWORD)v97, v5) )
    {
      if ( (unsigned __int64)v97 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v97 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v97 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_74:
        memcpy((char *)ptr + v73, src, v6);
        goto LABEL_3;
      }
      v74 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v87 = (char *)ptr;
    v88 = v97;
    if ( *((_QWORD *)&v97 + 1) < v74 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v74, 1);
      v87 = (char *)ptr;
      v88 = v97;
    }
    memset(&v87[v88], 0, v74 - v88);
    *(_QWORD *)&v97 = v74;
    goto LABEL_74;
  }
LABEL_3:
  a2 = v100;
  v7 = pack_dq(src, v100, a1[1]) - (_QWORD)src;
  v8 = v7;
  if ( !v7 )
    goto LABEL_9;
  v9 = v97;
  v10 = v97 + v7;
  if ( !__CFADD__((_QWORD)v97, v7) )
    goto LABEL_116;
  if ( (unsigned __int64)v97 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_116:
    v85 = (char *)ptr;
    v86 = v97;
    if ( *((_QWORD *)&v97 + 1) < v10 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v85 = (char *)ptr;
      v86 = v97;
    }
    memset(&v85[v86], 0, v10 - v86);
    *(_QWORD *)&v97 = v10;
    goto LABEL_8;
  }
  if ( (_QWORD)v97 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v97 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
  a2 = src;
  memcpy((char *)ptr + v9, src, v8);
LABEL_9:
  v4 = (unsigned __int64)a1[1];
  v11 = *a1;
  v89.m128i_i64[0] = (__int64)&(*a1)[33 * v4];
  if ( v11 != (char *)v89.m128i_i64[0] )
  {
    p_ptr = &ptr;
    do
    {
      v14 = *(_QWORD *)v11;
      v11[32] = 1;
      v15 = *((_QWORD *)v11 + 1);
      v16 = pack_dq(src, v100, v14) - (_QWORD)src;
      v17 = v16;
      if ( !v16 )
        goto LABEL_20;
      v18 = v97;
      v19 = v97 + v16;
      if ( __CFADD__((_QWORD)v97, v16) )
      {
        if ( (unsigned __int64)v97 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v97 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v97 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_19;
        }
        v19 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v20 = (char *)ptr;
      v21 = v97;
      if ( *((_QWORD *)&v97 + 1) < v19 )
      {
        v95 = v97;
        n = v17;
        v93 = v19;
        ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
        v20 = (char *)ptr;
        v18 = v95;
        v21 = v97;
        v17 = n;
        v19 = v93;
      }
      v95 = v18;
      n = v17;
      v93 = v19;
      memset(&v20[v21], 0, v19 - v21);
      v17 = n;
      v18 = v95;
      *(_QWORD *)&v97 = v93;
LABEL_19:
      memcpy((char *)ptr + v18, src, v17);
LABEL_20:
      v22 = pack_dq(src, v100, v15 - v14) - (_QWORD)src;
      v23 = v22;
      if ( !v22 )
        goto LABEL_26;
      v24 = v97;
      v25 = v97 + v22;
      if ( __CFADD__((_QWORD)v97, v22) )
      {
        if ( (unsigned __int64)v97 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v97 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v97 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_25;
        }
        v25 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v26 = (char *)ptr;
      v27 = v97;
      if ( *((_QWORD *)&v97 + 1) < v25 )
      {
        v93 = v25;
        ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
        v26 = (char *)ptr;
        v25 = v93;
        v27 = v97;
      }
      v93 = v25;
      memset(&v26[v27], 0, v25 - v27);
      *(_QWORD *)&v97 = v93;
LABEL_25:
      memcpy((char *)ptr + v24, src, v23);
LABEL_26:
      v28 = pack_dq(src, v100, *((_QWORD *)v11 + 2)) - (_QWORD)src;
      v29 = v28;
      if ( v28 )
      {
        v30 = v97;
        v31 = v97 + v28;
        if ( !__CFADD__((_QWORD)v97, v28) )
          goto LABEL_28;
        if ( (unsigned __int64)v97 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v31 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_28:
          v32 = (char *)ptr;
          v33 = v97;
          if ( *((_QWORD *)&v97 + 1) < v31 )
          {
            v93 = v31;
            ptr = (void *)qvector_reserve(&ptr, ptr, v31, 1);
            v32 = (char *)ptr;
            v31 = v93;
            v33 = v97;
          }
          v93 = v31;
          memset(&v32[v33], 0, v31 - v33);
          *(_QWORD *)&v97 = v93;
        }
        else if ( (_QWORD)v97 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v97 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((char *)ptr + v30, src, v29);
      }
      v34 = v97;
      v35 = v11[24];
      v36 = ptr;
      if ( *((_QWORD *)&v97 + 1) < (unsigned __int64)(v97 + 1) )
      {
        ptr = (void *)qvector_reserve(p_ptr, ptr, v97 + 1, 1);
        v36 = ptr;
        v34 = v97;
      }
      v36[v34] = v35;
      a2 = ptr;
      v12 = v97 + 1;
      v4 = v97 + 2;
      *(_QWORD *)&v97 = v97 + 1;
      v13 = v11[32];
      if ( *((_QWORD *)&v97 + 1) < v4 )
      {
        ptr = (void *)qvector_reserve(p_ptr, ptr, v4, 1);
        a2 = ptr;
        v12 = v97;
      }
      a2[v12] = v13;
      v11 += 33;
      *(_QWORD *)&v97 = v97 + 1;
    }
    while ( (char *)v89.m128i_i64[0] != v11 );
  }
LABEL_34:
  v37 = *((_QWORD *)v91 + 1);
  if ( v37 )
  {
    v77 = (char *)qalloc_or_throw(33 * v37);
    v78 = &v77[33 * v37];
    a2 = *(_BYTE **)v91;
    memcpy(v77, *(const void **)v91, 33 * v37);
    v38 = *a1;
    v79 = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
    if ( *a1 )
    {
      a1[1] = nullptr;
      v89 = v79;
      qfree(v38);
      v79 = _mm_load_si128(&v89);
    }
    *a1 = v77;
    *(__m128i *)(a1 + 1) = v79;
    if ( v77 != v78 )
    {
      v80 = v92;
      v81 = v77 + 16;
      v82 = v78 + 16;
      while ( 1 )
      {
        v81[16] = 1;
        if ( v80 )
          break;
        v81 += 33;
        if ( v82 == v81 )
          goto LABEL_38;
      }
      while ( 1 )
      {
        v38 = *(char **)v81;
        if ( *(_QWORD *)v81 != -1 )
          v38 = (char *)(16 * sel2para(v38));
        *(_QWORD *)v81 = v38;
        v81 += 33;
        if ( v82 == v81 )
          break;
        v81[16] = 1;
      }
    }
  }
  else
  {
    v38 = *a1;
    if ( *a1 )
    {
      a1[1] = nullptr;
      qfree(v38);
      *a1 = nullptr;
    }
    *(_OWORD *)(a1 + 1) = 0;
  }
LABEL_38:
  if ( (unsigned __int8)must_journal(v38, a2, v4) )
  {
    v39 = pack_dq(src, v100, a1[1]) - (_QWORD)src;
    v40 = v39;
    if ( !v39 )
      goto LABEL_45;
    v41 = v97;
    v42 = v97 + v39;
    if ( __CFADD__((_QWORD)v97, v39) )
    {
      if ( (unsigned __int64)v97 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v97 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v97 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_44:
        memcpy((char *)ptr + v41, src, v40);
LABEL_45:
        v43 = a1[1];
        v44 = *a1;
        p_ptr = &ptr;
        v89.m128i_i64[0] = (__int64)&v44[33 * (_QWORD)v43];
        if ( (char *)v89.m128i_i64[0] == v44 )
          goto LABEL_84;
        while ( 1 )
        {
          v50 = *(_QWORD *)v44;
          v51 = *((_QWORD *)v44 + 1);
          v52 = pack_dq(src, v100, *(_QWORD *)v44) - (_QWORD)src;
          v53 = v52;
          if ( !v52 )
            goto LABEL_56;
          v54 = v97;
          v55 = v97 + v52;
          if ( __CFADD__((_QWORD)v97, v52) )
          {
            if ( (unsigned __int64)v97 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v97 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v97 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_55;
            }
            v55 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v56 = (char *)ptr;
          v57 = v97;
          if ( *((_QWORD *)&v97 + 1) < v55 )
          {
            v93 = v97;
            v92 = v53;
            v91 = (_BYTE *)v55;
            ptr = (void *)qvector_reserve(&ptr, ptr, v55, 1);
            v56 = (char *)ptr;
            v54 = v93;
            v57 = v97;
            v53 = v92;
            v55 = (unsigned __int64)v91;
          }
          v93 = v54;
          v92 = v53;
          v91 = (_BYTE *)v55;
          memset(&v56[v57], 0, v55 - v57);
          v53 = v92;
          v54 = v93;
          *(_QWORD *)&v97 = v91;
LABEL_55:
          memcpy((char *)ptr + v54, src, v53);
LABEL_56:
          v58 = pack_dq(src, v100, v51 - v50) - (_QWORD)src;
          v59 = v58;
          if ( !v58 )
            goto LABEL_62;
          v60 = v97;
          v61 = v97 + v58;
          if ( __CFADD__((_QWORD)v97, v58) )
          {
            if ( (unsigned __int64)v97 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v97 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v97 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_61;
            }
            v61 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v62 = (char *)ptr;
          v63 = v97;
          if ( *((_QWORD *)&v97 + 1) < v61 )
          {
            v91 = (_BYTE *)v61;
            ptr = (void *)qvector_reserve(&ptr, ptr, v61, 1);
            v62 = (char *)ptr;
            v61 = (unsigned __int64)v91;
            v63 = v97;
          }
          v91 = (_BYTE *)v61;
          memset(&v62[v63], 0, v61 - v63);
          *(_QWORD *)&v97 = v91;
LABEL_61:
          memcpy((char *)ptr + v60, src, v59);
LABEL_62:
          v64 = pack_dq(src, v100, *((_QWORD *)v44 + 2)) - (_QWORD)src;
          v65 = v64;
          if ( v64 )
          {
            v66 = v97;
            v67 = v64 + v97;
            if ( __CFADD__(v64, (_QWORD)v97) )
            {
              if ( (unsigned __int64)v97 <= 0x7FFFFFFFFFFFFFFELL )
              {
                v68 = (char *)ptr;
                v69 = v97;
                v67 = 0x7FFFFFFFFFFFFFFFLL;
                if ( *((_QWORD *)&v97 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
                  goto LABEL_98;
                goto LABEL_65;
              }
              if ( (_QWORD)v97 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v97 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else
            {
              v68 = (char *)ptr;
              v69 = v97;
              if ( *((_QWORD *)&v97 + 1) >= v67 )
                goto LABEL_65;
LABEL_98:
              v91 = (_BYTE *)v67;
              ptr = (void *)qvector_reserve(&ptr, v68, v67, 1);
              v68 = (char *)ptr;
              v67 = (unsigned __int64)v91;
              v69 = v97;
LABEL_65:
              v91 = (_BYTE *)v67;
              memset(&v68[v69], 0, v67 - v69);
              *(_QWORD *)&v97 = v91;
            }
            memcpy((char *)ptr + v66, src, v65);
          }
          v70 = v97;
          v71 = v44[24];
          v72 = ptr;
          if ( *((_QWORD *)&v97 + 1) < (unsigned __int64)(v97 + 1) )
          {
            ptr = (void *)qvector_reserve(p_ptr, ptr, v97 + 1, 1);
            v72 = ptr;
            v70 = v97;
          }
          v72[v70] = v71;
          v45 = ptr;
          v46 = v97 + 1;
          v47 = v97 + 2;
          *(_QWORD *)&v97 = v97 + 1;
          v48 = v44[32];
          if ( *((_QWORD *)&v97 + 1) < v47 )
          {
            ptr = (void *)qvector_reserve(p_ptr, ptr, v47, 1);
            v45 = ptr;
            v46 = v97;
          }
          v45[v46] = v48;
          v44 += 33;
          v49 = v97 + 1;
          *(_QWORD *)&v97 = v97 + 1;
          if ( (char *)v89.m128i_i64[0] == v44 )
            goto LABEL_85;
        }
      }
      v42 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v83 = (char *)ptr;
    v84 = v97;
    if ( *((_QWORD *)&v97 + 1) < v42 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v42, 1);
      v83 = (char *)ptr;
      v84 = v97;
    }
    memset(&v83[v84], 0, v42 - v84);
    *(_QWORD *)&v97 = v42;
    goto LABEL_44;
  }
LABEL_84:
  v49 = v97;
LABEL_85:
  add_undo_record(190, ptr, v49);
  v75 = ptr;
  a1[3] = &(*a1)[33 * (_QWORD)a1[1]];
  if ( v75 )
  {
    *(_QWORD *)&v97 = 0;
    qfree(v75);
  }
  return v100[0] - __readfsqword(0x28u);
}
