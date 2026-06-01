__int64 configuration()
{
  __int64 result; // x0

  result = _config;
  if ( !_config )
    dyld_halt("configuration not initialized");
  return result;
}
