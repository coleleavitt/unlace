unsigned __int64 __fastcall sub_4FE100(unsigned int **a1, const char *a2, __int64 a3)
{
  unsigned int *v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  size_t v8; // r12
  __int64 v9; // rax
  size_t v10; // rbp
  __int64 v11; // r12
  unsigned __int64 v12; // r13
  _BYTE *v13; // rbp
  __int64 v14; // rax
  char v15; // r12
  unsigned int v16; // r13d
  int v17; // r12d
  __int64 v18; // rax
  size_t v19; // r9
  __int64 v20; // r8
  unsigned __int64 v21; // r10
  char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rax
  size_t v25; // r13
  __int64 v26; // r12
  unsigned __int64 v27; // r8
  char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  size_t v31; // r13
  __int64 v32; // r12
  unsigned __int64 v33; // r8
  char *v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rax
  char v37; // r12
  _BYTE *v38; // rsi
  unsigned __int64 v39; // r12
  unsigned int *v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // rax
  size_t v44; // r12
  __int64 v45; // rbp
  unsigned __int64 v46; // r13
  unsigned int *v47; // rax
  unsigned int *v48; // rbp
  _BYTE *v49; // rsi
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  char v52; // r12
  __int64 v53; // rdx
  unsigned int v54; // r13d
  unsigned int v55; // r12d
  __int64 v56; // rax
  size_t v57; // r9
  unsigned __int64 v58; // r8
  unsigned __int64 v59; // r10
  char *v60; // rsi
  __int64 v61; // rax
  __int64 v62; // rax
  size_t v63; // r13
  __int64 v64; // r12
  unsigned __int64 v65; // r8
  char *v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  size_t v69; // r13
  __int64 v70; // r12
  unsigned __int64 v71; // r8
  char *v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rax
  char v75; // r12
  _BYTE *v76; // rsi
  __int64 v77; // rbp
  unsigned __int64 v78; // r13
  void *v79; // rdi
  unsigned int *v81; // rbx
  unsigned int *v82; // rbp
  __m128i v83; // xmm0
  char v84; // al
  unsigned int *v85; // rbx
  unsigned int *v86; // rbp
  char *v87; // rsi
  __int64 v88; // rax
  char *v89; // rsi
  __int64 v90; // rax
  char *v91; // rsi
  __int64 v92; // rax
  __m128i v93; // [rsp+0h] [rbp-A8h] BYREF
  void **p_ptr; // [rsp+10h] [rbp-98h]
  unsigned __int64 v95; // [rsp+18h] [rbp-90h]
  size_t v96; // [rsp+20h] [rbp-88h]
  unsigned __int64 v97; // [rsp+28h] [rbp-80h]
  size_t n; // [rsp+30h] [rbp-78h]
  __int64 v99; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v101; // [rsp+48h] [rbp-60h]
  _BYTE src[5]; // [rsp+5Eh] [rbp-4Ah] BYREF
  _BYTE v103[5]; // [rsp+63h] [rbp-45h] BYREF
  _QWORD v104[8]; // [rsp+68h] [rbp-40h] BYREF

  v95 = (unsigned __int64)a2;
  LOBYTE(v96) = a3;
  v104[0] = __readfsqword(0x28u);
  v101 = 0;
  ptr = nullptr;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_34;
  v5 = pack_dd(src, v103, *((unsigned int *)a1 + 14)) - (_QWORD)src;
  v8 = v5;
  if ( v5 )
  {
    v77 = v101;
    v78 = v101 + v5;
    if ( __CFADD__((_QWORD)v101, v5) )
    {
      if ( (unsigned __int64)v101 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v101 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v101 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_74:
        memcpy((char *)ptr + v77, src, v8);
        goto LABEL_3;
      }
      v78 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v91 = (char *)ptr;
    v92 = v101;
    if ( *((_QWORD *)&v101 + 1) < v78 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v78, 1);
      v91 = (char *)ptr;
      v92 = v101;
    }
    memset(&v91[v92], 0, v78 - v92);
    *(_QWORD *)&v101 = v78;
    goto LABEL_74;
  }
LABEL_3:
  a2 = (const char *)v104;
  v9 = pack_dq(src, v104, a1[1], v6, v7) - (_QWORD)src;
  v10 = v9;
  if ( !v9 )
    goto LABEL_9;
  v11 = v101;
  v12 = v101 + v9;
  if ( !__CFADD__((_QWORD)v101, v9) )
    goto LABEL_116;
  if ( (unsigned __int64)v101 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v12 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_116:
    v89 = (char *)ptr;
    v90 = v101;
    if ( *((_QWORD *)&v101 + 1) < v12 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v89 = (char *)ptr;
      v90 = v101;
    }
    memset(&v89[v90], 0, v12 - v90);
    *(_QWORD *)&v101 = v12;
    goto LABEL_8;
  }
  if ( (_QWORD)v101 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v101 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
  a2 = src;
  memcpy((char *)ptr + v11, src, v10);
LABEL_9:
  v4 = a1[1];
  v13 = *a1;
  v93.m128i_i64[0] = (__int64)*a1 + 17 * (_QWORD)v4;
  if ( v13 != (_BYTE *)v93.m128i_i64[0] )
  {
    p_ptr = &ptr;
    do
    {
      v16 = *(_DWORD *)v13;
      v13[16] = 1;
      v17 = *((_DWORD *)v13 + 1);
      v18 = pack_dd(src, v103, v16) - (_QWORD)src;
      v19 = v18;
      if ( !v18 )
        goto LABEL_20;
      v20 = v101;
      v21 = v101 + v18;
      if ( __CFADD__((_QWORD)v101, v18) )
      {
        if ( (unsigned __int64)v101 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v101 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v101 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_19;
        }
        v21 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v22 = (char *)ptr;
      v23 = v101;
      if ( *((_QWORD *)&v101 + 1) < v21 )
      {
        v99 = v101;
        n = v19;
        v97 = v21;
        ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
        v22 = (char *)ptr;
        v20 = v99;
        v23 = v101;
        v19 = n;
        v21 = v97;
      }
      v99 = v20;
      n = v19;
      v97 = v21;
      memset(&v22[v23], 0, v21 - v23);
      v19 = n;
      v20 = v99;
      *(_QWORD *)&v101 = v97;
LABEL_19:
      memcpy((char *)ptr + v20, src, v19);
LABEL_20:
      v24 = pack_dd(src, v103, v17 - v16) - (_QWORD)src;
      v25 = v24;
      if ( !v24 )
        goto LABEL_26;
      v26 = v101;
      v27 = v101 + v24;
      if ( __CFADD__((_QWORD)v101, v24) )
      {
        if ( (unsigned __int64)v101 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v101 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v101 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_25;
        }
        v27 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v28 = (char *)ptr;
      v29 = v101;
      if ( *((_QWORD *)&v101 + 1) < v27 )
      {
        v97 = v27;
        ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
        v28 = (char *)ptr;
        v27 = v97;
        v29 = v101;
      }
      v97 = v27;
      memset(&v28[v29], 0, v27 - v29);
      *(_QWORD *)&v101 = v97;
LABEL_25:
      memcpy((char *)ptr + v26, src, v25);
LABEL_26:
      v30 = pack_dd(src, v103, *((unsigned int *)v13 + 2)) - (_QWORD)src;
      v31 = v30;
      if ( v30 )
      {
        v32 = v101;
        v33 = v101 + v30;
        if ( !__CFADD__((_QWORD)v101, v30) )
          goto LABEL_28;
        if ( (unsigned __int64)v101 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v33 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_28:
          v34 = (char *)ptr;
          v35 = v101;
          if ( *((_QWORD *)&v101 + 1) < v33 )
          {
            v97 = v33;
            ptr = (void *)qvector_reserve(&ptr, ptr, v33, 1);
            v34 = (char *)ptr;
            v33 = v97;
            v35 = v101;
          }
          v97 = v33;
          memset(&v34[v35], 0, v33 - v35);
          *(_QWORD *)&v101 = v97;
        }
        else if ( (_QWORD)v101 != 0x7FFFFFFFFFFFFFFFLL )
        {
          *(_QWORD *)&v101 = 0x7FFFFFFFFFFFFFFFLL;
        }
        memcpy((char *)ptr + v32, src, v31);
      }
      v36 = v101;
      v37 = v13[12];
      v38 = ptr;
      if ( *((_QWORD *)&v101 + 1) < (unsigned __int64)(v101 + 1) )
      {
        ptr = (void *)qvector_reserve(p_ptr, ptr, v101 + 1, 1);
        v38 = ptr;
        v36 = v101;
      }
      v38[v36] = v37;
      a2 = (const char *)ptr;
      v14 = v101 + 1;
      v4 = (unsigned int *)(v101 + 2);
      *(_QWORD *)&v101 = v101 + 1;
      v15 = v13[16];
      if ( *((_QWORD *)&v101 + 1) < (unsigned __int64)v4 )
      {
        ptr = (void *)qvector_reserve(p_ptr, ptr, v4, 1);
        a2 = (const char *)ptr;
        v14 = v101;
      }
      a2[v14] = v15;
      v13 += 17;
      *(_QWORD *)&v101 = v101 + 1;
    }
    while ( (_BYTE *)v93.m128i_i64[0] != v13 );
  }
LABEL_34:
  v39 = *(_QWORD *)(v95 + 8);
  if ( v39 )
  {
    v81 = (unsigned int *)qalloc_or_throw(17 * v39, a2);
    v82 = (unsigned int *)((char *)v81 + 17 * v39);
    a2 = *(const char **)v95;
    memcpy(v81, *(const void **)v95, 17 * v39);
    v40 = *a1;
    v83 = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
    if ( *a1 )
    {
      a1[1] = nullptr;
      v93 = v83;
      qfree(v40);
      v83 = _mm_load_si128(&v93);
    }
    *a1 = v81;
    *(__m128i *)(a1 + 1) = v83;
    if ( v81 != v82 )
    {
      v84 = v96;
      v85 = v81 + 2;
      v86 = v82 + 2;
      while ( 1 )
      {
        *((_BYTE *)v85 + 8) = 1;
        if ( v84 )
          break;
        v85 = (unsigned int *)((char *)v85 + 17);
        if ( v86 == v85 )
          goto LABEL_38;
      }
      while ( 1 )
      {
        v40 = (unsigned int *)*v85;
        if ( (_DWORD)v40 != -1 )
          v40 = (unsigned int *)(16 * (unsigned int)sel2para(v40));
        *v85 = (unsigned int)v40;
        v85 = (unsigned int *)((char *)v85 + 17);
        if ( v86 == v85 )
          break;
        *((_BYTE *)v85 + 8) = 1;
      }
    }
  }
  else
  {
    v40 = *a1;
    if ( *a1 )
    {
      a1[1] = nullptr;
      qfree(v40);
      *a1 = nullptr;
    }
    *(_OWORD *)(a1 + 1) = 0;
  }
LABEL_38:
  if ( (unsigned __int8)must_journal(v40, a2, v4) )
  {
    v43 = pack_dq(src, v104, a1[1], v41, v42) - (_QWORD)src;
    v44 = v43;
    if ( !v43 )
      goto LABEL_45;
    v45 = v101;
    v46 = v101 + v43;
    if ( __CFADD__((_QWORD)v101, v43) )
    {
      if ( (unsigned __int64)v101 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v101 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v101 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_44:
        memcpy((char *)ptr + v45, src, v44);
LABEL_45:
        v47 = a1[1];
        v48 = *a1;
        p_ptr = &ptr;
        v93.m128i_i64[0] = (__int64)v48 + 17 * (_QWORD)v47;
        if ( (unsigned int *)v93.m128i_i64[0] == v48 )
          goto LABEL_84;
        while ( 1 )
        {
          v54 = *v48;
          v55 = v48[1];
          v56 = pack_dd(src, v103, *v48) - (_QWORD)src;
          v57 = v56;
          if ( !v56 )
            goto LABEL_56;
          v58 = v101;
          v59 = v101 + v56;
          if ( __CFADD__((_QWORD)v101, v56) )
          {
            if ( (unsigned __int64)v101 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v101 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v101 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_55;
            }
            v59 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v60 = (char *)ptr;
          v61 = v101;
          if ( *((_QWORD *)&v101 + 1) < v59 )
          {
            v97 = v101;
            v96 = v57;
            v95 = v59;
            ptr = (void *)qvector_reserve(&ptr, ptr, v59, 1);
            v60 = (char *)ptr;
            v58 = v97;
            v61 = v101;
            v57 = v96;
            v59 = v95;
          }
          v97 = v58;
          v96 = v57;
          v95 = v59;
          memset(&v60[v61], 0, v59 - v61);
          v57 = v96;
          v58 = v97;
          *(_QWORD *)&v101 = v95;
LABEL_55:
          memcpy((char *)ptr + v58, src, v57);
LABEL_56:
          v62 = pack_dd(src, v103, v55 - v54) - (_QWORD)src;
          v63 = v62;
          if ( !v62 )
            goto LABEL_62;
          v64 = v101;
          v65 = v101 + v62;
          if ( __CFADD__((_QWORD)v101, v62) )
          {
            if ( (unsigned __int64)v101 > 0x7FFFFFFFFFFFFFFELL )
            {
              if ( (_QWORD)v101 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v101 = 0x7FFFFFFFFFFFFFFFLL;
              goto LABEL_61;
            }
            v65 = 0x7FFFFFFFFFFFFFFFLL;
          }
          v66 = (char *)ptr;
          v67 = v101;
          if ( *((_QWORD *)&v101 + 1) < v65 )
          {
            v95 = v65;
            ptr = (void *)qvector_reserve(&ptr, ptr, v65, 1);
            v66 = (char *)ptr;
            v65 = v95;
            v67 = v101;
          }
          v95 = v65;
          memset(&v66[v67], 0, v65 - v67);
          *(_QWORD *)&v101 = v95;
LABEL_61:
          memcpy((char *)ptr + v64, src, v63);
LABEL_62:
          v68 = pack_dd(src, v103, v48[2]) - (_QWORD)src;
          v69 = v68;
          if ( v68 )
          {
            v70 = v101;
            v71 = v68 + v101;
            if ( __CFADD__(v68, (_QWORD)v101) )
            {
              if ( (unsigned __int64)v101 <= 0x7FFFFFFFFFFFFFFELL )
              {
                v72 = (char *)ptr;
                v73 = v101;
                v71 = 0x7FFFFFFFFFFFFFFFLL;
                if ( *((_QWORD *)&v101 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
                  goto LABEL_98;
                goto LABEL_65;
              }
              if ( (_QWORD)v101 != 0x7FFFFFFFFFFFFFFFLL )
                *(_QWORD *)&v101 = 0x7FFFFFFFFFFFFFFFLL;
            }
            else
            {
              v72 = (char *)ptr;
              v73 = v101;
              if ( *((_QWORD *)&v101 + 1) >= v71 )
                goto LABEL_65;
LABEL_98:
              v95 = v71;
              ptr = (void *)qvector_reserve(&ptr, v72, v71, 1);
              v72 = (char *)ptr;
              v71 = v95;
              v73 = v101;
LABEL_65:
              v95 = v71;
              memset(&v72[v73], 0, v71 - v73);
              *(_QWORD *)&v101 = v95;
            }
            memcpy((char *)ptr + v70, src, v69);
          }
          v74 = v101;
          v75 = *((_BYTE *)v48 + 12);
          v76 = ptr;
          if ( *((_QWORD *)&v101 + 1) < (unsigned __int64)(v101 + 1) )
          {
            ptr = (void *)qvector_reserve(p_ptr, ptr, v101 + 1, 1);
            v76 = ptr;
            v74 = v101;
          }
          v76[v74] = v75;
          v49 = ptr;
          v50 = v101 + 1;
          v51 = v101 + 2;
          *(_QWORD *)&v101 = v101 + 1;
          v52 = *((_BYTE *)v48 + 16);
          if ( *((_QWORD *)&v101 + 1) < v51 )
          {
            ptr = (void *)qvector_reserve(p_ptr, ptr, v51, 1);
            v49 = ptr;
            v50 = v101;
          }
          v49[v50] = v52;
          v48 = (unsigned int *)((char *)v48 + 17);
          v53 = v101 + 1;
          *(_QWORD *)&v101 = v101 + 1;
          if ( (unsigned int *)v93.m128i_i64[0] == v48 )
            goto LABEL_85;
        }
      }
      v46 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v87 = (char *)ptr;
    v88 = v101;
    if ( *((_QWORD *)&v101 + 1) < v46 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v46, 1);
      v87 = (char *)ptr;
      v88 = v101;
    }
    memset(&v87[v88], 0, v46 - v88);
    *(_QWORD *)&v101 = v46;
    goto LABEL_44;
  }
LABEL_84:
  v53 = v101;
LABEL_85:
  add_undo_record(190, ptr, v53);
  v79 = ptr;
  a1[3] = (unsigned int *)((char *)*a1 + 17 * (_QWORD)a1[1]);
  if ( v79 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v79);
  }
  return v104[0] - __readfsqword(0x28u);
}

