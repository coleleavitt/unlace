__int64 __fastcall Z3_tactic_apply_ex(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // r13
  __int64 v8; // rdi
  void (*v9)(); // rax
  int *v10; // rax
  __int64 v11; // rbp
  int *v13; // [rsp+8h] [rbp-50h]
  _BYTE v14[8]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v15[64]; // [rsp+18h] [rbp-40h] BYREF

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_29D3D0();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_1857380(v14);
  if ( !a2 )
    BUG();
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(void (**)())(*(_QWORD *)v8 + 120LL);
  if ( v9 != nullsub_94 )
    ((void (__fastcall *)(__int64, _BYTE *))v9)(v8, v14);
  v10 = (int *)(a4 + 24);
  if ( !a4 )
    v10 = &qword_1C7F4C8;
  v13 = v10;
  sub_18632D0(v10, v14);
  sub_1858590(v15, v13);
  v11 = sub_2469D0(a1, a2, a3, (__int64)v15);
  sub_18572D0(v15);
  if ( v7 )
  {
    sub_2BB620(v11);
    sub_1857540(v14);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_1857540(v14);
  }
  return v11;
}

