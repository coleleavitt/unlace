__int64 __fastcall sub_21A2100(__int64 a1, __int64 *a2, __int64 a3)
{
  char v3; // r14
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-50h] BYREF
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  char v13; // [rsp+18h] [rbp-40h]

  (*(void (__fastcall **)(__int64 *))(*a2 + 40))(&v12);
  if ( (v13 & 1) != 0 )
  {
    v7 = v12;
    v12 = 0;
    sub_A0AE90(&v12);
    if ( v7 )
    {
      *(_BYTE *)(a1 + 8) |= 1u;
      *(_QWORD *)a1 = v7;
      return a1;
    }
  }
  else
  {
    v3 = v12;
    sub_A0AE90(&v12);
  }
  if ( (v3 & 1) != 0 )
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = 0;
  }
  else
  {
    v5 = *a2;
    if ( (v3 & 0x10) != 0 )
    {
      (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(v5 + 40))(&v12, a2, a3);
      if ( (v13 & 1) != 0 )
      {
        v10 = v12;
        v12 = 0;
        v11 = v10;
        sub_2220CA0(&v11, 1);
      }
      v9 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*a2 + 112))(a2, a3);
      sub_A0AE90(&v12);
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_QWORD *)a1 = v9;
    }
    else
    {
      v6 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 96))(a2, a3);
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_QWORD *)a1 = v6;
    }
  }
  return a1;
}
