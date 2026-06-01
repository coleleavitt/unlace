void __fastcall sub_20BD5F0(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rdi

  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 4) != 0 && (v3 = v2 & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)(v3 + 16) >> 1) )
  {
    sub_20BCEC0(v3, nullptr);
    sub_20B3390(a1);
  }
  else
  {
    sub_20B3390(a1);
  }
}
