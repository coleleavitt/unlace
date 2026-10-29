void __fastcall sub_17A5EA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __m128i a5, double a6)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  _WORD v15[13]; // [rsp+Eh] [rbp-1Ah] BYREF

  v6 = a3;
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 68 > 6 )
  {
    v15[0] = 1;
    sub_1836B60(a1, a2, a3, a4, v15);
    sub_167AF90(a1, v6, v11, v12, v13, v14, a5, a6);
  }
  else
  {
    v6 = *(_QWORD *)(a3 + 48);
    v15[0] = 1;
    sub_1836B60(a1, a2, v6, a4, v15);
    sub_167AF90(a1, v6, v7, v8, v9, v10, a5, a6);
    if ( !v6 )
      return;
  }
  if ( (*(_BYTE *)(v6 + 28) & 0x7Fu) - 35 <= 3 && sub_B979F0((_QWORD *)v6) )
    sub_183E800(a1, v6);
}
