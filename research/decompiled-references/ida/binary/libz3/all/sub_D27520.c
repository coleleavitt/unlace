__int64 __fastcall sub_D27520(__int64 a1, __int64 a2, int a3)
{
  char **v3; // rbp
  char **v4; // rbp
  char **exception; // rbp
  __int16 v8; // ax
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  bool v14; // zf
  __int64 v15; // rax
  int v16; // edx
  int v17; // r13d
  _QWORD *v19; // rdi
  unsigned int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 *v23; // rdx
  unsigned __int8 v24; // dl
  __int64 v25; // rax
  int v26; // r12d
  int v27; // r14d
  _QWORD *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // r12d
  size_t v32; // rsi
  unsigned int *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // r13
  unsigned __int8 v37; // dl
  __int64 v38; // rax
  unsigned int v39; // r15d
  size_t v40; // rsi
  unsigned int *v41; // rax
  __int64 v42; // rax
  int v43; // edx
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // [rsp+8h] [rbp-60h] BYREF
  __int64 v47[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    v19 = *(_QWORD **)(a1 + 56);
    if ( v19 )
    {
      v20 = *((_DWORD *)v19 - 1);
      if ( v20 == *((_DWORD *)v19 - 2) )
      {
        v31 = (3 * v20 + 1) >> 1;
        v32 = 8 * v31 + 8;
        if ( 8 * v20 + 8 >= (unsigned int)v32 || v20 >= v31 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_D240F0(v47, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v33 = (unsigned int *)sub_186B300(v19 - 1, v32);
        v34 = v33[1];
        v19 = v33 + 2;
        *v33 = v31;
        *(_QWORD *)(a1 + 56) = v33 + 2;
        LODWORD(v33) = v34;
        v23 = &v19[v34];
        v22 = (_DWORD)v33 + 1;
      }
      else
      {
        v21 = v20;
        v22 = v20 + 1;
        v23 = &v19[v21];
      }
    }
    else
    {
      v44 = (_QWORD *)sub_186B270(0x18u);
      v19 = v44 + 1;
      *v44 = 2;
      v22 = 1;
      *(_QWORD *)(a1 + 56) = v19;
      v23 = v19;
    }
    *v23 = a2;
    *((_DWORD *)v19 - 1) = v22;
    return 1;
  }
  v8 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v17 = 0;
  }
  else
  {
    if ( v8 )
    {
      if ( v8 != 2 )
      {
        if ( v8 != 1 )
        {
LABEL_21:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_39:
        sub_D27260((_QWORD *)a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v10 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a2 + 8);
      if ( (unsigned int)sub_D258C0(
                           *(_QWORD **)(a1 + 144),
                           *(_QWORD *)(a2 + 16),
                           (__int64 *)(a1 + 480),
                           (__int64 *)(a1 + 496)) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v47[0] = a2;
        sub_D270D0((_QWORD *)(a1 + 56), v47);
      }
      else
      {
        v11 = *(_QWORD *)(a1 + 480);
        v46 = v11;
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        sub_D270D0((_QWORD *)(a1 + 56), &v46);
        v12 = *(_QWORD *)(a1 + 480);
        if ( v12 )
        {
          v13 = *(_QWORD *)(a1 + 488);
          v14 = (*(_DWORD *)(v12 + 8))-- == 1;
          if ( v14 )
            sub_15D7BC0(v13, v12);
        }
        *(_QWORD *)(a1 + 480) = 0;
        v15 = *(_QWORD *)(a1 + 40);
        if ( v15 )
        {
          v16 = *(_DWORD *)(v15 - 4);
          if ( v16 )
            *(_BYTE *)(v15 + 16LL * (unsigned int)(v16 - 1) + 8) |= 2u;
        }
      }
      v14 = (*(_DWORD *)(a2 + 8))-- == 1;
      if ( v14 )
        sub_15D7BC0(v10, a2);
      return 1;
    }
    v35 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v36 = v35;
    if ( v35 )
    {
      v47[0] = v35;
      ++*(_DWORD *)(v35 + 8);
      sub_D270D0((_QWORD *)(a1 + 56), v47);
      if ( a2 != v36 )
      {
        v42 = *(_QWORD *)(a1 + 40);
        if ( v42 )
        {
          v43 = *(_DWORD *)(v42 - 4);
          if ( v43 )
            *(_BYTE *)(v42 + 16LL * (unsigned int)(v43 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v8 = *(_WORD *)(a2 + 4);
    v17 = 1;
  }
  if ( v8 == 1 )
    goto LABEL_39;
  if ( v8 != 2 )
  {
    if ( v8 )
      goto LABEL_21;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_6;
    v37 = 3;
    if ( a3 != 3 )
      v37 = (a3 - 1) & 3;
    v38 = *(_QWORD *)(a1 + 56);
    v26 = v37;
    if ( v38 )
      v27 = *(_DWORD *)(v38 - 4);
    else
      v27 = 0;
    v28 = *(_QWORD **)(a1 + 40);
    if ( v28 )
    {
      v29 = *((unsigned int *)v28 - 1);
      if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
      {
        v39 = (unsigned int)(3 * v29 + 1) >> 1;
        v40 = 16 * v39 + 8;
        if ( 16 * (int)v29 + 8 >= (unsigned int)v40 || (unsigned int)v29 >= v39 )
        {
          v3 = (char **)__cxa_allocate_exception(0x28u);
          sub_D240F0(v47, "Overflow encountered when expanding vector");
          *v3 = (char *)off_1C63128;
          sub_2333C0(v3 + 1, v47);
          sub_233E40((__int64)v47);
          __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_57:
        v41 = (unsigned int *)sub_186B300(v28 - 1, v40);
        v28 = v41 + 2;
        *(_QWORD *)(a1 + 40) = v41 + 2;
        *v41 = v39;
        v30 = (__int64)&v41[4 * v41[1] + 2];
        goto LABEL_36;
      }
      goto LABEL_35;
    }
LABEL_66:
    v45 = (_QWORD *)sub_186B270(0x28u);
    v28 = v45 + 1;
    *v45 = 2;
    *(_QWORD *)(a1 + 40) = v45 + 1;
    v30 = (__int64)(v45 + 1);
    goto LABEL_36;
  }
  v24 = 3;
  if ( a3 != 3 )
    v24 = (a3 - 1) & 3;
  v25 = *(_QWORD *)(a1 + 56);
  v26 = v24;
  if ( v25 )
    v27 = *(_DWORD *)(v25 - 4);
  else
    v27 = 0;
  v28 = *(_QWORD **)(a1 + 40);
  if ( !v28 )
    goto LABEL_66;
  v29 = *((unsigned int *)v28 - 1);
  if ( (_DWORD)v29 == *((_DWORD *)v28 - 2) )
  {
    v39 = (unsigned int)(3 * v29 + 1) >> 1;
    v40 = 16 * v39 + 8;
    if ( 16 * (int)v29 + 8 >= (unsigned int)v40 || (unsigned int)v29 >= v39 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_D240F0(v47, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v47);
      sub_233E40((__int64)v47);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_57;
  }
LABEL_35:
  v30 = (__int64)&v28[2 * v29];
LABEL_36:
  *(_QWORD *)v30 = a2;
  *(_DWORD *)(v30 + 12) = v27;
  *(_DWORD *)(v30 + 8) = v17 | (16 * v26);
  ++*((_DWORD *)v28 - 1);
  return 0;
}

