__int64 __fastcall Z3_mk_char_sort(__int64 a1)
{
  char v1; // al
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v5; // rax

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
  {
    sub_297A60();
    v5 = *(_QWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 1520) = 0;
    v3 = *(_QWORD *)(v5 + 64);
    sub_251FD0(a1, v3);
    sub_2BB620(v3);
    byte_1C7EBA0 = 1;
  }
  else
  {
    v2 = *(_QWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 1520) = 0;
    v3 = *(_QWORD *)(v2 + 64);
    sub_251FD0(a1, v3);
  }
  return v3;
}

