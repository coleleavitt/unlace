void __fastcall sub_152C390(__int64 a1, _QWORD *a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  _DWORD v10[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  if ( !(unsigned __int8)sub_14520F0((__int64)a2, v10) )
  {
    v8 = a2[16];
    a2[26] += 24LL;
    v9 = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[17] >= v9 + 24 && v8 )
      a2[16] = v9 + 24;
    else
      v9 = sub_986170((__int64)(a2 + 16), 24, 24, 3, v6, v7);
    *(_QWORD *)v9 = 0;
    *(_DWORD *)(v9 + 16) = 441;
    *(_DWORD *)v9 = *a4;
    *(_DWORD *)(v9 + 4) = *a4;
    *(_QWORD *)(v9 + 8) = v10[0];
    sub_14368B0((__int64)a2, (char *)v9, 1, 1u, 0, 0);
  }
}
