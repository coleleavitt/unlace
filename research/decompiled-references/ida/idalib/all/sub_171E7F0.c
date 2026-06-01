void __fastcall sub_171E7F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64); // rax
  _QWORD *v21; // rdx
  __int64 v22; // rdi
  __int64 *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rax
  __int64 v38; // [rsp-8h] [rbp-3A0h]
  __int64 v39; // [rsp+8h] [rbp-390h]
  void *ptr[2]; // [rsp+10h] [rbp-388h] BYREF
  int v41; // [rsp+20h] [rbp-378h]
  char v42; // [rsp+24h] [rbp-374h]
  __int64 v43; // [rsp+28h] [rbp-370h] BYREF
  unsigned int v44; // [rsp+B0h] [rbp-2E8h] BYREF
  char v45; // [rsp+B4h] [rbp-2E4h]
  __int64 v46; // [rsp+B8h] [rbp-2E0h]
  __int64 v47; // [rsp+C0h] [rbp-2D8h]
  __int64 v48; // [rsp+C8h] [rbp-2D0h]
  __int64 v49; // [rsp+D0h] [rbp-2C8h]
  char v50; // [rsp+108h] [rbp-290h]
  __int64 *v51; // [rsp+110h] [rbp-288h]
  __int64 v52; // [rsp+118h] [rbp-280h]
  int v53; // [rsp+120h] [rbp-278h]
  char v54; // [rsp+124h] [rbp-274h]
  __int64 v55; // [rsp+128h] [rbp-270h] BYREF
  __int64 v56; // [rsp+170h] [rbp-228h] BYREF
  __int64 v57; // [rsp+178h] [rbp-220h]
  _QWORD *v58; // [rsp+188h] [rbp-210h] BYREF
  unsigned int v59; // [rsp+190h] [rbp-208h]
  unsigned int v60; // [rsp+194h] [rbp-204h]
  char v61; // [rsp+19Ch] [rbp-1FCh]
  __int64 v62[9]; // [rsp+258h] [rbp-140h] BYREF
  int v63[62]; // [rsp+2A0h] [rbp-F8h] BYREF

  v7 = (__int64 *)a1[1];
  v44 = 0;
  v45 = 0;
  v51 = &v55;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v8 = *v7;
  v50 = 0;
  v9 = *(__int64 (**)(void))(v8 + 48);
  v54 = 1;
  v52 = 8;
  v53 = 0;
  if ( (char *)v9 == (char *)sub_15A1860 )
  {
    v10 = (__int64)(v7 + 3);
  }
  else
  {
    v35 = v9();
    v7 = (__int64 *)a1[1];
    v10 = v35;
    v8 = *v7;
  }
  v11 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v11 == (char *)sub_15A1850 )
  {
    v12 = v7[6];
  }
  else
  {
    v39 = v10;
    v34 = v11();
    v10 = v39;
    v12 = v34;
  }
  v13 = *a1;
  sub_16FF270((__int64)&v56, *a1, v12, v10, &v44, a6, 0);
  v16 = *(_QWORD *)(*a1 + 544);
  if ( v16 && (*(_BYTE *)(v16 + 8) & 0x7Fu) - 19 <= 4 && v16 != 48 && ((*(_BYTE *)(v16 - 20) + 107) & 0x7Fu) <= 1 )
  {
    v17 = sub_1714190(v16 - 48, v13, v16, v38, v14, v15);
    v18 = sub_B8E970(v17 + 48);
    if ( v18 )
    {
      while ( (*(_BYTE *)(v18 + 28) & 0x7F) != 0xE )
      {
LABEL_27:
        v18 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v18 )
          goto LABEL_28;
      }
      v19 = *(_QWORD *)(v18 + 48);
      v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 32LL);
      if ( v20 != sub_A4F000 )
        v19 = v20(*(_QWORD *)(v18 + 48));
      if ( !v61 )
        goto LABEL_37;
      v21 = v58;
      v22 = v60;
      v23 = &v58[v22];
      if ( v58 != &v58[v22] )
      {
        v24 = v58;
        if ( v19 == *v58 )
          goto LABEL_21;
        do
        {
          if ( v23 == ++v24 )
            break;
        }
        while ( v19 != *v24 );
      }
      if ( v60 < v59 )
      {
        ++v60;
        *v23 = v19;
        v21 = v58;
        v24 = &v58[v22];
      }
      else
      {
LABEL_37:
        v24 = (_QWORD *)sub_2236760(&v58, v19);
        v21 = v58;
        if ( !v61 )
        {
          v25 = &v58[v59];
          goto LABEL_22;
        }
      }
LABEL_21:
      v25 = &v21[v60];
LABEL_22:
      if ( v25 != v24 && *v24 >= 0xFFFFFFFFFFFFFFFELL )
      {
        v26 = v24 + 1;
        do
        {
          v27 = v26;
          if ( v25 == v26 )
            break;
          ++v26;
        }
        while ( *v27 >= 0xFFFFFFFFFFFFFFFELL );
      }
      goto LABEL_27;
    }
LABEL_28:
    ptr[1] = &word_10;
    v42 = 1;
    ptr[0] = &v43;
    v41 = 0;
    sub_16FF160((__int64)v62, (std::__detail::_List_node_base *)v62);
    if ( (*(_BYTE *)(v17 + 28) & 0x7F) == 0x15 )
    {
      sub_171DC00(
        (__int64)&v44,
        *(_QWORD *)(v17 + 88),
        0,
        0,
        *(_QWORD *)(*a1 + 544),
        (__int64)ptr,
        (__int64)&v56,
        0,
        0,
        1);
    }
    else
    {
      v36 = *(_QWORD *)(*a1 + 544);
      v37 = sub_BADE20(v17, (__int64)v62, v28, v29, v30, v31);
      sub_171DC00((__int64)&v44, v37, 0, 0, v36, (__int64)ptr, (__int64)&v56, 0, 0, 1);
    }
    sub_16FF8C0((__int64)v62, v62[1]);
    v32 = a1[1];
    v33 = 0;
    if ( v56 != v57 )
      v33 = v56;
    if ( v32 )
      sub_1700D50(*a1, v32, v63, v33, -1431655765 * ((v57 - v56) >> 5));
    if ( !v42 )
      free(ptr[0]);
  }
  sub_1700A70((__int64)&v56);
  sub_17038E0((__int64)&v44);
}
