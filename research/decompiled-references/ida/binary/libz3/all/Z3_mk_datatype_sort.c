__int64 __fastcall Z3_mk_datatype_sort(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rbp
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v7; // [rsp+0h] [rbp-68h] BYREF
  char v8; // [rsp+8h] [rbp-60h]
  _BYTE v9[88]; // [rsp+10h] [rbp-58h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_295760();
  v3 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  sub_15F01E0(v9, v3);
  v7 = a2;
  v8 = 2;
  v4 = sub_15F0200(v9);
  v5 = sub_15D2CD0(v3, v4, 0, 1, &v7);
  sub_251FD0(a1, v5);
  if ( v2 )
  {
    sub_2BB620(v5);
    sub_15D0DF0(&v7);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_15D0DF0(&v7);
  }
  return v5;
}

