_QWORD *__fastcall sub_5CB2B0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *result; // rax
  _QWORD *v5; // r9

  if ( !a2 )
    return nullptr;
  if ( *(char *)(a2 + 17) >= 0 )
    return nullptr;
  if ( !*(_DWORD *)(a2 + 32) )
    return nullptr;
  if ( !(unsigned __int8)sub_5C7D50(*(__int64 **)(qword_2CCB598 + 1672), a2, a3) )
    return nullptr;
  result = sub_5C4680(*(_QWORD **)(a2 + 40), *(_QWORD *)(a2 + 40) + 8LL * *(int *)(a2 + 32), a3);
  if ( v5 == result || *result != a3 )
    return nullptr;
  return result;
}
