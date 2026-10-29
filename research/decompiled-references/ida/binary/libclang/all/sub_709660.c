__int64 __fastcall sub_709660(_QWORD *a1, __int64 a2, __int64 a3, unsigned __int8 a4, unsigned __int8 a5)
{
  unsigned int v5; // r14d
  __int64 result; // rax

  v5 = a5;
  result = sub_709500(a1, a2, a3, a4, a5);
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
  {
    result = sub_709500(a1, a3, a2, a4, v5);
    if ( (result & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
      return sub_707EF0(a1, a2, a3, a4, v5, 0, 0);
  }
  return result;
}

