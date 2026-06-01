_QWORD *__fastcall Z3_tactic_using_params(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // r12
  __int64 v6; // rdi
  void (*v7)(); // rax
  int *v8; // rbx
  __int64 v9; // r15
  _QWORD *v10; // rbx
  _BYTE v12[64]; // [rsp+8h] [rbp-40h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29CCA0();
  *(_DWORD *)(a1 + 1520) = 0;
  sub_1857380(v12);
  if ( !a2 )
    BUG();
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(void (**)())(*(_QWORD *)v6 + 120LL);
  if ( v7 != nullsub_94 )
    ((void (__fastcall *)(__int64, _BYTE *))v7)(v6, v12);
  if ( a3 )
    v8 = (int *)(a3 + 24);
  else
    v8 = &qword_1C7F4C8;
  sub_18632D0(v8, v12);
  v9 = sub_EE8E00(*(_QWORD *)(a2 + 24), v8);
  v10 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0(v10, a1);
  *v10 = &off_1C4C8E0;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  v10[3] = v9;
  sub_24FBE0(a1, v10);
  if ( v5 )
  {
    sub_2BB620(v10);
    sub_1857540(v12);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_1857540(v12);
  }
  return v10;
}

