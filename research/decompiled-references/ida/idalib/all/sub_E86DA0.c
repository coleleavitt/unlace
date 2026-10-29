void __fastcall sub_E86DA0(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned int *v22; // rsi
  size_t v23; // rdx
  char *v24; // rsi
  __int64 v25; // r12
  __int64 v26; // rax
  __int64 *v27; // r12
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  char *v32; // r15
  size_t v33; // rdx
  unsigned int *v34; // r15
  char *v35; // rax
  char *v36; // rax
  __int64 v37; // rdi
  _BYTE *v38; // rax
  __int64 v39; // rdi
  _BYTE *v40; // rax
  __int64 v41; // r13
  unsigned int v42; // ebx
  __int64 v43; // r14
  unsigned int v44; // r12d
  void **v45; // r15
  void **v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 *v50; // rbx
  __int64 *v51; // r12
  __int64 v52; // rsi
  size_t v53; // rax
  __int64 *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rsi
  __int64 v57; // rdx
  size_t v58; // rax
  size_t v59; // rax
  __int64 *i; // [rsp+10h] [rbp-4F8h]
  size_t v62; // [rsp+28h] [rbp-4E0h]
  __int64 v64; // [rsp+48h] [rbp-4C0h]
  __int64 v65; // [rsp+50h] [rbp-4B8h]
  int v66; // [rsp+58h] [rbp-4B0h]
  int v67; // [rsp+5Ch] [rbp-4ACh]
  __int64 v68; // [rsp+60h] [rbp-4A8h]
  __int64 v69; // [rsp+68h] [rbp-4A0h]
  _QWORD v70[2]; // [rsp+70h] [rbp-498h] BYREF
  const char *v71; // [rsp+80h] [rbp-488h] BYREF
  __int64 v72; // [rsp+88h] [rbp-480h]
  __int128 v73; // [rsp+90h] [rbp-478h]
  _WORD *v74; // [rsp+A0h] [rbp-468h]
  char v75; // [rsp+A8h] [rbp-460h]
  int v76; // [rsp+ACh] [rbp-45Ch]
  void **p_ptr; // [rsp+B0h] [rbp-458h]
  void *ptr; // [rsp+C0h] [rbp-448h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-440h]
  _QWORD v80[2]; // [rsp+D8h] [rbp-430h] BYREF
  char v81; // [rsp+E8h] [rbp-420h]
  int v82; // [rsp+ECh] [rbp-41Ch]
  void **v83; // [rsp+F0h] [rbp-418h]
  void *v84; // [rsp+120h] [rbp-3E8h] BYREF
  size_t v85; // [rsp+128h] [rbp-3E0h]
  __int64 v86; // [rsp+130h] [rbp-3D8h] BYREF
  _BYTE v87[312]; // [rsp+138h] [rbp-3D0h] BYREF
  __int64 v88; // [rsp+270h] [rbp-298h] BYREF
  const char **v89; // [rsp+278h] [rbp-290h]
  __int64 v90; // [rsp+280h] [rbp-288h]
  int v91; // [rsp+288h] [rbp-280h]
  _QWORD *v92; // [rsp+290h] [rbp-278h]
  __int64 v93; // [rsp+298h] [rbp-270h]
  _QWORD v94[42]; // [rsp+2A0h] [rbp-268h] BYREF
  int v95; // [rsp+3F0h] [rbp-118h]
  __int64 v96; // [rsp+3F8h] [rbp-110h]
  __int64 v97; // [rsp+400h] [rbp-108h]
  int v98; // [rsp+408h] [rbp-100h]
  __int64 v99; // [rsp+410h] [rbp-F8h]
  __int64 v100; // [rsp+418h] [rbp-F0h]
  int v101; // [rsp+420h] [rbp-E8h]
  __int128 v102; // [rsp+428h] [rbp-E0h] BYREF
  _QWORD *v103; // [rsp+438h] [rbp-D0h]
  __int64 v104; // [rsp+440h] [rbp-C8h]
  _QWORD v105[6]; // [rsp+448h] [rbp-C0h] BYREF
  __m128i v106; // [rsp+478h] [rbp-90h] BYREF
  __int128 *v107; // [rsp+488h] [rbp-80h]
  int v108; // [rsp+498h] [rbp-70h] BYREF
  __int64 v109; // [rsp+4A0h] [rbp-68h]
  int *v110; // [rsp+4A8h] [rbp-60h]
  int *v111; // [rsp+4B0h] [rbp-58h]
  __int64 v112; // [rsp+4B8h] [rbp-50h]
  bool v113; // [rsp+4C0h] [rbp-48h]

  if ( (unsigned __int8)sub_F66020(a2) )
  {
    v84 = v87;
    v83 = &v84;
    ptr = &off_2BEBEE0;
    v85 = 0;
    v86 = 64;
    si128.m128i_i32[0] = 2;
    v81 = 0;
    v82 = 1;
    v80[1] = 0;
    v80[0] = 0;
    si128.m128i_i64[1] = 0;
    sub_227B8B0(&ptr, 0, 0, 0);
    sub_E78640((__int64)&v88, *(_QWORD *)a1, (__int64)&ptr);
    sub_995540((__int64)&ptr, "?$");
    v53 = j__strlen("KindOf");
    sub_E7C4B0((__int64)&v88, "KindOf", v53);
    v71 = (const char *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v54 = (__int64 *)(sub_F67120(&v71, *(_QWORD *)(*(_QWORD *)a1 + 8LL)) & 0xFFFFFFFFFFFFFFF0LL);
    v56 = *v54;
    v57 = (unsigned int)*(unsigned __int8 *)(*v54 + 16) - 35;
    if ( (unsigned int)v57 > 1 )
      v56 = sub_F63050(*v54, v56, v57, v55);
    sub_E86DA0(&v88, v56, a3, a4);
    v72 = 6;
    v71 = "__ObjC";
    sub_E7C970(a1, v84, v85, (__int64)&v71, 1);
    sub_E7AB30((__int64)&v88);
    ptr = &unk_2C76288;
    sub_227B7A0(&ptr);
    if ( v84 != v87 )
      free(v84);
    return;
  }
  if ( !(*(_BYTE *)(a2 + 19) >> 2) && !(unsigned __int8)sub_F65FA0(a2) )
  {
    sub_E845E0((__int64 *)a1, *(_QWORD *)(a2 + 24), a4, 0);
    return;
  }
  v84 = &v86;
  v85 = 0xA00000000LL;
  v6 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = 0;
  v65 = v6;
  LODWORD(v6) = *(_DWORD *)(a1 + 384);
  *(_DWORD *)(a1 + 384) = 0;
  v67 = v6;
  v7 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 376) = 0;
  v68 = v7;
  v8 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = 0;
  v64 = v8;
  LODWORD(v8) = *(_DWORD *)(a1 + 408);
  *(_DWORD *)(a1 + 408) = 0;
  v66 = v8;
  v9 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 400) = 0;
  v69 = v9;
  sub_E7C0E0(a1 + 32, (__int64)&v84);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
  {
    sub_227BA10(v10, 85);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = 85;
  }
  sub_995540(*(_QWORD *)(a1 + 8), "?$");
  v14 = *(_QWORD *)(a2 + 24);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 13 && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1E9 )
  {
    v58 = j__strlen("objc_object");
    sub_E7C4B0(a1, "objc_object", v58);
    goto LABEL_16;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1EA )
  {
    v59 = j__strlen("objc_class");
    sub_E7C4B0(a1, "objc_class", v59);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v17 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
    v18 = *(unsigned __int8 *)(v17 + 16);
    v19 = (unsigned int)(v18 - 35);
    if ( (unsigned int)v19 > 1 )
      break;
    if ( (_BYTE)v18 == 36 )
      goto LABEL_12;
LABEL_53:
    v14 = *(_QWORD *)(v17 + 24);
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 > 1
    || (v47 = sub_F63050(v17, "?$", v19, v12), (v17 = v47) == 0) )
  {
    BUG();
  }
  if ( *(_BYTE *)(v47 + 16) != 36 )
    goto LABEL_53;
LABEL_12:
  v20 = *(_QWORD *)(sub_F62610(v17, "?$", v19, v12, v13) + 40);
  if ( (v20 & 7) != 0 || (v21 = v20 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v24 = (char *)&byte_22F0C30;
    v23 = j__strlen(&byte_22F0C30);
  }
  else
  {
    v22 = *(unsigned int **)(v21 + 16);
    v23 = *v22;
    v24 = (char *)(v22 + 4);
  }
  sub_E7C4B0(a1, v24, v23);
LABEL_16:
  v25 = (*(_WORD *)(a2 + 18) & 0x3F8) + 48LL;
  v26 = v25 + 8LL * (*(_BYTE *)(a2 + 19) >> 2);
  v27 = (__int64 *)(a2 + v25);
  for ( i = (__int64 *)(a2 + v26); i != v27; ++v27 )
  {
    while ( 1 )
    {
      v73 = 0;
      v28 = *v27;
      ptr = v80;
      v71 = (const char *)&off_2BEBEE0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
      p_ptr = &ptr;
      LODWORD(v72) = 2;
      v75 = 0;
      v76 = 1;
      v74 = nullptr;
      sub_227B8B0(&v71, 0, 0, 0);
      v29 = *(_QWORD *)a1;
      v92 = v94;
      v103 = v105;
      v105[4] = &v106;
      v88 = v29;
      v102 = 0;
      v106 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
      v30 = *(_QWORD *)(v29 + 8);
      v93 = 0xA00000000LL;
      v107 = &v102;
      v110 = &v108;
      v111 = &v108;
      v89 = &v71;
      v90 = 0;
      v91 = -1;
      v94[40] = 0;
      v94[41] = 0;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      v99 = 0;
      v100 = 0;
      v101 = 0;
      v104 = 0x400000000LL;
      v105[5] = 0;
      v108 = 0;
      v109 = 0;
      v112 = 0;
      v113 = *(_BYTE *)(*(_QWORD *)(v30 + 17448) + 8LL) == 64;
      if ( *((_QWORD *)&v73 + 1) - (_QWORD)v74 > 1u )
        *v74++ = 9279;
      else
        sub_227BF10(&v71, "?$", 2);
      sub_E7C4B0((__int64)&v88, "Protocol", 8u);
      v31 = *(_QWORD *)(v28 + 40);
      if ( (v31 & 7) != 0 )
      {
        v33 = 0;
        v32 = (char *)&byte_22F0C30;
      }
      else
      {
        v32 = (char *)&byte_22F0C30;
        v33 = v31 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v33 )
        {
          v34 = *(unsigned int **)(v33 + 16);
          v33 = *v34;
          v32 = (char *)(v34 + 4);
        }
      }
      v35 = (char *)v89[4];
      if ( v35 >= v89[3] )
      {
        v62 = v33;
        sub_227BA10(v89, 85);
        v33 = v62;
      }
      else
      {
        v89[4] = v35 + 1;
        *v35 = 85;
      }
      sub_E7C4B0((__int64)&v88, v32, v33);
      v36 = (char *)v89[4];
      if ( v36 >= v89[3] )
      {
        sub_227BA10(v89, 64);
      }
      else
      {
        v89[4] = v36 + 1;
        *v36 = 64;
      }
      v70[1] = 6;
      v70[0] = "__ObjC";
      sub_E7C970(a1, ptr, si128.m128i_u64[0], (__int64)v70, 1);
      sub_E7AB30((__int64)&v88);
      v71 = (const char *)&unk_2C76288;
      sub_227B7A0(&v71);
      if ( ptr == v80 )
        break;
      free(ptr);
      if ( i == ++v27 )
        goto LABEL_28;
    }
  }
LABEL_28:
  if ( (unsigned __int8)sub_F65FA0(a2) )
  {
    v48 = sub_F672B0(a2);
    v50 = (__int64 *)(v48 + 8 * v49);
    v51 = (__int64 *)v48;
    if ( (__int64 *)v48 != v50 )
    {
      do
      {
        v52 = *v51++;
        sub_E845E0((__int64 *)a1, v52, a4, 0);
      }
      while ( v50 != v51 );
    }
  }
  v37 = *(_QWORD *)(a1 + 8);
  v38 = *(_BYTE **)(v37 + 32);
  if ( (unsigned __int64)v38 >= *(_QWORD *)(v37 + 24) )
  {
    sub_227BA10(v37, 64);
  }
  else
  {
    *(_QWORD *)(v37 + 32) = v38 + 1;
    *v38 = 64;
  }
  v39 = *(_QWORD *)(a1 + 8);
  v40 = *(_BYTE **)(v39 + 32);
  if ( (unsigned __int64)v40 >= *(_QWORD *)(v39 + 24) )
  {
    sub_227BA10(v39, 64);
  }
  else
  {
    *(_QWORD *)(v39 + 32) = v40 + 1;
    *v40 = 64;
  }
  v41 = *(_QWORD *)(a1 + 368);
  v42 = *(_DWORD *)(a1 + 384);
  v43 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 368) = v65;
  v44 = *(_DWORD *)(a1 + 408);
  *(_QWORD *)(a1 + 376) = v68;
  *(_DWORD *)(a1 + 384) = v67;
  *(_QWORD *)(a1 + 392) = v64;
  *(_QWORD *)(a1 + 400) = v69;
  *(_DWORD *)(a1 + 408) = v66;
  sub_E7C0E0(a1 + 32, (__int64)&v84);
  v45 = (void **)v84;
  v46 = (void **)((char *)v84 + 32 * (unsigned int)v85);
  if ( v84 != v46 )
  {
    do
    {
      while ( 1 )
      {
        v46 -= 4;
        if ( *v46 == v46 + 2 )
          break;
        operator delete(*v46);
        if ( v45 == v46 )
          goto LABEL_36;
      }
    }
    while ( v45 != v46 );
LABEL_36:
    v46 = (void **)v84;
  }
  if ( v46 != (void **)&v86 )
    free(v46);
  operator delete(v43, 16LL * v44, 8);
  operator delete(v41, 16LL * v42, 8);
}
