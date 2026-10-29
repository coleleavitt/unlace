unsigned __int64 __fastcall sub_488EA0(int *a1, int a2, unsigned __int64 *a3, int *a4)
{
  __int64 **v5; // rbx
  __int64 **v6; // r14
  __m128i *v7; // r13
  __int64 **v8; // rbx
  __int64 **v9; // r14
  __m128i *v10; // r13
  int v12; // [rsp-8h] [rbp-108h]
  void **v13; // [rsp+0h] [rbp-100h]
  void *v14; // [rsp+8h] [rbp-F8h] BYREF
  int v15[4]; // [rsp+10h] [rbp-F0h]
  void *v16; // [rsp+20h] [rbp-E0h]
  __int64 v17; // [rsp+28h] [rbp-D8h]
  int v18; // [rsp+30h] [rbp-D0h]
  void *v19; // [rsp+38h] [rbp-C8h] BYREF
  char v20[16]; // [rsp+40h] [rbp-C0h]
  int v21[2]; // [rsp+50h] [rbp-B0h]
  int v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  void *v24; // [rsp+68h] [rbp-98h] BYREF
  int v25[4]; // [rsp+70h] [rbp-90h]
  int v26[2]; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  void *ptr; // [rsp+98h] [rbp-68h] BYREF
  int v29[4]; // [rsp+A0h] [rbp-60h]
  int v30[2]; // [rsp+B0h] [rbp-50h]
  int v31; // [rsp+B8h] [rbp-48h]
  int v32[2]; // [rsp+C0h] [rbp-40h]

  *(_QWORD *)v32 = __readfsqword(0x28u);
  v14 = nullptr;
  v16 = nullptr;
  LODWORD(v17) = -1;
  v19 = nullptr;
  *(_QWORD *)v21 = 0;
  v22 = -1;
  *(_OWORD *)v15 = 0;
  *(_OWORD *)v20 = 0;
  sub_486AE0(a4, (__int64)&v14, (__int64)&v19, a3);
  v13 = &v24;
  *(_OWORD *)v25 = 0;
  v24 = nullptr;
  *(_QWORD *)v26 = 0;
  LODWORD(v27) = -1;
  ptr = nullptr;
  *(_QWORD *)v30 = 0;
  v31 = -1;
  *(_OWORD *)v29 = 0;
  sub_486AE0(a1, (__int64)&v24, (__int64)&ptr, a3);
  rangeset_t_sub2((int)&v14);
  rangeset_t_sub2((int)&v19);
  v5 = (__int64 **)v14;
  v6 = (__int64 **)((char *)v14 + 16 * *(_QWORD *)v15);
  if ( v14 != v6 )
  {
    while ( 1 )
    {
      v7 = *(__m128i **)(switch_dbctx(a1[2]) + 1672);
      sub_3D6230(v7, *v5);
      sub_3D6230(v7, v5[1]);
      if ( (unsigned int)sub_3D2F00(
                           a2,
                           v12,
                           v13,
                           (__int64)v14,
                           v15[0],
                           v15[2],
                           v16,
                           v17,
                           v18,
                           (int)v19,
                           *(int *)v20,
                           *(int *)&v20[8],
                           v21[0],
                           v22,
                           v23,
                           (int)v24,
                           v25[0],
                           v25[2],
                           v26[0],
                           v27) )
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
  v8 = (__int64 **)v19;
  v9 = (__int64 **)((char *)v19 + 16 * *(_QWORD *)v20);
  if ( v19 != v9 )
  {
    while ( 1 )
    {
      v10 = *(__m128i **)(switch_dbctx(a1[2]) + 1672);
      sub_3D6230(v10, *v8);
      sub_3D6230(v10, v8[1]);
      if ( (unsigned int)sub_3D2F00(
                           a2,
                           v12,
                           v13,
                           (__int64)v14,
                           v15[0],
                           v15[2],
                           v16,
                           v17,
                           v18,
                           (int)v19,
                           *(int *)v20,
                           *(int *)&v20[8],
                           v21[0],
                           v22,
                           v23,
                           (int)v24,
                           v25[0],
                           v25[2],
                           v26[0],
                           v27) )
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
    *(_QWORD *)v29 = 0;
    qfree(ptr);
  }
  if ( v24 )
  {
    *(_QWORD *)v25 = 0;
    qfree(v24);
  }
  if ( v19 )
  {
    *(_QWORD *)v20 = 0;
    qfree(v19);
  }
  if ( v14 )
  {
    *(_QWORD *)v15 = 0;
    qfree(v14);
  }
  return *(_QWORD *)v32 - __readfsqword(0x28u);
}
