__int64 __fastcall sub_5B6290(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  _QWORD *v3; // rsi

  result = -1;
  if ( a2 < *(_QWORD *)(a1 + 48) )
  {
    v3 = (_QWORD *)(*(_QWORD *)(a1 + 40) + 32 * a2);
    if ( *v3 )
      return v3[1];
  }
  return result;
}
