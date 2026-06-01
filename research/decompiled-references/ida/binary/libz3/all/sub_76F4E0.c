__int64 __fastcall sub_76F4E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  char i; // r14
  int v5; // eax
  __int64 v6; // r14
  bool v7; // zf
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // r12
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v15; // rcx
  __int64 v16; // r12
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  int v20; // eax
  __int64 *v21; // rcx
  __int64 v22; // rsi
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // edx
  unsigned int v28; // ebx
  _QWORD *v30; // rax
  unsigned int v31; // r13d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // r13d
  size_t v37; // rsi
  char **v38; // r12
  unsigned int *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // rcx
  int v44; // eax
  _QWORD *v45; // rcx
  _QWORD *v46; // rdx
  unsigned int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  _QWORD *v50; // rcx
  _QWORD *v51; // rax
  unsigned int v52; // r12d
  size_t v53; // rsi
  unsigned int *v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // r12d
  size_t v57; // rsi
  unsigned int *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  _QWORD *v61; // rax
  char **exception; // r12
  char **v63; // r12
  char **v64; // r12
  char **v65; // r12
  __int64 v66; // [rsp+8h] [rbp-60h]
  __int64 v67[11]; // [rsp+10h] [rbp-58h] BYREF

  v66 = *(_QWORD *)(a1 + 8);
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  v3 = a2;
  for ( i = 0; ; i = 1 )
  {
    v5 = sub_76B2E0(*(_QWORD **)(a1 + 144), *(_QWORD **)(v3 + 16), 0, nullptr, (__int64 *)(a1 + 480), (int)a1 + 496);
    if ( v5 == 4 )
    {
      v10 = *(_QWORD *)(a1 + 480);
      goto LABEL_36;
    }
    if ( v5 == 5 )
    {
      ++*(_DWORD *)(v3 + 8);
      if ( !i )
      {
        v41 = *(_QWORD **)(a1 + 56);
        if ( v41 )
        {
          v42 = *((_DWORD *)v41 - 1);
          if ( v42 == *((_DWORD *)v41 - 2) )
          {
            v56 = (3 * v42 + 1) >> 1;
            v57 = 8 * v56 + 8;
            if ( 8 * v42 + 8 >= (unsigned int)v57 || v42 >= v56 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180(v67, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v67);
              sub_233E40((__int64)v67);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v58 = (unsigned int *)sub_186B300(v41 - 1, v57);
            v59 = v58[1];
            v41 = v58 + 2;
            *v58 = v56;
            *(_QWORD *)(a1 + 56) = v58 + 2;
            LODWORD(v58) = v59;
            v45 = &v41[v59];
            v44 = (_DWORD)v58 + 1;
          }
          else
          {
            v43 = v42;
            v44 = v42 + 1;
            v45 = &v41[v43];
          }
        }
        else
        {
          v61 = (_QWORD *)sub_186B270(0x18u);
          v41 = v61 + 1;
          *v61 = 2;
          v44 = 1;
          *(_QWORD *)(a1 + 56) = v41;
          v45 = v41;
        }
        *v45 = v3;
        *((_DWORD *)v41 - 1) = v44;
        v46 = *(_QWORD **)(a1 + 88);
        if ( v46 )
        {
          v47 = *((_DWORD *)v46 - 1);
          if ( v47 == *((_DWORD *)v46 - 2) )
          {
            v52 = (3 * v47 + 1) >> 1;
            v53 = 8 * v52 + 8;
            if ( 8 * v47 + 8 >= (unsigned int)v53 || v47 >= v52 )
            {
              v63 = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180(v67, "Overflow encountered when expanding vector");
              *v63 = (char *)off_1C63128;
              sub_2333C0(v63 + 1, v67);
              sub_233E40((__int64)v67);
              __cxa_throw(v63, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v54 = (unsigned int *)sub_186B300(v46 - 1, v53);
            v55 = v54[1];
            v46 = v54 + 2;
            *v54 = v52;
            *(_QWORD *)(a1 + 88) = v54 + 2;
            LODWORD(v54) = v55;
            v50 = &v46[v55];
            v49 = (_DWORD)v54 + 1;
          }
          else
          {
            v48 = v47;
            v49 = v47 + 1;
            v50 = &v46[v48];
          }
        }
        else
        {
          v60 = (_QWORD *)sub_186B270(0x18u);
          v46 = v60 + 1;
          *v60 = 2;
          v49 = 1;
          *(_QWORD *)(a1 + 88) = v46;
          v50 = v46;
        }
        *v50 = 0;
        *((_DWORD *)v46 - 1) = v49;
        goto LABEL_31;
      }
      v8 = *(_QWORD *)(a1 + 480);
      if ( !v8 || (v9 = *(_QWORD *)(a1 + 488), v7 = *(_DWORD *)(v8 + 8) == 1, --*(_DWORD *)(v8 + 8), !v7) )
      {
        *(_QWORD *)(a1 + 480) = v3;
        v10 = v3;
        goto LABEL_15;
      }
      sub_15D7BC0(v9, v8);
      *(_QWORD *)(a1 + 480) = v3;
      v10 = v3;
LABEL_36:
      if ( !v10 )
      {
        v11 = *(_QWORD **)(a1 + 56);
        if ( v11 )
        {
LABEL_16:
          v12 = *((_DWORD *)v11 - 1);
          if ( v12 == *((_DWORD *)v11 - 2) )
          {
            v31 = (3 * v12 + 1) >> 1;
            v32 = 8 * v31 + 8;
            if ( 8 * v12 + 8 >= (unsigned int)v32 || v12 >= v31 )
            {
              v64 = (char **)__cxa_allocate_exception(0x28u);
              sub_76A180(v67, "Overflow encountered when expanding vector");
              *v64 = (char *)off_1C63128;
              sub_2333C0(v64 + 1, v67);
              sub_233E40((__int64)v67);
              __cxa_throw(v64, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v33 = (unsigned int *)sub_186B300(v11 - 1, v32);
            v34 = v33[1];
            v11 = v33 + 2;
            *v33 = v31;
            *(_QWORD *)(a1 + 56) = v33 + 2;
            LODWORD(v33) = v34;
            v15 = &v11[v34];
            v14 = (_DWORD)v33 + 1;
          }
          else
          {
            v13 = v12;
            v14 = v12 + 1;
            v15 = &v11[v13];
          }
LABEL_18:
          *v15 = v10;
          v16 = *(_QWORD *)(a1 + 496);
          *((_DWORD *)v11 - 1) = v14;
          if ( v16 )
          {
            v17 = *(_QWORD **)(a1 + 88);
            ++*(_DWORD *)(v16 + 8);
            if ( v17 )
            {
              v18 = *((_DWORD *)v17 - 1);
              if ( v18 != *((_DWORD *)v17 - 2) )
              {
LABEL_21:
                v19 = v18;
                v20 = v18 + 1;
                v21 = &v17[v19];
                goto LABEL_22;
              }
              v36 = (3 * v18 + 1) >> 1;
              v37 = 8 * v36 + 8;
              if ( 8 * v18 + 8 >= (unsigned int)v37 || v18 >= v36 )
              {
                v65 = (char **)__cxa_allocate_exception(0x28u);
                sub_76A180(v67, "Overflow encountered when expanding vector");
                *v65 = (char *)off_1C63128;
                sub_2333C0(v65 + 1, v67);
                sub_233E40((__int64)v67);
                __cxa_throw(v65, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              goto LABEL_51;
            }
          }
          else
          {
            v35 = sub_15DE370(*(_QWORD *)(a1 + 8));
            v16 = v35;
            if ( v35 )
              ++*(_DWORD *)(v35 + 8);
            v17 = *(_QWORD **)(a1 + 88);
            if ( v17 )
            {
              v18 = *((_DWORD *)v17 - 1);
              if ( v18 != *((_DWORD *)v17 - 2) )
                goto LABEL_21;
              v36 = (3 * v18 + 1) >> 1;
              v37 = 8 * v36 + 8;
              if ( 8 * v18 + 8 >= (unsigned int)v37 || v18 >= v36 )
              {
                v38 = (char **)__cxa_allocate_exception(0x28u);
                sub_76A180(v67, "Overflow encountered when expanding vector");
                *v38 = (char *)off_1C63128;
                sub_2333C0(v38 + 1, v67);
                sub_233E40((__int64)v67);
                __cxa_throw(v38, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
LABEL_51:
              v39 = (unsigned int *)sub_186B300(v17 - 1, v37);
              v40 = v39[1];
              v17 = v39 + 2;
              *(_QWORD *)(a1 + 88) = v39 + 2;
              *v39 = v36;
              LODWORD(v39) = v40;
              v21 = &v17[v40];
              v20 = (_DWORD)v39 + 1;
              goto LABEL_22;
            }
          }
          v51 = (_QWORD *)sub_186B270(0x18u);
          v17 = v51 + 1;
          *v51 = 2;
          v20 = 1;
          *(_QWORD *)(a1 + 88) = v17;
          v21 = v17;
LABEL_22:
          *v21 = v16;
          v22 = *(_QWORD *)(a1 + 496);
          *((_DWORD *)v17 - 1) = v20;
          if ( v22 )
          {
            v23 = *(_QWORD *)(a1 + 504);
            v7 = (*(_DWORD *)(v22 + 8))-- == 1;
            if ( v7 )
              sub_15D7BC0(v23, v22);
          }
          v24 = *(_QWORD *)(a1 + 480);
          *(_QWORD *)(a1 + 496) = 0;
          if ( v24 )
          {
            v25 = *(_QWORD *)(a1 + 488);
            v7 = (*(_DWORD *)(v24 + 8))-- == 1;
            if ( v7 )
              sub_15D7BC0(v25, v24);
          }
          *(_QWORD *)(a1 + 480) = 0;
          v26 = *(_QWORD *)(a1 + 40);
          if ( v26 )
          {
            v27 = *(_DWORD *)(v26 - 4);
            if ( v27 )
              *(_BYTE *)(v26 + 16LL * (unsigned int)(v27 - 1) + 8) |= 2u;
          }
LABEL_31:
          v28 = 1;
          goto LABEL_32;
        }
LABEL_38:
        v30 = (_QWORD *)sub_186B270(0x18u);
        v11 = v30 + 1;
        *v30 = 2;
        v14 = 1;
        *(_QWORD *)(a1 + 56) = v11;
        v15 = v11;
        goto LABEL_18;
      }
LABEL_15:
      v11 = *(_QWORD **)(a1 + 56);
      ++*(_DWORD *)(v10 + 8);
      if ( v11 )
        goto LABEL_16;
      goto LABEL_38;
    }
    v6 = *(_QWORD *)(a1 + 480);
    if ( *(_WORD *)(v6 + 4) || *(_DWORD *)(v6 + 24) )
      break;
    ++*(_DWORD *)(v6 + 8);
    v7 = (*(_DWORD *)(v3 + 8))-- == 1;
    if ( v7 )
      sub_15D7BC0(v66, v3);
    v3 = v6;
  }
  v28 = 0;
LABEL_32:
  v7 = (*(_DWORD *)(v3 + 8))-- == 1;
  if ( v7 )
    sub_15D7BC0(v66, v3);
  return v28;
}

