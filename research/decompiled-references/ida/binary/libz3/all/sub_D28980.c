__int64 __fastcall sub_D28980(__int64 a1, __int64 a2, int a3)
{
  char **v3; // rbx
  char **v4; // rbx
  char **v5; // rbx
  char **exception; // rbx
  char **v7; // rbx
  __int16 v10; // ax
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // rax
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
  unsigned int *v55; // rax
  __int64 v56; // rax
  int v57; // edx
  __int64 v58; // rax
  __int64 v59; // rbx
  _QWORD *v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // rcx
  int v63; // eax
  __int64 *v64; // rcx
  _QWORD *v65; // rax
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  unsigned int v68; // r13d
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rcx
  __int64 v72; // rax
  _QWORD *v73; // rdx
  __int64 v74; // [rsp+0h] [rbp-78h] BYREF
  __int64 v75; // [rsp+8h] [rbp-70h] BYREF
  __int64 v76; // [rsp+10h] [rbp-68h] BYREF
  __int64 v77; // [rsp+18h] [rbp-60h] BYREF
  __int64 v78[11]; // [rsp+20h] [rbp-58h] BYREF

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
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_D240F0(v78, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v78);
          sub_233E40((__int64)v78);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
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
      v66 = (_QWORD *)sub_186B270(0x18u);
      v24 = v66 + 1;
      *v66 = 2;
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
        {
          v4 = (char **)__cxa_allocate_exception(0x28u);
          sub_D240F0(v78, "Overflow encountered when expanding vector");
          *v4 = (char *)off_1C63128;
          sub_2333C0(v4 + 1, v78);
          sub_233E40((__int64)v78);
          __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
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
      v65 = (_QWORD *)sub_186B270(0x18u);
      v29 = v65 + 1;
      *v65 = 2;
      v32 = 1;
      *(_QWORD *)(a1 + 88) = v29;
      v33 = v29;
    }
    *v33 = 0;
    *((_DWORD *)v29 - 1) = v32;
    return 1;
  }
  v10 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v22 = 0;
  }
  else
  {
    if ( v10 )
    {
      if ( v10 != 2 )
      {
        if ( v10 != 1 )
        {
LABEL_23:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_44:
        sub_D28610((_QWORD *)a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v12 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a2 + 8);
      if ( (unsigned int)sub_D258C0(
                           *(_QWORD **)(a1 + 144),
                           *(_QWORD *)(a2 + 16),
                           (__int64 *)(a1 + 480),
                           (__int64 *)(a1 + 496)) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v78[0] = a2;
        sub_D270D0((_QWORD *)(a1 + 56), v78);
        v77 = 0;
        sub_D263C0((_QWORD *)(a1 + 88), &v77);
      }
      else
      {
        v13 = *(_QWORD *)(a1 + 480);
        v76 = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        sub_D270D0((_QWORD *)(a1 + 56), &v76);
        v14 = *(_QWORD *)(a1 + 496);
        if ( v14 )
        {
          ++*(_DWORD *)(v14 + 8);
          v75 = v14;
          sub_D263C0((_QWORD *)(a1 + 88), &v75);
        }
        else
        {
          v72 = sub_15DE370(*(_QWORD *)(a1 + 8));
          v74 = v72;
          if ( v72 )
            ++*(_DWORD *)(v72 + 8);
          sub_D263C0((_QWORD *)(a1 + 88), &v74);
        }
        v15 = *(_QWORD *)(a1 + 496);
        if ( v15 )
        {
          v16 = *(_QWORD *)(a1 + 504);
          v17 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v17 )
            sub_15D7BC0(v16, v15);
        }
        v18 = *(_QWORD *)(a1 + 488);
        v19 = *(_QWORD *)(a1 + 480);
        *(_QWORD *)(a1 + 496) = 0;
        sub_D240D0(v19, v18);
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
        sub_15D7BC0(v12, a2);
      return 1;
    }
    v45 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v46 = v45;
    if ( v45 )
    {
      v78[0] = v45;
      ++*(_DWORD *)(v45 + 8);
      sub_D270D0((_QWORD *)(a1 + 56), v78);
      if ( a2 != v46 )
      {
        v56 = *(_QWORD *)(a1 + 40);
        if ( v56 )
        {
          v57 = *(_DWORD *)(v56 - 4);
          if ( v57 )
            *(_BYTE *)(v56 + 16LL * (unsigned int)(v57 - 1) + 8) |= 2u;
        }
      }
      v58 = sub_1680FB0(*(_QWORD *)(a1 + 72), a2, 0);
      v59 = v58;
      if ( v58 )
        ++*(_DWORD *)(v58 + 8);
      v60 = *(_QWORD **)(a1 + 88);
      if ( v60 )
      {
        v61 = *((_DWORD *)v60 - 1);
        if ( v61 == *((_DWORD *)v60 - 2) )
        {
          v68 = (3 * v61 + 1) >> 1;
          v69 = 8 * v68 + 8;
          if ( 8 * v61 + 8 >= (unsigned int)v69 || v61 >= v68 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_D240F0(v78, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v78);
            sub_233E40((__int64)v78);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v70 = (unsigned int *)sub_186B300(v60 - 1, v69);
          v71 = v70[1];
          v60 = v70 + 2;
          *v70 = v68;
          *(_QWORD *)(a1 + 88) = v70 + 2;
          LODWORD(v70) = v71;
          v64 = &v60[v71];
          v63 = (_DWORD)v70 + 1;
        }
        else
        {
          v62 = v61;
          v63 = v61 + 1;
          v64 = &v60[v62];
        }
      }
      else
      {
        v73 = (_QWORD *)sub_186B270(0x18u);
        *v73 = 2;
        v63 = 1;
        v60 = v73 + 1;
        *(_QWORD *)(a1 + 88) = v60;
        v64 = v60;
      }
      *v64 = v59;
      *((_DWORD *)v60 - 1) = v63;
      return 1;
    }
    v10 = *(_WORD *)(a2 + 4);
    v22 = 1;
  }
  if ( v10 == 1 )
    goto LABEL_44;
  if ( v10 != 2 )
  {
    if ( v10 )
      goto LABEL_23;
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
          v7 = (char **)__cxa_allocate_exception(0x28u);
          sub_D240F0(v78, "Overflow encountered when expanding vector");
          *v7 = (char *)off_1C63128;
          sub_2333C0(v7 + 1, v78);
          sub_233E40((__int64)v78);
          __cxa_throw(v7, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_65:
        v55 = (unsigned int *)sub_186B300(v38 - 1, v54);
        v38 = v55 + 2;
        *(_QWORD *)(a1 + 40) = v55 + 2;
        *v55 = v53;
        v40 = (__int64)&v55[4 * v55[1] + 2];
        goto LABEL_41;
      }
      goto LABEL_40;
    }
LABEL_81:
    v67 = (_QWORD *)sub_186B270(0x28u);
    v38 = v67 + 1;
    *v67 = 2;
    *(_QWORD *)(a1 + 40) = v67 + 1;
    v40 = (__int64)(v67 + 1);
    goto LABEL_41;
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
    goto LABEL_81;
  v39 = *((unsigned int *)v38 - 1);
  if ( (_DWORD)v39 == *((_DWORD *)v38 - 2) )
  {
    v53 = (unsigned int)(3 * v39 + 1) >> 1;
    v54 = 16 * v53 + 8;
    if ( 16 * (int)v39 + 8 >= (unsigned int)v54 || (unsigned int)v39 >= v53 )
    {
      v5 = (char **)__cxa_allocate_exception(0x28u);
      sub_D240F0(v78, "Overflow encountered when expanding vector");
      *v5 = (char *)off_1C63128;
      sub_2333C0(v5 + 1, v78);
      sub_233E40((__int64)v78);
      __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_65;
  }
LABEL_40:
  v40 = (__int64)&v38[2 * v39];
LABEL_41:
  *(_QWORD *)v40 = a2;
  *(_DWORD *)(v40 + 12) = v37;
  *(_DWORD *)(v40 + 8) = v22 | (16 * v36);
  ++*((_DWORD *)v38 - 1);
  return 0;
}

