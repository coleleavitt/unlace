__int64 __fastcall sub_4E8840(__int64 a1, __int64 a2, char **a3, __int64 a4)
{
  const char *v5; // rdi
  __int64 v7; // rbx
  bool v8; // zf
  char *file_ext; // rax
  __int64 extlang; // rax
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(const char *, const char *, char **); // rcx
  const char *v14; // rsi
  const char *v15; // rdi
  unsigned int v16; // r13d
  __int64 v17; // rax
  const char *v18; // r9
  size_t v19; // r15
  __int64 v20; // r8
  unsigned __int64 v21; // r15
  _BYTE *v22; // rsi
  __int64 v23; // r8
  __int64 v24; // r10
  unsigned __int64 v25; // r15
  const char *v27; // rdx
  __int64 v28; // rax
  const char *v29; // rcx
  const char *v30; // rsi
  const char *v31; // r13
  __int64 v32; // rbx
  const char *v33; // r15
  const char *v34; // rdi
  const char *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbp
  const char *v39; // rdi
  __int64 (__fastcall **v40)(); // r15
  int v41; // eax
  int v42; // eax
  int v43; // edx
  const char *v44; // r15
  size_t v45; // rax
  size_t v46; // rbx
  void *v47; // rdi
  size_t v48; // rbp
  char v49; // al
  _DWORD *v50; // rdx
  __int64 v51; // rdi
  char *v52; // rsi
  __m128i si128; // xmm0
  __int64 v54; // r10
  __int64 v55; // r15
  const char *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // [rsp+8h] [rbp-100h]
  __int64 v61; // [rsp+8h] [rbp-100h]
  __int64 v62; // [rsp+8h] [rbp-100h]
  const char *src; // [rsp+10h] [rbp-F8h]
  _DWORD *srca; // [rsp+10h] [rbp-F8h]
  __int64 v65; // [rsp+18h] [rbp-F0h]
  unsigned __int8 v66; // [rsp+2Fh] [rbp-D9h]
  __int64 v67; // [rsp+30h] [rbp-D8h]
  char **v68; // [rsp+38h] [rbp-D0h]
  void *ptr; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v70; // [rsp+48h] [rbp-C0h]
  void *dest; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v72; // [rsp+68h] [rbp-A0h]
  char v73[8]; // [rsp+80h] [rbp-88h] BYREF
  __int128 v74; // [rsp+88h] [rbp-80h]
  __int64 v75; // [rsp+98h] [rbp-70h]
  char v76[8]; // [rsp+A0h] [rbp-68h] BYREF
  _OWORD v77[2]; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v78; // [rsp+C8h] [rbp-40h]

  v5 = haystack;
  v7 = a2;
  v8 = *(_QWORD *)(a2 + 8) == 0;
  v78 = __readfsqword(0x28u);
  if ( !v8 )
    v5 = *(const char **)a2;
  file_ext = (char *)get_file_ext(v5);
  extlang = find_extlang(file_ext);
  v12 = *(_QWORD *)(a1 + 88);
  if ( v12 )
    --*(_DWORD *)(v12 + 12);
  *(_QWORD *)(a1 + 88) = extlang;
  if ( !extlang
    || (v13 = *(__int64 (__fastcall **)(const char *, const char *, char **))(extlang + 48)) == nullptr
    || !*(_QWORD *)(extlang + 80)
    || !*(_QWORD *)(extlang + 56)
    || !*(_QWORD *)(extlang + 104)
    || !*(_QWORD *)(extlang + 88) )
  {
    sub_35A790(a3);
    return 0;
  }
  ptr = nullptr;
  v70 = 0;
  if ( (*(_BYTE *)(extlang + 8) & 2) == 0 )
    goto LABEL_12;
  v27 = haystack;
  if ( *(_QWORD *)(a2 + 32) )
    v27 = *(const char **)(a2 + 24);
  make_script_ns(&ptr, "plugins", v27);
  v13 = *(__int64 (__fastcall **)(const char *, const char *, char **))(*(_QWORD *)(a1 + 88) + 48LL);
  if ( (_QWORD)v70 )
    v14 = (const char *)ptr;
  else
LABEL_12:
    v14 = haystack;
  v15 = haystack;
  if ( *(_QWORD *)(v7 + 8) )
    v15 = *(const char **)v7;
  v16 = v13(v15, v14, a3);
  if ( !(_BYTE)v16 )
    goto LABEL_34;
  v17 = *(_QWORD *)(a1 + 88);
  dest = nullptr;
  v72 = 0;
  if ( (*(_BYTE *)(v17 + 8) & 2) != 0 )
  {
    v18 = haystack;
    if ( (_QWORD)v70 )
      v18 = (const char *)ptr;
    if ( v18 )
    {
      src = v18;
      v19 = strlen(v18);
      dest = (void *)qvector_reserve(&dest, 0, v19 + 1, 1);
      *(_QWORD *)&v72 = v19 + 1;
      *((_BYTE *)dest + v19) = 0;
      memmove(dest, src, v19);
      v18 = (const char *)dest;
      if ( (_QWORD)v72 )
      {
        v20 = v72 - 1;
        v21 = v72 + 1;
      }
      else
      {
        v20 = 0;
        v21 = 2;
      }
      if ( *((_QWORD *)&v72 + 1) >= v21 )
      {
LABEL_23:
        *(_QWORD *)&v72 = v21;
        v18[v20] = 46;
        *((_BYTE *)dest + v20 + 1) = 0;
        v22 = dest;
        if ( !"PLUGIN_ENTRY" )
        {
          v17 = *(_QWORD *)(a1 + 88);
          goto LABEL_28;
        }
        if ( (_QWORD)v72 )
        {
          v23 = v72 - 1;
          v24 = v72 + 11;
          v25 = v72 + 12;
        }
        else
        {
          v23 = 0;
          v25 = 13;
          v24 = 12;
        }
        if ( *((_QWORD *)&v72 + 1) >= v25 )
          goto LABEL_27;
        goto LABEL_45;
      }
    }
    else
    {
      v20 = 0;
      v21 = 2;
    }
    v62 = v20;
    dest = (void *)qvector_reserve(&dest, v18, v21, 1);
    v20 = v62;
    v18 = (const char *)dest;
    goto LABEL_23;
  }
  v22 = nullptr;
  if ( !"PLUGIN_ENTRY" )
    goto LABEL_28;
  v25 = 13;
  v23 = 0;
  v24 = 12;
LABEL_45:
  v65 = v23;
  v61 = v24;
  dest = (void *)qvector_reserve(&dest, v22, v25, 1);
  v23 = v65;
  v22 = dest;
  v24 = v61;
LABEL_27:
  *(_QWORD *)&v72 = v25;
  v22[v24] = 0;
  qmemcpy((char *)dest + v23, "PLUGIN_ENTRY", 12);
  v22 = dest;
  v17 = *(_QWORD *)(a1 + 88);
LABEL_28:
  v60 = a1 + 96;
  v16 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD, _QWORD, char **))(v17 + 56))(a1 + 96, v22, 0, 0, a3);
  if ( !(_BYTE)v16 )
  {
LABEL_31:
    v16 = 0;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(a1 + 96) != 5 )
  {
    sub_35A790(a3);
    goto LABEL_31;
  }
  v28 = *(_QWORD *)(a1 + 88);
  v73[0] = 2;
  v75 = 0;
  v74 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(char *, __int64, const char *))(v28 + 88))(v73, v60, &byte_22F0C30) )
  {
    sub_35A790((char **)a4);
    v29 = haystack;
    if ( *(_QWORD *)(a4 + 8) )
      v29 = *(const char **)a4;
    v30 = haystack;
    if ( *(_QWORD *)(v7 + 8) )
      v30 = *(const char **)v7;
    if ( (int *)qword_2CCBE78 != &dword_2CCBE68 )
    {
      v68 = a3;
      v66 = v16;
      v31 = v29;
      v67 = v7;
      v32 = qword_2CCBE78;
      v33 = v30;
      while ( 1 )
      {
        v34 = haystack;
        if ( *(_QWORD *)(v32 + 64) )
          v34 = *(const char **)(v32 + 56);
        v35 = v31;
        if ( !strcmp(v34, v31) )
        {
          v38 = *(_QWORD *)(v32 + 40);
          v39 = haystack;
          if ( v38 )
            v39 = *(const char **)(v32 + 32);
          v35 = v33;
          if ( strcmp(v39, v33) )
            break;
        }
        v32 = std::_Rb_tree_increment(v32, v35, v36, v37);
        if ( (int *)v32 == &dword_2CCBE68 )
        {
          v16 = v66;
          v7 = v67;
          a3 = v68;
          goto LABEL_64;
        }
      }
      v54 = v38;
      v55 = v32;
      v16 = v66;
      v7 = v67;
      a3 = v68;
      v56 = haystack;
      if ( v54 )
        v56 = *(const char **)(v55 + 32);
      if ( v56 )
      {
        qbasename(v56);
        sub_35A790(v68);
        v16 = 0;
        goto LABEL_78;
      }
    }
  }
LABEL_64:
  v76[0] = 2;
  v40 = (__int64 (__fastcall **)())&unk_2B2D320;
  memset(v77, 0, 24);
  while ( 1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(char *, __int64, __int64 (__fastcall *)()))(*(_QWORD *)(a1 + 88) + 88LL))(
            v76,
            v60,
            v40[1]) )
    {
      v41 = *((_DWORD *)v40 + 6);
      if ( (v41 & 1) != 0 || (*(_BYTE *)(a1 + 5) & 1) == 0 && (v41 & 2) != 0 )
        goto LABEL_86;
      goto LABEL_69;
    }
    v49 = *(_BYTE *)v40;
    if ( v76[0] != *(_BYTE *)v40 )
      goto LABEL_86;
    v50 = (_DWORD *)((char *)v40[2] + a1);
    if ( v49 == 2 )
    {
      *v50 = v77[0];
      goto LABEL_69;
    }
    if ( v49 == 7 )
      break;
LABEL_69:
    v40 += 4;
    if ( v40 == &off_2B2D420 )
      goto LABEL_70;
  }
  v51 = *(_QWORD *)&v77[0];
  if ( *((_QWORD *)&v77[0] + 1) < *(_QWORD *)&v77[1] && *((_QWORD *)&v77[0] + 1) && *(_QWORD *)&v77[0] )
  {
    srca = (_DWORD *)((char *)v40[2] + a1);
    v58 = qrealloc(*(_QWORD *)&v77[0]);
    v50 = srca;
    v51 = v58;
    if ( v58 )
    {
      memset(v77, 0, 24);
LABEL_84:
      *(_QWORD *)v50 = v51;
      goto LABEL_69;
    }
    v51 = *(_QWORD *)&v77[0];
  }
  memset(v77, 0, 24);
  if ( v51 || ((_BYTE)v40[3] & 1) == 0 )
    goto LABEL_84;
LABEL_86:
  sub_35A790(a3);
  v16 = 0;
LABEL_70:
  v42 = *(_DWORD *)(a1 + 4);
  v43 = v42;
  BYTE1(v43) = BYTE1(v42) | 0x80;
  *(_DWORD *)(a1 + 4) = v43;
  if ( (v42 & 0x20) != 0 )
  {
    v52 = *a3;
    if ( (unsigned __int64)a3[2] <= 0x30 )
    {
      v57 = qvector_reserve(a3, v52, 49, 1);
      *a3 = (char *)v57;
      v52 = (char *)v57;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7A30);
    a3[1] = (_BYTE *)(&dword_30 + 1);
    v16 = 0;
    *(__m128i *)v52 = si128;
    *((__m128i *)v52 + 1) = _mm_load_si128((const __m128i *)&xmmword_23A7A40);
    *((__m128i *)v52 + 2) = _mm_load_si128((const __m128i *)&xmmword_23A7A50);
    (*a3)[48] = 0;
  }
  else if ( *(_QWORD *)(v7 + 8)
         && (v44 = *(const char **)v7) != nullptr
         && (v45 = strlen(*(const char **)v7), (v46 = v45) != 0) )
  {
    v47 = *(void **)(a1 + 64);
    v48 = v45 + 1;
    if ( *(_QWORD *)(a1 + 80) < v45 + 1 )
    {
      v59 = qvector_reserve(a1 + 64, *(_QWORD *)(a1 + 64), v48, 1);
      *(_QWORD *)(a1 + 64) = v59;
      v47 = (void *)v59;
    }
    *(_QWORD *)(a1 + 72) = v48;
    memmove(v47, v44, v46);
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + v46) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0;
  }
  free_idcv(v76);
LABEL_78:
  free_idcv(v73);
LABEL_32:
  if ( dest )
  {
    *(_QWORD *)&v72 = 0;
    qfree(dest);
  }
LABEL_34:
  if ( ptr )
  {
    *(_QWORD *)&v70 = 0;
    qfree(ptr);
  }
  return v16;
}
