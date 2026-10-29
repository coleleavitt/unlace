__int64 __fastcall sub_F1FE0(__int64 *a1, __int64 a2)
{
  __int64 result; // rax

  *a1 = 0;
  result = get_merge_state();
  if ( (result & 3) != 0 )
  {
    result = sub_F1F60((__int64)a1, a2);
    ++*(_DWORD *)(result + 236);
    *a1 = result;
  }
  return result;
}

