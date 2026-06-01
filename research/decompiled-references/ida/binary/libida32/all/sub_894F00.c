void __fastcall sub_894F00(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rbp
  void *v4; // rdi

  v2 = *(unsigned int *)(a1 + 88);
  if ( (_DWORD)v2 != -1 )
    register_undo_handler(v2, sub_8986B0, a1, 0);
  v3 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    sub_898BE0(*(_QWORD *)a1);
    operator delete(v3, 0x64028u);
    *(_QWORD *)a1 = 0;
  }
  v4 = *(void **)(a1 + 16);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    qfree(v4);
  }
  *(_OWORD *)(a1 + 72) = 0;
}

