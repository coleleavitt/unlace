__int64 __fastcall sub_600310(char a1)
{
  __int64 current_config; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  current_config = get_current_config();
  v2 = current_config + 472;
  result = current_config + 456;
  if ( a1 )
    return v2;
  return result;
}
