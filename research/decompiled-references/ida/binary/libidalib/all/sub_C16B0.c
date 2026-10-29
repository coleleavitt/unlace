__int64 sub_C16B0()
{
  __int64 v0; // r12

  v0 = 3;
  if ( (unsigned __int8)parse_config_value() )
  {
    if ( dbg )
    {
      if ( (unsigned int)sub_9E1E0() )
        sub_9E1E0();
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

