__int64 __fastcall sub_CF5490(__int64 a1)
{
  _QWORD *v2; // rdi
  void *v3; // rbp

  v2 = (_QWORD *)(a1 + 112);
  *(v2 - 14) = &off_1C59DB0;
  sub_18572D0(v2);
  sub_1670470(a1 + 56);
  v3 = *(void **)(a1 + 40);
  if ( v3 )
  {
    sub_1695230(*(_QWORD *)(a1 + 40));
    sub_186B220(v3);
  }
  return sub_14B63F0(a1 + 24);
}

