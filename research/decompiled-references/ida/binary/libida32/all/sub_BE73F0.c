unsigned __int64 __fastcall sub_BE73F0(_QWORD *a1, _QWORD *a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  unsigned __int64 result; // rax

  v6 = a1[2];
  result = (a1[3] - v6) >> 3;
  if ( a3 > result )
  {
    result = (__int64)((a1[4] & 0xFFFFFFFFFFFFFFF8LL) - v6) >> 3;
    if ( a3 > (unsigned int)result )
      return sub_BE7320((__int64)(a1 + 2), a2, a3, v6, a3, a6);
  }
  return result;
}

