void __fastcall sub_528240(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 *v4; // rdi

  v4 = *(__int64 **)(a1 + 1632);
  if ( v4[19] )
  {
    v1 = 0;
    while ( 1 )
    {
      v2 = v4[18];
      v3 = *(_QWORD *)(v2 + 8 * v1);
      if ( v3 && *(__int16 *)(v3 + 68) < 0 )
      {
        if ( !(unsigned __int8)sub_5274F0(v4, *(_QWORD *)(v2 + 8 * v1), nullptr, 2) )
        {
          if ( !under_debugger )
            interr(3202);
LABEL_2:
          BUG();
        }
        if ( *(__int16 *)(v3 + 68) < 0 )
        {
          if ( !under_debugger )
            interr(3203);
          goto LABEL_2;
        }
      }
      if ( ++v1 >= (unsigned __int64)v4[19] )
        return;
    }
  }
  nullsub_1515();
}

