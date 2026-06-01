__int64 __fastcall sub_36C920(_QWORD *a1, __int64 a2)
{
  const char *v2; // rax

  if ( !a1[2] || (v2 = (const char *)a1[1], !*v2) )
  {
    v2 = haystack;
    if ( *(_QWORD *)(qword_2CCB598 + 32) )
      v2 = *(const char **)(qword_2CCB598 + 24);
  }
  *(_QWORD *)(a2 + 8) = (unsigned __int8)save_database(v2, a1[5] & 4LL, 0, 0);
  return 0;
}
