__int64 __fastcall sub_208C050(__int64 *a1)
{
  __int64 v1; // rdx
  unsigned __int8 v2; // al
  __int64 result; // rax

  v1 = *a1;
  v2 = *(_BYTE *)(*a1 - 16);
  if ( (v2 & 2) != 0 )
  {
    result = **(_QWORD **)(v1 - 32);
    if ( !result )
      return result;
    return sub_20A0B40(result);
  }
  result = *(_QWORD *)(v1 - 8LL * ((v2 >> 2) & 0xF) - 16);
  if ( result )
    return sub_20A0B40(result);
  return result;
}
