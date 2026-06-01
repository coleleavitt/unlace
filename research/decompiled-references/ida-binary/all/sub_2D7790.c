__int64 __fastcall sub_2D7790(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  __int64 result; // rax

  result = debug;
  if ( (debug & 0x80000) != 0 )
  {
    result = (__int64)"6";
    if ( (::a6[0] & 0x10) != 0 )
      return sub_4F7CB0(
               16,
               (unsigned int)"%s IDAMemoAccessible::scrollToSubstring(startIndex=%d, endIndex=%d)\n",
               (unsigned int)&unk_5C2F25,
               a2,
               a3,
               a6);
  }
  return result;
}
