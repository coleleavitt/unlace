__int64 __fastcall sub_52B4D0(__int64 a1, __int64 a2, const char *a3)
{
  size_t v4; // rax
  const char *v6; // r12

  v4 = strlen(a3);
  if ( v4 <= 0xA )
    return (int)get_type_ordinal(*(_QWORD *)(a1 + 40), a3);
  if ( a3[v4 - 1] != 41 )
    return (int)get_type_ordinal(*(_QWORD *)(a1 + 40), a3);
  v6 = &a3[v4 - 2];
  if ( (unsigned __int8)(*v6 - 48) > 9u || a3 >= v6 )
    return (int)get_type_ordinal(*(_QWORD *)(a1 + 40), a3);
  while ( (unsigned __int8)(*(v6 - 1) - 48) <= 9u )
  {
    if ( a3 == --v6 )
      return (int)get_type_ordinal(*(_QWORD *)(a1 + 40), a3);
  }
  if ( a3 < v6 && !strncmp(v6 - 9, " (alias #", 9u) )
    return (unsigned int)strtol(v6, nullptr, 10);
  else
    return (int)get_type_ordinal(*(_QWORD *)(a1 + 40), a3);
}
