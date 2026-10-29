__int64 __fastcall sub_104C30(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 hidden_range; // rdx

  if ( (*(_BYTE *)(a2 + 80) & 1) != 0 )
    return 3;
  hidden_range = get_hidden_range();
  result = 7;
  if ( hidden_range )
    return 3;
  return result;
}

