__int64 __fastcall sub_3C0460(__int64 a1, __int64 a2, char a3)
{
  const char *v3; // r13
  int tinfo_size; // eax

  v3 = s1;
  if ( *(_QWORD *)(a2 + 24) )
    v3 = *(const char **)(a2 + 16);
  if ( (int)sub_3C0070(v3) < 0 )
    return 1;
  tinfo_size = get_tinfo_size();
  return sub_3C0390(a1, v3, tinfo_size, a3);
}
