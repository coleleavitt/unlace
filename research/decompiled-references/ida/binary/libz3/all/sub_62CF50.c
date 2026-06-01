__int64 __fastcall sub_62CF50(const __m128i *a1, __int64 *a2)
{
  char **v2; // r12
  char **exception; // r12
  char **v4; // r12
  char **v5; // r14
  __int64 v6; // rax
  unsigned int v7; // r12d
  unsigned int v8; // r13d
  __int64 v9; // rax
  unsigned int v11; // r14d
  unsigned int v12; // r14d
  unsigned __int64 v13; // rcx
  _QWORD *v14; // rax
  int v15; // r8d
  __int64 v16; // rsi
  _QWORD *v17; // rdi
  int v18; // r8d
  unsigned int v19; // edx
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  __int64 v22; // r15
  unsigned int v23; // r14d
  __int64 v24; // r13
  __int64 v25; // rdi
  int v26; // eax
  _QWORD *v27; // rdi
  __int64 v28; // rax
  bool v29; // r8
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // eax
  _BYTE *v33; // rcx
  unsigned __int64 v34; // rcx
  unsigned int v35; // eax
  unsigned int v36; // r8d
  size_t v37; // rsi
  unsigned int *v38; // rax
  __int64 v39; // rdi
  unsigned int v40; // r12d
  unsigned int v41; // eax
  __int64 v42; // rdx
  int v43; // eax
  _QWORD *v44; // rdx
  unsigned int v45; // r12d
  unsigned int v46; // r14d
  unsigned int v47; // edi
  unsigned int v48; // ecx
  size_t v49; // rsi
  unsigned int *v50; // rax
  void *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 *v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdi
  __int64 v57; // r12
  __int64 *v58; // rdx
  unsigned int v61; // ecx
  size_t v62; // rsi
  unsigned int *v63; // rax
  unsigned int v64; // edx
  size_t v65; // rsi
  unsigned int *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rax
  __int64 v71; // [rsp+8h] [rbp-B8h]
  unsigned __int64 v73; // [rsp+18h] [rbp-A8h]
  __int64 v74; // [rsp+18h] [rbp-A8h]
  unsigned int v75; // [rsp+18h] [rbp-A8h]
  unsigned int v76; // [rsp+20h] [rbp-A0h]
  unsigned int v77; // [rsp+20h] [rbp-A0h]
  bool v78; // [rsp+20h] [rbp-A0h]
  unsigned int v79; // [rsp+20h] [rbp-A0h]
  unsigned __int64 v80; // [rsp+20h] [rbp-A0h]
  bool v81; // [rsp+20h] [rbp-A0h]
  __int64 v82; // [rsp+40h] [rbp-80h] BYREF
  _QWORD *v83; // [rsp+48h] [rbp-78h] BYREF
  __int64 v84[2]; // [rsp+50h] [rbp-70h] BYREF
  __m128i v85; // [rsp+60h] [rbp-60h] BYREF
  __int64 v86[10]; // [rsp+70h] [rbp-50h] BYREF

  v6 = *a2;
  v83 = nullptr;
  v7 = *(_DWORD *)(v6 + 68);
  v8 = *(_DWORD *)(v6 + 56);
  v82 = a1->m128i_i64[0];
  if ( v7 == v8 )
    return sub_2334C0(&v82);
  v9 = a1[18].m128i_i64[0];
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  sub_157C960(&a1[18].m128i_u64[1], a2);
  sub_157E920(&a1[18].m128i_u64[1], *(_QWORD *)(*a2 + 40));
  v11 = 0;
  if ( v7 )
  {
    do
      sub_157E920(&a1[18].m128i_u64[1], *(_QWORD *)(*a2 + 8LL * v11++ + 80) & 0xFFFFFFFFFFFFFFF8LL);
    while ( v7 != v11 );
  }
  v71 = sub_62B050((__int64)a1);
  v12 = v7;
  if ( v7 < v8 )
  {
    do
    {
      v13 = *(_QWORD *)(*a2 + 8LL * v12 + 80);
      v86[0] = v13 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v13 > 7 )
        ++*(_DWORD *)((v13 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      sub_62BD60(&v83, v86);
      ++v12;
    }
    while ( v8 != v12 );
  }
  sub_E67500(&a1[25], v71, 0, &v82);
  v14 = v83;
  if ( !v83 )
  {
    v84[0] = a1->m128i_i64[0];
    if ( !v7 )
    {
      v53 = *a2;
LABEL_80:
      v54 = (__int64 *)(v53 + 72);
      v24 = 0;
      v22 = 0;
      v45 = 0;
      goto LABEL_46;
    }
    goto LABEL_65;
  }
  v15 = *((_DWORD *)v83 - 1);
  if ( v15 != v8 - v7 )
  {
    v84[0] = a1->m128i_i64[0];
    if ( !v7 )
      goto LABEL_76;
LABEL_65:
    v16 = *a2;
    goto LABEL_16;
  }
  v16 = *a2;
  v17 = v83;
  v18 = v7 + v15;
  v19 = v7;
  while ( *v17 == (*(_QWORD *)(v16 + 8LL * v19 + 80) & 0xFFFFFFFFFFFFFFF8LL) )
  {
    ++v19;
    ++v17;
    if ( v19 == v18 )
      return sub_2334C0(&v82);
  }
  v84[0] = a1->m128i_i64[0];
  if ( !v7 )
  {
LABEL_76:
    v22 = 0;
    v24 = 0;
    goto LABEL_31;
  }
LABEL_16:
  v20 = *(_QWORD *)(v16 + 80);
  if ( v20 <= 7 )
  {
    v23 = 0;
    v21 = 0;
    v24 = 0;
    goto LABEL_61;
  }
  v21 = v20 & 0xFFFFFFFFFFFFFFF8LL;
  v22 = 0;
  v23 = 0;
  v24 = 0;
LABEL_25:
  ++*(_DWORD *)(v21 + 8);
  if ( !v22 )
  {
LABEL_61:
    v80 = v21;
    v67 = (_QWORD *)sub_186B270(0x18u);
    v22 = (__int64)(v67 + 1);
    *v67 = 2;
    v16 = *a2;
    v26 = 1;
    v21 = v80;
    v27 = (_QWORD *)v22;
    goto LABEL_19;
  }
  while ( 1 )
  {
    v35 = *(_DWORD *)(v22 - 4);
    if ( v35 == *(_DWORD *)(v22 - 8) )
    {
      v36 = (3 * v35 + 1) >> 1;
      v37 = 8 * v36 + 8;
      if ( 8 * v35 + 8 >= (unsigned int)v37 || v35 >= v36 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v86, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v86);
        sub_233E40((__int64)v86);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v73 = v21;
      v76 = (3 * v35 + 1) >> 1;
      v38 = (unsigned int *)sub_186B300((void *)(v22 - 8), v37);
      v39 = v38[1];
      v22 = (__int64)(v38 + 2);
      v16 = *a2;
      v21 = v73;
      *v38 = v76;
      LODWORD(v38) = v39;
      v27 = (_QWORD *)(v22 + 8 * v39);
      v26 = (_DWORD)v38 + 1;
    }
    else
    {
      v25 = v35;
      v26 = v35 + 1;
      v27 = (_QWORD *)(v22 + 8 * v25);
    }
LABEL_19:
    *v27 = v21;
    *(_DWORD *)(v22 - 4) = v26;
    v28 = *(_QWORD *)(v16 + 8LL * v23 + 80) & 7LL;
    v29 = v28 == 1;
    if ( v24 )
    {
      v30 = *(_DWORD *)(v24 - 4);
      if ( v30 == *(_DWORD *)(v24 - 8) )
      {
        v61 = (3 * v30 + 1) >> 1;
        v62 = v61 + 8;
        if ( v30 + 8 >= (unsigned int)v62 || v30 >= v61 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v86, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v86);
          sub_233E40((__int64)v86);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v75 = (3 * v30 + 1) >> 1;
        v78 = v29;
        v63 = (unsigned int *)sub_186B300((void *)(v24 - 8), v62);
        v24 = (__int64)(v63 + 2);
        v29 = v78;
        *v63 = v75;
        LODWORD(v63) = v63[1];
        v33 = (_BYTE *)(v24 + (unsigned int)v63);
        v32 = (_DWORD)v63 + 1;
      }
      else
      {
        v31 = v30;
        v32 = v30 + 1;
        v33 = (_BYTE *)(v24 + v31);
      }
    }
    else
    {
      v81 = v28 == 1;
      v68 = (_QWORD *)sub_186B270(0xAu);
      v24 = (__int64)(v68 + 1);
      *v68 = 2;
      v29 = v81;
      v32 = 1;
      v33 = (_BYTE *)v24;
    }
    ++v23;
    *v33 = v29;
    *(_DWORD *)(v24 - 4) = v32;
    if ( v7 == v23 )
      break;
    v16 = *a2;
    v34 = *(_QWORD *)(*a2 + 8LL * v23 + 80);
    if ( v34 > 7 )
    {
      v21 = v34 & 0xFFFFFFFFFFFFFFF8LL;
      goto LABEL_25;
    }
    v21 = 0;
  }
  v14 = v83;
  if ( v83 )
  {
LABEL_31:
    v40 = 0;
    while ( v40 < *((_DWORD *)v14 - 1) )
    {
      sub_62A170(&v85, a1, v14[v40]);
      v74 = v85.m128i_i64[0];
      if ( v22 )
      {
        v41 = *(_DWORD *)(v22 - 4);
        if ( v41 == *(_DWORD *)(v22 - 8) )
        {
          v64 = (3 * v41 + 1) >> 1;
          v65 = 8 * v64 + 8;
          if ( 8 * v41 + 8 >= (unsigned int)v65 || v41 >= v64 )
          {
            v5 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v86, "Overflow encountered when expanding vector");
            *v5 = (char *)off_1C63128;
            sub_2333C0(v5 + 1, v86);
            sub_233E40((__int64)v86);
            __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v79 = (3 * v41 + 1) >> 1;
          v66 = (unsigned int *)sub_186B300((void *)(v22 - 8), v65);
          v22 = (__int64)(v66 + 2);
          *v66 = v79;
          LODWORD(v66) = v66[1];
          v44 = (_QWORD *)(v22 + 8LL * (unsigned int)v66);
          v43 = (_DWORD)v66 + 1;
        }
        else
        {
          v42 = v41;
          v43 = v41 + 1;
          v44 = (_QWORD *)(v22 + 8 * v42);
        }
      }
      else
      {
        v69 = (_QWORD *)sub_186B270(0x18u);
        v22 = (__int64)(v69 + 1);
        *v69 = 2;
        v43 = 1;
        v44 = (_QWORD *)v22;
      }
      ++v40;
      *v44 = v74;
      *(_DWORD *)(v22 - 4) = v43;
      v14 = v83;
      if ( !v83 )
        goto LABEL_37;
    }
    if ( !v22 )
    {
      v53 = *a2;
      if ( !v24 )
        goto LABEL_80;
      *(_DWORD *)(v24 - 4) = 0;
      v54 = (__int64 *)(v53 + 72);
      v45 = 0;
      goto LABEL_46;
    }
LABEL_37:
    v45 = *(_DWORD *)(v22 - 4);
    if ( v24 )
      goto LABEL_38;
    if ( !v45 )
    {
      v53 = *a2;
      v54 = (__int64 *)(*a2 + 72);
      goto LABEL_46;
    }
    v70 = sub_186B270(0xAu);
    v47 = 2;
    *(_QWORD *)v70 = 2;
    v24 = v70 + 8;
    v46 = 0;
    if ( v45 > 2 )
      goto LABEL_40;
    *(_DWORD *)(v70 + 4) = v45;
    v51 = (void *)(v70 + 8);
    v52 = v24 + v45;
    goto LABEL_44;
  }
  v45 = *(_DWORD *)(v22 - 4);
LABEL_38:
  v46 = *(_DWORD *)(v24 - 4);
  if ( v46 >= v45 )
  {
    v53 = *a2;
    *(_DWORD *)(v24 - 4) = v45;
    v54 = (__int64 *)(v53 + 72);
  }
  else
  {
    v47 = *(_DWORD *)(v24 - 8);
    if ( v47 >= v45 )
    {
      *(_DWORD *)(v24 - 4) = v45;
      v51 = (void *)(v24 + v46);
      v52 = v24 + v45;
      goto LABEL_44;
    }
    do
    {
LABEL_40:
      v48 = (3 * v47 + 1) >> 1;
      v49 = v48 + 8;
      if ( v47 + 8 >= (unsigned int)v49 || v47 >= v48 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v86, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v86);
        sub_233E40((__int64)v86);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v77 = (3 * v47 + 1) >> 1;
      v50 = (unsigned int *)sub_186B300((void *)(v24 - 8), v49);
      v24 = (__int64)(v50 + 2);
      *v50 = v77;
      v47 = v77;
    }
    while ( v77 < v45 );
    v50[1] = v45;
    v51 = (void *)(v24 + v46);
    v52 = v24 + v45;
    if ( v46 != v45 )
LABEL_44:
      memset(v51, 0, v52 - (_QWORD)v51);
    v53 = *a2;
    v45 = *(_DWORD *)(v22 - 4);
    v54 = (__int64 *)(*a2 + 72);
  }
LABEL_46:
  v55 = sub_62C680(a1, *(_QWORD *)(v53 + 40), v45, v22, v24, v54, 1);
  v56 = *a2;
  v57 = v55;
  ++*(_DWORD *)(v55 + 60);
  if ( v56 )
  {
    v58 = (__int64 *)a2[1];
    if ( (*(_DWORD *)(v56 + 60))-- == 1 )
      sub_62A330(v56, *v58);
  }
  *a2 = v57;
  if ( v24 )
    sub_186B220((void *)(v24 - 8));
  v84[1] = v22;
  sub_2B4F40(v84);
  return sub_2334C0(&v82);
}

