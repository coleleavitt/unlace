char __fastcall Z3_fixedpoint_add_fact(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  char v10; // al
  char result; // al
  __int64 v12; // rdi
  int v13; // r8d
  int v14; // r9d

  v10 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v10 )
  {
    sub_29FD60();
    v12 = *(_QWORD *)(a2 + 24);
    *(_DWORD *)(a1 + 1520) = 0;
    sub_654ED0(v12 + 48, a3, a4, a5, v13, v14);
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    return sub_654ED0((unsigned int)*(_QWORD *)(a2 + 24) + 48, a3, a4, a5, a5, a6);
  }
  return result;
}

