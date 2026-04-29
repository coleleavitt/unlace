__int64 sub_22100()
{
  __int64 result; // rax
  __int64 v1; // [rsp+0h] [rbp-28h]

  if ( get_bytes() != 8 )
    return 0;
  result = 1;
  if ( v1 != 0xE51FF00446C04778LL )
  {
    result = 2;
    if ( v1 != 0xE12FFF1CE59FC000LL && v1 != 0xE12FFF1CE28FC001LL )
    {
      if ( v1 == 0xE59FC00046C04778LL && get_bytes() == 4 )
        return 0;
      return 0;
    }
  }
  return result;
}
