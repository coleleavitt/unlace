unsigned __int64 __fastcall sub_4ED750(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  if ( *(_DWORD *)(a1 + 116) || (result = must_journal(a1, a2, a3), (_BYTE)result) )
  {
    result = *(_QWORD *)(a1 + 80);
    if ( result == -1 || result >= *(_QWORD *)(a1 + 8) )
    {
      if ( !under_debugger )
        interr(1729);
      BUG();
    }
    *(_QWORD *)(a1 + 8) = result;
    *(_QWORD *)(a1 + 80) = -1;
  }
  return result;
}

