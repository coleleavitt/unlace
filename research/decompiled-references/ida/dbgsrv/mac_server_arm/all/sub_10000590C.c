/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000590C
// Address: 0x000000010000590C

//----- (000000010000590C) ----------------------------------------------------
__int64 __fastcall sub_10000590C(__int64 result)
{
  mach_port_name_t v1; // w1
  __int64 v2; // x19
  task_t v3; // w20
  unsigned int v4; // w22
  __int64 v5; // x0

  v1 = *(_DWORD *)(result + 1932);
  if ( v1 )
  {
    v2 = result;
    v3 = mach_task_self_;
    if ( *(_DWORD *)(result + 2160) )
    {
      v4 = 0;
      do
      {
        if ( task_set_exception_ports(
               v3,
               *(_DWORD *)(v2 + 1936 + 4LL * (int)v4),
               *(_DWORD *)(v2 + 1992 + 4LL * (int)v4),
               *(_DWORD *)(v2 + 2048 + 4LL * (int)v4),
               *(_DWORD *)(v2 + 2104 + 4LL * (int)v4)) )
        {
          if ( under_debugger != 1 )
            goto LABEL_12;
          goto LABEL_11;
        }
        ++v4;
      }
      while ( v4 < *(_DWORD *)(v2 + 2160) );
      v3 = mach_task_self_;
      v1 = *(_DWORD *)(v2 + 1932);
    }
    result = mach_port_deallocate(v3, v1);
    if ( (_DWORD)result )
    {
      while ( under_debugger == 1 )
      {
LABEL_11:
        __break(1u);
LABEL_12:
        interr(30098);
      }
      interr(30099);
      return sub_1000059F0(v5);
    }
    else
    {
      *(_DWORD *)(v2 + 1932) = 0;
    }
  }
  return result;
}
// 1000059ED: variable 'v5' is possibly undefined
// 10009D90D: using guessed type char under_debugger;
