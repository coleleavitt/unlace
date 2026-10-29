__int64 __fastcall sub_89FD40(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  unsigned int v7; // eax
  unsigned int v8; // r12d
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v12; // edx
  size_t v13; // rsi
  unsigned int v14; // r13d
  unsigned int *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // r13
  unsigned int v21; // r12d
  unsigned int v22; // edx
  size_t v23; // rsi
  unsigned int v24; // r15d
  unsigned int *v25; // rax
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // r15
  _QWORD *v29; // rax
  char **exception; // r13
  __int64 v31; // rdx
  char **v32; // r13
  __int64 v33; // rdx
  unsigned int v34; // [rsp+0h] [rbp-68h]
  unsigned int v35; // [rsp+4h] [rbp-64h]
  __int64 v36; // [rsp+8h] [rbp-60h]
  __int64 v37[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 24LL * a2);
  v36 = *(_QWORD *)(a1 + 24) + 24LL * a2;
  if ( !v2 )
    return 1;
  v3 = nullptr;
  v4 = nullptr;
  v5 = 0;
  while ( v5 < *(_DWORD *)(v2 - 4) )
  {
    v6 = *(_DWORD *)(v2 + 8LL * v5);
    if ( v6 != -1 )
    {
      v7 = v6 >> 5;
      if ( v4 )
      {
        v8 = v7 + 1;
        v35 = *((_DWORD *)v4 - 1);
        if ( v7 < v35 )
        {
LABEL_7:
          *((_DWORD *)v4 + (v6 >> 5)) |= 1 << v6;
          goto LABEL_8;
        }
      }
      else
      {
        v8 = v7 + 1;
        v19 = (_QWORD *)sub_186B270(0x10u);
        v35 = 0;
        *v19 = 2;
        v4 = v19 + 1;
      }
      while ( 1 )
      {
        v16 = *((_DWORD *)v4 - 2);
        if ( v16 >= v8 )
          break;
        v12 = (3 * v16 + 1) >> 1;
        v13 = 4 * v12 + 8;
        v14 = v12;
        if ( 4 * v16 + 8 >= (unsigned int)v13 || v16 >= v12 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v37, "Overflow encountered when expanding vector", v31);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v37);
          sub_233E40((__int64)v37);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v15 = (unsigned int *)sub_186B300(v4 - 1, v13);
        *v15 = v14;
        v4 = v15 + 2;
      }
      *((_DWORD *)v4 - 1) = v8;
      v17 = 4LL * v8;
      v18 = 4LL * v35;
      if ( v18 != v17 )
        memset((char *)v4 + v18, 0, v17 - v18);
      v2 = *(_QWORD *)v36;
      goto LABEL_7;
    }
    v20 = v5 >> 5;
    if ( !v3 )
    {
      v21 = v20 + 1;
      v29 = (_QWORD *)sub_186B270(0x10u);
      *v29 = 2;
      v3 = v29 + 1;
      v34 = 0;
LABEL_33:
      while ( 1 )
      {
        v26 = *((_DWORD *)v3 - 2);
        if ( v26 >= v21 )
          break;
        v22 = (3 * v26 + 1) >> 1;
        v23 = 4 * v22 + 8;
        v24 = v22;
        if ( 4 * v26 + 8 >= (unsigned int)v23 || v26 >= v22 )
        {
          v32 = (char **)__cxa_allocate_exception(0x28u);
          sub_12D192(v37, "Overflow encountered when expanding vector", v33);
          *v32 = (char *)off_1C63128;
          sub_2333C0(v32 + 1, v37);
          sub_233E40((__int64)v37);
          __cxa_throw(v32, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v25 = (unsigned int *)sub_186B300(v3 - 1, v23);
        *v25 = v24;
        v3 = v25 + 2;
      }
      *((_DWORD *)v3 - 1) = v21;
      v27 = 4LL * v21;
      v28 = 4LL * v34;
      if ( v28 != v27 )
        memset((char *)v3 + v28, 0, v27 - v28);
      v2 = *(_QWORD *)v36;
      *((_DWORD *)v3 + v20) |= 1 << v5;
      goto LABEL_8;
    }
    v21 = v20 + 1;
    v34 = *((_DWORD *)v3 - 1);
    if ( (unsigned int)v20 >= v34 )
      goto LABEL_33;
    *((_DWORD *)v3 + v20) |= 1 << v5;
LABEL_8:
    ++v5;
    if ( !v2 )
      break;
  }
  v9 = *(unsigned int *)(v36 + 12);
  if ( (_DWORD)v9 == -1 )
  {
    if ( v3 )
      goto LABEL_13;
  }
  else if ( v3 )
  {
    do
    {
      while ( 1 )
      {
        v10 = (unsigned int)v9 >> 5;
        if ( (unsigned int)v10 >= *((_DWORD *)v3 - 1) )
          break;
        *((_DWORD *)v3 + v10) &= ~(1 << v9);
        v9 = *(unsigned int *)(v2 + 8 * v9 + 4);
        if ( (_DWORD)v9 == -1 )
          goto LABEL_13;
      }
      v9 = *(unsigned int *)(v2 + 8 * v9 + 4);
    }
    while ( (_DWORD)v9 != -1 );
LABEL_13:
    sub_186B220(v3 - 1);
  }
  if ( v4 )
    sub_186B220(v4 - 1);
  return 1;
}

