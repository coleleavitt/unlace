__int64 sub_178C90()
{
  __int64 result; // rax

  result = 3;
  if ( dbg && (!*(_QWORD *)(dbg + 72LL) || !*(_BYTE *)(dbg + 80LL)) )
    return (*(_QWORD *)(dbg + 32LL) & 0x20000000000LL) == 0 ? 7 : 3;
  return result;
}
