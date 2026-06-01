void __fastcall sub_1717620(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // r8d
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-2E0h]
  unsigned int v27; // [rsp+10h] [rbp-2D8h] BYREF
  char v28; // [rsp+14h] [rbp-2D4h]
  __int64 v29; // [rsp+18h] [rbp-2D0h]
  __int64 v30; // [rsp+20h] [rbp-2C8h]
  __int64 v31; // [rsp+28h] [rbp-2C0h]
  __int64 v32; // [rsp+30h] [rbp-2B8h]
  void *ptr; // [rsp+48h] [rbp-2A0h]
  int v34; // [rsp+54h] [rbp-294h]
  char v35; // [rsp+68h] [rbp-280h]
  void *v36; // [rsp+70h] [rbp-278h]
  __int64 v37; // [rsp+78h] [rbp-270h]
  int v38; // [rsp+80h] [rbp-268h]
  char v39; // [rsp+84h] [rbp-264h]
  __int64 v40; // [rsp+88h] [rbp-260h] BYREF
  __int64 v41; // [rsp+D0h] [rbp-218h] BYREF
  __int64 v42; // [rsp+D8h] [rbp-210h]
  __int64 v43[9]; // [rsp+1B8h] [rbp-130h] BYREF
  int v44[58]; // [rsp+200h] [rbp-E8h] BYREF

  v7 = (__int64 *)a1[1];
  v28 = 0;
  v35 = 0;
  v36 = &v40;
  v27 = 16;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v8 = *v7;
  v37 = 8;
  v9 = *(__int64 (**)(void))(v8 + 48);
  v39 = 1;
  v38 = 0;
  if ( (char *)v9 == (char *)sub_15A1860 )
  {
    v10 = (__int64)(v7 + 3);
  }
  else
  {
    v25 = v9();
    v7 = (__int64 *)a1[1];
    v10 = v25;
    v8 = *v7;
  }
  v11 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v11 == (char *)sub_15A1850 )
  {
    v12 = v7[6];
  }
  else
  {
    v26 = v10;
    v24 = v11();
    v10 = v26;
    v12 = v24;
  }
  sub_16FF270((__int64)&v41, *a1, v12, v10, &v27, a6, 0);
  if ( !v39 )
    free(v36);
  if ( !v35 || !v34 )
  {
    v13 = a1[1];
    if ( (*(_BYTE *)(v13 + 8) & 4) != 0 )
      goto LABEL_15;
LABEL_9:
    v14 = v41;
    v15 = *a1;
    v16 = -1431655765 * ((v42 - v41) >> 5);
    if ( v42 == v41 )
      v14 = 0;
    goto LABEL_11;
  }
  free(ptr);
  v13 = a1[1];
  if ( (*(_BYTE *)(v13 + 8) & 4) == 0 )
    goto LABEL_9;
LABEL_15:
  sub_16FF160((__int64)v43, (std::__detail::_List_node_base *)v43);
  v17 = *(_QWORD *)(*a1 + 544);
  v18 = sub_168B6C0((__int64)a1);
  v23 = sub_704780(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v18 + 2264) + 80LL) + 72LL),
          *(_QWORD *)(*(_QWORD *)(v18 + 2264) + 80LL),
          v19,
          v20,
          v21,
          v22);
  if ( v23 )
    v23 += 5;
  sub_17170F0((__int64)v23, v17, 1, (__int64)&v41);
  sub_16FF8C0((__int64)v43, v43[1]);
  v14 = v41;
  v13 = a1[1];
  v15 = *a1;
  v16 = -1431655765 * ((v42 - v41) >> 5);
  if ( v41 == v42 )
    v14 = 0;
  if ( v13 )
LABEL_11:
    sub_1700D50(v15, v13, v44, v14, v16);
  sub_1700A70((__int64)&v41);
}
