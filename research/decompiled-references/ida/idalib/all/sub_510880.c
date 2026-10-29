__int64 __fastcall sub_510880(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = a3;
  if ( a3 )
  {
    if ( a2 )
    {
      if ( *(_BYTE *)(a2 + 43) <= 1u )
        return (unsigned int)a3;
    }
    else
    {
      return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) & a3;
    }
  }
  return result;
}
