void __fastcall sub_1717260(__int64 *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rdi
  __int64 v10; // rax
  __int64 (*v11)(void); // rdx
  __int64 (__fastcall *v12)(__int64); // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned int v18; // r8d
  unsigned int *v19; // r12
  _QWORD *v20; // rax
  __int64 (__fastcall *v21)(__int64); // rdx
  __int64 v22; // rsi
  _QWORD *v23; // rdx
  __int64 v24; // rdi
  __int64 *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+8h] [rbp-2E0h]
  unsigned int v38; // [rsp+10h] [rbp-2D8h] BYREF
  char v39; // [rsp+14h] [rbp-2D4h]
  __int64 v40; // [rsp+18h] [rbp-2D0h]
  __int64 v41; // [rsp+20h] [rbp-2C8h]
  __int64 v42; // [rsp+28h] [rbp-2C0h]
  __int64 v43; // [rsp+30h] [rbp-2B8h]
  void *v44; // [rsp+48h] [rbp-2A0h]
  int v45; // [rsp+54h] [rbp-294h]
  char v46; // [rsp+68h] [rbp-280h]
  void *ptr; // [rsp+70h] [rbp-278h]
  __int64 v48; // [rsp+78h] [rbp-270h]
  int v49; // [rsp+80h] [rbp-268h]
  char v50; // [rsp+84h] [rbp-264h]
  __int64 v51; // [rsp+88h] [rbp-260h] BYREF
  __int64 v52; // [rsp+D0h] [rbp-218h] BYREF
  __int64 v53; // [rsp+D8h] [rbp-210h]
  _QWORD *v54; // [rsp+E8h] [rbp-200h] BYREF
  unsigned int v55; // [rsp+F0h] [rbp-1F8h]
  unsigned int v56; // [rsp+F4h] [rbp-1F4h]
  char v57; // [rsp+FCh] [rbp-1ECh]
  __int64 v58[9]; // [rsp+1B8h] [rbp-130h] BYREF
  int v59[58]; // [rsp+200h] [rbp-E8h] BYREF

  v9 = (_QWORD *)a1[1];
  v39 = 0;
  v46 = 0;
  ptr = &v51;
  v38 = 16;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v10 = *v9;
  v48 = 8;
  v11 = *(__int64 (**)(void))(v10 + 48);
  v50 = 1;
  v49 = 0;
  if ( (char *)v11 == (char *)sub_15A1860 )
  {
    v12 = *(__int64 (__fastcall **)(__int64))(v10 + 40);
    v13 = (__int64)(v9 + 3);
    if ( v12 == sub_15A1850 )
    {
LABEL_3:
      v14 = v9[6];
      goto LABEL_4;
    }
  }
  else
  {
    v35 = v11();
    v9 = (_QWORD *)a1[1];
    v13 = v35;
    v12 = *(__int64 (__fastcall **)(__int64))(*v9 + 40LL);
    if ( v12 == sub_15A1850 )
      goto LABEL_3;
  }
  v37 = v13;
  v36 = ((__int64 (*)(void))v12)();
  v13 = v37;
  v14 = v36;
LABEL_4:
  sub_16FF270((__int64)&v52, *a1, v14, v13, &v38, a6, 0);
  if ( !v50 )
    free(ptr);
  if ( v46 && v45 )
    free(v44);
  v15 = a1[1];
  if ( (*(_BYTE *)(v15 + 8) & 4) == 0 )
  {
    v16 = v52;
    v17 = *a1;
    v18 = -1431655765 * ((v53 - v52) >> 5);
    if ( v52 == v53 )
      v16 = 0;
LABEL_12:
    sub_1700D50(v17, v15, v59, v16, v18);
    goto LABEL_13;
  }
  v19 = &a2[4 * a3];
  sub_16FF160((__int64)v58, (std::__detail::_List_node_base *)v58);
  if ( v19 != a2 )
  {
    while ( 1 )
    {
      v20 = (_QWORD *)sub_1A86640(*(_QWORD *)(*a1 + 736), *((_QWORD *)a2 + 1), *a2, 0);
      if ( v20 )
        break;
LABEL_32:
      a2 += 4;
      if ( v19 == a2 )
        goto LABEL_33;
    }
    v21 = *(__int64 (__fastcall **)(__int64))(*v20 + 32LL);
    if ( v21 == sub_A55E70 )
      v22 = v20[12];
    else
      v22 = v21((__int64)v20);
    if ( !v57 )
      goto LABEL_39;
    v23 = v54;
    v24 = v56;
    v25 = &v54[v24];
    if ( v54 != &v54[v24] )
    {
      v26 = v54;
      if ( v22 == *v54 )
        goto LABEL_26;
      do
      {
        if ( v25 == ++v26 )
          break;
      }
      while ( v22 != *v26 );
    }
    if ( v56 < v55 )
    {
      ++v56;
      *v25 = v22;
      v23 = v54;
      v26 = &v54[v24];
    }
    else
    {
LABEL_39:
      v26 = (_QWORD *)sub_2236760(&v54, v22);
      v23 = v54;
      if ( !v57 )
      {
        v27 = &v54[v55];
        goto LABEL_27;
      }
    }
LABEL_26:
    v27 = &v23[v56];
LABEL_27:
    if ( v27 != v26 && (unsigned __int64)(*v26 + 2LL) <= 1 )
    {
      do
        ++v26;
      while ( v27 != v26 && *v26 >= 0xFFFFFFFFFFFFFFFELL );
    }
    goto LABEL_32;
  }
LABEL_33:
  v28 = *(_QWORD *)(*a1 + 544);
  v29 = sub_168B6C0((__int64)a1);
  v34 = sub_704780(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v29 + 2264) + 80LL) + 72LL),
          *(_QWORD *)(*(_QWORD *)(v29 + 2264) + 80LL),
          v30,
          v31,
          v32,
          v33);
  if ( v34 )
    v34 += 5;
  sub_17170F0((__int64)v34, v28, 0, (__int64)&v52);
  sub_16FF8C0((__int64)v58, v58[1]);
  v16 = v52;
  v18 = -1431655765 * ((v53 - v52) >> 5);
  v15 = a1[1];
  v17 = *a1;
  if ( v52 == v53 )
    v16 = 0;
  if ( v15 )
    goto LABEL_12;
LABEL_13:
  sub_1700A70((__int64)&v52);
}
