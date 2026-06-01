__int64 __fastcall sub_369330(__int64 a1, __int64 a2)
{
  char *v2; // rax

  v2 = (char *)haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(char **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = (int)find_custom_data_format(v2);
  return 0;
}
