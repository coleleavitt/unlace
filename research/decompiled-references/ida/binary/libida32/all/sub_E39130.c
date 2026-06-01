__int64 __fastcall sub_E39130(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int16 v3; // [rsp+0h] [rbp-48h] BYREF
  char v4; // [rsp+8h] [rbp-40h]

  if ( !*(_QWORD *)(a2 + 8) )
  {
    v3 = 1;
    v4 = 1;
    sub_2206E30(a1 + 1048, "isCatchAll", 10);
    sub_2208D80(a1 + 1048, &v3);
    sub_2205EB0(a1 + 1048);
    return sub_2207560(&v3);
  }
  return result;
}

