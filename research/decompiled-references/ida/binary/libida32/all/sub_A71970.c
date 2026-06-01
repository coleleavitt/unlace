bool __fastcall sub_A71970(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r12
  __int64 v6[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( (a2 == 0) != (a3 == 0) )
    return 0;
  v6[0] = a1;
  v5 = sub_A70860(v6, a2);
  return v5 == sub_A70860(v6, a3);
}

