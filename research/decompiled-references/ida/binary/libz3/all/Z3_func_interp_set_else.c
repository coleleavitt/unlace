char __fastcall Z3_func_interp_set_else(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  char v7; // al
  char result; // al
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d

  v7 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v7 )
  {
    sub_29B9E0();
    *(_DWORD *)(a1 + 1520) = 0;
    sub_1349280(*(_QWORD *)(a2 + 32), a3, v9, v10, v11, v12);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return sub_1349280(*(_QWORD *)(a2 + 32), a3, a3, a4, a5, a6);
  }
  return result;
}

