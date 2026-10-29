__int64 __fastcall sub_71A3E0(__int64 a1)
{
  __int64 result; // rax

  if ( unk_2CA26C9 )
  {
    if ( *(__int16 *)(a1 + 1634) <= 0 )
    {
      if ( !under_debugger )
        interr(839);
    }
    else
    {
      sub_724BA0(a1, 1);
      if ( *(_QWORD *)(a1 + 40) == *(_QWORD *)(a1 + 1648) )
      {
        result = sub_71A2E0((int *)a1);
        unk_2CA26C9 = 0;
        return result;
      }
      if ( !under_debugger )
        interr(840);
    }
    BUG();
  }
  return result;
}

