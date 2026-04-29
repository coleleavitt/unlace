__int64 __fastcall sub_2BAAF0(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 144;
  *(_QWORD *)(v2 - 144) = &off_4DBBE8;
  cleanup_argloc(v2);
  sub_2B9D40((_QWORD *)(a1 + 48));
  return cleanup_argloc(a1 + 8);
}
