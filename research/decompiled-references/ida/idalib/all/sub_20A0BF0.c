void __fastcall sub_20A0BF0(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - (8LL * ((*(_BYTE *)(a1 - 16) >> 2) & 0xF) + 16));
  sub_20A0B50((_BYTE *)(a1 - 16));
  operator delete(v1);
}
