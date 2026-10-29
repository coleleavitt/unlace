__int64 __fastcall sub_E59B90(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int16 v5; // [rsp+0h] [rbp-48h] BYREF
  char v6; // [rsp+8h] [rbp-40h]

  if ( a4 )
  {
    v5 = 1;
    v6 = 1;
    sub_222AB70(a1 + 1048, a2, a3);
    sub_222CAC0(a1 + 1048, &v5);
    sub_2229BF0(a1 + 1048);
    return sub_222B2A0(&v5);
  }
  return result;
}
