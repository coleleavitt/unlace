__int64 __fastcall sub_4EE550(unsigned int *a1, __int64 a2, char a3, double a4)
{
  __int64 v5; // rdi
  int *v7; // r13
  void (__fastcall *v9)(_QWORD); // rax
  _QWORD *v10; // rbx

  v5 = *((_QWORD *)a1 + 3);
  if ( !v5 )
    return 0;
  v7 = (int *)sub_4EF830(v5, a2);
  if ( v7 == (int *)(**((_QWORD **)a1 + 3) + 16LL * *(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL))
    || (unsigned int)a2 < **(_DWORD **)v7
    || (unsigned int)a2 >= *(_DWORD *)(*(_QWORD *)v7 + 4LL)
    || v7[2] > 0 )
  {
    return 0;
  }
  sub_4EDD00((__int64)a1, (__int64)"del_range %a delcmt %d", a4, a2);
  sub_4EE190((__int64 *)(*((_QWORD *)a1 + 3) + 64LL), 1, (__int64)a1, *(_DWORD **)v7);
  netnode_supdel(*a1, **(unsigned int **)v7, 339);
  if ( a3 )
  {
    sub_4F0D50(a1, *(_QWORD *)v7, &byte_22CD811, 0);
    sub_4F0D50(a1, *(_QWORD *)v7, &byte_22CD811, 1);
  }
  v9 = *((void (__fastcall **)(_QWORD))a1 + 8);
  if ( v9 )
    v9(*(_QWORD *)v7);
  v10 = *((_QWORD **)a1 + 3);
  qfree(*(void **)v7);
  memmove(v7, v7 + 4, *v10 + 16LL * v10[1]-- - (_QWORD)v7 - 16);
  v10[3] = v7;
  return 1;
}

