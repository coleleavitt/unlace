__int64 sub_33B520()
{
  __int64 v0; // rbx
  __m128i si128; // xmm0
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  const char *v5; // rsi
  __int64 v6; // rbp
  char *v7; // r12
  __int64 v8; // r13
  time_t v9; // rax
  __int64 v10; // rdx
  time_t v11; // r15
  time_t v12; // rax
  int v13; // eax
  __int64 v14; // rax
  const char *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  __int64 result; // rax
  char v21; // dl
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 path; // rax
  const char *v29; // rax
  __int64 (__fastcall *v30)(__int64, __int64); // rax
  __int64 v31; // [rsp+0h] [rbp-68h]
  __int64 v32; // [rsp+8h] [rbp-60h]
  const char *v33; // [rsp+10h] [rbp-58h] BYREF
  __int128 v34; // [rsp+18h] [rbp-50h]
  unsigned __int64 v35; // [rsp+28h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v0 = qalloc_or_throw(1448);
  *(_QWORD *)(v0 + 8) = get_ph(1448);
  *(_QWORD *)(v0 + 16) = get_ash();
  *(_QWORD *)(v0 + 24) = get_eah();
  *(_OWORD *)(v0 + 32) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_OWORD *)(v0 + 64) = 0;
  *(_OWORD *)(v0 + 80) = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_400180);
  *(_QWORD *)v0 = off_4B75F8;
  *(__m128i *)(v0 + 96) = si128;
  *(_QWORD *)(v0 + 112) = sub_3EE120(v0);
  *(_WORD *)(v0 + 136) = 0;
  *(_QWORD *)(v0 + 120) = 0;
  *(_QWORD *)(v0 + 128) = 0;
  *(_QWORD *)(v0 + 140) = 0;
  *(_BYTE *)(v0 + 148) = 0;
  *(_DWORD *)(v0 + 152) = 0;
  *(_QWORD *)(v0 + 160) = 0;
  *(_DWORD *)(v0 + 184) = 0;
  *(_QWORD *)(v0 + 192) = 0;
  *(_QWORD *)(v0 + 200) = 0;
  *(_QWORD *)(v0 + 368) = 0;
  *(_OWORD *)(v0 + 168) = 0;
  memset(
    (void *)((v0 + 208) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v0 - (((_DWORD)v0 + 208) & 0xFFFFFFF8) + 376) >> 3));
  *(_QWORD *)(v0 + 424) = 0;
  *(_QWORD *)(v0 + 448) = 0;
  *(_QWORD *)(v0 + 464) = 0;
  *(_QWORD *)(v0 + 456) = &off_4BAA78;
  *(_QWORD *)(v0 + 480) = &off_4B7520;
  *(_QWORD *)(v0 + 504) = off_4B7548;
  *(_QWORD *)(v0 + 472) = v0;
  *(_QWORD *)(v0 + 488) = 0;
  *(_QWORD *)(v0 + 496) = v0;
  *(_QWORD *)(v0 + 512) = 0;
  *(_QWORD *)(v0 + 520) = v0;
  *(_QWORD *)(v0 + 536) = 0;
  *(_OWORD *)(v0 + 376) = 0;
  *(_OWORD *)(v0 + 392) = 0;
  *(_OWORD *)(v0 + 408) = -1;
  *(_OWORD *)(v0 + 432) = 0;
  *(_QWORD *)(v0 + 528) = &off_4BA4D0;
  *(_QWORD *)(v0 + 544) = v0;
  *(_QWORD *)(v0 + 552) = off_4B7570;
  *(_QWORD *)(v0 + 560) = v0;
  sub_324D70(v0 + 568);
  *(_QWORD *)(v0 + 768) = sub_B6A90(0.0, NAN);
  *(_QWORD *)(v0 + 776) = sub_CB810();
  *(_QWORD *)(v0 + 784) = sub_3EFCD0(v0);
  *(_QWORD *)(v0 + 792) = sub_132A30(v0);
  *(_QWORD *)(v0 + 800) = sub_358A40(v0);
  *(_QWORD *)(v0 + 808) = sub_274070();
  *(_QWORD *)(v0 + 816) = sub_25B040();
  *(_QWORD *)(v0 + 824) = sub_23A6A0();
  *(_QWORD *)(v0 + 832) = sub_1D0D20();
  v2 = operator new(0x120u);
  *(_QWORD *)v2 = 0;
  *(_OWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 8) = 0;
  *(_QWORD *)(v2 + 32) = 0;
  *(_BYTE *)(v2 + 286) = 0;
  *(_QWORD *)(v2 + 56) = 0;
  *(_QWORD *)(v2 + 278) = 0;
  *(_OWORD *)(v2 + 40) = 0;
  memset(
    (void *)((v2 + 64) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((unsigned int)v2 - (((_DWORD)v2 + 64) & 0xFFFFFFF8) + 286) >> 3));
  *(_QWORD *)(v0 + 840) = v2;
  *(_QWORD *)(v0 + 848) = 0;
  *(_QWORD *)(v0 + 872) = 0;
  *(_OWORD *)(v0 + 856) = 0;
  *(_QWORD *)(v0 + 880) = sub_3B87F0(v0);
  *(_QWORD *)(v0 + 888) = 0;
  *(_DWORD *)(v0 + 896) = 0;
  *(_QWORD *)(v0 + 904) = 0;
  *(_QWORD *)(v0 + 912) = 0;
  *(_QWORD *)(v0 + 920) = -1;
  *(_QWORD *)(v0 + 928) = 0;
  *(_QWORD *)(v0 + 952) = 0;
  *(_QWORD *)(v0 + 976) = 0;
  *(_QWORD *)(v0 + 1000) = 0;
  *(_OWORD *)(v0 + 936) = 0;
  *(_OWORD *)(v0 + 960) = 0;
  *(_OWORD *)(v0 + 984) = 0;
  *(_QWORD *)(v0 + 1008) = sub_383820(v0);
  *(_QWORD *)(v0 + 1016) = sub_3D25D0(v0);
  *(_QWORD *)(v0 + 1024) = sub_1A9560();
  *(_QWORD *)(v0 + 1032) = sub_3EE390();
  *(_QWORD *)(v0 + 1040) = sub_27F930(v0);
  *(_QWORD *)(v0 + 1048) = sub_27F9B0(v0);
  *(_QWORD *)(v0 + 1056) = sub_30C750();
  *(_QWORD *)(v0 + 1064) = 0;
  *(_QWORD *)(v0 + 1088) = 0;
  *(_OWORD *)(v0 + 1072) = 0;
  *(_OWORD *)(v0 + 1096) = 0;
  *(_OWORD *)(v0 + 1112) = -1;
  *(_QWORD *)(v0 + 1128) = sub_36DF70(v0);
  *(_QWORD *)(v0 + 1136) = 0;
  *(_QWORD *)(v0 + 1144) = 0;
  *(_QWORD *)(v0 + 1152) = sub_1DA030(v0);
  v3 = *(_QWORD *)(v0 + 112);
  *(_QWORD *)(v0 + 1160) = 0;
  *(_QWORD *)(v0 + 1184) = 0;
  *(_QWORD *)(v0 + 1208) = 0;
  *(_QWORD *)(v0 + 1232) = 0;
  *(_QWORD *)(v0 + 1256) = 0;
  *(_QWORD *)(v0 + 1280) = 0;
  *(_QWORD *)(v0 + 1304) = 0;
  *(_QWORD *)(v0 + 1312) = 0;
  *(_QWORD *)(v0 + 1336) = 0;
  *(_OWORD *)(v0 + 1168) = 0;
  *(_OWORD *)(v0 + 1192) = 0;
  *(_OWORD *)(v0 + 1216) = 0;
  *(_OWORD *)(v0 + 1240) = 0;
  *(_OWORD *)(v0 + 1264) = 0;
  *(_OWORD *)(v0 + 1288) = 0;
  *(_OWORD *)(v0 + 1320) = 0;
  *(_OWORD *)(v0 + 1344) = 0;
  *(_QWORD *)(v0 + 1360) = sub_39F9D0(v3);
  *(_QWORD *)(v0 + 1368) = 0;
  *(_OWORD *)(v0 + 1376) = 0;
  *(_QWORD *)(v0 + 1392) = sub_3A7480(v0);
  *(_QWORD *)(v0 + 1400) = sub_3A74D0();
  v4 = *(_QWORD *)(v0 + 112);
  *(_WORD *)(v0 + 1424) = 0;
  *(_QWORD *)(v0 + 1408) = 0x100000;
  *(_QWORD *)(v0 + 1416) = 32;
  *(_QWORD *)(v0 + 1432) = 0;
  *(_QWORD *)(v0 + 1440) = 0;
  *(_OWORD *)(v0 + 128) = 0;
  v5 = *(const char **)(v4 + 24);
  qstrncpy(*(_QWORD *)(v0 + 840) + 16LL, v5, 16);
  v6 = *(_QWORD *)(v0 + 112);
  v7 = *(char **)(v0 + 8);
  if ( *((_DWORD *)v7 + 1) == *(_DWORD *)(v6 + 16) )
  {
    v8 = *(_QWORD *)(v0 + 840);
    sub_339480(v8);
    v9 = time(nullptr);
    v10 = *(int *)(v8 + 80);
    v11 = v9;
    if ( *(_DWORD *)(v8 + 80) )
      goto LABEL_15;
    while ( 1 )
    {
      v12 = *(int *)(v8 + 76);
      if ( (_DWORD)v12 )
      {
LABEL_16:
        if ( v11 >= v12 )
        {
          v5 = "OK";
          if ( (int)sub_3371F0(
                      (__int64)"https://www.hex-rays.com",
                      (__int64)"OK",
                      (__int64)&unk_3F5793,
                      1u,
                      (__int64)"AUTOHIDE REGISTRY\n"
                               "HIDECANCEL\n"
                               "Sorry, your Hex-Rays license has been expired.\n"
                               "For more information please visit %s",
                      "https://www.hex-rays.com") > 0 )
          {
            v5 = "https://www.hex-rays.com";
            callui(48, "https://www.hex-rays.com", &callui, v16, v17, v18, v31, v32, v33, v34);
          }
          break;
        }
      }
LABEL_4:
      v33 = nullptr;
      v34 = 0;
      v13 = *((_DWORD *)v7 + 1);
      if ( v13 == *(_DWORD *)(v6 + 16) )
      {
        if ( (*(_WORD *)(v6 + 48) & 0x180) == 0 )
        {
          if ( !under_debugger )
            sub_37CFE0(51195);
          BUG();
        }
        v21 = getinf_flag(3, 4);
        v22 = 256;
        if ( !v21 )
          v22 = (unsigned __int8)getinf_flag(3, 2) == 0 ? 64 : 128;
        if ( (*(_DWORD *)(v6 + 48) & v22) != 0 )
        {
          set_module_data(&dword_4C2AB8, v0);
          if ( (unsigned __int8)sub_33B180(v0) )
          {
            set_hexdsp(sub_3448A0);
            result = v0;
            if ( v33 )
            {
              *(_QWORD *)&v34 = 0;
              qfree(v33);
              return v0;
            }
            return result;
          }
          if ( v0 )
          {
            v30 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL);
            if ( v30 == sub_338BD0 )
            {
              sub_338240(v0, v0);
              qfree(v0);
            }
            else
            {
              ((void (__fastcall *)(__int64))v30)(v0);
            }
          }
          clr_module_data((unsigned int)dword_4C2AB8);
          sub_68620((__int64)"Hex-Rays: could not initialize processor subsystem\n");
          if ( v33 )
          {
            *(_QWORD *)&v34 = 0;
            qfree(v33);
          }
          return 0;
        }
        v8 = *(_QWORD *)(v6 + 24);
        v7 = (char *)&word_10;
        v27 = getinf(3) & 6;
        if ( (_DWORD)v27 )
        {
          v7 = (char *)&dword_40;
          if ( (_DWORD)v27 == 2 )
            v7 = (char *)&qword_20;
        }
        path = get_path(1);
        v29 = (const char *)qbasename(path);
        sub_66DF0(
          (__int64 *)&v33,
          (__int64)"%s: is a %d-bit database, %s cannot handle it\n",
          v29,
          (_DWORD)v7,
          (const char *)v8);
      }
      else
      {
        v8 = *(_QWORD *)(v6 + 24);
        v7 = (char *)"ARM64";
        if ( v13 != 13 )
        {
          if ( v13 > 13 )
          {
            v7 = (char *)"PPC64";
            if ( v13 != 15 )
            {
              v7 = "?";
              if ( v13 == 63 )
                v7 = (char *)"ARC";
            }
          }
          else
          {
            v7 = "x64";
            if ( v13 )
            {
              v7 = "?";
              if ( v13 == 12 )
                v7 = (char *)"MIPS64";
            }
          }
        }
        v14 = get_path(1);
        v15 = (const char *)qbasename(v14);
        sub_66DF0(
          (__int64 *)&v33,
          (__int64)"%s: requires %s processor (%s cannot handle it)\n",
          v15,
          v7,
          (const char *)v8);
      }
      v5 = nullptr;
      if ( !sub_335390(v6, 0) )
      {
        if ( v33 )
        {
          *(_QWORD *)&v34 = 0;
          qfree(v33);
        }
        break;
      }
      if ( (unsigned __int64)v34 > 1 )
        sub_68620((__int64)"%s\n", v33);
      set_database_flag(1, 1);
      qexit(1);
LABEL_15:
      v12 = *(int *)(v8 + 76);
      if ( (_DWORD)v12 )
        goto LABEL_16;
      v23 = v10 - v11;
      if ( v23 <= 0 )
      {
        if ( sub_333EE0("SupportExpiredDisplayed", 0) )
        {
          LODWORD(v32) = sub_3371F0(
                           (__int64)"https://www.hex-rays.com",
                           (__int64)"OK",
                           (__int64)&unk_3F5793,
                           1u,
                           (__int64)"AUTOHIDE REGISTRY\n"
                                    "HIDECANCEL\n"
                                    "The technical support period of the Hex-Rays decompiler\n"
                                    "has expired. You have 3 month grace period to update your license.\n"
                                    "The grace period is counted from the expiration date.\n"
                                    "For more information please visit %s",
                           "https://www.hex-rays.com");
          sub_333EE0("SupportExpiredDisplayed", 1);
          goto LABEL_35;
        }
      }
      else
      {
        if ( v23 > 2591999 )
          goto LABEL_4;
        if ( sub_333EE0("SupportExpiringDisplayed", 0) )
        {
          LODWORD(v32) = sub_3371F0(
                           (__int64)"https://www.hex-rays.com",
                           (__int64)"OK",
                           (__int64)&unk_3F5793,
                           1u,
                           (__int64)"AUTOHIDE REGISTRY\n"
                                    "HIDECANCEL\n"
                                    "The technical support period of the Hex-Rays decompiler\n"
                                    "will expire soon. Please update your license for\n"
                                    "uninterrupted technical support and updates.\n"
                                    "For more information please visit %s",
                           "https://www.hex-rays.com");
          sub_333EE0("SupportExpiringDisplayed", 1);
LABEL_35:
          if ( (int)v32 > 0 )
            callui(48, "https://www.hex-rays.com", &callui, v24, v25, v26, v31, v32, v33, v34);
        }
      }
    }
  }
  if ( v0 )
  {
    v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v0 + 16LL);
    if ( v19 == sub_338BD0 )
    {
      sub_338240(v0, (__int64)v5);
      qfree(v0);
    }
    else
    {
      ((void (__fastcall *)(__int64))v19)(v0);
    }
  }
  return 0;
}
