__int64 __fastcall sub_369C40(__int64 a1)
{
  const char *v1; // rax

  v1 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v1 = *(const char **)(a1 + 8);
  process_config_directive(v1, 2);
  return 0;
}
