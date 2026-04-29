__int64 __fastcall sub_4A7A0(__int64 a1)
{
  __int64 result; // rax

  result = getseg();
  if ( *(_QWORD *)(a1 + 896) != -1 )
  {
    result = *(int *)(a1 + 956);
    if ( (_DWORD)result != -1 )
      result = op_offset();
  }
  if ( *(_QWORD *)(a1 + 928) != -1 )
    return op_offset();
  return result;
}
