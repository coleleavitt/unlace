__int64 __fastcall sub_40C1A0(_QWORD *a1)
{
  __int64 result; // rax

  result = netnode_kill();
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree();
  }
  return result;
}
