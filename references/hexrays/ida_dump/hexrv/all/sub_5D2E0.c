int sub_5D2E0()
{
  char *v1; // [rsp+0h] [rbp-40h] BYREF

  qword_4C0EC0 = 0;
  qword_4C0EE8 = 0;
  qword_4C0F10 = 0;
  xmmword_4C0EA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B58A8),
                               (__m128i)(unsigned __int64)"acos");
  xmmword_4C0EB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B58B0),
                               (__m128i)(unsigned __int64)&unk_407BD1);
  xmmword_4C0EC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B58B8),
                               (__m128i)(unsigned __int64)"acosl");
  xmmword_4C0ED8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B58C0),
                               (__m128i)(unsigned __int64)&unk_4079A1);
  xmmword_4C0EF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B58C8),
                               (__m128i)(unsigned __int64)"asin");
  xmmword_4C0F00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B58D0),
                               (__m128i)(unsigned __int64)&unk_407BB9);
  xmmword_4C0F18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B58D8),
                               (__m128i)(unsigned __int64)"asinl");
  xmmword_4C0F28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B58E0),
                               (__m128i)(unsigned __int64)&unk_407986);
  v1 = "atan2";
  qword_4C0F38 = 0;
  xmmword_4C0F40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B58E8),
                               (__m128i)(unsigned __int64)"atan");
  qword_4C0F60 = 0;
  qword_4C0F88 = 0;
  xmmword_4C0F50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B58F0),
                               (__m128i)(unsigned __int64)&unk_407B9E);
  qword_4C0FB0 = 0;
  qword_4C0FD8 = 0;
  xmmword_4C0F68 = (__int128)_mm_loadh_ps((const double *)&v1);
  qword_4C1000 = 0;
  xmmword_4C0F78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5900),
                               (__m128i)(unsigned __int64)&unk_407B81);
  xmmword_4C0F90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5908),
                               (__m128i)(unsigned __int64)"atan2l");
  xmmword_4C0FA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5910),
                               (__m128i)(unsigned __int64)&unk_407969);
  xmmword_4C0FB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5918),
                               (__m128i)(unsigned __int64)"atanl");
  xmmword_4C0FC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5920),
                               (__m128i)(unsigned __int64)&unk_407951);
  xmmword_4C0FE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5928),
                               (__m128i)(unsigned __int64)"ceil");
  xmmword_4C0FF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5930),
                               (__m128i)(unsigned __int64)&unk_407B69);
  xmmword_4C1008 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5938),
                               (__m128i)(unsigned __int64)"ceill");
  xmmword_4C1018 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5940),
                               (__m128i)(unsigned __int64)&unk_407939);
  qword_4C1028 = 0;
  qword_4C1050 = 0;
  qword_4C1078 = 0;
  xmmword_4C1030 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5948),
                               (__m128i)(unsigned __int64)"cos");
  qword_4C10A0 = 0;
  qword_4C10C8 = 0;
  xmmword_4C1040 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5950),
                               (__m128i)(unsigned __int64)&unk_407B51);
  qword_4C10F0 = 0;
  qword_4C1118 = 0;
  xmmword_4C1058 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5958),
                               (__m128i)(unsigned __int64)"cosh");
  xmmword_4C1068 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5960),
                               (__m128i)(unsigned __int64)&unk_407B39);
  xmmword_4C1080 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5968),
                               (__m128i)(unsigned __int64)"coshl");
  xmmword_4C1090 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5970),
                               (__m128i)(unsigned __int64)&unk_407921);
  xmmword_4C10A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5978),
                               (__m128i)(unsigned __int64)"cosl");
  xmmword_4C10B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5980),
                               (__m128i)(unsigned __int64)&unk_407909);
  xmmword_4C10D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5988),
                               (__m128i)(unsigned __int64)"exp");
  xmmword_4C10E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5990),
                               (__m128i)(unsigned __int64)&unk_407B21);
  xmmword_4C10F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5998),
                               (__m128i)(unsigned __int64)"expl");
  xmmword_4C1108 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B59A0),
                               (__m128i)(unsigned __int64)&unk_4078F1);
  xmmword_4C1120 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B59A8),
                               (__m128i)(unsigned __int64)"fabs");
  qword_4C1140 = 0;
  qword_4C1168 = 0;
  xmmword_4C1130 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B59B0),
                               (__m128i)(unsigned __int64)&unk_407B09);
  qword_4C1190 = 0;
  qword_4C11B8 = 0;
  xmmword_4C1148 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B59B8),
                               (__m128i)(unsigned __int64)"fabsl");
  qword_4C11E0 = 0;
  qword_4C1208 = 0;
  xmmword_4C1158 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B59C0),
                               (__m128i)(unsigned __int64)&unk_4078D9);
  xmmword_4C1170 = (__int128)_mm_loadh_ps((const double *)&off_4B59D0);
  xmmword_4C1180 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B59D8),
                               (__m128i)(unsigned __int64)&unk_407AEE);
  xmmword_4C1198 = (__int128)_mm_loadh_ps((const double *)&off_4B59E8);
  xmmword_4C11A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B59F0),
                               (__m128i)(unsigned __int64)&unk_4078BE);
  xmmword_4C11C0 = (__int128)_mm_loadh_ps((const double *)&off_4B5A00);
  xmmword_4C11D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5A08),
                               (__m128i)(unsigned __int64)&unk_407AD0);
  xmmword_4C11E8 = (__int128)_mm_loadh_ps((const double *)&off_4B5A18);
  xmmword_4C11F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5A20),
                               (__m128i)(unsigned __int64)&unk_4078A0);
  qword_4C1230 = 0;
  qword_4C1258 = 0;
  xmmword_4C1210 = (__int128)_mm_loadh_ps((const double *)&off_4B5A30);
  qword_4C1280 = 0;
  qword_4C12A8 = 0;
  xmmword_4C1220 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5A38),
                               (__m128i)(unsigned __int64)&unk_407A68);
  qword_4C12D0 = 0;
  xmmword_4C1238 = (__int128)_mm_loadh_ps((const double *)&off_4B5A48);
  xmmword_4C1248 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5A50),
                               (__m128i)(unsigned __int64)&unk_407A81);
  xmmword_4C1260 = (__int128)_mm_loadh_ps((const double *)&off_4B5A60);
  xmmword_4C1270 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5A68),
                               (__m128i)(unsigned __int64)&unk_407851);
  xmmword_4C1288 = (__int128)_mm_loadh_ps((const double *)&off_4B5A78);
  xmmword_4C1298 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5A80),
                               (__m128i)(unsigned __int64)&unk_407838);
  xmmword_4C12B0 = (__int128)_mm_loadh_ps((const double *)&off_4B5A90);
  xmmword_4C12C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5A98),
                               (__m128i)(unsigned __int64)&unk_407A31);
  xmmword_4C12D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AA0),
                               (__m128i)(unsigned __int64)"powl");
  qword_4C12F8 = 0;
  qword_4C1320 = 0;
  xmmword_4C12E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AA8),
                               (__m128i)(unsigned __int64)&unk_407801);
  qword_4C1348 = 0;
  qword_4C1370 = 0;
  xmmword_4C1300 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AB0),
                               (__m128i)(unsigned __int64)"sin");
  qword_4C1398 = 0;
  qword_4C13C0 = 0;
  xmmword_4C1310 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AB8),
                               (__m128i)(unsigned __int64)&unk_407A19);
  xmmword_4C1328 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AC0),
                               (__m128i)(unsigned __int64)"sinh");
  xmmword_4C1338 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AC8),
                               (__m128i)(unsigned __int64)&unk_407A01);
  xmmword_4C1350 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AD0),
                               (__m128i)(unsigned __int64)"sinhl");
  xmmword_4C1360 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AD8),
                               (__m128i)(unsigned __int64)&unk_4077E9);
  xmmword_4C1378 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AE0),
                               (__m128i)(unsigned __int64)"sinl");
  xmmword_4C1388 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AE8),
                               (__m128i)(unsigned __int64)&unk_4077D1);
  xmmword_4C13A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AF0),
                               (__m128i)(unsigned __int64)"sqrt");
  xmmword_4C13B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5AF8),
                               (__m128i)(unsigned __int64)&unk_4079E9);
  xmmword_4C13C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B00),
                               (__m128i)(unsigned __int64)"sqrtl");
  xmmword_4C13D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B08),
                               (__m128i)(unsigned __int64)&unk_4077B9);
  qword_4C13E8 = 0;
  qword_4C1490 = (__int64)"acos";
  qword_4C14B8 = (__int64)"acosl";
  xmmword_4C13F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B10),
                               (__m128i)(unsigned __int64)"tan");
  qword_4C14E0 = (__int64)"asin";
  qword_4C1410 = 0;
  xmmword_4C1400 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B18),
                               (__m128i)(unsigned __int64)&unk_4079D1);
  qword_4C1438 = 0;
  qword_4C1460 = 0;
  xmmword_4C1418 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B20),
                               (__m128i)(unsigned __int64)"tanh");
  qword_4C1488 = 0;
  qword_4C1498 = 0;
  xmmword_4C1428 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B28),
                               (__m128i)(unsigned __int64)&unk_4079B9);
  qword_4C14B0 = 0;
  qword_4C14C0 = 0;
  xmmword_4C1440 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B30),
                               (__m128i)(unsigned __int64)"tanhl");
  qword_4C14D8 = 0;
  qword_4C14E8 = 0;
  xmmword_4C1450 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B38),
                               (__m128i)(unsigned __int64)&unk_4077A1);
  xmmword_4C1468 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B40),
                               (__m128i)(unsigned __int64)"tanl");
  xmmword_4C1478 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B48),
                               (__m128i)(unsigned __int64)&unk_40778B);
  xmmword_4C14A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B50),
                               (__m128i)(unsigned __int64)&unk_407BE0);
  xmmword_4C14C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B58),
                               (__m128i)(unsigned __int64)&unk_4079B0);
  qword_4C1508 = (__int64)"asinl";
  qword_4C1580 = (__int64)"atan2l";
  xmmword_4C14F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B60),
                               (__m128i)(unsigned __int64)&unk_407BC8);
  qword_4C1530 = (__int64)"atan";
  qword_4C1558 = (__int64)"atan2";
  xmmword_4C1518 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B68),
                               (__m128i)(unsigned __int64)&unk_407998);
  qword_4C15A8 = (__int64)"atanl";
  qword_4C15D0 = (__int64)"ceil";
  xmmword_4C1540 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B70),
                               (__m128i)(unsigned __int64)&unk_407BB0);
  qword_4C1500 = 0;
  qword_4C1510 = 0;
  xmmword_4C1568 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B78),
                               (__m128i)(unsigned __int64)&unk_407B92);
  qword_4C1528 = 0;
  qword_4C1538 = 0;
  xmmword_4C1590 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B80),
                               (__m128i)(unsigned __int64)&unk_40797A);
  qword_4C1550 = 0;
  qword_4C1560 = 0;
  xmmword_4C15B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B88),
                               (__m128i)(unsigned __int64)&unk_407960);
  qword_4C1578 = 0;
  qword_4C1588 = 0;
  xmmword_4C15E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B90),
                               (__m128i)(unsigned __int64)&unk_407B78);
  qword_4C15A0 = 0;
  qword_4C15B0 = 0;
  qword_4C15C8 = 0;
  qword_4C15D8 = 0;
  qword_4C15F0 = 0;
  qword_4C15F8 = (__int64)"ceill";
  qword_4C1620 = (__int64)"cos";
  qword_4C1648 = (__int64)"cosh";
  xmmword_4C1608 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5B98),
                               (__m128i)(unsigned __int64)&unk_407948);
  qword_4C1670 = (__int64)"coshl";
  qword_4C1698 = (__int64)"cosl";
  xmmword_4C1630 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BA0),
                               (__m128i)(unsigned __int64)&unk_407B60);
  qword_4C16C0 = (__int64)"exp";
  qword_4C16E8 = (__int64)"expl";
  xmmword_4C1658 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BA8),
                               (__m128i)(unsigned __int64)&unk_407B48);
  qword_4C1600 = 0;
  qword_4C1618 = 0;
  xmmword_4C1680 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BB0),
                               (__m128i)(unsigned __int64)&unk_407930);
  qword_4C1628 = 0;
  qword_4C1640 = 0;
  xmmword_4C16A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BB8),
                               (__m128i)(unsigned __int64)&unk_407918);
  qword_4C1650 = 0;
  qword_4C1668 = 0;
  qword_4C1678 = 0;
  qword_4C1690 = 0;
  qword_4C16A0 = 0;
  qword_4C16B8 = 0;
  qword_4C16C8 = 0;
  qword_4C16E0 = 0;
  qword_4C16F0 = 0;
  xmmword_4C16D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BC0),
                               (__m128i)(unsigned __int64)&unk_407B30);
  qword_4C1760 = (__int64)"floor";
  qword_4C1710 = (__int64)"fabs";
  xmmword_4C16F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BC8),
                               (__m128i)(unsigned __int64)&unk_407900);
  qword_4C1788 = (__int64)"floorl";
  qword_4C1738 = (__int64)"fabsl";
  xmmword_4C1720 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BD0),
                               (__m128i)(unsigned __int64)&unk_407B18);
  qword_4C17B0 = (__int64)"fmod";
  qword_4C1708 = 0;
  xmmword_4C1748 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BD8),
                               (__m128i)(unsigned __int64)&unk_4078E8);
  qword_4C17D8 = (__int64)"fmodl";
  qword_4C1718 = 0;
  xmmword_4C1770 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BE0),
                               (__m128i)(unsigned __int64)&unk_407B00);
  qword_4C1730 = 0;
  qword_4C1740 = 0;
  xmmword_4C1798 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BE8),
                               (__m128i)(unsigned __int64)&unk_4078D0);
  qword_4C1758 = 0;
  qword_4C1768 = 0;
  xmmword_4C17C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BF0),
                               (__m128i)(unsigned __int64)&unk_407AE2);
  qword_4C1780 = 0;
  qword_4C1790 = 0;
  xmmword_4C17E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5BF8),
                               (__m128i)(unsigned __int64)&unk_4078B2);
  qword_4C17A8 = 0;
  qword_4C17B8 = 0;
  qword_4C17D0 = 0;
  qword_4C17E0 = 0;
  qword_4C17F8 = 0;
  qword_4C1800 = (__int64)"frexp";
  qword_4C1808 = 0;
  qword_4C1828 = (__int64)"frexpl";
  xmmword_4C1810 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C00),
                               (__m128i)(unsigned __int64)&unk_407AB8);
  qword_4C1850 = (__int64)"ldexp";
  qword_4C1820 = 0;
  xmmword_4C1838 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C08),
                               (__m128i)(unsigned __int64)&unk_407888);
  qword_4C1878 = (__int64)"ldexpl";
  qword_4C1830 = 0;
  xmmword_4C1860 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C10),
                               (__m128i)(unsigned __int64)&unk_407AA0);
  qword_4C18A0 = (__int64)"log";
  qword_4C1848 = 0;
  xmmword_4C1888 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C18),
                               (__m128i)(unsigned __int64)&unk_407870);
  qword_4C18C8 = (__int64)"log10";
  qword_4C1858 = 0;
  xmmword_4C18B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C20),
                               (__m128i)(unsigned __int64)&unk_407A78);
  qword_4C18F0 = (__int64)"log10l";
  qword_4C1870 = 0;
  qword_4C1880 = 0;
  qword_4C1898 = 0;
  qword_4C18A8 = 0;
  qword_4C18C0 = 0;
  qword_4C18D0 = 0;
  qword_4C18E8 = 0;
  qword_4C18F8 = 0;
  xmmword_4C18D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C28),
                               (__m128i)(unsigned __int64)&unk_407A90);
  qword_4C1918 = (__int64)"logl";
  qword_4C19E0 = (__int64)"sin";
  xmmword_4C1900 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C30),
                               (__m128i)(unsigned __int64)&unk_407860);
  qword_4C1940 = (__int64)"modf";
  qword_4C19B8 = (__int64)"powl";
  xmmword_4C1928 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C38),
                               (__m128i)(unsigned __int64)&unk_407848);
  qword_4C1968 = (__int64)"modfl";
  qword_4C1910 = 0;
  xmmword_4C1950 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C40),
                               (__m128i)(unsigned __int64)&unk_407A50);
  qword_4C1990 = (__int64)"pow";
  qword_4C1920 = 0;
  xmmword_4C1978 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C48),
                               (__m128i)(unsigned __int64)&unk_407820);
  qword_4C1938 = 0;
  qword_4C1948 = 0;
  xmmword_4C19A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C50),
                               (__m128i)(unsigned __int64)&unk_407A42);
  qword_4C1960 = 0;
  qword_4C1970 = 0;
  xmmword_4C19C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C58),
                               (__m128i)(unsigned __int64)&unk_407812);
  qword_4C1988 = 0;
  qword_4C1998 = 0;
  xmmword_4C19F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C60),
                               (__m128i)(unsigned __int64)&unk_407A28);
  qword_4C19B0 = 0;
  qword_4C19C0 = 0;
  qword_4C19D8 = 0;
  qword_4C19E8 = 0;
  qword_4C1A00 = 0;
  qword_4C1A08 = (__int64)"sinh";
  qword_4C1A30 = (__int64)"sinhl";
  xmmword_4C1A18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C68),
                               (__m128i)(unsigned __int64)&unk_407A10);
  qword_4C1A58 = (__int64)"sinl";
  qword_4C1A80 = (__int64)"sqrt";
  xmmword_4C1A40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C70),
                               (__m128i)(unsigned __int64)&unk_4077F8);
  qword_4C1AA8 = (__int64)"sqrtl";
  qword_4C1AD0 = (__int64)"tan";
  xmmword_4C1A68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C78),
                               (__m128i)(unsigned __int64)&unk_4077E0);
  qword_4C1AF8 = (__int64)"tanh";
  qword_4C1A10 = 0;
  xmmword_4C1A90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C80),
                               (__m128i)(unsigned __int64)&unk_4079F8);
  qword_4C1A28 = 0;
  qword_4C1A38 = 0;
  xmmword_4C1AB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C88),
                               (__m128i)(unsigned __int64)&unk_4077C8);
  qword_4C1A50 = 0;
  qword_4C1A60 = 0;
  qword_4C1A78 = 0;
  qword_4C1A88 = 0;
  qword_4C1AA0 = 0;
  qword_4C1AB0 = 0;
  qword_4C1AC8 = 0;
  qword_4C1AD8 = 0;
  qword_4C1AF0 = 0;
  qword_4C1B00 = 0;
  xmmword_4C1AE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C90),
                               (__m128i)(unsigned __int64)&unk_4079E0);
  qword_4C1B18 = 0;
  qword_4C1B28 = 0;
  xmmword_4C1B08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5C98),
                               (__m128i)(unsigned __int64)&unk_4079C8);
  qword_4C1B40 = 0;
  qword_4C1B50 = 0;
  xmmword_4C1B30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CA0),
                               (__m128i)(unsigned __int64)&unk_4077B0);
  qword_4C1B68 = 0;
  qword_4C1B20 = (__int64)"tanhl";
  xmmword_4C1B58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CA8),
                               (__m128i)(unsigned __int64)&unk_407798);
  qword_4C1B48 = (__int64)"tanl";
  __cxa_atexit(sub_3134E0, nullptr, &off_4AE580);
  xmmword_4C0D00 = 0;
  *(_QWORD *)&xmmword_4C0D00 = "__m64";
  qword_4C0D20 = 0;
  qword_4C0D28 = (__int64)"__m128";
  xmmword_4C0D10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CB0),
                               (__m128i)(unsigned __int64)"\bm64_u64\bm64_f32\am64_i8\bm64_i16\bm64_i32\bm64_i64\am64_u8\b"
                                                          "m64_u16\bm64_u32");
  qword_4C0D50 = (__int64)"__m128d";
  qword_4C0D30 = 0;
  xmmword_4C0D38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CB8),
                               (__m128i)(unsigned __int64)"\tm128_f32\tm128_u64\bm128_i8\tm128_i16\tm128_i32\tm128_i64\bm"
                                                          "128_u8\tm128_u16\tm128_u32");
  qword_4C0D78 = (__int64)"__m128i";
  qword_4C0D48 = 0;
  xmmword_4C0D60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CC0),
                               (__m128i)(unsigned __int64)"\nm128d_f64");
  qword_4C0DA0 = (__int64)"__m256";
  qword_4C0D58 = 0;
  xmmword_4C0D88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CC8),
                               (__m128i)(unsigned __int64)"\tm128i_i8\n"
                                                          "m128i_i16\n"
                                                          "m128i_i32\n"
                                                          "m128i_i64\tm128i_u8\n"
                                                          "m128i_u16\n"
                                                          "m128i_u32\n"
                                                          "m128i_u64");
  qword_4C0DC8 = (__int64)"__m256d";
  qword_4C0D70 = 0;
  xmmword_4C0DB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CD0),
                               (__m128i)(unsigned __int64)"\tm256_f32");
  qword_4C0DF0 = (__int64)"__m256i";
  qword_4C0D80 = 0;
  qword_4C0D98 = 0;
  qword_4C0DA8 = 0;
  qword_4C0DC0 = 0;
  qword_4C0DD0 = 0;
  qword_4C0DE8 = 0;
  qword_4C0DF8 = 0;
  xmmword_4C0DD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CD8),
                               (__m128i)(unsigned __int64)"\nm256d_f64");
  qword_4C0E18 = (__int64)"__m512";
  qword_4C0E10 = 0;
  xmmword_4C0E00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CE0),
                               (__m128i)(unsigned __int64)"\tm256i_i8\n"
                                                          "m256i_i16\n"
                                                          "m256i_i32\n"
                                                          "m256i_i64\tm256i_u8\n"
                                                          "m256i_u16\n"
                                                          "m256i_u32\n"
                                                          "m256i_u64");
  qword_4C0E40 = (__int64)"__m512d";
  qword_4C0E20 = 0;
  xmmword_4C0E28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CE8),
                               (__m128i)(unsigned __int64)"\tm512_f32");
  qword_4C0E68 = (__int64)"__m512i";
  qword_4C0E38 = 0;
  xmmword_4C0E50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4B5CF0),
                               (__m128i)(unsigned __int64)"\nm512d_f64");
  qword_4C0E48 = 0;
  qword_4C0E60 = 0;
  qword_4C0E70 = 0;
  qword_4C0E88 = 0;
  xmmword_4C0E78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64(&off_4B5CF8),
                               (__m128i)(unsigned __int64)"\tm512i_i8\n"
                                                          "m512i_i16\n"
                                                          "m512i_i32\n"
                                                          "m512i_i64\tm512i_u8\n"
                                                          "m512i_u16\n"
                                                          "m512i_u32\n"
                                                          "m512i_u64");
  return __cxa_atexit(sub_3134A0, nullptr, &off_4AE580);
}
