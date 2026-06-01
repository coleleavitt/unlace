void __fastcall sub_81F5A0(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int *v3; // rax
  int v4; // r14d
  int *v5; // r13
  _QWORD *v6; // rax

  v2 = *(_QWORD **)(a1 + 24);
  if ( v2 == (_QWORD *)(a1 + 24) )
  {
LABEL_7:
    if ( !under_debugger )
      interr(1209);
LABEL_11:
    BUG();
  }
  while ( a2 != v2 + 2 )
  {
    v2 = (_QWORD *)*v2;
    if ( (_QWORD *)(a1 + 24) == v2 )
      goto LABEL_7;
  }
  v3 = __errno_location();
  v4 = *v3;
  v5 = v3;
  if ( (unsigned __int8)qsem_wait(a2[2], 0) )
  {
    if ( !under_debugger )
      interr(1158);
    goto LABEL_11;
  }
  v6 = (_QWORD *)*v2;
  *(_QWORD *)v2[1] = *v2;
  v6[1] = v2[1];
  qsem_free((void *)v2[4]);
  qfree(v2);
  --*(_QWORD *)(a1 + 40);
  *v5 = v4;
}

