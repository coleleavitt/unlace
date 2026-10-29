__int64 sub_10D9A0()
{
  __int64 result; // rax

  if ( byte_251CAC )
  {
    if ( byte_251CA4 )
      return result;
LABEL_5:
    result = hook_event_listener();
    byte_251CA4 = 1;
    return result;
  }
  result = hook_event_listener();
  byte_251CAC = 1;
  if ( !byte_251CA4 )
    goto LABEL_5;
  return result;
}

