__int64 __fastcall sub_4DB500(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // rbx
  void *v3; // rdi

  v1 = *(_QWORD *)(a1 + 1560);
  v2 = *(_QWORD *)(v1 + 24);
  *(_BYTE *)(v1 + 56) = 0;
  while ( v2 )
  {
    sub_4DA0D0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  *(_QWORD *)(v1 + 24) = 0;
  *(_QWORD *)(v1 + 32) = v1 + 16;
  *(_QWORD *)(v1 + 40) = v1 + 16;
  *(_QWORD *)(v1 + 48) = 0;
  return register_undo_handlers(&unk_2B034C0, 2, 0, 0);
}

