__int64 __fastcall sub_1023390(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = sub_1023030(a1, a2, 0);
  *(_BYTE *)(result + 48) |= 4u;
  return result;
}
