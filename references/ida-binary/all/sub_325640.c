__int64 sub_325640()
{
  __int64 result; // rax

  result = 7;
  if ( dbg )
    return (*(_QWORD *)(dbg + 32) & 0x400000LL) == 0 ? 7 : 3;
  return result;
}
