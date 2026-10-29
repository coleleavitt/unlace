__int64 __fastcall sub_91BAB0(__int64 *a1, unsigned int *a2)
{
  __int64 result; // rax
  unsigned int v5; // r12d
  _QWORD *v6; // r8
  __int64 v7; // r15
  __int64 v8; // rax
  unsigned int **v9; // rax
  unsigned int **v10; // r15
  int *v11; // r13
  int v12; // eax
  int v13; // r14d
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int **v18; // rcx
  __int64 v19; // rdi
  unsigned int *v20; // r12
  __int64 v21; // r13
  unsigned int v22; // ebp
  unsigned int v23; // edx
  size_t v24; // rsi
  unsigned int v25; // r14d
  unsigned int *v26; // rax
  unsigned int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rax
  _QWORD *v30; // rax
  unsigned int v31; // ebp
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  unsigned int v36; // r13d
  _QWORD *v37; // rax
  unsigned int v38; // edx
  size_t v39; // rsi
  unsigned int v40; // r14d
  unsigned int *v41; // rax
  unsigned int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rax
  _QWORD *v45; // rdx
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  unsigned int **v49; // rcx
  __int64 v50; // rdi
  unsigned int v51; // r12d
  unsigned int v52; // ecx
  unsigned int *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rdx
  char **exception; // rbp
  unsigned int v57; // [rsp+8h] [rbp-80h]
  unsigned int v58; // [rsp+8h] [rbp-80h]
  _QWORD *v59; // [rsp+8h] [rbp-80h]
  unsigned int v60; // [rsp+14h] [rbp-74h]
  __int64 v61; // [rsp+18h] [rbp-70h]
  __int64 v62[11]; // [rsp+30h] [rbp-58h] BYREF

  result = sub_8E7030(a1[1]);
  if ( !(_DWORD)result )
    return result;
  v5 = *a2;
  v6 = (_QWORD *)a1[5];
  v7 = *a2 >> 5;
  if ( !v6 )
  {
    v8 = *(_QWORD *)(a1[1] + 8656);
    if ( !v8 || v5 >= *(_DWORD *)(v8 - 4) )
      goto LABEL_35;
    goto LABEL_6;
  }
  if ( (unsigned int)v7 < *((_DWORD *)v6 - 1) )
  {
    result = *((_DWORD *)v6 + (unsigned int)v7) & (unsigned int)(1 << v5);
    if ( (*((_DWORD *)v6 + (unsigned int)v7) & (1 << v5)) != 0 )
      return result;
  }
  v8 = *(_QWORD *)(a1[1] + 8656);
  if ( v8 && v5 < *(_DWORD *)(v8 - 4) )
  {
LABEL_6:
    v9 = *(unsigned int ***)(v8 + 8LL * v5);
    v61 = (__int64)v9;
    if ( v9 )
    {
      v10 = v9;
      while ( 1 )
      {
        v20 = *v10;
        v60 = **v10;
        v21 = v60 >> 5;
        if ( v6 )
        {
          v57 = *((_DWORD *)v6 - 1);
          if ( (unsigned int)v21 >= v57 )
          {
            v22 = v21 + 1;
            goto LABEL_21;
          }
          v11 = (int *)v6 + v21;
          v12 = *v11;
          v13 = 1 << v60;
          if ( ((1 << v60) & *v11) != 0 )
            goto LABEL_13;
        }
        else
        {
          v22 = v21 + 1;
          v30 = (_QWORD *)sub_186B270(0x10u);
          v57 = 0;
          v6 = v30 + 1;
          *v30 = 2;
          a1[5] = (__int64)(v30 + 1);
LABEL_21:
          while ( 1 )
          {
            v27 = *((_DWORD *)v6 - 2);
            if ( v27 >= v22 )
              break;
            v23 = (3 * v27 + 1) >> 1;
            v24 = 4 * v23 + 8;
            v25 = v23;
            if ( 4 * v27 + 8 >= (unsigned int)v24 || v27 >= v23 )
              goto LABEL_53;
            v26 = (unsigned int *)sub_186B300(v6 - 1, v24);
            v6 = v26 + 2;
            *v26 = v25;
            a1[5] = (__int64)(v26 + 2);
          }
          *((_DWORD *)v6 - 1) = v22;
          v28 = 4LL * v22;
          v11 = (int *)v6 + v21;
          v29 = 4LL * v57;
          v13 = 1 << v60;
          if ( v29 != v28 )
            memset((char *)v6 + v29, 0, v28 - v29);
          v12 = *v11;
        }
        v14 = (_QWORD *)a1[4];
        *v11 = v12 | v13;
        ++v20[2];
        if ( v14 )
        {
          v15 = *((_DWORD *)v14 - 1);
          if ( v15 == *((_DWORD *)v14 - 2) )
          {
            v31 = (3 * v15 + 1) >> 1;
            v32 = 8 * v31 + 8;
            if ( 8 * v15 + 8 >= (unsigned int)v32 || v15 >= v31 )
              goto LABEL_53;
            v33 = (unsigned int *)sub_186B300(v14 - 1, v32);
            v34 = v33[1];
            v14 = v33 + 2;
            *v33 = v31;
            a1[4] = (__int64)(v33 + 2);
            LODWORD(v33) = v34;
            v18 = (unsigned int **)&v14[v34];
            v17 = (_DWORD)v33 + 1;
          }
          else
          {
            v16 = v15;
            v17 = v15 + 1;
            v18 = (unsigned int **)&v14[v16];
          }
        }
        else
        {
          v35 = (_QWORD *)sub_186B270(0x18u);
          v14 = v35 + 1;
          *v35 = 2;
          v17 = 1;
          a1[4] = (__int64)v14;
          v18 = (unsigned int **)v14;
        }
        *v18 = v20;
        v19 = a1[1];
        *((_DWORD *)v14 - 1) = v17;
        sub_8FA910(v19, v20);
LABEL_13:
        v10 = (unsigned int **)v10[2];
        result = v61;
        if ( v10 == (unsigned int **)v61 )
          return result;
        v6 = (_QWORD *)a1[5];
      }
    }
    if ( v6 )
      goto LABEL_47;
LABEL_35:
    v36 = v7 + 1;
    v37 = (_QWORD *)sub_186B270(0x10u);
    v58 = 0;
    v6 = v37 + 1;
    *v37 = 2;
    a1[5] = (__int64)(v37 + 1);
    goto LABEL_39;
  }
LABEL_47:
  v36 = v7 + 1;
  v58 = *((_DWORD *)v6 - 1);
  if ( (unsigned int)v7 >= v58 )
  {
LABEL_39:
    while ( 1 )
    {
      v42 = *((_DWORD *)v6 - 2);
      if ( v42 >= v36 )
        break;
      v38 = (3 * v42 + 1) >> 1;
      v39 = 4 * v38 + 8;
      v40 = v38;
      if ( 4 * v42 + 8 >= (unsigned int)v39 || v42 >= v38 )
        goto LABEL_53;
      v41 = (unsigned int *)sub_186B300(v6 - 1, v39);
      v6 = v41 + 2;
      *v41 = v40;
      a1[5] = (__int64)(v41 + 2);
    }
    *((_DWORD *)v6 - 1) = v36;
    v43 = 4LL * v36;
    v44 = 4LL * v58;
    if ( v44 != v43 )
    {
      v59 = v6;
      memset((char *)v6 + v44, 0, v43 - v44);
      v6 = v59;
    }
  }
  v45 = (_QWORD *)a1[4];
  *((_DWORD *)v6 + v7) |= 1 << v5;
  ++a2[2];
  if ( v45 )
  {
    v46 = *((_DWORD *)v45 - 1);
    if ( v46 == *((_DWORD *)v45 - 2) )
    {
      v51 = (3 * v46 + 1) >> 1;
      v52 = 8 * v51 + 8;
      if ( 8 * v46 + 8 >= v52 || v46 >= v51 )
      {
LABEL_53:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v62, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v62);
        sub_233E40((__int64)v62);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v53 = (unsigned int *)sub_186B300(v45 - 1, v52);
      v54 = v53[1];
      v45 = v53 + 2;
      *v53 = v51;
      a1[4] = (__int64)(v53 + 2);
      LODWORD(v53) = v54;
      v49 = (unsigned int **)&v45[v54];
      v48 = (_DWORD)v53 + 1;
    }
    else
    {
      v47 = v46;
      v48 = v46 + 1;
      v49 = (unsigned int **)&v45[v47];
    }
  }
  else
  {
    v55 = (_QWORD *)sub_186B270(0x18u);
    *v55 = 2;
    v48 = 1;
    v45 = v55 + 1;
    a1[4] = (__int64)v45;
    v49 = (unsigned int **)v45;
  }
  *v49 = a2;
  v50 = a1[1];
  *((_DWORD *)v45 - 1) = v48;
  return sub_8FA910(v50, a2);
}

