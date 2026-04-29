char __fastcall sub_12DD90(unsigned __int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  char result; // al

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 != -1 )
    return sub_12DA50(a2, nullptr, 0, a1, 2 * v3, 1u, a3);
  result = *(_BYTE *)(*(_QWORD *)(a2 + 96) + 145LL);
  if ( result )
    return sub_118150((unsigned __int8 *)a1);
  return result;
}
