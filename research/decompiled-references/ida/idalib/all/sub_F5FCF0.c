__int64 __fastcall sub_F5FCF0(__int64 a1, __int64 a2)
{
  return sub_F5FBF0(
           a2,
           *(_QWORD *)(a1 + 40),
           *(_QWORD *)(a1 + 8),
           (unsigned __int64 *)(a1 + 48),
           *(_BYTE *)(a1 + 32) & 0x3F);
}
