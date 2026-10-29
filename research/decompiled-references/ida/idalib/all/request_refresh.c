__int64 __fastcall request_refresh(__int64 a1, char a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  __int64 v5; // rsi
  __int64 v6; // rdi

  result = a1;
  v4 = *(_QWORD *)(**(_QWORD **)(qword_2CCB598 + 1672) + 1704LL);
  v5 = *(_QWORD *)(v4 + 32);
  v6 = *(_QWORD *)(v4 + 40);
  if ( a2 )
  {
    *(_QWORD *)(v4 + 32) = result | v5;
  }
  else
  {
    result = ~result;
    *(_QWORD *)(v4 + 32) = result & v5;
  }
  *(_QWORD *)(v4 + 40) = v6;
  return result;
}
