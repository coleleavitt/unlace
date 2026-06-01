void __fastcall sub_172C310(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6,
        char a7)
{
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 (*v16)(void); // rdx
  __int64 v17; // rcx
  __int64 (*v18)(void); // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // [rsp+10h] [rbp-2F8h]
  unsigned int v29; // [rsp+20h] [rbp-2E8h] BYREF
  char v30; // [rsp+24h] [rbp-2E4h]
  __int64 v31; // [rsp+28h] [rbp-2E0h]
  __int64 v32; // [rsp+30h] [rbp-2D8h]
  __int64 v33; // [rsp+38h] [rbp-2D0h]
  unsigned __int64 v34; // [rsp+40h] [rbp-2C8h]
  void *ptr; // [rsp+58h] [rbp-2B0h]
  int v36; // [rsp+64h] [rbp-2A4h]
  char v37; // [rsp+78h] [rbp-290h]
  void *v38; // [rsp+80h] [rbp-288h]
  __int64 v39; // [rsp+88h] [rbp-280h]
  int v40; // [rsp+90h] [rbp-278h]
  char v41; // [rsp+94h] [rbp-274h]
  __int64 v42; // [rsp+98h] [rbp-270h] BYREF
  __int64 v43; // [rsp+E0h] [rbp-228h] BYREF
  __int64 v44; // [rsp+E8h] [rbp-220h]
  int v45[62]; // [rsp+210h] [rbp-F8h] BYREF

  v12 = sub_1E5F010(a3, 0);
  v14 = (__int64 *)a1[1];
  v30 = 0;
  v33 = a4;
  v29 = 31;
  v31 = 0;
  v34 = a5;
  v32 = v12;
  v15 = *v14;
  v38 = &v42;
  v16 = *(__int64 (**)(void))(v15 + 48);
  v37 = 0;
  v39 = 8;
  v40 = 0;
  v41 = 1;
  if ( (char *)v16 == (char *)sub_15A1860 )
  {
    v17 = (__int64)(v14 + 3);
  }
  else
  {
    v27 = v16();
    v14 = (__int64 *)a1[1];
    v17 = v27;
    v15 = *v14;
  }
  v18 = *(__int64 (**)(void))(v15 + 40);
  if ( (char *)v18 == (char *)sub_15A1850 )
  {
    v19 = v14[6];
  }
  else
  {
    v28 = v17;
    v26 = v18();
    v17 = v28;
    v19 = v26;
  }
  sub_16FF270((__int64)&v43, *a1, v19, v17, &v29, v13, 0);
  if ( !v41 )
    free(v38);
  if ( v37 && v36 )
    free(ptr);
  sub_17204D0((__int64 *)*a1, a3, a4, a5, a6, a7, (__int64)&v43);
  if ( a6 )
  {
    v22 = sub_17020B0((__int64)&v43, a5);
    if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      sub_172C2C0(a1, a2, v22, 0, v24, v25);
    else
      sub_172A9A0(a1, a2, 7u, v23, v24, v25);
  }
  else
  {
    v20 = a1[1];
    v21 = 0;
    if ( v43 != v44 )
      v21 = v43;
    if ( v20 )
      sub_1700D50(*a1, v20, v45, v21, -1431655765 * ((v44 - v43) >> 5));
  }
  sub_1700A70((__int64)&v43);
}
