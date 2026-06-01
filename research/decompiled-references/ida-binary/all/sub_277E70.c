__int64 __fastcall sub_277E70(__int64 *a1)
{
  __int64 result; // rax

  *a1 = 0;
  result = get_merge_state();
  if ( (result & 3) != 0 )
  {
    result = sub_277DF0();
    ++*(_DWORD *)(result + 132);
    *a1 = result;
  }
  return result;
}
