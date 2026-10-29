__int64 *__fastcall sub_1A47770(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 v11; // al

  if ( (*(_WORD *)(a2 + 30) & 0x3FFF & *(_DWORD *)(a1 + 156)) == 0 )
    return nullptr;
  if ( (unsigned __int8)sub_1A423D0(*(_QWORD *)(a1 + 112), a2, a3, a4, a5, a6) || *(_BYTE *)(a1 + 165) )
    return (__int64 *)a2;
  if ( !*(_BYTE *)(a1 + 161) )
    return sub_1A47350(a1, (__int64 *)a2, v6, v7, v8, v9);
  v11 = sub_B81B70(a2);
  if ( v11 )
  {
    if ( v11 <= 3u )
      return sub_1A47350(a1, (__int64 *)a2, v6, v7, v8, v9);
    if ( v11 <= 6u )
    {
      if ( sub_B72C70(a2) )
        return sub_1A47350(a1, (__int64 *)a2, v6, v7, v8, v9);
      return (__int64 *)a2;
    }
  }
  return (__int64 *)sub_1A47800();
}
