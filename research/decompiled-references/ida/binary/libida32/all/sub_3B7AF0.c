__int64 __fastcall sub_3B7AF0(_QWORD *a1)
{
  void *v2; // rbp
  __int64 v3; // rbp
  void *v4; // rdi
  __int64 v5; // rdi
  void *v6; // rbp
  __int64 v7; // rax
  void *v8; // rdi
  __int64 v9; // rbp
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi

  *((_BYTE *)a1 + 1000) = 0;
  register_undo_handlers(&unk_2BCFA40, 36, 0, sub_3B95A0);
  register_undo_handler(175, 0, 0, 0);
  v2 = (void *)a1[126];
  if ( v2 )
  {
    sub_894F00(a1[126]);
    operator delete(v2, 0x60u);
  }
  a1[126] = 0;
  sub_6DBC40(*a1);
  sub_3D70D0(*a1);
  sub_3E3130(*a1);
  sub_407FD0(a1);
  v3 = a1[181];
  while ( v3 )
  {
    sub_3B66F0(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x28u);
  }
  v5 = *a1;
  a1[181] = 0;
  a1[182] = a1 + 180;
  a1[183] = a1 + 180;
  a1[184] = 0;
  sub_4C9E70(v5);
  v6 = (void *)a1[290];
  if ( v6 )
  {
    sub_894F00(a1[290]);
    operator delete(v6, 0x60u);
  }
  a1[290] = 0;
  v7 = *a1;
  *((_DWORD *)a1 + 254) = -1;
  if ( (*(_BYTE *)(v7 + 72) & 1) == 0 )
    sub_3B7770((__int64)a1);
  v8 = (void *)a1[139];
  if ( v8 )
  {
    a1[140] = 0;
    qfree(v8);
    a1[139] = 0;
    a1[141] = 0;
  }
  v9 = a1[120];
  a1[142] = 0;
  while ( v9 )
  {
    sub_3B68C0(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x30u);
  }
  v11 = (void *)a1[144];
  a1[120] = 0;
  a1[121] = a1 + 119;
  a1[122] = a1 + 119;
  a1[123] = 0;
  if ( v11 )
  {
    a1[145] = 0;
    qfree(v11);
    a1[144] = 0;
    a1[146] = 0;
  }
  v12 = (void *)a1[129];
  a1[147] = 0;
  if ( v12 )
  {
    a1[130] = 0;
    qfree(v12);
    a1[129] = 0;
    a1[131] = 0;
  }
  a1[132] = 0;
  return sub_3E90C0(a1);
}

