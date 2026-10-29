__int64 sub_BF270()
{
  __int64 v1; // rax

  if ( (*(_BYTE *)(dbg + 36LL) & 0x10) == 0 )
  {
    sub_92120((__int64)"The current debugger does not support exceptions");
    return 0;
  }
  v1 = sub_19D0F0("commdbg:EditExceptions");
  if ( !v1 )
    return 0;
  sub_19B180(v1);
  return 0;
}

