unsigned __int64 __fastcall sub_4745D0(int *a1, _QWORD *a2, unsigned int *a3, int *a4)
{
  unsigned int *v5; // rbx
  unsigned int *v6; // r14
  __int64 *v7; // r13
  unsigned int *v8; // rbx
  unsigned int *v9; // r14
  __int64 *v10; // r13
  void *v12; // [rsp+8h] [rbp-F8h] BYREF
  int v13[4]; // [rsp+10h] [rbp-F0h]
  void *v14; // [rsp+20h] [rbp-E0h]
  __int64 v15; // [rsp+28h] [rbp-D8h]
  void *v16; // [rsp+38h] [rbp-C8h] BYREF
  char v17[16]; // [rsp+40h] [rbp-C0h]
  int v18[2]; // [rsp+50h] [rbp-B0h]
  int v19; // [rsp+58h] [rbp-A8h]
  void *v20; // [rsp+68h] [rbp-98h] BYREF
  int v21[4]; // [rsp+70h] [rbp-90h]
  int v22[2]; // [rsp+80h] [rbp-80h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  void *ptr; // [rsp+98h] [rbp-68h] BYREF
  int v25[4]; // [rsp+A0h] [rbp-60h]
  int v26[2]; // [rsp+B0h] [rbp-50h]
  int v27; // [rsp+B8h] [rbp-48h]
  int v28[2]; // [rsp+C0h] [rbp-40h]

  *(_QWORD *)v28 = __readfsqword(0x28u);
  v12 = nullptr;
  v14 = nullptr;
  LODWORD(v15) = -1;
  v16 = nullptr;
  *(_QWORD *)v18 = 0;
  v19 = -1;
  *(_OWORD *)v13 = 0;
  *(_OWORD *)v17 = 0;
  sub_4722B0(a4, (__int64)&v12, (__int64)&v16, a3);
  *(_OWORD *)v21 = 0;
  v20 = nullptr;
  *(_QWORD *)v22 = 0;
  LODWORD(v23) = -1;
  ptr = nullptr;
  *(_QWORD *)v26 = 0;
  v27 = -1;
  *(_OWORD *)v25 = 0;
  sub_4722B0(a1, (__int64)&v20, (__int64)&ptr, a3);
  rangeset_t_sub2((int)&v12);
  rangeset_t_sub2((int)&v16);
  v5 = (unsigned int *)v12;
  v6 = (unsigned int *)((char *)v12 + 8 * *(_QWORD *)v13);
  if ( v12 != v6 )
  {
    while ( 1 )
    {
      v7 = *(__int64 **)(switch_dbctx(a1[2]) + 1480);
      sub_3D0670(v7, *v5);
      sub_3D0670(v7, v5[1]);
      if ( (unsigned int)sub_3CD500(a2, *v5, v5[1], 0) )
        break;
      v5 += 2;
      if ( v6 == v5 )
        goto LABEL_4;
    }
    if ( !under_debugger )
      interr(2062);
LABEL_20:
    BUG();
  }
LABEL_4:
  v8 = (unsigned int *)v16;
  v9 = (unsigned int *)((char *)v16 + 8 * *(_QWORD *)v17);
  if ( v16 != v9 )
  {
    while ( 1 )
    {
      v10 = *(__int64 **)(switch_dbctx(a1[2]) + 1480);
      sub_3D0670(v10, *v8);
      sub_3D0670(v10, v8[1]);
      if ( (unsigned int)sub_3CD500(a2, *v8, v8[1], 1) )
        break;
      v8 += 2;
      if ( v9 == v8 )
        goto LABEL_7;
    }
    if ( !under_debugger )
      interr(2062);
    goto LABEL_20;
  }
LABEL_7:
  if ( ptr )
  {
    *(_QWORD *)v25 = 0;
    qfree(ptr);
  }
  if ( v20 )
  {
    *(_QWORD *)v21 = 0;
    qfree(v20);
  }
  if ( v16 )
  {
    *(_QWORD *)v17 = 0;
    qfree(v16);
  }
  if ( v12 )
  {
    *(_QWORD *)v13 = 0;
    qfree(v12);
  }
  return *(_QWORD *)v28 - __readfsqword(0x28u);
}

