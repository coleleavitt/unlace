void __fastcall sub_183CDC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4[4]; // [rsp+8h] [rbp-20h] BYREF

  v4[0] = a3;
  if ( a3 )
  {
    sub_1CB44B0(a1, v4);
    v3 = v4[0];
    if ( v4[0] )
      v3 = v4[0] + 64;
    sub_17A2E00(a1, a2, v3);
  }
}
