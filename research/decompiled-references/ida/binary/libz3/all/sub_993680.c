__int64 *__fastcall sub_993680(__int64 a1, unsigned int a2, __int64 *a3, unsigned __int8 a4)
{
  __int64 *result; // rax
  char v5; // dl

  result = a3;
  v5 = *(_BYTE *)(*(_QWORD *)(a1 + 8848) + a2);
  if ( v5 == -1 )
    return (__int64 *)sub_8E8670(a1, result, a2 ^ 1);
  if ( !v5 )
    return (__int64 *)sub_8F28B0(a1, a2, *result, a4);
  return result;
}

