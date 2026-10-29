__int64 __fastcall sub_F54690(__int64 a1, __int64 a2, unsigned __int64 a3, const __m128i *a4)
{
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_BYTE *)(a1 + 16) = 0;
  sub_F54390(a2, a3, a1, a4);
  return a1;
}

