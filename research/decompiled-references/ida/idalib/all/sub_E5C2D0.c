__int64 __fastcall sub_E5C2D0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int16 v3; // [rsp+0h] [rbp-48h] BYREF
  char v4; // [rsp+8h] [rbp-40h]

  result = *a2;
  if ( (*a2 & 0x80000) != 0 )
  {
    v3 = 1;
    v4 = 1;
    sub_222AB70(a1 + 1048, "hasRewrittenInit", 16);
    sub_222CAC0(a1 + 1048, &v3);
    sub_2229BF0(a1 + 1048);
    return sub_222B2A0(&v3);
  }
  return result;
}
