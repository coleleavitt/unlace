__int64 __fastcall Z3_optimize_get_statistics(__int64 a1, __int64 a2)
{
  char v3; // r13
  __int64 v4; // rbx
  __int64 v5; // rdi

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_2A0A50(a1, a2);
  *(_DWORD *)(a1 + 1520) = 0;
  v4 = sub_186B270(0x28u);
  sub_2518F0(v4, a1);
  v5 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)v4 = &off_1C4CB50;
  *(_OWORD *)(v4 + 24) = 0;
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 16LL))(v5, v4 + 24);
  if ( *(double *)(*(_QWORD *)(a2 + 24) + 88LL) != 0.0 )
    sub_1818270(v4 + 24, "time");
  sub_24FBE0(a1, v4);
  if ( v3 )
  {
    sub_2BB620(v4);
    byte_1C7EBA0 = 1;
  }
  return v4;
}

