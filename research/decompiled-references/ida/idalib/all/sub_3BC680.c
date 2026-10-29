__int64 __fastcall sub_3BC680(_QWORD *a1)
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

  *((_BYTE *)a1 + 1008) = 0;
  register_undo_handlers(&unk_2BF99E0, 36, 0, sub_3BE3D0);
  register_undo_handler(175, 0, 0, 0);
  v2 = (void *)a1[127];
  if ( v2 )
  {
    sub_8B88B0(a1[127]);
    operator delete(v2, 0x68u);
  }
  a1[127] = 0;
  sub_6FC2A0(*a1);
  sub_3DCF90(*a1);
  sub_3E93C0(*a1);
  sub_41B270(a1);
  v3 = a1[187];
  while ( v3 )
  {
    sub_3BBB90(*(_QWORD **)(v3 + 24));
    v4 = (void *)v3;
    v3 = *(_QWORD *)(v3 + 16);
    operator delete(v4, 0x30u);
  }
  v5 = *a1;
  a1[187] = 0;
  a1[188] = a1 + 186;
  a1[189] = a1 + 186;
  a1[190] = 0;
  sub_4E13D0(v5);
  v6 = (void *)a1[301];
  if ( v6 )
  {
    sub_8B88B0(a1[301]);
    operator delete(v6, 0x68u);
  }
  a1[301] = 0;
  v7 = *a1;
  a1[128] = -1;
  if ( (*(_BYTE *)(v7 + 72) & 1) == 0 )
    sub_3BC300((__int64)a1);
  v8 = (void *)a1[140];
  if ( v8 )
  {
    a1[141] = 0;
    qfree(v8);
    a1[140] = 0;
    a1[142] = 0;
  }
  v9 = a1[121];
  a1[143] = 0;
  while ( v9 )
  {
    sub_3BBD60(*(_QWORD **)(v9 + 24));
    v10 = (void *)v9;
    v9 = *(_QWORD *)(v9 + 16);
    operator delete(v10, 0x38u);
  }
  v11 = (void *)a1[145];
  a1[121] = 0;
  a1[122] = a1 + 120;
  a1[123] = a1 + 120;
  a1[124] = 0;
  if ( v11 )
  {
    a1[146] = 0;
    qfree(v11);
    a1[145] = 0;
    a1[147] = 0;
  }
  v12 = (void *)a1[130];
  a1[148] = 0;
  if ( v12 )
  {
    a1[131] = 0;
    qfree(v12);
    a1[130] = 0;
    a1[132] = 0;
  }
  a1[133] = 0;
  return sub_3FC000(a1);
}
