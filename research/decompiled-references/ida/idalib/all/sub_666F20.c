__int64 __fastcall sub_666F20(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  const char *v10; // rsi
  size_t v11; // r13
  __int64 v12; // r14
  char *v13; // rsi
  _BYTE *v14; // r14
  __int64 v15; // r15
  unsigned __int64 v16; // rdx
  _BYTE *v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // r15
  _BYTE *v20; // rsi
  size_t v21; // r8
  __int64 v22; // r15
  size_t v23; // r9
  _BYTE *v24; // rsi
  __int64 v25; // r13
  unsigned __int64 v26; // r15
  _BYTE *v27; // rsi
  unsigned __int64 v28; // r15
  __int64 v29; // r13
  _BYTE *v30; // rsi
  const char *v31; // r15
  int v32; // edx
  char v33; // cl
  char v34; // cl
  unsigned int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // ebx
  __int64 v39; // rdi
  char tinfo_attr; // al
  size_t v41; // r10
  __int64 v42; // r14
  void *v43; // r8
  size_t v44; // r9
  __int64 v45; // rsi
  size_t v46; // rdx
  char *v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // r13
  __int64 v50; // r15
  unsigned __int64 v51; // r14
  __int64 v52; // rsi
  _QWORD *v53; // r13
  void *v54; // rax
  unsigned int tinfo_size; // eax
  unsigned int v56; // ecx
  __int64 v57; // rax
  char v58; // r14
  __m128i *v59; // r14
  __int64 v60; // rdx
  size_t v61; // r9
  __int64 v62; // r8
  void *v63; // rdi
  __int64 v64; // r14
  unsigned __int64 v65; // rdx
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rsi
  unsigned int v70; // eax
  unsigned int v71; // ecx
  size_t v72; // [rsp+0h] [rbp-100h]
  size_t v73; // [rsp+8h] [rbp-F8h]
  size_t v74; // [rsp+8h] [rbp-F8h]
  void *v75; // [rsp+10h] [rbp-F0h]
  __int64 v76; // [rsp+10h] [rbp-F0h]
  size_t v77; // [rsp+18h] [rbp-E8h]
  unsigned __int64 v78; // [rsp+18h] [rbp-E8h]
  __int64 v79; // [rsp+18h] [rbp-E8h]
  char v80; // [rsp+20h] [rbp-E0h]
  size_t v81; // [rsp+20h] [rbp-E0h]
  char v82; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v83; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v84; // [rsp+28h] [rbp-D8h]
  size_t v85; // [rsp+28h] [rbp-D8h]
  __int64 v88; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v89; // [rsp+50h] [rbp-B0h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v92; // [rsp+68h] [rbp-98h]
  void *src; // [rsp+80h] [rbp-80h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-78h]
  void *v95[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v96; // [rsp+B8h] [rbp-48h]
  __int16 v97; // [rsp+BCh] [rbp-44h]
  unsigned __int64 v98; // [rsp+C8h] [rbp-38h]

  v5 = *(_DWORD *)(a4 + 72);
  v98 = __readfsqword(0x28u);
  v92 = 0;
  ptr = nullptr;
  if ( v5 )
  {
    if ( (v5 & 0x10) != 0 )
    {
      v49 = a2[1];
      if ( v49 )
      {
        v50 = v49 + 12;
        v51 = v49 + 13;
        --v49;
      }
      else
      {
        v51 = 14;
        v50 = 13;
      }
      v52 = *a2;
      if ( a2[2] < v51 )
      {
        v57 = qvector_reserve(a2, v52, v51, 1);
        *a2 = v57;
        v52 = v57;
      }
      a2[1] = v51;
      *(_BYTE *)(v52 + v50) = 0;
      v53 = (_QWORD *)(*a2 + v49);
      *v53 = 0x73756E755F5F2001LL;
      *(_QWORD *)((char *)v53 + 5) = 0x202002646573756ELL;
      v5 = *(_DWORD *)(a4 + 72);
    }
    v7 = 0;
    v8 = (*(char *)(a1 + 32) < 0) + 3;
    while ( 1 )
    {
      if ( _bittest(&v5, v7) )
      {
        v9 = v92;
        if ( (unsigned __int64)v92 > 1 )
        {
          v47 = (char *)ptr;
          v48 = v92 + 1;
          if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)(v92 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v48, 1);
            v48 = v9 + 1;
            v47 = (char *)ptr;
          }
          *(_QWORD *)&v92 = v48;
          v47[v9 - 1] = 32;
          *((_BYTE *)ptr + v9) = 0;
        }
        v10 = off_2B37320[v7];
        if ( *v10 )
          sub_65E8C0((__int64 *)&ptr, v10, 32);
      }
      if ( v8 == ++v7 )
        break;
      v5 = *(_DWORD *)(a4 + 72);
    }
  }
  if ( (*(_BYTE *)(a1 + 32) & 0x40) == 0 )
  {
    v11 = *(_QWORD *)(a4 + 24);
    if ( v11 > 1 )
    {
      v12 = v92;
      if ( (unsigned __int64)v92 <= 1 )
        goto LABEL_89;
      v13 = (char *)ptr;
      if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)(v92 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v92 + 1, 1);
        v13 = (char *)ptr;
      }
      *(_QWORD *)&v92 = v12 + 1;
      v13[v12 - 1] = 32;
      *((_BYTE *)ptr + v12) = 0;
      v11 = *(_QWORD *)(a4 + 24);
      if ( v11 )
      {
LABEL_89:
        v14 = (_BYTE *)qalloc_or_throw(v11);
        memcpy(v14, *(const void **)(a4 + 16), v11);
        if ( !*v14 )
        {
LABEL_42:
          if ( v14 )
            qfree(v14);
          goto LABEL_44;
        }
LABEL_18:
        v15 = v92;
        v16 = 2;
        if ( (_QWORD)v92 )
        {
          v16 = v92 + 1;
          v15 = v92 - 1;
        }
        v17 = ptr;
        if ( *((_QWORD *)&v92 + 1) < v16 )
        {
          v83 = v16;
          ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
          v16 = v83;
          v17 = ptr;
        }
        *(_QWORD *)&v92 = v16;
        v18 = 2;
        v17[v15] = 1;
        *((_BYTE *)ptr + v15 + 1) = 0;
        v19 = v92;
        if ( (_QWORD)v92 )
        {
          v18 = v92 + 1;
          v19 = v92 - 1;
        }
        v20 = ptr;
        if ( *((_QWORD *)&v92 + 1) < v18 )
        {
          v84 = v18;
          ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
          v18 = v84;
          v20 = ptr;
        }
        *(_QWORD *)&v92 = v18;
        v20[v19] = 33;
        *((_BYTE *)ptr + v19 + 1) = 0;
        if ( v11 )
        {
          v21 = v11 - 1;
          if ( v11 != 1 )
          {
            v22 = v92;
            v23 = v11 - 1;
            if ( (_QWORD)v92 )
            {
              v22 = v92 - 1;
              v23 = v21 + v92 - 1;
              v11 += v92 - 1;
            }
            v24 = ptr;
            if ( *((_QWORD *)&v92 + 1) < v11 )
            {
              v81 = v23;
              v85 = v21;
              ptr = (void *)qvector_reserve(&ptr, ptr, v11, 1);
              v23 = v81;
              v24 = ptr;
              v21 = v85;
            }
            *(_QWORD *)&v92 = v11;
            v24[v23] = 0;
            memcpy((char *)ptr + v22, v14, v21);
          }
        }
        v25 = v92;
        v26 = 2;
        if ( (_QWORD)v92 )
        {
          v26 = v92 + 1;
          v25 = v92 - 1;
        }
        v27 = ptr;
        if ( *((_QWORD *)&v92 + 1) < v26 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v26, 1);
          v27 = ptr;
        }
        *(_QWORD *)&v92 = v26;
        v28 = 2;
        v27[v25] = 2;
        *((_BYTE *)ptr + v25 + 1) = 0;
        v29 = v92;
        if ( (_QWORD)v92 )
        {
          v28 = v92 + 1;
          v29 = v92 - 1;
        }
        v30 = ptr;
        if ( *((_QWORD *)&v92 + 1) < v28 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v28, 1);
          v30 = ptr;
        }
        *(_QWORD *)&v92 = v28;
        v30[v29] = 33;
        *((_BYTE *)ptr + v29 + 1) = 0;
        goto LABEL_42;
      }
      if ( byte_2CCB1E1 )
      {
        v14 = nullptr;
        goto LABEL_18;
      }
    }
LABEL_44:
    v31 = sub_5372C0(a4);
    goto LABEL_45;
  }
  v31 = nullptr;
LABEL_45:
  v88 = 0;
  copy_tinfo_t(&v88);
  v32 = *(_DWORD *)(a1 + 32);
  if ( (v32 & 0x40000) != 0 )
    goto LABEL_48;
  v33 = *(_BYTE *)(a3 + 88);
  if ( (v33 & 0xF0) == 0xC0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a3 + 28) - 208) <= 0x2F )
    {
LABEL_48:
      if ( (v32 & 0x80) != 0 || (*(_BYTE *)(a4 + 72) & 8) == 0 )
      {
        v82 = 1;
        v34 = v88;
        if ( (v88 & 0xF) != 0xB )
          goto LABEL_50;
        src = nullptr;
        n[0] = 0;
        if ( (unsigned __int8)get_tinfo_details(v88, 11, &src) )
        {
          tinfo_property = 0;
          *(_OWORD *)v95 = 0;
          v89 = 0;
          copy_tinfo_t(&v95[1]);
          v95[2] = nullptr;
          copy_tinfo_t(&v95[2]);
          v96 = 0;
          v97 = 0;
          clear_tinfo_t(&v89);
          clear_tinfo_t(&tinfo_property);
          v54 = v95[0];
          tinfo_property = 0;
          v95[0] = src;
          src = v54;
          create_tinfo(&tinfo_property, 10, 10, v95);
          if ( (*(_BYTE *)(a3 + 25) & 2) != 0 || (*(_DWORD *)(a1 + 32) & 0x40000) != 0 )
          {
            tinfo_size = get_tinfo_size(0, tinfo_property, 0);
            v56 = 2;
          }
          else
          {
            tinfo_size = get_tinfo_size(0, tinfo_property, 0);
            v56 = 0;
          }
          sub_65F730((__int64 *)&ptr, a4, tinfo_size, v56);
          clear_tinfo_t(&tinfo_property);
          clear_tinfo_t(&v95[2]);
          clear_tinfo_t(&v95[1]);
          clear_tinfo_t(v95);
          v82 = 0;
        }
        else
        {
          v82 = 1;
        }
        clear_tinfo_t(&src);
        goto LABEL_108;
      }
      v82 = 1;
      goto LABEL_61;
    }
  }
  else if ( (v33 & 0xF0u) - 208 <= 0x2F )
  {
    goto LABEL_48;
  }
  if ( (v32 & 0x80) != 0 || (*(_BYTE *)(a4 + 72) & 8) == 0 )
    goto LABEL_75;
  v82 = 0;
LABEL_61:
  v39 = *(_QWORD *)(a4 + 64);
  src = nullptr;
  tinfo_property = 0;
  *(_OWORD *)n = 0;
  tinfo_property = get_tinfo_property(v39, 9);
  memset(v95, 0, sizeof(v95));
  v95[0] = (void *)qvector_reserve(v95, 0, 14, 1);
  v95[1] = byte_9 + 5;
  strcpy((char *)v95[0], "__org_typedef");
  tinfo_attr = get_tinfo_attr(*(_QWORD *)(a4 + 64), (__int64)v95, (__int64)&src, 0);
  if ( v95[0] )
  {
    v80 = tinfo_attr;
    v95[1] = nullptr;
    qfree(v95[0]);
    tinfo_attr = v80;
  }
  if ( tinfo_attr )
  {
    if ( (unsigned __int8)tinfo_property > 0x3Fu )
      sub_65EEB0(a2, tinfo_property, 1);
    v41 = n[0];
    v42 = a2[1];
    v43 = src;
    v44 = n[0];
    if ( v42 )
    {
      --v42;
      v44 = n[0] + v42;
    }
    v45 = *a2;
    v46 = v44 + 1;
    if ( a2[2] < v44 + 1 )
    {
      v72 = v44;
      v73 = n[0];
      v75 = src;
      v77 = v44 + 1;
      v67 = qvector_reserve(a2, v45, v46, 1);
      *a2 = v67;
      v44 = v72;
      v45 = v67;
      v41 = v73;
      v43 = v75;
      v46 = v77;
    }
    a2[1] = v46;
    *(_BYTE *)(v45 + v44) = 0;
    memmove((void *)(v42 + *a2), v43, v41);
    if ( (unsigned __int64)v92 > 1 )
    {
      v64 = a2[1];
      v65 = 2;
      if ( v64 )
        v65 = v64-- + 1;
      v66 = *a2;
      if ( a2[2] < v65 )
      {
        v78 = v65;
        v68 = qvector_reserve(a2, v66, v65, 1);
        *a2 = v68;
        v65 = v78;
        v66 = v68;
      }
      a2[1] = v65;
      *(_BYTE *)(v66 + v64) = 32;
      *(_BYTE *)(*a2 + v64 + 1) = 0;
      if ( !(unsigned __int8)sub_65FC20(a2, (const char *)ptr, v31, 37, 4) )
        sub_65E320();
    }
    clear_tinfo_t(&tinfo_property);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    goto LABEL_51;
  }
  memset(v95, 0, sizeof(v95));
  v95[0] = (void *)qvector_reserve(v95, 0, 13, 1);
  v95[1] = byte_9 + 4;
  strcpy((char *)v95[0], "__org_arrdim");
  v58 = get_tinfo_attr(*(_QWORD *)(a4 + 64), (__int64)v95, (__int64)&src, 0);
  if ( v95[0] )
  {
    v95[1] = nullptr;
    qfree(v95[0]);
  }
  if ( v58 )
  {
    if ( !(unsigned __int8)sub_6A9EC0(&v88, &tinfo_property, &src) )
    {
      clear_tinfo_t(&tinfo_property);
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      goto LABEL_133;
    }
    if ( !v82 )
    {
      clear_tinfo_t(&tinfo_property);
      v63 = src;
      if ( src )
        goto LABEL_105;
      goto LABEL_108;
    }
    v69 = *(_QWORD *)(a4 + 64);
    if ( (*(_BYTE *)(a3 + 25) & 2) != 0 || (*(_DWORD *)(a1 + 32) & 0x40000) != 0 )
    {
      v70 = get_tinfo_size(0, v69, 0);
      v71 = 2;
    }
    else
    {
      v70 = get_tinfo_size(0, v69, 0);
      v71 = 0;
    }
    sub_65F730((__int64 *)&ptr, a4, v70, v71);
    clear_tinfo_t(&tinfo_property);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
LABEL_75:
    v82 = 0;
    v34 = v88;
    goto LABEL_50;
  }
  v59 = (__m128i *)ptr;
  if ( (_QWORD)v92 )
  {
    v60 = v92 + 16;
    v61 = v92 - 1;
    v62 = v92 + 15;
    if ( *((_QWORD *)&v92 + 1) >= (unsigned __int64)(v92 + 16) )
      goto LABEL_102;
  }
  else
  {
    if ( *((_QWORD *)&v92 + 1) > 0x10u )
    {
      *(_QWORD *)&v92 = 17;
      *((_BYTE *)ptr + 16) = 0;
      goto LABEL_104;
    }
    v61 = 0;
    v60 = 17;
    v62 = 16;
  }
  v74 = v61;
  v76 = v62;
  v79 = v60;
  ptr = (void *)qvector_reserve(&ptr, ptr, v60, 1);
  v61 = v74;
  v59 = (__m128i *)ptr;
  v62 = v76;
  v60 = v79;
LABEL_102:
  *(_QWORD *)&v92 = v60;
  v59->m128i_i8[v62] = 0;
  v59 = (__m128i *)ptr;
  if ( v61 )
    memmove((char *)ptr + 16, ptr, v61);
LABEL_104:
  *v59 = _mm_load_si128((const __m128i *)&xmmword_23A7E50);
  clear_tinfo_t(&tinfo_property);
  v63 = src;
  if ( src )
  {
LABEL_105:
    n[0] = 0;
    qfree(v63);
    v34 = v88;
    goto LABEL_50;
  }
LABEL_108:
  v34 = v88;
LABEL_50:
  if ( !(unsigned __int8)sub_664DE0(a1, a2, &v88, v34, 1, (char *)ptr, v31, 0, 0) )
  {
LABEL_133:
    v37 = 0;
    goto LABEL_56;
  }
LABEL_51:
  if ( v82 )
  {
    if ( (*(_BYTE *)(a3 + 25) & 2) != 0 || (*(_DWORD *)(a1 + 32) & 0x40000) != 0 )
    {
      v35 = get_tinfo_size(0, v88, 0);
      v36 = 2;
    }
    else
    {
      v35 = get_tinfo_size(0, v88, 0);
      v36 = 0;
    }
    sub_65F730(a2, a4, v35, v36);
  }
  v37 = 1;
LABEL_56:
  clear_tinfo_t(&v88);
  if ( ptr )
  {
    *(_QWORD *)&v92 = 0;
    qfree(ptr);
  }
  return v37;
}
