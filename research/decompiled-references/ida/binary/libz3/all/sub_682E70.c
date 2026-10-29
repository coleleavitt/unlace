__int64 __fastcall sub_682E70(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  __int64 v5; // r14
  __int64 v6; // r12
  _QWORD *v7; // rax
  int v8; // eax
  _QWORD *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // r15d
  size_t v13; // rsi
  unsigned int *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rdi
  unsigned int *v18; // r12
  unsigned int *v19; // r13
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 result; // rax
  char **exception; // rbx
  __int64 v30; // rdx
  __int64 v31; // [rsp+0h] [rbp-78h] BYREF
  unsigned int *v32; // [rsp+8h] [rbp-70h] BYREF
  __int64 v33[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v34[11]; // [rsp+20h] [rbp-58h] BYREF

  sub_2FCDE0((__int64 *)(a1 + 64));
  v34[0] = a2;
  if ( a2 )
    ++*(_DWORD *)(a2 + 8);
  sub_6761A0((unsigned int **)(a1 + 72), v34);
  v4 = *(_QWORD **)(a1 + 72);
  if ( *(_DWORD *)(a2 + 24) <= 2u )
  {
    v16 = *(_QWORD *)(a1 + 8);
    v17 = *(_QWORD *)(a1 + 152);
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 40);
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    if ( v4 )
    {
      v6 = 2;
      goto LABEL_12;
    }
    v6 = 2;
    v7 = (_QWORD *)sub_186B270(0x18u);
    v4 = v7 + 1;
    *v7 = 2;
    v8 = 1;
    *(_QWORD *)(a1 + 72) = v4;
    v9 = v4;
    while ( 1 )
    {
      *v9 = v5;
      *((_DWORD *)v4 - 1) = v8;
      if ( (unsigned int)(v6 + 1) >= *(_DWORD *)(a2 + 24) )
        break;
      v5 = *(_QWORD *)(a2 + 8 * v6 + 32);
      if ( v5 )
        ++*(_DWORD *)(v5 + 8);
      v6 = (unsigned int)(v6 + 1);
LABEL_12:
      v10 = *((_DWORD *)v4 - 1);
      if ( v10 == *((_DWORD *)v4 - 2) )
      {
        v12 = (3 * v10 + 1) >> 1;
        v13 = 8 * v12 + 8;
        if ( 8 * v10 + 8 >= (unsigned int)v13 || v10 >= v12 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_107EF6(v34, "Overflow encountered when expanding vector", v30);
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v34);
          sub_233E40((__int64)v34);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v14 = (unsigned int *)sub_186B300(v4 - 1, v13);
        v15 = v14[1];
        v4 = v14 + 2;
        *v14 = v12;
        *(_QWORD *)(a1 + 72) = v14 + 2;
        LODWORD(v14) = v15;
        v9 = &v4[v15];
        v8 = (_DWORD)v14 + 1;
      }
      else
      {
        v11 = v10;
        v8 = v10 + 1;
        v9 = &v4[v11];
      }
    }
    v16 = *(_QWORD *)(a1 + 8);
    v17 = *(_QWORD *)(a1 + 152);
  }
  v18 = (unsigned int *)sub_15DCAD0(v17, (int)v4, 0);
  if ( v18 )
    ++v18[2];
  v19 = *(unsigned int **)(a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1) + 32);
  v20 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  v21 = sub_67B850(*(__int64 **)(a1 + 16), v18);
  sub_1374250(v33, v20, v21);
  v22 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  v23 = sub_67B850(*(__int64 **)(a1 + 16), v19);
  sub_1374250(v34, v22, v23);
  v24 = v34[0];
  if ( v33[0] != v34[0] )
  {
    v25 = *(_QWORD *)(a1 + 24);
    v26 = sub_15E1B70(*(_QWORD *)(a1 + 8));
    v31 = v26;
    if ( v26 )
      ++*(_DWORD *)(v26 + 8);
    sub_6761A0((unsigned int **)(v25 + 24), &v31);
    v32 = v18;
    if ( v18 )
      ++v18[2];
    sub_675F80((_QWORD *)(a1 + 56), &v32);
    sub_6828A0(a1, (__int64)v18);
    v24 = v34[0];
  }
  sub_675460(v24, v34[1]);
  result = sub_675460(v33[0], v33[1]);
  if ( v18 )
  {
    if ( v18[2]-- == 1 )
      return sub_15D7BC0(v16, v18);
  }
  return result;
}

