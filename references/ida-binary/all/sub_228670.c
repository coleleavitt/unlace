bool __fastcall tracing_desktop_widget_factory_t__::vfunc_2(__int64 a1, __int64 a2)
{
  bool result; // al
  const char *v3; // rbx
  char *v4; // rax
  char *v5; // rdx

  result = 0;
  if ( dbg && *(_QWORD *)(a2 + 8) )
  {
    v3 = *(const char **)a2;
    v4 = strstr(*(const char **)a2, "Tracing");
    result = v4 != nullptr && v3 == v4;
    if ( !result )
    {
      v5 = strstr(v3, "Trace window");
      return v5 != nullptr && v3 == v5;
    }
  }
  return result;
}
