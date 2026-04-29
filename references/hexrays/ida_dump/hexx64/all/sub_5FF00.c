int sub_5FF00()
{
  char *v1; // [rsp+0h] [rbp-40h] BYREF

  qword_4EECA0 = 0;
  qword_4EECC8 = 0;
  qword_4EECF0 = 0;
  xmmword_4EEC80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2E90),
                               (__m128i)(unsigned __int64)"acos");
  xmmword_4EEC90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2E98),
                               (__m128i)(unsigned __int64)&unk_42E1B1);
  xmmword_4EECA8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2EA0),
                               (__m128i)(unsigned __int64)"acosl");
  xmmword_4EECB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2EA8),
                               (__m128i)(unsigned __int64)&unk_42DF81);
  xmmword_4EECD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2EB0),
                               (__m128i)(unsigned __int64)"asin");
  xmmword_4EECE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2EB8),
                               (__m128i)(unsigned __int64)&unk_42E199);
  xmmword_4EECF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2EC0),
                               (__m128i)(unsigned __int64)"asinl");
  xmmword_4EED08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2EC8),
                               (__m128i)(unsigned __int64)&unk_42DF66);
  v1 = "atan2";
  qword_4EED18 = 0;
  xmmword_4EED20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2ED0),
                               (__m128i)(unsigned __int64)"atan");
  qword_4EED40 = 0;
  qword_4EED68 = 0;
  xmmword_4EED30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2ED8),
                               (__m128i)(unsigned __int64)&unk_42E17E);
  qword_4EED90 = 0;
  qword_4EEDB8 = 0;
  xmmword_4EED48 = (__int128)_mm_loadh_ps((const double *)&v1);
  qword_4EEDE0 = 0;
  xmmword_4EED58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2EE8),
                               (__m128i)(unsigned __int64)&unk_42E161);
  xmmword_4EED70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2EF0),
                               (__m128i)(unsigned __int64)"atan2l");
  xmmword_4EED80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2EF8),
                               (__m128i)(unsigned __int64)&unk_42DF49);
  xmmword_4EED98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F00),
                               (__m128i)(unsigned __int64)"atanl");
  xmmword_4EEDA8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F08),
                               (__m128i)(unsigned __int64)&unk_42DF31);
  xmmword_4EEDC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F10),
                               (__m128i)(unsigned __int64)"ceil");
  xmmword_4EEDD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F18),
                               (__m128i)(unsigned __int64)&unk_42E149);
  xmmword_4EEDE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F20),
                               (__m128i)(unsigned __int64)"ceill");
  xmmword_4EEDF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F28),
                               (__m128i)(unsigned __int64)&unk_42DF19);
  qword_4EEE08 = 0;
  qword_4EEE30 = 0;
  qword_4EEE58 = 0;
  xmmword_4EEE10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F30),
                               (__m128i)(unsigned __int64)"cos");
  qword_4EEE80 = 0;
  qword_4EEEA8 = 0;
  xmmword_4EEE20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F38),
                               (__m128i)(unsigned __int64)&unk_42E131);
  qword_4EEED0 = 0;
  qword_4EEEF8 = 0;
  xmmword_4EEE38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F40),
                               (__m128i)(unsigned __int64)"cosh");
  xmmword_4EEE48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F48),
                               (__m128i)(unsigned __int64)&unk_42E119);
  xmmword_4EEE60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F50),
                               (__m128i)(unsigned __int64)"coshl");
  xmmword_4EEE70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F58),
                               (__m128i)(unsigned __int64)&unk_42DF01);
  xmmword_4EEE88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F60),
                               (__m128i)(unsigned __int64)"cosl");
  xmmword_4EEE98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F68),
                               (__m128i)(unsigned __int64)&unk_42DEE9);
  xmmword_4EEEB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F70),
                               (__m128i)(unsigned __int64)"exp");
  xmmword_4EEEC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F78),
                               (__m128i)(unsigned __int64)&unk_42E101);
  xmmword_4EEED8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F80),
                               (__m128i)(unsigned __int64)"expl");
  xmmword_4EEEE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F88),
                               (__m128i)(unsigned __int64)&unk_42DED1);
  xmmword_4EEF00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F90),
                               (__m128i)(unsigned __int64)"fabs");
  qword_4EEF20 = 0;
  qword_4EEF48 = 0;
  xmmword_4EEF10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2F98),
                               (__m128i)(unsigned __int64)&unk_42E0E9);
  qword_4EEF70 = 0;
  qword_4EEF98 = 0;
  xmmword_4EEF28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2FA0),
                               (__m128i)(unsigned __int64)"fabsl");
  qword_4EEFC0 = 0;
  qword_4EEFE8 = 0;
  xmmword_4EEF38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2FA8),
                               (__m128i)(unsigned __int64)&unk_42DEB9);
  xmmword_4EEF50 = (__int128)_mm_loadh_ps((const double *)&off_4E2FB8);
  xmmword_4EEF60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2FC0),
                               (__m128i)(unsigned __int64)&unk_42E0CE);
  xmmword_4EEF78 = (__int128)_mm_loadh_ps((const double *)&off_4E2FD0);
  xmmword_4EEF88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2FD8),
                               (__m128i)(unsigned __int64)&unk_42DE9E);
  xmmword_4EEFA0 = (__int128)_mm_loadh_ps((const double *)&off_4E2FE8);
  xmmword_4EEFB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E2FF0),
                               (__m128i)(unsigned __int64)&unk_42E0B0);
  xmmword_4EEFC8 = (__int128)_mm_loadh_ps((const double *)&off_4E3000);
  xmmword_4EEFD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3008),
                               (__m128i)(unsigned __int64)&unk_42DE80);
  qword_4EF010 = 0;
  qword_4EF038 = 0;
  xmmword_4EEFF0 = (__int128)_mm_loadh_ps((const double *)&off_4E3018);
  qword_4EF060 = 0;
  qword_4EF088 = 0;
  xmmword_4EF000 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3020),
                               (__m128i)(unsigned __int64)&unk_42E048);
  qword_4EF0B0 = 0;
  xmmword_4EF018 = (__int128)_mm_loadh_ps((const double *)&off_4E3030);
  xmmword_4EF028 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3038),
                               (__m128i)(unsigned __int64)&unk_42E061);
  xmmword_4EF040 = (__int128)_mm_loadh_ps((const double *)&off_4E3048);
  xmmword_4EF050 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3050),
                               (__m128i)(unsigned __int64)&unk_42DE31);
  xmmword_4EF068 = (__int128)_mm_loadh_ps((const double *)&off_4E3060);
  xmmword_4EF078 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3068),
                               (__m128i)(unsigned __int64)&unk_42DE18);
  xmmword_4EF090 = (__int128)_mm_loadh_ps((const double *)&off_4E3078);
  xmmword_4EF0A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3080),
                               (__m128i)(unsigned __int64)&unk_42E011);
  xmmword_4EF0B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3088),
                               (__m128i)(unsigned __int64)"powl");
  qword_4EF0D8 = 0;
  qword_4EF100 = 0;
  xmmword_4EF0C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3090),
                               (__m128i)(unsigned __int64)&unk_42DDE1);
  qword_4EF128 = 0;
  qword_4EF150 = 0;
  xmmword_4EF0E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3098),
                               (__m128i)(unsigned __int64)"sin");
  qword_4EF178 = 0;
  qword_4EF1A0 = 0;
  xmmword_4EF0F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30A0),
                               (__m128i)(unsigned __int64)&unk_42DFF9);
  xmmword_4EF108 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30A8),
                               (__m128i)(unsigned __int64)"sinh");
  xmmword_4EF118 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30B0),
                               (__m128i)(unsigned __int64)&unk_42DFE1);
  xmmword_4EF130 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30B8),
                               (__m128i)(unsigned __int64)"sinhl");
  xmmword_4EF140 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30C0),
                               (__m128i)(unsigned __int64)&unk_42DDC9);
  xmmword_4EF158 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30C8),
                               (__m128i)(unsigned __int64)"sinl");
  xmmword_4EF168 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30D0),
                               (__m128i)(unsigned __int64)&unk_42DDB1);
  xmmword_4EF180 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30D8),
                               (__m128i)(unsigned __int64)"sqrt");
  xmmword_4EF190 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30E0),
                               (__m128i)(unsigned __int64)&unk_42DFC9);
  xmmword_4EF1A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30E8),
                               (__m128i)(unsigned __int64)"sqrtl");
  xmmword_4EF1B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30F0),
                               (__m128i)(unsigned __int64)&unk_42DD99);
  qword_4EF1C8 = 0;
  qword_4EF270 = (__int64)"acos";
  qword_4EF298 = (__int64)"acosl";
  xmmword_4EF1D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E30F8),
                               (__m128i)(unsigned __int64)"tan");
  qword_4EF2C0 = (__int64)"asin";
  qword_4EF1F0 = 0;
  xmmword_4EF1E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3100),
                               (__m128i)(unsigned __int64)&unk_42DFB1);
  qword_4EF218 = 0;
  qword_4EF240 = 0;
  xmmword_4EF1F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3108),
                               (__m128i)(unsigned __int64)"tanh");
  qword_4EF268 = 0;
  qword_4EF278 = 0;
  xmmword_4EF208 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3110),
                               (__m128i)(unsigned __int64)&unk_42DF99);
  qword_4EF290 = 0;
  qword_4EF2A0 = 0;
  xmmword_4EF220 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3118),
                               (__m128i)(unsigned __int64)"tanhl");
  qword_4EF2B8 = 0;
  qword_4EF2C8 = 0;
  xmmword_4EF230 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3120),
                               (__m128i)(unsigned __int64)&unk_42DD81);
  xmmword_4EF248 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3128),
                               (__m128i)(unsigned __int64)"tanl");
  xmmword_4EF258 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3130),
                               (__m128i)(unsigned __int64)&unk_42DD6B);
  xmmword_4EF280 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3138),
                               (__m128i)(unsigned __int64)&unk_42E1C0);
  xmmword_4EF2A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3140),
                               (__m128i)(unsigned __int64)&unk_42DF90);
  qword_4EF2E8 = (__int64)"asinl";
  qword_4EF360 = (__int64)"atan2l";
  xmmword_4EF2D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3148),
                               (__m128i)(unsigned __int64)&unk_42E1A8);
  qword_4EF310 = (__int64)"atan";
  qword_4EF338 = (__int64)"atan2";
  xmmword_4EF2F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3150),
                               (__m128i)(unsigned __int64)&unk_42DF78);
  qword_4EF388 = (__int64)"atanl";
  qword_4EF3B0 = (__int64)"ceil";
  xmmword_4EF320 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3158),
                               (__m128i)(unsigned __int64)&unk_42E190);
  qword_4EF2E0 = 0;
  qword_4EF2F0 = 0;
  xmmword_4EF348 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3160),
                               (__m128i)(unsigned __int64)&unk_42E172);
  qword_4EF308 = 0;
  qword_4EF318 = 0;
  xmmword_4EF370 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3168),
                               (__m128i)(unsigned __int64)&unk_42DF5A);
  qword_4EF330 = 0;
  qword_4EF340 = 0;
  xmmword_4EF398 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3170),
                               (__m128i)(unsigned __int64)&unk_42DF40);
  qword_4EF358 = 0;
  qword_4EF368 = 0;
  xmmword_4EF3C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3178),
                               (__m128i)(unsigned __int64)&unk_42E158);
  qword_4EF380 = 0;
  qword_4EF390 = 0;
  qword_4EF3A8 = 0;
  qword_4EF3B8 = 0;
  qword_4EF3D0 = 0;
  qword_4EF3D8 = (__int64)"ceill";
  qword_4EF400 = (__int64)"cos";
  qword_4EF428 = (__int64)"cosh";
  xmmword_4EF3E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3180),
                               (__m128i)(unsigned __int64)&unk_42DF28);
  qword_4EF450 = (__int64)"coshl";
  qword_4EF478 = (__int64)"cosl";
  xmmword_4EF410 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3188),
                               (__m128i)(unsigned __int64)&unk_42E140);
  qword_4EF4A0 = (__int64)"exp";
  qword_4EF4C8 = (__int64)"expl";
  xmmword_4EF438 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3190),
                               (__m128i)(unsigned __int64)&unk_42E128);
  qword_4EF3E0 = 0;
  qword_4EF3F8 = 0;
  xmmword_4EF460 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3198),
                               (__m128i)(unsigned __int64)&unk_42DF10);
  qword_4EF408 = 0;
  qword_4EF420 = 0;
  xmmword_4EF488 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31A0),
                               (__m128i)(unsigned __int64)&unk_42DEF8);
  qword_4EF430 = 0;
  qword_4EF448 = 0;
  qword_4EF458 = 0;
  qword_4EF470 = 0;
  qword_4EF480 = 0;
  qword_4EF498 = 0;
  qword_4EF4A8 = 0;
  qword_4EF4C0 = 0;
  qword_4EF4D0 = 0;
  xmmword_4EF4B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31A8),
                               (__m128i)(unsigned __int64)&unk_42E110);
  qword_4EF540 = (__int64)"floor";
  qword_4EF4F0 = (__int64)"fabs";
  xmmword_4EF4D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31B0),
                               (__m128i)(unsigned __int64)&unk_42DEE0);
  qword_4EF568 = (__int64)"floorl";
  qword_4EF518 = (__int64)"fabsl";
  xmmword_4EF500 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31B8),
                               (__m128i)(unsigned __int64)&unk_42E0F8);
  qword_4EF590 = (__int64)"fmod";
  qword_4EF4E8 = 0;
  xmmword_4EF528 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31C0),
                               (__m128i)(unsigned __int64)&unk_42DEC8);
  qword_4EF5B8 = (__int64)"fmodl";
  qword_4EF4F8 = 0;
  xmmword_4EF550 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31C8),
                               (__m128i)(unsigned __int64)&unk_42E0E0);
  qword_4EF510 = 0;
  qword_4EF520 = 0;
  xmmword_4EF578 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31D0),
                               (__m128i)(unsigned __int64)&unk_42DEB0);
  qword_4EF538 = 0;
  qword_4EF548 = 0;
  xmmword_4EF5A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31D8),
                               (__m128i)(unsigned __int64)&unk_42E0C2);
  qword_4EF560 = 0;
  qword_4EF570 = 0;
  xmmword_4EF5C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31E0),
                               (__m128i)(unsigned __int64)&unk_42DE92);
  qword_4EF588 = 0;
  qword_4EF598 = 0;
  qword_4EF5B0 = 0;
  qword_4EF5C0 = 0;
  qword_4EF5D8 = 0;
  qword_4EF5E0 = (__int64)"frexp";
  qword_4EF5E8 = 0;
  qword_4EF608 = (__int64)"frexpl";
  xmmword_4EF5F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31E8),
                               (__m128i)(unsigned __int64)&unk_42E098);
  qword_4EF630 = (__int64)"ldexp";
  qword_4EF600 = 0;
  xmmword_4EF618 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31F0),
                               (__m128i)(unsigned __int64)&unk_42DE68);
  qword_4EF658 = (__int64)"ldexpl";
  qword_4EF610 = 0;
  xmmword_4EF640 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E31F8),
                               (__m128i)(unsigned __int64)&unk_42E080);
  qword_4EF680 = (__int64)"log";
  qword_4EF628 = 0;
  xmmword_4EF668 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3200),
                               (__m128i)(unsigned __int64)&unk_42DE50);
  qword_4EF6A8 = (__int64)"log10";
  qword_4EF638 = 0;
  xmmword_4EF690 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3208),
                               (__m128i)(unsigned __int64)&unk_42E058);
  qword_4EF6D0 = (__int64)"log10l";
  qword_4EF650 = 0;
  qword_4EF660 = 0;
  qword_4EF678 = 0;
  qword_4EF688 = 0;
  qword_4EF6A0 = 0;
  qword_4EF6B0 = 0;
  qword_4EF6C8 = 0;
  qword_4EF6D8 = 0;
  xmmword_4EF6B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3210),
                               (__m128i)(unsigned __int64)&unk_42E070);
  qword_4EF6F8 = (__int64)"logl";
  qword_4EF7C0 = (__int64)"sin";
  xmmword_4EF6E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3218),
                               (__m128i)(unsigned __int64)&unk_42DE40);
  qword_4EF720 = (__int64)"modf";
  qword_4EF798 = (__int64)"powl";
  xmmword_4EF708 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3220),
                               (__m128i)(unsigned __int64)&unk_42DE28);
  qword_4EF748 = (__int64)"modfl";
  qword_4EF6F0 = 0;
  xmmword_4EF730 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3228),
                               (__m128i)(unsigned __int64)&unk_42E030);
  qword_4EF770 = (__int64)"pow";
  qword_4EF700 = 0;
  xmmword_4EF758 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3230),
                               (__m128i)(unsigned __int64)&unk_42DE00);
  qword_4EF718 = 0;
  qword_4EF728 = 0;
  xmmword_4EF780 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3238),
                               (__m128i)(unsigned __int64)&unk_42E022);
  qword_4EF740 = 0;
  qword_4EF750 = 0;
  xmmword_4EF7A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3240),
                               (__m128i)(unsigned __int64)&unk_42DDF2);
  qword_4EF768 = 0;
  qword_4EF778 = 0;
  xmmword_4EF7D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3248),
                               (__m128i)(unsigned __int64)&unk_42E008);
  qword_4EF790 = 0;
  qword_4EF7A0 = 0;
  qword_4EF7B8 = 0;
  qword_4EF7C8 = 0;
  qword_4EF7E0 = 0;
  qword_4EF7E8 = (__int64)"sinh";
  qword_4EF810 = (__int64)"sinhl";
  xmmword_4EF7F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3250),
                               (__m128i)(unsigned __int64)&unk_42DFF0);
  qword_4EF838 = (__int64)"sinl";
  qword_4EF860 = (__int64)"sqrt";
  xmmword_4EF820 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3258),
                               (__m128i)(unsigned __int64)&unk_42DDD8);
  qword_4EF888 = (__int64)"sqrtl";
  qword_4EF8B0 = (__int64)"tan";
  xmmword_4EF848 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3260),
                               (__m128i)(unsigned __int64)&unk_42DDC0);
  qword_4EF8D8 = (__int64)"tanh";
  qword_4EF7F0 = 0;
  xmmword_4EF870 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3268),
                               (__m128i)(unsigned __int64)&unk_42DFD8);
  qword_4EF808 = 0;
  qword_4EF818 = 0;
  xmmword_4EF898 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3270),
                               (__m128i)(unsigned __int64)&unk_42DDA8);
  qword_4EF830 = 0;
  qword_4EF840 = 0;
  qword_4EF858 = 0;
  qword_4EF868 = 0;
  qword_4EF880 = 0;
  qword_4EF890 = 0;
  qword_4EF8A8 = 0;
  qword_4EF8B8 = 0;
  qword_4EF8D0 = 0;
  qword_4EF8E0 = 0;
  xmmword_4EF8C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3278),
                               (__m128i)(unsigned __int64)&unk_42DFC0);
  qword_4EF8F8 = 0;
  qword_4EF908 = 0;
  xmmword_4EF8E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3280),
                               (__m128i)(unsigned __int64)&unk_42DFA8);
  qword_4EF920 = 0;
  qword_4EF930 = 0;
  xmmword_4EF910 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3288),
                               (__m128i)(unsigned __int64)&unk_42DD90);
  qword_4EF948 = 0;
  qword_4EF900 = (__int64)"tanhl";
  xmmword_4EF938 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3290),
                               (__m128i)(unsigned __int64)&unk_42DD78);
  qword_4EF928 = (__int64)"tanl";
  __cxa_atexit(sub_3185E0, nullptr, &off_4DBB00);
  xmmword_4EEAE0 = 0;
  *(_QWORD *)&xmmword_4EEAE0 = "__m64";
  qword_4EEB00 = 0;
  qword_4EEB08 = (__int64)"__m128";
  xmmword_4EEAF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E3298),
                               (__m128i)(unsigned __int64)"\bm64_u64\bm64_f32\am64_i8\bm64_i16\bm64_i32\bm64_i64\am64_u8\b"
                                                          "m64_u16\bm64_u32");
  qword_4EEB30 = (__int64)"__m128d";
  qword_4EEB10 = 0;
  xmmword_4EEB18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E32A0),
                               (__m128i)(unsigned __int64)"\tm128_f32\tm128_u64\bm128_i8\tm128_i16\tm128_i32\tm128_i64\bm"
                                                          "128_u8\tm128_u16\tm128_u32");
  qword_4EEB58 = (__int64)"__m128i";
  qword_4EEB28 = 0;
  xmmword_4EEB40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E32A8),
                               (__m128i)(unsigned __int64)"\nm128d_f64");
  qword_4EEB80 = (__int64)"__m256";
  qword_4EEB38 = 0;
  xmmword_4EEB68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E32B0),
                               (__m128i)(unsigned __int64)"\tm128i_i8\n"
                                                          "m128i_i16\n"
                                                          "m128i_i32\n"
                                                          "m128i_i64\tm128i_u8\n"
                                                          "m128i_u16\n"
                                                          "m128i_u32\n"
                                                          "m128i_u64");
  qword_4EEBA8 = (__int64)"__m256d";
  qword_4EEB50 = 0;
  xmmword_4EEB90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E32B8),
                               (__m128i)(unsigned __int64)"\tm256_f32");
  qword_4EEBD0 = (__int64)"__m256i";
  qword_4EEB60 = 0;
  qword_4EEB78 = 0;
  qword_4EEB88 = 0;
  qword_4EEBA0 = 0;
  qword_4EEBB0 = 0;
  qword_4EEBC8 = 0;
  qword_4EEBD8 = 0;
  xmmword_4EEBB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E32C0),
                               (__m128i)(unsigned __int64)"\nm256d_f64");
  qword_4EEBF8 = (__int64)"__m512";
  qword_4EEBF0 = 0;
  xmmword_4EEBE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E32C8),
                               (__m128i)(unsigned __int64)"\tm256i_i8\n"
                                                          "m256i_i16\n"
                                                          "m256i_i32\n"
                                                          "m256i_i64\tm256i_u8\n"
                                                          "m256i_u16\n"
                                                          "m256i_u32\n"
                                                          "m256i_u64");
  qword_4EEC20 = (__int64)"__m512d";
  qword_4EEC00 = 0;
  xmmword_4EEC08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E32D0),
                               (__m128i)(unsigned __int64)"\tm512_f32");
  qword_4EEC48 = (__int64)"__m512i";
  qword_4EEC18 = 0;
  xmmword_4EEC30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4E32D8),
                               (__m128i)(unsigned __int64)"\nm512d_f64");
  qword_4EEC28 = 0;
  qword_4EEC40 = 0;
  qword_4EEC50 = 0;
  qword_4EEC68 = 0;
  xmmword_4EEC58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64(&off_4E32E0),
                               (__m128i)(unsigned __int64)"\tm512i_i8\n"
                                                          "m512i_i16\n"
                                                          "m512i_i32\n"
                                                          "m512i_i64\tm512i_u8\n"
                                                          "m512i_u16\n"
                                                          "m512i_u32\n"
                                                          "m512i_u64");
  return __cxa_atexit(sub_3185A0, nullptr, &off_4DBB00);
}
