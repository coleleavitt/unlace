__int64 __fastcall sub_3BED80(__int64 a1)
{
  __int64 result; // rax

  result = get_func(a1);
  if ( !result )
  {
    sub_2B5230((__int64)"Please position the cursor within a function");
    return 0;
  }
  return result;
}
