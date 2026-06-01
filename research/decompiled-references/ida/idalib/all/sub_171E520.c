void __fastcall sub_171E520(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  __int64 v7; // rax
  _QWORD *v8; // rdi
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 (*v11)(void); // rdx
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // [rsp-10h] [rbp-3C8h]
  __int64 v22; // [rsp+0h] [rbp-3B8h]
  __int64 v23; // [rsp+28h] [rbp-390h] BYREF
  void *v24[2]; // [rsp+30h] [rbp-388h] BYREF
  int v25; // [rsp+40h] [rbp-378h]
  char v26; // [rsp+44h] [rbp-374h]
  __int64 v27; // [rsp+48h] [rbp-370h] BYREF
  unsigned int v28; // [rsp+D0h] [rbp-2E8h] BYREF
  char v29; // [rsp+D4h] [rbp-2E4h]
  __int64 v30; // [rsp+D8h] [rbp-2E0h]
  __int64 v31; // [rsp+E0h] [rbp-2D8h]
  __int64 v32; // [rsp+E8h] [rbp-2D0h]
  __int64 v33; // [rsp+F0h] [rbp-2C8h]
  void *v34; // [rsp+108h] [rbp-2B0h]
  int v35; // [rsp+114h] [rbp-2A4h]
  char v36; // [rsp+128h] [rbp-290h]
  void *ptr; // [rsp+130h] [rbp-288h]
  __int64 v38; // [rsp+138h] [rbp-280h]
  int v39; // [rsp+140h] [rbp-278h]
  char v40; // [rsp+144h] [rbp-274h]
  __int64 v41; // [rsp+148h] [rbp-270h] BYREF
  __int64 v42; // [rsp+190h] [rbp-228h] BYREF
  __int64 v43; // [rsp+198h] [rbp-220h]
  __int64 v44[2]; // [rsp+278h] [rbp-140h] BYREF
  __int64 v45; // [rsp+288h] [rbp-130h]
  int v46[62]; // [rsp+2C0h] [rbp-F8h] BYREF

  v23 = a3;
  v7 = sub_1897000(*(_QWORD *)(*a1 + 736), &v23, a4, 0);
  if ( !v7 )
    return;
  v8 = (_QWORD *)a1[1];
  v9 = v7;
  v28 = 12;
  v29 = 0;
  ptr = &v41;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v10 = *v8;
  v36 = 0;
  v11 = *(__int64 (**)(void))(v10 + 48);
  v40 = 1;
  v38 = 8;
  v39 = 0;
  if ( (char *)v11 != (char *)sub_15A1860 )
  {
    v20 = v11();
    v8 = (_QWORD *)a1[1];
    v13 = v20;
    v12 = *(__int64 (__fastcall **)(__int64))(*v8 + 40LL);
    if ( v12 == sub_15A1850 )
      goto LABEL_4;
LABEL_18:
    v22 = v13;
    v14 = ((__int64 (*)(void))v12)();
    v13 = v22;
    goto LABEL_5;
  }
  v12 = *(__int64 (__fastcall **)(__int64))(v10 + 40);
  v13 = (__int64)(v8 + 3);
  if ( v12 != sub_15A1850 )
    goto LABEL_18;
LABEL_4:
  v14 = v8[6];
LABEL_5:
  *((_QWORD *)&v21 + 1) = 0;
  *(_QWORD *)&v21 = sub_16FFA20;
  sub_16FF270((__int64)&v42, *a1, v14, v13, &v28, (__int64)sub_16FFA20, v21);
  v15 = operator new(0x28u);
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v15, (std::__detail::_List_node_base *)v44);
  v25 = 0;
  v24[0] = &v27;
  v16 = *a1;
  ++v45;
  v24[1] = &word_10;
  v17 = *(_QWORD *)(v16 + 544);
  v26 = 1;
  sub_171DC00((__int64)&v28, v9, 1, 1, v17, (__int64)v24, (__int64)&v42, a5, 1u, 1);
  sub_16FF8C0((__int64)v44, v44[1]);
  v18 = a1[1];
  v19 = 0;
  if ( v42 != v43 )
    v19 = v42;
  if ( v18 )
    sub_1700D50(*a1, v18, v46, v19, -1431655765 * ((v43 - v42) >> 5));
  if ( !v26 )
    free(v24[0]);
  sub_1700A70((__int64)&v42);
  if ( !v40 )
    free(ptr);
  if ( v36 )
  {
    if ( v35 )
      free(v34);
  }
}
