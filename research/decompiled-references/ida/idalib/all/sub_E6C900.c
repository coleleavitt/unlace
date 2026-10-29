__int64 __fastcall sub_E6C900(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int16 v3; // [rsp+0h] [rbp-48h] BYREF
  char v4; // [rsp+8h] [rbp-40h]

  sub_E6C2A0(a1, (unsigned __int64)a2);
  result = *a2;
  if ( (*a2 & 0x4000000) != 0 )
  {
    v3 = 1;
    v4 = 1;
    sub_222AB70(a1 + 1048, "isPartOfExplicitCast", 20);
    sub_222CAC0(a1 + 1048, &v3);
    sub_2229BF0(a1 + 1048);
    return sub_222B2A0(&v3);
  }
  return result;
}
