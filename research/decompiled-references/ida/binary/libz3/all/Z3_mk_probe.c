_QWORD *__fastcall Z3_mk_probe(__int64 a1, __int64 a2)
{
  char v2; // r12
  __int64 v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // r14
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29C910();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_180C5A0(v7, a2);
  v3 = sub_DEC5D0(a1, v7);
  v4 = (_QWORD *)v3;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v4 = (_QWORD *)sub_186B270(0x20u);
    sub_2518F0(v4, a1);
    *v4 = &off_1C4C900;
    if ( v5 )
      ++*(_DWORD *)(v5 + 8);
    v4[3] = v5;
    sub_24FBE0(a1, v4);
    if ( !v2 )
      return v4;
    sub_2BB620(v4);
  }
  else
  {
    sub_24EA30(a1, 3, 0);
    if ( !v2 )
      return nullptr;
    sub_2BB620(0);
  }
  byte_1C7EBA0 = 1;
  return v4;
}

