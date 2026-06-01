void __fastcall sub_62E090(_QWORD *a1, __int64 *a2, unsigned int **a3)
{
  char **exception; // rbx
  __int64 v4; // r10
  unsigned int v6; // r12d
  __int64 v9; // r14
  __int64 v10; // rax
  _DWORD *v11; // rdx
  unsigned int *v12; // rdx
  unsigned int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  unsigned int *v16; // rcx
  unsigned int v17; // r14d
  size_t v18; // rsi
  unsigned int *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 *v22; // r14
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned int *v26; // rax
  unsigned int v27; // edx
  _QWORD *v28; // rax
  __int64 v29[11]; // [rsp+2h] [rbp-58h] BYREF

  v4 = a2[1];
  if ( v4 )
  {
    v6 = 0;
    do
    {
      if ( v6 >= *(_DWORD *)(v4 - 4) )
        break;
      v9 = 8LL * v6;
      v10 = *(_QWORD *)(v4 + v9);
      if ( !*(_WORD *)(v10 + 4)
        && (v11 = *(_DWORD **)(*(_QWORD *)(v10 + 16) + 24LL)) != nullptr
        && !*v11
        && v11[1] == 8
        && *(_DWORD *)(v10 + 24) == 1
        && (v21 = *(_QWORD *)(v10 + 32), !*(_WORD *)(v21 + 4))
        && sub_629E80(*(_QWORD **)(a1[1] + 2288LL), *(_DWORD *)(a1[1] + 2296LL), *(_QWORD *)(v21 + 16)) )
      {
        sub_62AF70(a1, v21);
        v22 = (__int64 *)(a2[1] + v9);
        v23 = *a2;
        v24 = *v22;
        ++*(_DWORD *)(v21 + 8);
        if ( v24 )
        {
          if ( (*(_DWORD *)(v24 + 8))-- == 1 )
            sub_15D7BC0(v23, v24);
        }
        v26 = *a3;
        *v22 = v21;
        if ( !v26 || (v27 = *(v26 - 1), v27 == *(v26 - 2)) )
        {
          sub_3F2670(a3);
          v26 = *a3;
          v27 = *(*a3 - 1);
        }
        v4 = a2[1];
        *((_BYTE *)v26 + v27) = 1;
        *(v26 - 1) = v27 + 1;
      }
      else
      {
        v12 = *a3;
        if ( *a3 )
        {
          v13 = *(v12 - 1);
          if ( v13 == *(v12 - 2) )
          {
            v17 = (3 * v13 + 1) >> 1;
            v18 = v17 + 8;
            if ( v13 + 8 >= (unsigned int)v18 || v13 >= v17 )
            {
              exception = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v29, "Overflow encountered when expanding vector");
              *exception = (char *)off_1C63128;
              sub_2333C0(exception + 1, v29);
              sub_233E40((__int64)v29);
              __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v19 = (unsigned int *)sub_186B300(v12 - 2, v18);
            v4 = a2[1];
            v20 = v19[1];
            v12 = v19 + 2;
            *v19 = v17;
            *a3 = v19 + 2;
            LODWORD(v19) = v20;
            v16 = (unsigned int *)((char *)v12 + v20);
            v15 = (_DWORD)v19 + 1;
          }
          else
          {
            v14 = v13;
            v15 = v13 + 1;
            v16 = (unsigned int *)((char *)v12 + v14);
          }
        }
        else
        {
          v28 = (_QWORD *)sub_186B270(0xAu);
          v4 = a2[1];
          v12 = (unsigned int *)(v28 + 1);
          *v28 = 2;
          v15 = 1;
          *a3 = v12;
          v16 = v12;
        }
        *(_BYTE *)v16 = 0;
        *(v12 - 1) = v15;
      }
      ++v6;
    }
    while ( v4 );
  }
}

