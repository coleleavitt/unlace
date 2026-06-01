__int64 __fastcall sub_51CCF0(__int64 a1, __int64 a2, unsigned int **a3, __int64 a4)
{
  char **exception; // r12
  __int64 *v7; // r15
  __int64 v8; // rdx
  __int64 *v9; // r14
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 **v12; // rdi
  __int64 v13; // rsi
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  _QWORD *v18; // rbp
  __int64 v19; // r13
  unsigned int *v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  unsigned int *v24; // rsi
  _QWORD *v25; // rax
  _QWORD *v27; // rax
  unsigned int v28; // r14d
  size_t v29; // rsi
  unsigned int *v30; // rax
  __int64 v31; // rcx
  __int64 *v32; // [rsp+10h] [rbp-128h] BYREF
  unsigned int v33; // [rsp+18h] [rbp-120h]
  __int64 **v34; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+78h] [rbp-C0h]
  __int64 v36; // [rsp+80h] [rbp-B8h]
  __int64 (__fastcall **v37)(); // [rsp+88h] [rbp-B0h]
  __int64 v38; // [rsp+98h] [rbp-A0h]
  void *v39; // [rsp+A0h] [rbp-98h]
  __int64 v40; // [rsp+B0h] [rbp-88h]
  void *v41; // [rsp+B8h] [rbp-80h]
  __int64 (__fastcall **v42)(); // [rsp+C0h] [rbp-78h]
  __int64 v43; // [rsp+D0h] [rbp-68h]
  void *v44; // [rsp+D8h] [rbp-60h]
  __int64 v45; // [rsp+E8h] [rbp-50h]
  void *v46; // [rsp+F0h] [rbp-48h]

  sub_639BA0(&v32, *(_QWORD *)(a1 + 8) + 56LL, 0);
  sub_63ED50(&v32, a2);
  v7 = v32;
  v34 = &v32;
  v35 = a4;
  v36 = 0;
  v8 = 2LL * v33;
  v9 = &v32[v8];
  v38 = 0;
  v37 = &off_1C62200;
  v39 = nullptr;
  v40 = 0;
  v41 = nullptr;
  v42 = &off_1C62200;
  v43 = 0;
  v44 = nullptr;
  v45 = 0;
  v46 = nullptr;
  if ( v32 == &v32[v8] )
    goto LABEL_42;
  while ( (unsigned __int64)*v7 <= 1 )
  {
    v7 += 2;
    if ( v9 == v7 )
      goto LABEL_42;
  }
  if ( v9 == v7 )
  {
LABEL_42:
    v13 = a4;
    v12 = &v32;
  }
  else
  {
    v10 = *v7;
    do
    {
      sub_52C800(&v34, v10);
      v11 = v7 + 2;
      if ( v9 == v7 + 2 )
        break;
      while ( 1 )
      {
        v10 = *v11;
        v7 = v11;
        if ( (unsigned __int64)*v11 > 1 )
          break;
        v11 += 2;
        if ( v9 == v11 )
          goto LABEL_12;
      }
    }
    while ( v9 != v11 );
LABEL_12:
    v12 = v34;
    v13 = v35;
  }
  sub_63ABB0(v12, v13);
  v42 = &off_1C62200;
  if ( v46 )
    sub_186B220(v46);
  if ( v44 )
    sub_186B220(v44);
  v37 = &off_1C62200;
  if ( v41 )
    sub_186B220(v41);
  if ( v39 )
    sub_186B220(v39);
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  if ( !(unsigned __int8)sub_63EF80((unsigned int)&v32, (_DWORD)a3, v14, v15, v16, v17) )
  {
    sub_1872CE0("");
    sub_1873130(114, 1010);
  }
  v18 = *(_QWORD **)a4;
  v19 = *(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 8);
  if ( v18 != (_QWORD *)v19 )
  {
    while ( *v18 <= 1u )
    {
      if ( (_QWORD *)v19 == ++v18 )
        return sub_63D2D0(&v32);
    }
    if ( (_QWORD *)v19 != v18 )
    {
      v20 = *a3;
      if ( !*a3 )
      {
        v27 = (_QWORD *)sub_186B270(0x18u);
        v20 = (unsigned int *)(v27 + 1);
        *v27 = 2;
        v23 = 1;
        *a3 = v20;
        v24 = v20;
        goto LABEL_32;
      }
      do
      {
        v21 = *(v20 - 1);
        if ( v21 == *(v20 - 2) )
        {
          v28 = (3 * v21 + 1) >> 1;
          v29 = 8 * v28 + 8;
          if ( 8 * v21 + 8 >= (unsigned int)v29 || v21 >= v28 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0((__int64 *)&v34, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, &v34);
            sub_233E40((__int64)&v34);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v30 = (unsigned int *)sub_186B300(v20 - 2, v29);
          v31 = v30[1];
          v20 = v30 + 2;
          *v30 = v28;
          *a3 = v30 + 2;
          v24 = &v30[2 * v31 + 2];
          v23 = v31 + 1;
        }
        else
        {
          v22 = v21;
          v23 = v21 + 1;
          v24 = &v20[2 * v22];
        }
LABEL_32:
        *(_QWORD *)v24 = *v18;
        *(v20 - 1) = v23;
        v25 = v18 + 1;
        if ( (_QWORD *)v19 == v18 + 1 )
          break;
        while ( 1 )
        {
          v18 = v25;
          if ( *v25 > 1u )
            break;
          if ( (_QWORD *)v19 == ++v25 )
            return sub_63D2D0(&v32);
        }
      }
      while ( (_QWORD *)v19 != v25 );
    }
  }
  return sub_63D2D0(&v32);
}

