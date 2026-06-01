/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005FEC0
// Address: 0x000000010005FEC0

//----- (000000010005FEC0) ----------------------------------------------------
__int64 __fastcall sub_10005FEC0(__int64 a1)
{
  __int64 v2; // x0
  unsigned __int64 v3; // x21
  unsigned __int64 v4; // x20
  char *v5; // x8
  unsigned __int64 v6; // x9
  char v8; // [xsp+7h] [xbp-29h] BYREF

  v2 = sub_100058DB8(a1);
  *(_QWORD *)v2 = off_10009F5D8;
  *(_DWORD *)(v2 + 744) = 12;
  *(_OWORD *)(v2 + 752) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 768) = 12;
  *(_QWORD *)(v2 + 776) = -1;
  *(_QWORD *)(v2 + 784) = 0;
  *(_DWORD *)(v2 + 792) = 12;
  *(_OWORD *)(v2 + 800) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 816) = 12;
  *(_QWORD *)(v2 + 824) = -1;
  *(_QWORD *)(v2 + 832) = 0;
  *(_DWORD *)(v2 + 840) = 12;
  *(_OWORD *)(v2 + 848) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 864) = 12;
  *(_QWORD *)(v2 + 872) = -1;
  *(_QWORD *)(v2 + 880) = 0;
  *(_DWORD *)(v2 + 888) = 12;
  *(_OWORD *)(v2 + 896) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 912) = 12;
  *(_QWORD *)(v2 + 920) = -1;
  *(_QWORD *)(v2 + 928) = 0;
  *(_DWORD *)(v2 + 936) = 12;
  *(_OWORD *)(v2 + 944) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 960) = 12;
  *(_QWORD *)(v2 + 968) = -1;
  *(_QWORD *)(v2 + 976) = 0;
  *(_DWORD *)(v2 + 984) = 12;
  *(_OWORD *)(v2 + 992) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1008) = 12;
  *(_QWORD *)(v2 + 1016) = -1;
  *(_QWORD *)(v2 + 1024) = 0;
  *(_DWORD *)(v2 + 1032) = 12;
  *(_OWORD *)(v2 + 1040) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1056) = 12;
  *(_QWORD *)(v2 + 1064) = -1;
  *(_QWORD *)(v2 + 1072) = 0;
  *(_DWORD *)(v2 + 1080) = 12;
  *(_OWORD *)(v2 + 1088) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1104) = 12;
  *(_QWORD *)(v2 + 1112) = -1;
  *(_QWORD *)(v2 + 1120) = 0;
  *(_DWORD *)(v2 + 1128) = 12;
  *(_OWORD *)(v2 + 1136) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1152) = 12;
  *(_QWORD *)(v2 + 1160) = -1;
  *(_QWORD *)(v2 + 1168) = 0;
  *(_DWORD *)(v2 + 1176) = 12;
  *(_OWORD *)(v2 + 1184) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1200) = 12;
  *(_QWORD *)(v2 + 1208) = -1;
  *(_QWORD *)(v2 + 1216) = 0;
  *(_DWORD *)(v2 + 1224) = 12;
  *(_OWORD *)(v2 + 1232) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1248) = 12;
  *(_QWORD *)(v2 + 1256) = -1;
  *(_QWORD *)(v2 + 1264) = 0;
  *(_DWORD *)(v2 + 1272) = 12;
  *(_OWORD *)(v2 + 1280) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1296) = 12;
  *(_QWORD *)(v2 + 1304) = -1;
  *(_QWORD *)(v2 + 1312) = 0;
  *(_DWORD *)(v2 + 1320) = 12;
  *(_OWORD *)(v2 + 1328) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1344) = 12;
  *(_QWORD *)(v2 + 1352) = -1;
  *(_QWORD *)(v2 + 1360) = 0;
  *(_DWORD *)(v2 + 1368) = 12;
  *(_OWORD *)(v2 + 1376) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1392) = 12;
  *(_QWORD *)(v2 + 1400) = -1;
  *(_QWORD *)(v2 + 1408) = 0;
  *(_DWORD *)(v2 + 1416) = 12;
  *(_OWORD *)(v2 + 1424) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1440) = 12;
  *(_QWORD *)(v2 + 1448) = -1;
  *(_QWORD *)(v2 + 1456) = 0;
  *(_DWORD *)(v2 + 1464) = 12;
  *(_OWORD *)(v2 + 1472) = xmmword_10007AB80;
  *(_DWORD *)(v2 + 1488) = 12;
  *(_QWORD *)(v2 + 1496) = -1;
  v3 = *(_QWORD *)(v2 + 416);
  *(_QWORD *)(v2 + 1504) = 0;
  if ( v3 <= 0xFFFFFFFFFFFFFFFBLL )
    v4 = v3 + 4;
  else
    v4 = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(v2 + 1512) = -1;
  if ( v3 >= v4 )
  {
    v8 = 0;
    sub_10001B764((_QWORD **)(a1 + 408), v4, &v8);
  }
  else
  {
    v5 = *(char **)(a1 + 408);
    if ( *(_QWORD *)(a1 + 424) >= v4 )
    {
      v6 = v3;
    }
    else
    {
      v5 = (char *)qvector_reserve((_QWORD *)(a1 + 408), *(_QWORD **)(a1 + 408), v4, 1u);
      *(_QWORD *)(a1 + 408) = v5;
      v6 = *(_QWORD *)(a1 + 416);
    }
    bzero(&v5[v6], v4 - v6);
    *(_QWORD *)(a1 + 416) = v4;
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 408) + v3) = -403701264;
  sub_10005C618((_QWORD *)a1, "linux");
  sub_100060150(a1);
  return a1;
}
// 10007AB80: using guessed type __int128 xmmword_10007AB80;
// 10009F5D8: using guessed type __int64 (__fastcall *off_10009F5D8[4])();
