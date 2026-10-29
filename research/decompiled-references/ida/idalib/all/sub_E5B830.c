__int64 __fastcall sub_E5B830(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v3; // [rsp+0h] [rbp-58h] BYREF
  char v4; // [rsp+8h] [rbp-50h]

  result = *(_QWORD *)(a2 + 48);
  if ( (result & 0x2000) == 0 )
  {
    if ( (result & 0x4000) == 0 )
      return result;
LABEL_5:
    v3 = 1;
    v4 = 1;
    sub_222AB70(a1 + 1048, "capturesThis", 12);
    sub_222CAC0(a1 + 1048, &v3);
    sub_2229BF0(a1 + 1048);
    return sub_222B2A0(&v3);
  }
  v4 = 1;
  v3 = 1;
  sub_222AB70(a1 + 1048, "variadic", 8);
  sub_222CAC0(a1 + 1048, &v3);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(&v3);
  result = *(_QWORD *)(a2 + 48);
  if ( (result & 0x4000) != 0 )
    goto LABEL_5;
  return result;
}
