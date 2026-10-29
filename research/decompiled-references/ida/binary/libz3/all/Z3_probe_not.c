_QWORD *__fastcall Z3_probe_not(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v3; // r12
  __int64 v4; // r14
  _QWORD *v5; // rbx

  v2 = a2;
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29D170();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
    v2 = *(_QWORD *)(a2 + 24);
  v4 = sub_EF3D00(v2);
  v5 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0(v5, a1);
  *v5 = &off_1C4C900;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  v5[3] = v4;
  sub_24FBE0(a1, v5);
  if ( v3 )
  {
    sub_2BB620(v5);
    byte_1C7EBA0 = 1;
  }
  return v5;
}

