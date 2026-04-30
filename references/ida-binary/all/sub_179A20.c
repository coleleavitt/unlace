__int64 sub_179A20()
{
  __int64 v1; // rax

  if ( get_debugger_plugins(0) && (v1 = sub_19AFC0()) != 0 && (*(_BYTE *)(v1 + 72) & 8) == 0 )
    return 3;
  else
    return 7;
}
