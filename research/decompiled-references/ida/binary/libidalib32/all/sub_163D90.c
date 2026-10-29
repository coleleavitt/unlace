__int64 __fastcall sub_163D90(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 768) )
  {
    if ( under_debugger )
      BUG();
    interr();
    return sub_163DC0(40839);
  }
  else
  {
    *(_QWORD *)(a1 + 768) = a2;
  }
  return result;
}

