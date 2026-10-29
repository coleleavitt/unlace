__int64 __fastcall sub_70A750(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbp

  if ( !*(_QWORD *)(a1 + 656) )
  {
    if ( !under_debugger )
      interr(3324);
    BUG();
  }
  v3 = a1 + 56LL * a2;
  if ( *(_QWORD *)(v3 + 120) && (unsigned __int8)sub_813900(a1, *(_QWORD *)(a1 + 656)) )
    return sub_70FE40(*(_QWORD *)(a1 + 656), a3, *(_QWORD *)(v3 + 120), a1, 0);
  else
    return 0;
}

