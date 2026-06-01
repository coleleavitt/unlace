void __fastcall sub_1722760(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 v10; // rcx
  __int64 (*v11)(void); // rax
  __int64 v12; // rdx
  int v13; // edx
  __int64 v14; // rax
  __m128i v15; // xmm1
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-340h]
  _QWORD v25[2]; // [rsp+10h] [rbp-338h] BYREF
  __m128i si128; // [rsp+20h] [rbp-328h]
  int v27; // [rsp+30h] [rbp-318h]
  __int128 v28; // [rsp+38h] [rbp-310h] BYREF
  __int64 v29; // [rsp+48h] [rbp-300h]
  char v30; // [rsp+50h] [rbp-2F8h]
  __int64 v31; // [rsp+58h] [rbp-2F0h]
  __int64 v32; // [rsp+60h] [rbp-2E8h]
  __int64 v33; // [rsp+68h] [rbp-2E0h]
  __m128i v34; // [rsp+70h] [rbp-2D8h] BYREF
  __int64 v35; // [rsp+80h] [rbp-2C8h]
  __int64 v36; // [rsp+88h] [rbp-2C0h]
  __int64 v37; // [rsp+90h] [rbp-2B8h]
  __int64 v38; // [rsp+98h] [rbp-2B0h]
  void *v39; // [rsp+A0h] [rbp-2A8h]
  __int64 v40; // [rsp+A8h] [rbp-2A0h]
  _BYTE v41[32]; // [rsp+B0h] [rbp-298h] BYREF
  __int64 *v42; // [rsp+D0h] [rbp-278h]
  __int64 v43; // [rsp+D8h] [rbp-270h]
  int v44; // [rsp+E0h] [rbp-268h]
  char v45; // [rsp+E4h] [rbp-264h]
  __int64 v46; // [rsp+E8h] [rbp-260h] BYREF
  void *ptr; // [rsp+F0h] [rbp-258h]
  __int64 v48; // [rsp+F8h] [rbp-250h]
  _BYTE v49[48]; // [rsp+100h] [rbp-248h] BYREF
  char *v50; // [rsp+130h] [rbp-218h] BYREF
  char *v51; // [rsp+138h] [rbp-210h]
  char *v52; // [rsp+140h] [rbp-208h]
  __m128i v53[3]; // [rsp+1E8h] [rbp-160h] BYREF
  __int64 v54[2]; // [rsp+218h] [rbp-130h] BYREF
  __int64 v55; // [rsp+228h] [rbp-120h]
  int v56[58]; // [rsp+260h] [rbp-E8h] BYREF

  v7 = (__int64 *)a1[1];
  v34.m128i_i8[4] = 0;
  v34.m128i_i32[0] = 24;
  v34.m128i_i64[1] = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v42 = &v46;
  v8 = *v7;
  v41[24] = 0;
  v9 = *(__int64 (**)(void))(v8 + 48);
  v45 = 1;
  v43 = 8;
  v44 = 0;
  if ( (char *)v9 == (char *)sub_15A1860 )
  {
    v10 = (__int64)(v7 + 3);
  }
  else
  {
    v23 = v9();
    v7 = (__int64 *)a1[1];
    v10 = v23;
    v8 = *v7;
  }
  v11 = *(__int64 (**)(void))(v8 + 40);
  if ( (char *)v11 == (char *)sub_15A1850 )
  {
    v12 = v7[6];
  }
  else
  {
    v24 = v10;
    v22 = v11();
    v10 = v24;
    v12 = v22;
  }
  sub_16FF270((__int64)&v50, *a1, v12, v10, (unsigned int *)&v34, a6, 0);
  sub_17038E0((__int64)&v34);
  v13 = *(_DWORD *)(a1[1] + 8);
  if ( (v13 & 1) != 0 )
    sub_1722040(*(_QWORD **)(*a1 + 240), &v50, (v13 & 0x20) != 0, 1, 0);
  v14 = operator new(0x28u);
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 24) = 0;
  *(_DWORD *)(v14 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v14, (std::__detail::_List_node_base *)v54);
  v39 = v41;
  v15 = _mm_loadu_si128(v53);
  v40 = 0x400000000LL;
  ptr = v49;
  v34 = v15;
  v48 = 0x200000000LL;
  ++v55;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  sub_15A2F70((__int64)&v34, (__int64)"defined");
  sub_15A3210((__int64)&v34, 19, (char *)&byte_22F0C30);
  sub_15A3210((__int64)&v34, 7, (char *)&byte_22F0C30);
  sub_15A3090((__int64)&v34, (__int64)"macro");
  sub_15A3210((__int64)&v34, 8, (char *)&byte_22F0C30);
  v25[0] = 0;
  v25[1] = sub_15A5CA0((__int64)&v34, 8, v16, v17, v18, v19);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v28 = 0;
  v27 = 0;
  v29 = 0;
  v30 = v30 & 0x80 | 0x40;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  if ( v51 == v52 )
  {
    sub_1706840((__int64)&v50, v51, (__int64)v25);
  }
  else
  {
    sub_17048E0((__int64)v51, (__int64)v25);
    v51 += 96;
  }
  sub_1705410((__int64)&v28);
  sub_16FF8C0((__int64)v54, v54[1]);
  v20 = a1[1];
  v21 = 0;
  if ( v50 != v51 )
    v21 = (__int64)v50;
  if ( v20 )
    sub_1700D50(*a1, v20, v56, v21, -1431655765 * ((v51 - v50) >> 5));
  if ( ptr != v49 )
    free(ptr);
  if ( v39 != v41 )
    free(v39);
  sub_1700A70((__int64)&v50);
}
