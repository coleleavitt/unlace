int sub_61CE0()
{
  char *v1; // [rsp+0h] [rbp-40h] BYREF

  qword_4EAC00 = 0;
  qword_4EAC28 = 0;
  qword_4EAC50 = 0;
  xmmword_4EABE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD550),
                               (__m128i)(unsigned __int64)"acos");
  xmmword_4EABF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD558),
                               (__m128i)(unsigned __int64)&unk_429271);
  xmmword_4EAC08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD560),
                               (__m128i)(unsigned __int64)"acosl");
  xmmword_4EAC18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD568),
                               (__m128i)(unsigned __int64)&unk_429041);
  xmmword_4EAC30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD570),
                               (__m128i)(unsigned __int64)"asin");
  xmmword_4EAC40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD578),
                               (__m128i)(unsigned __int64)&unk_429259);
  xmmword_4EAC58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD580),
                               (__m128i)(unsigned __int64)"asinl");
  xmmword_4EAC68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD588),
                               (__m128i)(unsigned __int64)&unk_429026);
  v1 = "atan2";
  qword_4EAC78 = 0;
  xmmword_4EAC80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD590),
                               (__m128i)(unsigned __int64)"atan");
  qword_4EACA0 = 0;
  qword_4EACC8 = 0;
  xmmword_4EAC90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD598),
                               (__m128i)(unsigned __int64)&unk_42923E);
  qword_4EACF0 = 0;
  qword_4EAD18 = 0;
  xmmword_4EACA8 = (__int128)_mm_loadh_ps((const double *)&v1);
  qword_4EAD40 = 0;
  xmmword_4EACB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5A8),
                               (__m128i)(unsigned __int64)&unk_429221);
  xmmword_4EACD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5B0),
                               (__m128i)(unsigned __int64)"atan2l");
  xmmword_4EACE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5B8),
                               (__m128i)(unsigned __int64)&unk_429009);
  xmmword_4EACF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5C0),
                               (__m128i)(unsigned __int64)"atanl");
  xmmword_4EAD08 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5C8),
                               (__m128i)(unsigned __int64)&unk_428FF1);
  xmmword_4EAD20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5D0),
                               (__m128i)(unsigned __int64)"ceil");
  xmmword_4EAD30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5D8),
                               (__m128i)(unsigned __int64)&unk_429209);
  xmmword_4EAD48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5E0),
                               (__m128i)(unsigned __int64)"ceill");
  xmmword_4EAD58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5E8),
                               (__m128i)(unsigned __int64)&unk_428FD9);
  qword_4EAD68 = 0;
  qword_4EAD90 = 0;
  qword_4EADB8 = 0;
  xmmword_4EAD70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5F0),
                               (__m128i)(unsigned __int64)"cos");
  qword_4EADE0 = 0;
  qword_4EAE08 = 0;
  xmmword_4EAD80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD5F8),
                               (__m128i)(unsigned __int64)&unk_4291F1);
  qword_4EAE30 = 0;
  qword_4EAE58 = 0;
  xmmword_4EAD98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD600),
                               (__m128i)(unsigned __int64)"cosh");
  xmmword_4EADA8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD608),
                               (__m128i)(unsigned __int64)&unk_4291D9);
  xmmword_4EADC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD610),
                               (__m128i)(unsigned __int64)"coshl");
  xmmword_4EADD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD618),
                               (__m128i)(unsigned __int64)&unk_428FC1);
  xmmword_4EADE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD620),
                               (__m128i)(unsigned __int64)"cosl");
  xmmword_4EADF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD628),
                               (__m128i)(unsigned __int64)&unk_428FA9);
  xmmword_4EAE10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD630),
                               (__m128i)(unsigned __int64)"exp");
  xmmword_4EAE20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD638),
                               (__m128i)(unsigned __int64)&unk_4291C1);
  xmmword_4EAE38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD640),
                               (__m128i)(unsigned __int64)"expl");
  xmmword_4EAE48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD648),
                               (__m128i)(unsigned __int64)&unk_428F91);
  xmmword_4EAE60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD650),
                               (__m128i)(unsigned __int64)"fabs");
  qword_4EAE80 = 0;
  qword_4EAEA8 = 0;
  xmmword_4EAE70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD658),
                               (__m128i)(unsigned __int64)&unk_4291A9);
  qword_4EAED0 = 0;
  qword_4EAEF8 = 0;
  xmmword_4EAE88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD660),
                               (__m128i)(unsigned __int64)"fabsl");
  qword_4EAF20 = 0;
  qword_4EAF48 = 0;
  xmmword_4EAE98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD668),
                               (__m128i)(unsigned __int64)&unk_428F79);
  xmmword_4EAEB0 = (__int128)_mm_loadh_ps((const double *)&off_4DD678);
  xmmword_4EAEC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD680),
                               (__m128i)(unsigned __int64)&unk_42918E);
  xmmword_4EAED8 = (__int128)_mm_loadh_ps((const double *)&off_4DD690);
  xmmword_4EAEE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD698),
                               (__m128i)(unsigned __int64)&unk_428F5E);
  xmmword_4EAF00 = (__int128)_mm_loadh_ps((const double *)&off_4DD6A8);
  xmmword_4EAF10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD6B0),
                               (__m128i)(unsigned __int64)&unk_429170);
  xmmword_4EAF28 = (__int128)_mm_loadh_ps((const double *)&off_4DD6C0);
  xmmword_4EAF38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD6C8),
                               (__m128i)(unsigned __int64)&unk_428F40);
  qword_4EAF70 = 0;
  qword_4EAF98 = 0;
  xmmword_4EAF50 = (__int128)_mm_loadh_ps((const double *)&off_4DD6D8);
  qword_4EAFC0 = 0;
  qword_4EAFE8 = 0;
  xmmword_4EAF60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD6E0),
                               (__m128i)(unsigned __int64)&unk_429108);
  qword_4EB010 = 0;
  xmmword_4EAF78 = (__int128)_mm_loadh_ps((const double *)&off_4DD6F0);
  xmmword_4EAF88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD6F8),
                               (__m128i)(unsigned __int64)&unk_429121);
  xmmword_4EAFA0 = (__int128)_mm_loadh_ps((const double *)&off_4DD708);
  xmmword_4EAFB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD710),
                               (__m128i)(unsigned __int64)&unk_428EF1);
  xmmword_4EAFC8 = (__int128)_mm_loadh_ps((const double *)&off_4DD720);
  xmmword_4EAFD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD728),
                               (__m128i)(unsigned __int64)&unk_428ED8);
  xmmword_4EAFF0 = (__int128)_mm_loadh_ps((const double *)&off_4DD738);
  xmmword_4EB000 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD740),
                               (__m128i)(unsigned __int64)&unk_4290D1);
  xmmword_4EB018 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD748),
                               (__m128i)(unsigned __int64)"powl");
  qword_4EB038 = 0;
  qword_4EB060 = 0;
  xmmword_4EB028 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD750),
                               (__m128i)(unsigned __int64)&unk_428EA1);
  qword_4EB088 = 0;
  qword_4EB0B0 = 0;
  xmmword_4EB040 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD758),
                               (__m128i)(unsigned __int64)"sin");
  qword_4EB0D8 = 0;
  qword_4EB100 = 0;
  xmmword_4EB050 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD760),
                               (__m128i)(unsigned __int64)&unk_4290B9);
  xmmword_4EB068 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD768),
                               (__m128i)(unsigned __int64)"sinh");
  xmmword_4EB078 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD770),
                               (__m128i)(unsigned __int64)&unk_4290A1);
  xmmword_4EB090 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD778),
                               (__m128i)(unsigned __int64)"sinhl");
  xmmword_4EB0A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD780),
                               (__m128i)(unsigned __int64)&unk_428E89);
  xmmword_4EB0B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD788),
                               (__m128i)(unsigned __int64)"sinl");
  xmmword_4EB0C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD790),
                               (__m128i)(unsigned __int64)&unk_428E71);
  xmmword_4EB0E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD798),
                               (__m128i)(unsigned __int64)"sqrt");
  xmmword_4EB0F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7A0),
                               (__m128i)(unsigned __int64)&unk_429089);
  xmmword_4EB108 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7A8),
                               (__m128i)(unsigned __int64)"sqrtl");
  xmmword_4EB118 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7B0),
                               (__m128i)(unsigned __int64)&unk_428E59);
  qword_4EB128 = 0;
  qword_4EB1D0 = (__int64)"acos";
  qword_4EB1F8 = (__int64)"acosl";
  xmmword_4EB130 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7B8),
                               (__m128i)(unsigned __int64)"tan");
  qword_4EB220 = (__int64)"asin";
  qword_4EB150 = 0;
  xmmword_4EB140 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7C0),
                               (__m128i)(unsigned __int64)&unk_429071);
  qword_4EB178 = 0;
  qword_4EB1A0 = 0;
  xmmword_4EB158 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7C8),
                               (__m128i)(unsigned __int64)"tanh");
  qword_4EB1C8 = 0;
  qword_4EB1D8 = 0;
  xmmword_4EB168 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7D0),
                               (__m128i)(unsigned __int64)&unk_429059);
  qword_4EB1F0 = 0;
  qword_4EB200 = 0;
  xmmword_4EB180 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7D8),
                               (__m128i)(unsigned __int64)"tanhl");
  qword_4EB218 = 0;
  qword_4EB228 = 0;
  xmmword_4EB190 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7E0),
                               (__m128i)(unsigned __int64)&unk_428E41);
  xmmword_4EB1A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7E8),
                               (__m128i)(unsigned __int64)"tanl");
  xmmword_4EB1B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7F0),
                               (__m128i)(unsigned __int64)&unk_428E2B);
  xmmword_4EB1E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD7F8),
                               (__m128i)(unsigned __int64)&unk_429280);
  xmmword_4EB208 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD800),
                               (__m128i)(unsigned __int64)&unk_429050);
  qword_4EB248 = (__int64)"asinl";
  qword_4EB2C0 = (__int64)"atan2l";
  xmmword_4EB230 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD808),
                               (__m128i)(unsigned __int64)&unk_429268);
  qword_4EB270 = (__int64)"atan";
  qword_4EB298 = (__int64)"atan2";
  xmmword_4EB258 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD810),
                               (__m128i)(unsigned __int64)&unk_429038);
  qword_4EB2E8 = (__int64)"atanl";
  qword_4EB310 = (__int64)"ceil";
  xmmword_4EB280 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD818),
                               (__m128i)(unsigned __int64)&unk_429250);
  qword_4EB240 = 0;
  qword_4EB250 = 0;
  xmmword_4EB2A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD820),
                               (__m128i)(unsigned __int64)&unk_429232);
  qword_4EB268 = 0;
  qword_4EB278 = 0;
  xmmword_4EB2D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD828),
                               (__m128i)(unsigned __int64)&unk_42901A);
  qword_4EB290 = 0;
  qword_4EB2A0 = 0;
  xmmword_4EB2F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD830),
                               (__m128i)(unsigned __int64)&unk_429000);
  qword_4EB2B8 = 0;
  qword_4EB2C8 = 0;
  xmmword_4EB320 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD838),
                               (__m128i)(unsigned __int64)&unk_429218);
  qword_4EB2E0 = 0;
  qword_4EB2F0 = 0;
  qword_4EB308 = 0;
  qword_4EB318 = 0;
  qword_4EB330 = 0;
  qword_4EB338 = (__int64)"ceill";
  qword_4EB360 = (__int64)"cos";
  qword_4EB388 = (__int64)"cosh";
  xmmword_4EB348 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD840),
                               (__m128i)(unsigned __int64)&unk_428FE8);
  qword_4EB3B0 = (__int64)"coshl";
  qword_4EB3D8 = (__int64)"cosl";
  xmmword_4EB370 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD848),
                               (__m128i)(unsigned __int64)&unk_429200);
  qword_4EB400 = (__int64)"exp";
  qword_4EB428 = (__int64)"expl";
  xmmword_4EB398 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD850),
                               (__m128i)(unsigned __int64)&unk_4291E8);
  qword_4EB340 = 0;
  qword_4EB358 = 0;
  xmmword_4EB3C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD858),
                               (__m128i)(unsigned __int64)&unk_428FD0);
  qword_4EB368 = 0;
  qword_4EB380 = 0;
  xmmword_4EB3E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD860),
                               (__m128i)(unsigned __int64)&unk_428FB8);
  qword_4EB390 = 0;
  qword_4EB3A8 = 0;
  qword_4EB3B8 = 0;
  qword_4EB3D0 = 0;
  qword_4EB3E0 = 0;
  qword_4EB3F8 = 0;
  qword_4EB408 = 0;
  qword_4EB420 = 0;
  qword_4EB430 = 0;
  xmmword_4EB410 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD868),
                               (__m128i)(unsigned __int64)&unk_4291D0);
  qword_4EB4A0 = (__int64)"floor";
  qword_4EB450 = (__int64)"fabs";
  xmmword_4EB438 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD870),
                               (__m128i)(unsigned __int64)&unk_428FA0);
  qword_4EB4C8 = (__int64)"floorl";
  qword_4EB478 = (__int64)"fabsl";
  xmmword_4EB460 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD878),
                               (__m128i)(unsigned __int64)&unk_4291B8);
  qword_4EB4F0 = (__int64)"fmod";
  qword_4EB448 = 0;
  xmmword_4EB488 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD880),
                               (__m128i)(unsigned __int64)&unk_428F88);
  qword_4EB518 = (__int64)"fmodl";
  qword_4EB458 = 0;
  xmmword_4EB4B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD888),
                               (__m128i)(unsigned __int64)&unk_4291A0);
  qword_4EB470 = 0;
  qword_4EB480 = 0;
  xmmword_4EB4D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD890),
                               (__m128i)(unsigned __int64)&unk_428F70);
  qword_4EB498 = 0;
  qword_4EB4A8 = 0;
  xmmword_4EB500 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD898),
                               (__m128i)(unsigned __int64)&unk_429182);
  qword_4EB4C0 = 0;
  qword_4EB4D0 = 0;
  xmmword_4EB528 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8A0),
                               (__m128i)(unsigned __int64)&unk_428F52);
  qword_4EB4E8 = 0;
  qword_4EB4F8 = 0;
  qword_4EB510 = 0;
  qword_4EB520 = 0;
  qword_4EB538 = 0;
  qword_4EB540 = (__int64)"frexp";
  qword_4EB548 = 0;
  qword_4EB568 = (__int64)"frexpl";
  xmmword_4EB550 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8A8),
                               (__m128i)(unsigned __int64)&unk_429158);
  qword_4EB590 = (__int64)"ldexp";
  qword_4EB560 = 0;
  xmmword_4EB578 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8B0),
                               (__m128i)(unsigned __int64)&unk_428F28);
  qword_4EB5B8 = (__int64)"ldexpl";
  qword_4EB570 = 0;
  xmmword_4EB5A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8B8),
                               (__m128i)(unsigned __int64)&unk_429140);
  qword_4EB5E0 = (__int64)"log";
  qword_4EB588 = 0;
  xmmword_4EB5C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8C0),
                               (__m128i)(unsigned __int64)&unk_428F10);
  qword_4EB608 = (__int64)"log10";
  qword_4EB598 = 0;
  xmmword_4EB5F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8C8),
                               (__m128i)(unsigned __int64)&unk_429118);
  qword_4EB630 = (__int64)"log10l";
  qword_4EB5B0 = 0;
  qword_4EB5C0 = 0;
  qword_4EB5D8 = 0;
  qword_4EB5E8 = 0;
  qword_4EB600 = 0;
  qword_4EB610 = 0;
  qword_4EB628 = 0;
  qword_4EB638 = 0;
  xmmword_4EB618 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8D0),
                               (__m128i)(unsigned __int64)&unk_429130);
  qword_4EB658 = (__int64)"logl";
  qword_4EB720 = (__int64)"sin";
  xmmword_4EB640 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8D8),
                               (__m128i)(unsigned __int64)&unk_428F00);
  qword_4EB680 = (__int64)"modf";
  qword_4EB6F8 = (__int64)"powl";
  xmmword_4EB668 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8E0),
                               (__m128i)(unsigned __int64)&unk_428EE8);
  qword_4EB6A8 = (__int64)"modfl";
  qword_4EB650 = 0;
  xmmword_4EB690 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8E8),
                               (__m128i)(unsigned __int64)&unk_4290F0);
  qword_4EB6D0 = (__int64)"pow";
  qword_4EB660 = 0;
  xmmword_4EB6B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8F0),
                               (__m128i)(unsigned __int64)&unk_428EC0);
  qword_4EB678 = 0;
  qword_4EB688 = 0;
  xmmword_4EB6E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD8F8),
                               (__m128i)(unsigned __int64)&unk_4290E2);
  qword_4EB6A0 = 0;
  qword_4EB6B0 = 0;
  xmmword_4EB708 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD900),
                               (__m128i)(unsigned __int64)&unk_428EB2);
  qword_4EB6C8 = 0;
  qword_4EB6D8 = 0;
  xmmword_4EB730 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD908),
                               (__m128i)(unsigned __int64)&unk_4290C8);
  qword_4EB6F0 = 0;
  qword_4EB700 = 0;
  qword_4EB718 = 0;
  qword_4EB728 = 0;
  qword_4EB740 = 0;
  qword_4EB748 = (__int64)"sinh";
  qword_4EB770 = (__int64)"sinhl";
  xmmword_4EB758 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD910),
                               (__m128i)(unsigned __int64)&unk_4290B0);
  qword_4EB798 = (__int64)"sinl";
  qword_4EB7C0 = (__int64)"sqrt";
  xmmword_4EB780 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD918),
                               (__m128i)(unsigned __int64)&unk_428E98);
  qword_4EB7E8 = (__int64)"sqrtl";
  qword_4EB810 = (__int64)"tan";
  xmmword_4EB7A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD920),
                               (__m128i)(unsigned __int64)&unk_428E80);
  qword_4EB838 = (__int64)"tanh";
  qword_4EB750 = 0;
  xmmword_4EB7D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD928),
                               (__m128i)(unsigned __int64)&unk_429098);
  qword_4EB768 = 0;
  qword_4EB778 = 0;
  xmmword_4EB7F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD930),
                               (__m128i)(unsigned __int64)&unk_428E68);
  qword_4EB790 = 0;
  qword_4EB7A0 = 0;
  qword_4EB7B8 = 0;
  qword_4EB7C8 = 0;
  qword_4EB7E0 = 0;
  qword_4EB7F0 = 0;
  qword_4EB808 = 0;
  qword_4EB818 = 0;
  qword_4EB830 = 0;
  qword_4EB840 = 0;
  xmmword_4EB820 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD938),
                               (__m128i)(unsigned __int64)&unk_429080);
  qword_4EB858 = 0;
  qword_4EB868 = 0;
  xmmword_4EB848 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD940),
                               (__m128i)(unsigned __int64)&unk_429068);
  qword_4EB880 = 0;
  qword_4EB890 = 0;
  xmmword_4EB870 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD948),
                               (__m128i)(unsigned __int64)&unk_428E50);
  qword_4EB8A8 = 0;
  qword_4EB860 = (__int64)"tanhl";
  xmmword_4EB898 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD950),
                               (__m128i)(unsigned __int64)&unk_428E38);
  qword_4EB888 = (__int64)"tanl";
  __cxa_atexit(sub_3189A0, nullptr, &off_4D61C0);
  xmmword_4EAA40 = 0;
  *(_QWORD *)&xmmword_4EAA40 = "__m64";
  qword_4EAA60 = 0;
  qword_4EAA68 = (__int64)"__m128";
  xmmword_4EAA50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD958),
                               (__m128i)(unsigned __int64)"\bm64_u64\bm64_f32\am64_i8\bm64_i16\bm64_i32\bm64_i64\am64_u8\b"
                                                          "m64_u16\bm64_u32");
  qword_4EAA90 = (__int64)"__m128d";
  qword_4EAA70 = 0;
  xmmword_4EAA78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD960),
                               (__m128i)(unsigned __int64)"\tm128_f32\tm128_u64\bm128_i8\tm128_i16\tm128_i32\tm128_i64\bm"
                                                          "128_u8\tm128_u16\tm128_u32");
  qword_4EAAB8 = (__int64)"__m128i";
  qword_4EAA88 = 0;
  xmmword_4EAAA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD968),
                               (__m128i)(unsigned __int64)"\nm128d_f64");
  qword_4EAAE0 = (__int64)"__m256";
  qword_4EAA98 = 0;
  xmmword_4EAAC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD970),
                               (__m128i)(unsigned __int64)"\tm128i_i8\n"
                                                          "m128i_i16\n"
                                                          "m128i_i32\n"
                                                          "m128i_i64\tm128i_u8\n"
                                                          "m128i_u16\n"
                                                          "m128i_u32\n"
                                                          "m128i_u64");
  qword_4EAB08 = (__int64)"__m256d";
  qword_4EAAB0 = 0;
  xmmword_4EAAF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD978),
                               (__m128i)(unsigned __int64)"\tm256_f32");
  qword_4EAB30 = (__int64)"__m256i";
  qword_4EAAC0 = 0;
  qword_4EAAD8 = 0;
  qword_4EAAE8 = 0;
  qword_4EAB00 = 0;
  qword_4EAB10 = 0;
  qword_4EAB28 = 0;
  qword_4EAB38 = 0;
  xmmword_4EAB18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD980),
                               (__m128i)(unsigned __int64)"\nm256d_f64");
  qword_4EAB58 = (__int64)"__m512";
  qword_4EAB50 = 0;
  xmmword_4EAB40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD988),
                               (__m128i)(unsigned __int64)"\tm256i_i8\n"
                                                          "m256i_i16\n"
                                                          "m256i_i32\n"
                                                          "m256i_i64\tm256i_u8\n"
                                                          "m256i_u16\n"
                                                          "m256i_u32\n"
                                                          "m256i_u64");
  qword_4EAB80 = (__int64)"__m512d";
  qword_4EAB60 = 0;
  xmmword_4EAB68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD990),
                               (__m128i)(unsigned __int64)"\tm512_f32");
  qword_4EABA8 = (__int64)"__m512i";
  qword_4EAB78 = 0;
  xmmword_4EAB90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4DD998),
                               (__m128i)(unsigned __int64)"\nm512d_f64");
  qword_4EAB88 = 0;
  qword_4EABA0 = 0;
  qword_4EABB0 = 0;
  qword_4EABC8 = 0;
  xmmword_4EABB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64(&off_4DD9A0),
                               (__m128i)(unsigned __int64)"\tm512i_i8\n"
                                                          "m512i_i16\n"
                                                          "m512i_i32\n"
                                                          "m512i_i64\tm512i_u8\n"
                                                          "m512i_u16\n"
                                                          "m512i_u32\n"
                                                          "m512i_u64");
  return __cxa_atexit(sub_318960, nullptr, &off_4D61C0);
}
