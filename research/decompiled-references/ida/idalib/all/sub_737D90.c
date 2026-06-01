void __fastcall sub_737D90(unsigned __int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int16 *v4; // rax

  if ( *(_WORD *)a2 != a3 )
    sub_737CE0(a1, ((__int64)(a2 - (a1 + 1640)) >> 5) + 1);
  if ( !*(_QWORD *)(a2 + 8) )
  {
    v4 = (__int16 *)sub_7344A0(a1, a3, 1u);
    if ( !v4 || v4[4] < 0 )
      sub_737820();
    if ( *(_QWORD *)(a2 + 8) )
    {
      if ( !under_debugger )
        interr(836);
      BUG();
    }
    *(_QWORD *)(a2 + 8) = v4;
    *(_QWORD *)(a2 + 16) = *(__int16 *)(*(_QWORD *)v4 + 2LL);
    *(_WORD *)a2 = v4[5];
    sub_7333A0(*(_QWORD *)(a1 + 8), *(_QWORD *)v4);
  }
}
