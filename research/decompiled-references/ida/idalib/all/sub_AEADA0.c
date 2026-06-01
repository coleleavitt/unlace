unsigned __int64 __fastcall sub_AEADA0(__int64 *a1)
{
  unsigned __int64 result; // rax

  result = 0;
  if ( (((unsigned __int8)*a1 | (unsigned __int8)(*a1 >> 1)) & 1) == 0 )
    return *a1 & 0xFFFFFFFFFFFFFFFCLL;
  return result;
}
