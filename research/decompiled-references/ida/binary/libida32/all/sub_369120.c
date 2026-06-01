__int64 __fastcall sub_369120(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  if ( !*(_QWORD *)(a1 + 16) || (v2 = *(const char **)(a1 + 8), !*v2) )
  {
    v2 = haystack;
    if ( *(_QWORD *)(qword_2CA1698 + 32) )
      v2 = *(const char **)(qword_2CA1698 + 24);
  }
  *(_DWORD *)(a2 + 8) = (unsigned __int8)save_database(v2, *(_DWORD *)(a1 + 40) & 4, 0, 0);
  return 0;
}

