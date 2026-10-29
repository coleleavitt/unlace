void __fastcall sub_1711900(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-2D0h]
  unsigned int v23; // [rsp+10h] [rbp-2C8h] BYREF
  char v24; // [rsp+14h] [rbp-2C4h]
  __int64 v25; // [rsp+18h] [rbp-2C0h]
  __int64 v26; // [rsp+20h] [rbp-2B8h]
  __int64 v27; // [rsp+28h] [rbp-2B0h]
  __int64 v28; // [rsp+30h] [rbp-2A8h]
  void *ptr; // [rsp+48h] [rbp-290h]
  int v30; // [rsp+54h] [rbp-284h]
  char v31; // [rsp+68h] [rbp-270h]
  void *v32; // [rsp+70h] [rbp-268h]
  __int64 v33; // [rsp+78h] [rbp-260h]
  int v34; // [rsp+80h] [rbp-258h]
  char v35; // [rsp+84h] [rbp-254h]
  __int64 v36; // [rsp+88h] [rbp-250h] BYREF
  __int64 v37; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-200h]
  __int64 v39[2]; // [rsp+1B8h] [rbp-120h] BYREF
  __int64 v40; // [rsp+1C8h] [rbp-110h]
  int v41[54]; // [rsp+200h] [rbp-D8h] BYREF

  v7 = (__int64 *)a1[1];
  v24 = 0;
  v31 = 0;
  v32 = &v36;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v8 = *v7;
  v33 = 8;
  v9 = *(__int64 (**)(void))(v8 + 48);
  v35 = 1;
  v34 = 0;
  if ( (char *)v9 == (char *)sub_15A1860 )
  {
    v10 = (__int64)(v7 + 3);
  }
  else
  {
    v21 = v9();
    v7 = (__int64 *)a1[1];
    v10 = v21;
    v8 = *v7;
  }
  v11 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v11 == (char *)sub_15A1850 )
  {
    v12 = v7[6];
  }
  else
  {
    v22 = v10;
    v20 = v11();
    v10 = v22;
    v12 = v20;
  }
  sub_16FF270((__int64)&v37, *a1, v12, v10, &v23, a6, 0);
  if ( !v35 )
    free(v32);
  if ( v31 && v30 )
    free(ptr);
  v13 = operator new(0x28u);
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = 0;
  *(_DWORD *)(v13 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v13, (std::__detail::_List_node_base *)v39);
  v14 = *a1;
  ++v40;
  v15 = *(_BYTE *)(*(_QWORD *)(v14 + 544) + 8LL) & 0x7F;
  if ( (unsigned int)(v15 - 21) <= 1 )
  {
    v19 = sub_168B6E0((__int64)a1);
    sub_17115E0(v19, (__int64)&v37, 0);
  }
  else if ( (unsigned int)(v15 - 19) > 4 )
  {
    sub_1706C60((__int64)&v37, 0);
  }
  else
  {
    v16 = sub_168B6E0((__int64)a1);
    sub_1710D30(v16, (__int64)&v37, 0);
  }
  sub_16FF8C0((__int64)v39, v39[1]);
  v17 = a1[1];
  v18 = 0;
  if ( v37 != v38 )
    v18 = v37;
  if ( v17 )
    sub_1700D50(*a1, v17, v41, v18, -1431655765 * ((v38 - v37) >> 5));
  sub_1700A70((__int64)&v37);
}
