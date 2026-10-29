_QWORD *__fastcall dwarf_get_debug(unsigned __int64 a1)
{
  _QWORD *v1; // rbx
  bool v2; // zf
  unsigned __int64 v3; // rdx

  v1 = calloc(0x2A78u, 1u);
  if ( v1 )
  {
    v2 = byte_B89E0 == 0;
    *v1 = 3959286781LL;
    if ( !v2 )
    {
      v3 = 2000000;
      if ( a1 <= 0x393871D )
        v3 = a1 / 0x1E;
      _dwarf_initialize_search_hash(v1 + 36, sub_F210, v3);
    }
  }
  return v1;
}

