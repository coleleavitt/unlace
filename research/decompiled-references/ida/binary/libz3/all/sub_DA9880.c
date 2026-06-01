void __fastcall sub_DA9880(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  unsigned __int64 v3; // r14
  int v4; // ebx
  _QWORD *v5; // rdx
  char v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  unsigned int v19; // ecx
  __int64 v20; // rax
  int v21; // ecx
  unsigned __int64 *v22; // rax
  char v23; // si
  unsigned int v24; // ebx
  unsigned int v25; // ecx
  size_t v26; // rsi
  unsigned int v27; // r15d
  unsigned int *v28; // rax
  unsigned int v29; // eax
  __int64 v30; // r12
  _QWORD *v31; // rdi
  __int64 v32; // rdx
  _QWORD *v33; // rdx
  unsigned int v34; // ebx
  unsigned int v35; // ecx
  __int64 v36; // rax
  int v37; // ecx
  unsigned __int64 *v38; // rax
  char v39; // si
  unsigned int v40; // ebx
  size_t v41; // rsi
  unsigned int *v42; // rax
  __int64 v43; // rax
  int v44; // ecx
  _QWORD *v45; // rax
  unsigned __int64 v46; // rcx
  __int64 *v47; // r12
  __int64 v48; // rsi
  __int64 v49; // rdi
  unsigned int v51; // ebx
  __int64 v52; // rax
  unsigned __int64 *v53; // rax
  char v54; // cl
  unsigned int v55; // ebx
  size_t v56; // rsi
  unsigned int *v57; // rax
  __int64 v58; // rax
  int v59; // ecx
  _QWORD *v60; // rax
  unsigned int v61; // r12d
  unsigned int v62; // eax
  unsigned int *v63; // rax
  __int64 v64; // rax
  int v65; // ebx
  _QWORD *v66; // rax
  _QWORD *v67; // rax
  char **exception; // rbp
  unsigned __int64 v70; // [rsp+8h] [rbp-70h]
  __int64 v71[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a2 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 8) )
  {
    v4 = *(_DWORD *)v3;
    v5 = (_QWORD *)a1[3];
    v7 = a2;
    v8 = (unsigned int)(*(_DWORD *)v3 - 0x7FFFFFFF);
    if ( v5 )
    {
      v9 = *((unsigned int *)v5 - 1);
      if ( (unsigned int)v8 < (unsigned int)v9 )
      {
        if ( v5[v8] )
          return;
        goto LABEL_5;
      }
      v24 = v4 - 2147483646;
      if ( v24 >= (unsigned int)v9 )
        goto LABEL_24;
      v46 = (unsigned __int64)&v5[v9];
      v47 = &v5[v24];
      if ( (unsigned __int64)v47 >= v46 )
      {
LABEL_59:
        *((_DWORD *)v5 - 1) = v24;
        goto LABEL_5;
      }
      do
      {
        v48 = *v47;
        if ( *v47 )
        {
          v49 = a1[2];
          if ( (*(_DWORD *)(v48 + 8))-- == 1 )
          {
            v70 = v46;
            sub_15D7BC0(v49, v48);
            v46 = v70;
          }
        }
        ++v47;
      }
      while ( (unsigned __int64)v47 < v46 );
      v5 = (_QWORD *)a1[3];
      if ( v5 )
      {
        v9 = *((unsigned int *)v5 - 1);
LABEL_24:
        if ( (unsigned int)v9 < v24 )
          goto LABEL_29;
        goto LABEL_59;
      }
    }
    else
    {
      v24 = v4 - 2147483646;
    }
    if ( v24 )
    {
      v9 = 0;
      v45 = (_QWORD *)sub_186B270(0x18u);
      v5 = v45 + 1;
      *v45 = 2;
      a1[3] = v45 + 1;
LABEL_29:
      while ( 1 )
      {
        v29 = *((_DWORD *)v5 - 2);
        if ( v29 >= v24 )
          break;
        v25 = (3 * v29 + 1) >> 1;
        v26 = 8 * v25 + 8;
        v27 = v25;
        if ( 8 * v29 + 8 >= (unsigned int)v26 || v29 >= v25 )
          goto LABEL_79;
        v28 = (unsigned int *)sub_186B300(v5 - 1, v26);
        v5 = v28 + 2;
        *v28 = v27;
        a1[3] = v28 + 2;
      }
      v30 = 8 * v9;
      *((_DWORD *)v5 - 1) = v24;
      v31 = &v5[(unsigned __int64)v30 / 8];
      v32 = 8LL * v24;
      if ( v30 != v32 )
      {
        memset(v31, 0, v32 - v30);
        if ( (_BYTE)byte_1C7EDE8 )
          goto LABEL_6;
LABEL_32:
        if ( __cxa_guard_acquire(&byte_1C7EDE8) )
        {
          qword_1C7EDF0 = 0;
          __cxa_guard_release(&byte_1C7EDE8);
        }
LABEL_6:
        if ( !(_BYTE)byte_1C7EDD8 && __cxa_guard_acquire(&byte_1C7EDD8) )
        {
          qword_1C7EDE0 = 0;
          __cxa_guard_release(&byte_1C7EDD8);
        }
        if ( !(_BYTE)byte_1C7EDC8 && __cxa_guard_acquire(&byte_1C7EDC8) )
        {
          qword_1C7EDD0 = 0;
          __cxa_guard_release(&byte_1C7EDC8);
        }
        v10 = *(_QWORD *)(v3 + 8);
        if ( v10 )
        {
          if ( (v10 & 1) != 0 )
          {
            v11 = *(_QWORD *)(v3 + 16);
            if ( (v11 & 1) != 0 )
            {
              v12 = v10 & 0xFFFFFFFFFFFFFFFELL;
              v13 = v11 & 0xFFFFFFFFFFFFFFFELL;
              v14 = *(_QWORD *)(v12 + 8);
              if ( v14 )
              {
                v15 = *(_QWORD *)(v13 + 8);
                if ( v15 )
                {
                  if ( (v14 & 0xFFFFFFFFFFFFFFFELL) == (v15 & 0xFFFFFFFFFFFFFFFELL) && (v14 & 1) != (v15 & 1)
                    || (v16 = *(_QWORD *)(v13 + 16), (v14 & 0xFFFFFFFFFFFFFFFELL) == (v16 & 0xFFFFFFFFFFFFFFFELL))
                    && (v14 & 1) != (v16 & 1)
                    || (v17 = *(_QWORD *)(v12 + 16), (v15 & 0xFFFFFFFFFFFFFFFELL) == (v17 & 0xFFFFFFFFFFFFFFFELL))
                    && (v17 & 1) != (v15 & 1)
                    || (v16 & 0xFFFFFFFFFFFFFFFELL) == (v17 & 0xFFFFFFFFFFFFFFFELL) && (v17 & 1) != (v16 & 1) )
                  {
                    v18 = (_QWORD *)a1[4];
                    if ( !v18 )
                    {
                      v66 = (_QWORD *)sub_186B270(0x28u);
                      v21 = 1;
                      v18 = v66 + 1;
                      *v66 = 2;
                      a1[4] = v66 + 1;
                      v22 = v66 + 1;
                      goto LABEL_21;
                    }
                    v19 = *((_DWORD *)v18 - 1);
                    if ( v19 != *((_DWORD *)v18 - 2) )
                    {
                      v20 = v19;
                      v21 = v19 + 1;
                      v22 = &v18[2 * v20];
LABEL_21:
                      v23 = *((_BYTE *)v22 + 8);
                      *v22 = v3;
                      *((_BYTE *)v22 + 8) = v23 & 0xF8 | 6;
                      *((_DWORD *)v18 - 1) = v21;
                      *a3 = 0;
                      return;
                    }
                    v55 = (3 * v19 + 1) >> 1;
                    v56 = 16 * v55 + 8;
                    if ( 16 * v19 + 8 < (unsigned int)v56 && v19 < v55 )
                    {
                      v57 = (unsigned int *)sub_186B300(v18 - 1, v56);
                      v18 = v57 + 2;
                      *v57 = v55;
                      v58 = v57[1];
                      a1[4] = v18;
                      v59 = v58;
                      v22 = &v18[2 * v58];
                      v21 = v59 + 1;
                      goto LABEL_21;
                    }
LABEL_79:
                    exception = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v71, "Overflow encountered when expanding vector");
                    *exception = (char *)off_1C63128;
                    sub_2333C0(exception + 1, v71);
                    sub_233E40((__int64)v71);
                    __cxa_throw(
                      exception,
                      (struct type_info *)&`typeinfo for'default_exception,
                      (void (*)(void *))sub_230E50);
                  }
                }
              }
            }
          }
        }
        v33 = (_QWORD *)a1[4];
        if ( (v7 & 1) == 0 && (v34 = *(_DWORD *)(v3 + 4), v34 == 1) )
        {
          if ( v33 )
          {
            v51 = *((_DWORD *)v33 - 1);
            if ( v51 == *((_DWORD *)v33 - 2) )
            {
              v61 = (3 * v51 + 1) >> 1;
              v62 = 16 * v61 + 8;
              if ( 16 * v51 + 8 >= v62 || v51 >= v61 )
                goto LABEL_79;
              v63 = (unsigned int *)sub_186B300(v33 - 1, v62);
              v33 = v63 + 2;
              *v63 = v61;
              v64 = v63[1];
              a1[4] = v33;
              v65 = v64;
              v53 = &v33[2 * v64];
              v34 = v65 + 1;
            }
            else
            {
              v52 = v51;
              v34 = v51 + 1;
              v53 = &v33[2 * v52];
            }
          }
          else
          {
            v67 = (_QWORD *)sub_186B270(0x28u);
            *v67 = 2;
            v33 = v67 + 1;
            a1[4] = v67 + 1;
            v53 = v67 + 1;
          }
          v54 = *((_BYTE *)v53 + 8);
          *v53 = v3;
          *((_BYTE *)v53 + 8) = v54 & 0xF8 | 5;
          *((_DWORD *)v33 - 1) = v34;
        }
        else
        {
          if ( v33 )
          {
            v35 = *((_DWORD *)v33 - 1);
            if ( v35 == *((_DWORD *)v33 - 2) )
            {
              v40 = (3 * v35 + 1) >> 1;
              v41 = 16 * v40 + 8;
              if ( 16 * v35 + 8 >= (unsigned int)v41 || v35 >= v40 )
                goto LABEL_79;
              v42 = (unsigned int *)sub_186B300(v33 - 1, v41);
              v33 = v42 + 2;
              *v42 = v40;
              v43 = v42[1];
              a1[4] = v33;
              v44 = v43;
              v38 = &v33[2 * v43];
              v37 = v44 + 1;
            }
            else
            {
              v36 = v35;
              v37 = v35 + 1;
              v38 = &v33[2 * v36];
            }
          }
          else
          {
            v60 = (_QWORD *)sub_186B270(0x28u);
            v37 = 1;
            v33 = v60 + 1;
            *v60 = 2;
            a1[4] = v60 + 1;
            v38 = v60 + 1;
          }
          v39 = *((_BYTE *)v38 + 8);
          *v38 = v3;
          *((_BYTE *)v38 + 8) = v39 & 0xF8 | 4;
          *((_DWORD *)v33 - 1) = v37;
        }
        *a3 = 0;
        return;
      }
    }
LABEL_5:
    if ( (_BYTE)byte_1C7EDE8 )
      goto LABEL_6;
    goto LABEL_32;
  }
}

