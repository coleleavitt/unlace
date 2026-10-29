void __fastcall sub_F2E1C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // r12
  size_t v4; // rax
  __int64 v5; // rsi
  _QWORD v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a2 + 24);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 1096);
    v4 = j__strlen(" selector=");
    sub_9954E0(v3, " selector=", v4);
    v5 = *(_QWORD *)(a1 + 1096);
    v6[0] = *(_QWORD *)(v2 + 40);
    sub_FDEEB0(v6, v5);
  }
}
