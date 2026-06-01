__int64 __fastcall Z3_func_entry_get_value(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rbp
  __int64 v5; // rax

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
  {
    sub_29BB30();
    v5 = *(_QWORD *)(a2 + 40);
    *(_DWORD *)(a1 + 1520) = 0;
    v3 = *(_QWORD *)(v5 + 8);
    sub_251FD0(a1, v3);
    sub_2BB620(v3);
    byte_1C7EBA0 = 1;
  }
  else
  {
    *(_DWORD *)(a1 + 1520) = 0;
    v3 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL);
    sub_251FD0(a1, v3);
  }
  return v3;
}

