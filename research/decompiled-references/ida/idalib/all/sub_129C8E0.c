void __fastcall sub_129C8E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  void **v4; // rbp
  void **v5; // r15
  __int64 v6; // rax
  unsigned __int8 (__fastcall *v7)(__int64, _QWORD *); // rdx
  void **v8; // r13
  __int64 v10[2]; // [rsp+10h] [rbp-158h] BYREF
  void *v11; // [rsp+20h] [rbp-148h] BYREF
  __int64 v12; // [rsp+28h] [rbp-140h]
  __int64 v13; // [rsp+30h] [rbp-138h] BYREF
  void *v14[2]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v15; // [rsp+50h] [rbp-118h] BYREF
  void *v16[2]; // [rsp+60h] [rbp-108h] BYREF
  __int64 v17; // [rsp+70h] [rbp-F8h] BYREF
  void **v18; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v19; // [rsp+88h] [rbp-E0h]
  __int16 v20; // [rsp+A0h] [rbp-C8h]
  _QWORD v21[2]; // [rsp+B0h] [rbp-B8h] BYREF
  _BYTE v22[16]; // [rsp+C0h] [rbp-A8h] BYREF
  char *v23; // [rsp+D0h] [rbp-98h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-90h]
  char v25[16]; // [rsp+E0h] [rbp-88h] BYREF
  char *v26; // [rsp+F0h] [rbp-78h]
  __int64 v27; // [rsp+F8h] [rbp-70h]
  char v28[16]; // [rsp+100h] [rbp-68h] BYREF
  _QWORD v29[2]; // [rsp+110h] [rbp-58h] BYREF
  char v30[16]; // [rsp+120h] [rbp-48h] BYREF
  char v31; // [rsp+130h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 8);
  v4 = (void **)v29;
  v21[0] = v22;
  sub_129A5D0(v21, *(_BYTE **)(v3 + 104), *(_QWORD *)(v3 + 104) + *(_QWORD *)(v3 + 112));
  v23 = v25;
  strcpy(v25, "..");
  v24 = 2;
  v26 = v28;
  strcpy(v28, "include");
  v18 = (void **)v21;
  v19 = 3;
  v27 = 7;
  sub_129A750(&v11, (__int64 *)&v18);
  do
  {
    while ( 1 )
    {
      v4 -= 4;
      if ( *v4 == v4 + 2 )
        break;
      operator delete(*v4);
      if ( v4 == v21 )
        goto LABEL_4;
    }
  }
  while ( v4 != v21 );
LABEL_4:
  v21[0] = v22;
  v5 = (void **)&v31;
  sub_129A5D0(v21, v11, (__int64)v11 + v12);
  sub_129BDF0((char *)&v23, a1 + 16);
  v26 = v28;
  strcpy(v28, "c++");
  v18 = (void **)v21;
  v19 = 4;
  v27 = 3;
  v29[0] = v30;
  strcpy(v30, "v1");
  v29[1] = 2;
  sub_129A750(v14, (__int64 *)&v18);
  do
  {
    while ( 1 )
    {
      v5 -= 4;
      if ( *v5 == v5 + 2 )
        break;
      operator delete(*v5);
      if ( v5 == v21 )
        goto LABEL_7;
    }
  }
  while ( v5 != v21 );
LABEL_7:
  v6 = sub_112C5D0(a1);
  v7 = *(unsigned __int8 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v6 + 96LL);
  LOWORD(v23) = 260;
  v21[0] = v14;
  if ( v7(v6, v21) )
  {
    v21[0] = v22;
    sub_129A5D0(v21, v11, (__int64)v11 + v12);
    v23 = v25;
    strcpy(v25, "c++");
    v10[0] = (__int64)v21;
    v10[1] = 3;
    v26 = v28;
    strcpy(v28, "v1");
    v24 = 3;
    v27 = 2;
    sub_129A750(v16, v10);
    v20 = 260;
    v18 = v16;
    sub_112FA80(a2, a3, (__int64)&v18);
    if ( v16[0] != &v17 )
      operator delete(v16[0]);
    v8 = (void **)v29;
    do
    {
      while ( 1 )
      {
        v8 -= 4;
        if ( *v8 == v8 + 2 )
          break;
        operator delete(*v8);
        if ( v8 == v21 )
          goto LABEL_22;
      }
    }
    while ( v8 != v21 );
LABEL_22:
    LOWORD(v23) = 260;
    v21[0] = v14;
    sub_112FA80(a2, a3, (__int64)v21);
  }
  if ( v14[0] != &v15 )
    operator delete(v14[0]);
  if ( v11 != &v13 )
    operator delete(v11);
}
