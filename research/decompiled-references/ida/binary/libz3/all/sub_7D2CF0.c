__m128i *__fastcall sub_7D2CF0(__int64 a1, __int64 a2)
{
  char **exception; // rbp
  __int64 v3; // rdx
  __int64 *v4; // rbx
  __int64 *v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rsi
  __m128i *v10; // rbx
  __m128i *v11; // rbx
  __int32 v12; // eax
  __m128i v13; // xmm0
  unsigned __int64 *v14; // r13
  size_t v15; // rbp
  size_t v16; // r12
  unsigned __int64 *v17; // r15
  size_t v18; // rbp
  size_t v19; // r12
  __int32 v20; // eax
  __int64 v21; // xmm0_8
  __int32 v22; // eax
  __m128i v23; // xmm0
  __int32 v24; // eax
  __m128i v25; // xmm0
  __int32 v26; // eax
  __int32 v27; // eax
  __int32 v28; // eax
  __int32 v29; // eax
  __int32 v30; // eax
  int v31; // eax
  __m128i *v32; // rdi
  __m128i v33; // xmm0
  __int64 (__fastcall *v34)(__int64, __int64); // rax
  bool v35; // zf
  size_t v36; // rsi
  unsigned __int64 *v37; // rdi
  __m128i *v38; // r15
  __int64 v39; // rbx
  _QWORD *v40; // r13
  __int64 v41; // rbp
  __int64 v42; // rcx
  unsigned int v43; // eax
  unsigned int v44; // r12d
  unsigned int v45; // edx
  __int32 *v46; // rax
  __int32 v47; // edx
  unsigned int v48; // eax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  _QWORD *v52; // rbx
  _QWORD *v53; // rbp
  _QWORD *v54; // r13
  void (__fastcall *v55)(__int64, __int64); // rax
  __int64 v57; // rax
  __m128i *v58; // r15
  __int64 v59; // rbp
  _QWORD *v60; // rax
  __m128i *v61; // r15
  __int64 v62; // rbp
  __int64 v63; // r12
  unsigned __int64 v64; // rdi
  __int64 v65; // rax
  unsigned __int64 *v66; // rdi
  _BYTE *v67; // rsi
  __int64 v68; // r12
  unsigned __int64 v69; // rdi
  __int64 v70; // rax
  unsigned __int64 *v71; // rdi
  _BYTE *v72; // rsi
  __m128i v73; // [rsp+0h] [rbp-C8h] BYREF
  __int64 v74; // [rsp+10h] [rbp-B8h]
  __int64 v75; // [rsp+18h] [rbp-B0h]
  __int64 v76; // [rsp+20h] [rbp-A8h]
  unsigned int v77; // [rsp+2Ch] [rbp-9Ch]
  __m128i *v78; // [rsp+30h] [rbp-98h]
  __int64 *v79; // [rsp+38h] [rbp-90h]
  int v80; // [rsp+44h] [rbp-84h] BYREF
  __m128i *v81; // [rsp+48h] [rbp-80h] BYREF
  __m128i v82; // [rsp+50h] [rbp-78h] BYREF
  __m128i v83; // [rsp+60h] [rbp-68h]
  _QWORD v84[11]; // [rsp+70h] [rbp-58h] BYREF

  v74 = a2;
  v73 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v81, (__m128i)(unsigned __int64)&v80);
  v7 = sub_186B270(0x20E0u);
  v8 = *(_QWORD *)(a1 + 2240);
  v9 = *(_QWORD *)(a1 + 2232);
  v84[0] = 0;
  v10 = (__m128i *)v7;
  v79 = v84;
  sub_7D2250(v7, v9, v8, v84);
  v81 = v10;
  sub_18572D0(v84);
  v11 = v81;
  v81[52] = _mm_loadu_si128((const __m128i *)(a1 + 832));
  v11[53] = _mm_loadu_si128((const __m128i *)(a1 + 848));
  v11[54] = _mm_loadu_si128((const __m128i *)(a1 + 864));
  v11[55] = _mm_loadu_si128((const __m128i *)(a1 + 880));
  v12 = *(_DWORD *)(a1 + 895);
  *(__m128i *)((char *)v11 + 904) = _mm_loadu_si128((const __m128i *)(a1 + 904));
  v13 = _mm_loadu_si128((const __m128i *)(a1 + 920));
  *(__int32 *)((char *)&v11[55].m128i_i32[3] + 3) = v12;
  *(__m128i *)((char *)v11 + 920) = v13;
  if ( (unsigned __int64 *)(a1 + 936) != &v11[58].m128i_u64[1] )
  {
    v14 = (unsigned __int64 *)v11[58].m128i_i64[1];
    v15 = *(_QWORD *)(a1 + 944);
    if ( v14 == &v11[59].m128i_u64[1] )
    {
      if ( v15 <= 0xF )
      {
LABEL_4:
        if ( !v15 )
        {
LABEL_5:
          v11[59].m128i_i64[0] = v15;
          *((_BYTE *)v14 + v15) = 0;
          goto LABEL_6;
        }
LABEL_59:
        v67 = *(_BYTE **)(a1 + 936);
        if ( v15 == 1 )
          *(_BYTE *)v14 = *v67;
        else
          memcpy(v14, v67, v15);
        v14 = (unsigned __int64 *)v11[58].m128i_i64[1];
        goto LABEL_5;
      }
      if ( (v15 & 0x8000000000000000LL) != 0LL )
        goto LABEL_88;
      v63 = 30;
      if ( v15 >= 0x1E )
        v63 = *(_QWORD *)(a1 + 944);
    }
    else
    {
      v16 = v11[59].m128i_u64[1];
      if ( v16 >= v15 )
        goto LABEL_4;
      if ( (v15 & 0x8000000000000000LL) != 0LL )
        goto LABEL_88;
      v63 = 2 * v16;
      if ( v15 < v63 )
      {
        if ( v63 < 0 )
          goto LABEL_86;
        v64 = v63 + 1;
        goto LABEL_56;
      }
      v63 = *(_QWORD *)(a1 + 944);
    }
    v64 = v63 + 1;
    if ( v63 + 1 < 0 )
      goto LABEL_86;
LABEL_56:
    v65 = operator new(v64);
    v66 = (unsigned __int64 *)v11[58].m128i_i64[1];
    v14 = (unsigned __int64 *)v65;
    if ( &v11[59].m128i_u64[1] != v66 )
      operator delete(v66, v11[59].m128i_i64[1] + 1);
    v11[58].m128i_i64[1] = (__int64)v14;
    v11[59].m128i_i64[1] = v63;
    goto LABEL_59;
  }
LABEL_6:
  if ( (unsigned __int64 *)(a1 + 968) == &v11[60].m128i_u64[1] )
    goto LABEL_11;
  v17 = (unsigned __int64 *)v11[60].m128i_i64[1];
  v18 = *(_QWORD *)(a1 + 976);
  if ( v17 != &v11[61].m128i_u64[1] )
  {
    v19 = v11[61].m128i_u64[1];
    if ( v19 >= v18 )
      goto LABEL_9;
    if ( (v18 & 0x8000000000000000LL) == 0LL )
    {
      v68 = 2 * v19;
      if ( v18 < v68 )
      {
        v69 = v68 + 1;
        if ( v68 >= 0 )
          goto LABEL_66;
        goto LABEL_86;
      }
LABEL_64:
      v69 = v18 + 1;
      if ( (__int64)(v18 + 1) >= 0 )
      {
        v68 = *(_QWORD *)(a1 + 976);
LABEL_66:
        v70 = operator new(v69);
        v71 = (unsigned __int64 *)v11[60].m128i_i64[1];
        v17 = (unsigned __int64 *)v70;
        if ( &v11[61].m128i_u64[1] != v71 )
          operator delete(v71, v11[61].m128i_i64[1] + 1);
        v11[60].m128i_i64[1] = (__int64)v17;
        v11[61].m128i_i64[1] = v68;
        goto LABEL_69;
      }
LABEL_86:
      std::__throw_bad_alloc();
    }
    goto LABEL_88;
  }
  if ( v18 > 0xF )
  {
    if ( (v18 & 0x8000000000000000LL) == 0LL )
    {
      if ( v18 <= 0x1D )
      {
        v69 = 31;
        v68 = 30;
        goto LABEL_66;
      }
      goto LABEL_64;
    }
LABEL_88:
    std::__throw_length_error("basic_string::_M_create");
  }
LABEL_9:
  if ( v18 )
  {
LABEL_69:
    v72 = *(_BYTE **)(a1 + 968);
    if ( v18 == 1 )
      *(_BYTE *)v17 = *v72;
    else
      memcpy(v17, v72, v18);
    v17 = (unsigned __int64 *)v11[60].m128i_i64[1];
  }
  v11[61].m128i_i64[0] = v18;
  *((_BYTE *)v17 + v18) = 0;
LABEL_11:
  v20 = *(_DWORD *)(a1 + 1016);
  v11[62].m128i_i64[1] = *(_QWORD *)(a1 + 1000);
  v21 = *(_QWORD *)(a1 + 1008);
  v11[63].m128i_i32[2] = v20;
  v22 = *(_DWORD *)(a1 + 1020);
  v11[63].m128i_i64[0] = v21;
  v11[63].m128i_i32[3] = v22;
  v11[64].m128i_i8[0] = *(_BYTE *)(a1 + 1024);
  *(__int64 *)((char *)v11[64].m128i_i64 + 4) = *(_QWORD *)(a1 + 1028);
  v11[64].m128i_i8[12] = *(_BYTE *)(a1 + 1036);
  v11[64].m128i_i8[13] = *(_BYTE *)(a1 + 1037);
  v11[65].m128i_i32[0] = *(_DWORD *)(a1 + 1040);
  v11[65].m128i_i8[4] = *(_BYTE *)(a1 + 1044);
  v11[65].m128i_i8[5] = *(_BYTE *)(a1 + 1045);
  v11[65].m128i_i8[6] = *(_BYTE *)(a1 + 1046);
  v11[65].m128i_i8[7] = *(_BYTE *)(a1 + 1047);
  v11[65].m128i_i32[2] = *(_DWORD *)(a1 + 1048);
  v11[65].m128i_i32[3] = *(_DWORD *)(a1 + 1052);
  v11[66].m128i_i32[0] = *(_DWORD *)(a1 + 1056);
  v11[66].m128i_i8[4] = *(_BYTE *)(a1 + 1060);
  v11[66].m128i_i32[2] = *(_DWORD *)(a1 + 1064);
  v23 = _mm_loadu_si128((const __m128i *)(a1 + 1080));
  v11[67].m128i_i64[0] = *(_QWORD *)(a1 + 1072);
  *(__m128i *)((char *)v11 + 1080) = v23;
  *(__m128i *)((char *)v11 + 1096) = _mm_loadu_si128((const __m128i *)(a1 + 1096));
  *(__m128i *)((char *)v11 + 1112) = _mm_loadu_si128((const __m128i *)(a1 + 1112));
  *(__m128i *)((char *)v11 + 1128) = _mm_loadu_si128((const __m128i *)(a1 + 1128));
  *(__m128i *)((char *)v11 + 1144) = _mm_loadu_si128((const __m128i *)(a1 + 1144));
  *(__m128i *)((char *)v11 + 1160) = _mm_loadu_si128((const __m128i *)(a1 + 1160));
  *(__m128i *)((char *)v11 + 1176) = _mm_loadu_si128((const __m128i *)(a1 + 1176));
  *(__m128i *)((char *)v11 + 1192) = _mm_loadu_si128((const __m128i *)(a1 + 1192));
  *(__m128i *)((char *)v11 + 1208) = _mm_loadu_si128((const __m128i *)(a1 + 1208));
  v24 = *(_DWORD *)(a1 + 1223);
  *(__m128i *)((char *)v11 + 1228) = _mm_loadu_si128((const __m128i *)(a1 + 1228));
  v25 = _mm_loadu_si128((const __m128i *)(a1 + 1237));
  *(__int32 *)((char *)&v11[76].m128i_i32[1] + 3) = v24;
  *(__m128i *)((char *)v11 + 1237) = v25;
  *(__m128i *)((char *)v11 + 1256) = _mm_loadu_si128((const __m128i *)(a1 + 1256));
  v25.m128i_i64[0] = *(_QWORD *)(a1 + 1320);
  v11[79].m128i_i32[2] = *(_DWORD *)(a1 + 1272);
  *(__int64 *)((char *)&v11[79].m128i_i64[1] + 4) = *(_QWORD *)(a1 + 1276);
  v11[80].m128i_i32[1] = *(_DWORD *)(a1 + 1284);
  v11[80].m128i_i32[2] = *(_DWORD *)(a1 + 1288);
  v11[80].m128i_i8[12] = *(_BYTE *)(a1 + 1292);
  v11[81].m128i_i32[0] = *(_DWORD *)(a1 + 1296);
  v11[81].m128i_i8[4] = *(_BYTE *)(a1 + 1300);
  v11[81].m128i_i8[5] = *(_BYTE *)(a1 + 1301);
  v11[81].m128i_i8[6] = *(_BYTE *)(a1 + 1302);
  v11[81].m128i_i8[7] = *(_BYTE *)(a1 + 1303);
  v11[81].m128i_i8[8] = *(_BYTE *)(a1 + 1304);
  v11[81].m128i_i8[9] = *(_BYTE *)(a1 + 1305);
  v11[81].m128i_i32[3] = *(_DWORD *)(a1 + 1308);
  v11[82].m128i_i8[0] = *(_BYTE *)(a1 + 1312);
  v26 = *(_DWORD *)(a1 + 1316);
  v11[82].m128i_i64[1] = v25.m128i_i64[0];
  v11[82].m128i_i32[1] = v26;
  v27 = *(_DWORD *)(a1 + 1336);
  v11[83].m128i_i64[0] = *(_QWORD *)(a1 + 1328);
  v11[83].m128i_i32[2] = v27;
  v11[83].m128i_i32[3] = *(_DWORD *)(a1 + 1340);
  v11[84].m128i_i32[0] = *(_DWORD *)(a1 + 1344);
  v11[84].m128i_i32[1] = *(_DWORD *)(a1 + 1348);
  v11[84].m128i_i32[2] = *(_DWORD *)(a1 + 1352);
  v11[84].m128i_i8[12] = *(_BYTE *)(a1 + 1356);
  v11[85].m128i_i32[0] = *(_DWORD *)(a1 + 1360);
  v11[85].m128i_i32[1] = *(_DWORD *)(a1 + 1364);
  v11[85].m128i_i32[2] = *(_DWORD *)(a1 + 1368);
  v11[85].m128i_i32[3] = *(_DWORD *)(a1 + 1372);
  v11[86].m128i_i32[0] = *(_DWORD *)(a1 + 1376);
  v11[86].m128i_i32[1] = *(_DWORD *)(a1 + 1380);
  v11[86].m128i_i8[8] = *(_BYTE *)(a1 + 1384);
  v11[86].m128i_i32[3] = *(_DWORD *)(a1 + 1388);
  v11[87].m128i_i8[0] = *(_BYTE *)(a1 + 1392);
  v11[87].m128i_i8[1] = *(_BYTE *)(a1 + 1393);
  v11[87].m128i_i8[2] = *(_BYTE *)(a1 + 1394);
  v11[87].m128i_i8[3] = *(_BYTE *)(a1 + 1395);
  v11[87].m128i_i8[4] = *(_BYTE *)(a1 + 1396);
  v11[87].m128i_i64[1] = *(_QWORD *)(a1 + 1400);
  v11[88].m128i_i8[0] = *(_BYTE *)(a1 + 1408);
  v11[88].m128i_i8[1] = *(_BYTE *)(a1 + 1409);
  *(__int64 *)((char *)v11[88].m128i_i64 + 4) = *(_QWORD *)(a1 + 1412);
  v11[88].m128i_i8[12] = *(_BYTE *)(a1 + 1420);
  v11[88].m128i_i8[13] = *(_BYTE *)(a1 + 1421);
  v11[88].m128i_i8[14] = *(_BYTE *)(a1 + 1422);
  v11[88].m128i_i8[15] = *(_BYTE *)(a1 + 1423);
  v11[89].m128i_i32[0] = *(_DWORD *)(a1 + 1424);
  v11[89].m128i_i8[4] = *(_BYTE *)(a1 + 1428);
  v11[89].m128i_i64[1] = *(_QWORD *)(a1 + 1432);
  v11[90].m128i_i64[0] = *(_QWORD *)(a1 + 1440);
  v25.m128i_i64[0] = *(_QWORD *)(a1 + 1456);
  v11[90].m128i_i8[8] = *(_BYTE *)(a1 + 1448);
  v28 = *(_DWORD *)(a1 + 1472);
  v11[91].m128i_i64[0] = v25.m128i_i64[0];
  v25.m128i_i64[0] = *(_QWORD *)(a1 + 1464);
  v11[92].m128i_i32[0] = v28;
  LOBYTE(v28) = *(_BYTE *)(a1 + 1476);
  v11[91].m128i_i64[1] = v25.m128i_i64[0];
  v25.m128i_i64[0] = *(_QWORD *)(a1 + 1488);
  v11[92].m128i_i8[4] = v28;
  v11[92].m128i_i32[2] = *(_DWORD *)(a1 + 1480);
  v29 = *(_DWORD *)(a1 + 1484);
  v11[93].m128i_i64[0] = v25.m128i_i64[0];
  v25.m128i_i64[0] = *(_QWORD *)(a1 + 1520);
  v11[92].m128i_i32[3] = v29;
  v11[93].m128i_i32[2] = *(_DWORD *)(a1 + 1496);
  v11[93].m128i_i32[3] = *(_DWORD *)(a1 + 1500);
  v11[94].m128i_i32[0] = *(_DWORD *)(a1 + 1504);
  v11[94].m128i_i32[1] = *(_DWORD *)(a1 + 1508);
  v30 = *(_DWORD *)(a1 + 1512);
  v11[95].m128i_i64[0] = v25.m128i_i64[0];
  v11[94].m128i_i32[2] = v30;
  v11[95].m128i_i8[8] = *(_BYTE *)(a1 + 1528);
  v11[95].m128i_i8[9] = *(_BYTE *)(a1 + 1529);
  v11[95].m128i_i8[10] = *(_BYTE *)(a1 + 1530);
  v11[95].m128i_i8[11] = *(_BYTE *)(a1 + 1531);
  v11[96].m128i_i64[0] = *(_QWORD *)(a1 + 1536);
  v11[96].m128i_i8[8] = *(_BYTE *)(a1 + 1544);
  v11[96].m128i_i8[9] = *(_BYTE *)(a1 + 1545);
  v11[96].m128i_i8[10] = *(_BYTE *)(a1 + 1546);
  v11[96].m128i_i8[11] = *(_BYTE *)(a1 + 1547);
  v11[96].m128i_i8[12] = *(_BYTE *)(a1 + 1548);
  v11[96].m128i_i8[13] = *(_BYTE *)(a1 + 1549);
  v11[97].m128i_i32[0] = *(_DWORD *)(a1 + 1552);
  v11[97].m128i_i8[4] = *(_BYTE *)(a1 + 1556);
  v11[97].m128i_i8[5] = *(_BYTE *)(a1 + 1557);
  v11[97].m128i_i8[6] = *(_BYTE *)(a1 + 1558);
  v11[97].m128i_i8[7] = *(_BYTE *)(a1 + 1559);
  v11[97].m128i_i8[8] = *(_BYTE *)(a1 + 1560);
  v11[97].m128i_i8[9] = *(_BYTE *)(a1 + 1561);
  LOBYTE(v30) = *(_BYTE *)(a1 + 1562);
  v25.m128i_i64[0] = *(_QWORD *)(a1 + 1568);
  v80 = -2;
  v11[97].m128i_i8[10] = v30;
  v11[97].m128i_i8[11] = *(_BYTE *)(a1 + 1563);
  LOBYTE(v30) = *(_BYTE *)(a1 + 1564);
  v11[98].m128i_i64[0] = v25.m128i_i64[0];
  v11[97].m128i_i8[12] = v30;
  v11[98].m128i_i8[8] = *(_BYTE *)(a1 + 1576);
  v11[99].m128i_i64[0] = *(_QWORD *)(a1 + 1584);
  if ( *(_DWORD *)(v74 + 3612) )
  {
    v31 = **(_DWORD **)(v74 + 3856);
  }
  else
  {
    v57 = *(_QWORD *)(v74 + 3784);
    if ( !v57 )
      goto LABEL_15;
    v31 = *(_DWORD *)(v57 - 4);
  }
  if ( v31 )
    v80 = **(_DWORD **)(v74 + 3784);
LABEL_15:
  v32 = v81;
  v33 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C54938), (__m128i)(unsigned __int64)sub_7C9CC0);
  v82 = _mm_load_si128(&v73);
  v83 = v33;
  v34 = *(__int64 (__fastcall **)(__int64, __int64))(v81->m128i_i64[0] + 16);
  if ( v34 != sub_79F0A0 )
  {
    v34((__int64)v81, v74);
LABEL_77:
    v32 = v81;
    goto LABEL_17;
  }
  v35 = *(_BYTE *)(v74 + 352) == 0;
  v81[1].m128i_i64[1] = v74;
  if ( !v35 )
  {
    sub_7A4170(v32);
    goto LABEL_77;
  }
LABEL_17:
  v36 = a1 + 1592;
  v37 = &v32[99].m128i_u64[1];
  v78 = &v82;
  sub_13D9890(v37, a1 + 1592);
  v38 = v81;
  v39 = v81[110].m128i_i64[1];
  if ( v39 )
  {
    v75 = v39 + 8LL * *(unsigned int *)(v39 - 4);
    if ( v75 != v39 )
    {
      while ( 1 )
      {
        v40 = *(_QWORD **)v39;
        v41 = *(unsigned int *)(*(_QWORD *)v39 + 28LL);
        if ( (_DWORD)v41 != 0x7FFFFFFF )
          break;
LABEL_32:
        v39 += 8;
        if ( v75 == v39 )
          goto LABEL_33;
      }
      v42 = v38[145].m128i_i64[1];
      v76 = *v40;
      if ( v42 )
      {
        v43 = *(_DWORD *)(v42 - 4);
        v77 = v43;
        if ( (unsigned int)v41 < v43 )
        {
LABEL_30:
          *(_QWORD *)(v42 + 8 * v41) = v76;
          if ( (unsigned int)sub_180B130(v37) > 0x13 )
          {
            if ( (unsigned __int8)sub_186A530(*(double *)v33.m128i_i64) )
            {
              sub_186A4C0(*(double *)v33.m128i_i64);
              sub_180B150(v37, v36);
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v58 = v81;
              v59 = std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_1648CA0(v59, v58[99].m128i_i64[1], *v40, 3);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_1648CA0(v59, *(_QWORD *)(a1 + 144), *v40, 3);
              v36 = (size_t)"\n";
              v37 = (unsigned __int64 *)v59;
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_186A500(v59, "\n");
            }
            else
            {
              sub_180B150(v37, v36);
              std::__ostream_insert<char,std::char_traits<char>>();
              std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              v61 = v81;
              v62 = std::ostream::_M_insert<unsigned long>();
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_1648CA0(v62, v61[99].m128i_i64[1], *v40, 3);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_1648CA0(v62, *(_QWORD *)(a1 + 144), *v40, 3);
              v36 = (size_t)"\n";
              v37 = (unsigned __int64 *)v62;
              std::__ostream_insert<char,std::char_traits<char>>();
            }
          }
          v38 = v81;
          goto LABEL_32;
        }
        v44 = v41 + 1;
        if ( v43 >= (int)v41 + 1 )
        {
          *(_DWORD *)(v42 - 4) = v44;
          goto LABEL_30;
        }
      }
      else
      {
        v44 = v41 + 1;
        if ( (_DWORD)v41 == -1 )
          goto LABEL_30;
        v60 = (_QWORD *)sub_186B270(0x18u);
        v77 = 0;
        *v60 = 2;
        v42 = (__int64)(v60 + 1);
        v38[145].m128i_i64[1] = (__int64)(v60 + 1);
      }
      while ( 1 )
      {
        v48 = *(_DWORD *)(v42 - 8);
        if ( v48 >= v44 )
          break;
        v45 = (3 * v48 + 1) >> 1;
        v36 = 8 * v45 + 8;
        if ( 8 * v48 + 8 >= (unsigned int)v36 || v48 >= v45 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_116834(v79, "Overflow encountered when expanding vector", v3);
          v4 = v79;
          v5 = v79;
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v5);
          sub_233E40((__int64)v4);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v73.m128i_i32[0] = (3 * v48 + 1) >> 1;
        v46 = (__int32 *)sub_186B300((void *)(v42 - 8), v36);
        v47 = v73.m128i_i32[0];
        v42 = (__int64)(v46 + 2);
        v38[145].m128i_i64[1] = (__int64)(v46 + 2);
        *v46 = v47;
      }
      v49 = v77;
      *(_DWORD *)(v42 - 4) = v44;
      v50 = 8LL * v44;
      v51 = 8 * v49;
      v37 = (unsigned __int64 *)(v42 + v51);
      if ( v51 != v50 )
      {
        v36 = 0;
        v73.m128i_i64[0] = v42;
        memset(v37, 0, v50 - v51);
        v42 = v73.m128i_i64[0];
      }
      goto LABEL_30;
    }
  }
LABEL_33:
  v52 = *(_QWORD **)(a1 + 2400);
  if ( v52 )
  {
    v53 = &v52[*((unsigned int *)v52 - 1)];
    if ( v53 != v52 )
    {
      while ( 1 )
      {
        if ( !*v52 )
          goto LABEL_37;
        v54 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __m128i *))(*(_QWORD *)*v52 + 392LL))(*v52, v38);
        sub_7CDF60(v81, (__int64)v54);
        v55 = *(void (__fastcall **)(__int64, __int64))(*v54 + 16LL);
        if ( v55 == sub_7ABB60 )
        {
          v38 = v81;
          v54[3] = v74;
LABEL_37:
          if ( v53 == ++v52 )
            break;
        }
        else
        {
          v55((__int64)v54, v74);
          ++v52;
          v38 = v81;
          if ( v53 == v52 )
            break;
        }
      }
    }
  }
  if ( v83.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v83.m128i_i64[0])(v78, v78, 3);
  return v38;
}

