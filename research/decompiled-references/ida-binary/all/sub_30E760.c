bool __fastcall output_window_desktop_widget_factory_t__::vfunc_2(__int64 a1, __int64 a2)
{
  bool result; // al
  const char *v3; // rbx
  int v4; // edx

  result = 0;
  if ( *(_QWORD *)(a2 + 8) )
  {
    v3 = *(const char **)a2;
    v4 = strcmp(*(const char **)a2, "Output");
    result = 1;
    if ( v4 )
      return strcmp(v3, "Output window") == 0;
  }
  return result;
}
