__int64 __fastcall sub_69C550(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rdi

  v1 = *(_QWORD *)(a1 + 1840);
  v2 = *(void **)(v1 + 16);
  *(_OWORD *)(v1 + 64) = -1;
  if ( v2 )
  {
    *(_QWORD *)(v1 + 24) = 0;
    qfree(v2);
    *(_QWORD *)(v1 + 16) = 0;
    *(_QWORD *)(v1 + 32) = 0;
  }
  *(_QWORD *)(v1 + 8) = -1;
  return register_undo_handlers(&unk_2B379C0, 5, 0, 0);
}
