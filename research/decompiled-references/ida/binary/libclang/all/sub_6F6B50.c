bool __fastcall sub_6F6B50(__int64 a1, __int64 a2, __int64 a3)
{
  bool result; // al
  __int64 v5; // rbp
  __int64 v6[4]; // [rsp+8h] [rbp-20h] BYREF

  result = 0;
  if ( (a2 == 0) == (a3 == 0) )
  {
    v6[0] = a1;
    v5 = sub_6F66A0(v6, a2);
    return v5 == sub_6F66A0(v6, a3);
  }
  return result;
}

