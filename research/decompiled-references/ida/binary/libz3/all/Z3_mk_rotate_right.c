__int64 __fastcall Z3_mk_rotate_right(__int64 a1, int a2, __int64 a3)
{
  char v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r15
  int v9[2]; // [rsp+18h] [rbp-48h] BYREF
  int v10; // [rsp+20h] [rbp-40h] BYREF
  char v11; // [rsp+28h] [rbp-38h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_296D00();
  *(_QWORD *)v9 = a3;
  v10 = a2;
  v6 = *(_QWORD *)(a1 + 232);
  v11 = 0;
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = sub_15DCAD0(v6, (int)v9, 0);
  sub_251FD0(a1, v7);
  sub_24FE40(a1, v7);
  if ( v5 )
  {
    sub_2BB620(v7);
    sub_15D0DF0(&v10);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_15D0DF0(&v10);
  }
  return v7;
}

