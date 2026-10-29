void __fastcall sub_E63060(__int64 a1, __int64 a2, __int64 a3, char *a4)
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
  void **v41; // r15
  void **v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 *v46; // rbx
  __int64 *v47; // r12
  __int64 v48; // rsi
  size_t v49; // rax
  __int64 *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rsi
  __int64 v53; // rdx
  size_t v54; // rax
  size_t v55; // rax
  __int64 *i; // [rsp+10h] [rbp-4F8h]
  size_t v58; // [rsp+28h] [rbp-4E0h]
  __int64 v60; // [rsp+48h] [rbp-4C0h]
  __int64 v61; // [rsp+50h] [rbp-4B8h]
  int v62; // [rsp+58h] [rbp-4B0h]
  int v63; // [rsp+5Ch] [rbp-4ACh]
  __int64 v64; // [rsp+60h] [rbp-4A8h]
  __int64 v65; // [rsp+68h] [rbp-4A0h]
  _QWORD v66[2]; // [rsp+70h] [rbp-498h] BYREF
  const char *v67; // [rsp+80h] [rbp-488h] BYREF
  __int64 v68; // [rsp+88h] [rbp-480h]
  __int128 v69; // [rsp+90h] [rbp-478h]
  _WORD *v70; // [rsp+A0h] [rbp-468h]
  char v71; // [rsp+A8h] [rbp-460h]
  int v72; // [rsp+ACh] [rbp-45Ch]
  void **p_ptr; // [rsp+B0h] [rbp-458h]
  void *ptr; // [rsp+C0h] [rbp-448h] BYREF
  __m128i si128; // [rsp+C8h] [rbp-440h]
  _QWORD v76[2]; // [rsp+D8h] [rbp-430h] BYREF
  char v77; // [rsp+E8h] [rbp-420h]
  int v78; // [rsp+ECh] [rbp-41Ch]
  void **v79; // [rsp+F0h] [rbp-418h]
  void *v80; // [rsp+120h] [rbp-3E8h] BYREF
  size_t v81; // [rsp+128h] [rbp-3E0h]
  __int64 v82; // [rsp+130h] [rbp-3D8h] BYREF
  _BYTE v83[312]; // [rsp+138h] [rbp-3D0h] BYREF
  __int64 v84; // [rsp+270h] [rbp-298h] BYREF
  const char **v85; // [rsp+278h] [rbp-290h]
  __int64 v86; // [rsp+280h] [rbp-288h]
  int v87; // [rsp+288h] [rbp-280h]
  _QWORD *v88; // [rsp+290h] [rbp-278h]
  __int64 v89; // [rsp+298h] [rbp-270h]
  _QWORD v90[42]; // [rsp+2A0h] [rbp-268h] BYREF
  int v91; // [rsp+3F0h] [rbp-118h]
  __int64 v92; // [rsp+3F8h] [rbp-110h]
  __int64 v93; // [rsp+400h] [rbp-108h]
  int v94; // [rsp+408h] [rbp-100h]
  __int64 v95; // [rsp+410h] [rbp-F8h]
  __int64 v96; // [rsp+418h] [rbp-F0h]
  int v97; // [rsp+420h] [rbp-E8h]
  __int128 v98; // [rsp+428h] [rbp-E0h] BYREF
  _QWORD *v99; // [rsp+438h] [rbp-D0h]
  __int64 v100; // [rsp+440h] [rbp-C8h]
  _QWORD v101[6]; // [rsp+448h] [rbp-C0h] BYREF
  __m128i v102; // [rsp+478h] [rbp-90h] BYREF
  __int128 *v103; // [rsp+488h] [rbp-80h]
  int v104; // [rsp+498h] [rbp-70h] BYREF
  __int64 v105; // [rsp+4A0h] [rbp-68h]
  int *v106; // [rsp+4A8h] [rbp-60h]
  int *v107; // [rsp+4B0h] [rbp-58h]
  __int64 v108; // [rsp+4B8h] [rbp-50h]
  bool v109; // [rsp+4C0h] [rbp-48h]

  if ( (unsigned __int8)sub_F422E0(a2) )
  {
    v80 = v83;
    v79 = &v80;
    ptr = &off_2BC1F40;
    v81 = 0;
    v82 = 64;
    si128.m128i_i32[0] = 2;
    v77 = 0;
    v78 = 1;
    v76[1] = 0;
    v76[0] = 0;
    si128.m128i_i64[1] = 0;
    sub_2257B70(&ptr, 0, 0, 0);
    sub_E54900((__int64)&v84, *(_QWORD *)a1, (__int64)&ptr);
    sub_971800((__int64)&ptr, "?$");
    v49 = j__strlen("KindOf");
    sub_E58770((__int64)&v84, "KindOf", v49);
    v67 = (const char *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v50 = (__int64 *)(sub_F433E0(&v67, *(_QWORD *)(*(_QWORD *)a1 + 8LL)) & 0xFFFFFFFFFFFFFFF0LL);
    v52 = *v50;
    v53 = (unsigned int)*(unsigned __int8 *)(*v50 + 16) - 35;
    if ( (unsigned int)v53 > 1 )
      v52 = sub_F3F310(*v50, v52, v53, v51);
    sub_E63060(&v84, v52, a3, a4);
    v68 = 6;
    v67 = "__ObjC";
    sub_E58C30(a1, v80, v81, (__int64)&v67, 1);
    sub_E56DF0((__int64)&v84);
    ptr = &unk_2C4C288;
    sub_2257A60(&ptr);
    if ( v80 != v83 )
      free(v80);
    return;
  }
  if ( !(*(_BYTE *)(a2 + 19) >> 2) && !(unsigned __int8)sub_F42260(a2) )
  {
    sub_E608A0((__int64 *)a1, *(_QWORD *)(a2 + 24), a4, 0);
    return;
  }
  v80 = &v82;
  v81 = 0xA00000000LL;
  v6 = *(_QWORD *)(a1 + 368);
  *(_QWORD *)(a1 + 368) = 0;
  v61 = v6;
  LODWORD(v6) = *(_DWORD *)(a1 + 384);
  *(_DWORD *)(a1 + 384) = 0;
  v63 = v6;
  v7 = *(_QWORD *)(a1 + 376);
  *(_QWORD *)(a1 + 376) = 0;
  v64 = v7;
  v8 = *(_QWORD *)(a1 + 392);
  *(_QWORD *)(a1 + 392) = 0;
  v60 = v8;
  LODWORD(v8) = *(_DWORD *)(a1 + 408);
  *(_DWORD *)(a1 + 408) = 0;
  v62 = v8;
  v9 = *(_QWORD *)(a1 + 400);
  *(_QWORD *)(a1 + 400) = 0;
  v65 = v9;
  sub_E583A0(a1 + 32, (__int64)&v80);
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_BYTE **)(v10 + 32);
  if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
  {
    sub_2257CD0(v10, 85);
  }
  else
  {
    *(_QWORD *)(v10 + 32) = v11 + 1;
    *v11 = 85;
  }
  sub_971800(*(_QWORD *)(a1 + 8), "?$");
  v14 = *(_QWORD *)(a2 + 24);
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v15 + 16) == 13 && ((*(_WORD *)(v15 + 18) >> 3) & 0x1FF) == 0x1E9 )
  {
    v54 = j__strlen("objc_object");
    sub_E58770(a1, "objc_object", v54);
    goto LABEL_16;
  }
  v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1EA )
  {
    v55 = j__strlen("objc_class");
    sub_E58770(a1, "objc_class", v55);
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
    || (v43 = sub_F3F310(v17, "?$", v19, v12), (v17 = v43) == 0) )
  {
    BUG();
  }
  if ( *(_BYTE *)(v43 + 16) != 36 )
    goto LABEL_53;
LABEL_12:
  v20 = *(_QWORD *)(sub_F3E8D0(v17, "?$", v19, v12, v13) + 40);
  if ( (v20 & 7) != 0 || (v21 = v20 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    v24 = (char *)&byte_22CD811;
    v23 = j__strlen(&byte_22CD811);
  }
  else
  {
    v22 = *(unsigned int **)(v21 + 16);
    v23 = *v22;
    v24 = (char *)(v22 + 4);
  }
  sub_E58770(a1, v24, v23);
LABEL_16:
  v25 = (*(_WORD *)(a2 + 18) & 0x3F8) + 48LL;
  v26 = v25 + 8LL * (*(_BYTE *)(a2 + 19) >> 2);
  v27 = (__int64 *)(a2 + v25);
  for ( i = (__int64 *)(a2 + v26); i != v27; ++v27 )
  {
    while ( 1 )
    {
      v69 = 0;
      v28 = *v27;
      ptr = v76;
      v67 = (const char *)&off_2BC1F40;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
      p_ptr = &ptr;
      LODWORD(v68) = 2;
      v71 = 0;
      v72 = 1;
      v70 = nullptr;
      sub_2257B70(&v67, 0, 0, 0);
      v29 = *(_QWORD *)a1;
      v88 = v90;
      v99 = v101;
      v101[4] = &v102;
      v84 = v29;
      v98 = 0;
      v102 = _mm_load_si128((const __m128i *)&unk_2383B90);
      v30 = *(_QWORD *)(v29 + 8);
      v89 = 0xA00000000LL;
      v103 = &v98;
      v106 = &v104;
      v107 = &v104;
      v85 = &v67;
      v86 = 0;
      v87 = -1;
      v90[40] = 0;
      v90[41] = 0;
      v91 = 0;
      v92 = 0;
      v93 = 0;
      v94 = 0;
      v95 = 0;
      v96 = 0;
      v97 = 0;
      v100 = 0x400000000LL;
      v101[5] = 0;
      v104 = 0;
      v105 = 0;
      v108 = 0;
      v109 = *(_BYTE *)(*(_QWORD *)(v30 + 17448) + 8LL) == 64;
      if ( *((_QWORD *)&v69 + 1) - (_QWORD)v70 > 1u )
        *v70++ = 9279;
      else
        sub_22581D0(&v67, "?$", 2);
      sub_E58770((__int64)&v84, "Protocol", 8u);
      v31 = *(_QWORD *)(v28 + 40);
      if ( (v31 & 7) != 0 )
      {
        v33 = 0;
        v32 = (char *)&byte_22CD811;
      }
      else
      {
        v32 = (char *)&byte_22CD811;
        v33 = v31 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v33 )
        {
          v34 = *(unsigned int **)(v33 + 16);
          v33 = *v34;
          v32 = (char *)(v34 + 4);
        }
      }
      v35 = (char *)v85[4];
      if ( v35 >= v85[3] )
      {
        v58 = v33;
        sub_2257CD0(v85, 85);
        v33 = v58;
      }
      else
      {
        v85[4] = v35 + 1;
        *v35 = 85;
      }
      sub_E58770((__int64)&v84, v32, v33);
      v36 = (char *)v85[4];
      if ( v36 >= v85[3] )
      {
        sub_2257CD0(v85, 64);
      }
      else
      {
        v85[4] = v36 + 1;
        *v36 = 64;
      }
      v66[1] = 6;
      v66[0] = "__ObjC";
      sub_E58C30(a1, ptr, si128.m128i_u64[0], (__int64)v66, 1);
      sub_E56DF0((__int64)&v84);
      v67 = (const char *)&unk_2C4C288;
      sub_2257A60(&v67);
      if ( ptr == v76 )
        break;
      free(ptr);
      if ( i == ++v27 )
        goto LABEL_28;
    }
  }
LABEL_28:
  if ( (unsigned __int8)sub_F42260(a2) )
  {
    v44 = sub_F43570(a2);
    v46 = (__int64 *)(v44 + 8 * v45);
    v47 = (__int64 *)v44;
    if ( (__int64 *)v44 != v46 )
    {
      do
      {
        v48 = *v47++;
        sub_E608A0((__int64 *)a1, v48, a4, 0);
      }
      while ( v46 != v47 );
    }
  }
  v37 = *(_QWORD *)(a1 + 8);
  v38 = *(_BYTE **)(v37 + 32);
  if ( (unsigned __int64)v38 >= *(_QWORD *)(v37 + 24) )
  {
    sub_2257CD0(v37, 64);
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
    sub_2257CD0(v39, 64);
  }
  else
  {
    *(_QWORD *)(v39 + 32) = v40 + 1;
    *v40 = 64;
  }
  *(_QWORD *)(a1 + 368) = v61;
  *(_QWORD *)(a1 + 376) = v64;
  *(_DWORD *)(a1 + 384) = v63;
  *(_QWORD *)(a1 + 392) = v60;
  *(_QWORD *)(a1 + 400) = v65;
  *(_DWORD *)(a1 + 408) = v62;
  sub_E583A0(a1 + 32, (__int64)&v80);
  v41 = (void **)v80;
  v42 = (void **)((char *)v80 + 32 * (unsigned int)v81);
  if ( v80 != v42 )
  {
    do
    {
      while ( 1 )
      {
        v42 -= 4;
        if ( *v42 == v42 + 2 )
          break;
        operator delete(*v42);
        if ( v41 == v42 )
          goto LABEL_36;
      }
    }
    while ( v41 != v42 );
LABEL_36:
    v42 = (void **)v80;
  }
  if ( v42 != (void **)&v82 )
    free(v42);
  operator delete();
  operator delete();
}

