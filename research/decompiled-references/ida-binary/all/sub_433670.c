__int64 __fastcall checkout_for_cvt64_action_t__::vfunc_1(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbp
  int v4; // eax
  const char *v5; // rdi
  const char *file_ext; // rdi

  v2 = *a2;
  v3 = *a2 + 48 * a2[1];
  if ( *a2 == v3 )
    return 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(v2 + 24);
    if ( (v4 & 0x20) != 0 )
      break;
    if ( (v4 & 8) != 0 && *(_DWORD *)(v2 + 28) == -1 )
    {
      v5 = &s1;
      if ( *(_QWORD *)(v2 + 8) )
        v5 = *(const char **)v2;
      file_ext = (const char *)get_file_ext(v5);
      if ( file_ext )
      {
        if ( !strcasecmp(file_ext, "idb") )
          break;
      }
    }
    v2 += 48;
    if ( v3 == v2 )
      return 0;
  }
  return 1;
}
