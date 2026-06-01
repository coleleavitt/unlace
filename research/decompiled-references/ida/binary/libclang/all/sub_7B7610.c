__int64 __fastcall sub_7B7610(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  bool v6; // zf
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // r8
  unsigned __int64 v10; // r12
  __int64 v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rax
  char v14; // [rsp+Eh] [rbp-2Ah] BYREF
  _BYTE v15[41]; // [rsp+Fh] [rbp-29h] BYREF

  v3 = sub_7B7460(a1, a2, a3, &v14, v15);
  v4 = sub_600210(a2[2168], "self", 4u);
  v5 = sub_783940((__int64)a2, a1 + 48, 0, v4, v3, 0);
  v6 = v15[0] == 0;
  *(_QWORD *)(a1 + 120) = v5;
  v7 = v5;
  if ( !v6 )
  {
    v13 = sub_7430D0(a2, 0, 0);
    sub_799F60(v7, v13);
  }
  if ( v14 )
    *(_BYTE *)(v7 + 96) |= 0x80u;
  v8 = sub_6CC370(a2);
  v9 = *(_QWORD *)(v8 + 48);
  if ( v9 )
    v10 = v9 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v10 = sub_6E8D60((__int64)a2, v8);
  v11 = sub_600210(a2[2168], "_cmd", 4u);
  result = sub_783940((__int64)a2, a1 + 48, 0, v11, v10, 1);
  *(_QWORD *)(a1 + 128) = result;
  return result;
}

