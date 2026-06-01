__int64 __fastcall sub_21B3410(__int64 a1, __int64 a2, __int64 a3)
{
  bool (__fastcall *v3)(__int64); // rax
  __int16 v4; // dx
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // [rsp+8h] [rbp-30h]
  __int64 v10; // [rsp+10h] [rbp-28h] BYREF
  char v11; // [rsp+18h] [rbp-20h]

  v3 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v3 != sub_21B1110 )
  {
    v9 = a3;
    v3(a2);
    a3 = v9;
  }
  v4 = __ROL2__(*(_WORD *)(a3 + 12), 8);
  if ( (unsigned __int16)v4 >= 0xFFFEu || v4 == 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 360LL))(a2);
    *(_BYTE *)(a1 + 16) &= ~1u;
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v7;
    return a1;
  }
  else
  {
    sub_21B2AF0((__int64)&v10, a2, v4);
    v8 = v10;
    if ( (v11 & 1) != 0 )
    {
      *(_BYTE *)(a1 + 16) |= 1u;
      v10 = 0;
    }
    else
    {
      *(_BYTE *)(a1 + 16) &= ~1u;
      *(_QWORD *)(a1 + 8) = a2;
    }
    *(_QWORD *)a1 = v8;
    sub_21B33F0(&v10);
    return a1;
  }
}
