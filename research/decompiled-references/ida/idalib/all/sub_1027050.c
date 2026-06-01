__int64 __fastcall sub_1027050(__int64 a1, unsigned __int64 a2, unsigned int a3, __m128i a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 result; // rax

  v5 = a2;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a2 + 8);
    if ( !v6 )
      break;
    a2 = v6 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v6 & 4) == 0 || !a2 )
    {
      result = sub_10210B0(a1, a2);
      if ( (_DWORD)result )
        return result;
      return sub_1026F70(a1, v5, 0, a3, 0, 0, a4);
    }
  }
  result = sub_10210B0(a1, 0);
  if ( (_DWORD)result )
    return result;
  return sub_1026F70(a1, v5, 0, a3, 0, 0, a4);
}
