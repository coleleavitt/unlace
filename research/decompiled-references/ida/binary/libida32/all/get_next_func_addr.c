__int64 __fastcall get_next_func_addr(__int64 a1, int a2)
{
  if ( !a1 || a2 == -1 )
    return 0xFFFFFFFFLL;
  else
    return sub_5B0B80(a1, a2);
}

