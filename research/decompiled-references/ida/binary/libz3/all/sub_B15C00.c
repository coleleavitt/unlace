__int64 __fastcall sub_B15C00(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rax
  unsigned int **v5; // rdi
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8; // ebx
  _QWORD *v9; // r13
  _QWORD *v10; // rdx
  int v11; // r12d
  __int64 v12; // rax
  int *v13; // rax
  unsigned int v14; // ecx
  size_t v15; // rsi
  unsigned int v16; // ebp
  unsigned int *v17; // rax
  _QWORD *v18; // rax
  char **exception; // rbx
  __int64 v20[11]; // [rsp+10h] [rbp-58h] BYREF

  v4 = *(_DWORD **)(a1 + 16);
  v5 = *(unsigned int ***)(a2 + 176);
  LODWORD(v20[0]) = *v4;
  sub_B0E5E0(v5, (unsigned int *)v20);
  v6 = *(_QWORD *)(a1 + 16);
  result = *(_QWORD *)(v6 + 8);
  if ( result )
  {
    v8 = *(_DWORD *)(v6 + 16);
    do
    {
      if ( v8 >= *(_DWORD *)(result - 4) )
        break;
      v9 = *(_QWORD **)(a2 + 176);
      v10 = (_QWORD *)*v9;
      v11 = *(_DWORD *)(result + 4LL * v8) ^ 1;
      if ( *v9 )
      {
        v12 = *((unsigned int *)v10 - 1);
        if ( (_DWORD)v12 == *((_DWORD *)v10 - 2) )
        {
          v14 = (unsigned int)(3 * v12 + 1) >> 1;
          v15 = 4 * v14 + 8;
          v16 = v14;
          if ( 4 * (int)v12 + 8 >= (unsigned int)v15 || (unsigned int)v12 >= v14 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0(v20, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v20);
            sub_233E40((__int64)v20);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v17 = (unsigned int *)sub_186B300(v10 - 1, v15);
          v6 = *(_QWORD *)(a1 + 16);
          v10 = v17 + 2;
          *v9 = v17 + 2;
          *v17 = v16;
          v13 = (int *)&v17[v17[1] + 2];
        }
        else
        {
          v13 = (int *)v10 + v12;
        }
      }
      else
      {
        v18 = (_QWORD *)sub_186B270(0x10u);
        v6 = *(_QWORD *)(a1 + 16);
        v10 = v18 + 1;
        *v18 = 2;
        *v9 = v18 + 1;
        v13 = (int *)(v18 + 1);
      }
      *v13 = v11;
      result = *(_QWORD *)(v6 + 8);
      ++v8;
      ++*((_DWORD *)v10 - 1);
    }
    while ( result );
  }
  return result;
}

