void __fastcall sub_1708710(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+8h] [rbp-2D0h]
  unsigned int v19; // [rsp+10h] [rbp-2C8h] BYREF
  char v20; // [rsp+14h] [rbp-2C4h]
  __int64 v21; // [rsp+18h] [rbp-2C0h]
  __int64 v22; // [rsp+20h] [rbp-2B8h]
  __int64 v23; // [rsp+28h] [rbp-2B0h]
  __int64 v24; // [rsp+30h] [rbp-2A8h]
  void *ptr; // [rsp+48h] [rbp-290h]
  int v26; // [rsp+54h] [rbp-284h]
  char v27; // [rsp+68h] [rbp-270h]
  void *v28; // [rsp+70h] [rbp-268h]
  __int64 v29; // [rsp+78h] [rbp-260h]
  int v30; // [rsp+80h] [rbp-258h]
  char v31; // [rsp+84h] [rbp-254h]
  __int64 v32; // [rsp+88h] [rbp-250h] BYREF
  __int64 v33; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-200h]
  __int64 v35[2]; // [rsp+1B8h] [rbp-120h] BYREF
  __int64 v36; // [rsp+1C8h] [rbp-110h]
  int v37[54]; // [rsp+200h] [rbp-D8h] BYREF

  v7 = (__int64 *)a1[1];
  v20 = 0;
  v27 = 0;
  v28 = &v32;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v8 = *v7;
  v29 = 8;
  v9 = *(__int64 (**)(void))(v8 + 48);
  v31 = 1;
  v30 = 0;
  if ( (char *)v9 == (char *)sub_15A1860 )
  {
    v10 = (__int64)(v7 + 3);
  }
  else
  {
    v17 = v9();
    v7 = (__int64 *)a1[1];
    v10 = v17;
    v8 = *v7;
  }
  v11 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v11 == (char *)sub_15A1850 )
  {
    v12 = v7[6];
  }
  else
  {
    v18 = v10;
    v16 = v11();
    v10 = v18;
    v12 = v16;
  }
  sub_16FF270((__int64)&v33, *a1, v12, v10, &v19, a6, 0);
  if ( !v31 )
    free(v28);
  if ( v27 && v26 )
    free(ptr);
  v13 = operator new(0x28u);
  *(_QWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 24) = 0;
  *(_DWORD *)(v13 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v13, (std::__detail::_List_node_base *)v35);
  ++v36;
  sub_1707E50((__int64)&v33, 0);
  sub_16FF8C0((__int64)v35, v35[1]);
  v14 = a1[1];
  v15 = 0;
  if ( v33 != v34 )
    v15 = v33;
  if ( v14 )
    sub_1700D50(*a1, v14, v37, v15, -1431655765 * ((v34 - v33) >> 5));
  sub_1700A70((__int64)&v33);
}
