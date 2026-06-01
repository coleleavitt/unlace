__int64 __fastcall sub_13EB50(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  const char *v3; // rbp
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx

  if ( !a2 )
    return 0xFFFFFFFFLL;
  if ( (unsigned __int8)sub_1954B0(a2) )
  {
    result = (unsigned int)a2[544];
    if ( (int)result < 0 )
      return 35;
    return result;
  }
  if ( !(unsigned __int8)sub_163AE0(a2) )
  {
    if ( a2 == (_DWORD *)sub_11C160((__int64)&xmmword_251DA0) )
      return 43;
    return 0xFFFFFFFFLL;
  }
  v3 = (const char *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a2 + 664LL))(a2);
  v4 = strcmp(v3, "IDAView");
  result = 27;
  if ( !v4 )
    return result;
  if ( strcmp(v3, "TEAViewer") )
  {
    v6 = strcmp(v3, "TCustomViewer");
    result = 44;
    if ( !v6 )
      return result;
    v7 = strcmp(v3, "frame_view_t");
    result = 25;
    if ( !v7 )
      return result;
    v8 = strcmp(v3, "type_listing_t");
    result = 58;
    if ( !v8 )
      return result;
    v9 = strcmp(v3, "watchview_t");
    result = 45;
    if ( !v9 )
      return result;
    return 0xFFFFFFFFLL;
  }
  v5 = a2[298];
  result = 46;
  if ( v5 != 1 )
  {
    result = 61;
    if ( v5 != 3 )
      return 44;
  }
  return result;
}

