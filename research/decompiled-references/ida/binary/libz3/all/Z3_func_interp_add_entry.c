void __fastcall Z3_func_interp_add_entry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // bl
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // eax

  v8 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v8 )
  {
    sub_29BA60();
    v9 = *(_QWORD *)(a3 + 32);
    v10 = *(_QWORD *)(a2 + 32);
    if ( v9 )
      goto LABEL_3;
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 32);
    v10 = *(_QWORD *)(a2 + 32);
    if ( v9 )
    {
LABEL_3:
      v11 = *(_DWORD *)(v9 - 4);
      goto LABEL_4;
    }
  }
  v11 = 0;
LABEL_4:
  if ( v11 != *(_DWORD *)(v10 + 8) )
  {
    sub_24EA30(a1, 2u, nullptr);
    if ( !v8 )
      return;
LABEL_8:
    byte_1C7EBA0 = 1;
    return;
  }
  sub_1349120(v10, v9, a4);
  if ( v8 )
    goto LABEL_8;
}

