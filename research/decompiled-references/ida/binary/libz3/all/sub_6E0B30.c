__int64 __fastcall sub_6E0B30(__int64 a1, _QWORD *a2, unsigned int **a3)
{
  __int64 result; // rax
  unsigned int v4; // r13d
  _QWORD *v7; // rdx
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rcx
  int v11; // eax
  _QWORD *v12; // rcx
  unsigned int *v13; // rdx
  unsigned int *v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int *v18; // rsi
  unsigned int v19; // r14d
  size_t v20; // rsi
  unsigned int *v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // ecx
  size_t v24; // rsi
  unsigned int *v25; // rax
  __int64 v26; // rcx
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  char **exception; // rbp
  char **v30; // rbp
  unsigned int v31; // [rsp+0h] [rbp-6Ch]
  __int64 v32[11]; // [rsp+14h] [rbp-58h] BYREF

  result = *(_QWORD *)(a1 + 32);
  if ( result )
  {
    v4 = 0;
    do
    {
      if ( v4 >= *(_DWORD *)(result - 4) )
        break;
      v7 = (_QWORD *)*a2;
      v8 = *(_QWORD *)(result + 8LL * v4);
      if ( *a2 )
      {
        v9 = *((_DWORD *)v7 - 1);
        if ( v9 == *((_DWORD *)v7 - 2) )
        {
          v23 = (3 * v9 + 1) >> 1;
          v24 = 8 * v23 + 8;
          if ( 8 * v9 + 8 >= (unsigned int)v24 || v9 >= v23 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v32, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v32);
            sub_233E40((__int64)v32);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v31 = (3 * v9 + 1) >> 1;
          v25 = (unsigned int *)sub_186B300(v7 - 1, v24);
          v7 = v25 + 2;
          *v25 = v31;
          v26 = v25[1];
          *a2 = v25 + 2;
          LODWORD(v25) = v26;
          v12 = &v7[v26];
          v11 = (_DWORD)v25 + 1;
        }
        else
        {
          v10 = v9;
          v11 = v9 + 1;
          v12 = &v7[v10];
        }
      }
      else
      {
        v27 = (_QWORD *)sub_186B270(0x18u);
        v7 = v27 + 1;
        *v27 = 2;
        v11 = 1;
        *a2 = v7;
        v12 = v7;
      }
      *v12 = v8;
      *((_DWORD *)v7 - 1) = v11;
      v13 = *a3;
      v14 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 4LL * v4);
      if ( *a3 )
      {
        v15 = *(v13 - 1);
        if ( v15 == *(v13 - 2) )
        {
          v19 = (3 * v15 + 1) >> 1;
          v20 = 4 * v19 + 8;
          if ( 4 * v15 + 8 >= (unsigned int)v20 || v15 >= v19 )
          {
            v30 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v32, "Overflow encountered when expanding vector");
            *v30 = (char *)off_1C63128;
            sub_2333C0(v30 + 1, v32);
            sub_233E40((__int64)v32);
            __cxa_throw(v30, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v21 = (unsigned int *)sub_186B300(v13 - 2, v20);
          v22 = v21[1];
          v13 = v21 + 2;
          *v21 = v19;
          *a3 = v21 + 2;
          v18 = &v21[v22 + 2];
          v17 = v22 + 1;
        }
        else
        {
          v16 = v15;
          v17 = v15 + 1;
          v18 = &v13[v16];
        }
      }
      else
      {
        v28 = (_QWORD *)sub_186B270(0x10u);
        v13 = (unsigned int *)(v28 + 1);
        *v28 = 2;
        v17 = 1;
        *a3 = v13;
        v18 = v13;
      }
      ++v4;
      *v18 = *v14;
      *(v13 - 1) = v17;
      result = *(_QWORD *)(a1 + 32);
    }
    while ( result );
  }
  return result;
}

