__int64 __fastcall sub_4F2D20(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  void *v3; // rdi

  v1 = *(_QWORD *)(a1 + 1752);
  v2 = *(_QWORD *)(v1 + 24);
  *(_BYTE *)(v1 + 56) = 0;
  while ( v2 )
  {
    sub_4F1890(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x30u);
  }
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 32) = v1 + 16;
  *(_QWORD *)(v1 + 40) = v1 + 16;
  *(_QWORD *)(v1 + 48) = 0;
  return register_undo_handlers(&unk_2B2D480, 2, 0, 0);
}
