__int64 __fastcall sub_615260(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  char **v4; // r14
  char **exception; // r14
  char **v6; // r14
  char **v7; // r14
  __int64 v9; // r12
  __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rax
  int v17; // edi
  unsigned int v18; // edx
  __int64 *v19; // rsi
  __int64 v20; // rdx
  __int64 *v21; // r11
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // r15d
  unsigned __int64 v27; // r10
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  unsigned __int64 *v31; // rdx
  _QWORD *v32; // rdi
  unsigned int v33; // eax
  __int64 v34; // rdx
  int v35; // eax
  bool *v36; // rdx
  int v37; // edx
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // r15
  _QWORD *v40; // rax
  unsigned __int64 *v41; // rcx
  int v42; // eax
  __int64 *v43; // r14
  unsigned __int64 v44; // r13
  __int64 v45; // rsi
  bool v46; // zf
  unsigned int v49; // eax
  __int64 v50; // rcx
  _DWORD *v51; // rdi
  bool v52; // r15
  unsigned int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  bool *v56; // rdx
  unsigned int v57; // edx
  unsigned int v58; // ecx
  unsigned int *v59; // rax
  __int64 v60; // rcx
  unsigned int v61; // edx
  unsigned int *v62; // rax
  unsigned int v63; // r15d
  unsigned int *v64; // rax
  __int64 v65; // rdx
  unsigned int v66; // r15d
  unsigned int v67; // edx
  unsigned int *v68; // rax
  __int64 v69; // rdx
  int v70; // r9d
  __int64 v71; // rdi
  __int64 v72; // r15
  __int64 v73; // rsi
  int v74; // ecx
  int v75; // r8d
  int v76; // r9d
  _QWORD *v77; // rax
  _QWORD *v78; // rbx
  _QWORD *v79; // rax
  unsigned __int64 v80; // [rsp+8h] [rbp-B8h]
  unsigned __int64 v81; // [rsp+10h] [rbp-B0h]
  __int64 v82; // [rsp+10h] [rbp-B0h]
  __int64 v83; // [rsp+10h] [rbp-B0h]
  __int64 v84; // [rsp+18h] [rbp-A8h]
  __int64 v85; // [rsp+18h] [rbp-A8h]
  unsigned __int64 v86; // [rsp+18h] [rbp-A8h]
  unsigned __int64 v87; // [rsp+18h] [rbp-A8h]
  __int64 v88; // [rsp+18h] [rbp-A8h]
  __int64 v90; // [rsp+28h] [rbp-98h]
  __int64 v92; // [rsp+38h] [rbp-88h]
  __int64 v93; // [rsp+40h] [rbp-80h]
  unsigned int v94; // [rsp+48h] [rbp-78h]
  unsigned int v95; // [rsp+4Ch] [rbp-74h]
  __int64 v96; // [rsp+50h] [rbp-70h]
  unsigned int v97; // [rsp+50h] [rbp-70h]
  unsigned int v98; // [rsp+50h] [rbp-70h]
  _DWORD *ptr; // [rsp+58h] [rbp-68h]
  __int64 v100[10]; // [rsp+70h] [rbp-50h] BYREF

  v95 = *(_DWORD *)(a2 + 68);
  if ( !v95 )
  {
    sub_62A000(a4[1], a2);
    if ( *a4 )
      sub_62A410(a4[1], *a4);
    v26 = 1;
    *a4 = a2;
    return v26;
  }
  v9 = *(_QWORD *)(a2 + 40);
  v94 = *(_DWORD *)(a2 + 56);
  v93 = *(_QWORD *)(a1 + 24);
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  ptr = nullptr;
  v11 = a2;
  v12 = nullptr;
  v90 = v95;
  v92 = a2 + 8LL * v95;
  do
  {
    v13 = *(_QWORD *)(v11 + 80);
    v14 = *(__int64 **)(a1 + 56);
    v15 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF8LL) + 16);
    v96 = v13 & 7;
    v16 = *(unsigned int *)(a1 + 64);
    v17 = *(_DWORD *)(v15 + 12);
    v18 = v16 - 1;
    v16 *= 8;
    v19 = (__int64 *)((char *)v14 + v16);
    v20 = 8LL * (v17 & v18);
    v21 = &v14[(unsigned __int64)v20 / 8];
    if ( v20 != v16 )
    {
      v22 = &v14[(unsigned __int64)v20 / 8];
      do
      {
        while ( 1 )
        {
          v23 = *v22;
          if ( (unsigned __int64)*v22 <= 1 )
            break;
          if ( *(_DWORD *)(v23 + 12) == v17 && v15 == v23 )
            goto LABEL_31;
          if ( v19 == ++v22 )
            goto LABEL_13;
        }
        if ( !v23 )
          goto LABEL_20;
        ++v22;
      }
      while ( v19 != v22 );
    }
LABEL_13:
    while ( v21 != v14 )
    {
      v24 = *v14;
      if ( (unsigned __int64)*v14 > 1 )
      {
        if ( *(_DWORD *)(v24 + 12) == v17 && v15 == v24 )
          goto LABEL_31;
      }
      else if ( !v24 )
      {
        break;
      }
      ++v14;
    }
LABEL_20:
    v84 = v11;
    v80 = *(_QWORD *)(v11 + 80);
    v81 = v13 & 0xFFFFFFFFFFFFFFF8LL;
    v25 = sub_64A930(a3, v13 & 0xFFFFFFFFFFFFFFF8LL);
    v11 = v84;
    v26 = v25;
    if ( !(_BYTE)v25 )
    {
      v27 = v81;
      if ( v96 == 1 )
      {
        if ( v80 <= 7 )
          goto LABEL_24;
      }
      else if ( v9 == v81 )
      {
        if ( ptr )
          sub_186B220(ptr - 2);
        if ( v12 )
          goto LABEL_44;
        goto LABEL_52;
      }
      ++*(_DWORD *)(v81 + 8);
LABEL_24:
      if ( v12 )
      {
        v28 = *((_DWORD *)v12 - 1);
        if ( v28 == *((_DWORD *)v12 - 2) )
        {
          v66 = (3 * v28 + 1) >> 1;
          v67 = 8 * v66 + 8;
          if ( 8 * v28 + 8 >= v67 || v28 >= v66 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v100, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v100);
            sub_233E40((__int64)v100);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v82 = v84;
          v86 = v27;
          v68 = (unsigned int *)sub_186B300(v12 - 1, v67);
          v69 = v68[1];
          v12 = v68 + 2;
          *v68 = v66;
          v27 = v86;
          v11 = v82;
          LODWORD(v68) = v69;
          v31 = &v12[v69];
          v30 = (_DWORD)v68 + 1;
        }
        else
        {
          v29 = v28;
          v30 = v28 + 1;
          v31 = &v12[v29];
        }
      }
      else
      {
        v83 = v84;
        v87 = v27;
        v78 = (_QWORD *)sub_186B270(0x18u);
        *v78 = 2;
        v27 = v87;
        v30 = 1;
        v12 = v78 + 1;
        v11 = v83;
        v31 = v12;
      }
      v32 = ptr;
      *v31 = v27;
      *((_DWORD *)v12 - 1) = v30;
      if ( ptr )
      {
        v33 = *(ptr - 1);
        if ( v33 == *(ptr - 2) )
        {
          v63 = (3 * v33 + 1) >> 1;
          if ( v33 + 8 >= v63 + 8 || v33 >= v63 )
          {
            v7 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v100, "Overflow encountered when expanding vector");
            *v7 = (char *)off_1C63128;
            sub_2333C0(v7 + 1, v100);
            sub_233E40((__int64)v100);
            __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v85 = v11;
          v64 = (unsigned int *)sub_186B300(ptr - 2, v63 + 8);
          v65 = v64[1];
          v32 = v64 + 2;
          *v64 = v63;
          ptr = v32;
          v11 = v85;
          LODWORD(v64) = v65;
          v36 = (bool *)v32 + v65;
          v35 = (_DWORD)v64 + 1;
        }
        else
        {
          v34 = v33;
          v35 = v33 + 1;
          v36 = (bool *)ptr + v34;
        }
      }
      else
      {
        v88 = v11;
        v79 = (_QWORD *)sub_186B270(0xAu);
        *v79 = 2;
        v11 = v88;
        ptr = v79 + 1;
        v36 = (bool *)(v79 + 1);
        v32 = v79 + 1;
        v35 = 1;
      }
      *v36 = v96 == 1;
      *((_DWORD *)v32 - 1) = v35;
      goto LABEL_32;
    }
LABEL_31:
    if ( v96 == 1 )
    {
      v26 = 0;
      goto LABEL_41;
    }
LABEL_32:
    v11 += 8;
  }
  while ( v11 != v92 );
  if ( !v12 )
  {
    if ( v95 >= v94 )
    {
      v70 = a2 + 72;
      v37 = 0;
      v71 = *(_QWORD *)(a1 + 32) + 656LL;
      goto LABEL_79;
    }
LABEL_36:
    v38 = *(_QWORD *)(a2 + 8LL * v95 + 80);
    v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v38 > 7 )
      ++*(_DWORD *)(v39 + 8);
    if ( v12 )
      goto LABEL_58;
    v40 = (_QWORD *)sub_186B270(0x18u);
    *v40 = 2;
    v12 = v40 + 1;
    v38 = *(_QWORD *)(a2 + 8LL * v95 + 80);
    v41 = v40 + 1;
    v42 = 1;
    while ( 1 )
    {
      v51 = ptr;
      *v41 = v39;
      *((_DWORD *)v12 - 1) = v42;
      v52 = (v38 & 7) == 1;
      if ( ptr )
      {
        v53 = *(ptr - 1);
        if ( v53 == *(ptr - 2) )
        {
          v61 = (3 * v53 + 1) >> 1;
          if ( v53 + 8 >= v61 + 8 || v53 >= v61 )
          {
            v6 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v100, "Overflow encountered when expanding vector");
            *v6 = (char *)off_1C63128;
            sub_2333C0(v6 + 1, v100);
            sub_233E40((__int64)v100);
            __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v98 = (3 * v53 + 1) >> 1;
          v62 = (unsigned int *)sub_186B300(ptr - 2, v61 + 8);
          v51 = v62 + 2;
          ptr = v62 + 2;
          *v62 = v98;
          LODWORD(v62) = v62[1];
          v56 = (bool *)v51 + (unsigned int)v62;
          v55 = (_DWORD)v62 + 1;
        }
        else
        {
          v54 = v53;
          v55 = v53 + 1;
          v56 = (bool *)ptr + v54;
        }
      }
      else
      {
        v77 = (_QWORD *)sub_186B270(0xAu);
        *v77 = 2;
        ptr = v77 + 1;
        v56 = (bool *)(v77 + 1);
        v51 = v77 + 1;
        v55 = 1;
      }
      ++v95;
      *v56 = v52;
      *(v51 - 1) = v55;
      if ( v95 >= v94 )
      {
        v37 = *((_DWORD *)v12 - 1);
        v70 = a2 + 72;
        v71 = *(_QWORD *)(a1 + 32) + 656LL;
        goto LABEL_79;
      }
      v38 = *(_QWORD *)(a2 + 8LL * v95 + 80);
      v90 = v95;
      v39 = 0;
      if ( v38 <= 7 )
      {
LABEL_58:
        v49 = *((_DWORD *)v12 - 1);
        if ( v49 != *((_DWORD *)v12 - 2) )
          goto LABEL_59;
LABEL_66:
        v57 = (3 * v49 + 1) >> 1;
        v58 = 8 * v57 + 8;
        if ( 8 * v49 + 8 >= v58 || v49 >= v57 )
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v100, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v100);
          sub_233E40((__int64)v100);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v97 = (3 * v49 + 1) >> 1;
        v59 = (unsigned int *)sub_186B300(v12 - 1, v58);
        v60 = v59[1];
        v12 = v59 + 2;
        *v59 = v97;
        LODWORD(v59) = v60;
        v41 = &v12[v60];
        v38 = *(_QWORD *)(a2 + 8 * v90 + 80);
        v42 = (_DWORD)v59 + 1;
      }
      else
      {
        v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
        ++*(_DWORD *)((v38 & 0xFFFFFFFFFFFFFFF8LL) + 8);
        v49 = *((_DWORD *)v12 - 1);
        if ( v49 == *((_DWORD *)v12 - 2) )
          goto LABEL_66;
LABEL_59:
        v50 = v49;
        v42 = v49 + 1;
        v41 = &v12[v50];
      }
    }
  }
  v37 = *((_DWORD *)v12 - 1);
  if ( v37 == v95 )
  {
    sub_62A000(a4[1], a2);
    if ( *a4 )
      sub_62A410(a4[1], *a4);
    *a4 = a2;
    if ( ptr )
      sub_186B220(ptr - 2);
    v26 = 1;
    goto LABEL_44;
  }
  if ( v95 < v94 )
    goto LABEL_36;
  v70 = a2 + 72;
  v71 = *(_QWORD *)(a1 + 32) + 656LL;
LABEL_79:
  v72 = sub_62C680(v71, v9, v37, (_DWORD)v12, (_DWORD)ptr, v70, 1);
  if ( v72 )
    sub_62A000(a4[1], v72);
  if ( *a4 )
    sub_62A410(a4[1], *a4);
  v73 = *(_QWORD *)(a1 + 32);
  *a4 = v72;
  sub_629AF0(v72, v73);
  sub_630200(*(_QWORD *)(a1 + 32) + 656LL, a4, 1);
  sub_62F7F0(*(_DWORD *)(a1 + 32) + 656, a2, *a4, v74, v75, v76);
  v26 = 1;
LABEL_41:
  if ( ptr )
    sub_186B220(ptr - 2);
  if ( v12 )
  {
LABEL_44:
    v43 = v12;
    v44 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
    if ( (unsigned __int64)v12 < v44 )
    {
      do
      {
        while ( 1 )
        {
          v45 = *v43;
          if ( *v43 )
          {
            v46 = (*(_DWORD *)(v45 + 8))-- == 1;
            if ( v46 )
              break;
          }
          if ( (unsigned __int64)++v43 >= v44 )
            goto LABEL_50;
        }
        sub_15D7BC0(v93, v45);
        ++v43;
      }
      while ( (unsigned __int64)v43 < v44 );
    }
LABEL_50:
    sub_186B220(v12 - 1);
  }
  if ( v9 )
  {
LABEL_52:
    v46 = (*(_DWORD *)(v9 + 8))-- == 1;
    if ( v46 )
      sub_15D7BC0(v93, v9);
  }
  return v26;
}

