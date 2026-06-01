__int64 __fastcall sub_EE6C50(__int64 *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rsi
  char *v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  _BYTE v13[32]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v14; // [rsp+30h] [rbp-28h]

  sub_971800(*a1, "__uuidof(");
  v7 = *(_QWORD *)(a2 + 16);
  if ( (v7 & 4) != 0 )
  {
    v10 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    v11 = *a1;
    v12 = v10;
    v14 = 257;
    sub_F50AF0(&v12, v11, a1 + 3, v13, 0);
  }
  else
  {
    v8 = (char *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v8 )
      sub_EE16F0(a1, v8, v3, v4, v5, v6, a3);
    else
      sub_EE0C80(a1);
  }
  return sub_971800(*a1, ")");
}

