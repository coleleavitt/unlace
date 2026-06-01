__int64 __fastcall sub_16F9AA0(__int64 a1, unsigned __int64 a2, unsigned int a3, double a4)
{
  __int64 result; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 v12; // r9

  result = sub_16EC930(a1, a2, 1u, a4);
  if ( !(_BYTE)result )
  {
    v7 = sub_19179A0(a1, *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32), 1);
    if ( v7 == 1 )
      return 1;
    v8 = v7 & 0xFFFFFFFFFFFFFFFELL;
    v9 = sub_18C0DF0(a1, v7 & 0xFFFFFFFFFFFFFFFELL);
    if ( v9 == 1 )
      return 1;
    *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = v9 & 0xFFFFFFFFFFFFFFFELL;
    v10 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v11 = sub_EEB7E0(v9 & 0xFFFFFFFFFFFFFFFELL, v8, a4);
    result = sub_16F9610(a1, v11, v10, a3, 1, v12);
    if ( (_BYTE)result )
      return 1;
    else
      *(_QWORD *)(a2 + 8) = v10;
  }
  return result;
}
