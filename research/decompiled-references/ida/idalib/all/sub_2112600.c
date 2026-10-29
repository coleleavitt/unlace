unsigned __int64 __fastcall sub_2112600(__int64 a1, _DWORD *a2, char a3, char a4)
{
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rdi
  unsigned __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rax
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rdi
  unsigned __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int64 result; // rax
  unsigned __int64 v45; // rbp
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // rdi
  unsigned __int64 v49; // rax
  __int64 v50; // rdi
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // rdi
  unsigned __int64 v54; // [rsp+0h] [rbp-58h]

  *(_BYTE *)(a1 + 10) = 0;
  *(_BYTE *)(a1 + 888) = a3;
  *(_QWORD *)(a1 + 896) = a2;
  *(_WORD *)(a1 + 8) = 1;
  *(_QWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  switch ( *a2 )
  {
    case 0:
      result = sub_210F850(a1, a2 + 6);
      break;
    case 1:
      result = sub_2110B50(a1, (__int64)(a2 + 6), a4);
      break;
    case 2:
      v45 = sub_2106B00((__int64)a2, 0, "#C", 2, 259);
      v46 = sub_2106AD0(*(_QWORD *)(a1 + 896), 0, "C_WSA64", (__int64)&byte_7, 0x401010100030400LL, 0, v45);
      v47 = sub_2106820(*(_QWORD *)(a1 + 896), 19, "#S", 2, 16843008, v46);
      v48 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 760) = v47;
      v49 = sub_2106AD0(v48, 2, "C_CODE64", (__int64)byte_8, 0x300000000010401LL, 0, v45);
      v50 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 24) = v49;
      v51 = sub_2106AD0(v50, 0, "C_@@QPPA2", (__int64)byte_9, 0x300000100030401LL, 0, v45);
      v52 = sub_2106820(*(_QWORD *)(a1 + 896), 19, ".&ppa2", 6, 16777473, v51);
      v53 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 752) = v52;
      result = sub_2106AD0(v53, 19, "B_IDRL", 6, 0x300020001010401LL, 0, v45);
      *(_QWORD *)(a1 + 768) = result;
      break;
    case 3:
      result = sub_2111DC0((_QWORD *)a1, (__int64)(a2 + 6));
      break;
    case 4:
      result = sub_2105FC0((__int64)a2);
      *(_QWORD *)(a1 + 24) = result;
      break;
    case 5:
      result = sub_210EE10((_QWORD *)a1);
      break;
    case 6:
      v5 = (_QWORD *)sub_2108BD0((__int64)a2, "..text..", 8, 2, 65792, 1, 0);
      v6 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 24) = v5;
      v7 = v5[22];
      *(_QWORD *)(v7 + 56) = &byte_22F0C30;
      *(_QWORD *)(v7 + 64) = 0;
      *(_BYTE *)(v7 + 72) = 1;
      v5[23] = &byte_22F0C30;
      v5[24] = 0;
      v8 = sub_2108BD0(v6, ".data", 5, 19, 65797, 1, 0);
      v9 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 32) = v8;
      v10 = sub_2108BD0(v9, ".rodata", 7, 4, 65793, 1, 0);
      v11 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 48) = v10;
      *(_BYTE *)(v10 + 32) = 2;
      v12 = sub_2108BD0(v11, ".rodata.8", 9, 4, 65793, 1, 0);
      v13 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 784) = v12;
      *(_BYTE *)(v12 + 32) = 3;
      v14 = sub_2108BD0(v13, ".rodata.16", 10, 4, 65793, 1, 0);
      v15 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 792) = v14;
      *(_BYTE *)(v14 + 32) = 4;
      v16 = sub_2108BD0(v15, ".tdata", 6, 13, 65812, 1, 0);
      v17 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 424) = v16;
      v18 = sub_2108BD0(v17, "TOC", 3, 19, 65807, 0, 0);
      v19 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 776) = v18;
      *(_BYTE *)(v18 + 32) = 2;
      v20 = sub_2108BD0(v19, ".gcc_except_table", 17, 4, 65793, 0, 0);
      v21 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 56) = v20;
      v22 = sub_2108BD0(v21, ".eh_info_table", 14, 19, 65797, 0, 0);
      v23 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 64) = v22;
      v24 = sub_2108BD0(v23, ".dwabrev", 8, 0, 261, 1, 0x100060000LL);
      v25 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 80) = v24;
      v26 = sub_2108BD0(v25, ".dwinfo", 7, 0, 261, 1, 0x100010000LL);
      v27 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 88) = v26;
      v28 = sub_2108BD0(v27, ".dwline", 7, 0, 261, 1, 0x100020000LL);
      v29 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 96) = v28;
      v30 = sub_2108BD0(v29, ".dwframe", 8, 0, 261, 1, 0x1000A0000LL);
      v31 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 112) = v30;
      v32 = sub_2108BD0(v31, ".dwpbnms", 8, 0, 261, 1, 0x100030000LL);
      v33 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 184) = v32;
      v34 = sub_2108BD0(v33, ".dwpbtyp", 8, 0, 261, 1, 0x100040000LL);
      v35 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 120) = v34;
      v36 = sub_2108BD0(v35, ".dwstr", 6, 0, 261, 1, 0x100070000LL);
      v37 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 136) = v36;
      v38 = sub_2108BD0(v37, ".dwloc", 6, 0, 261, 1, 0x100090000LL);
      v39 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 144) = v38;
      v40 = sub_2108BD0(v39, ".dwarnge", 8, 0, 261, 1, 0x100050000LL);
      v41 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 152) = v40;
      v42 = sub_2108BD0(v41, ".dwrnges", 8, 0, 261, 1, 0x100080000LL);
      v43 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)(a1 + 160) = v42;
      *(_QWORD *)(a1 + 168) = sub_2108BD0(v43, ".dwmac", 6, 0, 261, 1, 0x1000B0000LL);
      result = v54;
      break;
    case 7:
      result = sub_2109C70((__int64)a2, "DXBC", 4u, 2);
      *(_QWORD *)(a1 + 24) = result;
      break;
    default:
      return result;
  }
  return result;
}
