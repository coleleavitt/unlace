__int64 __fastcall sub_A86B00(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  unsigned int v5; // r14d
  unsigned int v7; // ebx
  __int64 result; // rax

  v5 = a5;
  v7 = a4;
  result = sub_A869A0(a1, a2, a3, a4, a5);
  if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    result = sub_A869A0(a1, a3, a2, v7, v5);
    if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      return sub_A85470(a1, a2, a3, v7, v5, 0);
  }
  return result;
}

