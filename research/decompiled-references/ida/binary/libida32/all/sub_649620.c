__int64 __fastcall sub_649620(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r12
  int v5; // eax
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  size_t v10; // r13
  __int64 v11; // r14
  _BYTE *v12; // r14
  __int64 v13; // r15
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rsi
  unsigned __int64 v16; // rdx
  __int64 v17; // r15
  _BYTE *v18; // rsi
  size_t v19; // r8
  __int64 v20; // r15
  size_t v21; // r9
  _BYTE *v22; // rsi
  __int64 v23; // r13
  unsigned __int64 v24; // r15
  _BYTE *v25; // rsi
  unsigned __int64 v26; // r15
  __int64 v27; // r13
  _BYTE *v28; // rsi
  const char *v29; // r15
  int v30; // edx
  char v31; // cl
  char v32; // cl
  unsigned int v33; // eax
  unsigned int v34; // ecx
  unsigned int v35; // ebx
  __int64 v37; // rdi
  char tinfo_attr; // al
  size_t v39; // r10
  __int64 v40; // r14
  void *v41; // r8
  size_t v42; // r9
  __int64 v43; // rsi
  size_t v44; // rdx
  char *v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // r13
  __int64 v48; // r15
  unsigned __int64 v49; // r14
  _QWORD *v50; // r13
  void *v51; // rax
  unsigned int tinfo_size; // eax
  unsigned int v53; // ecx
  __int64 v54; // rax
  char v55; // r14
  __m128i *v56; // r14
  __int64 v57; // rdx
  size_t v58; // r9
  __int64 v59; // r8
  void *v60; // rdi
  __int64 v61; // r14
  unsigned __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rsi
  unsigned int v67; // eax
  unsigned int v68; // ecx
  size_t v69; // [rsp+0h] [rbp-100h]
  size_t v70; // [rsp+8h] [rbp-F8h]
  size_t v71; // [rsp+8h] [rbp-F8h]
  void *v72; // [rsp+10h] [rbp-F0h]
  __int64 v73; // [rsp+10h] [rbp-F0h]
  size_t v74; // [rsp+18h] [rbp-E8h]
  unsigned __int64 v75; // [rsp+18h] [rbp-E8h]
  __int64 v76; // [rsp+18h] [rbp-E8h]
  char v77; // [rsp+20h] [rbp-E0h]
  size_t v78; // [rsp+20h] [rbp-E0h]
  char v79; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v80; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v81; // [rsp+28h] [rbp-D8h]
  size_t v82; // [rsp+28h] [rbp-D8h]
  __int64 v85; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v86; // [rsp+50h] [rbp-B0h] BYREF
  __int64 tinfo_property; // [rsp+58h] [rbp-A8h] BYREF
  void *ptr; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v89; // [rsp+68h] [rbp-98h]
  void *src; // [rsp+80h] [rbp-80h] BYREF
  size_t n[3]; // [rsp+88h] [rbp-78h]
  void *v92[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v93; // [rsp+B8h] [rbp-48h]
  __int16 v94; // [rsp+BCh] [rbp-44h]
  unsigned __int64 v95; // [rsp+C8h] [rbp-38h]

  v4 = (__int64 *)a2;
  v5 = *(_DWORD *)(a4 + 72);
  v95 = __readfsqword(0x28u);
  v89 = 0;
  ptr = nullptr;
  if ( v5 )
  {
    if ( (v5 & 0x10) != 0 )
    {
      v47 = *((_QWORD *)a2 + 1);
      if ( v47 )
      {
        v48 = v47 + 12;
        v49 = v47 + 13;
        --v47;
      }
      else
      {
        v49 = 14;
        v48 = 13;
      }
      a2 = *(char **)a2;
      if ( v4[2] < v49 )
      {
        v54 = qvector_reserve(v4, a2, v49, 1);
        *v4 = v54;
        a2 = (char *)v54;
      }
      v4[1] = v49;
      a2[v48] = 0;
      v50 = (_QWORD *)(*v4 + v47);
      *v50 = 0x73756E755F5F2001LL;
      *(_QWORD *)((char *)v50 + 5) = 0x202002646573756ELL;
      v5 = *(_DWORD *)(a4 + 72);
    }
    v7 = 0;
    v8 = (*(char *)(a1 + 32) < 0) + 3;
    while ( 1 )
    {
      if ( _bittest(&v5, v7) )
      {
        v9 = v89;
        if ( (unsigned __int64)v89 > 1 )
        {
          v45 = (char *)ptr;
          v46 = v89 + 1;
          if ( *((_QWORD *)&v89 + 1) < (unsigned __int64)(v89 + 1) )
          {
            ptr = (void *)qvector_reserve(&ptr, ptr, v46, 1);
            v46 = v9 + 1;
            v45 = (char *)ptr;
          }
          *(_QWORD *)&v89 = v46;
          v45[v9 - 1] = 32;
          *((_BYTE *)ptr + v9) = 0;
        }
        a2 = off_2B0D360[v7];
        if ( *a2 )
          sub_640FE0((__int64 *)&ptr, a2, 32);
      }
      if ( v8 == ++v7 )
        break;
      v5 = *(_DWORD *)(a4 + 72);
    }
  }
  if ( (*(_BYTE *)(a1 + 32) & 0x40) == 0 )
  {
    v10 = *(_QWORD *)(a4 + 24);
    if ( v10 > 1 )
    {
      v11 = v89;
      if ( (unsigned __int64)v89 <= 1 )
        goto LABEL_89;
      a2 = (char *)ptr;
      if ( *((_QWORD *)&v89 + 1) < (unsigned __int64)(v89 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v89 + 1, 1);
        a2 = (char *)ptr;
      }
      *(_QWORD *)&v89 = v11 + 1;
      a2[v11 - 1] = 32;
      *((_BYTE *)ptr + v11) = 0;
      v10 = *(_QWORD *)(a4 + 24);
      if ( v10 )
      {
LABEL_89:
        v12 = (_BYTE *)qalloc_or_throw(v10, a2);
        memcpy(v12, *(const void **)(a4 + 16), v10);
        if ( !*v12 )
        {
LABEL_42:
          if ( v12 )
            qfree(v12);
          goto LABEL_44;
        }
LABEL_18:
        v13 = v89;
        v14 = 2;
        if ( (_QWORD)v89 )
        {
          v14 = v89 + 1;
          v13 = v89 - 1;
        }
        v15 = ptr;
        if ( *((_QWORD *)&v89 + 1) < v14 )
        {
          v80 = v14;
          ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
          v14 = v80;
          v15 = ptr;
        }
        *(_QWORD *)&v89 = v14;
        v16 = 2;
        v15[v13] = 1;
        *((_BYTE *)ptr + v13 + 1) = 0;
        v17 = v89;
        if ( (_QWORD)v89 )
        {
          v16 = v89 + 1;
          v17 = v89 - 1;
        }
        v18 = ptr;
        if ( *((_QWORD *)&v89 + 1) < v16 )
        {
          v81 = v16;
          ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
          v16 = v81;
          v18 = ptr;
        }
        *(_QWORD *)&v89 = v16;
        v18[v17] = 33;
        *((_BYTE *)ptr + v17 + 1) = 0;
        if ( v10 )
        {
          v19 = v10 - 1;
          if ( v10 != 1 )
          {
            v20 = v89;
            v21 = v10 - 1;
            if ( (_QWORD)v89 )
            {
              v20 = v89 - 1;
              v21 = v19 + v89 - 1;
              v10 += v89 - 1;
            }
            v22 = ptr;
            if ( *((_QWORD *)&v89 + 1) < v10 )
            {
              v78 = v21;
              v82 = v19;
              ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
              v21 = v78;
              v22 = ptr;
              v19 = v82;
            }
            *(_QWORD *)&v89 = v10;
            v22[v21] = 0;
            memcpy((char *)ptr + v20, v12, v19);
          }
        }
        v23 = v89;
        v24 = 2;
        if ( (_QWORD)v89 )
        {
          v24 = v89 + 1;
          v23 = v89 - 1;
        }
        v25 = ptr;
        if ( *((_QWORD *)&v89 + 1) < v24 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v24, 1);
          v25 = ptr;
        }
        *(_QWORD *)&v89 = v24;
        v26 = 2;
        v25[v23] = 2;
        *((_BYTE *)ptr + v23 + 1) = 0;
        v27 = v89;
        if ( (_QWORD)v89 )
        {
          v26 = v89 + 1;
          v27 = v89 - 1;
        }
        v28 = ptr;
        if ( *((_QWORD *)&v89 + 1) < v26 )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, v26, 1);
          v28 = ptr;
        }
        *(_QWORD *)&v89 = v26;
        v28[v27] = 33;
        *((_BYTE *)ptr + v27 + 1) = 0;
        goto LABEL_42;
      }
      if ( byte_2CA12E1 )
      {
        v12 = nullptr;
        goto LABEL_18;
      }
    }
LABEL_44:
    v29 = sub_51E7A0(a4);
    goto LABEL_45;
  }
  v29 = nullptr;
LABEL_45:
  v85 = 0;
  copy_tinfo_t(&v85);
  v30 = *(_DWORD *)(a1 + 32);
  if ( (v30 & 0x40000) != 0 )
    goto LABEL_48;
  v31 = *(_BYTE *)(a3 + 88);
  if ( (v31 & 0xF0) == 0xC0 )
  {
    if ( (unsigned int)(*(_DWORD *)(a3 + 28) - 208) <= 0x2F )
    {
LABEL_48:
      if ( (v30 & 0x80) != 0 || (*(_BYTE *)(a4 + 72) & 8) == 0 )
      {
        v79 = 1;
        v32 = v85;
        if ( (v85 & 0xF) != 0xB )
          goto LABEL_50;
        src = nullptr;
        n[0] = 0;
        if ( (unsigned __int8)get_tinfo_details(v85, 11, &src) )
        {
          tinfo_property = 0;
          *(_OWORD *)v92 = 0;
          v86 = 0;
          copy_tinfo_t(&v92[1]);
          v92[2] = nullptr;
          copy_tinfo_t(&v92[2]);
          v93 = 0;
          v94 = 0;
          clear_tinfo_t(&v86);
          clear_tinfo_t(&tinfo_property);
          v51 = v92[0];
          tinfo_property = 0;
          v92[0] = src;
          src = v51;
          create_tinfo(&tinfo_property, 10, 10, v92);
          if ( (*(_BYTE *)(a3 + 25) & 2) != 0 || (*(_DWORD *)(a1 + 32) & 0x40000) != 0 )
          {
            tinfo_size = get_tinfo_size(0, tinfo_property, 0);
            v53 = 2;
          }
          else
          {
            tinfo_size = get_tinfo_size(0, tinfo_property, 0);
            v53 = 0;
          }
          sub_641E50((__int64 *)&ptr, a4, tinfo_size, v53);
          clear_tinfo_t(&tinfo_property);
          clear_tinfo_t(&v92[2]);
          clear_tinfo_t(&v92[1]);
          clear_tinfo_t(v92);
          v79 = 0;
        }
        else
        {
          v79 = 1;
        }
        clear_tinfo_t(&src);
        goto LABEL_108;
      }
      v79 = 1;
      goto LABEL_61;
    }
  }
  else if ( (v31 & 0xF0u) - 208 <= 0x2F )
  {
    goto LABEL_48;
  }
  if ( (v30 & 0x80) != 0 || (*(_BYTE *)(a4 + 72) & 8) == 0 )
    goto LABEL_75;
  v79 = 0;
LABEL_61:
  v37 = *(_QWORD *)(a4 + 64);
  src = nullptr;
  tinfo_property = 0;
  *(_OWORD *)n = 0;
  tinfo_property = get_tinfo_property(v37, 9);
  memset(v92, 0, sizeof(v92));
  v92[0] = (void *)qvector_reserve(v92, 0, 14, 1);
  v92[1] = byte_9 + 5;
  strcpy((char *)v92[0], "__org_typedef");
  tinfo_attr = get_tinfo_attr(*(_QWORD *)(a4 + 64), v92, &src, 0);
  if ( v92[0] )
  {
    v77 = tinfo_attr;
    v92[1] = nullptr;
    qfree(v92[0]);
    tinfo_attr = v77;
  }
  if ( tinfo_attr )
  {
    if ( (unsigned __int8)tinfo_property > 0x3Fu )
      sub_6415D0(v4, tinfo_property, 1);
    v39 = n[0];
    v40 = v4[1];
    v41 = src;
    v42 = n[0];
    if ( v40 )
    {
      --v40;
      v42 = n[0] + v40;
    }
    v43 = *v4;
    v44 = v42 + 1;
    if ( v4[2] < v42 + 1 )
    {
      v69 = v42;
      v70 = n[0];
      v72 = src;
      v74 = v42 + 1;
      v64 = qvector_reserve(v4, v43, v44, 1);
      *v4 = v64;
      v42 = v69;
      v43 = v64;
      v39 = v70;
      v41 = v72;
      v44 = v74;
    }
    v4[1] = v44;
    *(_BYTE *)(v43 + v42) = 0;
    memmove((void *)(v40 + *v4), v41, v39);
    if ( (unsigned __int64)v89 > 1 )
    {
      v61 = v4[1];
      v62 = 2;
      if ( v61 )
        v62 = v61-- + 1;
      v63 = *v4;
      if ( v4[2] < v62 )
      {
        v75 = v62;
        v65 = qvector_reserve(v4, v63, v62, 1);
        *v4 = v65;
        v62 = v75;
        v63 = v65;
      }
      v4[1] = v62;
      *(_BYTE *)(v63 + v61) = 32;
      *(_BYTE *)(*v4 + v61 + 1) = 0;
      if ( !(unsigned __int8)sub_642340(v4, (const char *)ptr, v29, 37, 4) )
        sub_640A40();
    }
    clear_tinfo_t(&tinfo_property);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
    goto LABEL_51;
  }
  memset(v92, 0, sizeof(v92));
  v92[0] = (void *)qvector_reserve(v92, 0, 13, 1);
  v92[1] = byte_9 + 4;
  strcpy((char *)v92[0], "__org_arrdim");
  v55 = get_tinfo_attr(*(_QWORD *)(a4 + 64), v92, &src, 0);
  if ( v92[0] )
  {
    v92[1] = nullptr;
    qfree(v92[0]);
  }
  if ( v55 )
  {
    if ( !(unsigned __int8)sub_6896D0(&v85, &tinfo_property, &src) )
    {
      clear_tinfo_t(&tinfo_property);
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      goto LABEL_133;
    }
    if ( !v79 )
    {
      clear_tinfo_t(&tinfo_property);
      v60 = src;
      if ( src )
        goto LABEL_105;
      goto LABEL_108;
    }
    v66 = *(_QWORD *)(a4 + 64);
    if ( (*(_BYTE *)(a3 + 25) & 2) != 0 || (*(_DWORD *)(a1 + 32) & 0x40000) != 0 )
    {
      v67 = get_tinfo_size(0, v66, 0);
      v68 = 2;
    }
    else
    {
      v67 = get_tinfo_size(0, v66, 0);
      v68 = 0;
    }
    sub_641E50((__int64 *)&ptr, a4, v67, v68);
    clear_tinfo_t(&tinfo_property);
    if ( src )
    {
      n[0] = 0;
      qfree(src);
    }
LABEL_75:
    v79 = 0;
    v32 = v85;
    goto LABEL_50;
  }
  v56 = (__m128i *)ptr;
  if ( (_QWORD)v89 )
  {
    v57 = v89 + 16;
    v58 = v89 - 1;
    v59 = v89 + 15;
    if ( *((_QWORD *)&v89 + 1) >= (unsigned __int64)(v89 + 16) )
      goto LABEL_102;
  }
  else
  {
    if ( *((_QWORD *)&v89 + 1) > 0x10u )
    {
      *(_QWORD *)&v89 = 17;
      *((_BYTE *)ptr + 16) = 0;
      goto LABEL_104;
    }
    v58 = 0;
    v57 = 17;
    v59 = 16;
  }
  v71 = v58;
  v73 = v59;
  v76 = v57;
  ptr = (void *)qvector_reserve(&ptr, ptr, v57, 1);
  v58 = v71;
  v56 = (__m128i *)ptr;
  v59 = v73;
  v57 = v76;
LABEL_102:
  *(_QWORD *)&v89 = v57;
  v56->m128i_i8[v59] = 0;
  v56 = (__m128i *)ptr;
  if ( v58 )
    memmove((char *)ptr + 16, ptr, v58);
LABEL_104:
  *v56 = _mm_load_si128((const __m128i *)&xmmword_2383E30);
  clear_tinfo_t(&tinfo_property);
  v60 = src;
  if ( src )
  {
LABEL_105:
    n[0] = 0;
    qfree(v60);
    v32 = v85;
    goto LABEL_50;
  }
LABEL_108:
  v32 = v85;
LABEL_50:
  if ( !(unsigned __int8)sub_6474E0(a1, v4, &v85, v32, 1, (char *)ptr, v29, 0, 0) )
  {
LABEL_133:
    v35 = 0;
    goto LABEL_56;
  }
LABEL_51:
  if ( v79 )
  {
    if ( (*(_BYTE *)(a3 + 25) & 2) != 0 || (*(_DWORD *)(a1 + 32) & 0x40000) != 0 )
    {
      v33 = get_tinfo_size(0, v85, 0);
      v34 = 2;
    }
    else
    {
      v33 = get_tinfo_size(0, v85, 0);
      v34 = 0;
    }
    sub_641E50(v4, a4, v33, v34);
  }
  v35 = 1;
LABEL_56:
  clear_tinfo_t(&v85);
  if ( ptr )
  {
    *(_QWORD *)&v89 = 0;
    qfree(ptr);
  }
  return v35;
}

