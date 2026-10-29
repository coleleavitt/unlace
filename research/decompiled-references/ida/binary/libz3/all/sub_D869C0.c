__int64 __fastcall sub_D869C0(__int64 a1, __int64 a2, int a3)
{
  __int16 v6; // ax
  int v7; // r13d
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 *v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // edx
  __int16 v17; // ax
  unsigned int v18; // r14d
  unsigned __int8 v19; // dl
  __int64 v20; // rax
  int v21; // r12d
  int v22; // r14d
  _QWORD *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rdx
  int v30; // eax
  __int64 *v31; // rdx
  unsigned int v32; // r12d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rdx
  unsigned __int8 v36; // dl
  __int64 v37; // rax
  unsigned int v38; // r15d
  size_t v39; // rsi
  unsigned int *v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // r12
  int v43; // eax
  _QWORD *v44; // rdx
  __int64 v45; // r13
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  _QWORD *v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rdi
  bool v52; // zf
  __int64 v53; // rax
  int v54; // edx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  unsigned int v57; // r12d
  unsigned int v58; // ecx
  unsigned int *v59; // rax
  __int64 v60; // rcx
  unsigned int v61; // r14d
  unsigned int v62; // ecx
  unsigned int *v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rdx
  unsigned int v66; // r13d
  unsigned int v67; // eax
  unsigned int *v68; // rax
  _QWORD *v69; // rax
  char **v70; // r13
  char **v71; // r13
  char **exception; // rbx
  __int64 v73[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v27 = *(_QWORD **)(a1 + 56);
    if ( v27 )
    {
      v28 = *((_DWORD *)v27 - 1);
      if ( v28 == *((_DWORD *)v27 - 2) )
      {
        v32 = (3 * v28 + 1) >> 1;
        v33 = 8 * v32 + 8;
        if ( 8 * v28 + 8 >= (unsigned int)v33 || v28 >= v32 )
          goto LABEL_87;
        v34 = (unsigned int *)sub_186B300(v27 - 1, v33);
        v35 = v34[1];
        v27 = v34 + 2;
        *v34 = v32;
        *(_QWORD *)(a1 + 56) = v34 + 2;
        LODWORD(v34) = v35;
        v31 = &v27[v35];
        v30 = (_DWORD)v34 + 1;
      }
      else
      {
        v29 = v28;
        v30 = v28 + 1;
        v31 = &v27[v29];
      }
    }
    else
    {
      v55 = (_QWORD *)sub_186B270(0x18u);
      v27 = v55 + 1;
      *v55 = 2;
      v30 = 1;
      *(_QWORD *)(a1 + 56) = v27;
      v31 = v27;
    }
    *v31 = a2;
    *((_DWORD *)v27 - 1) = v30;
    return 1;
  }
  if ( *(_DWORD *)(a2 + 8) > 1u && a2 != *(_QWORD *)(a1 + 120) )
  {
    v6 = *(_WORD *)(a2 + 4);
    if ( v6 )
    {
      if ( v6 == 2 )
        goto LABEL_6;
    }
    else if ( *(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v7 = 1;
      v8 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
      v9 = v8;
      if ( v8 )
      {
        v10 = *(__int64 **)(a1 + 56);
        ++*(_DWORD *)(v8 + 8);
        if ( !v10 )
        {
          v41 = (_QWORD *)sub_186B270(0x18u);
          *v41 = 2;
          v13 = 1;
          v10 = v41 + 1;
          *(_QWORD *)(a1 + 56) = v10;
          v14 = v10;
          goto LABEL_10;
        }
        v11 = *((_DWORD *)v10 - 1);
        if ( v11 != *((_DWORD *)v10 - 2) )
        {
          v12 = v11;
          v13 = v11 + 1;
          v14 = &v10[v12];
LABEL_10:
          *v14 = v9;
          *((_DWORD *)v10 - 1) = v13;
          if ( a2 != v9 )
          {
            v15 = *(_QWORD *)(a1 + 40);
            if ( v15 )
            {
              v16 = *(_DWORD *)(v15 - 4);
              if ( v16 )
                *(_BYTE *)(v15 + 16LL * (unsigned int)(v16 - 1) + 8) |= 2u;
            }
          }
          return 1;
        }
        v57 = (3 * v11 + 1) >> 1;
        v58 = 8 * v57 + 8;
        if ( 8 * v11 + 8 < v58 && v11 < v57 )
        {
          v59 = (unsigned int *)sub_186B300(v10 - 1, v58);
          v60 = v59[1];
          v10 = (__int64 *)(v59 + 2);
          *v59 = v57;
          *(_QWORD *)(a1 + 56) = v59 + 2;
          LODWORD(v59) = v60;
          v14 = &v10[v60];
          v13 = (_DWORD)v59 + 1;
          goto LABEL_10;
        }
LABEL_87:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v73, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v73);
        sub_233E40((__int64)v73);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      goto LABEL_16;
    }
  }
  v7 = 0;
LABEL_16:
  sub_D83200(*(__int64 **)(a1 + 144), a2);
  v17 = *(_WORD *)(a2 + 4);
  if ( v17 != 1 )
  {
    if ( v17 == 2 )
    {
      v36 = 3;
      if ( a3 != 3 )
        v36 = (a3 - 1) & 3;
      v37 = *(_QWORD *)(a1 + 56);
      v21 = v36;
      if ( v37 )
        v22 = *(_DWORD *)(v37 - 4);
      else
        v22 = 0;
      v23 = *(_QWORD **)(a1 + 40);
      if ( v23 )
      {
        v24 = *((unsigned int *)v23 - 1);
        if ( (_DWORD)v24 != *((_DWORD *)v23 - 2) )
          goto LABEL_26;
        v38 = (unsigned int)(3 * v24 + 1) >> 1;
        v39 = 16 * v38 + 8;
        if ( 16 * (int)v24 + 8 >= (unsigned int)v39 || (unsigned int)v24 >= v38 )
          goto LABEL_87;
        goto LABEL_48;
      }
    }
    else
    {
      if ( v17 )
      {
        sub_1872CE0("");
        sub_1873130(114, 226);
      }
      v18 = *(_DWORD *)(a2 + 24);
      if ( !v18 )
      {
        v42 = *(_QWORD *)(a1 + 8);
        ++*(_DWORD *)(a2 + 8);
        v43 = sub_D82390(*(_QWORD *)(a1 + 144), *(_QWORD *)(a2 + 16), 0, 0, a1 + 480, a1 + 496);
        v44 = *(_QWORD **)(a1 + 56);
        if ( v43 == 5 )
        {
          ++*(_DWORD *)(a2 + 8);
          if ( v44 )
          {
            v18 = *((_DWORD *)v44 - 1);
            if ( v18 == *((_DWORD *)v44 - 2) )
            {
              v66 = (3 * v18 + 1) >> 1;
              v67 = 8 * v66 + 8;
              if ( 8 * v18 + 8 >= v67 || v18 >= v66 )
              {
                v70 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v73, "Overflow encountered when expanding vector");
                *v70 = (char *)off_1C63128;
                sub_2333C0(v70 + 1, v73);
                sub_233E40((__int64)v73);
                __cxa_throw(v70, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v68 = (unsigned int *)sub_186B300(v44 - 1, v67);
              v44 = v68 + 2;
              *v68 = v66;
              v18 = v68[1];
              *(_QWORD *)(a1 + 56) = v68 + 2;
            }
          }
          else
          {
            v69 = (_QWORD *)sub_186B270(0x18u);
            *v69 = 2;
            v44 = v69 + 1;
            *(_QWORD *)(a1 + 56) = v69 + 1;
          }
          v44[v18] = a2;
          *((_DWORD *)v44 - 1) = v18 + 1;
        }
        else
        {
          v45 = *(_QWORD *)(a1 + 480);
          if ( v45 )
            ++*(_DWORD *)(v45 + 8);
          if ( v44 )
          {
            v46 = *((_DWORD *)v44 - 1);
            if ( v46 == *((_DWORD *)v44 - 2) )
            {
              v61 = (3 * v46 + 1) >> 1;
              v62 = 8 * v61 + 8;
              if ( 8 * v46 + 8 >= v62 || v46 >= v61 )
              {
                v71 = (char **)__cxa_allocate_exception(0x28u);
                sub_24ABB0(v73, "Overflow encountered when expanding vector");
                *v71 = (char *)off_1C63128;
                sub_2333C0(v71 + 1, v73);
                sub_233E40((__int64)v73);
                __cxa_throw(v71, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
              }
              v63 = (unsigned int *)sub_186B300(v44 - 1, v62);
              v64 = v63[1];
              v44 = v63 + 2;
              *v63 = v61;
              *(_QWORD *)(a1 + 56) = v63 + 2;
              LODWORD(v63) = v64;
              v49 = &v44[v64];
              v48 = (_DWORD)v63 + 1;
            }
            else
            {
              v47 = v46;
              v48 = v46 + 1;
              v49 = &v44[v47];
            }
          }
          else
          {
            v65 = (_QWORD *)sub_186B270(0x18u);
            *v65 = 2;
            v48 = 1;
            v44 = v65 + 1;
            *(_QWORD *)(a1 + 56) = v44;
            v49 = v44;
          }
          *v49 = v45;
          v50 = *(_QWORD *)(a1 + 480);
          *((_DWORD *)v44 - 1) = v48;
          if ( v50 )
          {
            v51 = *(_QWORD *)(a1 + 488);
            v52 = (*(_DWORD *)(v50 + 8))-- == 1;
            if ( v52 )
              sub_15D7BC0(v51, v50);
          }
          *(_QWORD *)(a1 + 480) = 0;
          v53 = *(_QWORD *)(a1 + 40);
          if ( v53 )
          {
            v54 = *(_DWORD *)(v53 - 4);
            if ( v54 )
              *(_BYTE *)(v53 + 16LL * (unsigned int)(v54 - 1) + 8) |= 2u;
          }
        }
        v52 = (*(_DWORD *)(a2 + 8))-- == 1;
        if ( v52 )
          sub_15D7BC0(v42, a2);
        return 1;
      }
      v19 = 3;
      if ( a3 != 3 )
        v19 = (a3 - 1) & 3;
      v20 = *(_QWORD *)(a1 + 56);
      v21 = v19;
      if ( v20 )
        v22 = *(_DWORD *)(v20 - 4);
      else
        v22 = 0;
      v23 = *(_QWORD **)(a1 + 40);
      if ( v23 )
      {
        v24 = *((unsigned int *)v23 - 1);
        if ( (_DWORD)v24 != *((_DWORD *)v23 - 2) )
        {
LABEL_26:
          v25 = (__int64)&v23[2 * v24];
LABEL_27:
          *(_QWORD *)v25 = a2;
          *(_DWORD *)(v25 + 12) = v22;
          *(_DWORD *)(v25 + 8) = v7 | (16 * v21);
          ++*((_DWORD *)v23 - 1);
          return 0;
        }
        v38 = (unsigned int)(3 * v24 + 1) >> 1;
        v39 = 16 * v38 + 8;
        if ( 16 * (int)v24 + 8 >= (unsigned int)v39 || (unsigned int)v24 >= v38 )
          goto LABEL_87;
LABEL_48:
        v40 = (unsigned int *)sub_186B300(v23 - 1, v39);
        v23 = v40 + 2;
        *(_QWORD *)(a1 + 40) = v40 + 2;
        *v40 = v38;
        v25 = (__int64)&v40[4 * v40[1] + 2];
        goto LABEL_27;
      }
    }
    v56 = (_QWORD *)sub_186B270(0x28u);
    v23 = v56 + 1;
    *v56 = 2;
    *(_QWORD *)(a1 + 40) = v56 + 1;
    v25 = (__int64)(v56 + 1);
    goto LABEL_27;
  }
  sub_D86320(a1, a2);
  return 1;
}

