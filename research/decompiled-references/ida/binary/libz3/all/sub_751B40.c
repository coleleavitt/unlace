void __fastcall sub_751B40(__int64 a1)
{
  void *v1; // rbp
  _QWORD *v3; // rdi

  v1 = (void *)(a1 - 16);
  v3 = (_QWORD *)(a1 + 112);
  *(v3 - 16) = &off_1C54218;
  *(v3 - 14) = off_1C54270;
  sub_18572D0(v3);
  sub_753BE0(a1);
  operator delete(v1, 0x88u);
}

