void __fastcall sub_1715700(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  char v7; // dl
  __int64 v8; // rbp
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 (*v12)(void); // rdx
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-2E0h]
  void *ptr; // [rsp+8h] [rbp-2D8h] BYREF
  __int64 v25; // [rsp+10h] [rbp-2D0h]
  __int64 v26; // [rsp+18h] [rbp-2C8h]
  _QWORD v27[5]; // [rsp+20h] [rbp-2C0h] BYREF
  int v28; // [rsp+4Ch] [rbp-294h]
  char v29; // [rsp+60h] [rbp-280h]
  void *v30; // [rsp+68h] [rbp-278h]
  __int64 v31; // [rsp+70h] [rbp-270h]
  int v32; // [rsp+78h] [rbp-268h]
  char v33; // [rsp+7Ch] [rbp-264h]
  __int64 v34; // [rsp+80h] [rbp-260h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-218h] BYREF
  __int64 v36; // [rsp+D0h] [rbp-210h]
  __int64 v37[2]; // [rsp+1B0h] [rbp-130h] BYREF
  __int64 v38; // [rsp+1C0h] [rbp-120h]
  int v39[58]; // [rsp+1F8h] [rbp-E8h] BYREF

  v6 = *(_QWORD *)(*a1 + 544);
  if ( !v6 )
    return;
  v7 = *(_BYTE *)(v6 + 8) & 0x7F;
  if ( v7 == 20 )
  {
    v8 = v6 - 48;
    if ( v6 == 48 )
      return;
  }
  else
  {
    if ( v7 != 23 )
      return;
    if ( v6 == 48 )
      return;
    v8 = *(_QWORD *)(v6 + 40);
    if ( !v8 )
      return;
  }
  v10 = (_QWORD *)a1[1];
  LODWORD(ptr) = 0;
  BYTE4(ptr) = 0;
  v25 = 0;
  v26 = 0;
  v27[0] = 0;
  v27[1] = 0;
  v30 = &v34;
  v11 = *v10;
  v29 = 0;
  v12 = *(__int64 (**)(void))(v11 + 48);
  v33 = 1;
  v31 = 8;
  v32 = 0;
  if ( (char *)v12 != (char *)sub_15A1860 )
  {
    v21 = v12();
    v10 = (_QWORD *)a1[1];
    v14 = v21;
    v13 = *(__int64 (__fastcall **)(__int64))(*v10 + 40LL);
    if ( v13 == sub_15A1850 )
      goto LABEL_6;
LABEL_25:
    v23 = v14;
    v22 = ((__int64 (*)(void))v13)();
    v14 = v23;
    v15 = v22;
    goto LABEL_7;
  }
  v13 = *(__int64 (__fastcall **)(__int64))(v11 + 40);
  v14 = (__int64)(v10 + 3);
  if ( v13 != sub_15A1850 )
    goto LABEL_25;
LABEL_6:
  v15 = v10[6];
LABEL_7:
  sub_16FF270((__int64)&v35, *a1, v15, v14, (unsigned int *)&ptr, a6, 0);
  if ( !v33 )
    free(v30);
  if ( v29 && v28 )
    free((void *)v27[4]);
  v16 = operator new(0x28u);
  *(_QWORD *)(v16 + 16) = 0;
  *(_QWORD *)(v16 + 24) = 0;
  *(_DWORD *)(v16 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v16, (std::__detail::_List_node_base *)v37);
  BYTE4(v26) = 1;
  ptr = v27;
  v17 = *a1;
  LODWORD(v26) = 0;
  v25 = 16;
  v18 = *(_QWORD *)(v17 + 544);
  ++v38;
  sub_1714F30(v8, 1, 1, 0, 0, v18, (__int64)&ptr, 1u, &v35, 1u, 0);
  sub_16FF8C0((__int64)v37, v37[1]);
  v19 = a1[1];
  v20 = 0;
  if ( v35 != v36 )
    v20 = v35;
  if ( v19 )
    sub_1700D50(*a1, v19, v39, v20, -1431655765 * ((v36 - v35) >> 5));
  if ( !BYTE4(v26) )
    free(ptr);
  sub_1700A70((__int64)&v35);
}
