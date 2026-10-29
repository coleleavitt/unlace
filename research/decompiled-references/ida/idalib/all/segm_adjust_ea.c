__int64 __fastcall segm_adjust_ea(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = a2;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( *(_BYTE *)(a1 + 43) <= 1u )
        return (unsigned int)a2;
    }
    else
    {
      return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(qword_2CCB598 + 1672) + 24LL) + 16LL) & a2;
    }
  }
  return result;
}
