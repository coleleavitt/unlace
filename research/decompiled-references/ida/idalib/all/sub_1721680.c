void __fastcall sub_1721680(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // r14
  char v7; // r13
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64); // rcx
  __int64 v10; // rcx
  __int64 (__fastcall *v11)(__int64); // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rax
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rax
  __int64 i; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r15
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD **v27; // rbp
  _QWORD **v28; // r14
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  _QWORD *v34; // rax
  const char *v35; // rax
  unsigned __int64 v36; // rdx
  const char *v37; // r8
  unsigned __int64 *v38; // rax
  const char *v39; // rax
  __int64 v40; // rdx
  _BOOL8 v41; // rdi
  unsigned __int64 v42; // rax
  unsigned __int64 *v43; // rdi
  __int128 v44; // [rsp-10h] [rbp-368h]
  void *v45; // [rsp+0h] [rbp-358h]
  void *v46; // [rsp+0h] [rbp-358h]
  unsigned __int64 *v47; // [rsp+0h] [rbp-358h]
  const char *v48; // [rsp+0h] [rbp-358h]
  const char *v49; // [rsp+10h] [rbp-348h]
  __int128 v50; // [rsp+20h] [rbp-338h] BYREF
  __int64 v51; // [rsp+30h] [rbp-328h]
  __int64 v52; // [rsp+40h] [rbp-318h] BYREF
  int v53; // [rsp+48h] [rbp-310h] BYREF
  void *v54; // [rsp+50h] [rbp-308h]
  int *v55; // [rsp+58h] [rbp-300h]
  int *v56; // [rsp+60h] [rbp-2F8h]
  __int64 v57; // [rsp+68h] [rbp-2F0h]
  _QWORD v58[2]; // [rsp+70h] [rbp-2E8h] BYREF
  __int128 v59; // [rsp+80h] [rbp-2D8h]
  __int64 v60; // [rsp+90h] [rbp-2C8h]
  __int128 v61; // [rsp+98h] [rbp-2C0h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-2B0h]
  char v63; // [rsp+B0h] [rbp-2A8h]
  __int64 v64; // [rsp+B8h] [rbp-2A0h]
  __int64 v65; // [rsp+C0h] [rbp-298h]
  __int64 v66; // [rsp+C8h] [rbp-290h]
  __int64 *v67; // [rsp+D0h] [rbp-288h]
  __int64 v68; // [rsp+D8h] [rbp-280h]
  int v69; // [rsp+E0h] [rbp-278h]
  char v70; // [rsp+E4h] [rbp-274h]
  __int64 v71; // [rsp+E8h] [rbp-270h] BYREF
  __int64 v72; // [rsp+130h] [rbp-228h] BYREF
  __int64 v73; // [rsp+138h] [rbp-220h]
  __int64 v74[9]; // [rsp+218h] [rbp-140h] BYREF
  int v75[62]; // [rsp+260h] [rbp-F8h] BYREF

  v2 = a1[1];
  if ( !v2 )
    return;
  v4 = *a2;
  v5 = a2[1] & 0x80;
  if ( v5 )
  {
    if ( v4 )
    {
      v7 = 0;
      v6 = 0;
      v5 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = a2[45];
    if ( v4 )
    {
      if ( !v6 )
      {
        v7 = 0;
        goto LABEL_8;
      }
LABEL_5:
      if ( (*(_BYTE *)(v2 + 8) & 4) == 0 && (*(_BYTE *)(v6 + 8) & 0x7F) == 0 )
      {
        v7 = 1;
        v5 = 17;
        goto LABEL_8;
      }
      goto LABEL_7;
    }
  }
  v29 = sub_168B6C0((__int64)a1);
  v34 = sub_704780(
          (__int64 *)(*(_QWORD *)(*(_QWORD *)(v29 + 2264) + 80LL) + 72LL),
          *(_QWORD *)(*(_QWORD *)(v29 + 2264) + 80LL),
          v30,
          v31,
          v32,
          v33);
  v6 = (__int64)v34;
  if ( v34 )
  {
    v6 = (__int64)(v34 + 5);
    v2 = a1[1];
    goto LABEL_5;
  }
  v2 = a1[1];
LABEL_7:
  v7 = 0;
  v5 = 0;
LABEL_8:
  LODWORD(v58[0]) = v5;
  BYTE4(v58[0]) = 0;
  v58[1] = 0;
  v59 = 0u;
  v60 = 0;
  v67 = &v71;
  v8 = *(_QWORD *)v2;
  LOBYTE(v66) = 0;
  v9 = *(__int64 (__fastcall **)(__int64))(v8 + 48);
  v70 = 1;
  v68 = 8;
  v69 = 0;
  if ( v9 == sub_15A1860 )
  {
    v10 = v2 + 24;
  }
  else
  {
    v10 = v9(v2);
    v2 = a1[1];
    v8 = *(_QWORD *)v2;
  }
  v11 = *(__int64 (__fastcall **)(__int64))(v8 + 40);
  if ( v11 == sub_15A1850 )
  {
    v12 = *(_QWORD *)(v2 + 48);
  }
  else
  {
    v45 = (void *)v10;
    v12 = v11(v2);
    v10 = (__int64)v45;
  }
  *((_QWORD *)&v44 + 1) = 0;
  *(_QWORD *)&v44 = sub_16FE600;
  sub_16FF270((__int64)&v72, *a1, v12, v10, (unsigned int *)v58, (__int64)sub_16FE600, v44);
  sub_17038E0((__int64)v58);
  if ( v6 && ((*(_BYTE *)(v6 + 8) & 0x7F) == 0x18 || (*(_BYTE *)(v6 + 8) & 0x7F) == 0) && !v7 )
  {
    v53 = 0;
    v54 = nullptr;
    v55 = &v53;
    v56 = &v53;
    v57 = 0;
    v15 = sub_B8E970(v6);
    v16 = v15;
    if ( v15 )
    {
      if ( (*(_BYTE *)(v15 + 28) & 0x7F) == 0x18 )
      {
LABEL_39:
        v35 = (const char *)v54;
        v36 = *(_QWORD *)(v16 + 88);
        v37 = (const char *)&v53;
        if ( !v54 )
          goto LABEL_46;
        do
        {
          while ( *((_QWORD *)v35 + 4) >= v36 )
          {
            v37 = v35;
            v35 = *((const char **)v35 + 2);
            if ( !v35 )
              goto LABEL_44;
          }
          v35 = *((const char **)v35 + 3);
        }
        while ( v35 );
LABEL_44:
        if ( v37 == (const char *)&v53 || *((_QWORD *)v37 + 4) > v36 )
        {
LABEL_46:
          v49 = v37;
          v46 = *(void **)(v16 + 88);
          v38 = (unsigned __int64 *)operator new(0x30u);
          v38[5] = 0;
          v38[4] = (unsigned __int64)v46;
          v47 = v38;
          v39 = sub_1721590(&v52, v49, v38 + 4);
          if ( v40 )
          {
            v41 = &v53 == (int *)v40 || v39 || v47[4] < *(_QWORD *)(v40 + 32);
            std::_Rb_tree_insert_and_rebalance(v41, v47, v40, &v53);
            ++v57;
            v37 = (const char *)v47;
          }
          else
          {
            v43 = v47;
            v48 = v39;
            operator delete(v43);
            v37 = v48;
          }
        }
        *((_QWORD *)v37 + 5) = v16;
        while ( 1 )
        {
          v42 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v16 = v42;
          if ( !v42 )
            break;
          if ( (*(_BYTE *)(v42 + 28) & 0x7F) == 0x18 )
            goto LABEL_39;
        }
      }
      else
      {
        while ( 1 )
        {
          v17 = *(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v16 = v17;
          if ( !v17 )
            break;
          if ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x18 )
            goto LABEL_39;
        }
      }
    }
    sub_16FF160((__int64)v74, (std::__detail::_List_node_base *)v74);
    for ( i = (__int64)v55; (int *)i != &v53; i = std::_Rb_tree_increment(i, (const char *)v58) )
    {
      v19 = *(_QWORD *)(i + 40);
      v20 = *a1;
      v50 = 0;
      v51 = 0;
      v21 = *(_QWORD *)(v20 + 544);
      v22 = sub_16FE9F0((__int64)&v72, v19);
      v23 = *(_QWORD *)(i + 40);
      LODWORD(v59) = v22;
      v58[0] = v23;
      v61 = v50;
      *(_QWORD *)((char *)&v59 + 4) = 0;
      v50 = 0;
      v62 = v51;
      LODWORD(v60) = 0;
      v51 = 0;
      v64 = 0;
      v63 = v63 & 0x80 | 0x40;
      v65 = 0;
      v66 = 0;
      sub_15A3440((unsigned int *)v58, 1, v24, v23, v25, v26);
      sub_1715C60((__int64)&v72, (__int64)v58, v21, 0, 0, 0);
      sub_1705410((__int64)&v61);
      sub_1705410((__int64)&v50);
    }
    sub_16FF8C0((__int64)v74, v74[1]);
    v27 = (_QWORD **)v54;
    if ( v54 )
    {
      do
      {
        sub_1712B10((__int64)&v52, v27[3]);
        v28 = (_QWORD **)v27[2];
        operator delete(v27);
        v27 = v28;
      }
      while ( v28 );
    }
  }
  v13 = a1[1];
  v14 = 0;
  if ( v72 != v73 )
    v14 = v72;
  if ( v13 )
    sub_1700D50(*a1, v13, v75, v14, -1431655765 * ((v73 - v72) >> 5));
  sub_1700A70((__int64)&v72);
}
