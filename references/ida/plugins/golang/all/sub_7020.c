__int64 __fastcall sub_7020(__int64 a1)
{
  __int64 result; // rax

  get_std_dirtree();
  result = dirtree_chdir();
  if ( *(_BYTE *)(a1 + 52) )
    result = dirtree_rmdir();
  if ( *(_QWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 32) = 0;
    result = qfree();
  }
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    return qfree();
  }
  return result;
}
