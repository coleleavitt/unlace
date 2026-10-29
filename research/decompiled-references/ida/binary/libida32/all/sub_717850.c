void __fastcall sub_717850(unsigned __int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int16 *v4; // rax

  if ( *(_WORD *)a2 != a3 )
    sub_7177A0(a1, ((__int64)(a2 - (a1 + 1640)) >> 5) + 1);
  if ( !*(_QWORD *)(a2 + 8) )
  {
    v4 = (__int16 *)sub_713F60(a1, a3, 1u);
    if ( !v4 || v4[4] < 0 )
      sub_7172E0();
    if ( *(_QWORD *)(a2 + 8) )
    {
      if ( !under_debugger )
        interr(836);
      BUG();
    }
    *(_QWORD *)(a2 + 8) = v4;
    *(_QWORD *)(a2 + 16) = *(__int16 *)(*(_QWORD *)v4 + 2LL);
    *(_WORD *)a2 = v4[5];
    sub_712E40(*(_QWORD *)(a1 + 8), *(_QWORD *)v4);
  }
}

