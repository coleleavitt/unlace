__int64 __fastcall sub_19B010(__int64 a1, __int64 a2)
{
  __int64 debugger_plugins; // rdx
  __int64 result; // rax

  if ( !sub_19AFC0(a1, a2) )
    return 7;
  debugger_plugins = get_debugger_plugins(0);
  result = 3;
  if ( !debugger_plugins )
    return 7;
  return result;
}
