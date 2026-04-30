__int64 sub_1799E0()
{
  __int64 debugger_plugins; // rdx
  __int64 result; // rax

  if ( !sub_19AFC0() )
    return 7;
  debugger_plugins = get_debugger_plugins(0);
  result = 3;
  if ( !debugger_plugins )
    return 7;
  return result;
}
