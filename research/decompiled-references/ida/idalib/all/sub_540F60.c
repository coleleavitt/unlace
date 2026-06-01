void __fastcall sub_540F60(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rdi

  v4 = *(_QWORD *)(a1 + 1824);
  if ( *(_QWORD *)(v4 + 152) )
  {
    v1 = 0;
    while ( 1 )
    {
      v2 = *(_QWORD *)(v4 + 144);
      v3 = *(_QWORD *)(v2 + 8 * v1);
      if ( v3 && *(__int16 *)(v3 + 68) < 0 )
      {
        if ( !(unsigned __int8)sub_5401F0((__m256i **)v4, *(_QWORD *)(v2 + 8 * v1), nullptr, 2) )
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
      if ( (unsigned __int64)++v1 >= *(_QWORD *)(v4 + 152) )
        return;
    }
  }
  nullsub_1536();
}
