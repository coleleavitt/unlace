__int64 __fastcall sub_E48BC0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int16 v3; // [rsp+0h] [rbp-48h] BYREF
  char v4; // [rsp+8h] [rbp-40h]

  sub_E48560(a1, (unsigned __int64)a2);
  result = *a2;
  if ( (*a2 & 0x4000000) != 0 )
  {
    v3 = 1;
    v4 = 1;
    sub_2206E30(a1 + 1048, "isPartOfExplicitCast", 20);
    sub_2208D80(a1 + 1048, &v3);
    sub_2205EB0(a1 + 1048);
    return sub_2207560(&v3);
  }
  return result;
}

