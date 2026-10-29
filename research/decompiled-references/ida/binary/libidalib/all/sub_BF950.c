__int64 sub_BF950()
{
  __int64 v1; // rax

  if ( (*(_BYTE *)(dbg + 36LL) & 0x10) == 0 )
  {
    sub_92200((__int64)"The current debugger does not support exceptions");
    return 0;
  }
  v1 = sub_19DCF0("commdbg:EditExceptions");
  if ( !v1 )
    return 0;
  sub_19BD80(v1);
  return 0;
}

