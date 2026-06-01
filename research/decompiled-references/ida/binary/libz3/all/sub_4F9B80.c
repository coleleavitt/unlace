__int64 __fastcall sub_4F9B80(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int *a5,
        int *a6,
        unsigned int a7,
        unsigned int *a8)
{
  __int64 v11; // rbx
  _DWORD *v13; // rax
  int *v14; // rbx
  _DWORD *v15; // rdx
  int v16; // esi
  int v17; // r9d
  __int64 v18; // rax
  unsigned int v19; // edi
  unsigned int v20; // r10d
  size_t v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  _DWORD *v24; // rax
  int *v25; // r15
  _DWORD *v26; // rdx
  int v27; // ecx
  int v28; // edi
  __int64 v29; // rax
  unsigned int v30; // ecx
  unsigned int v31; // r14d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rax
  unsigned int *v35; // r15
  _QWORD *v36; // rbx
  unsigned int v37; // r15d
  __int64 v38; // rax
  __m128i v39; // xmm1
  _QWORD *v40; // r15
  __int64 v41; // r14
  size_t v42; // rdx
  __int64 i; // r14
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rsi
  int v47; // eax
  _QWORD *v48; // rsi
  unsigned int v49; // eax
  unsigned int v50; // r8d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rsi
  _QWORD *v54; // r15
  __int64 v55; // r8
  __int64 v56; // r8
  __int64 v57; // rax
  int v58; // edx
  _QWORD *v59; // rax
  unsigned int v60; // edx
  unsigned int v61; // r9d
  size_t v62; // rsi
  unsigned int *v63; // rax
  __int64 v64; // rax
  int v65; // edx
  __int64 v66; // rdi
  __int64 v67; // rdx
  __int64 v68; // rax
  int v69; // ebx
  __int64 v70; // rdx
  __int64 v71; // rax
  _QWORD *v72; // rax
  unsigned int *v73; // r14
  unsigned int *v74; // rax
  __int64 v75; // rdx
  unsigned int v76; // esi
  int v77; // r9d
  __int64 v78; // rax
  unsigned int v79; // edi
  unsigned int v80; // ebx
  size_t v81; // rsi
  unsigned int *v82; // rax
  __int64 v83; // r14
  __int64 result; // rax
  __int64 v85; // rsi
  unsigned int v86; // edx
  __int64 v87; // rax
  unsigned int v88; // r14d
  _QWORD *v89; // rax
  size_t v90; // rdx
  __int64 v91; // r8
  __int64 v92; // rax
  __int64 v93; // rax
  char **v94; // r13
  char **exception; // r13
  char **v96; // r13
  char **v97; // r13
  char **v98; // r13
  unsigned int v100; // [rsp+0h] [rbp-88h]
  unsigned int v101; // [rsp+0h] [rbp-88h]
  unsigned int v102; // [rsp+0h] [rbp-88h]
  unsigned int v103; // [rsp+0h] [rbp-88h]
  unsigned int v104; // [rsp+0h] [rbp-88h]
  __int64 v105; // [rsp+0h] [rbp-88h]
  __int64 v106; // [rsp+8h] [rbp-80h]
  __int64 v107; // [rsp+8h] [rbp-80h]
  __int64 v108; // [rsp+8h] [rbp-80h]
  _QWORD *v109; // [rsp+10h] [rbp-78h]
  _DWORD *v110; // [rsp+28h] [rbp-60h] BYREF
  __int64 v111[11]; // [rsp+30h] [rbp-58h] BYREF

  v11 = a4;
  *a1 = qword_1C66908;
  a1[1] = 0;
  a1[2] = 0;
  if ( a4 )
  {
    v13 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v106 = v11;
    v14 = &a5[v11];
    *((_QWORD *)v13 - 1) = 2;
    v15 = v13;
    a1[2] = v13;
    while ( 1 )
    {
      v16 = *a5++;
      *v13 = v16;
      v17 = *(v15 - 1);
      v18 = (unsigned int)(v17 + 1);
      *(v15 - 1) = v18;
      if ( a5 == v14 )
        break;
      v19 = *(v15 - 2);
      if ( v19 == (_DWORD)v18 )
      {
        v20 = (3 * v19 + 1) >> 1;
        v21 = 4 * v20 + 8;
        if ( 4 * v17 + 12 >= (unsigned int)v21 || v19 >= v20 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v111, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v111);
          sub_233E40((__int64)v111);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v22 = (unsigned int *)sub_186B300(v15 - 2, v21);
        v15 = v22 + 2;
        *v22 = (3 * v19 + 1) >> 1;
        v23 = v22[1];
        a1[2] = v15;
        v13 = &v15[v23];
      }
      else
      {
        v13 = &v15[v18];
      }
    }
    a1[3] = 0;
    v24 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v25 = a6;
    *((_QWORD *)v24 - 1) = 2;
    v26 = v24;
    a1[3] = v24;
    while ( 1 )
    {
      v27 = *v25++;
      *v24 = v27;
      v28 = *(v26 - 1);
      v29 = (unsigned int)(v28 + 1);
      *(v26 - 1) = v29;
      if ( v25 == &a6[v106] )
        break;
      v30 = *(v26 - 2);
      if ( v30 == (_DWORD)v29 )
      {
        v31 = (3 * v30 + 1) >> 1;
        v32 = 4 * v31 + 8;
        if ( 4 * v28 + 12 >= (unsigned int)v32 || v30 >= v31 )
        {
          v96 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v111, "Overflow encountered when expanding vector");
          *v96 = (char *)off_1C63128;
          sub_2333C0(v96 + 1, v111);
          sub_233E40((__int64)v111);
          __cxa_throw(v96, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v33 = (unsigned int *)sub_186B300(v26 - 2, v32);
        v26 = v33 + 2;
        *v33 = v31;
        v34 = v33[1];
        a1[3] = v26;
        v24 = &v26[v34];
      }
      else
      {
        v24 = &v26[v29];
      }
    }
  }
  else
  {
    a1[3] = 0;
  }
  a1[4] = 0;
  if ( a7 )
  {
    v35 = a8;
    do
      sub_4EE3A0(a1 + 4, v35++);
    while ( v35 != &a8[a7] );
  }
  v36 = *(_QWORD **)(a2 + 16);
  v110 = nullptr;
  v109 = a1 + 1;
  if ( !v36 )
  {
    v54 = *(_QWORD **)(a3 + 16);
    if ( !v54 )
    {
      if ( v109 == &v110 )
      {
        if ( !a7 )
          goto LABEL_49;
        goto LABEL_85;
      }
      goto LABEL_81;
    }
    v91 = *((unsigned int *)v54 - 1);
    if ( (_DWORD)v91 )
    {
      v105 = 8 * v91;
      v59 = (_QWORD *)(sub_186B270(0x18u) + 8);
      v56 = v105;
      i = 0;
      v58 = 1;
      *(v59 - 1) = 2;
      v36 = v59;
      v110 = v59;
      goto LABEL_37;
    }
    goto LABEL_80;
  }
  v37 = *((_DWORD *)v36 - 1);
  v100 = *((_DWORD *)v36 - 2);
  v38 = sub_186B270(8LL * v100 + 8);
  v39 = _mm_cvtsi32_si128(v37);
  v40 = *(_QWORD **)(a2 + 16);
  v41 = v38;
  v36 = (_QWORD *)(v38 + 8);
  v110 = (_DWORD *)(v38 + 8);
  *(_QWORD *)v38 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v100), v39).m128i_u64[0];
  if ( v40 )
  {
    v42 = 8LL * *((unsigned int *)v40 - 1);
    if ( v42 <= 8 )
    {
      if ( v42 == 8 )
        *(_QWORD *)(v38 + 8) = *v40;
    }
    else
    {
      memmove((void *)(v38 + 8), v40, v42);
    }
    *(_DWORD *)(v41 + 4) = 0;
    i = 0;
    v44 = *((unsigned int *)v40 - 1);
    v45 = 8 * v44;
    if ( !(_DWORD)v44 )
    {
      v54 = *(_QWORD **)(a3 + 16);
      if ( v54 )
      {
        v93 = *((unsigned int *)v54 - 1);
        v56 = 8 * v93;
        if ( !(_DWORD)v93 )
          goto LABEL_80;
        goto LABEL_39;
      }
      goto LABEL_83;
    }
    while ( 1 )
    {
      v49 = *((_DWORD *)v36 - 1);
      if ( v49 == *((_DWORD *)v36 - 2) )
      {
        v50 = (3 * v49 + 1) >> 1;
        v51 = 8 * v50 + 8;
        if ( 8 * v49 + 8 >= (unsigned int)v51 || v49 >= v50 )
        {
          v98 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v111, "Overflow encountered when expanding vector");
          *v98 = (char *)off_1C63128;
          sub_2333C0(v98 + 1, v111);
          sub_233E40((__int64)v111);
          __cxa_throw(v98, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v107 = v45;
        v101 = (3 * v49 + 1) >> 1;
        v52 = (unsigned int *)sub_186B300(v36 - 1, v51);
        v53 = v52[1];
        v36 = v52 + 2;
        v110 = v52 + 2;
        v45 = v107;
        *v52 = v101;
        LODWORD(v52) = v53;
        v48 = &v36[v53];
        v47 = (_DWORD)v52 + 1;
      }
      else
      {
        v46 = v49;
        v47 = v49 + 1;
        v48 = &v36[v46];
      }
      i += 8;
      *v48 = *v40;
      *((_DWORD *)v36 - 1) = v47;
      if ( i == v45 )
        break;
      v40 = (_QWORD *)(i + *(_QWORD *)(a2 + 16));
    }
    v54 = *(_QWORD **)(a3 + 16);
    if ( v54 )
    {
      v55 = *((unsigned int *)v54 - 1);
      if ( (_DWORD)v55 )
      {
        v56 = 8 * v55;
        for ( i = 0; ; v54 = (_QWORD *)(i + *(_QWORD *)(a3 + 16)) )
        {
LABEL_39:
          v60 = *((_DWORD *)v36 - 1);
          if ( v60 == *((_DWORD *)v36 - 2) )
          {
            v61 = (3 * v60 + 1) >> 1;
            v62 = 8 * v61 + 8;
            if ( 8 * v60 + 8 >= (unsigned int)v62 || v60 >= v61 )
            {
              v97 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v111, "Overflow encountered when expanding vector");
              *v97 = (char *)off_1C63128;
              sub_2333C0(v97 + 1, v111);
              sub_233E40((__int64)v111);
              __cxa_throw(v97, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v108 = v56;
            v102 = (3 * v60 + 1) >> 1;
            v63 = (unsigned int *)sub_186B300(v36 - 1, v62);
            v36 = v63 + 2;
            v56 = v108;
            v110 = v63 + 2;
            *v63 = v102;
            v64 = v63[1];
            v65 = v64;
            v59 = &v36[v64];
            v58 = v65 + 1;
          }
          else
          {
            v57 = v60;
            v58 = v60 + 1;
            v59 = &v36[v57];
          }
LABEL_37:
          i += 8;
          *v59 = *v54;
          *((_DWORD *)v36 - 1) = v58;
          if ( v56 == i )
            break;
        }
        if ( v109 != &v110 )
        {
          v66 = a1[1];
          if ( !v66 )
          {
LABEL_68:
            v88 = *((_DWORD *)v36 - 1);
            v104 = *((_DWORD *)v36 - 2);
            v89 = (_QWORD *)sub_186B270(8LL * v104 + 8);
            a1[1] = v89 + 1;
            *v89 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v104), _mm_cvtsi32_si128(v88)).m128i_u64[0];
            v90 = 8LL * *((unsigned int *)v36 - 1);
            if ( v90 <= 8 )
            {
              if ( v90 == 8 )
              {
                v89[1] = *v36;
                if ( !a7 )
                  goto LABEL_71;
              }
              else if ( !a7 )
              {
                goto LABEL_71;
              }
              goto LABEL_70;
            }
            memcpy(v89 + 1, v36, v90);
            if ( a7 )
LABEL_70:
              sub_4EDF60(v109, a7, a8);
LABEL_71:
            sub_186B220(v36 - 1);
            goto LABEL_49;
          }
          goto LABEL_45;
        }
        goto LABEL_84;
      }
    }
LABEL_80:
    if ( v109 != &v110 )
      goto LABEL_81;
    if ( !a7 )
    {
LABEL_86:
      if ( !v36 )
        goto LABEL_49;
      goto LABEL_71;
    }
LABEL_85:
    sub_4EDF60(v109, a7, a8);
    goto LABEL_86;
  }
  v54 = *(_QWORD **)(a3 + 16);
  *(_DWORD *)(v38 + 4) = 0;
  if ( v54 )
  {
    v92 = *((unsigned int *)v54 - 1);
    if ( !(_DWORD)v92 )
      goto LABEL_80;
    v56 = 8 * v92;
    i = 0;
    goto LABEL_39;
  }
LABEL_83:
  if ( v109 == &v110 )
  {
LABEL_84:
    if ( !a7 )
      goto LABEL_71;
    goto LABEL_85;
  }
LABEL_81:
  v66 = a1[1];
  if ( v66 )
LABEL_45:
    sub_186B220((void *)(v66 - 8));
  if ( v36 )
    goto LABEL_68;
  a1[1] = 0;
  if ( a7 )
    sub_4EDF60(v109, a7, a8);
LABEL_49:
  v67 = *(_QWORD *)(a2 + 120);
  a1[5] = 0;
  *a1 = &off_1C4FF30;
  v68 = 0x3FFFFFFFCLL;
  a1[6] = 0;
  if ( v67 )
    v68 = 4LL * (unsigned int)(*(_DWORD *)(v67 - 4) - 1);
  v69 = *(_DWORD *)(v67 + v68);
  v70 = *(_QWORD *)(a3 + 120);
  v71 = 0x3FFFFFFFCLL;
  if ( v70 )
    v71 = 4LL * (unsigned int)(*(_DWORD *)(v70 - 4) - 1);
  v103 = *(_DWORD *)(v70 + v71) + v69;
  if ( a7 )
  {
    v72 = (_QWORD *)sub_186B270(0x10u);
    v73 = a8;
    *v72 = 2;
    v74 = (unsigned int *)(v72 + 1);
    v75 = (__int64)v74;
    while ( 1 )
    {
      v76 = *v73++;
      *v74 = v76;
      v77 = *(_DWORD *)(v75 - 4);
      v78 = (unsigned int)(v77 + 1);
      *(_DWORD *)(v75 - 4) = v78;
      if ( &a8[a7] == v73 )
        break;
      v79 = *(_DWORD *)(v75 - 8);
      if ( v79 == (_DWORD)v78 )
      {
        v80 = (3 * v79 + 1) >> 1;
        v81 = 4 * v80 + 8;
        if ( 4 * v77 + 12 >= (unsigned int)v81 || v79 >= v80 )
        {
          v94 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v111, "Overflow encountered when expanding vector");
          *v94 = (char *)off_1C63128;
          sub_2333C0(v94 + 1, v111);
          sub_233E40((__int64)v111);
          __cxa_throw(v94, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v82 = (unsigned int *)sub_186B300((void *)(v75 - 8), v81);
        v75 = (__int64)(v82 + 2);
        *v82 = v80;
        v74 = &v82[v82[1] + 2];
      }
      else
      {
        v74 = (unsigned int *)(v75 + 4 * v78);
      }
    }
  }
  else
  {
    v75 = 0;
  }
  v111[0] = v75;
  sub_4EDDC0(a2, v111, a3);
  v83 = v111[0];
  sub_4EDDC0(a2, a1 + 2, 0);
  sub_4EDDC0(a3, a1 + 3, 0);
  result = sub_186B510(a1 + 5, v103, 0);
  if ( v83 )
  {
    if ( *(_DWORD *)(v83 - 4) )
    {
      v85 = a1[6];
      v86 = 0;
      do
      {
        v87 = v86++;
        *(_DWORD *)(v85 + 4LL * (*(_DWORD *)(v83 + 4 * v87) >> 5)) |= 1 << *(_DWORD *)(v83 + 4 * v87);
      }
      while ( v86 < *(_DWORD *)(v83 - 4) );
    }
    return sub_186B220((void *)(v83 - 8));
  }
  return result;
}

