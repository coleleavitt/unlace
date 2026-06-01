void __fastcall sub_5CA000(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  void *v3; // rdi

  v1 = *(_QWORD *)(a1 + 1616);
  if ( (debug & 0x100) != 0 )
    sub_368890();
  sub_5C9E40(a1, (unsigned __int64 *)((char *)&dword_0 + 1));
  sub_506F90(*(_QWORD *)(*(_QWORD *)(a1 + 1672) + 1752LL), (__int64 *)(*(_QWORD *)(a1 + 1672) + 1704LL));
  v2 = *(unsigned int *)(v1 + 48);
  *(_QWORD *)(v1 + 16) = -1;
  register_undo_handler(v2, 0, 0, 0);
  v3 = *(void **)(v1 + 24);
  if ( v3 )
  {
    *(_QWORD *)(v1 + 32) = 0;
    qfree(v3);
    *(_QWORD *)(v1 + 24) = 0;
    *(_QWORD *)(v1 + 40) = 0;
  }
}
