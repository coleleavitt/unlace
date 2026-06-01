__int64 __fastcall sub_E35E50(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int16 v5; // [rsp+0h] [rbp-48h] BYREF
  char v6; // [rsp+8h] [rbp-40h]

  if ( a4 )
  {
    v5 = 1;
    v6 = 1;
    sub_2206E30(a1 + 1048, a2, a3);
    sub_2208D80(a1 + 1048, &v5);
    sub_2205EB0(a1 + 1048);
    return sub_2207560(&v5);
  }
  return result;
}

