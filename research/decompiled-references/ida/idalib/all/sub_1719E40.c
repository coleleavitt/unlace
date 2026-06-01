void __fastcall sub_1719E40(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 (*v11)(void); // rdx
  __int64 v12; // rcx
  __int64 (*v13)(void); // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  _BYTE *v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rcx
  unsigned int *v20; // r12
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // rsi
  __int64 v31; // rdi
  __int64 *v32; // rcx
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rax
  __int64 v36; // [rsp+8h] [rbp-2E0h]
  unsigned int v37; // [rsp+10h] [rbp-2D8h] BYREF
  char v38; // [rsp+14h] [rbp-2D4h]
  __int64 v39; // [rsp+18h] [rbp-2D0h]
  __int64 v40; // [rsp+20h] [rbp-2C8h]
  __int64 v41; // [rsp+28h] [rbp-2C0h]
  __int64 v42; // [rsp+30h] [rbp-2B8h]
  void *ptr; // [rsp+48h] [rbp-2A0h]
  int v44; // [rsp+54h] [rbp-294h]
  char v45; // [rsp+68h] [rbp-280h]
  void *v46; // [rsp+70h] [rbp-278h]
  __int64 v47; // [rsp+78h] [rbp-270h]
  int v48; // [rsp+80h] [rbp-268h]
  char v49; // [rsp+84h] [rbp-264h]
  __int64 v50; // [rsp+88h] [rbp-260h] BYREF
  __int64 v51; // [rsp+D0h] [rbp-218h] BYREF
  __int64 v52; // [rsp+D8h] [rbp-210h]
  _QWORD *v53; // [rsp+E8h] [rbp-200h] BYREF
  unsigned int v54; // [rsp+F0h] [rbp-1F8h]
  unsigned int v55; // [rsp+F4h] [rbp-1F4h]
  char v56; // [rsp+FCh] [rbp-1ECh]
  __int64 v57[2]; // [rsp+1B8h] [rbp-130h] BYREF
  __int64 v58; // [rsp+1C8h] [rbp-120h]
  int v59[58]; // [rsp+200h] [rbp-E8h] BYREF

  v9 = (__int64 *)a1[1];
  v38 = 0;
  v45 = 0;
  v46 = &v50;
  v37 = 32;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v10 = *v9;
  v47 = 8;
  v11 = *(__int64 (**)(void))(v10 + 48);
  v49 = 1;
  v48 = 0;
  if ( (char *)v11 == (char *)sub_15A1860 )
  {
    v12 = (__int64)(v9 + 3);
  }
  else
  {
    v28 = v11();
    v9 = (__int64 *)a1[1];
    v12 = v28;
    v10 = *v9;
  }
  v13 = *(__int64 (**)(void))(v10 + 40);
  if ( (char *)v13 == (char *)sub_15A1850 )
  {
    v14 = v9[6];
  }
  else
  {
    v36 = v12;
    v27 = v13();
    v12 = v36;
    v14 = v27;
  }
  sub_16FF270((__int64)&v51, *a1, v14, v12, &v37, a6, 0);
  if ( !v49 )
    free(v46);
  if ( v45 && v44 )
    free(ptr);
  v15 = operator new(0x28u);
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v15, (std::__detail::_List_node_base *)v57);
  v16 = *a1;
  ++v58;
  v17 = (_BYTE *)sub_1A5B7C0(v16, *(_QWORD *)(v16 + 192), a3, a4, 0, 0);
  if ( v17 && (v17[28] & 0x7F) == 0x14 )
  {
    v29 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v17 + 32LL))(v17);
    if ( !v56 )
      goto LABEL_32;
    v30 = v53;
    v31 = v55;
    v32 = &v53[v31];
    if ( v53 != &v53[v31] )
    {
      v33 = v53;
      if ( v29 == *v53 )
        goto LABEL_31;
      do
      {
        if ( v32 == ++v33 )
          break;
      }
      while ( v29 != *v33 );
    }
    if ( v55 < v54 )
    {
      ++v55;
      *v32 = v29;
      v30 = v53;
      v33 = &v53[v31];
    }
    else
    {
LABEL_32:
      v35 = sub_2236760(&v53, v29);
      v30 = v53;
      v33 = (_QWORD *)v35;
      if ( !v56 )
      {
        v34 = &v53[v54];
        goto LABEL_34;
      }
    }
LABEL_31:
    v34 = &v30[v55];
LABEL_34:
    if ( v33 != v34 && (*v33 == -2 || *v33 == -1) )
    {
      do
        ++v33;
      while ( v34 != v33 && *v33 >= 0xFFFFFFFFFFFFFFFELL );
    }
  }
  if ( (*(_BYTE *)(a1[1] + 8) & 4) != 0 )
  {
    v20 = *(unsigned int **)(*a1 + 544);
    v21 = sub_168B6C0((__int64)a1);
    v26 = sub_704780(
            (__int64 *)(*(_QWORD *)(*(_QWORD *)(v21 + 2264) + 80LL) + 72LL),
            *(_QWORD *)(*(_QWORD *)(v21 + 2264) + 80LL),
            v22,
            v23,
            v24,
            v25);
    if ( v26 )
      v26 += 5;
    sub_1719AA0((__int64)v26, v20, 0, (__int64)&v51);
  }
  sub_16FF8C0((__int64)v57, v57[1]);
  v18 = a1[1];
  v19 = 0;
  if ( v51 != v52 )
    v19 = v51;
  if ( v18 )
    sub_1700D50(*a1, v18, v59, v19, -1431655765 * ((v52 - v51) >> 5));
  sub_1700A70((__int64)&v51);
}
