__int64 __fastcall sub_44E130(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v5; // rdi

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 < *(_QWORD *)(a2 + 48) && *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * a3) )
  {
    switch_dbctx(*(int *)(a2 + 8));
    if ( a3 >= *(_QWORD *)(a2 + 48) || (v5 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8 * a3)) == 0 )
    {
      if ( !under_debugger )
        interr(2662);
      BUG();
    }
    sub_3B0010((unsigned int *)(v5 + 32), (__int64 *)a1);
  }
  return a1;
}

