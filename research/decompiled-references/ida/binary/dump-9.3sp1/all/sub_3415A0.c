__int64 __fastcall sub_3415A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  __m128i si128; // xmm0
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rax
  const char *v15; // rsi
  __int64 v16; // rbp
  char *v17; // r12
  __int64 v18; // r13
  time_t v19; // rax
  __int64 v20; // rdx
  time_t v21; // r15
  time_t v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 (__fastcall *v27)(__int64, __int64); // rax
  __int64 result; // rax
  char v29; // dl
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // eax
  __int64 (__fastcall *v36)(__int64, __int64); // rax
  __int64 v37; // [rsp+0h] [rbp-68h]
  __int64 v38; // [rsp+8h] [rbp-60h]
  const char *v39; // [rsp+10h] [rbp-58h] BYREF
  __int128 v40; // [rsp+18h] [rbp-50h]
  unsigned __int64 v41; // [rsp+28h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v4 = qalloc_or_throw(1448, a2, a3, a4);
  *(_QWORD *)(v4 + 8) = get_ph();
  *(_QWORD *)(v4 + 16) = get_ash();
  *(_QWORD *)(v4 + 24) = get_eah();
  *(_OWORD *)(v4 + 32) = 0;
  *(_OWORD *)(v4 + 48) = 0;
  *(_OWORD *)(v4 + 64) = 0;
  *(_OWORD *)(v4 + 80) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(_QWORD *)v4 = off_4E3C78;
  *(__m128i *)(v4 + 96) = si128;
  *(_QWORD *)(v4 + 112) = sub_40B480(v4);
  *(_WORD *)(v4 + 136) = 0;
  *(_QWORD *)(v4 + 120) = 0;
  *(_QWORD *)(v4 + 128) = 0;
  *(_QWORD *)(v4 + 140) = 0;
  *(_BYTE *)(v4 + 148) = 0;
  *(_DWORD *)(v4 + 152) = 0;
  *(_QWORD *)(v4 + 160) = 0;
  *(_DWORD *)(v4 + 184) = 0;
  *(_QWORD *)(v4 + 192) = 0;
  *(_QWORD *)(v4 + 200) = 0;
  *(_QWORD *)(v4 + 368) = 0;
  *(_OWORD *)(v4 + 168) = 0;
  memset(
    (void *)((v4 + 208) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v4 - (((_DWORD)v4 + 208) & 0xFFFFFFF8) + 376) >> 3));
  *(_QWORD *)(v4 + 424) = 0;
  *(_QWORD *)(v4 + 448) = 0;
  *(_QWORD *)(v4 + 464) = 0;
  *(_QWORD *)(v4 + 456) = &off_4E70F8;
  *(_QWORD *)(v4 + 480) = &off_4E3BA0;
  *(_QWORD *)(v4 + 504) = off_4E3BC8;
  *(_QWORD *)(v4 + 472) = v4;
  *(_QWORD *)(v4 + 488) = 0;
  *(_QWORD *)(v4 + 496) = v4;
  *(_QWORD *)(v4 + 512) = 0;
  *(_QWORD *)(v4 + 520) = v4;
  *(_QWORD *)(v4 + 536) = 0;
  *(_OWORD *)(v4 + 376) = 0;
  *(_OWORD *)(v4 + 392) = 0;
  *(_OWORD *)(v4 + 408) = -1;
  *(_OWORD *)(v4 + 432) = 0;
  *(_QWORD *)(v4 + 528) = &off_4E6B50;
  *(_QWORD *)(v4 + 544) = v4;
  *(_QWORD *)(v4 + 552) = off_4E3BF0;
  *(_QWORD *)(v4 + 560) = v4;
  sub_32A6C0(v4 + 568);
  *(_QWORD *)(v4 + 768) = sub_BB650(0.0, NAN);
  *(_QWORD *)(v4 + 776) = sub_D03D0();
  *(_QWORD *)(v4 + 784) = sub_4137D0(v4);
  *(_QWORD *)(v4 + 792) = sub_1375F0(v4);
  *(_QWORD *)(v4 + 800) = sub_35EAC0(v4);
  *(_QWORD *)(v4 + 808) = sub_279430();
  *(_QWORD *)(v4 + 816) = sub_260400();
  *(_QWORD *)(v4 + 824) = sub_23FA60();
  *(_QWORD *)(v4 + 832) = sub_1D5B60(v4, a2, v6, v7);
  v8 = operator new(0x120u);
  *(_QWORD *)v8 = 0;
  *(_OWORD *)(v8 + 16) = 0;
  *(_QWORD *)(v8 + 8) = 0;
  *(_QWORD *)(v8 + 32) = 0;
  *(_BYTE *)(v8 + 286) = 0;
  *(_QWORD *)(v8 + 56) = 0;
  *(_QWORD *)(v8 + 278) = 0;
  *(_OWORD *)(v8 + 40) = 0;
  memset(
    (void *)((v8 + 64) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v8 - (((_DWORD)v8 + 64) & 0xFFFFFFF8) + 286) >> 3));
  *(_QWORD *)(v4 + 840) = v8;
  *(_QWORD *)(v4 + 848) = 0;
  *(_QWORD *)(v4 + 872) = 0;
  *(_OWORD *)(v4 + 856) = 0;
  *(_QWORD *)(v4 + 880) = sub_3BE870(v4);
  *(_QWORD *)(v4 + 888) = 0;
  *(_DWORD *)(v4 + 896) = 0;
  *(_QWORD *)(v4 + 904) = 0;
  *(_QWORD *)(v4 + 912) = 0;
  *(_QWORD *)(v4 + 920) = -1;
  *(_QWORD *)(v4 + 928) = 0;
  *(_QWORD *)(v4 + 952) = 0;
  *(_QWORD *)(v4 + 976) = 0;
  *(_QWORD *)(v4 + 1000) = 0;
  *(_OWORD *)(v4 + 936) = 0;
  *(_OWORD *)(v4 + 960) = 0;
  *(_OWORD *)(v4 + 984) = 0;
  *(_QWORD *)(v4 + 1008) = sub_3898A0(v4);
  *(_QWORD *)(v4 + 1016) = sub_3D8650(v4);
  *(_QWORD *)(v4 + 1024) = sub_1AE260();
  *(_QWORD *)(v4 + 1032) = sub_40B760();
  *(_QWORD *)(v4 + 1040) = sub_284CF0(v4, a2, v9, v10);
  *(_QWORD *)(v4 + 1048) = sub_284D70(v4, a2, v11, v12);
  *(_QWORD *)(v4 + 1056) = sub_312010();
  *(_QWORD *)(v4 + 1064) = 0;
  *(_QWORD *)(v4 + 1088) = 0;
  *(_OWORD *)(v4 + 1072) = 0;
  *(_OWORD *)(v4 + 1096) = 0;
  *(_OWORD *)(v4 + 1112) = -1;
  *(_QWORD *)(v4 + 1128) = sub_373FF0(v4);
  *(_QWORD *)(v4 + 1136) = 0;
  *(_QWORD *)(v4 + 1144) = 0;
  *(_QWORD *)(v4 + 1152) = sub_1DF410(v4);
  v13 = *(_QWORD *)(v4 + 112);
  *(_QWORD *)(v4 + 1160) = 0;
  *(_QWORD *)(v4 + 1184) = 0;
  *(_QWORD *)(v4 + 1208) = 0;
  *(_QWORD *)(v4 + 1232) = 0;
  *(_QWORD *)(v4 + 1256) = 0;
  *(_QWORD *)(v4 + 1280) = 0;
  *(_QWORD *)(v4 + 1304) = 0;
  *(_QWORD *)(v4 + 1312) = 0;
  *(_QWORD *)(v4 + 1336) = 0;
  *(_OWORD *)(v4 + 1168) = 0;
  *(_OWORD *)(v4 + 1192) = 0;
  *(_OWORD *)(v4 + 1216) = 0;
  *(_OWORD *)(v4 + 1240) = 0;
  *(_OWORD *)(v4 + 1264) = 0;
  *(_OWORD *)(v4 + 1288) = 0;
  *(_OWORD *)(v4 + 1320) = 0;
  *(_OWORD *)(v4 + 1344) = 0;
  *(_QWORD *)(v4 + 1360) = sub_3A5A50(v13);
  *(_QWORD *)(v4 + 1368) = 0;
  *(_OWORD *)(v4 + 1376) = 0;
  *(_QWORD *)(v4 + 1392) = sub_3AD500(v4);
  *(_QWORD *)(v4 + 1400) = sub_3AD550();
  v14 = *(_QWORD *)(v4 + 112);
  *(_WORD *)(v4 + 1424) = 0;
  *(_QWORD *)(v4 + 1408) = 0x100000;
  *(_QWORD *)(v4 + 1416) = 32;
  *(_QWORD *)(v4 + 1432) = 0;
  *(_QWORD *)(v4 + 1440) = 0;
  *(_OWORD *)(v4 + 128) = 0;
  v15 = *(const char **)(v14 + 24);
  qstrncpy();
  v16 = *(_QWORD *)(v4 + 112);
  v17 = *(char **)(v4 + 8);
  if ( *((_DWORD *)v17 + 1) == *(_DWORD *)(v16 + 16) )
  {
    v18 = *(_QWORD *)(v4 + 840);
    sub_33F500(v18);
    v19 = time(nullptr);
    v20 = *(int *)(v18 + 80);
    v21 = v19;
    if ( *(_DWORD *)(v18 + 80) )
      goto LABEL_14;
    while ( 1 )
    {
      v22 = *(int *)(v18 + 76);
      if ( (_DWORD)v22 )
      {
LABEL_15:
        if ( v21 >= v22 )
        {
          v15 = "OK";
          if ( (int)sub_33D270(
                      (__int64)"https://www.hex-rays.com",
                      (__int64)"OK",
                      (__int64)&unk_418793,
                      1u,
                      (__int64)"AUTOHIDE REGISTRY\n"
                               "HIDECANCEL\n"
                               "Sorry, your Hex-Rays license has been expired.\n"
                               "For more information please visit %s",
                      "https://www.hex-rays.com") > 0 )
          {
            v15 = "https://www.hex-rays.com";
            callui(48, "https://www.hex-rays.com", &callui, v24, v25, v26, v37, v38, v39, v40);
          }
          break;
        }
      }
LABEL_4:
      v39 = nullptr;
      v40 = 0;
      v23 = *((_DWORD *)v17 + 1);
      if ( v23 == *(_DWORD *)(v16 + 16) )
      {
        if ( (*(_WORD *)(v16 + 48) & 0x180) == 0 )
        {
          if ( !under_debugger )
            sub_383060(51195);
          BUG();
        }
        v29 = getinf_flag();
        v30 = 256;
        if ( !v29 )
          v30 = (unsigned __int8)getinf_flag() == 0 ? 64 : 128;
        if ( (*(_DWORD *)(v16 + 48) & v30) != 0 )
        {
          set_module_data();
          if ( (unsigned __int8)sub_341200(v4) )
          {
            set_hexdsp();
            result = v4;
            if ( v39 )
            {
              *(_QWORD *)&v40 = 0;
              qfree((__int64)v39);
              return v4;
            }
            return result;
          }
          if ( v4 )
          {
            v36 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL);
            if ( v36 == sub_33EC50 )
            {
              sub_33E2C0(v4, v4);
              qfree(v4);
            }
            else
            {
              v36(v4, v4);
            }
          }
          clr_module_data();
          sub_6D0A0((__int64)"Hex-Rays: could not initialize processor subsystem\n", v4);
          if ( v39 )
          {
            *(_QWORD *)&v40 = 0;
            qfree((__int64)v39);
          }
          return 0;
        }
        v18 = *(_QWORD *)(v16 + 24);
        v17 = (_BYTE *)word_10;
        v35 = getinf() & 6;
        if ( v35 )
        {
          v17 = (char *)&dword_40;
          if ( v35 == 2 )
            v17 = (char *)&qword_20;
        }
      }
      else
      {
        v18 = *(_QWORD *)(v16 + 24);
        v17 = (char *)"ARM64";
        if ( v23 != 13 )
        {
          if ( v23 > 13 )
          {
            v17 = (char *)"PPC64";
            if ( v23 != 15 )
            {
              v17 = "?";
              if ( v23 == 63 )
                v17 = (char *)"ARC";
            }
          }
          else
          {
            v17 = "x64";
            if ( v23 )
            {
              v17 = "?";
              if ( v23 == 12 )
                v17 = (char *)"MIPS64";
            }
          }
        }
      }
      get_path();
      qbasename();
      sub_6B870((__int64 *)&v39);
      v15 = nullptr;
      if ( !sub_33B410(v16, 0) )
      {
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree((__int64)v39);
        }
        break;
      }
      if ( (unsigned __int64)v40 > 1 )
        sub_6D0A0((__int64)"%s\n", v39);
      set_database_flag();
      qexit();
LABEL_14:
      v22 = *(int *)(v18 + 76);
      if ( (_DWORD)v22 )
        goto LABEL_15;
      v31 = v20 - v21;
      if ( v31 <= 0 )
      {
        if ( sub_339F60((__int64)"SupportExpiredDisplayed", 0) )
        {
          LODWORD(v38) = sub_33D270(
                           (__int64)"https://www.hex-rays.com",
                           (__int64)"OK",
                           (__int64)&unk_418793,
                           1u,
                           (__int64)"AUTOHIDE REGISTRY\n"
                                    "HIDECANCEL\n"
                                    "The technical support period of the Hex-Rays decompiler\n"
                                    "has expired. You have 3 month grace period to update your license.\n"
                                    "The grace period is counted from the expiration date.\n"
                                    "For more information please visit %s",
                           "https://www.hex-rays.com");
          sub_339F60((__int64)"SupportExpiredDisplayed", 1);
          goto LABEL_34;
        }
      }
      else
      {
        if ( v31 > 2591999 )
          goto LABEL_4;
        if ( sub_339F60((__int64)"SupportExpiringDisplayed", 0) )
        {
          LODWORD(v38) = sub_33D270(
                           (__int64)"https://www.hex-rays.com",
                           (__int64)"OK",
                           (__int64)&unk_418793,
                           1u,
                           (__int64)"AUTOHIDE REGISTRY\n"
                                    "HIDECANCEL\n"
                                    "The technical support period of the Hex-Rays decompiler\n"
                                    "will expire soon. Please update your license for\n"
                                    "uninterrupted technical support and updates.\n"
                                    "For more information please visit %s",
                           "https://www.hex-rays.com");
          sub_339F60((__int64)"SupportExpiringDisplayed", 1);
LABEL_34:
          if ( (int)v38 > 0 )
            callui(48, "https://www.hex-rays.com", &callui, v32, v33, v34, v37, v38, v39, v40);
        }
      }
    }
  }
  if ( v4 )
  {
    v27 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16LL);
    if ( v27 == sub_33EC50 )
    {
      sub_33E2C0(v4, (__int64)v15);
      qfree(v4);
    }
    else
    {
      v27(v4, (__int64)v15);
    }
  }
  return 0;
}
