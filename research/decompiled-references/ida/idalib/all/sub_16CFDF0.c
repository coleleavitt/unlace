__int64 __fastcall sub_16CFDF0(__int64 *a1, __int64 a2, double a3, double a4)
{
  unsigned __int64 v4; // r15
  unsigned __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int *v10; // rsi
  unsigned __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 result; // rax
  __int64 v14; // rbp
  unsigned __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  unsigned int v25; // eax
  __int64 *v26; // rsi
  unsigned int v27; // ecx
  __int64 v28; // rax
  unsigned int v29; // eax
  __int64 v30; // rax
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // rax
  unsigned int v34; // eax
  unsigned __int64 v35; // rax
  __int64 v36; // rdi
  int v37; // r10d
  unsigned int v38; // r9d
  char v39; // r11
  __int64 *v40; // rsi
  unsigned int v41; // edx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rbp
  unsigned int v46; // eax
  int v47; // r10d
  __int64 v48; // r13
  int v49; // eax
  int v50; // eax
  unsigned __int64 v51; // r14
  __int64 v52; // r12
  __int64 v53; // rbp
  char v54; // al
  _QWORD *v55; // rdi
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rsi
  __int64 v59; // r13
  unsigned __int64 v60; // rax
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int v65; // eax
  unsigned int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // [rsp-10h] [rbp-1A8h]
  __int64 v69; // [rsp-8h] [rbp-1A0h]
  __int64 v70; // [rsp+0h] [rbp-198h]
  __int64 v71; // [rsp+0h] [rbp-198h]
  int v72; // [rsp+8h] [rbp-190h]
  int v73; // [rsp+8h] [rbp-190h]
  unsigned int v74; // [rsp+10h] [rbp-188h]
  unsigned __int64 v75; // [rsp+10h] [rbp-188h]
  int v76; // [rsp+18h] [rbp-180h]
  int v77; // [rsp+18h] [rbp-180h]
  unsigned __int64 v78; // [rsp+18h] [rbp-180h]
  int v79; // [rsp+20h] [rbp-178h]
  __int64 *v80; // [rsp+20h] [rbp-178h]
  int v81; // [rsp+28h] [rbp-170h]
  unsigned __int64 v82; // [rsp+30h] [rbp-168h]
  int v83; // [rsp+38h] [rbp-160h]
  char v84; // [rsp+38h] [rbp-160h]
  int v85; // [rsp+38h] [rbp-160h]
  __int64 v86; // [rsp+38h] [rbp-160h]
  int v87; // [rsp+44h] [rbp-154h]
  int v88; // [rsp+44h] [rbp-154h]
  int v89; // [rsp+48h] [rbp-150h]
  int v90; // [rsp+4Ch] [rbp-14Ch]
  int v91; // [rsp+50h] [rbp-148h]
  int v92; // [rsp+54h] [rbp-144h]
  int v93; // [rsp+58h] [rbp-140h]
  int v94; // [rsp+5Ch] [rbp-13Ch]
  int v95; // [rsp+60h] [rbp-138h]
  int v96; // [rsp+64h] [rbp-134h]
  int v97; // [rsp+68h] [rbp-130h]
  int v98; // [rsp+6Ch] [rbp-12Ch]
  int v99; // [rsp+74h] [rbp-124h] BYREF
  int v100; // [rsp+78h] [rbp-120h] BYREF
  int v101; // [rsp+7Ch] [rbp-11Ch] BYREF
  unsigned __int64 v102; // [rsp+80h] [rbp-118h] BYREF
  __int64 v103; // [rsp+88h] [rbp-110h] BYREF
  void *v104[2]; // [rsp+90h] [rbp-108h] BYREF
  __int64 v105; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v106; // [rsp+B0h] [rbp-E8h] BYREF
  int *v107; // [rsp+B8h] [rbp-E0h]
  unsigned __int64 v108; // [rsp+C0h] [rbp-D8h]
  int v109; // [rsp+C8h] [rbp-D0h] BYREF
  __int64 v110; // [rsp+D0h] [rbp-C8h]
  __int128 v111; // [rsp+108h] [rbp-90h]
  __int64 v112; // [rsp+118h] [rbp-80h]
  __int64 *v113; // [rsp+120h] [rbp-78h]
  __int64 v114; // [rsp+128h] [rbp-70h]
  int v115; // [rsp+130h] [rbp-68h]
  __int64 v116; // [rsp+138h] [rbp-60h] BYREF
  __int128 v117; // [rsp+140h] [rbp-58h]
  __int64 v118; // [rsp+150h] [rbp-48h]

  v4 = a2 & 0xFFFFFFFFFFFFFFFELL;
  v6 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 32);
  if ( !*(_DWORD *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 16) )
  {
    sub_168B9F0((__int64)&v106, a1 + 1, *(_DWORD *)(v4 + 20), 0x1469u, 0);
    v100 = 0;
    v7 = sub_1587D10((__int64)&v106, &v100);
    v101 = 1;
    v8 = sub_1587D10(v7, &v101);
    LODWORD(v102) = *(_DWORD *)(v4 + 16);
    v9 = sub_16CF160(v8, (unsigned int *)&v102);
    v10 = (int *)&v103;
    LODWORD(v103) = 0;
    v11 = v6;
    v12 = sub_1587D10(v9, (int *)&v103);
LABEL_3:
    v104[0] = (void *)sub_EEC8C0(v11, (__int64)v10, a3);
    sub_1587DB0(v12, (__int64 *)v104);
    sub_15F7200(&v106);
    return 1;
  }
  v14 = a2;
  v15 = sub_BFD550(*(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFFELL) + 32));
  v70 = *(_QWORD *)(v15 + 16);
  v16 = *(_QWORD *)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 32);
  result = sub_19179A0(a1, v16, 1);
  if ( result != 1 )
  {
    v20 = result & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v4 + 8 * (((*(_BYTE *)(v4 + 2) & 8) != 0) + 1LL) + 32) = result & 0xFFFFFFFFFFFFFFFELL;
    v21 = *(_QWORD *)(*(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v21 + 16) != 42 )
    {
      v21 = sub_16B68B0(v21, v16, v17, v18);
      if ( !v21 )
      {
        v29 = sub_16C50A0(v15);
        sub_168B9F0((__int64)&v106, a1 + 1, v29, 0xC32u, 0);
        v103 = *(_QWORD *)(v20 + 8);
        v30 = sub_162B6D0((__int64)&v106, &v103);
        v10 = (int *)&v102;
        LODWORD(v102) = 0;
LABEL_16:
        v28 = sub_1587D10(v30, v10);
LABEL_17:
        v12 = v28;
        v11 = v20;
        goto LABEL_3;
      }
    }
    v102 = *(_QWORD *)(v21 + 32);
    if ( sub_9EC890(*(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL), v16, v17, v18, v19) )
    {
      v22 = v102 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v22 = v102 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                     + 16LL)
          & 0xF7) != 0x22
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 11 )
      {
        v31 = sub_16C50A0(v15);
        sub_168B9F0((__int64)&v106, a1 + 1, v31, 0xC34u, 0);
        v103 = *(_QWORD *)(v20 + 8);
        v30 = sub_162B6D0((__int64)&v106, &v103);
        v101 = 0;
        v10 = &v101;
        goto LABEL_16;
      }
    }
    v23 = *(_QWORD *)(v22 + 8);
    if ( (v23 & 8) != 0 )
    {
      v24 = v102 & 7 | *(__int64 *)((char *)&qword_18 + (v23 & 0xFFFFFFFFFFFFFFF0LL)) | v23 & 7;
      if ( HIDWORD(v24) && (v24 & 0x200000000LL) != 0 )
      {
        v32 = sub_EEB7E0(v20, BYTE4(v24) & 2, a3);
        sub_168B9F0((__int64)&v106, a1 + 1, v32, 0xC3Eu, 0);
        LODWORD(v103) = 1;
        v33 = sub_1587D10((__int64)&v106, (int *)&v103);
        v10 = (int *)&v102;
        v28 = sub_1605D30(v33, (__int64 *)&v102);
        goto LABEL_17;
      }
    }
    else
    {
      v24 = ((unsigned __int8)v102 | (unsigned __int8)v23) & 7;
    }
    if ( (((unsigned __int8)v102 | (unsigned __int8)v23) & 1) != 0 )
    {
      v25 = sub_16C50A0(v15);
      v26 = a1 + 1;
      v27 = 3120;
LABEL_13:
      sub_168B9F0((__int64)&v106, v26, v25, v27, 0);
      v10 = (int *)&v103;
      v103 = *(_QWORD *)(v20 + 8);
      v28 = sub_162B6D0((__int64)&v106, &v103);
      goto LABEL_17;
    }
    if ( ((v24 >> 6) & 7) - 2 <= 2 )
    {
      v34 = sub_16C50A0(v15);
      sub_168B9F0((__int64)&v106, a1 + 1, v34, 0xBC6u, 0);
      v10 = (int *)&v102;
      v28 = sub_1605D30((__int64)&v106, (__int64 *)&v102);
      goto LABEL_17;
    }
    v35 = sub_6D5440(&v102);
    v36 = a1[31];
    v102 = v35;
    v82 = v35;
    switch ( sub_AAE980(v36, v35) )
    {
      case 1LL:
        v98 = 1392;
        v91 = 1384;
        v76 = 1378;
        v79 = 1372;
        v95 = 1366;
        v96 = 1359;
        v92 = 1353;
        v97 = 1345;
        v93 = 1339;
        v72 = 1333;
        v94 = 1325;
        v74 = 1319;
        v90 = 1313;
        v81 = 1307;
        v83 = 1301;
        v87 = 1295;
        v89 = 1290;
        break;
      case 2LL:
        v98 = 1393;
        v91 = 1385;
        v76 = 1379;
        v79 = 1373;
        v95 = 1367;
        v96 = 1360;
        v92 = 1354;
        v97 = 1346;
        v93 = 1340;
        v72 = 1334;
        v94 = 1326;
        v74 = 1320;
        v90 = 1314;
        v81 = 1308;
        v83 = 1302;
        v87 = 1296;
        v89 = 1291;
        break;
      case 4LL:
        v98 = 1394;
        v91 = 1386;
        v76 = 1380;
        v79 = 1374;
        v95 = 1368;
        v96 = 1361;
        v92 = 1355;
        v97 = 1347;
        v93 = 1341;
        v72 = 1335;
        v94 = 1327;
        v74 = 1321;
        v90 = 1315;
        v81 = 1309;
        v83 = 1303;
        v87 = 1297;
        v89 = 1292;
        break;
      case 8LL:
        v98 = 1395;
        v91 = 1387;
        v76 = 1381;
        v79 = 1375;
        v95 = 1369;
        v96 = 1362;
        v92 = 1356;
        v97 = 1348;
        v93 = 1342;
        v72 = 1336;
        v94 = 1328;
        v74 = 1322;
        v90 = 1316;
        v81 = 1310;
        v83 = 1304;
        v87 = 1298;
        v89 = 1293;
        break;
      case 16LL:
        v98 = 1396;
        v91 = 1388;
        v76 = 1382;
        v79 = 1376;
        v95 = 1370;
        v96 = 1363;
        v92 = 1357;
        v97 = 1349;
        v93 = 1343;
        v72 = 1337;
        v94 = 1329;
        v74 = 1323;
        v90 = 1317;
        v81 = 1311;
        v83 = 1305;
        v87 = 1299;
        v89 = 1294;
        break;
      default:
        v25 = sub_16C50A0(v15);
        v26 = a1 + 1;
        v27 = 3125;
        goto LABEL_13;
    }
    v37 = sub_B75A50(v70, 0);
    switch ( v37 )
    {
      case 1290:
      case 1291:
      case 1292:
      case 1293:
      case 1294:
      case 1364:
        v38 = 2;
        v39 = 0;
        v77 = 1;
        v74 = v89;
        break;
      case 1295:
      case 1296:
      case 1297:
      case 1298:
      case 1299:
      case 1390:
        v38 = 3;
        v39 = 0;
        v77 = 2;
        v74 = v87;
        break;
      case 1300:
      case 1301:
      case 1302:
      case 1303:
      case 1304:
      case 1305:
        v38 = 2;
        v39 = 0;
        v77 = 1;
        v74 = v83;
        break;
      case 1306:
      case 1307:
      case 1308:
      case 1309:
      case 1310:
      case 1311:
        v38 = 2;
        v39 = 0;
        v77 = 1;
        v74 = v81;
        break;
      case 1312:
      case 1313:
      case 1314:
      case 1315:
      case 1316:
      case 1317:
        v38 = 3;
        v39 = 0;
        v77 = 2;
        v82 = *(_QWORD *)(a1[31] + 18640);
        v74 = v90;
        break;
      case 1318:
      case 1319:
      case 1320:
      case 1321:
      case 1322:
      case 1323:
        v38 = 2;
        v39 = 0;
        v77 = 1;
        break;
      case 1324:
      case 1325:
      case 1326:
      case 1327:
      case 1328:
      case 1329:
        v38 = 2;
        v39 = 0;
        v77 = 1;
        v74 = v94;
        break;
      case 1330:
      case 1331:
      case 1350:
      case 1351:
      case 1389:
      case 1391:
      case 1392:
      case 1393:
      case 1394:
      case 1395:
      case 1396:
        v38 = 2;
        v39 = 0;
        v77 = 1;
        v74 = v98;
        break;
      case 1332:
      case 1333:
      case 1334:
      case 1335:
      case 1336:
      case 1337:
        v38 = 2;
        v39 = 1;
        v77 = 1;
        v74 = v72;
        break;
      case 1338:
      case 1339:
      case 1340:
      case 1341:
      case 1342:
      case 1343:
        v38 = 2;
        v39 = 0;
        v77 = 1;
        v74 = v93;
        break;
      case 1344:
      case 1345:
      case 1346:
      case 1347:
      case 1348:
      case 1349:
        v38 = 2;
        v39 = 0;
        v77 = 1;
        v74 = v97;
        break;
      case 1352:
      case 1353:
      case 1354:
      case 1355:
      case 1356:
      case 1357:
        v38 = 2;
        v39 = 0;
        v77 = 1;
        v74 = v92;
        break;
      case 1358:
      case 1359:
      case 1360:
      case 1361:
      case 1362:
      case 1363:
        v38 = 1;
        v39 = 0;
        v77 = 0;
        v82 = *(_QWORD *)(a1[31] + 18632);
        v74 = v96;
        break;
      case 1365:
      case 1366:
      case 1367:
      case 1368:
      case 1369:
      case 1370:
        v38 = 2;
        v39 = 1;
        v77 = 1;
        v74 = v95;
        break;
      case 1371:
      case 1372:
      case 1373:
      case 1374:
      case 1375:
      case 1376:
        v38 = 2;
        v39 = 0;
        v77 = 1;
        v74 = v79;
        break;
      case 1377:
      case 1378:
      case 1379:
      case 1380:
      case 1381:
      case 1382:
        v46 = v76;
        v38 = 2;
        v39 = 0;
        v77 = 1;
        v74 = v46;
        break;
      case 1383:
      case 1384:
      case 1385:
      case 1386:
      case 1387:
      case 1388:
        v77 = 1;
        v38 = 2;
        v39 = 0;
        v74 = v91;
        break;
    }
    v40 = a1 + 1;
    v41 = *(_DWORD *)(v4 + 20);
    v73 = v38;
    v80 = a1 + 1;
    if ( *(_DWORD *)(v4 + 16) < v38 )
    {
      sub_168B9F0((__int64)&v106, v40, v41, 0x1469u, 0);
      v99 = 0;
      v42 = sub_1587D10((__int64)&v106, &v99);
      v100 = v73;
      v43 = sub_16CF160(v42, (unsigned int *)&v100);
      v101 = *(_DWORD *)(v4 + 16);
      v44 = sub_16CF160(v43, (unsigned int *)&v101);
      LODWORD(v103) = 0;
      v45 = sub_1587D10(v44, (int *)&v103);
      v104[0] = (void *)sub_EEC8C0(v6, (__int64)&v103, a3);
      sub_1587DB0(v45, (__int64 *)v104);
      sub_15F7200(&v106);
      return 1;
    }
    v88 = v37;
    v84 = v39;
    sub_168B9F0((__int64)&v106, v40, v41, 0x1983u, 0);
    v104[0] = (void *)sub_EEC8C0(v6, (__int64)v40, a3);
    sub_1587DB0((__int64)&v106, (__int64 *)v104);
    sub_15F7200(&v106);
    v47 = v88;
    if ( v84 )
    {
      sub_168B9F0((__int64)&v106, v80, *(_DWORD *)(v4 + 20), 0x1CF5u, 0);
      v104[0] = (void *)sub_EEC8C0(v6, (__int64)v80, a3);
      sub_1587DB0((__int64)&v106, (__int64 *)v104);
      sub_15F7200(&v106);
      v47 = v88;
    }
    v85 = v47;
    sub_FBD280((__int64)v104, *(_QWORD *)(a1[31] + 17520), v74);
    if ( v85 != v74 )
    {
      v48 = sub_6F3470(*(_QWORD *)(a1[31] + 17504), v104[0], (size_t)v104[1]);
      v49 = sub_16C50A0(v15);
      v111 = 0;
      v114 = v48;
      v107 = &v109;
      v108 = 0x800000000LL;
      v115 = v49;
      v106 = 0;
      v112 = 0;
      v113 = a1;
      sub_B85890(&v116, v48);
      a3 = 0.0;
      v117 = 0;
      v118 = 0x101010000LL;
      sub_1A395A0(&v106);
      sub_1A49A10(a1, &v106, a1[24], 1, 0);
      v70 = sub_16C47B0(*(_QWORD *)v107 & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_BYTE *)(v70 + 28) & 0x7Fu) - 34 > 5 )
      {
        sub_169D230((__int64)&v106);
        result = 1;
LABEL_62:
        if ( v104[0] != &v105 )
        {
          v71 = result;
          operator delete(v104[0]);
          return v71;
        }
        return result;
      }
      sub_169D230((__int64)&v106);
    }
    if ( v77 )
    {
      v50 = v77;
      v75 = v15;
      v51 = v4;
      v78 = v20;
      v52 = 40;
      v86 = v14;
      v53 = 8LL * (unsigned int)(v50 - 1) + 48;
      while ( 1 )
      {
        v54 = *(_BYTE *)(v51 + 2);
        v55 = (_QWORD *)a1[31];
        v107 = nullptr;
        v109 = 0;
        LODWORD(v106) = 1;
        v56 = *(_QWORD *)(v51 + 8 * (((v54 & 8) != 0) + 1LL) + v52);
        v108 = sub_A73320(v55, v102);
        v110 = 0;
        result = sub_1A24E20(a1, &v106, 0, v56, 0, 0);
        if ( result == 1 )
          break;
        *(_QWORD *)(v51 + 8 * (((*(_BYTE *)(v51 + 2) & 8) != 0) + 1LL) + v52) = result & 0xFFFFFFFFFFFFFFFELL;
        v52 += 8;
        if ( v52 == v53 )
        {
          v4 = v51;
          v20 = v78;
          v15 = v75;
          v14 = v86;
          goto LABEL_65;
        }
      }
    }
    else
    {
LABEL_65:
      if ( (*(_QWORD *)v15 & 0x80000LL) != 0 )
      {
        v58 = *(_QWORD *)(v15 + 32);
        v57 = *(_QWORD *)(v15 + 40);
      }
      else
      {
        v57 = 0;
        v58 = 0;
      }
      v59 = sub_C09130(
              (_QWORD *)a1[31],
              v58,
              v57,
              0,
              v70,
              0,
              *(_DWORD *)(v15 + 4),
              *(_QWORD *)(a1[31] + 19112),
              (*(_BYTE *)(v15 + 1) >> 1) & 3,
              0,
              0,
              (*(_BYTE *)(v15 + 3) >> 1) & 3);
      v60 = sub_A70010(a1[31], *(_QWORD *)(v70 + 48));
      *(_QWORD *)(v4 + 32) = sub_160A600((__int64)a1, v59, v60, 0x3Du, 0, 0, a3, a4, 0) & 0xFFFFFFFFFFFFFFFELL;
      *(_QWORD *)(v4 + 8) = v82;
      v62 = v68;
      v63 = v69;
      v64 = *(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v64 + 16) == 10
         || (v67 = *(_QWORD *)(*(_QWORD *)(v64 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v67 + 16) == 10)
         && (v64 = sub_F63050(*(_QWORD *)(v102 & 0xFFFFFFFFFFFFFFF0LL), v59, v67, v69)) != 0)
        && ((v65 = (*(_DWORD *)(v64 + 32) >> 1) & 0xFFFFFF) == 0 || (v62 = v65 - 1LL, (v65 & (unsigned int)v62) != 0)) )
      {
        v66 = sub_C00A40(v20, v59, v62, v63, v61);
        sub_168B9F0((__int64)&v106, v80, v66, 0xC31u, 0);
        sub_15F7200(&v106);
        result = 1;
      }
      else
      {
        result = v14;
      }
    }
    goto LABEL_62;
  }
  return result;
}
