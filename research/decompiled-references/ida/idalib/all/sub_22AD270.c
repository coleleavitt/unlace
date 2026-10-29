__int64 __fastcall sub_22AD270(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  _QWORD v4[4]; // [rsp+8h] [rbp-20h] BYREF

  sub_22ABE30(*a2);
  sub_22AC760((__m128i *)*a2);
  sub_22A9910(*a2);
  sub_22AA030((std::_V2 *)v4, (_DWORD *)*a2);
  if ( v4[0] )
  {
    *(_QWORD *)a1 = v4[0];
    *(_BYTE *)(a1 + 8) |= 1u;
  }
  else
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    v3 = *a2;
    *a2 = 0;
    *(_QWORD *)a1 = v3;
  }
  return a1;
}
