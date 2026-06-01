__int64 __fastcall dyld3::kdebug_trace_dyld_duration_end(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v15; // x24
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x25
  __int64 _48; // [xsp+48h] [xbp+8h]

  if ( !result )
    return result;
  v15 = result;
  result = kdebug_is_enabled(a2);
  if ( !(_DWORD)result )
    return result;
  if ( a4 )
  {
    v16 = kdebug_trace_string(a2, 0, a4);
    if ( v16 == -1 )
      a3 = 0;
    else
      a3 = v16;
  }
  if ( a6 )
  {
    v17 = kdebug_trace_string(a2, 0, a6);
    if ( v17 == -1 )
      a5 = 0;
    else
      a5 = v17;
  }
  if ( a8 )
  {
    v18 = kdebug_trace_string(a2, 0, a8);
    if ( v18 == -1 )
      v19 = 0;
    else
      v19 = v18;
    result = kdebug_trace((unsigned int)a2 | 2, v15, a3, a5, v19);
    if ( v19 )
      result = kdebug_trace_string(a2, v19, 0);
    if ( !a6 )
      goto LABEL_22;
    goto LABEL_20;
  }
  result = kdebug_trace((unsigned int)a2 | 2, v15, a3, a5, a7);
  if ( a6 )
  {
LABEL_20:
    if ( a5 )
      result = kdebug_trace_string(a2, a5, 0);
  }
LABEL_22:
  if ( a4 && a3 )
  {
    if ( ((_48 ^ (2 * _48)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return kdebug_trace_string(a2, a3, 0);
  }
  return result;
}
