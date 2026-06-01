__int64 __fastcall sub_5E4440(char a1)
{
  __int64 current_config; // rax
  __int64 v2; // rdx
  __int64 result; // rax

  current_config = get_current_config();
  v2 = current_config + 464;
  result = current_config + 448;
  if ( a1 )
    return v2;
  return result;
}

