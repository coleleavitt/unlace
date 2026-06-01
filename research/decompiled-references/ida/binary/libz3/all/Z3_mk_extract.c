__int64 __fastcall Z3_mk_extract(__int64 a1, unsigned int a2, int a3, __int64 a4)
{
  char v7; // r12
  __int64 v8; // rdi
  __int64 v9; // r15
  int v11[2]; // [rsp+18h] [rbp-58h] BYREF
  unsigned int v12; // [rsp+20h] [rbp-50h] BYREF
  char v13; // [rsp+28h] [rbp-48h]
  int v14; // [rsp+30h] [rbp-40h] BYREF
  char v15; // [rsp+38h] [rbp-38h]

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
    sub_296AB0(a1, a2);
  v14 = a3;
  *(_QWORD *)v11 = a4;
  v12 = a2;
  v8 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v13 = 0;
  v15 = 0;
  v9 = sub_15DCAD0(v8, (int)v11, 0);
  sub_251FD0(a1, v9);
  sub_24FE40(a1, v9);
  sub_15D0DF0(&v14);
  sub_15D0DF0(&v12);
  if ( v7 )
  {
    sub_2BB620(v9);
    byte_1C7EBA0 = 1;
  }
  return v9;
}

