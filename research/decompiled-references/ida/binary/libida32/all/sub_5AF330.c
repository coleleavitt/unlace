void __fastcall sub_5AF330(__int64 a1)
{
  __int64 v1; // rbp
  void *v2; // rdi

  v1 = *(_QWORD *)(a1 + 1424);
  if ( (debug & 0x100) != 0 )
    sub_365330();
  sub_5AF180(a1, (unsigned int *)((char *)&dword_0 + 1));
  sub_4EF9B0(*(_QWORD *)(*(_QWORD *)(a1 + 1480) + 1664LL), (unsigned int *)(*(_QWORD *)(a1 + 1480) + 1624LL));
  *(_DWORD *)(v1 + 12) = -1;
  register_undo_handler(*(unsigned int *)(v1 + 40), 0, 0, 0);
  v2 = *(void **)(v1 + 16);
  if ( v2 )
  {
    *(_QWORD *)(v1 + 24) = 0;
    qfree(v2);
    *(_QWORD *)(v1 + 16) = 0;
    *(_QWORD *)(v1 + 32) = 0;
  }
}

