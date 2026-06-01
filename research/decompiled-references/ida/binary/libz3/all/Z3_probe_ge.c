_QWORD *__fastcall Z3_probe_ge(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbx

  v4 = a2;
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29D070();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a3 )
    a3 = *(_QWORD *)(a3 + 24);
  if ( a2 )
    v4 = *(_QWORD *)(a2 + 24);
  v6 = sub_EF3EF0(v4, a3);
  v7 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0(v7, a1);
  *v7 = &off_1C4C900;
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  v7[3] = v6;
  sub_24FBE0(a1, v7);
  if ( v5 )
  {
    sub_2BB620(v7);
    byte_1C7EBA0 = 1;
  }
  return v7;
}

