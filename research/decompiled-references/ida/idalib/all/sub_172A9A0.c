void __fastcall sub_172A9A0(__int64 *a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 (*v12)(void); // rdx
  __int64 v13; // rcx
  __int64 (*v14)(void); // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  char v23; // r9
  _WORD *v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdi
  int v27; // edx
  __int64 v28; // rcx
  unsigned int v29; // r8d
  _BYTE *v30; // rax
  char v31; // al
  unsigned __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  bool v38; // al
  bool v39; // zf
  __int64 (__fastcall *v40)(__int64, __int64); // rax
  __int64 v41; // [rsp+8h] [rbp-310h]
  __int128 v42; // [rsp+10h] [rbp-308h] BYREF
  __int64 v43; // [rsp+20h] [rbp-2F8h]
  __int64 (__fastcall **v44)(); // [rsp+30h] [rbp-2E8h] BYREF
  __int128 v45; // [rsp+38h] [rbp-2E0h]
  __int64 v46; // [rsp+48h] [rbp-2D0h]
  __int64 v47; // [rsp+50h] [rbp-2C8h]
  __int64 v48; // [rsp+58h] [rbp-2C0h] BYREF
  char v49; // [rsp+88h] [rbp-290h]
  _BYTE *v50; // [rsp+90h] [rbp-288h]
  __int64 v51; // [rsp+98h] [rbp-280h]
  int v52; // [rsp+A0h] [rbp-278h]
  char v53; // [rsp+A4h] [rbp-274h]
  _BYTE v54[72]; // [rsp+A8h] [rbp-270h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-228h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-220h]
  __int64 (__fastcall *v57)(__int64, __int64); // [rsp+1B8h] [rbp-160h]
  __int64 v58; // [rsp+1C0h] [rbp-158h]
  __int64 v59[2]; // [rsp+1D8h] [rbp-140h] BYREF
  __int64 v60; // [rsp+1E8h] [rbp-130h]
  __int64 v61; // [rsp+208h] [rbp-110h]
  int v62; // [rsp+210h] [rbp-108h]
  char v63; // [rsp+214h] [rbp-104h]
  int v64[62]; // [rsp+220h] [rbp-F8h] BYREF

  v9 = (_QWORD *)*a1;
  switch ( a3 )
  {
    case 0u:
      goto LABEL_27;
    case 1u:
      goto LABEL_29;
    case 2u:
      LODWORD(v44) = 3;
      goto LABEL_3;
    case 3u:
      LODWORD(v44) = 4;
      goto LABEL_3;
    case 4u:
      LODWORD(v44) = 5;
      goto LABEL_3;
    case 5u:
    case 6u:
      v31 = *(_BYTE *)(v9[68] + 8LL) & 0x7F;
      if ( !v31 || v31 == 24 )
      {
LABEL_27:
        LODWORD(v44) = 2;
      }
      else if ( ((v31 + 70) & 0x7Fu) <= 3 )
      {
LABEL_29:
        LODWORD(v44) = 6;
      }
      else
      {
        LODWORD(v44) = 0;
      }
      goto LABEL_3;
    case 7u:
      goto LABEL_28;
    case 8u:
      LODWORD(v44) = 7;
      goto LABEL_3;
    case 9u:
      v30 = (_BYTE *)v9[29];
      if ( (v30[1] & 8) != 0 || (*v30 & 1) != 0 || (v30[2] & 4) != 0 )
        goto LABEL_25;
LABEL_28:
      LODWORD(v44) = 8;
      goto LABEL_3;
    case 0xAu:
      v32 = *(_QWORD *)(v9[31] + 18640LL);
      LODWORD(v44) = 8;
      BYTE4(v44) = 0;
      v46 = 0;
      v47 = 0;
      v49 = 0;
      v50 = v54;
      v51 = 8;
      v52 = 0;
      v53 = 1;
      v45 = v32;
      goto LABEL_4;
    case 0xBu:
      LODWORD(v44) = 36;
      goto LABEL_3;
    case 0xCu:
    case 0xEu:
      LODWORD(v44) = 18;
      goto LABEL_3;
    case 0xDu:
LABEL_25:
      LODWORD(v44) = 29;
      goto LABEL_3;
    case 0xFu:
      LODWORD(v44) = 38;
LABEL_3:
      BYTE4(v44) = 0;
      v49 = 0;
      v46 = 0;
      v47 = 0;
      v50 = v54;
      v51 = 8;
      v52 = 0;
      v53 = 1;
      v45 = 0;
LABEL_4:
      v10 = (_QWORD *)a1[1];
      v11 = *v10;
      v12 = *(__int64 (**)(void))(*v10 + 48LL);
      if ( (char *)v12 == (char *)sub_15A1860 )
      {
        v13 = (__int64)(v10 + 3);
      }
      else
      {
        v37 = v12();
        v10 = (_QWORD *)a1[1];
        v13 = v37;
        v11 = *v10;
      }
      v14 = *(__int64 (**)(void))(v11 + 40);
      if ( (char *)v14 == (char *)sub_15A1850 )
      {
        v15 = v10[6];
      }
      else
      {
        v41 = v13;
        v36 = v14();
        v13 = v41;
        v15 = v36;
      }
      sub_16FF270((__int64)&v55, *a1, v15, v13, (unsigned int *)&v44, a6, 0);
      sub_17038E0((__int64)&v44);
      v16 = operator new(0x28u);
      v17 = v59;
      *(_QWORD *)(v16 + 16) = 0;
      *(_QWORD *)(v16 + 24) = 0;
      *(_DWORD *)(v16 + 32) = 0;
      std::__detail::_List_node_base::_M_hook(
        (std::__detail::_List_node_base *)v16,
        (std::__detail::_List_node_base *)v59);
      ++v60;
      if ( a3 <= 0xF )
      {
        if ( ((1LL << a3) & 0xA780) != 0 )
        {
          v17 = (__int64 *)sub_168B6E0((__int64)a1);
          v38 = sub_16FE8E0(a3, (__int64)v17);
          v58 = 0;
          v39 = !v38;
          v40 = (__int64 (__fastcall *)(__int64, __int64))sub_16FFBF0;
          if ( v39 )
            v40 = (__int64 (__fastcall *)(__int64, __int64))sub_1713700;
          v57 = v40;
          if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0 )
          {
            v17 = nullptr;
            sub_170EFB0(*a1, 0, (__int64)&v55);
          }
        }
        else if ( ((1LL << a3) & 0x507F) != 0 )
        {
          v58 = 0;
          v57 = sub_16FFC60;
        }
      }
      v18 = (__int64 *)(sub_19A27D0(*a1) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v18 )
      {
        v33 = sub_F68450(*v18, (__int64)v17, v19, v20, v21);
        v34 = 0;
        v35 = *(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v35 & 8) != 0 )
          v34 = *(__int64 *)((char *)&qword_18 + (v35 & 0xFFFFFFFFFFFFFFF0LL));
        v63 = 1;
        v62 = 1;
        v61 = v34 | ((unsigned __int8)v33 | (unsigned __int8)v35) & 7;
      }
      v22 = *a1;
      v42 = 0;
      v43 = 0;
      sub_16FF1B0(&v44, (__int64)&v55, *(_QWORD *)(v22 + 544), 0, (__int64 *)&v42);
      sub_1705410((__int64)&v42);
      v23 = *(_DWORD *)(a1[1] + 8);
      sub_1A65F80(*a1, a2, 0, &v44, (v23 & 4) != 0, (v23 & 0x20) != 0);
      sub_17253B0(a3, a2, *a1, &v55);
      sub_16FF8C0((__int64)v59, v59[1]);
      if ( a3 <= 0xF && ((1LL << a3) & 0xA980) != 0 && *(_QWORD *)(a2 + 24) )
      {
        v24 = (_WORD *)sub_168B6E0((__int64)a1);
        sub_17105A0(v24, &v55);
      }
      v25 = a1[1];
      v26 = *a1;
      v27 = *(_DWORD *)(v25 + 8);
      if ( (v27 & 1) == 0 )
      {
        v28 = v55;
        v29 = -1431655765 * ((v56 - v55) >> 5);
        if ( v56 == v55 )
          v28 = 0;
LABEL_20:
        sub_1700D50(v26, v25, v64, v28, v29);
        goto LABEL_21;
      }
      sub_1722040(*(_QWORD **)(v26 + 240), &v55, (v27 & 0x20) != 0, 0, 0);
      v28 = v55;
      v25 = a1[1];
      v26 = *a1;
      v29 = -1431655765 * ((v56 - v55) >> 5);
      if ( v55 == v56 )
        v28 = 0;
      if ( v25 )
        goto LABEL_20;
LABEL_21:
      v44 = &off_2C4EFD0;
      sub_1705410((__int64)&v48);
      nullsub_1203(&v44);
      sub_1700A70((__int64)&v55);
      return;
  }
}
