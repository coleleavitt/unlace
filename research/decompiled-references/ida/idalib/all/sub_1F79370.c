unsigned __int64 __fastcall sub_1F79370(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        char a7,
        char a8,
        char a9)
{
  _QWORD *v9; // rbp
  _QWORD *v10; // r12
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 *v15; // r13
  __int64 v16; // rax
  __m128i v17; // xmm0
  unsigned __int64 result; // rax
  char *v19; // rsi
  char *v20; // rsi
  __m128i v21; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v22[6]; // [rsp+18h] [rbp-30h] BYREF

  v9 = a5;
  v10 = &a5[2 * a6];
  *(_QWORD *)(a1 + 32) = a4;
  v21.m128i_i64[0] = a3;
  *(_QWORD *)(a1 + 40) = 0;
  v21.m128i_i64[1] = (__int64)off_2BE4970;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  v11 = _mm_loadh_ps((const double *)&v21.m128i_i64[1]);
  v21.m128i_i64[1] = a2;
  *(__m128 *)a1 = v11;
  *(_QWORD *)(a1 + 96) = 0;
  v12 = _mm_loadh_ps((const double *)v21.m128i_i64);
  *(_QWORD *)(a1 + 120) = a1 + 136;
  *(__m128 *)(a1 + 16) = v12;
  *(_OWORD *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 152) = a7;
  *(_BYTE *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 153) = a8;
  *(_WORD *)(a1 + 154) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 157) = a9;
  *(_QWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 200) = 0;
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 248) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 192) = 8;
  v13 = operator new(0x40u);
  v14 = *(_QWORD *)(a1 + 192);
  *(_QWORD *)(a1 + 184) = v13;
  v15 = (__int64 *)(v13 + 8 * ((unsigned __int64)(v14 - 1) >> 1));
  v16 = operator new(0x200u);
  *(_QWORD *)(a1 + 224) = v15;
  v21.m128i_i64[0] = v16;
  v17 = _mm_loadl_epi64(&v21);
  *v15 = v16;
  *(_QWORD *)(a1 + 216) = v16 + 512;
  *(_QWORD *)(a1 + 240) = v16;
  *(_QWORD *)(a1 + 248) = v16 + 512;
  *(_QWORD *)(a1 + 232) = v16;
  *(_QWORD *)(a1 + 264) = a1 + 280;
  *(_QWORD *)(a1 + 448) = a1 + 472;
  *(_QWORD *)(a1 + 272) = 0x1000000000LL;
  *(_QWORD *)(a1 + 256) = v15;
  *(__m128i *)(a1 + 200) = _mm_unpacklo_epi64(v17, v17);
  *(_QWORD *)(a1 + 408) = 20;
  *(_QWORD *)(a1 + 416) = 20;
  *(_QWORD *)(a1 + 424) = 0;
  *(_QWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 456) = 32;
  *(_DWORD *)(a1 + 464) = 0;
  *(_BYTE *)(a1 + 468) = 1;
  *(_QWORD *)(a1 + 728) = 0;
  *(_QWORD *)(a1 + 736) = 0;
  *(_DWORD *)(a1 + 744) = 0;
  *(_QWORD *)(a1 + 752) = 0;
  *(_QWORD *)(a1 + 760) = 0;
  *(_QWORD *)(a1 + 768) = 0;
  *(_QWORD *)(a1 + 776) = 0;
  *(_QWORD *)(a1 + 784) = 0;
  *(_QWORD *)(a1 + 792) = 0;
  *(_DWORD *)(a1 + 800) = 0;
  *(_QWORD *)(a1 + 808) = 513;
  *(_QWORD *)(a1 + 816) = 513;
  *(_QWORD *)(a1 + 912) = a1 + 928;
  *(_QWORD *)(a1 + 928) = 0x100000001LL;
  *(_QWORD *)(a1 + 824) = 0;
  *(_QWORD *)(a1 + 832) = 0;
  *(_DWORD *)(a1 + 840) = 0;
  *(_QWORD *)(a1 + 848) = 0;
  *(_QWORD *)(a1 + 856) = 0;
  *(_QWORD *)(a1 + 864) = 0;
  *(_QWORD *)(a1 + 872) = 1;
  *(_QWORD *)(a1 + 880) = 1;
  *(_QWORD *)(a1 + 888) = 0;
  *(_QWORD *)(a1 + 896) = 0;
  *(_DWORD *)(a1 + 904) = 0;
  *(_QWORD *)(a1 + 920) = 0;
  *(_QWORD *)(a1 + 936) = 0;
  *(_QWORD *)(a1 + 944) = 0;
  *(_DWORD *)(a1 + 952) = 0;
  *(_QWORD *)(a1 + 960) = 0;
  *(_QWORD *)(a1 + 968) = 0;
  *(_QWORD *)(a1 + 976) = 0;
  *(_QWORD *)(a1 + 984) = 0;
  *(_QWORD *)(a1 + 992) = 0;
  *(_DWORD *)(a1 + 1000) = 0;
  *(_QWORD *)(a1 + 1008) = 0;
  *(_QWORD *)(a1 + 1016) = 0;
  *(_DWORD *)(a1 + 1024) = 0;
  *(_QWORD *)(a1 + 1032) = 0;
  *(_QWORD *)(a1 + 1040) = 0;
  *(_DWORD *)(a1 + 1048) = 0;
  *(_QWORD *)(a1 + 1056) = 0;
  *(_QWORD *)(a1 + 1064) = 0;
  *(_QWORD *)(a1 + 1072) = 0;
  *(_QWORD *)(a1 + 1080) = 0x100000001LL;
  *(_QWORD *)(a1 + 1088) = 0x100000001LL;
  *(_QWORD *)(a1 + 1120) = a1 + 1136;
  *(_QWORD *)(a1 + 1232) = a1 + 1248;
  *(_QWORD *)(a1 + 1272) = a1 + 1288;
  *(_QWORD *)(a1 + 1312) = a1 + 1328;
  *(_QWORD *)(a1 + 1096) = 0;
  *(_QWORD *)(a1 + 1104) = 0;
  *(_DWORD *)(a1 + 1112) = 0;
  *(_QWORD *)(a1 + 1128) = 0;
  *(_QWORD *)(a1 + 1136) = 0;
  *(_QWORD *)(a1 + 1144) = 0;
  *(_QWORD *)(a1 + 1152) = 0;
  *(_QWORD *)(a1 + 1160) = 0;
  *(_QWORD *)(a1 + 1168) = 0;
  *(_DWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1184) = 0;
  *(_QWORD *)(a1 + 1192) = 0;
  *(_DWORD *)(a1 + 1200) = 0;
  *(_QWORD *)(a1 + 1208) = 0;
  *(_QWORD *)(a1 + 1216) = 0;
  *(_DWORD *)(a1 + 1224) = 0;
  *(_QWORD *)(a1 + 1240) = 0;
  *(_QWORD *)(a1 + 1248) = 0;
  *(_QWORD *)(a1 + 1256) = 0;
  *(_DWORD *)(a1 + 1264) = 0;
  *(_QWORD *)(a1 + 1280) = 0;
  *(_QWORD *)(a1 + 1288) = 0;
  *(_QWORD *)(a1 + 1296) = 0;
  *(_DWORD *)(a1 + 1304) = 0;
  *(_QWORD *)(a1 + 1320) = 0;
  *(_QWORD *)(a1 + 1328) = 0;
  *(_QWORD *)(a1 + 1336) = 0;
  *(_DWORD *)(a1 + 1344) = 0;
  *(_QWORD *)(a1 + 1352) = a1 + 1368;
  *(_QWORD *)(a1 + 1392) = a1 + 1408;
  *(_QWORD *)(a1 + 1432) = a1 + 1448;
  *(_QWORD *)(a1 + 1472) = a1 + 1488;
  *(_QWORD *)(a1 + 2000) = a1 + 2016;
  *(_QWORD *)(a1 + 2552) = a1 + 2568;
  *(_QWORD *)(a1 + 2696) = a1 + 2712;
  *(_QWORD *)(a1 + 2864) = a1 + 2880;
  *(_QWORD *)(a1 + 2560) = 0x1000000000LL;
  *(_QWORD *)(a1 + 2704) = 0x1000000000LL;
  *(_QWORD *)(a1 + 1360) = 0;
  *(_QWORD *)(a1 + 1368) = 0;
  *(_QWORD *)(a1 + 1376) = 0;
  *(_DWORD *)(a1 + 1384) = 0;
  *(_QWORD *)(a1 + 1400) = 0;
  *(_QWORD *)(a1 + 1408) = 0;
  *(_QWORD *)(a1 + 1416) = 0;
  *(_DWORD *)(a1 + 1424) = 0;
  *(_QWORD *)(a1 + 1440) = 0;
  *(_QWORD *)(a1 + 1448) = 0;
  *(_QWORD *)(a1 + 1456) = 0;
  *(_DWORD *)(a1 + 1464) = 0;
  *(_DWORD *)(a1 + 1480) = 0;
  *(_DWORD *)(a1 + 1484) = 64;
  *(_QWORD *)(a1 + 2008) = 0x4000000000LL;
  *(_QWORD *)(a1 + 2528) = 0;
  *(_QWORD *)(a1 + 2536) = 0;
  *(_DWORD *)(a1 + 2544) = 0;
  *(_QWORD *)(a1 + 2840) = 0;
  *(_QWORD *)(a1 + 2848) = 0;
  *(_DWORD *)(a1 + 2856) = 0;
  *(_QWORD *)(a1 + 2872) = 0;
  *(_QWORD *)(a1 + 2880) = a1 + 2896;
  *(_QWORD *)(a1 + 2888) = 0x1000000000LL;
  *(_QWORD *)(a1 + 3144) = a1 + 3160;
  result = 0x600000000LL;
  *(_QWORD *)(a1 + 3216) = a1 + 3232;
  *(_QWORD *)(a1 + 3024) = 0;
  *(_QWORD *)(a1 + 3032) = 0;
  *(_DWORD *)(a1 + 3040) = 0;
  *(_QWORD *)(a1 + 3048) = 0;
  *(_QWORD *)(a1 + 3056) = 0;
  *(_DWORD *)(a1 + 3064) = 0;
  *(_QWORD *)(a1 + 3072) = 0;
  *(_QWORD *)(a1 + 3080) = 0;
  *(_QWORD *)(a1 + 3088) = 0;
  *(_QWORD *)(a1 + 3096) = 0;
  *(_QWORD *)(a1 + 3104) = 0;
  *(_DWORD *)(a1 + 3112) = 0;
  *(_QWORD *)(a1 + 3120) = 0;
  *(_QWORD *)(a1 + 3128) = 0;
  *(_QWORD *)(a1 + 3136) = 0;
  *(_QWORD *)(a1 + 3152) = 0x600000000LL;
  *(_DWORD *)(a1 + 3208) = 0;
  *(_QWORD *)(a1 + 3224) = 0x600000000LL;
  *(_DWORD *)(a1 + 3280) = 0;
  *(_QWORD *)(a1 + 3288) = 0;
  *(_QWORD *)(a1 + 3296) = 0;
  *(_QWORD *)(a1 + 3304) = 0;
  *(_QWORD *)(a1 + 3312) = 0;
  *(_QWORD *)(a1 + 3320) = 0;
  *(_QWORD *)(a1 + 3328) = 0;
  *(_QWORD *)(a1 + 3336) = 0;
  *(_QWORD *)(a1 + 3344) = 0;
  *(_QWORD *)(a1 + 3352) = 0;
  *(_QWORD *)(a1 + 3360) = 0;
  *(_QWORD *)(a1 + 3368) = 0;
  *(_QWORD *)(a1 + 3376) = 0;
  *(_QWORD *)(a1 + 3384) = a1 + 3400;
  *(_QWORD *)(a1 + 3392) = 0x600000000LL;
  *(_QWORD *)(a1 + 3448) = 0;
  *(_QWORD *)(a1 + 3456) = 0;
  *(_QWORD *)(a1 + 3464) = 0;
  *(_QWORD *)(a1 + 3472) = 0;
  *(_QWORD *)(a1 + 3480) = 0;
  *(_QWORD *)(a1 + 3488) = 0;
  *(_QWORD *)(a1 + 3496) = 0;
  *(_QWORD *)(a1 + 3504) = 0;
  *(_QWORD *)(a1 + 3512) = 0;
  *(_QWORD *)(a1 + 3520) = 0;
  *(_QWORD *)(a1 + 3528) = 0;
  *(_QWORD *)(a1 + 3536) = 0;
  *(_QWORD *)(a1 + 3544) = 0;
  *(_QWORD *)(a1 + 3552) = 0;
  *(_QWORD *)(a1 + 3560) = 0;
  *(_QWORD *)(a1 + 3568) = 0;
  *(_QWORD *)(a1 + 3576) = 0;
  for ( *(_DWORD *)(a1 + 3584) = 0; v10 != v9; v9 += 2 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64))(*(_QWORD *)*v9 + 56LL))(v22, *v9, a1);
    if ( v22[0] )
    {
      v19 = *(char **)(a1 + 3128);
      if ( v19 == *(char **)(a1 + 3136) )
      {
        result = sub_1F790D0(a1 + 3120, v19, v22);
      }
      else
      {
        result = v22[0];
        v20 = v19 + 8;
        v22[0] = 0;
        *((_QWORD *)v20 - 1) = result;
        *(_QWORD *)(a1 + 3128) = v20;
      }
      if ( v22[0] )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 8LL))(v22[0]);
    }
  }
  return result;
}
