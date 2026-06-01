void __fastcall sub_5E3460(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // rsi
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = a3;
  sub_5E23F0(v8, a1, *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8LL * a3), a4, a5);
  v6 = v8[0];
  sub_62A000(*(_QWORD *)(a1 + 48), v8[0]);
  sub_62A410(*(_QWORD *)(a1 + 48), *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v5));
  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v5) = v6;
  sub_5E0CF0(a1, a2, v5);
  v7 = v8[0];
  *(_BYTE *)(a1 + 64) = 1;
  if ( v7 )
    sub_62A410(v8[1], v7);
}

