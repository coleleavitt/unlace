__int64 __fastcall sub_1646D0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 776) )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_164700(40839);
  }
  else
  {
    *(_QWORD *)(a1 + 776) = a2;
  }
  return result;
}

