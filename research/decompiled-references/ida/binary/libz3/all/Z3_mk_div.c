__int64 __fastcall Z3_mk_div(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r12
  __int64 v6; // rdi
  __int64 v7; // r15
  int v9[2]; // [rsp+10h] [rbp-40h] BYREF
  __int64 v10; // [rsp+18h] [rbp-38h]

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_2960B0(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  sub_15D1F10(a2);
  sub_15D2CD0(*(_QWORD *)(a1 + 232), 5, 0, 0, 0);
  v10 = a3;
  v6 = *(_QWORD *)(a1 + 232);
  *(_QWORD *)v9 = a2;
  v7 = sub_15DCAD0(v6, (int)v9, 0);
  sub_251FD0(a1, v7);
  sub_24FE40(a1, v7);
  if ( v5 )
  {
    sub_2BB620(v7);
    byte_1C7EBA0 = 1;
  }
  return v7;
}

