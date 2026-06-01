__int64 __fastcall sub_215A940(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  char v10; // [rsp+8h] [rbp-50h]
  __int64 v11; // [rsp+18h] [rbp-40h]
  __int64 v12; // [rsp+20h] [rbp-38h]
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]

  if ( (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 80LL))(a2) == *(_QWORD *)(a2[1] + 160LL) )
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = 0;
    return a1;
  }
  else
  {
    v3 = sub_2157B00(a2[2] + 20LL);
    LOWORD(v14) = 259;
    sub_215A300((__int64)&v9, v3, v4, (__int64)a2, v5, v6, (__int64 *)"NextOffset", v11, v12, v13, 259);
    if ( (v10 & 1) != 0 )
    {
      v7 = v9;
      *(_BYTE *)(a1 + 8) |= 1u;
      v9 = 0;
    }
    else
    {
      v8 = sub_215DEC0(a2[1]);
      v7 = v9 + v8;
      *(_BYTE *)(a1 + 8) &= ~1u;
    }
    *(_QWORD *)a1 = v7;
    sub_A0AE70(&v9);
    return a1;
  }
}
