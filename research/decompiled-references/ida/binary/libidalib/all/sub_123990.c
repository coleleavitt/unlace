__int64 sub_123990()
{
  __int64 result; // rax

  result = 7;
  if ( dbg )
    return (*(_QWORD *)(dbg + 32LL) & 0x400000LL) == 0 ? 7 : 3;
  return result;
}

