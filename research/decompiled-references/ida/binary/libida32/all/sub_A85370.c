bool __fastcall sub_A85370(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool result; // al
  __int64 v6; // rcx
  __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v7[0] = a1;
  result = sub_A850B0(v7, a2, a3, a4);
  if ( !result )
    return sub_A850B0(v7, a3, a2, v6);
  return result;
}

