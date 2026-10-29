void __fastcall sub_1722370(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdi
  bool v5; // zf
  bool (__fastcall *v6)(__int64, __int64, __int64, __int64, __int64, __int64); // rax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 (__fastcall *v9)(__int64); // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rsi
  int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdi
  unsigned int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-338h]
  __int64 v31; // [rsp+0h] [rbp-338h]
  __int64 v32; // [rsp+10h] [rbp-328h]
  _QWORD v33[5]; // [rsp+20h] [rbp-318h] BYREF
  __int64 v34; // [rsp+48h] [rbp-2F0h] BYREF
  __int128 v35; // [rsp+60h] [rbp-2D8h] BYREF
  __m128i si128; // [rsp+70h] [rbp-2C8h]
  __int64 v37; // [rsp+80h] [rbp-2B8h]
  __int128 v38; // [rsp+88h] [rbp-2B0h] BYREF
  __int64 v39; // [rsp+98h] [rbp-2A0h]
  char v40; // [rsp+A0h] [rbp-298h]
  __int64 v41; // [rsp+A8h] [rbp-290h]
  __int64 v42; // [rsp+B0h] [rbp-288h]
  __int64 v43; // [rsp+B8h] [rbp-280h]
  __int64 *v44; // [rsp+C0h] [rbp-278h]
  __int64 v45; // [rsp+C8h] [rbp-270h]
  int v46; // [rsp+D0h] [rbp-268h]
  char v47; // [rsp+D4h] [rbp-264h]
  __int64 v48; // [rsp+D8h] [rbp-260h] BYREF
  __int64 v49; // [rsp+120h] [rbp-218h] BYREF
  __int64 v50; // [rsp+128h] [rbp-210h]
  __int64 v51[2]; // [rsp+208h] [rbp-130h] BYREF
  __int64 v52; // [rsp+218h] [rbp-120h]
  int v53[58]; // [rsp+250h] [rbp-E8h] BYREF

  v3 = sub_168B6E0((__int64)a1);
  v4 = (__int64 *)a1[1];
  v5 = (*(_BYTE *)(v3 + 1) & 0x10) == 0;
  v6 = sub_17043F0;
  LODWORD(v35) = 9;
  if ( !v5 )
    v6 = sub_17045F0;
  BYTE4(v35) = 0;
  *((_QWORD *)&v35 + 1) = 0;
  v7 = (__int64)v6;
  si128 = 0u;
  v37 = 0;
  v44 = &v48;
  v8 = *v4;
  LOBYTE(v43) = 0;
  v9 = *(__int64 (__fastcall **)(__int64))(v8 + 48);
  v47 = 1;
  v45 = 8;
  v46 = 0;
  if ( v9 == sub_15A1860 )
  {
    v10 = (__int64)(v4 + 3);
  }
  else
  {
    v31 = v7;
    v29 = ((__int64 (__fastcall *)(__int64 *, __int64, __int64 (__fastcall *)(__int64), __int64 (__fastcall *)(__int64)))v9)(
            v4,
            a2,
            v9,
            sub_15A1860);
    v4 = (__int64 *)a1[1];
    v7 = v31;
    v10 = v29;
    v8 = *v4;
  }
  v11 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v11 == (char *)sub_15A1850 )
  {
    v12 = v4[6];
  }
  else
  {
    v32 = v7;
    v30 = v10;
    v28 = v11();
    v7 = v32;
    v12 = v28;
    v10 = v30;
  }
  sub_16FF270((__int64)&v49, *a1, v12, v10, (unsigned int *)&v35, v7, (unsigned __int64)v7);
  sub_17038E0((__int64)&v35);
  v13 = *a1;
  v35 = 0;
  si128.m128i_i64[0] = 0;
  sub_16FF1B0(v33, (__int64)&v49, *(_QWORD *)(v13 + 544), 0, (__int64 *)&v35);
  sub_1705410((__int64)&v35);
  v14 = operator new(0x28u);
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 24) = 0;
  *(_DWORD *)(v14 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v14, (std::__detail::_List_node_base *)v51);
  v15 = a1[1];
  v16 = *a1;
  ++v52;
  sub_1A65F80(v16, a2, 0, v33, (*(_DWORD *)(v15 + 8) & 4) != 0, (*(_DWORD *)(v15 + 8) & 0x20) != 0);
  v17 = sub_15F1670(*a1);
  if ( v17 )
  {
    v18 = sub_BA85D0(v17);
    if ( v18 )
    {
      if ( sub_BAB630(v18, a2, v19, v20, v21, v22) )
      {
        *((_QWORD *)&v35 + 1) = "super";
        v38 = 0;
        *(_QWORD *)&v35 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
        v40 = v40 & 0x80 | 0x40;
        LODWORD(v37) = 0;
        v39 = 0;
        v41 = 0;
        v42 = 0;
        v43 = 0;
        sub_1706C30((__int64)&v49, (__int64)&v35);
        sub_1705410((__int64)&v38);
        sub_1713960(*a1, 1, 0, 0, (__int64)&v49);
      }
    }
  }
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 0x10) != 0 )
    sub_1711B50(*a1, (__int64)&v49);
  sub_16FF8C0((__int64)v51, v51[1]);
  v23 = a1[1];
  v24 = *(_DWORD *)(v23 + 8);
  if ( (v24 & 1) == 0 )
  {
    v25 = v49;
    v26 = *a1;
    v27 = -1431655765 * ((v50 - v49) >> 5);
    if ( v49 == v50 )
      v25 = 0;
LABEL_16:
    sub_1700D50(v26, v23, v53, v25, v27);
    goto LABEL_17;
  }
  sub_1722040(*(_QWORD **)(*a1 + 240), &v49, (v24 & 0x20) != 0, 0, 0);
  v25 = v49;
  v23 = a1[1];
  v26 = *a1;
  v27 = -1431655765 * ((v50 - v49) >> 5);
  if ( v49 == v50 )
    v25 = 0;
  if ( v23 )
    goto LABEL_16;
LABEL_17:
  v33[0] = &off_2C4EFD0;
  sub_1705410((__int64)&v34);
  nullsub_1203(v33);
  sub_1700A70((__int64)&v49);
}
