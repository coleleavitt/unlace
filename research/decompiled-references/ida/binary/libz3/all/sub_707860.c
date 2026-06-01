__int64 __fastcall sub_707860(__int64 a1, __int64 a2, int a3)
{
  __int16 v4; // ax
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edx
  int v10; // r13d
  unsigned __int8 v12; // dl
  __int64 v13; // rax
  int v14; // r12d
  int v15; // r14d
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r13
  unsigned __int8 v21; // dl
  __int64 v22; // rax
  unsigned int v23; // r15d
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rax
  int v27; // edx
  _QWORD *v28; // rax
  char **exception; // rbp
  __int64 v30; // [rsp+8h] [rbp-60h] BYREF
  __int64 v31[11]; // [rsp+10h] [rbp-58h] BYREF

  if ( !a3 )
  {
    v31[0] = a2;
    if ( a2 )
      ++*(_DWORD *)(a2 + 8);
    sub_6FFDF0((_QWORD *)(a1 + 56), v31);
    return 1;
  }
  v4 = *(_WORD *)(a2 + 4);
  if ( *(_DWORD *)(a2 + 8) <= 1u || a2 == *(_QWORD *)(a1 + 120) )
  {
    v10 = 0;
  }
  else
  {
    if ( v4 )
    {
      if ( v4 != 2 )
      {
        if ( v4 != 1 )
        {
LABEL_17:
          sub_1872CE0("");
          sub_1873130(114, 226);
        }
LABEL_32:
        sub_7076F0((_QWORD *)a1, a2);
        return 1;
      }
    }
    else if ( !*(_DWORD *)(a2 + 24) )
    {
LABEL_6:
      v6 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a2 + 8);
      if ( (unsigned int)sub_6FFF20(*(__int64 **)(a1 + 144), *(_QWORD *)(a2 + 16), 0, 0, a1 + 480) == 5 )
      {
        ++*(_DWORD *)(a2 + 8);
        v31[0] = a2;
        sub_6FFDF0((_QWORD *)(a1 + 56), v31);
      }
      else
      {
        v7 = *(_QWORD *)(a1 + 480);
        v30 = v7;
        if ( v7 )
          ++*(_DWORD *)(v7 + 8);
        sub_6FFDF0((_QWORD *)(a1 + 56), &v30);
        sub_6FFC80(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        *(_QWORD *)(a1 + 480) = 0;
        v8 = *(_QWORD *)(a1 + 40);
        if ( v8 )
        {
          v9 = *(_DWORD *)(v8 - 4);
          if ( v9 )
            *(_BYTE *)(v8 + 16LL * (unsigned int)(v9 - 1) + 8) |= 2u;
        }
      }
      sub_6FFC60(a2, v6);
      return 1;
    }
    v19 = sub_1680FB0(*(_QWORD *)(a1 + 32), a2, 0);
    v20 = v19;
    if ( v19 )
    {
      v31[0] = v19;
      ++*(_DWORD *)(v19 + 8);
      sub_6FFDF0((_QWORD *)(a1 + 56), v31);
      if ( a2 != v20 )
      {
        v26 = *(_QWORD *)(a1 + 40);
        if ( v26 )
        {
          v27 = *(_DWORD *)(v26 - 4);
          if ( v27 )
            *(_BYTE *)(v26 + 16LL * (unsigned int)(v27 - 1) + 8) |= 2u;
        }
      }
      return 1;
    }
    v4 = *(_WORD *)(a2 + 4);
    v10 = 1;
  }
  if ( v4 == 1 )
    goto LABEL_32;
  if ( v4 != 2 )
  {
    if ( v4 )
      goto LABEL_17;
    if ( !*(_DWORD *)(a2 + 24) )
      goto LABEL_6;
    v21 = 3;
    if ( a3 != 3 )
      v21 = (a3 - 1) & 3;
    v22 = *(_QWORD *)(a1 + 56);
    v14 = v21;
    if ( v22 )
      v15 = *(_DWORD *)(v22 - 4);
    else
      v15 = 0;
    v16 = *(_QWORD **)(a1 + 40);
    if ( v16 )
    {
      v17 = *((unsigned int *)v16 - 1);
      if ( (_DWORD)v17 == *((_DWORD *)v16 - 2) )
      {
        v23 = (unsigned int)(3 * v17 + 1) >> 1;
        v24 = 16 * v23 + 8;
        if ( 16 * (int)v17 + 8 >= (unsigned int)v24 || (unsigned int)v17 >= v23 )
          goto LABEL_56;
LABEL_47:
        v25 = (unsigned int *)sub_186B300(v16 - 1, v24);
        v16 = v25 + 2;
        *(_QWORD *)(a1 + 40) = v25 + 2;
        *v25 = v23;
        v18 = (__int64)&v25[4 * v25[1] + 2];
        goto LABEL_29;
      }
      goto LABEL_28;
    }
LABEL_55:
    v28 = (_QWORD *)sub_186B270(0x28u);
    v16 = v28 + 1;
    *v28 = 2;
    *(_QWORD *)(a1 + 40) = v28 + 1;
    v18 = (__int64)(v28 + 1);
    goto LABEL_29;
  }
  v12 = 3;
  if ( a3 != 3 )
    v12 = (a3 - 1) & 3;
  v13 = *(_QWORD *)(a1 + 56);
  v14 = v12;
  if ( v13 )
    v15 = *(_DWORD *)(v13 - 4);
  else
    v15 = 0;
  v16 = *(_QWORD **)(a1 + 40);
  if ( !v16 )
    goto LABEL_55;
  v17 = *((unsigned int *)v16 - 1);
  if ( (_DWORD)v17 == *((_DWORD *)v16 - 2) )
  {
    v23 = (unsigned int)(3 * v17 + 1) >> 1;
    v24 = 16 * v23 + 8;
    if ( 16 * (int)v17 + 8 >= (unsigned int)v24 || (unsigned int)v17 >= v23 )
    {
LABEL_56:
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_6FFCA0(v31, "Overflow encountered when expanding vector");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v31);
      sub_233E40((__int64)v31);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    goto LABEL_47;
  }
LABEL_28:
  v18 = (__int64)&v16[2 * v17];
LABEL_29:
  *(_QWORD *)v18 = a2;
  *(_DWORD *)(v18 + 12) = v15;
  *(_DWORD *)(v18 + 8) = v10 | (16 * v14);
  ++*((_DWORD *)v16 - 1);
  return 0;
}

