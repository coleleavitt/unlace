unsigned __int64 __fastcall sub_597110(__int64 a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 i; // [rsp+20h] [rbp-10h]

  for ( i = 0; ; ++i )
  {
    result = i;
    if ( i >= a3 )
      break;
    sub_598172(a1, *a2++);
  }
  return result;
}
