__int64 __fastcall find_ioport_bit(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *ioport; // rax
  _QWORD *v5; // rcx
  __int64 result; // rax

  ioport = find_ioport(a1, a2);
  if ( !ioport )
    return 0;
  v5 = ioport;
  result = 0;
  if ( a3 < v5[8] )
  {
    result = v5[7] + 48 * a3;
    if ( *(_QWORD *)(result + 8) <= 1u )
      return 0;
  }
  return result;
}
