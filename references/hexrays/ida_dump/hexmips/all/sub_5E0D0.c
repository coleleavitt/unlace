int sub_5E0D0()
{
  char *v1; // [rsp+0h] [rbp-40h] BYREF

  qword_4CEC00 = 0;
  qword_4CEC28 = 0;
  qword_4CEC50 = 0;
  xmmword_4CEBE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C35A8),
                               (__m128i)(unsigned __int64)"acos");
  xmmword_4CEBF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C35B0),
                               (__m128i)(unsigned __int64)&unk_410BB1);
  xmmword_4CEC08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C35B8),
                               (__m128i)(unsigned __int64)"acosl");
  xmmword_4CEC18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C35C0),
                               (__m128i)(unsigned __int64)&unk_410981);
  xmmword_4CEC30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C35C8),
                               (__m128i)(unsigned __int64)"asin");
  xmmword_4CEC40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C35D0),
                               (__m128i)(unsigned __int64)&unk_410B99);
  xmmword_4CEC58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C35D8),
                               (__m128i)(unsigned __int64)"asinl");
  xmmword_4CEC68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C35E0),
                               (__m128i)(unsigned __int64)&unk_410966);
  v1 = "atan2";
  qword_4CEC78 = 0;
  xmmword_4CEC80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C35E8),
                               (__m128i)(unsigned __int64)"atan");
  qword_4CECA0 = 0;
  qword_4CECC8 = 0;
  xmmword_4CEC90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C35F0),
                               (__m128i)(unsigned __int64)&unk_410B7E);
  qword_4CECF0 = 0;
  qword_4CED18 = 0;
  xmmword_4CECA8 = (__int128)_mm_loadh_ps((const double *)&v1);
  qword_4CED40 = 0;
  xmmword_4CECB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3600),
                               (__m128i)(unsigned __int64)&unk_410B61);
  xmmword_4CECD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3608),
                               (__m128i)(unsigned __int64)"atan2l");
  xmmword_4CECE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3610),
                               (__m128i)(unsigned __int64)&unk_410949);
  xmmword_4CECF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3618),
                               (__m128i)(unsigned __int64)"atanl");
  xmmword_4CED08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3620),
                               (__m128i)(unsigned __int64)&unk_410931);
  xmmword_4CED20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3628),
                               (__m128i)(unsigned __int64)"ceil");
  xmmword_4CED30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3630),
                               (__m128i)(unsigned __int64)&unk_410B49);
  xmmword_4CED48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3638),
                               (__m128i)(unsigned __int64)"ceill");
  xmmword_4CED58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3640),
                               (__m128i)(unsigned __int64)&unk_410919);
  qword_4CED68 = 0;
  qword_4CED90 = 0;
  qword_4CEDB8 = 0;
  xmmword_4CED70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3648),
                               (__m128i)(unsigned __int64)"cos");
  qword_4CEDE0 = 0;
  qword_4CEE08 = 0;
  xmmword_4CED80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3650),
                               (__m128i)(unsigned __int64)&unk_410B31);
  qword_4CEE30 = 0;
  qword_4CEE58 = 0;
  xmmword_4CED98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3658),
                               (__m128i)(unsigned __int64)"cosh");
  xmmword_4CEDA8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3660),
                               (__m128i)(unsigned __int64)&unk_410B19);
  xmmword_4CEDC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3668),
                               (__m128i)(unsigned __int64)"coshl");
  xmmword_4CEDD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3670),
                               (__m128i)(unsigned __int64)&unk_410901);
  xmmword_4CEDE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3678),
                               (__m128i)(unsigned __int64)"cosl");
  xmmword_4CEDF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3680),
                               (__m128i)(unsigned __int64)&unk_4108E9);
  xmmword_4CEE10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3688),
                               (__m128i)(unsigned __int64)"exp");
  xmmword_4CEE20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3690),
                               (__m128i)(unsigned __int64)&unk_410B01);
  xmmword_4CEE38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3698),
                               (__m128i)(unsigned __int64)"expl");
  xmmword_4CEE48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C36A0),
                               (__m128i)(unsigned __int64)&unk_4108D1);
  xmmword_4CEE60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C36A8),
                               (__m128i)(unsigned __int64)"fabs");
  qword_4CEE80 = 0;
  qword_4CEEA8 = 0;
  xmmword_4CEE70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C36B0),
                               (__m128i)(unsigned __int64)&unk_410AE9);
  qword_4CEED0 = 0;
  qword_4CEEF8 = 0;
  xmmword_4CEE88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C36B8),
                               (__m128i)(unsigned __int64)"fabsl");
  qword_4CEF20 = 0;
  qword_4CEF48 = 0;
  xmmword_4CEE98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C36C0),
                               (__m128i)(unsigned __int64)&unk_4108B9);
  xmmword_4CEEB0 = (__int128)_mm_loadh_ps((const double *)&off_4C36D0);
  xmmword_4CEEC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C36D8),
                               (__m128i)(unsigned __int64)&unk_410ACE);
  xmmword_4CEED8 = (__int128)_mm_loadh_ps((const double *)&off_4C36E8);
  xmmword_4CEEE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C36F0),
                               (__m128i)(unsigned __int64)&unk_41089E);
  xmmword_4CEF00 = (__int128)_mm_loadh_ps((const double *)&off_4C3700);
  xmmword_4CEF10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3708),
                               (__m128i)(unsigned __int64)&unk_410AB0);
  xmmword_4CEF28 = (__int128)_mm_loadh_ps((const double *)&off_4C3718);
  xmmword_4CEF38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3720),
                               (__m128i)(unsigned __int64)&unk_410880);
  qword_4CEF70 = 0;
  qword_4CEF98 = 0;
  xmmword_4CEF50 = (__int128)_mm_loadh_ps((const double *)&off_4C3730);
  qword_4CEFC0 = 0;
  qword_4CEFE8 = 0;
  xmmword_4CEF60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3738),
                               (__m128i)(unsigned __int64)&unk_410A48);
  qword_4CF010 = 0;
  xmmword_4CEF78 = (__int128)_mm_loadh_ps((const double *)&off_4C3748);
  xmmword_4CEF88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3750),
                               (__m128i)(unsigned __int64)&unk_410A61);
  xmmword_4CEFA0 = (__int128)_mm_loadh_ps((const double *)&off_4C3760);
  xmmword_4CEFB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3768),
                               (__m128i)(unsigned __int64)&unk_410831);
  xmmword_4CEFC8 = (__int128)_mm_loadh_ps((const double *)&off_4C3778);
  xmmword_4CEFD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3780),
                               (__m128i)(unsigned __int64)&unk_410818);
  xmmword_4CEFF0 = (__int128)_mm_loadh_ps((const double *)&off_4C3790);
  xmmword_4CF000 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3798),
                               (__m128i)(unsigned __int64)&unk_410A11);
  xmmword_4CF018 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37A0),
                               (__m128i)(unsigned __int64)"powl");
  qword_4CF038 = 0;
  qword_4CF060 = 0;
  xmmword_4CF028 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37A8),
                               (__m128i)(unsigned __int64)&unk_4107E1);
  qword_4CF088 = 0;
  qword_4CF0B0 = 0;
  xmmword_4CF040 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37B0),
                               (__m128i)(unsigned __int64)"sin");
  qword_4CF0D8 = 0;
  qword_4CF100 = 0;
  xmmword_4CF050 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37B8),
                               (__m128i)(unsigned __int64)&unk_4109F9);
  xmmword_4CF068 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37C0),
                               (__m128i)(unsigned __int64)"sinh");
  xmmword_4CF078 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37C8),
                               (__m128i)(unsigned __int64)&unk_4109E1);
  xmmword_4CF090 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37D0),
                               (__m128i)(unsigned __int64)"sinhl");
  xmmword_4CF0A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37D8),
                               (__m128i)(unsigned __int64)&unk_4107C9);
  xmmword_4CF0B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37E0),
                               (__m128i)(unsigned __int64)"sinl");
  xmmword_4CF0C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37E8),
                               (__m128i)(unsigned __int64)&unk_4107B1);
  xmmword_4CF0E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37F0),
                               (__m128i)(unsigned __int64)"sqrt");
  xmmword_4CF0F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C37F8),
                               (__m128i)(unsigned __int64)&unk_4109C9);
  xmmword_4CF108 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3800),
                               (__m128i)(unsigned __int64)"sqrtl");
  xmmword_4CF118 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3808),
                               (__m128i)(unsigned __int64)&unk_410799);
  qword_4CF128 = 0;
  qword_4CF1D0 = (__int64)"acos";
  qword_4CF1F8 = (__int64)"acosl";
  xmmword_4CF130 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3810),
                               (__m128i)(unsigned __int64)"tan");
  qword_4CF220 = (__int64)"asin";
  qword_4CF150 = 0;
  xmmword_4CF140 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3818),
                               (__m128i)(unsigned __int64)&unk_4109B1);
  qword_4CF178 = 0;
  qword_4CF1A0 = 0;
  xmmword_4CF158 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3820),
                               (__m128i)(unsigned __int64)"tanh");
  qword_4CF1C8 = 0;
  qword_4CF1D8 = 0;
  xmmword_4CF168 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3828),
                               (__m128i)(unsigned __int64)&unk_410999);
  qword_4CF1F0 = 0;
  qword_4CF200 = 0;
  xmmword_4CF180 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3830),
                               (__m128i)(unsigned __int64)"tanhl");
  qword_4CF218 = 0;
  qword_4CF228 = 0;
  xmmword_4CF190 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3838),
                               (__m128i)(unsigned __int64)&unk_410781);
  xmmword_4CF1A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3840),
                               (__m128i)(unsigned __int64)"tanl");
  xmmword_4CF1B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3848),
                               (__m128i)(unsigned __int64)&unk_41076B);
  xmmword_4CF1E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3850),
                               (__m128i)(unsigned __int64)&unk_410BC0);
  xmmword_4CF208 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3858),
                               (__m128i)(unsigned __int64)&unk_410990);
  qword_4CF248 = (__int64)"asinl";
  qword_4CF2C0 = (__int64)"atan2l";
  xmmword_4CF230 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3860),
                               (__m128i)(unsigned __int64)&unk_410BA8);
  qword_4CF270 = (__int64)"atan";
  qword_4CF298 = (__int64)"atan2";
  xmmword_4CF258 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3868),
                               (__m128i)(unsigned __int64)&unk_410978);
  qword_4CF2E8 = (__int64)"atanl";
  qword_4CF310 = (__int64)"ceil";
  xmmword_4CF280 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3870),
                               (__m128i)(unsigned __int64)&unk_410B90);
  qword_4CF240 = 0;
  qword_4CF250 = 0;
  xmmword_4CF2A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3878),
                               (__m128i)(unsigned __int64)&unk_410B72);
  qword_4CF268 = 0;
  qword_4CF278 = 0;
  xmmword_4CF2D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3880),
                               (__m128i)(unsigned __int64)&unk_41095A);
  qword_4CF290 = 0;
  qword_4CF2A0 = 0;
  xmmword_4CF2F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3888),
                               (__m128i)(unsigned __int64)&unk_410940);
  qword_4CF2B8 = 0;
  qword_4CF2C8 = 0;
  xmmword_4CF320 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3890),
                               (__m128i)(unsigned __int64)&unk_410B58);
  qword_4CF2E0 = 0;
  qword_4CF2F0 = 0;
  qword_4CF308 = 0;
  qword_4CF318 = 0;
  qword_4CF330 = 0;
  qword_4CF338 = (__int64)"ceill";
  qword_4CF360 = (__int64)"cos";
  qword_4CF388 = (__int64)"cosh";
  xmmword_4CF348 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3898),
                               (__m128i)(unsigned __int64)&unk_410928);
  qword_4CF3B0 = (__int64)"coshl";
  qword_4CF3D8 = (__int64)"cosl";
  xmmword_4CF370 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38A0),
                               (__m128i)(unsigned __int64)&unk_410B40);
  qword_4CF400 = (__int64)"exp";
  qword_4CF428 = (__int64)"expl";
  xmmword_4CF398 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38A8),
                               (__m128i)(unsigned __int64)&unk_410B28);
  qword_4CF340 = 0;
  qword_4CF358 = 0;
  xmmword_4CF3C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38B0),
                               (__m128i)(unsigned __int64)&unk_410910);
  qword_4CF368 = 0;
  qword_4CF380 = 0;
  xmmword_4CF3E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38B8),
                               (__m128i)(unsigned __int64)&unk_4108F8);
  qword_4CF390 = 0;
  qword_4CF3A8 = 0;
  qword_4CF3B8 = 0;
  qword_4CF3D0 = 0;
  qword_4CF3E0 = 0;
  qword_4CF3F8 = 0;
  qword_4CF408 = 0;
  qword_4CF420 = 0;
  qword_4CF430 = 0;
  xmmword_4CF410 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38C0),
                               (__m128i)(unsigned __int64)&unk_410B10);
  qword_4CF4A0 = (__int64)"floor";
  qword_4CF450 = (__int64)"fabs";
  xmmword_4CF438 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38C8),
                               (__m128i)(unsigned __int64)&unk_4108E0);
  qword_4CF4C8 = (__int64)"floorl";
  qword_4CF478 = (__int64)"fabsl";
  xmmword_4CF460 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38D0),
                               (__m128i)(unsigned __int64)&unk_410AF8);
  qword_4CF4F0 = (__int64)"fmod";
  qword_4CF448 = 0;
  xmmword_4CF488 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38D8),
                               (__m128i)(unsigned __int64)&unk_4108C8);
  qword_4CF518 = (__int64)"fmodl";
  qword_4CF458 = 0;
  xmmword_4CF4B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38E0),
                               (__m128i)(unsigned __int64)&unk_410AE0);
  qword_4CF470 = 0;
  qword_4CF480 = 0;
  xmmword_4CF4D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38E8),
                               (__m128i)(unsigned __int64)&unk_4108B0);
  qword_4CF498 = 0;
  qword_4CF4A8 = 0;
  xmmword_4CF500 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38F0),
                               (__m128i)(unsigned __int64)&unk_410AC2);
  qword_4CF4C0 = 0;
  qword_4CF4D0 = 0;
  xmmword_4CF528 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C38F8),
                               (__m128i)(unsigned __int64)&unk_410892);
  qword_4CF4E8 = 0;
  qword_4CF4F8 = 0;
  qword_4CF510 = 0;
  qword_4CF520 = 0;
  qword_4CF538 = 0;
  qword_4CF540 = (__int64)"frexp";
  qword_4CF548 = 0;
  qword_4CF568 = (__int64)"frexpl";
  xmmword_4CF550 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3900),
                               (__m128i)(unsigned __int64)&unk_410A98);
  qword_4CF590 = (__int64)"ldexp";
  qword_4CF560 = 0;
  xmmword_4CF578 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3908),
                               (__m128i)(unsigned __int64)&unk_410868);
  qword_4CF5B8 = (__int64)"ldexpl";
  qword_4CF570 = 0;
  xmmword_4CF5A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3910),
                               (__m128i)(unsigned __int64)&unk_410A80);
  qword_4CF5E0 = (__int64)"log";
  qword_4CF588 = 0;
  xmmword_4CF5C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3918),
                               (__m128i)(unsigned __int64)&unk_410850);
  qword_4CF608 = (__int64)"log10";
  qword_4CF598 = 0;
  xmmword_4CF5F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3920),
                               (__m128i)(unsigned __int64)&unk_410A58);
  qword_4CF630 = (__int64)"log10l";
  qword_4CF5B0 = 0;
  qword_4CF5C0 = 0;
  qword_4CF5D8 = 0;
  qword_4CF5E8 = 0;
  qword_4CF600 = 0;
  qword_4CF610 = 0;
  qword_4CF628 = 0;
  qword_4CF638 = 0;
  xmmword_4CF618 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3928),
                               (__m128i)(unsigned __int64)&unk_410A70);
  qword_4CF658 = (__int64)"logl";
  qword_4CF720 = (__int64)"sin";
  xmmword_4CF640 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3930),
                               (__m128i)(unsigned __int64)&unk_410840);
  qword_4CF680 = (__int64)"modf";
  qword_4CF6F8 = (__int64)"powl";
  xmmword_4CF668 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3938),
                               (__m128i)(unsigned __int64)&unk_410828);
  qword_4CF6A8 = (__int64)"modfl";
  qword_4CF650 = 0;
  xmmword_4CF690 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3940),
                               (__m128i)(unsigned __int64)&unk_410A30);
  qword_4CF6D0 = (__int64)"pow";
  qword_4CF660 = 0;
  xmmword_4CF6B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3948),
                               (__m128i)(unsigned __int64)&unk_410800);
  qword_4CF678 = 0;
  qword_4CF688 = 0;
  xmmword_4CF6E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3950),
                               (__m128i)(unsigned __int64)&unk_410A22);
  qword_4CF6A0 = 0;
  qword_4CF6B0 = 0;
  xmmword_4CF708 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3958),
                               (__m128i)(unsigned __int64)&unk_4107F2);
  qword_4CF6C8 = 0;
  qword_4CF6D8 = 0;
  xmmword_4CF730 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3960),
                               (__m128i)(unsigned __int64)&unk_410A08);
  qword_4CF6F0 = 0;
  qword_4CF700 = 0;
  qword_4CF718 = 0;
  qword_4CF728 = 0;
  qword_4CF740 = 0;
  qword_4CF748 = (__int64)"sinh";
  qword_4CF770 = (__int64)"sinhl";
  xmmword_4CF758 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3968),
                               (__m128i)(unsigned __int64)&unk_4109F0);
  qword_4CF798 = (__int64)"sinl";
  qword_4CF7C0 = (__int64)"sqrt";
  xmmword_4CF780 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3970),
                               (__m128i)(unsigned __int64)&unk_4107D8);
  qword_4CF7E8 = (__int64)"sqrtl";
  qword_4CF810 = (__int64)"tan";
  xmmword_4CF7A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3978),
                               (__m128i)(unsigned __int64)&unk_4107C0);
  qword_4CF838 = (__int64)"tanh";
  qword_4CF750 = 0;
  xmmword_4CF7D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3980),
                               (__m128i)(unsigned __int64)&unk_4109D8);
  qword_4CF768 = 0;
  qword_4CF778 = 0;
  xmmword_4CF7F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3988),
                               (__m128i)(unsigned __int64)&unk_4107A8);
  qword_4CF790 = 0;
  qword_4CF7A0 = 0;
  qword_4CF7B8 = 0;
  qword_4CF7C8 = 0;
  qword_4CF7E0 = 0;
  qword_4CF7F0 = 0;
  qword_4CF808 = 0;
  qword_4CF818 = 0;
  qword_4CF830 = 0;
  qword_4CF840 = 0;
  xmmword_4CF820 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3990),
                               (__m128i)(unsigned __int64)&unk_4109C0);
  qword_4CF858 = 0;
  qword_4CF868 = 0;
  xmmword_4CF848 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C3998),
                               (__m128i)(unsigned __int64)&unk_4109A8);
  qword_4CF880 = 0;
  qword_4CF890 = 0;
  xmmword_4CF870 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39A0),
                               (__m128i)(unsigned __int64)&unk_410790);
  qword_4CF8A8 = 0;
  qword_4CF860 = (__int64)"tanhl";
  xmmword_4CF898 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39A8),
                               (__m128i)(unsigned __int64)&unk_410778);
  qword_4CF888 = (__int64)"tanl";
  __cxa_atexit(sub_313860, nullptr, &off_4BC280);
  xmmword_4CEA40 = 0;
  *(_QWORD *)&xmmword_4CEA40 = "__m64";
  qword_4CEA60 = 0;
  qword_4CEA68 = (__int64)"__m128";
  xmmword_4CEA50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39B0),
                               (__m128i)(unsigned __int64)"\bm64_u64\bm64_f32\am64_i8\bm64_i16\bm64_i32\bm64_i64\am64_u8\b"
                                                          "m64_u16\bm64_u32");
  qword_4CEA90 = (__int64)"__m128d";
  qword_4CEA70 = 0;
  xmmword_4CEA78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39B8),
                               (__m128i)(unsigned __int64)"\tm128_f32\tm128_u64\bm128_i8\tm128_i16\tm128_i32\tm128_i64\bm"
                                                          "128_u8\tm128_u16\tm128_u32");
  qword_4CEAB8 = (__int64)"__m128i";
  qword_4CEA88 = 0;
  xmmword_4CEAA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39C0),
                               (__m128i)(unsigned __int64)"\nm128d_f64");
  qword_4CEAE0 = (__int64)"__m256";
  qword_4CEA98 = 0;
  xmmword_4CEAC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39C8),
                               (__m128i)(unsigned __int64)"\tm128i_i8\n"
                                                          "m128i_i16\n"
                                                          "m128i_i32\n"
                                                          "m128i_i64\tm128i_u8\n"
                                                          "m128i_u16\n"
                                                          "m128i_u32\n"
                                                          "m128i_u64");
  qword_4CEB08 = (__int64)"__m256d";
  qword_4CEAB0 = 0;
  xmmword_4CEAF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39D0),
                               (__m128i)(unsigned __int64)"\tm256_f32");
  qword_4CEB30 = (__int64)"__m256i";
  qword_4CEAC0 = 0;
  qword_4CEAD8 = 0;
  qword_4CEAE8 = 0;
  qword_4CEB00 = 0;
  qword_4CEB10 = 0;
  qword_4CEB28 = 0;
  qword_4CEB38 = 0;
  xmmword_4CEB18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39D8),
                               (__m128i)(unsigned __int64)"\nm256d_f64");
  qword_4CEB58 = (__int64)"__m512";
  qword_4CEB50 = 0;
  xmmword_4CEB40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39E0),
                               (__m128i)(unsigned __int64)"\tm256i_i8\n"
                                                          "m256i_i16\n"
                                                          "m256i_i32\n"
                                                          "m256i_i64\tm256i_u8\n"
                                                          "m256i_u16\n"
                                                          "m256i_u32\n"
                                                          "m256i_u64");
  qword_4CEB80 = (__int64)"__m512d";
  qword_4CEB60 = 0;
  xmmword_4CEB68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39E8),
                               (__m128i)(unsigned __int64)"\tm512_f32");
  qword_4CEBA8 = (__int64)"__m512i";
  qword_4CEB78 = 0;
  xmmword_4CEB90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4C39F0),
                               (__m128i)(unsigned __int64)"\nm512d_f64");
  qword_4CEB88 = 0;
  qword_4CEBA0 = 0;
  qword_4CEBB0 = 0;
  qword_4CEBC8 = 0;
  xmmword_4CEBB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64(&off_4C39F8),
                               (__m128i)(unsigned __int64)"\tm512i_i8\n"
                                                          "m512i_i16\n"
                                                          "m512i_i32\n"
                                                          "m512i_i64\tm512i_u8\n"
                                                          "m512i_u16\n"
                                                          "m512i_u32\n"
                                                          "m512i_u64");
  return __cxa_atexit(sub_313820, nullptr, &off_4BC280);
}
