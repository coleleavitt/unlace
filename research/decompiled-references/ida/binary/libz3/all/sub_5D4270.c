__int64 __fastcall sub_5D4270(_QWORD *a1, __int64 a2, int a3)
{
  __int16 v5; // ax
  int v7; // r13d
  _QWORD *v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // eax
  _QWORD *v13; // rdx
  unsigned __int8 v14; // dl
  __int64 v15; // rax
  int v16; // ebp
  int v17; // r14d
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // ebx
  size_t v22; // rsi
  unsigned int *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // r13
  unsigned __int8 v27; // dl
  __int64 v28; // rax
  unsigned int v29; // r15d
  size_t v30; // rsi
  char **exception; // rbx
  unsigned int *v32; // rax
  __int64 v33; // rax
  int v34; // edx
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v38[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_5C94A0(a1 + 7, v38);
    v9 = (_QWORD *)a1[11];
    if ( v9 )
    {
      v10 = *((_DWORD *)v9 - 1);
      if ( v10 == *((_DWORD *)v9 - 2) )
      {
        v21 = (3 * v10 + 1) >> 1;
        v22 = 8 * v21 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v22 || v10 >= v21 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v38, "Overflow encountered when expanding vector");
LABEL_60:
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v38);
          sub_233E40((__int64)v38);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v23 = (unsigned int *)sub_186B300(v9 - 1, v22);
        v24 = v23[1];
        v9 = v23 + 2;
        *v23 = v21;
        a1[11] = v23 + 2;
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
      v36 = (_QWORD *)sub_186B270(0x18u);
      v9 = v36 + 1;
      *v36 = 2;
      v12 = 1;
      a1[11] = v9;
      v13 = v9;
    }
    *v13 = 0;
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
        sub_5CE3A0(a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      sub_5CDEB0((__int64)a1, a2);
      return 1;
    }
    v25 = sub_1680FB0(a1[4], a2, 0);
    v26 = v25;
    if ( v25 )
    {
      v38[0] = v25;
      ++*(_DWORD *)(v25 + 8);
      sub_5C94A0(a1 + 7, v38);
      if ( a2 != v26 )
      {
        v33 = a1[5];
        if ( v33 )
        {
          v34 = *(_DWORD *)(v33 - 4);
          if ( v34 )
            *(_BYTE *)(v33 + 16LL * (unsigned int)(v34 - 1) + 8) |= 2u;
        }
      }
      v35 = sub_1680FB0(a1[9], a2, 0);
      v38[0] = v35;
      if ( v35 )
        ++*(_DWORD *)(v35 + 8);
      sub_5C93E0(a1 + 11, v38);
      return 1;
    }
    v5 = *(_WORD *)(a2 + 4);
    v7 = 1;
  }
  if ( v5 == 1 )
    goto LABEL_29;
  if ( v5 != 2 )
  {
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
    if ( v18 )
    {
      v19 = *((unsigned int *)v18 - 1);
      if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
      {
        v29 = (unsigned int)(3 * v19 + 1) >> 1;
        v30 = 16 * v29 + 8;
        if ( 16 * (int)v19 + 8 >= (unsigned int)v30 || (unsigned int)v19 >= v29 )
        {
LABEL_44:
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v38, "Overflow encountered when expanding vector");
          goto LABEL_60;
        }
        goto LABEL_47;
      }
      goto LABEL_25;
    }
LABEL_57:
    v37 = (_QWORD *)sub_186B270(0x28u);
    v18 = v37 + 1;
    *v37 = 2;
    a1[5] = v37 + 1;
    v20 = (__int64)(v37 + 1);
    goto LABEL_26;
  }
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
    goto LABEL_57;
  v19 = *((unsigned int *)v18 - 1);
  if ( (_DWORD)v19 == *((_DWORD *)v18 - 2) )
  {
    v29 = (unsigned int)(3 * v19 + 1) >> 1;
    v30 = 16 * v29 + 8;
    if ( 16 * (int)v19 + 8 >= (unsigned int)v30 || (unsigned int)v19 >= v29 )
      goto LABEL_44;
LABEL_47:
    v32 = (unsigned int *)sub_186B300(v18 - 1, v30);
    v18 = v32 + 2;
    a1[5] = v32 + 2;
    *v32 = v29;
    v20 = (__int64)&v32[4 * v32[1] + 2];
    goto LABEL_26;
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

