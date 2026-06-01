_DWORD *__fastcall sub_5B0550(__int64 a1, __int64 a2, unsigned int a3)
{
  _DWORD *result; // rax
  _DWORD *v5; // r9

  if ( !a2 )
    return nullptr;
  if ( *(char *)(a2 + 9) >= 0 )
    return nullptr;
  if ( !*(_DWORD *)(a2 + 20) )
    return nullptr;
  if ( !(unsigned __int8)sub_5AD260(*(__int64 **)(qword_2CA1698 + 1480), a2) )
    return nullptr;
  result = sub_5AA140(*(_DWORD **)(a2 + 24), *(_QWORD *)(a2 + 24) + 4LL * *(int *)(a2 + 20), a3);
  if ( v5 == result || *result != a3 )
    return nullptr;
  return result;
}

