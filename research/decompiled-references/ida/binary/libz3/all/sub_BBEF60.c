void __fastcall sub_BBEF60(__int64 a1, int **a2)
{
  char **exception; // r12
  __int64 v3; // rdx
  int *v4; // rbx
  int *v5; // r14
  int v6; // r12d
  int *v7; // rbp
  _QWORD *v8; // rax
  int *v9; // rax
  int v10; // r12d
  int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 *v15; // rbp
  unsigned __int64 v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned int v20; // r15d
  size_t v21; // rsi
  unsigned int *v22; // rax
  void *v23; // [rsp+0h] [rbp-68h] BYREF
  int v24[2]; // [rsp+8h] [rbp-60h] BYREF
  int v25[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+18h] [rbp-50h]

  if ( *(_BYTE *)(sub_966740(a1) + 445) )
  {
    v4 = *a2;
    v23 = nullptr;
    if ( v4 )
    {
      v5 = &v4[*(v4 - 1)];
      if ( v5 == v4 )
      {
        v4 = nullptr;
      }
      else
      {
        v6 = *v4;
        v7 = v4;
        v8 = (_QWORD *)sub_186B270(0x10u);
        *v8 = 2;
        v9 = (int *)(v8 + 1);
        v10 = v6 ^ 1;
        v4 = v9;
        while ( 1 )
        {
          *v9 = v10;
          v11 = *(v4 - 1);
          ++v7;
          v12 = (unsigned int)(v11 + 1);
          *(v4 - 1) = v12;
          if ( v5 == v7 )
            break;
          v13 = *(v4 - 2);
          v10 = *v7 ^ 1;
          if ( v13 == (_DWORD)v12 )
          {
            v20 = (3 * v13 + 1) >> 1;
            v21 = 4 * v20 + 8;
            if ( 4 * v11 + 12 >= (unsigned int)v21 || v13 >= v20 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_154526((__int64 *)v25, "Overflow encountered when expanding vector", v3);
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v25);
              sub_233E40((__int64)v25);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v22 = (unsigned int *)sub_186B300(v4 - 2, v21);
            v4 = (int *)(v22 + 2);
            *v22 = v20;
            v9 = (int *)&v22[v22[1] + 2];
          }
          else
          {
            v9 = &v4[v12];
          }
        }
      }
    }
    v14 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)v24 = v4;
    *(_QWORD *)v25 = v14;
    v26 = 0;
    sub_BBE190(a1, (__int64 *)&v23, (unsigned int **)v24, (__int64 *)v25);
    v15 = (__int64 *)v26;
    if ( v26 )
    {
      v16 = v26 + 8LL * *(unsigned int *)(v26 - 4);
      if ( v26 >= v16 )
        goto LABEL_17;
      do
      {
        while ( 1 )
        {
          v17 = *v15;
          if ( *v15 )
          {
            v18 = *(_QWORD *)v25;
            if ( (*(_DWORD *)(v17 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v15 >= v16 )
            goto LABEL_16;
        }
        sub_15D7BC0(v18, v17);
        ++v15;
      }
      while ( (unsigned __int64)v15 < v16 );
LABEL_16:
      v15 = (__int64 *)v26;
      if ( v26 )
LABEL_17:
        sub_186B220(v15 - 1);
    }
    if ( v4 )
      sub_186B220(v4 - 2);
  }
}

