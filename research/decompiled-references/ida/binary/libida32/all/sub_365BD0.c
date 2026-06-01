__int64 __fastcall sub_365BD0(__int64 a1, __int64 a2)
{
  const char *v2; // rax

  v2 = haystack;
  if ( *(_QWORD *)(a1 + 16) )
    v2 = *(const char **)(a1 + 8);
  *(_DWORD *)(a2 + 8) = get_named_type_tid(v2);
  return 0;
}

