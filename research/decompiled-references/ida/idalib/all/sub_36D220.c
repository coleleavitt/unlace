__int64 __fastcall sub_36D220(__int64 a1, __int64 a2)
{
  void *v2; // rax

  v2 = (void *)getseg(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a2 + 8) = (int)move_segm(v2);
  return 0;
}
