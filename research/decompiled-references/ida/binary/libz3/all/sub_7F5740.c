void __fastcall sub_7F5740(__int64 *a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rdi
  __int64 v4; // rax
  void (__fastcall ***v5)(__int64); // r12
  __int64 v6; // rbp
  _QWORD v7[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( !a1[7] )
  {
    v1 = a1 + 1;
    v3 = *a1;
    v7[0] = 0;
    v4 = sub_B00C00(v3, v1, v7);
    v5 = (void (__fastcall ***)(__int64))a1[7];
    v6 = v4;
    if ( (void (__fastcall ***)(__int64))v4 != v5 )
    {
      if ( v5 )
      {
        (**v5)(a1[7]);
        sub_186B220(v5);
      }
      a1[7] = v6;
    }
  }
}

