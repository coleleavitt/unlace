__int64 __fastcall sub_B0E400(__int64 a1, int *a2)
{
  char **exception; // rbx
  _QWORD *v5; // rdx
  int v6; // r13d
  int *v7; // rcx
  int v8; // r15d
  unsigned int i; // ebp
  __int64 v10; // rax
  _DWORD *v11; // rsi
  unsigned int v12; // r14d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // edx
  unsigned int v19; // ebp
  __int64 result; // rax
  int v21; // esi
  int v22; // eax
  __int64 v23; // rdi
  int *v24; // rax
  _QWORD *v25; // rax
  __int64 v26[11]; // [rsp+0h] [rbp-58h] BYREF

  v5 = *(_QWORD **)(a1 + 704);
  v6 = *a2;
  if ( v5 )
  {
    v7 = *((int **)a2 + 1);
    *((_DWORD *)v5 - 1) = 0;
    if ( v7 && *(v7 - 1) )
    {
      v8 = *v7;
      for ( i = 0; ; v8 = v7[i] )
      {
        v10 = *((unsigned int *)v5 - 1);
        v11 = (_DWORD *)v5 + v10;
        if ( (_DWORD)v10 == *((_DWORD *)v5 - 2) )
        {
          v12 = (unsigned int)(3 * v10 + 1) >> 1;
          v13 = 4 * v12 + 8;
          if ( 4 * (int)v10 + 8 >= (unsigned int)v13 || (unsigned int)v10 >= v12 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_B035D0(v26, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v26);
            sub_233E40((__int64)v26);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          ++i;
          v14 = (unsigned int *)sub_186B300(v5 - 1, v13);
          v5 = v14 + 2;
          *v14 = v12;
          v15 = v14[1];
          *(_QWORD *)(a1 + 704) = v5;
          v7 = *((int **)a2 + 1);
          *((_DWORD *)v5 + v15) = v8;
          ++*((_DWORD *)v5 - 1);
          if ( !v7 )
            break;
        }
        else
        {
LABEL_5:
          *v11 = v8;
          ++i;
          ++*((_DWORD *)v5 - 1);
          if ( !v7 )
            break;
        }
        if ( i >= *(v7 - 1) )
          break;
      }
    }
  }
  else
  {
    v24 = *((int **)a2 + 1);
    if ( v24 && *(v24 - 1) )
    {
      v8 = *v24;
      i = 0;
      v25 = (_QWORD *)sub_186B270(0x10u);
      v5 = v25 + 1;
      *v25 = 2;
      *(_QWORD *)(a1 + 704) = v25 + 1;
      v11 = v25 + 1;
      v7 = *((int **)a2 + 1);
      goto LABEL_5;
    }
  }
  LODWORD(v26[0]) = v6 ^ 1;
  sub_B0E290((unsigned int **)(a1 + 704), (unsigned int *)v26);
  v16 = *(_QWORD *)(a1 + 704);
  v17 = *(_QWORD *)(a1 + 16);
  if ( v16 )
    v18 = *(_DWORD *)(v16 - 4);
  else
    v18 = 0;
  v19 = 0;
  sub_B69FE0(v17, *(_DWORD *)(a1 + 8), v18, v16, 0, 0, 1);
  for ( result = *((_QWORD *)a2 + 1); result; result = *((_QWORD *)a2 + 1) )
  {
    if ( v19 >= *(_DWORD *)(result - 4) )
      break;
    LODWORD(v26[0]) = v6;
    v21 = *(_DWORD *)(a1 + 8);
    v22 = *(_DWORD *)(result + 4LL * v19);
    v23 = *(_QWORD *)(a1 + 16);
    ++v19;
    HIDWORD(v26[0]) = v22 ^ 1;
    sub_B69FE0(v23, v21, 2, (unsigned int)v26, 0, 0, 1);
  }
  return result;
}

