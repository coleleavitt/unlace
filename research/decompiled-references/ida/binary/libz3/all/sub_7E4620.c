__int64 __fastcall sub_7E4620(_DWORD *a1)
{
  char **v1; // r12
  char **exception; // r12
  unsigned int v3; // ebp
  _DWORD *i; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  void (__fastcall __noreturn *v7)(); // rax
  void (__fastcall __noreturn *v9)(); // rax
  unsigned int v10; // r12d
  unsigned int v11; // edx
  size_t v12; // rsi
  unsigned int v13; // r14d
  unsigned int *v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r14
  _QWORD *v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // ebp
  unsigned int v21; // r12d
  unsigned int v22; // ebp
  _QWORD *v23; // rax
  unsigned int v24; // r12d
  unsigned int v25; // r15d
  unsigned int v26; // r14d
  size_t v27; // rsi
  unsigned int *v28; // rax
  unsigned int v29; // eax
  unsigned int v30; // [rsp+8h] [rbp-70h]
  unsigned int v31; // [rsp+Ch] [rbp-6Ch]
  __int64 v32[11]; // [rsp+20h] [rbp-58h] BYREF

  v3 = a1[4];
  if ( v3 == -2 )
  {
    i = nullptr;
    v5 = 1;
    if ( !a1[8] )
      return v5;
  }
  else
  {
    v21 = a1[4];
    v22 = v3 >> 6;
    v23 = (_QWORD *)sub_186B270(0x10u);
    v24 = v21 >> 1;
    v25 = v22 + 1;
    *v23 = 2;
    for ( i = v23 + 1; ; i = v28 + 2 )
    {
      v29 = *(i - 2);
      if ( v29 >= v25 )
        break;
      v26 = (3 * v29 + 1) >> 1;
      v27 = 4 * v26 + 8;
      if ( 4 * v29 + 8 >= (unsigned int)v27 || v29 >= v26 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v32, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v32);
        sub_233E40((__int64)v32);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v28 = (unsigned int *)sub_186B300(i - 2, v27);
      *v28 = v26;
    }
    *(i - 1) = v25;
    memset(i, 0, 4LL * v25);
    i[v22] |= 1 << v24;
    if ( !a1[8] )
    {
LABEL_17:
      v5 = 1;
      goto LABEL_10;
    }
  }
  v6 = 0;
  while ( 1 )
  {
    v7 = *(void (__fastcall __noreturn **)())(*(_QWORD *)a1 + 88LL);
    if ( v7 == sub_7E48F0 )
    {
      sub_1872CE0("");
      sub_1873130(114, 106);
    }
    v19 = ((__int64 (__fastcall *)(_DWORD *, _QWORD))v7)(a1, v6);
    v30 = v19 >> 1;
    v20 = v19 >> 6;
    if ( i && v20 < *(i - 1) && (i[v20] & (1 << v30)) != 0 )
    {
      v5 = 0;
      goto LABEL_10;
    }
    v9 = *(void (__fastcall __noreturn **)())(*(_QWORD *)a1 + 160LL);
    if ( v9 == sub_7E4920 )
    {
      sub_1872CE0("");
      sub_1873130(114, 117);
    }
    if ( a1[15] < ((unsigned int (__fastcall *)(_DWORD *, _QWORD))v9)(a1, v6) )
      break;
    if ( !i )
    {
      v10 = v20 + 1;
      v18 = (_QWORD *)sub_186B270(0x10u);
      v31 = 0;
      i = v18 + 1;
      *v18 = 2;
LABEL_21:
      while ( 1 )
      {
        v15 = *(i - 2);
        if ( v15 >= v10 )
          break;
        v11 = (3 * v15 + 1) >> 1;
        v12 = 4 * v11 + 8;
        v13 = v11;
        if ( 4 * v15 + 8 >= (unsigned int)v12 || v15 >= v11 )
        {
          v1 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v32, "Overflow encountered when expanding vector");
          *v1 = (char *)off_1C63128;
          sub_2333C0(v1 + 1, v32);
          sub_233E40((__int64)v32);
          __cxa_throw(v1, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v14 = (unsigned int *)sub_186B300(i - 2, v12);
        *v14 = v13;
        i = v14 + 2;
      }
      *(i - 1) = v10;
      v16 = 4LL * v10;
      v17 = 4LL * v31;
      if ( v17 != v16 )
        memset(&i[(unsigned __int64)v17 / 4], 0, v16 - v17);
      goto LABEL_16;
    }
    v10 = v20 + 1;
    v31 = *(i - 1);
    if ( v20 >= v31 )
      goto LABEL_21;
LABEL_16:
    ++v6;
    i[v20] |= 1 << v30;
    if ( v6 >= a1[8] )
      goto LABEL_17;
  }
  v5 = 0;
  if ( i )
LABEL_10:
    sub_186B220(i - 2);
  return v5;
}

