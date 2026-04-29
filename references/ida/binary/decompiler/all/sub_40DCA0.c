__int64 sub_40DCA0()
{
  size_t v0; // rbx
  unsigned int v1; // r12d
  __int64 v3; // r12
  unsigned int v4; // r14d
  __int64 v5; // [rsp+0h] [rbp-F0h]
  _BYTE *v6; // [rsp+8h] [rbp-E8h]
  __int64 v7[4]; // [rsp+28h] [rbp-C8h] BYREF
  void *v8; // [rsp+48h] [rbp-A8h] BYREF
  __int128 v9; // [rsp+50h] [rbp-A0h]
  __int64 v10; // [rsp+60h] [rbp-90h]
  __int64 v11[3]; // [rsp+68h] [rbp-88h] BYREF
  unsigned __int8 v12; // [rsp+80h] [rbp-70h]
  void *src; // [rsp+88h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+90h] [rbp-60h]
  unsigned __int8 v15; // [rsp+A0h] [rbp-50h]
  unsigned __int64 v16; // [rsp+B0h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  src = 0;
  *(_OWORD *)n = 0;
  ++qword_4EFF68;
  sub_6AEF0((__int64 *)&src);
  v0 = n[0];
  v8 = 0;
  v9 = 0;
  if ( n[0] )
  {
    v8 = (void *)qalloc_or_throw();
    *((_QWORD *)&v9 + 1) = v0;
    memcpy(v8, src, v0);
    *(_QWORD *)&v9 = v0;
  }
  v10 = -1;
  netnode_check();
  netnode_check();
  if ( v5 == -1 )
  {
    netnode_supset();
    v7[0] = 1;
    netnode_supset();
    v11[0] = 1;
    netnode_supset();
  }
  else
  {
    v10 = v11[0];
  }
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( netnode_altval() || sub_40DB00(&v8, 0) )
  {
    sub_6C720((__int64)"empty_state: basic state mismatch\n", 0);
LABEL_10:
    v1 = 0;
    goto LABEL_11;
  }
  *(_OWORD *)n = 0;
  src = 0;
  src = (void *)qvector_reserve();
  n[0] = 5;
  strcpy((char *)src, "nope");
  v3 = sub_40D8B0((__int64)&v8, (__int64)&src);
  if ( src )
  {
    n[0] = 0;
    qfree();
  }
  if ( v3 != -1 )
  {
    sub_6C720((__int64)"empty_state: contains should miss\n");
    goto LABEL_10;
  }
  sub_40D570((__int64)v11, (__int64)&v8, -1);
  v1 = v12;
  if ( v12 )
  {
    sub_40CF90((__int64)&src, (__int64)&v8, -1);
    v4 = v15;
    if ( v15 )
    {
      v6 = (_BYTE *)qvector_reserve();
      *v6 = 120;
      v6[1] = 0;
      sub_3D8380((__int64)v7);
      if ( v7[0] )
        qfree();
      if ( v6 )
        qfree();
      if ( src )
        qfree();
    }
    else
    {
      sub_6C720((__int64)"FAIL (%s): expected error, got success\n", "move BADNODE should fail");
    }
    if ( v11[0] )
      qfree();
    v1 = v4;
  }
  else
  {
    sub_6C720((__int64)"FAIL (%s): expected error, got success\n", "del BADNODE should fail");
  }
LABEL_11:
  netnode_kill();
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree();
  }
  return v1;
}
