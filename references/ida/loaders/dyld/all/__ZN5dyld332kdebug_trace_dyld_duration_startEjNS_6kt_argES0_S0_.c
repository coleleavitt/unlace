unsigned __int64 __fastcall dyld3::kdebug_trace_dyld_duration_start(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 add; // x24
  __int64 v15; // x0
  unsigned __int64 v16; // x24
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x25

  if ( !kdebug_is_enabled(a1) )
    return 0;
  add = atomic_fetch_add(&dyld3::trace_pair_id, 1u);
  if ( a3 )
  {
    v15 = kdebug_trace_string(a1, 0, a3);
    if ( v15 == -1 )
      a2 = 0;
    else
      a2 = v15;
  }
  v16 = add + 1;
  if ( a5 )
  {
    v17 = kdebug_trace_string(a1, 0, a5);
    if ( v17 == -1 )
      a4 = 0;
    else
      a4 = v17;
  }
  if ( a7 )
  {
    v18 = kdebug_trace_string(a1, 0, a7);
    if ( v18 == -1 )
      v19 = 0;
    else
      v19 = v18;
    kdebug_trace((unsigned int)a1 | 1, v16, a2, a4, v19);
    if ( v19 )
      kdebug_trace_string(a1, v19, 0);
    if ( !a5 )
      goto LABEL_22;
    goto LABEL_20;
  }
  kdebug_trace((unsigned int)a1 | 1, v16, a2, a4, a6);
  if ( a5 )
  {
LABEL_20:
    if ( a4 )
      kdebug_trace_string(a1, a4, 0);
  }
LABEL_22:
  if ( a3 && a2 )
    kdebug_trace_string(a1, a2, 0);
  return v16;
}
