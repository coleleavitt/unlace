bool __fastcall sub_1E86160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  bool result; // al

  v5 = *(_QWORD *)(a1 + 2320);
  if ( (*(_BYTE *)(v5 + 16) & 1) != 0 )
    return (unsigned __int8)sub_A976E0(a1, a2, v5, a4, a5) != 0;
  result = 0;
  if ( *(char *)(v5 + 15) < 0 )
    return (unsigned __int8)sub_A976E0(a1, a2, v5, a4, a5) != 0;
  return result;
}
