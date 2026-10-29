unsigned int *__fastcall sub_4EEB90(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  unsigned int *v3; // rbp

  if ( !*(_QWORD *)(a1 + 24) )
    return nullptr;
  v2 = sub_4EE8E0(a1, a2);
  if ( v2 == -1 )
    return nullptr;
  v3 = sub_4EE890(a1, v2);
  sub_4EE680(*(_QWORD *)(a1 + 24) + 64LL, a1, v3);
  return v3;
}

