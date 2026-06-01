__int64 __fastcall Z3_rcf_mk_rational(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v10; // rbx
  __int64 v11; // [rsp+18h] [rbp-70h] BYREF
  __int64 v12; // [rsp+20h] [rbp-68h]
  _QWORD v13[2]; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v14[10]; // [rsp+38h] [rbp-50h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29F350(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v3 = sub_24F090(a1);
  v12 = sub_16FC040(v3);
  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  v4 = sub_24F090(a1);
  v5 = sub_16FC040(v4);
  sub_1855200(v5, v13, a2);
  v11 = 0;
  v6 = sub_24F090(a1);
  sub_16FC9D0(v6, &v11, v13);
  v7 = v11;
  if ( v2 )
  {
    sub_2BB620(v11);
    v10 = v12;
    sub_182EF00(v12, v13);
    sub_182EF00(v10, v14);
    byte_1C7EBA0 = 1;
  }
  else
  {
    v8 = v12;
    sub_182EF00(v12, v13);
    sub_182EF00(v8, v14);
  }
  return v7;
}

