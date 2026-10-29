__int64 sub_10DC80()
{
  __int64 result; // rax

  if ( byte_252E4C )
  {
    if ( byte_252E44 )
      return result;
LABEL_5:
    result = hook_event_listener();
    byte_252E44 = 1;
    return result;
  }
  result = hook_event_listener();
  byte_252E4C = 1;
  if ( !byte_252E44 )
    goto LABEL_5;
  return result;
}

