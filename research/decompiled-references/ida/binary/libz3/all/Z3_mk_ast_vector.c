_QWORD *__fastcall Z3_mk_ast_vector(__int64 a1)
{
  char v1; // r12
  __int64 v2; // rax
  __int64 v3; // r14
  _QWORD *v4; // rbx

  v1 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v1 )
    sub_29E800();
  *(_DWORD *)(a1 + 1520) = 0;
  v2 = sub_186B270(0x28u);
  v3 = *(_QWORD *)(a1 + 232);
  v4 = (_QWORD *)v2;
  sub_2518F0(v2, a1);
  v4[3] = v3;
  *v4 = &off_1C4CA20;
  v4[4] = 0;
  sub_24FBE0(a1, (__int64)v4);
  if ( v1 )
  {
    sub_2BB620(v4);
    byte_1C7EBA0 = 1;
  }
  return v4;
}

