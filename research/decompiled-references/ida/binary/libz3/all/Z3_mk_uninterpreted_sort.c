__int64 __fastcall Z3_mk_uninterpreted_sort(__int64 a1, __int64 a2)
{
  char v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rbp
  _QWORD v7[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_295140();
  v4 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v7[0] = a2;
  v5 = sub_15D4E60(v4, v7, 0, 0);
  sub_251FD0(a1, v5);
  if ( v3 )
  {
    sub_2BB620(v5);
    byte_1C7EBA0 = 1;
  }
  return v5;
}

