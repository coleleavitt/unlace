void __fastcall sub_1705480(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64, __int64, __int64, __int64, __int64); // r14
  int v8; // edx
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(__int64); // rcx
  __int64 (__fastcall *v13)(__int64); // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned int v22; // r8d
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // [rsp+0h] [rbp-310h]
  __int128 v26; // [rsp+8h] [rbp-308h] BYREF
  __int64 v27; // [rsp+18h] [rbp-2F8h]
  _QWORD v28[5]; // [rsp+28h] [rbp-2E8h] BYREF
  _BYTE v29[56]; // [rsp+50h] [rbp-2C0h] BYREF
  __int64 *v30; // [rsp+88h] [rbp-288h]
  __int64 v31; // [rsp+90h] [rbp-280h]
  int v32; // [rsp+98h] [rbp-278h]
  char v33; // [rsp+9Ch] [rbp-274h]
  __int64 v34; // [rsp+A0h] [rbp-270h] BYREF
  __int64 v35; // [rsp+E8h] [rbp-228h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-220h]
  __int64 (__fastcall *v37)(__int64, __int64, __int64, __int64, __int64, __int64); // [rsp+1B0h] [rbp-160h]
  __int64 v38; // [rsp+1B8h] [rbp-158h]
  int v39[62]; // [rsp+218h] [rbp-F8h] BYREF

  v6 = (_QWORD *)a1[1];
  if ( v6 )
  {
    if ( a3 == 24 )
    {
      v7 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))sub_16FE5D0;
      v8 = 14;
    }
    else
    {
      if ( a3 > 0x18 )
      {
        if ( a3 <= 0x1B )
        {
          v7 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))sub_16FE590;
          v8 = 15;
          goto LABEL_6;
        }
        goto LABEL_24;
      }
      if ( a3 != 23 )
      {
LABEL_24:
        sub_1705790(a1, a2);
        return;
      }
      v7 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64, __int64))sub_16FE580;
      v8 = 13;
    }
LABEL_6:
    LODWORD(v28[0]) = v8;
    BYTE4(v28[0]) = 0;
    memset(&v28[1], 0, 32);
    v30 = &v34;
    v11 = *v6;
    v29[48] = 0;
    v12 = *(__int64 (__fastcall **)(__int64))(v11 + 48);
    v33 = 1;
    v31 = 8;
    v32 = 0;
    if ( v12 == sub_15A1860 )
    {
      v13 = *(__int64 (__fastcall **)(__int64))(v11 + 40);
      v14 = (__int64)(v6 + 3);
      if ( v13 == sub_15A1850 )
      {
LABEL_8:
        v15 = v6[6];
        goto LABEL_9;
      }
    }
    else
    {
      v14 = v12((__int64)v6);
      v6 = (_QWORD *)a1[1];
      v13 = *(__int64 (__fastcall **)(__int64))(*v6 + 40LL);
      if ( v13 == sub_15A1850 )
        goto LABEL_8;
    }
    v25 = v14;
    v24 = v13((__int64)v6);
    v14 = v25;
    v15 = v24;
LABEL_9:
    sub_16FF270((__int64)&v35, *a1, v15, v14, (unsigned int *)v28, a6, 0);
    sub_17038E0((__int64)v28);
    v16 = *a1;
    v26 = 0;
    v27 = 0;
    sub_16FF1B0(v28, (__int64)&v35, *(_QWORD *)(v16 + 544), 0, (__int64 *)&v26);
    sub_1705410((__int64)&v26);
    v17 = a1[1];
    v18 = *a1;
    v37 = v7;
    v38 = 0;
    sub_1A65F80(v18, a2, 1, v28, (*(_DWORD *)(v17 + 8) & 4) != 0, (*(_DWORD *)(v17 + 8) & 0x20) != 0);
    v19 = a1[1];
    if ( (*(_BYTE *)(v19 + 8) & 4) != 0 )
    {
      v23 = *a1;
      v37 = sub_16FEB80;
      v38 = 0;
      sub_1A65F80(v23, a2, 6, v28, (*(_DWORD *)(v19 + 8) & 4) != 0, (*(_DWORD *)(v19 + 8) & 0x20) != 0);
      v20 = v35;
      v19 = a1[1];
      v21 = *a1;
      v22 = -1431655765 * ((v36 - v35) >> 5);
      if ( v35 == v36 )
        v20 = 0;
      if ( !v19 )
        goto LABEL_13;
    }
    else
    {
      v20 = v35;
      v21 = *a1;
      v22 = -1431655765 * ((v36 - v35) >> 5);
      if ( v36 == v35 )
        v20 = 0;
    }
    sub_1700D50(v21, v19, v39, v20, v22);
LABEL_13:
    v28[0] = &off_2C4EFD0;
    sub_1705410((__int64)v29);
    nullsub_1203(v28);
    sub_1700A70((__int64)&v35);
  }
}
