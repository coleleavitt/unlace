__int64 __fastcall strings_desktop_widget_factory_t__::vfunc_2(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v3; // ebx
  const char *v4; // r12
  char *v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  _BYTE *v10; // rcx

  v3 = 0;
  if ( !*(_QWORD *)(a2 + 8) )
    return v3;
  v4 = *(const char **)a2;
  v3 = 1;
  if ( !strcmp(*(const char **)a2, "Strings") )
    return v3;
  if ( !strcmp(v4, "Strings window") )
    return v3;
  v6 = strstr(v4, "Strings from ");
  LOBYTE(v3) = v4 == v6 && v6 != nullptr;
  if ( !(_BYTE)v3 )
    return v3;
  v7 = a3[1];
  if ( !v7 )
    return 0;
  v8 = *a3;
  v9 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v8 + 8) )
    {
      v10 = *(_BYTE **)v8;
      if ( **(_BYTE **)v8 == 105 && v10[1] == 100 && !v10[2] )
        break;
    }
    ++v9;
    v8 += 40;
    if ( v7 == v9 )
      return 0;
  }
  LOBYTE(v3) = *(_DWORD *)(v8 + 24) == 2;
  return v3;
}
