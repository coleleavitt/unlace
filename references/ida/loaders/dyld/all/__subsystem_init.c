__int64 __fastcall _subsystem_init(int a1)
{
  __int64 result; // x0

  result = _simple_getenv(a1, "subsystem_root_path");
  if ( result )
    subsystem_root_path = result;
  return result;
}
