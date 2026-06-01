__int64 __fastcall sub_DD9950(__int64 a1, unsigned int a2, unsigned int a3)
{
  char **v3; // rbp
  char **exception; // rbp
  unsigned int v5; // r13d
  __int64 v6; // rbx
  __int64 v7; // r12
  char *v8; // r14
  _QWORD *v9; // rax
  _BYTE *v10; // r12
  __int64 v11; // r15
  _BYTE *v12; // r15
  _QWORD *v13; // rax
  _BYTE *v14; // rax
  __int64 v15; // rax
  unsigned int v16; // r14d
  size_t v17; // rsi
  unsigned int *v18; // rax
  _DWORD *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 result; // rax
  unsigned int v23; // ebx
  size_t v24; // rsi
  unsigned int *v25; // rax
  _DWORD *v26; // r12
  __int64 v27; // rax
  __int64 v28[11]; // [rsp+10h] [rbp-58h] BYREF

  v5 = a3;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 1400);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  if ( a2 >= a3 )
    goto LABEL_8;
  v8 = (char *)(*(_QWORD *)(a1 + 1392) + a2);
  while ( isspace(*v8) )
  {
    v6 = (unsigned int)(v6 + 1);
    ++v8;
    if ( v5 == (_DWORD)v6 )
      goto LABEL_11;
  }
  if ( (unsigned int)v6 < v5 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(a1 + 1392);
      if ( !isspace(*(char *)(v11 + v5 - 1)) )
        break;
      --v5;
LABEL_11:
      if ( (unsigned int)v6 >= v5 )
        goto LABEL_8;
    }
    v12 = (_BYTE *)(v6 + v11);
    if ( v7 )
      goto LABEL_18;
    v13 = (_QWORD *)sub_186B270(0xAu);
    *v13 = 2;
    v14 = v13 + 1;
    *(_QWORD *)(a1 + 1400) = v14;
    while ( 1 )
    {
      ++v6;
      *v14 = *v12;
      v7 = *(_QWORD *)(a1 + 1400);
      ++*(_DWORD *)(v7 - 4);
      if ( (unsigned int)v6 >= v5 )
        break;
      v12 = (_BYTE *)(v6 + *(_QWORD *)(a1 + 1392));
LABEL_18:
      v15 = *(unsigned int *)(v7 - 4);
      if ( (_DWORD)v15 == *(_DWORD *)(v7 - 8) )
      {
        v16 = (unsigned int)(3 * v15 + 1) >> 1;
        v17 = v16 + 8;
        if ( (int)v15 + 8 >= (unsigned int)v17 || (unsigned int)v15 >= v16 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v28, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v28);
          sub_233E40((__int64)v28);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v18 = (unsigned int *)sub_186B300((void *)(v7 - 8), v17);
        v19 = v18 + 2;
        *v18 = v16;
        v20 = v18[1];
        *(_QWORD *)(a1 + 1400) = v19;
        v14 = (char *)v19 + v20;
      }
      else
      {
        v14 = (_BYTE *)(v7 + v15);
      }
    }
  }
  else
  {
LABEL_8:
    if ( !v7 )
    {
      v9 = (_QWORD *)sub_186B270(0xAu);
      *v9 = 2;
      v10 = v9 + 1;
      *(_QWORD *)(a1 + 1400) = v9 + 1;
      goto LABEL_24;
    }
  }
  v21 = *(unsigned int *)(v7 - 4);
  if ( (_DWORD)v21 == *(_DWORD *)(v7 - 8) )
  {
    v23 = (unsigned int)(3 * v21 + 1) >> 1;
    v24 = v23 + 8;
    if ( (int)v21 + 8 >= (unsigned int)v24 || (unsigned int)v21 >= v23 )
    {
      v3 = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v28, "Overflow encountered when expanding vector");
      *v3 = (char *)off_1C63128;
      sub_2333C0(v3 + 1, v28);
      sub_233E40((__int64)v28);
      __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    v25 = (unsigned int *)sub_186B300((void *)(v7 - 8), v24);
    v26 = v25 + 2;
    *v25 = v23;
    v27 = v25[1];
    *(_QWORD *)(a1 + 1400) = v26;
    v10 = (char *)v26 + v27;
  }
  else
  {
    v10 = (_BYTE *)(v21 + v7);
  }
LABEL_24:
  *v10 = 0;
  result = *(_QWORD *)(a1 + 1400);
  ++*(_DWORD *)(result - 4);
  return result;
}

