__int64 __fastcall dyld3::kdebug_trace_dyld_marker(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 result; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x26
  __int64 _58; // [xsp+58h] [xbp+8h]

  result = kdebug_is_enabled(a1);
  if ( !(_DWORD)result )
    return result;
  if ( a3 )
  {
    v18 = kdebug_trace_string(a1, 0, a3);
    if ( v18 == -1 )
      a2 = 0;
    else
      a2 = v18;
  }
  if ( a5 )
  {
    v19 = kdebug_trace_string(a1, 0, a5);
    if ( v19 == -1 )
      a4 = 0;
    else
      a4 = v19;
  }
  if ( a7 )
  {
    v20 = kdebug_trace_string(a1, 0, a7);
    if ( v20 == -1 )
      a6 = 0;
    else
      a6 = v20;
  }
  if ( a10 )
  {
    v21 = kdebug_trace_string(a1, 0, a10);
    if ( v21 == -1 )
      v22 = 0;
    else
      v22 = v21;
    result = kdebug_trace(a1, a2, a4, a6, v22);
    if ( v22 )
      result = kdebug_trace_string(a1, v22, 0);
    if ( !a7 )
      goto LABEL_25;
    goto LABEL_23;
  }
  result = kdebug_trace(a1, a2, a4, a6, a9);
  if ( a7 )
  {
LABEL_23:
    if ( a6 )
      result = kdebug_trace_string(a1, a6, 0);
  }
LABEL_25:
  if ( a5 && a4 )
    result = kdebug_trace_string(a1, a4, 0);
  if ( a3 && a2 )
  {
    if ( ((_58 ^ (2 * _58)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return kdebug_trace_string(a1, a2, 0);
  }
  return result;
}
