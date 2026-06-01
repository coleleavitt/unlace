__int64 __fastcall sub_71ED20(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  while ( *(_QWORD *)(a1 + 8 * result + 16) )
  {
    if ( ++result == 5 )
    {
      if ( !under_debugger )
        interr(846);
      BUG();
    }
  }
  *(_QWORD *)(a1 + 8 * result + 16) = a2;
  return result;
}

