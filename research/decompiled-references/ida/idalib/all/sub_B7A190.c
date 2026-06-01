unsigned __int64 __fastcall sub_B7A190(__int64 a1, unsigned __int8 a2)
{
  unsigned __int64 result; // rax

  result = (4LL * a2) | *(_QWORD *)(a1 + 80) & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(a1 + 80) = result;
  return result;
}
