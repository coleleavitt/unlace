__int64 __fastcall Z3_mk_true(__int64 a1)
{
  char v1; // al
  __int64 v2; // rax
  __int64 v4; // rax
  __int64 v5; // rbp

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
  {
    sub_295C60();
    v4 = *(_QWORD *)(a1 + 232);
    *(_DWORD *)(a1 + 1520) = 0;
    v5 = *(_QWORD *)(v4 + 856);
    sub_2BB620(v5);
    byte_1C7EBA0 = 1;
    return v5;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 232);
    *(_DWORD *)(a1 + 1520) = 0;
    return *(_QWORD *)(v2 + 856);
  }
}

