__int64 __fastcall sub_5EA230(__int64 a1, __int64 a2, unsigned int a3)
{
  char **exception; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 result; // rax
  __int64 v8; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // r13
  unsigned int v11; // edx
  __int64 v12; // rbp
  __int64 v13; // rcx
  _QWORD *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  unsigned int v18; // r14d
  size_t v19; // rsi
  unsigned int *v20; // rax
  __int64 v21; // rcx
  _QWORD *v22; // rax
  __int64 v23[9]; // [rsp+10h] [rbp-48h] BYREF

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 48);
  if ( v5 )
    *(_DWORD *)(v5 - 4) = 0;
  v6 = 0;
  sub_157C960(a1 + 56, a2);
  sub_157E9E0(a1 + 56, *(_QWORD *)(a2 + 40));
  result = *(unsigned int *)(a2 + 56);
  if ( (_DWORD)result )
  {
    do
    {
      while ( (_DWORD)v4 != v6 )
      {
        v8 = v6++;
        sub_157E920(a1 + 56, *(_QWORD *)(a2 + 8 * v8 + 80) & 0xFFFFFFFFFFFFFFF8LL);
        result = *(unsigned int *)(a2 + 56);
        if ( v6 >= (unsigned int)result )
          goto LABEL_6;
      }
      v6 = v4 + 1;
    }
    while ( (int)v4 + 1 < (unsigned int)result );
  }
LABEL_6:
  v9 = 0;
  v10 = *(_QWORD *)(a2 + 8 * v4 + 80) & 0xFFFFFFFFFFFFFFF8LL;
  v11 = *(_DWORD *)(v10 + 24);
  if ( v11 )
  {
    do
    {
      while ( 1 )
      {
        result = v9;
        v12 = *(_QWORD *)(v10 + 8LL * v9 + 32);
        if ( *(_WORD *)(v12 + 4) == 1 )
        {
          result = *(_QWORD *)(a1 + 80);
          if ( !result )
            break;
          v13 = *(unsigned int *)(v12 + 16);
          if ( (unsigned int)v13 >= *(_DWORD *)(result - 4) || !*(_QWORD *)(result + 8 * v13) )
            break;
        }
        if ( ++v9 >= v11 )
          return result;
      }
      v14 = *(_QWORD **)(a1 + 48);
      if ( v14 )
      {
        v15 = *((_DWORD *)v14 - 1);
        if ( v15 == *((_DWORD *)v14 - 2) )
        {
          v18 = (3 * v15 + 1) >> 1;
          v19 = 8 * v18 + 8;
          if ( 8 * v15 + 8 >= (unsigned int)v19 || v15 >= v18 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v23, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v23);
            sub_233E40((__int64)v23);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v20 = (unsigned int *)sub_186B300(v14 - 1, v19);
          v21 = v20[1];
          v14 = v20 + 2;
          *v20 = v18;
          *(_QWORD *)(a1 + 48) = v20 + 2;
          LODWORD(v20) = v21;
          v17 = &v14[v21];
          result = (unsigned int)((_DWORD)v20 + 1);
        }
        else
        {
          v16 = v15;
          result = v15 + 1;
          v17 = &v14[v16];
        }
      }
      else
      {
        v22 = (_QWORD *)sub_186B270(0x18u);
        v14 = v22 + 1;
        *v22 = 2;
        result = 1;
        *(_QWORD *)(a1 + 48) = v14;
        v17 = v14;
      }
      *v17 = v12;
      ++v9;
      *((_DWORD *)v14 - 1) = result;
      v11 = *(_DWORD *)(v10 + 24);
    }
    while ( v9 < v11 );
  }
  return result;
}

