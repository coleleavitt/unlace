__int64 __fastcall Z3_mk_ast_map(__int64 a1)
{
  char v1; // r12
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // rbx
  _OWORD *v5; // rax

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_29EA70();
  *(_DWORD *)(a1 + 1520) = 0;
  v2 = sub_186B270(0x38u);
  v3 = *(_QWORD *)(a1 + 232);
  v4 = v2;
  sub_2518F0(v2, a1);
  *(_QWORD *)(v4 + 24) = v3;
  *(_QWORD *)v4 = &off_1C4CAD8;
  v5 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(v4 + 32) = v5;
  *(_QWORD *)(v4 + 40) = 8;
  *(_DWORD *)(v4 + 48) = 0;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v5[4] = 0;
  v5[5] = 0;
  v5[6] = 0;
  v5[7] = 0;
  sub_24FBE0(a1, v4);
  if ( v1 )
  {
    sub_2BB620(v4);
    byte_1C7EBA0 = 1;
  }
  return v4;
}

