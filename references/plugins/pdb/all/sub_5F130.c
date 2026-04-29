__int64 __fastcall sub_5F130(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // edx

  if ( *(_QWORD *)(a1 + 8) )
  {
    v2 = *(_DWORD *)(a1 + 96);
    if ( v2 == -1 )
      return 1;
    else
      return sub_55B00(*(_QWORD **)(a1 + 8), a2, v2);
  }
  else
  {
    if ( under_debugger )
      BUG();
    interr(30564);
    return sub_5F180();
  }
}
