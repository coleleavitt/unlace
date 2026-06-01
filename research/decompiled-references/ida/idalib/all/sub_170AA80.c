void __fastcall sub_170AA80(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  __int64 (__fastcall *v4)(__int64); // rcx
  __int64 (__fastcall *v5)(__int64); // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  char v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int128 v13; // [rsp-10h] [rbp-398h]
  __int64 v14; // [rsp+0h] [rbp-388h]
  __int128 v15; // [rsp+20h] [rbp-368h] BYREF
  __int64 v16; // [rsp+30h] [rbp-358h]
  _QWORD v17[2]; // [rsp+40h] [rbp-348h] BYREF
  __m128i si128; // [rsp+50h] [rbp-338h]
  int v19; // [rsp+60h] [rbp-328h]
  __int128 v20; // [rsp+68h] [rbp-320h] BYREF
  __int64 v21; // [rsp+78h] [rbp-310h]
  char v22; // [rsp+80h] [rbp-308h]
  __int64 v23; // [rsp+88h] [rbp-300h]
  __int64 v24; // [rsp+90h] [rbp-2F8h]
  __int64 v25; // [rsp+98h] [rbp-2F0h]
  unsigned int v26; // [rsp+A0h] [rbp-2E8h] BYREF
  char v27; // [rsp+A4h] [rbp-2E4h]
  __int64 v28; // [rsp+A8h] [rbp-2E0h]
  __int64 v29; // [rsp+B0h] [rbp-2D8h]
  __int64 v30; // [rsp+B8h] [rbp-2D0h]
  __int64 v31; // [rsp+C0h] [rbp-2C8h]
  char v32; // [rsp+F8h] [rbp-290h]
  __int64 *v33; // [rsp+100h] [rbp-288h]
  __int64 v34; // [rsp+108h] [rbp-280h]
  int v35; // [rsp+110h] [rbp-278h]
  char v36; // [rsp+114h] [rbp-274h]
  __int64 v37; // [rsp+118h] [rbp-270h] BYREF
  __int64 v38; // [rsp+160h] [rbp-228h] BYREF
  __int64 v39; // [rsp+168h] [rbp-220h]
  __int64 v40[2]; // [rsp+248h] [rbp-140h] BYREF
  __int64 v41; // [rsp+258h] [rbp-130h]
  int v42[62]; // [rsp+290h] [rbp-F8h] BYREF

  v2 = (_QWORD *)a1[1];
  if ( !v2 )
    return;
  v26 = 20;
  v28 = 0;
  v33 = &v37;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v27 = 1;
  v3 = *v2;
  v32 = 0;
  v4 = *(__int64 (__fastcall **)(__int64))(v3 + 48);
  v36 = 1;
  v34 = 8;
  v35 = 0;
  if ( v4 != sub_15A1860 )
  {
    v6 = v4((__int64)v2);
    v2 = (_QWORD *)a1[1];
    v5 = *(__int64 (__fastcall **)(__int64))(*v2 + 40LL);
    if ( v5 == sub_15A1850 )
      goto LABEL_4;
LABEL_14:
    v14 = v6;
    v7 = v5((__int64)v2);
    v6 = v14;
    goto LABEL_5;
  }
  v5 = *(__int64 (__fastcall **)(__int64))(v3 + 40);
  v6 = (__int64)(v2 + 3);
  if ( v5 != sub_15A1850 )
    goto LABEL_14;
LABEL_4:
  v7 = v2[6];
LABEL_5:
  *((_QWORD *)&v13 + 1) = 0;
  *(_QWORD *)&v13 = sub_16FEB80;
  sub_16FF270((__int64)&v38, *a1, v7, v6, &v26, (__int64)sub_16FEB80, v13);
  v8 = operator new(0x28u);
  *(_QWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 24) = 0;
  *(_DWORD *)(v8 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v8, (std::__detail::_List_node_base *)v40);
  ++v41;
  if ( (*(_BYTE *)(a2 + 8) & 0x20) == 0 )
  {
    v17[1] = "namespace";
    si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
    v19 = 0;
    v20 = 0;
    v17[0] = 0;
    v21 = 0;
    v22 = v22 & 0x80 | 0x40;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    sub_1706C30((__int64)&v38, (__int64)v17);
    sub_1705410((__int64)&v20);
  }
  v9 = *a1;
  v15 = 0;
  v16 = 0;
  sub_16FF1B0(v17, (__int64)&v38, *(_QWORD *)(v9 + 544), 0, (__int64 *)&v15);
  sub_1705410((__int64)&v15);
  v10 = *(_DWORD *)(a1[1] + 8);
  sub_1A65F80(*a1, a2, 0, v17, (v10 & 4) != 0, (v10 & 0x20) != 0);
  sub_16FF8C0((__int64)v40, v40[1]);
  v11 = a1[1];
  v12 = 0;
  if ( v38 != v39 )
    v12 = v38;
  if ( v11 )
    sub_1700D50(*a1, v11, v42, v12, -1431655765 * ((v39 - v38) >> 5));
  v17[0] = &off_2C4EFD0;
  sub_1705410((__int64)&v20);
  nullsub_1203(v17);
  sub_1700A70((__int64)&v38);
  sub_17038E0((__int64)&v26);
}
