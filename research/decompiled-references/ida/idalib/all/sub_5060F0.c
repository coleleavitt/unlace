unsigned __int64 *__fastcall sub_5060F0(__int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned __int64 *v3; // rbp

  if ( !*(_QWORD *)(a1 + 32) )
    return nullptr;
  v2 = sub_505E30(a1, a2);
  if ( v2 == -1 )
    return nullptr;
  v3 = sub_505DE0(a1, v2);
  sub_505BD0(*(_QWORD *)(a1 + 32) + 64LL, a1, v3);
  return v3;
}
