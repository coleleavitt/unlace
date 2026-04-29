__int64 __fastcall sub_3CA510(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  unsigned int v4; // r9d

  v4 = a1 & 7;
  if ( v4 > 2 )
    return 0;
  if ( v4 - 1 <= 1 )
    sub_3CA320(a4, v4, a1 >> 3, a2, a3);
  return 1;
}
