__int64 __fastcall sub_D09F90(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  int v7; // r13d
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  __int64 *v13; // rdx
  unsigned __int8 v14; // dl
  __int64 v15; // rax
  int v16; // r12d
  int v17; // r14d
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r12d
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned __int8 v27; // dl
  __int64 v28; // rax
  unsigned int v29; // r15d
  size_t v30; // rsi
  unsigned int *v31; // rax
  _QWORD *v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 *v36; // rcx
  __int64 v37; // rax
  int v38; // edx
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  unsigned int v41; // r12d
  unsigned int v42; // ecx
  unsigned int *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rdx
  char **exception; // rbp
  __int64 v47[11]; // [rsp+0h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v9 = (_QWORD *)a1[7];
    if ( v9 )
    {
      v10 = *((_DWORD *)v9 - 1);
      if ( v10 == *((_DWORD *)v9 - 2) )
      {
        v21 = (3 * v10 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v22 || v10 >= v21 )
          goto LABEL_63;
        v23 = (unsigned int *)sub_186B300(v9 - 1, v22);
        v24 = v23[1];
        v9 = v23 + 2;
        *v23 = v21;
        a1[7] = v23 + 2;
        LODWORD(v23) = v24;
        v13 = &v9[v24];
        v12 = (_DWORD)v23 + 1;
      }
      else
      {
        v11 = v10;
        v12 = v10 + 1;
        v13 = &v9[v11];
      }
    }
    else
    {
      v39 = (_QWORD *)sub_186B270(0x18u);
      v9 = v39 + 1;
      *v39 = 2;
      v12 = 1;
      a1[7] = v9;
      v13 = v9;
    }
    *v13 = a2;
    *((_DWORD *)v9 - 1) = v12;
    return 1;
  }
  v5 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v7 = 0;
  }
  else
  {
    if ( v5 )
    {
      if ( v5 != 2 )
      {
        if ( v5 != 1 )
        {
LABEL_11:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_29:
        sub_D053E0(a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      sub_D05280((__int64)a1, a2);
      return 1;
    }
    v25 = sub_1680FB0(a1[4], a2, 0);
    v26 = v25;
    if ( v25 )
    {
      v32 = (_QWORD *)a1[7];
      ++*(_DWORD *)(v25 + 8);
      if ( v32 )
      {
        v33 = *((_DWORD *)v32 - 1);
        if ( v33 == *((_DWORD *)v32 - 2) )
        {
          v41 = (3 * v33 + 1) >> 1;
          v42 = 8 * v41 + 8;
          if ( 8 * v33 + 8 >= v42 || v33 >= v41 )
            goto LABEL_63;
          v43 = (unsigned int *)sub_186B300(v32 - 1, v42);
          v44 = v43[1];
          v32 = v43 + 2;
          *v43 = v41;
          a1[7] = v43 + 2;
          LODWORD(v43) = v44;
          v36 = &v32[v44];
          v35 = (_DWORD)v43 + 1;
        }
        else
        {
          v34 = v33;
          v35 = v33 + 1;
          v36 = &v32[v34];
        }
      }
      else
      {
        v45 = (_QWORD *)sub_186B270(0x18u);
        *v45 = 2;
        v35 = 1;
        v32 = v45 + 1;
        a1[7] = v32;
        v36 = v32;
      }
      *v36 = v26;
      *((_DWORD *)v32 - 1) = v35;
      if ( a2 != v26 )
      {
        v37 = a1[5];
        if ( v37 )
        {
          v38 = *(_DWORD *)(v37 - 4);
          if ( v38 )
            *(_BYTE *)(v37 + 16LL * (unsigned int)(v38 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v7 = 1;
  }
  if ( v5 == 1 )
    goto LABEL_29;
  if ( v5 == 2 )
  {
    v14 = 3;
    if ( a3 != 3 )
      v14 = (a3 - 1) & 3;
    v15 = a1[7];
    v16 = v14;
    if ( v15 )
      v17 = *(_DWORD *)(v15 - 4);
    else
      v17 = 0;
    v18 = (_QWORD *)a1[5];
    if ( !v18 )
    {
LABEL_57:
      v40 = (_QWORD *)sub_186B270(0x28u);
      v18 = v40 + 1;
      *v40 = 2;
      a1[5] = v40 + 1;
      v20 = (__int64)(v40 + 1);
      goto LABEL_26;
    }
    v19 = *((unsigned int *)v18 - 1);
    if ( (_DWORD)v19 != *((_DWORD *)v18 - 2) )
      goto LABEL_25;
    v29 = (unsigned int)(3 * v19 + 1) >> 1;
    v30 = 16 * v29 + 8;
    if ( 16 * (int)v19 + 8 < (unsigned int)v30 && (unsigned int)v19 < v29 )
    {
LABEL_47:
      v31 = (unsigned int *)sub_186B300(v18 - 1, v30);
      v18 = v31 + 2;
      a1[5] = v31 + 2;
      *v31 = v29;
      v20 = (__int64)&v31[4 * v31[1] + 2];
      goto LABEL_26;
    }
LABEL_63:
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_D03640(v47, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v47);
    sub_233E40((__int64)v47);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  if ( v5 )
    goto LABEL_11;
  if ( !*(_DWORD *)(a2 + 24) )
    goto LABEL_6;
  v27 = 3;
  if ( a3 != 3 )
    v27 = (a3 - 1) & 3;
  v28 = a1[7];
  v16 = v27;
  if ( v28 )
    v17 = *(_DWORD *)(v28 - 4);
  else
    v17 = 0;
  v18 = (_QWORD *)a1[5];
  if ( !v18 )
    goto LABEL_57;
  v19 = *((unsigned int *)v18 - 1);
  if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
  {
    v29 = (unsigned int)(3 * v19 + 1) >> 1;
    v30 = 16 * v29 + 8;
    if ( 16 * (int)v19 + 8 >= (unsigned int)v30 || (unsigned int)v19 >= v29 )
      goto LABEL_63;
    goto LABEL_47;
  }
LABEL_25:
  v20 = (__int64)&v18[2 * v19];
LABEL_26:
  *(_QWORD *)v20 = a2;
  *(_DWORD *)(v20 + 12) = v17;
  *(_DWORD *)(v20 + 8) = v7 | (16 * v16);
  ++*((_DWORD *)v18 - 1);
  return 0;
}

