void __fastcall sub_1709FA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  char *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-2E0h]
  unsigned int v20; // [rsp+10h] [rbp-2D8h] BYREF
  char v21; // [rsp+14h] [rbp-2D4h]
  __int64 v22; // [rsp+18h] [rbp-2D0h]
  __int64 v23; // [rsp+20h] [rbp-2C8h]
  __int64 v24; // [rsp+28h] [rbp-2C0h]
  __int64 v25; // [rsp+30h] [rbp-2B8h]
  void *ptr; // [rsp+48h] [rbp-2A0h]
  int v27; // [rsp+54h] [rbp-294h]
  char v28; // [rsp+68h] [rbp-280h]
  void *v29; // [rsp+70h] [rbp-278h]
  __int64 v30; // [rsp+78h] [rbp-270h]
  int v31; // [rsp+80h] [rbp-268h]
  char v32; // [rsp+84h] [rbp-264h]
  __int64 v33; // [rsp+88h] [rbp-260h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-218h] BYREF
  __int64 v35; // [rsp+D8h] [rbp-210h]
  __int64 v36[2]; // [rsp+1B8h] [rbp-130h] BYREF
  __int64 v37; // [rsp+1C8h] [rbp-120h]
  int v38[58]; // [rsp+200h] [rbp-E8h] BYREF

  v7 = (__int64 *)a1[1];
  v21 = 0;
  v28 = 0;
  v29 = &v33;
  v20 = 28;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v8 = *v7;
  v30 = 8;
  v9 = *(__int64 (**)(void))(v8 + 48);
  v32 = 1;
  v31 = 0;
  if ( (char *)v9 == (char *)sub_15A1860 )
  {
    v10 = (__int64)(v7 + 3);
  }
  else
  {
    v18 = v9();
    v7 = (__int64 *)a1[1];
    v10 = v18;
    v8 = *v7;
  }
  v11 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v11 == (char *)sub_15A1850 )
  {
    v12 = v7[6];
  }
  else
  {
    v19 = v10;
    v17 = v11();
    v10 = v19;
    v12 = v17;
  }
  sub_16FF270((__int64)&v34, *a1, v12, v10, &v20, a6, 0);
  if ( !v32 )
    free(v29);
  if ( v28 && v27 )
    free(ptr);
  v13 = operator new(0x28u);
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = 0;
  *(_DWORD *)(v13 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v13, (std::__detail::_List_node_base *)v36);
  ++v37;
  v14 = (char *)sub_168B6E0((__int64)a1);
  sub_1709C80(a2, (__int64)&v34, v14);
  sub_16FF8C0((__int64)v36, v36[1]);
  v15 = a1[1];
  v16 = 0;
  if ( v34 != v35 )
    v16 = v34;
  if ( v15 )
    sub_1700D50(*a1, v15, v38, v16, -1431655765 * ((v35 - v34) >> 5));
  sub_1700A70((__int64)&v34);
}
