__int64 __fastcall watches_desktop_widget_factory_t__::vfunc_2(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // r13d
  const char *v4; // rbp
  char *v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rbp

  v3 = 0;
  if ( !*(_QWORD *)(a2 + 8) )
    return v3;
  v4 = *(const char **)a2;
  v6 = strstr(*(const char **)a2, "Watch view");
  LOBYTE(v3) = v6 != nullptr && v4 == v6;
  if ( !(_BYTE)v3 )
    return v3;
  v7 = a3[1];
  if ( v7 )
  {
    v8 = *a3;
    v9 = 0;
    while ( !*(_QWORD *)(v8 + 8) || strcmp(*(const char **)v8, "index") )
    {
      ++v9;
      v8 += 40;
      if ( v7 == v9 )
        return 0;
    }
    return v3;
  }
  return 0;
}
