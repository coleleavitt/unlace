char __fastcall sub_1317D0(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  int v3; // eax
  char result; // al

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 != -1 )
    return sub_131490(a2, nullptr, 0, (__int16 *)a1, 2 * v3, 1u, a3);
  result = *(_BYTE *)(a2[12] + 145);
  if ( result )
    return sub_11BB90((unsigned __int8 *)a1);
  return result;
}
