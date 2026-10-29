__int64 __fastcall Z3_mk_bv_sort(__int64 a1, int a2)
{
  char v4; // bp
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r12
  int v10; // [rsp+0h] [rbp-48h] BYREF
  char v11; // [rsp+8h] [rbp-40h]

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_295220();
  v5 = *(unsigned int *)(a1 + 1444);
  v6 = *(_QWORD *)(a1 + 232);
  v10 = a2;
  *(_DWORD *)(a1 + 1520) = 0;
  v11 = 0;
  v7 = sub_15D2CD0(v6, v5, 0, 1, &v10);
  v8 = v7;
  if ( v4 )
  {
    sub_2BB620(v7);
    sub_15D0DF0(&v10);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_15D0DF0(&v10);
  }
  return v8;
}

