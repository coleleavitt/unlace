__int64 __fastcall sub_36CD40(__int64 a1, __int64 a2)
{
  char *v2; // rax

  v2 = (char *)haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(char **)(a1 + 8);
  *(_QWORD *)(a2 + 8) = get_debug_name_ea(v2);
  return 0;
}
