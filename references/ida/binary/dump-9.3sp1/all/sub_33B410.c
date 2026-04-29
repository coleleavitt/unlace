__int64 __fastcall sub_33B410(__int64 a1, unsigned __int8 a2)
{
  const char *v2; // rbp
  size_t v3; // rax
  size_t v4; // r13
  size_t v5; // r12
  __int64 plugin_options; // rbp
  void *v8; // [rsp+0h] [rbp-48h] BYREF
  __int128 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( a1 )
  {
    v2 = *(const char **)(a1 + 24);
    v8 = nullptr;
    v9 = 0;
    if ( v2 )
    {
      v3 = strlen(v2);
      v4 = v3 + 1;
      v5 = v3;
      v8 = (void *)qvector_reserve((__int64)&v8, 0, v3 + 1, 1);
      *(_QWORD *)&v9 = v4;
      memmove(v8, v2, v5);
      *((_BYTE *)v8 + v5) = 0;
    }
    qstrlwr();
    plugin_options = get_plugin_options();
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree((__int64)v8);
    }
    if ( (a2 & (plugin_options == 0)) == 0 )
      return plugin_options;
  }
  else
  {
    plugin_options = 0;
    if ( !a2 )
      return plugin_options;
  }
  return get_plugin_options();
}
