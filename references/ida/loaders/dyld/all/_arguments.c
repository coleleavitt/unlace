__int64 arguments()
{
  __int64 result; // x0

  result = _args;
  if ( !_args )
    dyld_halt("arguments not initialized");
  return result;
}
