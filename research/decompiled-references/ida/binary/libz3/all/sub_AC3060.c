__int64 __fastcall sub_AC3060(__int64 *a1, unsigned int a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  unsigned int v5; // r10d
  unsigned int v7; // r8d
  __int64 *v8; // r12
  unsigned int v9; // ebp
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdi
  unsigned int v15; // r9d
  __int64 v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // r13
  _DWORD *v19; // rbx
  _DWORD *v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 *v26; // rdx
  unsigned int v27; // ebp
  size_t v28; // rsi
  unsigned int *v29; // rax
  __int64 v30; // rdx
  _QWORD *v31; // rax
  __int64 v32[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = a2;
  v7 = a3;
  v8 = a1 + 56;
  v9 = a3;
  v10 = a2;
  v11 = a1[58];
  do
  {
    v12 = v10;
    result = v10;
    v10 = *(_DWORD *)(v11 + 4LL * v10);
  }
  while ( (_DWORD)result != v10 );
  do
  {
    v14 = v9;
    v15 = v9;
    v9 = *(_DWORD *)(v11 + 4LL * v9);
  }
  while ( v15 != v9 );
  if ( (_DWORD)result != v9 )
  {
    if ( *(_DWORD *)(a1[59] + 4 * v14) >= *(_DWORD *)(a1[59] + 4 * v12) )
    {
      v9 = v10;
      v7 = v5;
      v10 = v15;
      v5 = a3;
    }
    sub_AC2AF0(a1[56], v10, v9, v5, v7);
    *(_DWORD *)(a1[58] + 4LL * v9) = v10;
    v16 = 4LL * v10;
    *(_DWORD *)(a1[59] + v16) += *(_DWORD *)(a1[59] + 4LL * v9);
    v17 = a1[60];
    v18 = (_QWORD *)a1[57];
    v19 = (_DWORD *)(v17 + v16);
    v20 = (_DWORD *)(v17 + 4LL * v9);
    LODWORD(v17) = *v20;
    *v20 = *v19;
    *v19 = v17;
    v21 = sub_180C100(v18 + 2, 24);
    v22 = (_QWORD *)*v18;
    v23 = v21;
    *(_QWORD *)v21 = off_1C56810;
    *(_QWORD *)(v21 + 8) = v8;
    *(_DWORD *)(v21 + 16) = v9;
    if ( v22 )
    {
      v24 = *((_DWORD *)v22 - 1);
      if ( v24 == *((_DWORD *)v22 - 2) )
      {
        v27 = (3 * v24 + 1) >> 1;
        v28 = 8 * v27 + 8;
        if ( 8 * v24 + 8 >= (unsigned int)v28 || v24 >= v27 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_139F3A(v32, "Overflow encountered when expanding vector", v4);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v32);
          sub_233E40((__int64)v32);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v29 = (unsigned int *)sub_186B300(v22 - 1, v28);
        v30 = v29[1];
        v22 = v29 + 2;
        *v18 = v29 + 2;
        *v29 = v27;
        LODWORD(v29) = v30;
        v26 = &v22[v30];
        result = (unsigned int)((_DWORD)v29 + 1);
      }
      else
      {
        v25 = v24;
        result = v24 + 1;
        v26 = &v22[v25];
      }
    }
    else
    {
      v31 = (_QWORD *)sub_186B270(0x18u);
      v22 = v31 + 1;
      *v31 = 2;
      result = 1;
      *v18 = v22;
      v26 = v22;
    }
    *v26 = v23;
    *((_DWORD *)v22 - 1) = result;
  }
  return result;
}

