__int64 __fastcall find_ioport_bit(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 ioport; // rax
  __int64 v5; // rcx
  __int64 result; // rax

  ioport = find_ioport();
  if ( !ioport )
    return 0;
  v5 = ioport;
  result = 0;
  if ( a3 < *(_QWORD *)(v5 + 64) )
  {
    result = *(_QWORD *)(v5 + 56) + 48 * a3;
    if ( *(_QWORD *)(result + 8) <= 1u )
      return 0;
  }
  return result;
}

