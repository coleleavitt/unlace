__int64 _open_console()
{
  __int64 v0; // x19

  v0 = (unsigned int)dword_A81B0;
  if ( dword_A81B0 < 0 && __getpid() == 1 )
  {
    v0 = open("/dev/console", 131073);
    dword_A81B0 = v0;
  }
  return v0;
}
