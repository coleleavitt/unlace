void __fastcall sub_1705790(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(__int64); // rcx
  __int64 (__fastcall *v9)(__int64); // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  char v15; // r9
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-310h]
  __int128 v20; // [rsp+8h] [rbp-308h] BYREF
  __int64 v21; // [rsp+18h] [rbp-2F8h]
  _QWORD v22[5]; // [rsp+28h] [rbp-2E8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-2C0h] BYREF
  void *v24; // [rsp+60h] [rbp-2B0h]
  int v25; // [rsp+6Ch] [rbp-2A4h]
  char v26; // [rsp+80h] [rbp-290h]
  void *ptr; // [rsp+88h] [rbp-288h]
  __int64 v28; // [rsp+90h] [rbp-280h]
  int v29; // [rsp+98h] [rbp-278h]
  char v30; // [rsp+9Ch] [rbp-274h]
  __int64 v31; // [rsp+A0h] [rbp-270h] BYREF
  __int64 v32; // [rsp+E8h] [rbp-228h] BYREF
  __int64 v33; // [rsp+F0h] [rbp-220h]
  __int64 v34[2]; // [rsp+1D0h] [rbp-140h] BYREF
  __int64 v35; // [rsp+1E0h] [rbp-130h]
  int v36[62]; // [rsp+218h] [rbp-F8h] BYREF

  v6 = (_QWORD *)a1[1];
  if ( !v6 )
    return;
  BYTE4(v22[0]) = 0;
  LODWORD(v22[0]) = 17;
  memset(&v22[1], 0, 32);
  ptr = &v31;
  v7 = *v6;
  v26 = 0;
  v8 = *(__int64 (__fastcall **)(__int64))(v7 + 48);
  v30 = 1;
  v28 = 8;
  v29 = 0;
  if ( v8 != sub_15A1860 )
  {
    v10 = v8((__int64)v6);
    v6 = (_QWORD *)a1[1];
    v9 = *(__int64 (__fastcall **)(__int64))(*v6 + 40LL);
    if ( v9 == sub_15A1850 )
      goto LABEL_4;
LABEL_17:
    v19 = v10;
    v18 = v9((__int64)v6);
    v10 = v19;
    v11 = v18;
    goto LABEL_5;
  }
  v9 = *(__int64 (__fastcall **)(__int64))(v7 + 40);
  v10 = (__int64)(v6 + 3);
  if ( v9 != sub_15A1850 )
    goto LABEL_17;
LABEL_4:
  v11 = v6[6];
LABEL_5:
  sub_16FF270((__int64)&v32, *a1, v11, v10, (unsigned int *)v22, a6, (unsigned __int64)sub_16FF980);
  if ( !v30 )
    free(ptr);
  if ( v26 && v25 )
    free(v24);
  v12 = operator new(0x28u);
  *(_QWORD *)(v12 + 16) = 0;
  *(_QWORD *)(v12 + 24) = 0;
  *(_DWORD *)(v12 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v12, (std::__detail::_List_node_base *)v34);
  v13 = *a1;
  v20 = 0;
  ++v35;
  v14 = *(_QWORD *)(v13 + 544);
  v21 = 0;
  sub_16FF1B0(v22, (__int64)&v32, v14, 0, (__int64 *)&v20);
  sub_1705410((__int64)&v20);
  v15 = *(_DWORD *)(a1[1] + 8);
  sub_1A65F80(*a1, a2, 0, v22, (v15 & 4) != 0, (v15 & 0x20) != 0);
  sub_16FF8C0((__int64)v34, v34[1]);
  v16 = a1[1];
  v17 = 0;
  if ( v32 != v33 )
    v17 = v32;
  if ( v16 )
    sub_1700D50(*a1, v16, v36, v17, -1431655765 * ((v33 - v32) >> 5));
  v22[0] = &off_2C4EFD0;
  sub_1705410((__int64)&v23);
  nullsub_1203(v22);
  sub_1700A70((__int64)&v32);
}
