/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_414EA0
// Address: 0x0000000000414EA0

//----- (0000000000414EA0) ----------------------------------------------------
__int64 __fastcall sub_414EA0(__int64 a1, __int64 a2, const char **a3, char *a4)
{
  char v8; // r14
  const char *v9; // r15
  __int64 v10; // r12
  size_t v11; // rax
  size_t v12; // r8
  size_t v13; // r9
  _BYTE *v14; // rsi
  unsigned __int64 v15; // rdx
  const char *v16; // rdi
  const char *v17; // r14
  __int64 v18; // r12
  size_t v19; // rax
  size_t v20; // r15
  size_t v21; // r8
  _BYTE *v22; // rsi
  unsigned __int64 v23; // rdx
  const char *v24; // rdi
  unsigned int v25; // ebx
  void *v27; // rax
  void *v28; // rdi
  void ***v29; // r12
  void **v30; // r15
  void *v31; // rdi
  _QWORD **v32; // rax
  _QWORD *v33; // rdx
  size_t v34; // rax
  size_t v35; // r12
  unsigned __int64 v36; // r15
  __int64 v37; // r14
  __int64 v38; // r12
  _BYTE *v39; // rsi
  size_t v40; // rax
  size_t v41; // r12
  unsigned __int64 v42; // rdx
  __int64 v43; // r15
  __int64 v44; // r12
  _BYTE *v45; // rsi
  __int64 v46; // rbp
  __int64 v47; // r14
  unsigned __int64 v48; // r12
  void *v49; // rsi
  __m128i si128; // xmm0
  __int64 v51; // rbp
  size_t v52; // rax
  __int64 v53; // rbp
  size_t v54; // r12
  size_t v55; // r14
  void *v56; // rsi
  unsigned __int64 v57; // rdx
  __int64 v58; // rbp
  unsigned __int64 v59; // r12
  __int64 v60; // r14
  void *v61; // rsi
  const char *v62; // r14
  size_t v63; // rax
  __int64 v64; // r9
  size_t v65; // r8
  size_t v66; // rbp
  void *v67; // rsi
  __int64 v68; // rbp
  __int64 v69; // r14
  unsigned __int64 v70; // r12
  void *v71; // rsi
  __int64 v72; // rbp
  size_t v73; // rax
  __int64 v74; // rbp
  size_t v75; // r12
  size_t v76; // r14
  void *v77; // rsi
  unsigned __int64 v78; // rdx
  __int64 v79; // rbp
  unsigned __int64 v80; // r12
  __int64 v81; // r14
  void *v82; // rsi
  const char *v83; // r12
  __int64 v84; // rbp
  size_t v85; // rax
  size_t v86; // r13
  size_t v87; // r14
  void *v88; // rsi
  __int64 v89; // rbp
  unsigned __int64 v90; // r12
  __int64 v91; // r13
  void *v92; // rsi
  void *v93; // rdi
  unsigned __int64 v94; // r14
  void *v95; // rax
  void *v96; // rdi
  void ***v97; // r15
  void ***v98; // r12
  void **v99; // rax
  void *v100; // rax
  void *v101; // rax
  void *v102; // rax
  void *v103; // rax
  void *v104; // rax
  void *v105; // rax
  void *v106; // rax
  void *v107; // rdi
  unsigned __int64 v108; // rdx
  void *v109; // rax
  void *v110; // rax
  __int64 v111; // [rsp+0h] [rbp-1080h]
  unsigned __int64 v112; // [rsp+0h] [rbp-1080h]
  unsigned __int64 v113; // [rsp+0h] [rbp-1080h]
  void **v114; // [rsp+0h] [rbp-1080h]
  unsigned __int64 v115; // [rsp+0h] [rbp-1080h]
  __int64 v116; // [rsp+0h] [rbp-1080h]
  unsigned __int64 v117; // [rsp+0h] [rbp-1080h]
  size_t v118; // [rsp+8h] [rbp-1078h]
  size_t v119; // [rsp+8h] [rbp-1078h]
  void ***v120; // [rsp+8h] [rbp-1078h]
  size_t v121; // [rsp+8h] [rbp-1078h]
  size_t v122; // [rsp+10h] [rbp-1070h]
  void *ptr; // [rsp+18h] [rbp-1068h] BYREF
  __int128 v124; // [rsp+20h] [rbp-1060h]
  char arg[4104]; // [rsp+38h] [rbp-1048h] BYREF
  unsigned __int64 v126; // [rsp+1040h] [rbp-40h]

  v126 = __readfsqword(0x28u);
  v124 = 0;
  ptr = nullptr;
  v8 = sub_480670(a4);
  if ( !v8 || !(unsigned __int8)sub_480530(arg, 0x1000u, a4) )
    goto LABEL_2;
  v40 = strlen(arg);
  v41 = v40;
  if ( v40 )
  {
    v107 = ptr;
    v108 = v40 + 1;
    if ( *((_QWORD *)&v124 + 1) < v40 + 1 )
    {
      v117 = v40 + 1;
      ptr = sub_481540((__int64)&ptr, ptr, v108, 1u);
      v108 = v117;
      v107 = ptr;
    }
    *(_QWORD *)&v124 = v108;
    memmove(v107, arg, v41);
    *((_BYTE *)ptr + v41) = 0;
    v43 = v124;
    if ( (_QWORD)v124 )
    {
      v44 = v124 - 1;
      v42 = v124 + 1;
      goto LABEL_50;
    }
  }
  else
  {
    *(_QWORD *)&v124 = 0;
  }
  v42 = 2;
  v43 = 1;
  v44 = 0;
LABEL_50:
  v45 = ptr;
  if ( *((_QWORD *)&v124 + 1) < v42 )
  {
    v115 = v42;
    ptr = sub_481540((__int64)&ptr, ptr, v42, 1u);
    v42 = v115;
    v45 = ptr;
  }
  *(_QWORD *)&v124 = v42;
  v45[v43] = 0;
  *((_BYTE *)ptr + v44) = 47;
LABEL_2:
  v9 = *a3;
  if ( *a3 )
  {
    v10 = v124;
    v11 = strlen(*a3);
    v12 = v11;
    v13 = v11;
    if ( v10 )
    {
      --v10;
      v13 = v11 + v10;
    }
    v14 = ptr;
    v15 = v13 + 1;
    if ( *((_QWORD *)&v124 + 1) < v13 + 1 )
    {
      v122 = v11;
      v119 = v13;
      v113 = v13 + 1;
      ptr = sub_481540((__int64)&ptr, ptr, v15, 1u);
      v12 = v122;
      v14 = ptr;
      v13 = v119;
      v15 = v113;
    }
    *(_QWORD *)&v124 = v15;
    v14[v13] = 0;
    memmove((char *)ptr + v10, v9, v12);
  }
  v16 = s1;
  if ( (_QWORD)v124 )
    v16 = (const char *)ptr;
  if ( !*(_QWORD *)a1 )
  {
    v95 = dlopen(v16, 258);
    *(_QWORD *)a1 = v95;
    v96 = v95;
    if ( v95 )
    {
      v97 = (void ***)(a1 + 104);
      v120 = (void ***)(a1 + 184);
      v98 = (void ***)(a1 + 104);
      while ( 1 )
      {
        v114 = *v98;
        *v114 = dlsym(v96, (const char *)*(v98 - 1));
        if ( !*v98 )
          break;
        v98 += 2;
        if ( v98 == v120 )
          goto LABEL_11;
        v96 = *(void **)a1;
      }
      do
      {
        v99 = *v97;
        v97 += 2;
        *v99 = nullptr;
      }
      while ( v97 != v120 );
      if ( *(_QWORD *)a1 )
        dlclose(*(void **)a1);
      *(_QWORD *)a1 = 0;
    }
    sub_40EFB0((void **)a2, (__int64)&ptr);
    v25 = 0;
    goto LABEL_22;
  }
LABEL_11:
  if ( ptr )
  {
    *(_QWORD *)&v124 = 0;
    j__free(ptr);
    ptr = nullptr;
    *((_QWORD *)&v124 + 1) = 0;
  }
  if ( v8 )
  {
    v34 = strlen(arg);
    v35 = v34;
    if ( v34 )
    {
      v93 = ptr;
      v94 = v34 + 1;
      if ( *((_QWORD *)&v124 + 1) < v34 + 1 )
      {
        ptr = sub_481540((__int64)&ptr, ptr, v94, 1u);
        v93 = ptr;
      }
      *(_QWORD *)&v124 = v94;
      memmove(v93, arg, v35);
      *((_BYTE *)ptr + v35) = 0;
      v37 = v124;
      if ( (_QWORD)v124 )
      {
        v38 = v124 - 1;
        v36 = v124 + 1;
LABEL_42:
        v39 = ptr;
        if ( *((_QWORD *)&v124 + 1) < v36 )
        {
          ptr = sub_481540((__int64)&ptr, ptr, v36, 1u);
          v39 = ptr;
        }
        *(_QWORD *)&v124 = v36;
        v39[v37] = 0;
        *((_BYTE *)ptr + v38) = 47;
        v17 = a3[1];
        if ( !v17 )
          goto LABEL_18;
LABEL_15:
        v18 = v124;
        v19 = strlen(v17);
        v20 = v19;
        v21 = v19;
        if ( v18 )
        {
          --v18;
          v22 = ptr;
          v21 = v19 + v18;
          v23 = v19 + v18 + 1;
          if ( *((_QWORD *)&v124 + 1) >= v23 )
            goto LABEL_17;
        }
        else
        {
          v22 = ptr;
          v23 = v19 + 1;
          if ( *((_QWORD *)&v124 + 1) >= v19 + 1 )
          {
LABEL_17:
            *(_QWORD *)&v124 = v23;
            v22[v21] = 0;
            memmove((char *)ptr + v18, v17, v20);
            goto LABEL_18;
          }
        }
        v118 = v21;
        v112 = v23;
        ptr = sub_481540((__int64)&ptr, v22, v23, 1u);
        v21 = v118;
        v22 = ptr;
        v23 = v112;
        goto LABEL_17;
      }
    }
    else
    {
      *(_QWORD *)&v124 = 0;
    }
    v36 = 2;
    v37 = 1;
    v38 = 0;
    goto LABEL_42;
  }
  v17 = a3[1];
  if ( v17 )
    goto LABEL_15;
LABEL_18:
  v24 = s1;
  if ( (_QWORD)v124 )
  {
    v24 = (const char *)ptr;
    if ( *(_QWORD *)(a1 + 8) )
      goto LABEL_20;
  }
  else if ( *(_QWORD *)(a1 + 8) )
  {
LABEL_20:
    if ( !dlinfo(*(void **)a1, 6, arg) )
    {
      v46 = *(_QWORD *)(a2 + 8);
      if ( v46 )
      {
        v47 = v46 + 29;
        v48 = v46 + 30;
        --v46;
      }
      else
      {
        v48 = 31;
        v47 = 30;
      }
      v49 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v48 )
      {
        v101 = sub_481540(a2, v49, v48, 1u);
        *(_QWORD *)a2 = v101;
        v49 = v101;
      }
      si128 = _mm_load_si128((const __m128i *)&xmmword_48F310);
      *(_QWORD *)(a2 + 8) = v48;
      *((_BYTE *)v49 + v47) = 0;
      v51 = *(_QWORD *)a2 + v46;
      *(__m128i *)v51 = si128;
      *(__m128i *)(v51 + 14) = _mm_load_si128((const __m128i *)&xmmword_48F320);
      v52 = strlen(arg);
      v53 = *(_QWORD *)(a2 + 8);
      v54 = v52;
      v55 = v52;
      if ( v53 )
      {
        --v53;
        v55 = v52 + v53;
      }
      v56 = *(void **)a2;
      v57 = v55 + 1;
      if ( *(_QWORD *)(a2 + 16) < v55 + 1 )
      {
        v100 = sub_481540(a2, v56, v57, 1u);
        *(_QWORD *)a2 = v100;
        v57 = v55 + 1;
        v56 = v100;
      }
      *(_QWORD *)(a2 + 8) = v57;
      *((_BYTE *)v56 + v55) = 0;
      memmove((void *)(v53 + *(_QWORD *)a2), arg, v54);
      v58 = *(_QWORD *)(a2 + 8);
      if ( v58 )
      {
        v59 = v58 + 1;
        v60 = *(_QWORD *)(a2 + 8);
        --v58;
      }
      else
      {
        v59 = 2;
        v60 = 1;
      }
      v61 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v59 )
      {
        v104 = sub_481540(a2, v61, v59, 1u);
        *(_QWORD *)a2 = v104;
        v61 = v104;
      }
      *(_QWORD *)(a2 + 8) = v59;
      *((_BYTE *)v61 + v60) = 0;
      *(_BYTE *)(*(_QWORD *)a2 + v58) = 47;
      v62 = *a3;
      if ( *a3 )
      {
        v111 = *(_QWORD *)(a2 + 8);
        v63 = strlen(*a3);
        v64 = v111;
        v65 = v63;
        v66 = v63;
        if ( v111 )
        {
          v64 = v111 - 1;
          v66 = v63 + v111 - 1;
        }
        v67 = *(void **)a2;
        if ( *(_QWORD *)(a2 + 16) < v66 + 1 )
        {
          v121 = v63;
          v116 = v64;
          v109 = sub_481540(a2, v67, v66 + 1, 1u);
          v65 = v121;
          v64 = v116;
          *(_QWORD *)a2 = v109;
          v67 = v109;
        }
        *(_QWORD *)(a2 + 8) = v66 + 1;
        *((_BYTE *)v67 + v66) = 0;
        memmove((void *)(v64 + *(_QWORD *)a2), v62, v65);
      }
      v68 = *(_QWORD *)(a2 + 8);
      if ( v68 )
      {
        v69 = v68 + 4;
        v70 = v68 + 5;
        --v68;
      }
      else
      {
        v70 = 6;
        v69 = 5;
      }
      v71 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v70 )
      {
        v103 = sub_481540(a2, v71, v70, 1u);
        *(_QWORD *)a2 = v103;
        v71 = v103;
      }
      *(_QWORD *)(a2 + 8) = v70;
      *((_BYTE *)v71 + v69) = 0;
      v72 = *(_QWORD *)a2 + v68;
      *(_DWORD *)v72 = 1684955424;
      *(_BYTE *)(v72 + 4) = 32;
      v73 = strlen(arg);
      v74 = *(_QWORD *)(a2 + 8);
      v75 = v73;
      v76 = v73;
      if ( v74 )
      {
        --v74;
        v76 = v73 + v74;
      }
      v77 = *(void **)a2;
      v78 = v76 + 1;
      if ( *(_QWORD *)(a2 + 16) < v76 + 1 )
      {
        v102 = sub_481540(a2, v77, v78, 1u);
        *(_QWORD *)a2 = v102;
        v78 = v76 + 1;
        v77 = v102;
      }
      *(_QWORD *)(a2 + 8) = v78;
      *((_BYTE *)v77 + v76) = 0;
      memmove((void *)(v74 + *(_QWORD *)a2), arg, v75);
      v79 = *(_QWORD *)(a2 + 8);
      if ( v79 )
      {
        v80 = v79 + 1;
        v81 = *(_QWORD *)(a2 + 8);
        --v79;
      }
      else
      {
        v80 = 2;
        v81 = 1;
      }
      v82 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v80 )
      {
        v105 = sub_481540(a2, v82, v80, 1u);
        *(_QWORD *)a2 = v105;
        v82 = v105;
      }
      *(_QWORD *)(a2 + 8) = v80;
      *((_BYTE *)v82 + v81) = 0;
      *(_BYTE *)(*(_QWORD *)a2 + v79) = 47;
      v83 = a3[1];
      if ( v83 )
      {
        v84 = *(_QWORD *)(a2 + 8);
        v85 = strlen(a3[1]);
        v86 = v85;
        v87 = v85;
        if ( v84 )
        {
          --v84;
          v87 = v85 + v84;
        }
        v88 = *(void **)a2;
        if ( *(_QWORD *)(a2 + 16) < v87 + 1 )
        {
          v110 = sub_481540(a2, v88, v87 + 1, 1u);
          *(_QWORD *)a2 = v110;
          v88 = v110;
        }
        *(_QWORD *)(a2 + 8) = v87 + 1;
        *((_BYTE *)v88 + v87) = 0;
        memmove((void *)(v84 + *(_QWORD *)a2), v83, v86);
      }
      v89 = *(_QWORD *)(a2 + 8);
      if ( v89 )
      {
        v90 = v89 + 1;
        v91 = *(_QWORD *)(a2 + 8);
        --v89;
      }
      else
      {
        v90 = 2;
        v91 = 1;
      }
      v92 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v90 )
      {
        v106 = sub_481540(a2, v92, v90, 1u);
        *(_QWORD *)a2 = v106;
        v92 = v106;
      }
      *(_QWORD *)(a2 + 8) = v90;
      *((_BYTE *)v92 + v91) = 0;
      *(_BYTE *)(*(_QWORD *)a2 + v89) = 46;
    }
    v25 = 1;
    goto LABEL_22;
  }
  v27 = dlopen(v24, 258);
  *(_QWORD *)(a1 + 8) = v27;
  v28 = v27;
  if ( v27 )
  {
    v29 = (void ***)(a1 + 184);
    while ( 1 )
    {
      v30 = *v29;
      *v30 = dlsym(v28, (const char *)*(v29 - 1));
      if ( !*v29 )
        break;
      v29 += 2;
      if ( v29 == (void ***)(a1 + 232) )
        goto LABEL_20;
      v28 = *(void **)(a1 + 8);
    }
    **(_QWORD **)(a1 + 184) = 0;
    **(_QWORD **)(a1 + 200) = 0;
    **(_QWORD **)(a1 + 216) = 0;
    v31 = *(void **)(a1 + 8);
    if ( v31 )
      dlclose(v31);
    *(_QWORD *)(a1 + 8) = 0;
  }
  sub_40EFB0((void **)a2, (__int64)&ptr);
  v32 = (_QWORD **)(a1 + 104);
  do
  {
    v33 = *v32;
    v32 += 2;
    *v33 = 0;
  }
  while ( (_QWORD **)(a1 + 184) != v32 );
  if ( *(_QWORD *)a1 )
    dlclose(*(void **)a1);
  *(_QWORD *)a1 = 0;
  v25 = 0;
LABEL_22:
  if ( ptr )
  {
    *(_QWORD *)&v124 = 0;
    j__free(ptr);
  }
  return v25;
}
// 48F310: using guessed type __int128 xmmword_48F310;
// 48F320: using guessed type __int128 xmmword_48F320;
