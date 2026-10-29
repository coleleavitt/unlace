__int64 *__fastcall sub_AE9920(__int64 *a1, void **a2, char a3)
{
  char **exception; // rbx
  char **v4; // rbx
  char **v5; // r14
  char **v6; // r14
  char **v7; // r14
  char **v8; // r14
  char **v9; // r14
  _QWORD *v10; // rbx
  _QWORD *v12; // r9
  _QWORD *v14; // r14
  _QWORD *v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __m128i v21; // xmm1
  __int64 v22; // rbx
  __int64 v23; // rax
  __m128i v24; // xmm0
  bool v25; // dl
  _BOOL4 v26; // esi
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  __int64 *v33; // rcx
  __int64 v34; // r13
  unsigned int v35; // esi
  __int64 v36; // rax
  __int64 *v37; // rbx
  unsigned __int64 v38; // r12
  __int64 v39; // rsi
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 *v46; // rcx
  __int64 v47; // rax
  unsigned int v48; // ecx
  size_t v49; // rsi
  __int64 v50; // rax
  __int64 v51; // rax
  unsigned int v52; // ecx
  size_t v53; // rsi
  unsigned int *v54; // rax
  unsigned int v55; // ebx
  unsigned int v56; // eax
  unsigned int *v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // rax
  __int64 v60; // r13
  int v61; // eax
  int v62; // r8d
  int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rbx
  unsigned int v66; // esi
  unsigned int v67; // r13d
  unsigned int v68; // eax
  unsigned int *v69; // rax
  __int64 v70; // rdx
  _QWORD *v71; // rax
  _QWORD *v72; // rax
  _QWORD *v73; // rax
  int v74[2]; // [rsp+0h] [rbp-C8h]
  __int64 *v75; // [rsp+8h] [rbp-C0h]
  int v76[2]; // [rsp+10h] [rbp-B8h]
  int v77; // [rsp+18h] [rbp-B0h]
  char v78; // [rsp+1Ch] [rbp-ACh]
  int v79[2]; // [rsp+20h] [rbp-A8h]
  unsigned int ptr; // [rsp+28h] [rbp-A0h]
  __int64 *ptra; // [rsp+28h] [rbp-A0h]
  __int64 *ptrb; // [rsp+28h] [rbp-A0h]
  __int64 *ptrc; // [rsp+28h] [rbp-A0h]
  __int64 *ptrd; // [rsp+28h] [rbp-A0h]
  char v85[8]; // [rsp+30h] [rbp-98h]
  int v86[2]; // [rsp+38h] [rbp-90h]
  int v87; // [rsp+40h] [rbp-88h]
  void *v88[2]; // [rsp+48h] [rbp-80h] BYREF
  __m128i v89; // [rsp+60h] [rbp-68h] BYREF
  __int64 v90[11]; // [rsp+70h] [rbp-58h] BYREF

  v10 = a2[1];
  v75 = a1;
  v78 = a3;
  *(_QWORD *)v76 = v10;
  if ( !*(_BYTE *)(*((_QWORD *)*a2 + 14) + 564LL) )
  {
    *a1 = 0;
    a1[1] = (__int64)v10;
    return v75;
  }
  v12 = a2[4];
  v88[1] = a2[1];
  if ( !v12 || (v14 = v12, v15 = nullptr, *(_QWORD *)v74 = &v12[5 * *((unsigned int *)v12 - 1)], *(_QWORD **)v74 == v12) )
  {
    if ( a3 )
    {
      v34 = v10[108];
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      goto LABEL_77;
    }
    v15 = nullptr;
LABEL_79:
    v60 = v10[105];
    sub_180C5A0(v90, "clause-trail-end");
    v61 = sub_15E3510(v10, v90, 0, 0, v60, 0);
    v64 = sub_15DC610(
            (int)v10,
            v61,
            0,
            0,
            v62,
            v63,
            v74[0],
            (int)v75,
            v76[0],
            v77,
            v79[0],
            ptr,
            *(int *)v85,
            v86[0],
            v87,
            v88[0]);
    v65 = v64;
    if ( v64 )
      ++*(_DWORD *)(v64 + 8);
    if ( v15 )
    {
      v66 = *((_DWORD *)v15 - 1);
      if ( v66 == *((_DWORD *)v15 - 2) )
      {
        v67 = (3 * v66 + 1) >> 1;
        v68 = 8 * v67 + 8;
        if ( 8 * v66 + 8 >= v68 || v66 >= v67 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v90, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v90);
          sub_233E40((__int64)v90);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v69 = (unsigned int *)sub_186B300(v15 - 1, v68);
        v70 = v69[1];
        v15 = v69 + 2;
        *v69 = v67;
        *(_QWORD *)&v69[2 * v70 + 2] = v65;
        v10 = a2[1];
        v69[1] = v70 + 1;
      }
      else
      {
        v15[v66] = v64;
        v10 = a2[1];
        *((_DWORD *)v15 - 1) = v66 + 1;
      }
    }
    else
    {
      v73 = (_QWORD *)sub_186B270(0x18u);
      v73[1] = v65;
      v15 = v73 + 1;
      v10 = a2[1];
      *v73 = 0x100000002LL;
    }
    goto LABEL_27;
  }
  do
  {
    v16 = v14[2];
    v17 = v14[1];
    if ( v16 )
      v18 = *(unsigned int *)(v16 - 4);
    else
      v18 = 0;
    v19 = sub_15EC240(v14[1], v18);
    v20 = v14[3];
    v21 = (__m128i)(unsigned __int64)v19;
    v22 = v19;
    v23 = *(unsigned int *)v14;
    v24 = _mm_unpacklo_epi64((__m128i)v20, v21);
    v25 = v20 == 0;
    v26 = v25;
    if ( v22 )
    {
      v27 = *(_DWORD *)(v22 + 8);
      *(_DWORD *)(v22 + 8) = v27 + 1;
      v89 = v24;
      switch ( v23 )
      {
        case 0LL:
          goto LABEL_42;
        case 1LL:
          goto LABEL_49;
        case 2LL:
          goto LABEL_36;
        case 3LL:
          goto LABEL_10;
        case 4LL:
          goto LABEL_56;
        default:
          goto LABEL_18;
      }
    }
    v89 = v24;
    switch ( v23 )
    {
      case 0LL:
LABEL_42:
        *(_QWORD *)v86 = a2[1];
        ptrc = &v89.m128i_i64[v25];
        *(_QWORD *)v85 = *(_QWORD *)(*(_QWORD *)v86 + 848LL);
        sub_180C5A0(v88, "lemma");
        v47 = sub_15E3760(v86[0], (int)v88, 2 - v26, (int)ptrc, v85[0], v74[0], (int)v75, v76[0], v77, 2 - v26, ptrc);
        v29 = v47;
        if ( v47 )
          ++*(_DWORD *)(v47 + 8);
        if ( !v15 )
          goto LABEL_88;
        v30 = *((_DWORD *)v15 - 1);
        if ( v30 != *((_DWORD *)v15 - 2) )
          goto LABEL_14;
        v48 = (3 * v30 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v30 + 8 >= (unsigned int)v49 || v30 >= v48 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v90, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v90);
          sub_233E40((__int64)v90);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_55;
      case 1LL:
LABEL_49:
        *(_QWORD *)v86 = a2[1];
        ptrd = &v89.m128i_i64[v25];
        *(_QWORD *)v85 = *(_QWORD *)(*(_QWORD *)v86 + 848LL);
        sub_180C5A0(v88, "assumption");
        v50 = sub_15E3760(v86[0], (int)v88, 2 - v26, (int)ptrd, v85[0], v74[0], (int)v75, v76[0], v77, 2 - v26, ptrd);
        v29 = v50;
        if ( v50 )
          ++*(_DWORD *)(v50 + 8);
        if ( !v15 )
          goto LABEL_88;
        v30 = *((_DWORD *)v15 - 1);
        if ( v30 != *((_DWORD *)v15 - 2) )
          goto LABEL_14;
        v48 = (3 * v30 + 1) >> 1;
        v49 = 8 * v48 + 8;
        if ( 8 * v30 + 8 >= (unsigned int)v49 || v30 >= v48 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v90, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v90);
          sub_233E40((__int64)v90);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_55;
      case 2LL:
LABEL_36:
        *(_QWORD *)v86 = a2[1];
        ptrb = &v89.m128i_i64[v25];
        *(_QWORD *)v85 = *(_QWORD *)(*(_QWORD *)v86 + 848LL);
        sub_180C5A0(v88, "th-lemma");
        v41 = sub_15E3760(v86[0], (int)v88, 2 - v26, (int)ptrb, v85[0], v74[0], (int)v75, v76[0], v77, 2 - v26, ptrb);
        v42 = v41;
        if ( v41 )
          ++*(_DWORD *)(v41 + 8);
        if ( !v15 )
          goto LABEL_87;
        v43 = *((_DWORD *)v15 - 1);
        if ( v43 != *((_DWORD *)v15 - 2) )
          goto LABEL_40;
        v52 = (3 * v43 + 1) >> 1;
        v53 = 8 * v52 + 8;
        if ( 8 * v43 + 8 >= (unsigned int)v53 || v43 >= v52 )
        {
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v90, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v90);
          sub_233E40((__int64)v90);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        goto LABEL_62;
      case 3LL:
LABEL_10:
        *(_QWORD *)v86 = a2[1];
        ptra = &v89.m128i_i64[v25];
        *(_QWORD *)v85 = *(_QWORD *)(*(_QWORD *)v86 + 848LL);
        sub_180C5A0(v88, "th-assumption");
        v28 = sub_15E3760(v86[0], (int)v88, 2 - v26, (int)ptra, v85[0], v74[0], (int)v75, v76[0], v77, 2 - v26, ptra);
        v29 = v28;
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        if ( v15 )
        {
          v30 = *((_DWORD *)v15 - 1);
          if ( v30 == *((_DWORD *)v15 - 2) )
          {
            v48 = (3 * v30 + 1) >> 1;
            v49 = 8 * v48 + 8;
            if ( 8 * v30 + 8 >= (unsigned int)v49 || v30 >= v48 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v90, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v90);
              sub_233E40((__int64)v90);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
LABEL_55:
            v79[0] = v48;
            v51 = sub_186B300(v15 - 1, v49);
            v15 = (_QWORD *)(v51 + 8);
            *(_DWORD *)v51 = v79[0];
            LODWORD(v51) = *(_DWORD *)(v51 + 4);
            v33 = &v15[(unsigned int)v51];
            v32 = v51 + 1;
          }
          else
          {
LABEL_14:
            v31 = v30;
            v32 = v30 + 1;
            v33 = &v15[v31];
          }
        }
        else
        {
LABEL_88:
          v72 = (_QWORD *)sub_186B270(0x18u);
          v15 = v72 + 1;
          *v72 = 2;
          v32 = 1;
          v33 = v15;
        }
        *v33 = v29;
        *((_DWORD *)v15 - 1) = v32;
        break;
      case 4LL:
LABEL_56:
        v41 = sub_15E08B0(a2[1], v22);
        v42 = v41;
        if ( v41 )
          ++*(_DWORD *)(v41 + 8);
        if ( v15 )
        {
          v43 = *((_DWORD *)v15 - 1);
          if ( v43 == *((_DWORD *)v15 - 2) )
          {
            v52 = (3 * v43 + 1) >> 1;
            v53 = 8 * v52 + 8;
            if ( 8 * v43 + 8 >= (unsigned int)v53 || v43 >= v52 )
            {
              v8 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v90, "Overflow encountered when expanding vector");
              *v8 = (char *)off_1C63128;
              sub_2333C0(v8 + 1, v90);
              sub_233E40((__int64)v90);
              __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
LABEL_62:
            ptr = v52;
            *(_QWORD *)v79 = v42;
            v54 = (unsigned int *)sub_186B300(v15 - 1, v53);
            v15 = v54 + 2;
            v42 = *(_QWORD *)v79;
            *v54 = ptr;
            LODWORD(v54) = v54[1];
            v46 = &v15[(unsigned int)v54];
            v45 = (_DWORD)v54 + 1;
          }
          else
          {
LABEL_40:
            v44 = v43;
            v45 = v43 + 1;
            v46 = &v15[v44];
          }
        }
        else
        {
LABEL_87:
          *(_QWORD *)v79 = v41;
          v71 = (_QWORD *)sub_186B270(0x18u);
          v15 = v71 + 1;
          *v71 = 2;
          v42 = *(_QWORD *)v79;
          v45 = 1;
          v46 = v15;
        }
        *v46 = v42;
        *((_DWORD *)v15 - 1) = v45;
        break;
      default:
        goto LABEL_20;
    }
    if ( v22 )
    {
      v27 = *(_DWORD *)(v22 + 8) - 1;
LABEL_18:
      *(_DWORD *)(v22 + 8) = v27;
      if ( !v27 )
        sub_15D7BC0(v17, v22);
    }
LABEL_20:
    v14 += 5;
  }
  while ( *(_QWORD **)v74 != v14 );
  v10 = a2[1];
  if ( !v78 )
    goto LABEL_79;
  v34 = v10[108];
  if ( v34 )
    ++*(_DWORD *)(v34 + 8);
  if ( v15 )
  {
    v35 = *((_DWORD *)v15 - 1);
    if ( v35 == *((_DWORD *)v15 - 2) )
    {
      v55 = (3 * v35 + 1) >> 1;
      v56 = 8 * v55 + 8;
      if ( 8 * v35 + 8 >= v56 || v35 >= v55 )
      {
        v4 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v90, "Overflow encountered when expanding vector");
        *v4 = (char *)off_1C63128;
        sub_2333C0(v4 + 1, v90);
        sub_233E40((__int64)v90);
        __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v57 = (unsigned int *)sub_186B300(v15 - 1, v56);
      v58 = v57[1];
      v15 = v57 + 2;
      *v57 = v55;
      v10 = a2[1];
      *(_QWORD *)&v57[2 * v58 + 2] = v34;
      v57[1] = v58 + 1;
    }
    else
    {
      v15[v35] = v34;
      *((_DWORD *)v15 - 1) = v35 + 1;
    }
    goto LABEL_27;
  }
LABEL_77:
  v59 = (_QWORD *)sub_186B270(0x18u);
  v59[1] = v34;
  v15 = v59 + 1;
  v10 = a2[1];
  *v59 = 0x100000002LL;
LABEL_27:
  v36 = sub_15E08C0((int)v10);
  *v75 = v36;
  v75[1] = (__int64)v10;
  if ( v36 )
    ++*(_DWORD *)(v36 + 8);
  v37 = v15;
  v38 = (unsigned __int64)&v15[*((unsigned int *)v15 - 1)];
  if ( (unsigned __int64)v15 < v38 )
  {
    do
    {
      while ( 1 )
      {
        v39 = *v37;
        if ( *v37 )
        {
          if ( (*(_DWORD *)(v39 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v37 >= v38 )
          goto LABEL_35;
      }
      ++v37;
      sub_15D7BC0(*(_QWORD *)v76, v39);
    }
    while ( (unsigned __int64)v37 < v38 );
  }
LABEL_35:
  sub_186B220(v15 - 1);
  return v75;
}

