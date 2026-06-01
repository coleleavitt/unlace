unsigned __int64 __fastcall sub_464D10(__int64 *a1, unsigned __int64 a2, char a3)
{
  __int64 v4; // rax
  __int64 v7; // rax
  char *v8; // rsi
  unsigned __int64 v9; // rdi
  void *v10; // r12
  __int64 v11; // r13
  __m128i v12; // xmm0
  char *v13; // rax
  __int64 v14; // rdx
  char *v15; // rsi
  char *v16; // rdi
  char *v17; // rsi
  void *v18; // r13
  __int64 v19; // rax
  unsigned __int64 v20; // rdi
  char *v21; // rax
  char *v22; // rdi
  __m128i *v23; // r13
  __m128i *v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdx
  char *v32; // rsi
  char *v33; // rdi
  int i; // r13d
  __int64 v35; // rbp
  __int64 v36; // rbx
  char *v37; // rdx
  void *v38; // rax
  char *v39; // r8
  __int64 v40; // rdx
  char *v41; // rsi
  char *v42; // rdi
  __int64 v43; // rax
  char *v44; // rsi
  unsigned __int64 v45; // rdi
  void *v46; // r12
  __m128i v47; // xmm0
  __m128i v48; // xmm1
  char *v49; // rax
  void *v50; // rdi
  unsigned __int64 v51; // rax
  void *v52; // rdi
  __int64 v53; // r13
  __m128i v54; // xmm0
  __m128i v55; // xmm1
  char *v56; // rax
  char *v57; // rax
  __int64 v58; // r8
  char *v59; // r15
  void *v60; // rax
  __int64 v61; // r8
  unsigned __int32 v62; // edi
  unsigned __int32 v63; // edx
  __int64 v64; // rcx
  __int64 v65; // rax
  char *v66; // rsi
  unsigned __int64 v67; // rdi
  void *v68; // r12
  __m128i v69; // xmm0
  __m128i v70; // xmm1
  char *v71; // rax
  __m128i v72; // xmm0
  char *v73; // rax
  __m128i v74; // xmm0
  char *v75; // rax
  __m128i v76; // [rsp+0h] [rbp-88h] BYREF
  void *v77; // [rsp+10h] [rbp-78h] BYREF
  __int128 v78; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __m128i v80; // [rsp+38h] [rbp-50h] BYREF
  unsigned __int64 v81; // [rsp+48h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v78 = 0;
  v77 = nullptr;
  v4 = a2 & 0x600;
  if ( (a2 & 0x600) == 0 )
  {
    if ( a3 )
      return v81 - __readfsqword(0x28u);
    v80 = 0;
    ptr = nullptr;
    ptr = (void *)qvector_reserve(&ptr, 0, 11, 1);
    v80.m128i_i64[0] = 11;
    strcpy((char *)ptr, "unexplored");
    v17 = (char *)v77;
    v18 = ptr;
    v19 = v78;
    v20 = v78 + 1;
    if ( &ptr < v77 || &ptr >= (void **)((char *)v77 + 24 * *((_QWORD *)&v78 + 1)) )
    {
      if ( *((_QWORD *)&v78 + 1) < v20 )
      {
        v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
        v17 = (char *)v77;
        v18 = ptr;
        v19 = v78;
      }
      v21 = &v17[24 * v19];
      *(_QWORD *)v21 = v18;
      *(__m128i *)(v21 + 8) = _mm_loadu_si128(&v80);
      *(_QWORD *)&v78 = v78 + 1;
      goto LABEL_28;
    }
    v54 = _mm_loadl_epi64(&v80);
    v55 = _mm_loadl_epi64((const __m128i *)&v80.m128i_u64[1]);
    ptr = nullptr;
    v80 = 0;
    if ( *((_QWORD *)&v78 + 1) < v20 )
    {
      v76.m128i_i64[1] = v55.m128i_i64[0];
      v76.m128i_i64[0] = v54.m128i_i64[0];
      v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
      v17 = (char *)v77;
      v55 = _mm_loadl_epi64((const __m128i *)&v76.m128i_u64[1]);
      v19 = v78;
      v54 = _mm_loadl_epi64(&v76);
    }
    v56 = &v17[24 * v19];
    *(_QWORD *)v56 = v18;
    *(__m128i *)(v56 + 8) = _mm_unpacklo_epi64(v54, v55);
    v50 = ptr;
    *(_QWORD *)&v78 = v78 + 1;
    if ( !ptr )
      goto LABEL_28;
    goto LABEL_60;
  }
  if ( v4 != 512 )
  {
    if ( v4 != 1024 )
    {
      if ( v4 != 1536 )
        return v81 - __readfsqword(0x28u);
      if ( !a3 )
      {
        sub_45DE90((__int64)&ptr, "code");
        sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
        if ( ptr )
        {
          v80.m128i_i64[0] = 0;
          qfree(ptr);
        }
      }
      if ( (a2 & 0x10000000) != 0 )
      {
        v80 = 0;
        ptr = nullptr;
        ptr = (void *)qvector_reserve(&ptr, 0, 5, 1);
        v80.m128i_i64[0] = 5;
        strcpy((char *)ptr, "func");
        v7 = v78;
        v8 = (char *)v77;
        v9 = v78 + 1;
        if ( &ptr < v77 || &ptr >= (void **)((char *)v77 + 24 * *((_QWORD *)&v78 + 1)) )
        {
          if ( *((_QWORD *)&v78 + 1) < v9 )
          {
            v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
            v8 = (char *)v77;
            v7 = v78;
          }
          v74 = _mm_loadu_si128(&v80);
          v75 = &v8[24 * v7];
          *(_QWORD *)v75 = ptr;
          *(__m128i *)(v75 + 8) = v74;
          *(_QWORD *)&v78 = v78 + 1;
        }
        else
        {
          v10 = ptr;
          v11 = v80.m128i_i64[1];
          ptr = nullptr;
          v12 = _mm_loadl_epi64(&v80);
          v80 = 0;
          if ( *((_QWORD *)&v78 + 1) < v9 )
          {
            v76.m128i_i64[0] = v12.m128i_i64[0];
            v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
            v8 = (char *)v77;
            v12 = _mm_loadl_epi64(&v76);
            v7 = v78;
          }
          v13 = &v8[24 * v7];
          *(_QWORD *)v13 = v10;
          *(__m128i *)(v13 + 8) = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)v11);
          *(_QWORD *)&v78 = v78 + 1;
          if ( ptr )
          {
            v80.m128i_i64[0] = 0;
            qfree(ptr);
          }
        }
      }
      if ( (a2 & 0x40000000) != 0 )
      {
        v80 = 0;
        ptr = nullptr;
        ptr = (void *)qvector_reserve(&ptr, 0, 9, 1);
        v80.m128i_i64[0] = 9;
        strcpy((char *)ptr, "has_immd");
        sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
        if ( ptr )
        {
          v80.m128i_i64[0] = 0;
          qfree(ptr);
        }
      }
      if ( (a2 & 0x80000000) != 0LL )
      {
        sub_45DE90((__int64)&ptr, "switch_info");
        sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
        if ( ptr )
        {
          v80.m128i_i64[0] = 0;
          qfree(ptr);
        }
      }
      if ( (a2 & 0xF00000) != 0 )
      {
        v14 = v78;
        v15 = (char *)v77;
        if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
        {
          v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
          v14 = v78;
          v15 = (char *)v77;
        }
        v16 = &v15[24 * v14];
        *(_QWORD *)v16 = 0;
        *(_OWORD *)(v16 + 8) = 0;
        *(_QWORD *)&v78 = v78 + 1;
        sub_3573A0((char **)v16);
      }
      if ( (a2 & 0xF000000) != 0 )
      {
        v31 = v78;
        v32 = (char *)v77;
        if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
        {
          v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
          v31 = v78;
          v32 = (char *)v77;
        }
        v33 = &v32[24 * v31];
        *(_QWORD *)v33 = 0;
        *(_OWORD *)(v33 + 8) = 0;
        *(_QWORD *)&v78 = v78 + 1;
        sub_3573A0((char **)v33);
      }
      for ( i = 2; i != 8; ++i )
      {
        switch ( (a2 >> (4 * (unsigned __int8)i + 24)) & 0xF )
        {
          case 1uLL:
            v39 = "hex";
            goto LABEL_49;
          case 2uLL:
            v39 = (char *)"dec";
            goto LABEL_49;
          case 3uLL:
            v39 = (char *)"char";
            goto LABEL_49;
          case 4uLL:
            v39 = "seg";
            goto LABEL_49;
          case 5uLL:
            v39 = "offset";
            goto LABEL_49;
          case 6uLL:
            v39 = "bin";
            goto LABEL_49;
          case 7uLL:
            v39 = "oct";
            goto LABEL_49;
          case 8uLL:
            v39 = "enum";
            goto LABEL_49;
          case 9uLL:
            v39 = "fop";
            goto LABEL_49;
          case 0xAuLL:
            v39 = "stroff";
            goto LABEL_49;
          case 0xBuLL:
            v39 = "stkvar";
            goto LABEL_49;
          case 0xCuLL:
            v39 = "float";
            goto LABEL_49;
          case 0xDuLL:
            v39 = "custfmt";
LABEL_49:
            v40 = v78;
            v41 = (char *)v77;
            if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
            {
              v76.m128i_i64[0] = (__int64)v39;
              v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
              v40 = v78;
              v41 = (char *)v77;
            }
            v42 = &v41[24 * v40];
            *(_QWORD *)v42 = 0;
            *(_OWORD *)(v42 + 8) = 0;
            *(_QWORD *)&v78 = v78 + 1;
            sub_3573A0((char **)v42);
            break;
          default:
            continue;
        }
      }
      goto LABEL_53;
    }
    v51 = (unsigned int)a2 & 0xF0000000;
    if ( v51 == 1879048192 )
    {
      sub_45DE90((__int64)&ptr, "oword");
      sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
      v52 = ptr;
      if ( ptr )
        goto LABEL_76;
      goto LABEL_77;
    }
    if ( v51 > 0x70000000 )
    {
      if ( v51 == 2952790016 )
      {
        sub_45DE90((__int64)&ptr, "align");
        sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
        v52 = ptr;
        if ( !ptr )
          goto LABEL_77;
      }
      else
      {
        if ( v51 <= 0xB0000000 )
        {
          switch ( v51 )
          {
            case 0x90000000uLL:
              sub_45DE90((__int64)&ptr, "double");
              sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
              v52 = ptr;
              if ( ptr )
                goto LABEL_76;
              goto LABEL_77;
            case 0xA0000000uLL:
              sub_45DE90((__int64)&ptr, "pack_real");
              sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
              v52 = ptr;
              if ( ptr )
                goto LABEL_76;
              goto LABEL_77;
            case 0x80000000uLL:
              sub_45DE90((__int64)&ptr, "float");
              sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
              v52 = ptr;
              if ( !ptr )
                goto LABEL_77;
              goto LABEL_76;
          }
          goto LABEL_146;
        }
        if ( v51 == 3758096384 )
        {
          sub_45DE90((__int64)&ptr, "yword");
          sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
          v52 = ptr;
          if ( ptr )
            goto LABEL_76;
          goto LABEL_77;
        }
        if ( v51 == 4026531840 )
        {
          sub_45DE90((__int64)&ptr, "zword");
          sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
          v52 = ptr;
          if ( ptr )
            goto LABEL_76;
          goto LABEL_77;
        }
        if ( v51 != 3489660928 )
          goto LABEL_146;
        sub_45DE90((__int64)&ptr, "custom");
        sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
        v52 = ptr;
        if ( !ptr )
          goto LABEL_77;
      }
    }
    else if ( v51 == 805306368 )
    {
      sub_45DE90((__int64)&ptr, "qword");
      sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
      v52 = ptr;
      if ( !ptr )
        goto LABEL_77;
    }
    else if ( v51 > 0x30000000 )
    {
      if ( v51 == 1342177280 )
      {
        sub_45DE90((__int64)&ptr, "strlit");
        sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
        v52 = ptr;
        if ( ptr )
          goto LABEL_76;
        goto LABEL_77;
      }
      if ( v51 == 1610612736 )
      {
        sub_45DE90((__int64)&ptr, "struct");
        sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
        v52 = ptr;
        if ( ptr )
          goto LABEL_76;
        goto LABEL_77;
      }
      if ( v51 != 0x40000000 )
      {
LABEL_146:
        sub_45DE90((__int64)&ptr, "data");
        sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
        v52 = ptr;
        if ( ptr )
          goto LABEL_76;
LABEL_77:
        if ( (a2 & 0xF00000) != 0 )
        {
          ptr = nullptr;
          v80 = 0;
          v53 = (a2 >> 20) & 0xF;
          switch ( v53 )
          {
            case 1LL:
              v53 = 4;
              v59 = "hex";
              v58 = 3;
              break;
            case 2LL:
              v53 = 4;
              v58 = 3;
              v59 = (char *)"dec";
              break;
            case 3LL:
              v53 = 5;
              v58 = 4;
              v59 = (char *)"char";
              break;
            case 4LL:
              v58 = 3;
              v59 = "seg";
              break;
            case 5LL:
              v53 = 7;
              v58 = 6;
              v59 = "offset";
              break;
            case 6LL:
              v53 = 4;
              v58 = 3;
              v59 = "bin";
              break;
            case 7LL:
              v53 = 4;
              v58 = 3;
              v59 = "oct";
              break;
            case 8LL:
              v53 = 5;
              v58 = 4;
              v59 = "enum";
              break;
            case 9LL:
              v53 = 4;
              v58 = 3;
              v59 = "fop";
              break;
            case 10LL:
              v53 = 7;
              v58 = 6;
              v59 = "stroff";
              break;
            case 11LL:
              v53 = 7;
              v58 = 6;
              v59 = "stkvar";
              break;
            case 12LL:
              v53 = 6;
              v58 = 5;
              v59 = "float";
              break;
            case 13LL:
              v53 = 8;
              v58 = 7;
              v59 = "custfmt";
              break;
            default:
              v53 = 1;
              v58 = 0;
              v59 = (char *)&byte_22CD811;
              break;
          }
          v76.m128i_i64[0] = v58;
          v60 = (void *)qvector_reserve(&ptr, 0, v53, 1);
          v61 = v76.m128i_i64[0];
          ptr = v60;
          v80.m128i_i64[0] = v53;
          v62 = v76.m128i_i32[0];
          if ( v76.m128i_i32[0] )
          {
            v63 = 0;
            do
            {
              v64 = v63++;
              *((_BYTE *)v60 + v64) = v59[v64];
            }
            while ( v63 < v62 );
          }
          *((_BYTE *)ptr + v61) = 0;
          v65 = v78;
          v66 = (char *)v77;
          v67 = v78 + 1;
          if ( &ptr < v77 || &ptr >= (void **)((char *)v77 + 24 * *((_QWORD *)&v78 + 1)) )
          {
            if ( *((_QWORD *)&v78 + 1) < v67 )
            {
              v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
              v66 = (char *)v77;
              v65 = v78;
            }
            v72 = _mm_loadu_si128(&v80);
            v73 = &v66[24 * v65];
            *(_QWORD *)v73 = ptr;
            *(__m128i *)(v73 + 8) = v72;
            *(_QWORD *)&v78 = v78 + 1;
          }
          else
          {
            v68 = ptr;
            v69 = _mm_loadl_epi64(&v80);
            ptr = nullptr;
            v70 = _mm_loadl_epi64((const __m128i *)&v80.m128i_u64[1]);
            v80 = 0;
            if ( *((_QWORD *)&v78 + 1) < v67 )
            {
              v76.m128i_i64[1] = v70.m128i_i64[0];
              v76.m128i_i64[0] = v69.m128i_i64[0];
              v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
              v66 = (char *)v77;
              v70 = _mm_loadl_epi64((const __m128i *)&v76.m128i_u64[1]);
              v65 = v78;
              v69 = _mm_loadl_epi64(&v76);
            }
            v71 = &v66[24 * v65];
            *(_QWORD *)v71 = v68;
            *(__m128i *)(v71 + 8) = _mm_unpacklo_epi64(v69, v70);
            *(_QWORD *)&v78 = v78 + 1;
            if ( ptr )
            {
              v80.m128i_i64[0] = 0;
              qfree(ptr);
            }
          }
        }
LABEL_53:
        sub_45A080((__int64 *)&v77, a2);
        goto LABEL_28;
      }
      sub_45DE90((__int64)&ptr, "tbyte");
      sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
      v52 = ptr;
      if ( !ptr )
        goto LABEL_77;
    }
    else
    {
      if ( v51 == 0x10000000 )
      {
        sub_45DE90((__int64)&ptr, "word");
        sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
        v52 = ptr;
        if ( ptr )
          goto LABEL_76;
        goto LABEL_77;
      }
      if ( v51 != 0x20000000 )
      {
        if ( (a2 & 0xF0000000) == 0 )
        {
          sub_45DE90((__int64)&ptr, "byte");
          sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
          v52 = ptr;
          if ( !ptr )
            goto LABEL_77;
          goto LABEL_76;
        }
        goto LABEL_146;
      }
      sub_45DE90((__int64)&ptr, "dword");
      sub_464BE0((__int64 *)&v77, (unsigned __int64)&ptr);
      v52 = ptr;
      if ( !ptr )
        goto LABEL_77;
    }
LABEL_76:
    v80.m128i_i64[0] = 0;
    qfree(v52);
    goto LABEL_77;
  }
  if ( a3 )
    return v81 - __readfsqword(0x28u);
  v80 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 5, 1);
  v80.m128i_i64[0] = 5;
  strcpy((char *)ptr, "tail");
  v43 = v78;
  v44 = (char *)v77;
  v45 = v78 + 1;
  if ( &ptr < v77 || &ptr >= (void **)((char *)v77 + 24 * *((_QWORD *)&v78 + 1)) )
  {
    if ( *((_QWORD *)&v78 + 1) < v45 )
    {
      v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
      v44 = (char *)v77;
      v43 = v78;
    }
    v57 = &v44[24 * v43];
    *(_QWORD *)v57 = ptr;
    *(__m128i *)(v57 + 8) = _mm_loadu_si128(&v80);
    *(_QWORD *)&v78 = v78 + 1;
    goto LABEL_28;
  }
  v46 = ptr;
  v47 = _mm_loadl_epi64(&v80);
  ptr = nullptr;
  v48 = _mm_loadl_epi64((const __m128i *)&v80.m128i_u64[1]);
  v80 = 0;
  if ( *((_QWORD *)&v78 + 1) < v45 )
  {
    v76.m128i_i64[1] = v48.m128i_i64[0];
    v76.m128i_i64[0] = v47.m128i_i64[0];
    v77 = (void *)qvector_reserve(&v77, v77, v78 + 1, 24);
    v44 = (char *)v77;
    v48 = _mm_loadl_epi64((const __m128i *)&v76.m128i_u64[1]);
    v43 = v78;
    v47 = _mm_loadl_epi64(&v76);
  }
  v49 = &v44[24 * v43];
  *(_QWORD *)v49 = v46;
  *(__m128i *)(v49 + 8) = _mm_unpacklo_epi64(v47, v48);
  v50 = ptr;
  *(_QWORD *)&v78 = v78 + 1;
  if ( ptr )
  {
LABEL_60:
    v80.m128i_i64[0] = 0;
    qfree(v50);
  }
LABEL_28:
  v22 = (char *)v77;
  if ( a1 )
  {
    v23 = (__m128i *)((char *)v77 + 24 * v78);
    if ( v23 != v77 )
    {
      v24 = (__m128i *)v77;
      do
      {
        v28 = a1[1];
        v29 = *a1;
        if ( a1[2] < (unsigned __int64)(v28 + 1) )
        {
          v30 = qvector_reserve(a1, v29, v28 + 1, 24);
          *a1 = v30;
          v28 = a1[1];
          v29 = v30;
        }
        v24 = (__m128i *)((char *)v24 + 24);
        v25 = v29 + 24 * v28;
        *(_OWORD *)(v25 + 8) = 0;
        *(_QWORD *)v25 = 0;
        ++a1[1];
        v26 = *(_QWORD *)v25;
        v27 = _mm_loadu_si128((const __m128i *)(v25 + 8));
        *(_QWORD *)v25 = v24[-2].m128i_i64[1];
        *(_QWORD *)(v25 + 8) = v24[-1].m128i_i64[0];
        *(_QWORD *)(v25 + 16) = v24[-1].m128i_i64[1];
        v24[-2].m128i_i64[1] = v26;
        v24[-1] = v27;
      }
      while ( v23 != v24 );
      v22 = (char *)v77;
    }
  }
  if ( v22 )
  {
    v35 = v78;
    if ( (_QWORD)v78 )
    {
      v36 = 0;
      do
      {
        v37 = &v22[24 * v36];
        v38 = *(void **)v37;
        if ( *(_QWORD *)v37 )
        {
          *((_QWORD *)v37 + 1) = 0;
          qfree(v38);
          v22 = (char *)v77;
        }
        ++v36;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v78 = 0;
    qfree(v22);
  }
  return v81 - __readfsqword(0x28u);
}

