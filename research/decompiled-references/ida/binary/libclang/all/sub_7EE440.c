__int64 __fastcall sub_7EE440(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // rsi

  if ( !a2 )
    return 1;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 <= 7 || (result = sub_7EE440(a1, v3 & 0xFFFFFFFFFFFFFFF8LL), (_BYTE)result) )
  {
    if ( (unsigned int)sub_A7AE10(a2) - 3 <= 1 )
    {
      v5 = 0;
      if ( ((*(__int64 *)(a2 + 8) >> 1) & 3uLL) - 2 <= 1 )
        v5 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      return sub_7EDF40(a1, v5);
    }
    else
    {
      return 1;
    }
  }
  return result;
}

