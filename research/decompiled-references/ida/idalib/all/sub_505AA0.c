__int64 __fastcall sub_505AA0(_QWORD *a1, unsigned __int64 a2, char a3, double a4)
{
  __int64 v5; // rdi
  int *v7; // r13
  void (__fastcall *v9)(_QWORD); // rax
  _QWORD *v10; // rbx

  v5 = a1[4];
  if ( !v5 )
    return 0;
  v7 = (int *)sub_506E00(v5, a2);
  if ( v7 == (int *)(*(_QWORD *)a1[4] + 16LL * *(_QWORD *)(a1[4] + 8LL))
    || a2 < **(_QWORD **)v7
    || a2 >= *(_QWORD *)(*(_QWORD *)v7 + 8LL)
    || v7[2] > 0 )
  {
    return 0;
  }
  sub_505250((__int64)a1, (__int64)"del_range %a delcmt %d", a4, a2);
  sub_5056E0((__int64 *)(a1[4] + 64LL), 1, (__int64)a1, *(_QWORD **)v7);
  netnode_supdel(*a1, **(_QWORD **)v7, 339);
  if ( a3 )
  {
    sub_5083D0(a1, *(_QWORD *)v7, &byte_22F0C30, 0);
    sub_5083D0(a1, *(_QWORD *)v7, &byte_22F0C30, 1);
  }
  v9 = (void (__fastcall *)(_QWORD))a1[9];
  if ( v9 )
    v9(*(_QWORD *)v7);
  v10 = (_QWORD *)a1[4];
  qfree(*(void **)v7);
  memmove(v7, v7 + 4, *v10 + 16LL * v10[1]-- - (_QWORD)v7 - 16);
  v10[3] = v7;
  return 1;
}
