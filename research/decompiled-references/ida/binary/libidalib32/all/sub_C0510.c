__int64 sub_C0510()
{
  __int64 v0; // r12

  v0 = 3;
  if ( (unsigned __int8)parse_config_value() )
  {
    if ( dbg )
    {
      if ( (unsigned int)sub_9E0A0() )
        sub_9E0A0();
      v0 = 1;
    }
    else
    {
      v0 = 1;
    }
  }
  free_idcv();
  return v0;
}

