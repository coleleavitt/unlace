void __fastcall sub_172DA60(__int64 *a1, __int64 a2, char a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 (*v10)(void); // rdx
  __int64 v11; // rcx
  __int64 (*v12)(void); // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // r9
  const char *v18; // rsi
  __m128i v19; // xmm1
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  _WORD *v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rdi
  int v34; // edx
  __int64 v35; // rcx
  unsigned int v36; // r8d
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // [rsp-14h] [rbp-3A8h]
  __int64 v40; // [rsp-Ch] [rbp-3A0h]
  __int64 v42; // [rsp+4h] [rbp-390h]
  _QWORD v43[5]; // [rsp+Ch] [rbp-388h] BYREF
  __int64 v44; // [rsp+34h] [rbp-360h] BYREF
  __int64 v45; // [rsp+4Ch] [rbp-348h] BYREF
  unsigned __int64 v46; // [rsp+54h] [rbp-340h]
  __m128i si128; // [rsp+5Ch] [rbp-338h]
  int v48; // [rsp+6Ch] [rbp-328h]
  __int128 v49; // [rsp+74h] [rbp-320h] BYREF
  __int64 v50; // [rsp+84h] [rbp-310h]
  char v51; // [rsp+8Ch] [rbp-308h]
  __int64 v52; // [rsp+94h] [rbp-300h]
  __int64 v53; // [rsp+9Ch] [rbp-2F8h]
  __int64 v54; // [rsp+A4h] [rbp-2F0h]
  _BYTE v55[24]; // [rsp+ACh] [rbp-2E8h] BYREF
  __int64 v56; // [rsp+C4h] [rbp-2D0h]
  __int64 v57; // [rsp+CCh] [rbp-2C8h]
  __int64 v58; // [rsp+D4h] [rbp-2C0h]
  _BYTE *v59; // [rsp+DCh] [rbp-2B8h]
  __int64 v60; // [rsp+E4h] [rbp-2B0h]
  _BYTE v61[32]; // [rsp+ECh] [rbp-2A8h] BYREF
  _QWORD *v62; // [rsp+10Ch] [rbp-288h]
  __int64 v63; // [rsp+114h] [rbp-280h]
  int v64; // [rsp+11Ch] [rbp-278h]
  char v65; // [rsp+120h] [rbp-274h]
  _QWORD v66[3]; // [rsp+124h] [rbp-270h] BYREF
  __int64 v67; // [rsp+13Ch] [rbp-258h] BYREF
  __int64 v68; // [rsp+16Ch] [rbp-228h] BYREF
  __int64 v69; // [rsp+174h] [rbp-220h]
  __int64 v70; // [rsp+21Ch] [rbp-178h]
  __m128i v71; // [rsp+224h] [rbp-170h] BYREF
  char (__fastcall *v72)(__int64, __int64); // [rsp+234h] [rbp-160h]
  __int64 v73; // [rsp+23Ch] [rbp-158h]
  __int64 v74[2]; // [rsp+254h] [rbp-140h] BYREF
  __int64 v75; // [rsp+264h] [rbp-130h]
  int v76[62]; // [rsp+29Ch] [rbp-F8h] BYREF

  v8 = (__int64 *)a1[1];
  v55[4] = 0;
  *(_DWORD *)v55 = 7;
  *(_OWORD *)&v55[8] = 0;
  v56 = 0;
  v57 = 0;
  v62 = v66;
  v9 = *v8;
  v61[24] = 0;
  v10 = *(__int64 (**)(void))(v9 + 48);
  v65 = 1;
  v63 = 8;
  v64 = 0;
  if ( (char *)v10 == (char *)sub_15A1860 )
  {
    v11 = (__int64)(v8 + 3);
  }
  else
  {
    v38 = v10();
    v8 = (__int64 *)a1[1];
    v11 = v38;
    v9 = *v8;
  }
  v12 = *(__int64 (**)(void))(v9 + 40);
  if ( (char *)v12 == (char *)sub_15A1850 )
  {
    v13 = v8[6];
  }
  else
  {
    v42 = v11;
    v37 = v12();
    v11 = v42;
    v13 = v37;
  }
  sub_16FF270((__int64)&v68, *a1, v13, v11, (unsigned int *)v55, a6, 0);
  sub_17038E0((__int64)v55);
  v73 = 0;
  v72 = sub_16FFBF0;
  v14 = operator new(0x28u);
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 24) = 0;
  *(_DWORD *)(v14 + 32) = 0;
  std::__detail::_List_node_base::_M_hook((std::__detail::_List_node_base *)v14, (std::__detail::_List_node_base *)v74);
  v15 = *a1;
  memset(v55, 0, sizeof(v55));
  v16 = *(_QWORD *)(v15 + 544);
  ++v75;
  sub_16FF1B0(v43, (__int64)&v68, v16, 0, (__int64 *)v55);
  sub_1705410((__int64)v55);
  v17 = *(_DWORD *)(a1[1] + 8);
  sub_1A65F80(*a1, a2, 0, v43, (v17 & 4) != 0, (v17 & 0x20) != 0);
  sub_17253B0(8, a2, *a1, &v68);
  v18 = "else";
  v59 = v61;
  v19 = _mm_loadu_si128(&v71);
  v60 = 0x400000000LL;
  v66[1] = &v67;
  v66[2] = 0x200000000LL;
  *(__m128i *)v55 = v19;
  *(_QWORD *)&v55[16] = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  sub_15A2F70((__int64)v55, (__int64)"else");
  v22 = v39;
  v23 = v40;
  v24 = *(_QWORD *)(*(_QWORD *)(v70 + 656) + 8LL);
  if ( v24 && (*(_BYTE *)(v24 + 8) & 2) != 0 )
  {
    if ( a3 )
    {
      sub_15A3210((__int64)v55, 19, (char *)&byte_22F0C30);
      sub_15A3210((__int64)v55, 11, (char *)&byte_22F0C30);
      sub_15A3210((__int64)v55, 20, (char *)&byte_22F0C30);
      sub_15A3090((__int64)v55, (__int64)"statements");
      sub_15A3210((__int64)v55, 20, (char *)&byte_22F0C30);
      v18 = byte_9 + 3;
      sub_15A3210((__int64)v55, 12, (char *)&byte_22F0C30);
    }
    else
    {
      sub_15A3210((__int64)v55, 20, (char *)&byte_22F0C30);
      sub_15A3210((__int64)v55, 19, (char *)&byte_22F0C30);
      sub_15A3090((__int64)v55, (__int64)"statement");
      v18 = (_BYTE *)(&word_10 + 1);
      sub_15A3210((__int64)v55, 17, (char *)&byte_22F0C30);
    }
  }
  v46 = sub_15A5CA0((__int64)v55, (__int64)v18, v22, v23, v20, v21);
  v49 = 0;
  v45 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v51 = v51 & 0x80 | 0x40;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  sub_1706C30((__int64)&v68, (__int64)&v45);
  sub_1705410((__int64)&v49);
  sub_15A2F70((__int64)v55, (__int64)"else if");
  sub_15A3210((__int64)v55, 19, (char *)&byte_22F0C30);
  sub_15A3210((__int64)v55, 7, (char *)&byte_22F0C30);
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 1) & 8) != 0 )
    sub_15A3090((__int64)v55, (__int64)"condition");
  else
    sub_15A3090((__int64)v55, (__int64)"expression");
  v25 = 8;
  sub_15A3210((__int64)v55, 8, (char *)&byte_22F0C30);
  v30 = *(_QWORD *)(*(_QWORD *)(v70 + 656) + 8LL);
  if ( v30 && (*(_BYTE *)(v30 + 8) & 2) != 0 )
  {
    if ( a3 )
    {
      sub_15A3210((__int64)v55, 19, (char *)&byte_22F0C30);
      sub_15A3210((__int64)v55, 11, (char *)&byte_22F0C30);
      sub_15A3210((__int64)v55, 20, (char *)&byte_22F0C30);
      sub_15A3090((__int64)v55, (__int64)"statements");
      sub_15A3210((__int64)v55, 20, (char *)&byte_22F0C30);
      v25 = 12;
      sub_15A3210((__int64)v55, 12, (char *)&byte_22F0C30);
    }
    else
    {
      sub_15A3210((__int64)v55, 20, (char *)&byte_22F0C30);
      sub_15A3210((__int64)v55, 19, (char *)&byte_22F0C30);
      sub_15A3090((__int64)v55, (__int64)"statement");
      v25 = 17;
      sub_15A3210((__int64)v55, 17, (char *)&byte_22F0C30);
    }
  }
  v46 = sub_15A5CA0((__int64)v55, v25, v26, v27, v28, v29);
  v49 = 0;
  v45 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AA960);
  v51 = v51 & 0x80 | 0x40;
  v48 = 0;
  v50 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  sub_1706C30((__int64)&v68, (__int64)&v45);
  sub_1705410((__int64)&v49);
  sub_16FF8C0((__int64)v74, v74[1]);
  if ( *(_QWORD *)(a2 + 24) )
  {
    v31 = (_WORD *)sub_168B6E0((__int64)a1);
    sub_17105A0(v31, &v68);
  }
  v32 = a1[1];
  v33 = *a1;
  v34 = *(_DWORD *)(v32 + 8);
  if ( (v34 & 1) == 0 )
  {
    v35 = v68;
    v36 = -1431655765 * ((v69 - v68) >> 5);
    if ( v68 == v69 )
      v35 = 0;
LABEL_20:
    sub_1700D50(v33, v32, v76, v35, v36);
    goto LABEL_21;
  }
  sub_1722040(*(_QWORD **)(v33 + 240), &v68, (v34 & 0x20) != 0, 0, 0);
  v32 = a1[1];
  v33 = *a1;
  v35 = v68;
  v36 = -1431655765 * ((v69 - v68) >> 5);
  if ( v68 == v69 )
    v35 = 0;
  if ( v32 )
    goto LABEL_20;
LABEL_21:
  sub_1704B40(v55);
  v43[0] = &off_2C4EFD0;
  sub_1705410((__int64)&v44);
  nullsub_1203(v43);
  sub_1700A70((__int64)&v68);
}
