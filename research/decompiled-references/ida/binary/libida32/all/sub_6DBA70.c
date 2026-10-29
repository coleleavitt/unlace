unsigned __int64 __fastcall sub_6DBA70(__int64 a1)
{
  __int64 v1; // rbp
  __int64 plugin_options; // rsi
  int v3; // eax
  unsigned __int64 v5; // [rsp+18h] [rbp-30h]

  v5 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1704);
  sub_6D90C0(v1 + 64);
  hook_event_listener(1, v1 + 40, 0, 0);
  hook_event_listener(0, v1 + 16, 0, 0);
  plugin_options = get_plugin_options("clang");
  parse_plugin_options();
  v3 = *(_DWORD *)(v1 + 8);
  if ( !v3 )
  {
    plugin_options = 0;
    if ( (unsigned __int8)qgetenv("IDA_CLANG_PARSER") )
    {
      *(_DWORD *)(v1 + 8) = 2;
      goto LABEL_6;
    }
    v3 = *(_DWORD *)(v1 + 8);
  }
  if ( v3 == 2 )
LABEL_6:
    sub_709650("clang", plugin_options);
  return v5 - __readfsqword(0x28u);
}

