__int64 __fastcall sub_C20870(__int64 a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  _QWORD *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdi
  bool v17; // zf
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // edx
  int v22; // r13d
  _QWORD *v24; // rdi
  unsigned int v25; // eax
  __int64 v26; // rdx
  int v27; // eax
  __int64 *v28; // rdx
  _QWORD *v29; // rdi
  unsigned int v30; // eax
  __int64 v31; // rdx
  int v32; // eax
  _QWORD *v33; // rdx
  unsigned __int8 v34; // dl
  __int64 v35; // rax
  int v36; // r12d
  int v37; // r14d
  _QWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // r12d
  size_t v42; // rsi
  unsigned int *v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r13
  unsigned int v47; // ebx
  size_t v48; // rsi
  unsigned int *v49; // rax
  __int64 v50; // rdx
  unsigned __int8 v51; // dl
  __int64 v52; // rax
  unsigned int v53; // r15d
  size_t v54; // rsi
  char **v55; // rbx
  unsigned int *v56; // rax
  __int64 v57; // rax
  int v58; // edx
  __int64 v59; // rax
  __int64 v60; // rbx
  _QWORD *v61; // rdx
  unsigned int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  __int64 *v65; // rcx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  _QWORD *v68; // rax
  unsigned int v69; // r13d
  unsigned int v70; // ecx
  unsigned int *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  unsigned int v74; // r14d
  unsigned int v75; // ecx
  unsigned int *v76; // rax
  __int64 v77; // rcx
  _QWORD *v78; // rdx
  _QWORD *v79; // rdx
  char **exception; // r14
  __int64 v81; // [rsp+8h] [rbp-70h] BYREF
  __int64 v82; // [rsp+10h] [rbp-68h] BYREF
  __int64 v83; // [rsp+18h] [rbp-60h] BYREF
  __int64 v84[11]; // [rsp+20h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v24 = *(_QWORD **)(a1 + 56);
    if ( v24 )
    {
      v25 = *((_DWORD *)v24 - 1);
      if ( v25 == *((_DWORD *)v24 - 2) )
      {
        v41 = (3 * v25 + 1) >> 1;
        v42 = 8 * v41 + 8;
        if ( 8 * v25 + 8 >= (unsigned int)v42 || v25 >= v41 )
          goto LABEL_68;
        v43 = (unsigned int *)sub_186B300(v24 - 1, v42);
        v44 = v43[1];
        v24 = v43 + 2;
        *v43 = v41;
        *(_QWORD *)(a1 + 56) = v43 + 2;
        LODWORD(v43) = v44;
        v28 = &v24[v44];
        v27 = (_DWORD)v43 + 1;
      }
      else
      {
        v26 = v25;
        v27 = v25 + 1;
        v28 = &v24[v26];
      }
    }
    else
    {
      v67 = (_QWORD *)sub_186B270(0x18u);
      v24 = v67 + 1;
      *v67 = 2;
      v27 = 1;
      *(_QWORD *)(a1 + 56) = v24;
      v28 = v24;
    }
    *v28 = a2;
    *((_DWORD *)v24 - 1) = v27;
    v29 = *(_QWORD **)(a1 + 88);
    if ( v29 )
    {
      v30 = *((_DWORD *)v29 - 1);
      if ( v30 == *((_DWORD *)v29 - 2) )
      {
        v47 = (3 * v30 + 1) >> 1;
        v48 = 8 * v47 + 8;
        if ( 8 * v30 + 8 >= (unsigned int)v48 || v30 >= v47 )
          goto LABEL_68;
        v49 = (unsigned int *)sub_186B300(v29 - 1, v48);
        v50 = v49[1];
        v29 = v49 + 2;
        *v49 = v47;
        *(_QWORD *)(a1 + 88) = v49 + 2;
        LODWORD(v49) = v50;
        v33 = &v29[v50];
        v32 = (_DWORD)v49 + 1;
      }
      else
      {
        v31 = v30;
        v32 = v30 + 1;
        v33 = &v29[v31];
      }
    }
    else
    {
      v66 = (_QWORD *)sub_186B270(0x18u);
      v29 = v66 + 1;
      *v66 = 2;
      v32 = 1;
      *(_QWORD *)(a1 + 88) = v29;
      v33 = v29;
    }
    *v33 = 0;
    *((_DWORD *)v29 - 1) = v32;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v22 = 0;
    goto LABEL_26;
  }
  if ( v5 )
  {
    if ( v5 != 2 )
    {
      if ( v5 != 1 )
      {
LABEL_29:
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      goto LABEL_50;
    }
  }
  else if ( !*(_DWORD *)(a2 + 24) )
  {
LABEL_6:
    v7 = *(_QWORD *)(a1 + 8);
    ++*(_DWORD *)(a2 + 8);
    if ( (unsigned int)sub_C1BD80(
                         *(__int64 ***)(a1 + 144),
                         *(_QWORD *)(a2 + 16),
                         0,
                         0,
                         (__int64 *)(a1 + 480),
                         (__int64 *)(a1 + 496)) == 5 )
    {
      ++*(_DWORD *)(a2 + 8);
      v84[0] = a2;
      sub_C1B590((_QWORD *)(a1 + 56), v84);
      v83 = 0;
      sub_C1D940((_QWORD *)(a1 + 88), &v83);
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 480);
      v82 = v8;
      if ( v8 )
        ++*(_DWORD *)(v8 + 8);
      sub_C1B590((_QWORD *)(a1 + 56), &v82);
      v9 = *(_QWORD *)(a1 + 496);
      if ( v9 )
      {
        v10 = *(_QWORD **)(a1 + 88);
        ++*(_DWORD *)(v9 + 8);
        if ( v10 )
        {
          v11 = *((_DWORD *)v10 - 1);
          if ( v11 == *((_DWORD *)v10 - 2) )
          {
            v74 = (3 * v11 + 1) >> 1;
            v75 = 8 * v74 + 8;
            if ( 8 * v11 + 8 >= v75 || v11 >= v74 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_C1B180(v84, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v84);
              sub_233E40((__int64)v84);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v76 = (unsigned int *)sub_186B300(v10 - 1, v75);
            v77 = v76[1];
            v10 = v76 + 2;
            *v76 = v74;
            *(_QWORD *)(a1 + 88) = v76 + 2;
            LODWORD(v76) = v77;
            v14 = &v10[v77];
            v13 = (_DWORD)v76 + 1;
          }
          else
          {
            v12 = v11;
            v13 = v11 + 1;
            v14 = &v10[v12];
          }
        }
        else
        {
          v79 = (_QWORD *)sub_186B270(0x18u);
          *v79 = 2;
          v13 = 1;
          v10 = v79 + 1;
          *(_QWORD *)(a1 + 88) = v10;
          v14 = v10;
        }
        *v14 = v9;
        *((_DWORD *)v10 - 1) = v13;
      }
      else
      {
        v73 = sub_15DE370(*(_QWORD *)(a1 + 8));
        v81 = v73;
        if ( v73 )
          ++*(_DWORD *)(v73 + 8);
        sub_C1D940((_QWORD *)(a1 + 88), &v81);
      }
      v15 = *(_QWORD *)(a1 + 496);
      if ( v15 )
      {
        v16 = *(_QWORD *)(a1 + 504);
        v17 = (*(_DWORD *)(v15 + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v16, v15);
      }
      v18 = *(_QWORD *)(a1 + 480);
      *(_QWORD *)(a1 + 496) = 0;
      if ( v18 )
      {
        v19 = *(_QWORD *)(a1 + 488);
        v17 = (*(_DWORD *)(v18 + 8))-- == 1;
        if ( v17 )
          sub_15D7BC0(v19, v18);
      }
      *(_QWORD *)(a1 + 480) = 0;
      v20 = *(_QWORD *)(a1 + 40);
      if ( v20 )
      {
        v21 = *(_DWORD *)(v20 - 4);
        if ( v21 )
          *(_BYTE *)(v20 + 16LL * (unsigned int)(v21 - 1) + 8) |= 2u;
      }
    }
    v17 = (*(_DWORD *)(a2 + 8))-- == 1;
    if ( v17 )
      sub_15D7BC0(v7, a2);
    return 1;
  }
  v45 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
  v46 = v45;
  if ( v45 )
  {
    v84[0] = v45;
    ++*(_DWORD *)(v45 + 8);
    sub_C1B590((_QWORD *)(a1 + 56), v84);
    if ( a2 != v46 )
    {
      v57 = *(_QWORD *)(a1 + 40);
      if ( v57 )
      {
        v58 = *(_DWORD *)(v57 - 4);
        if ( v58 )
          *(_BYTE *)(v57 + 16LL * (unsigned int)(v58 - 1) + 8) |= 2u;
      }
    }
    v59 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
    v60 = v59;
    if ( v59 )
      ++*(_DWORD *)(v59 + 8);
    v61 = *(_QWORD **)(a1 + 88);
    if ( v61 )
    {
      v62 = *((_DWORD *)v61 - 1);
      if ( v62 == *((_DWORD *)v61 - 2) )
      {
        v69 = (3 * v62 + 1) >> 1;
        v70 = 8 * v69 + 8;
        if ( 8 * v62 + 8 >= v70 || v62 >= v69 )
        {
          v55 = (char **)__cxa_allocate_exception(0x28u);
          sub_C1B180(v84, "Overflow encountered when expanding vector");
LABEL_100:
          *v55 = (char *)off_1C63128;
          sub_2333C0(v55 + 1, v84);
          sub_233E40((__int64)v84);
          __cxa_throw(v55, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v71 = (unsigned int *)sub_186B300(v61 - 1, v70);
        v72 = v71[1];
        v61 = v71 + 2;
        *v71 = v69;
        *(_QWORD *)(a1 + 88) = v71 + 2;
        LODWORD(v71) = v72;
        v65 = &v61[v72];
        v64 = (_DWORD)v71 + 1;
      }
      else
      {
        v63 = v62;
        v64 = v62 + 1;
        v65 = &v61[v63];
      }
    }
    else
    {
      v78 = (_QWORD *)sub_186B270(0x18u);
      *v78 = 2;
      v64 = 1;
      v61 = v78 + 1;
      *(_QWORD *)(a1 + 88) = v61;
      v65 = v61;
    }
    *v65 = v60;
    *((_DWORD *)v61 - 1) = v64;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  v22 = 1;
LABEL_26:
  if ( v5 == 1 )
  {
LABEL_50:
    sub_C20270((_QWORD *)a1, a2);
    return 1;
  }
  if ( v5 != 2 )
  {
    if ( v5 )
      goto LABEL_29;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_6;
    v51 = 3;
    if ( a3 != 3 )
      v51 = (a3 - 1) & 3;
    v52 = *(_QWORD *)(a1 + 56);
    v36 = v51;
    if ( v52 )
      v37 = *(_DWORD *)(v52 - 4);
    else
      v37 = 0;
    v38 = *(_QWORD **)(a1 + 40);
    if ( v38 )
    {
      v39 = *((unsigned int *)v38 - 1);
      if ( (_DWORD)v39 == *((_DWORD *)v38 - 2) )
      {
        v53 = (unsigned int)(3 * v39 + 1) >> 1;
        v54 = 16 * v53 + 8;
        if ( 16 * (int)v39 + 8 >= (unsigned int)v54 || (unsigned int)v39 >= v53 )
        {
LABEL_68:
          v55 = (char **)__cxa_allocate_exception(0x28u);
          sub_C1B180(v84, "Overflow encountered when expanding vector");
          goto LABEL_100;
        }
        goto LABEL_71;
      }
      goto LABEL_46;
    }
LABEL_87:
    v68 = (_QWORD *)sub_186B270(0x28u);
    v38 = v68 + 1;
    *v68 = 2;
    *(_QWORD *)(a1 + 40) = v68 + 1;
    v40 = (__int64)(v68 + 1);
    goto LABEL_47;
  }
  v34 = 3;
  if ( a3 != 3 )
    v34 = (a3 - 1) & 3;
  v35 = *(_QWORD *)(a1 + 56);
  v36 = v34;
  if ( v35 )
    v37 = *(_DWORD *)(v35 - 4);
  else
    v37 = 0;
  v38 = *(_QWORD **)(a1 + 40);
  if ( !v38 )
    goto LABEL_87;
  v39 = *((unsigned int *)v38 - 1);
  if ( (_DWORD)v39 == *((_DWORD *)v38 - 2) )
  {
    v53 = (unsigned int)(3 * v39 + 1) >> 1;
    v54 = 16 * v53 + 8;
    if ( 16 * (int)v39 + 8 >= (unsigned int)v54 || (unsigned int)v39 >= v53 )
      goto LABEL_68;
LABEL_71:
    v56 = (unsigned int *)sub_186B300(v38 - 1, v54);
    v38 = v56 + 2;
    *(_QWORD *)(a1 + 40) = v56 + 2;
    *v56 = v53;
    v40 = (__int64)&v56[4 * v56[1] + 2];
    goto LABEL_47;
  }
LABEL_46:
  v40 = (__int64)&v38[2 * v39];
LABEL_47:
  *(_QWORD *)v40 = a2;
  *(_DWORD *)(v40 + 12) = v37;
  *(_DWORD *)(v40 + 8) = v22 | (16 * v36);
  ++*((_DWORD *)v38 - 1);
  return 0;
}

