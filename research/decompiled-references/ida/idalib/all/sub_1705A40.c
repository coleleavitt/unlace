void __fastcall sub_1705A40(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64); // rcx
  __int64 (__fastcall *v9)(__int64); // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  char v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-310h]
  __int128 v18; // [rsp+8h] [rbp-308h] BYREF
  __int64 v19; // [rsp+18h] [rbp-2F8h]
  _QWORD v20[5]; // [rsp+28h] [rbp-2E8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-2C0h] BYREF
  void *v22; // [rsp+60h] [rbp-2B0h]
  int v23; // [rsp+6Ch] [rbp-2A4h]
  char v24; // [rsp+80h] [rbp-290h]
  void *ptr; // [rsp+88h] [rbp-288h]
  __int64 v26; // [rsp+90h] [rbp-280h]
  int v27; // [rsp+98h] [rbp-278h]
  char v28; // [rsp+9Ch] [rbp-274h]
  __int64 v29; // [rsp+A0h] [rbp-270h] BYREF
  __int64 v30; // [rsp+E8h] [rbp-228h] BYREF
  __int64 v31; // [rsp+F0h] [rbp-220h]
  int v32[62]; // [rsp+218h] [rbp-F8h] BYREF

  v6 = (_QWORD *)a1[1];
  if ( !v6 )
    return;
  BYTE4(v20[0]) = 0;
  LODWORD(v20[0]) = 17;
  memset(&v20[1], 0, 32);
  ptr = &v29;
  v7 = *v6;
  v24 = 0;
  v8 = *(__int64 (__fastcall **)(__int64))(v7 + 48);
  v28 = 1;
  v26 = 8;
  v27 = 0;
  if ( v8 != sub_15A1860 )
  {
    v10 = v8((__int64)v6);
    v6 = (_QWORD *)a1[1];
    v9 = *(__int64 (__fastcall **)(__int64))(*v6 + 40LL);
    if ( v9 == sub_15A1850 )
      goto LABEL_4;
LABEL_17:
    v17 = v10;
    v16 = v9((__int64)v6);
    v10 = v17;
    v11 = v16;
    goto LABEL_5;
  }
  v9 = *(__int64 (__fastcall **)(__int64))(v7 + 40);
  v10 = (__int64)(v6 + 3);
  if ( v9 != sub_15A1850 )
    goto LABEL_17;
LABEL_4:
  v11 = v6[6];
LABEL_5:
  sub_16FF270((__int64)&v30, *a1, v11, v10, (unsigned int *)v20, a6, (unsigned __int64)sub_16FF980);
  if ( !v28 )
    free(ptr);
  if ( v24 && v23 )
    free(v22);
  v12 = *a1;
  v18 = 0;
  v19 = 0;
  sub_16FF1B0(v20, (__int64)&v30, *(_QWORD *)(v12 + 544), 0, (__int64 *)&v18);
  sub_1705410((__int64)&v18);
  v13 = *(_DWORD *)(a1[1] + 8);
  sub_1A65F80(*a1, a2, 0, v20, (v13 & 4) != 0, (v13 & 0x20) != 0);
  v14 = a1[1];
  v15 = 0;
  if ( v30 != v31 )
    v15 = v30;
  if ( v14 )
    sub_1700D50(*a1, v14, v32, v15, -1431655765 * ((v31 - v30) >> 5));
  v20[0] = &off_2C4EFD0;
  sub_1705410((__int64)&v21);
  nullsub_1203(v20);
  sub_1700A70((__int64)&v30);
}
