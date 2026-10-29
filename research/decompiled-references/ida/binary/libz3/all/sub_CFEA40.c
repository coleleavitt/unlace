__int64 __fastcall sub_CFEA40(_QWORD *a1, __int64 a2, int a3)
{
  char **exception; // rbx
  char **v4; // rbx
  char **v5; // rbx
  __int16 v8; // ax
  __int64 v10; // rbp
  int v11; // r13d
  _QWORD *v13; // rdi
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  _QWORD *v17; // rdx
  unsigned __int8 v18; // dl
  __int64 v19; // rax
  int v20; // ebp
  int v21; // r14d
  _QWORD *v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // ebx
  size_t v26; // rsi
  unsigned int *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r13
  unsigned __int8 v31; // dl
  __int64 v32; // rax
  unsigned int v33; // r15d
  size_t v34; // rsi
  unsigned int *v35; // rax
  __int64 v36; // rax
  int v37; // edx
  __int64 v38; // rax
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  __int64 v41; // [rsp+8h] [rbp-60h] BYREF
  __int64 v42[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v42[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_CF8D70(a1 + 7, v42);
    v13 = (_QWORD *)a1[11];
    if ( v13 )
    {
      v14 = *((_DWORD *)v13 - 1);
      if ( v14 == *((_DWORD *)v13 - 2) )
      {
        v25 = (3 * v14 + 1) >> 1;
        v26 = 8 * v25 + 8;
        if ( 8 * v14 + 8 >= (unsigned int)v26 || v14 >= v25 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_CF7210(v42, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v42);
          sub_233E40((__int64)v42);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v27 = (unsigned int *)sub_186B300(v13 - 1, v26);
        v28 = v27[1];
        v13 = v27 + 2;
        *v27 = v25;
        a1[11] = v27 + 2;
        LODWORD(v27) = v28;
        v17 = &v13[v28];
        v16 = (_DWORD)v27 + 1;
      }
      else
      {
        v15 = v14;
        v16 = v14 + 1;
        v17 = &v13[v15];
      }
    }
    else
    {
      v39 = (_QWORD *)sub_186B270(0x18u);
      v13 = v39 + 1;
      *v39 = 2;
      v16 = 1;
      a1[11] = v13;
      v17 = v13;
    }
    *v17 = 0;
    *((_DWORD *)v13 - 1) = v16;
    return 1;
  }
  v8 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == a1[15] )
  {
    v11 = 0;
  }
  else
  {
    if ( v8 )
    {
      if ( v8 != 2 )
      {
        if ( v8 != 1 )
        {
LABEL_11:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_29:
        sub_CFE780(a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v10 = a1[1];
      *(_DWORD *)(a2 + 8) += 2;
      v42[0] = a2;
      sub_CF8D70(a1 + 7, v42);
      v41 = 0;
      sub_CF8CB0(a1 + 11, &v41);
      sub_CF71D0(a2, v10);
      return 1;
    }
    v29 = sub_1680FB0(a1[4], a2, 0);
    v30 = v29;
    if ( v29 )
    {
      v42[0] = v29;
      ++*(_DWORD *)(v29 + 8);
      sub_CF8D70(a1 + 7, v42);
      if ( a2 != v30 )
      {
        v36 = a1[5];
        if ( v36 )
        {
          v37 = *(_DWORD *)(v36 - 4);
          if ( v37 )
            *(_BYTE *)(v36 + 16LL * (unsigned int)(v37 - 1) + 8) |= 2u;
        }
      }
      v38 = sub_1680FB0(a1[9], a2, 0);
      v42[0] = v38;
      if ( v38 )
        ++*(_DWORD *)(v38 + 8);
      sub_CF8CB0(a1 + 11, v42);
      return 1;
    }
    v8 = *(_WORD *)(a2 + 4);
    v11 = 1;
  }
  if ( v8 == 1 )
    goto LABEL_29;
  if ( v8 != 2 )
  {
    if ( v8 )
      goto LABEL_11;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_6;
    v31 = 3;
    if ( a3 != 3 )
      v31 = (a3 - 1) & 3;
    v32 = a1[7];
    v20 = v31;
    if ( v32 )
      v21 = *(_DWORD *)(v32 - 4);
    else
      v21 = 0;
    v22 = (_QWORD *)a1[5];
    if ( v22 )
    {
      v23 = *((unsigned int *)v22 - 1);
      if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
      {
        v33 = (unsigned int)(3 * v23 + 1) >> 1;
        v34 = 16 * v33 + 8;
        if ( 16 * (int)v23 + 8 >= (unsigned int)v34 || (unsigned int)v23 >= v33 )
        {
          v5 = (char **)__cxa_allocate_exception(0x28u);
          sub_CF7210(v42, "Overflow encountered when expanding vector");
          *v5 = (char *)off_1C63128;
          sub_2333C0(v5 + 1, v42);
          sub_233E40((__int64)v42);
          __cxa_throw(v5, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
LABEL_47:
        v35 = (unsigned int *)sub_186B300(v22 - 1, v34);
        v22 = v35 + 2;
        a1[5] = v35 + 2;
        *v35 = v33;
        v24 = (__int64)&v35[4 * v35[1] + 2];
        goto LABEL_26;
      }
      goto LABEL_25;
    }
LABEL_58:
    v40 = (_QWORD *)sub_186B270(0x28u);
    v22 = v40 + 1;
    *v40 = 2;
    a1[5] = v40 + 1;
    v24 = (__int64)(v40 + 1);
    goto LABEL_26;
  }
  v18 = 3;
  if ( a3 != 3 )
    v18 = (a3 - 1) & 3;
  v19 = a1[7];
  v20 = v18;
  if ( v19 )
    v21 = *(_DWORD *)(v19 - 4);
  else
    v21 = 0;
  v22 = (_QWORD *)a1[5];
  if ( !v22 )
    goto LABEL_58;
  v23 = *((unsigned int *)v22 - 1);
  if ( (_DWORD)v23 == *((_DWORD *)v22 - 2) )
  {
    v33 = (unsigned int)(3 * v23 + 1) >> 1;
    v34 = 16 * v33 + 8;
    if ( 16 * (int)v23 + 8 >= (unsigned int)v34 || (unsigned int)v23 >= v33 )
    {
      v4 = (char **)__cxa_allocate_exception(0x28u);
      sub_CF7210(v42, "Overflow encountered when expanding vector");
      *v4 = (char *)off_1C63128;
      sub_2333C0(v4 + 1, v42);
      sub_233E40((__int64)v42);
      __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_47;
  }
LABEL_25:
  v24 = (__int64)&v22[2 * v23];
LABEL_26:
  *(_QWORD *)v24 = a2;
  *(_DWORD *)(v24 + 12) = v21;
  *(_DWORD *)(v24 + 8) = v11 | (16 * v20);
  ++*((_DWORD *)v22 - 1);
  return 0;
}

