__int64 __fastcall sub_388C00(__int64 a1)
{
  __int64 plugin_options; // rax
  __int64 v2; // rbp
  __int64 v3; // r15
  __int64 v4; // r12
  const char **v5; // rbx
  const char *v6; // r15
  __int64 i; // [rsp+8h] [rbp-40h]

  if ( *(_BYTE *)(a1 + 280) || *(_QWORD *)(a1 + 72) )
    sub_378C70((__int64)"Incompatible command line switches");
  plugin_options = get_plugin_options("cvt64");
  parse_plugin_options(a1 + 104, plugin_options);
  v2 = *(_QWORD *)(a1 + 104);
  v3 = 48LL * *(_QWORD *)(a1 + 112);
  for ( i = v2 + v3; i != v2; v2 += 48 )
  {
    v4 = *(_QWORD *)(v2 + 8);
    v5 = (const char **)&off_2B25AE0;
    while ( 1 )
    {
      v6 = haystack;
      if ( v4 )
        v6 = *(const char **)v2;
      if ( !strcmp(v6, *v5) )
        break;
      v5 += 4;
      if ( &off_2B25B40 == (_UNKNOWN **)v5 )
        sub_378C70((__int64)"Unknown cvt64 option: %s", v6);
    }
  }
  return sub_835590(1);
}
