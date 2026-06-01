__int64 __fastcall sub_D66850(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // [rsp+8h] [rbp-30h] BYREF
  __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  __int64 v11; // [rsp+18h] [rbp-20h]

  if ( *(_QWORD *)a2 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
    v9 = 0;
    v3 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v2 & 4) != 0 || !v3 )
      sub_A2B590((__int64)&v10, v3, 0, 0);
    else
      sub_A2B560((__int64)&v10, v3, 0, 0);
    *(_BYTE *)(a1 + 4) &= ~1u;
    v4 = v11;
    *(_DWORD *)a1 = 0;
    v5 = v10;
    sub_A2D690(a1);
    sub_A2D530(a1, v5, v4, &v9, nullptr, 0, 0, 0);
  }
  else
  {
    v9 = 0;
    sub_A2B590((__int64)&v10, 0, 0, 0);
    *(_BYTE *)(a1 + 4) &= ~1u;
    v7 = v11;
    *(_DWORD *)a1 = 0;
    v8 = v10;
    sub_A2D690(a1);
    sub_A2D530(a1, v8, v7, &v9, nullptr, 0, 0, 1);
  }
  return a1;
}

