int sub_5E8A0()
{
  char *v1; // [rsp+0h] [rbp-40h] BYREF

  qword_4DBBE0 = 0;
  qword_4DBC08 = 0;
  qword_4DBC30 = 0;
  xmmword_4DBBC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFF88),
                               (__m128i)(unsigned __int64)"acos");
  xmmword_4DBBD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFF90),
                               (__m128i)(unsigned __int64)&unk_41B551);
  xmmword_4DBBE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFF98),
                               (__m128i)(unsigned __int64)"acosl");
  xmmword_4DBBF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFA0),
                               (__m128i)(unsigned __int64)&unk_41B321);
  xmmword_4DBC10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFA8),
                               (__m128i)(unsigned __int64)"asin");
  xmmword_4DBC20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFB0),
                               (__m128i)(unsigned __int64)&unk_41B539);
  xmmword_4DBC38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFB8),
                               (__m128i)(unsigned __int64)"asinl");
  xmmword_4DBC48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFC0),
                               (__m128i)(unsigned __int64)&unk_41B306);
  v1 = "atan2";
  qword_4DBC58 = 0;
  xmmword_4DBC60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFC8),
                               (__m128i)(unsigned __int64)"atan");
  qword_4DBC80 = 0;
  qword_4DBCA8 = 0;
  xmmword_4DBC70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFD0),
                               (__m128i)(unsigned __int64)&unk_41B51E);
  qword_4DBCD0 = 0;
  qword_4DBCF8 = 0;
  xmmword_4DBC88 = (__int128)_mm_loadh_ps((const double *)&v1);
  qword_4DBD20 = 0;
  xmmword_4DBC98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFE0),
                               (__m128i)(unsigned __int64)&unk_41B501);
  xmmword_4DBCB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFE8),
                               (__m128i)(unsigned __int64)"atan2l");
  xmmword_4DBCC0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFF0),
                               (__m128i)(unsigned __int64)&unk_41B2E9);
  xmmword_4DBCD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4CFFF8),
                               (__m128i)(unsigned __int64)"atanl");
  xmmword_4DBCE8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0000),
                               (__m128i)(unsigned __int64)&unk_41B2D1);
  xmmword_4DBD00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0008),
                               (__m128i)(unsigned __int64)"ceil");
  xmmword_4DBD10 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0010),
                               (__m128i)(unsigned __int64)&unk_41B4E9);
  xmmword_4DBD28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0018),
                               (__m128i)(unsigned __int64)"ceill");
  xmmword_4DBD38 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0020),
                               (__m128i)(unsigned __int64)&unk_41B2B9);
  qword_4DBD48 = 0;
  qword_4DBD70 = 0;
  qword_4DBD98 = 0;
  xmmword_4DBD50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0028),
                               (__m128i)(unsigned __int64)"cos");
  qword_4DBDC0 = 0;
  qword_4DBDE8 = 0;
  xmmword_4DBD60 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0030),
                               (__m128i)(unsigned __int64)&unk_41B4D1);
  qword_4DBE10 = 0;
  qword_4DBE38 = 0;
  xmmword_4DBD78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0038),
                               (__m128i)(unsigned __int64)"cosh");
  xmmword_4DBD88 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0040),
                               (__m128i)(unsigned __int64)&unk_41B4B9);
  xmmword_4DBDA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0048),
                               (__m128i)(unsigned __int64)"coshl");
  xmmword_4DBDB0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0050),
                               (__m128i)(unsigned __int64)&unk_41B2A1);
  xmmword_4DBDC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0058),
                               (__m128i)(unsigned __int64)"cosl");
  xmmword_4DBDD8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0060),
                               (__m128i)(unsigned __int64)&unk_41B289);
  xmmword_4DBDF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0068),
                               (__m128i)(unsigned __int64)"exp");
  xmmword_4DBE00 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0070),
                               (__m128i)(unsigned __int64)&unk_41B4A1);
  xmmword_4DBE18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0078),
                               (__m128i)(unsigned __int64)"expl");
  xmmword_4DBE28 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0080),
                               (__m128i)(unsigned __int64)&unk_41B271);
  xmmword_4DBE40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0088),
                               (__m128i)(unsigned __int64)"fabs");
  qword_4DBE60 = 0;
  qword_4DBE88 = 0;
  xmmword_4DBE50 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0090),
                               (__m128i)(unsigned __int64)&unk_41B489);
  qword_4DBEB0 = 0;
  qword_4DBED8 = 0;
  xmmword_4DBE68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0098),
                               (__m128i)(unsigned __int64)"fabsl");
  qword_4DBF00 = 0;
  qword_4DBF28 = 0;
  xmmword_4DBE78 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D00A0),
                               (__m128i)(unsigned __int64)&unk_41B259);
  xmmword_4DBE90 = (__int128)_mm_loadh_ps((const double *)&off_4D00B0);
  xmmword_4DBEA0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D00B8),
                               (__m128i)(unsigned __int64)&unk_41B46E);
  xmmword_4DBEB8 = (__int128)_mm_loadh_ps((const double *)&off_4D00C8);
  xmmword_4DBEC8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D00D0),
                               (__m128i)(unsigned __int64)&unk_41B23E);
  xmmword_4DBEE0 = (__int128)_mm_loadh_ps((const double *)&off_4D00E0);
  xmmword_4DBEF0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D00E8),
                               (__m128i)(unsigned __int64)&unk_41B450);
  xmmword_4DBF08 = (__int128)_mm_loadh_ps((const double *)&off_4D00F8);
  xmmword_4DBF18 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0100),
                               (__m128i)(unsigned __int64)&unk_41B220);
  qword_4DBF50 = 0;
  qword_4DBF78 = 0;
  xmmword_4DBF30 = (__int128)_mm_loadh_ps((const double *)&off_4D0110);
  qword_4DBFA0 = 0;
  qword_4DBFC8 = 0;
  xmmword_4DBF40 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0118),
                               (__m128i)(unsigned __int64)&unk_41B3E8);
  qword_4DBFF0 = 0;
  xmmword_4DBF58 = (__int128)_mm_loadh_ps((const double *)&off_4D0128);
  xmmword_4DBF68 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0130),
                               (__m128i)(unsigned __int64)&unk_41B401);
  xmmword_4DBF80 = (__int128)_mm_loadh_ps((const double *)&off_4D0140);
  xmmword_4DBF90 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0148),
                               (__m128i)(unsigned __int64)&unk_41B1D1);
  xmmword_4DBFA8 = (__int128)_mm_loadh_ps((const double *)&off_4D0158);
  xmmword_4DBFB8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0160),
                               (__m128i)(unsigned __int64)&unk_41B1B8);
  xmmword_4DBFD0 = (__int128)_mm_loadh_ps((const double *)&off_4D0170);
  xmmword_4DBFE0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0178),
                               (__m128i)(unsigned __int64)&unk_41B3B1);
  xmmword_4DBFF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0180),
                               (__m128i)(unsigned __int64)"powl");
  qword_4DC018 = 0;
  qword_4DC040 = 0;
  xmmword_4DC008 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0188),
                               (__m128i)(unsigned __int64)&unk_41B181);
  qword_4DC068 = 0;
  qword_4DC090 = 0;
  xmmword_4DC020 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0190),
                               (__m128i)(unsigned __int64)"sin");
  qword_4DC0B8 = 0;
  qword_4DC0E0 = 0;
  xmmword_4DC030 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0198),
                               (__m128i)(unsigned __int64)&unk_41B399);
  xmmword_4DC048 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01A0),
                               (__m128i)(unsigned __int64)"sinh");
  xmmword_4DC058 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01A8),
                               (__m128i)(unsigned __int64)&unk_41B381);
  xmmword_4DC070 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01B0),
                               (__m128i)(unsigned __int64)"sinhl");
  xmmword_4DC080 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01B8),
                               (__m128i)(unsigned __int64)&unk_41B169);
  xmmword_4DC098 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01C0),
                               (__m128i)(unsigned __int64)"sinl");
  xmmword_4DC0A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01C8),
                               (__m128i)(unsigned __int64)&unk_41B151);
  xmmword_4DC0C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01D0),
                               (__m128i)(unsigned __int64)"sqrt");
  xmmword_4DC0D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01D8),
                               (__m128i)(unsigned __int64)&unk_41B369);
  xmmword_4DC0E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01E0),
                               (__m128i)(unsigned __int64)"sqrtl");
  xmmword_4DC0F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01E8),
                               (__m128i)(unsigned __int64)&unk_41B139);
  qword_4DC108 = 0;
  qword_4DC1B0 = (__int64)"acos";
  qword_4DC1D8 = (__int64)"acosl";
  xmmword_4DC110 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01F0),
                               (__m128i)(unsigned __int64)"tan");
  qword_4DC200 = (__int64)"asin";
  qword_4DC130 = 0;
  xmmword_4DC120 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D01F8),
                               (__m128i)(unsigned __int64)&unk_41B351);
  qword_4DC158 = 0;
  qword_4DC180 = 0;
  xmmword_4DC138 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0200),
                               (__m128i)(unsigned __int64)"tanh");
  qword_4DC1A8 = 0;
  qword_4DC1B8 = 0;
  xmmword_4DC148 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0208),
                               (__m128i)(unsigned __int64)&unk_41B339);
  qword_4DC1D0 = 0;
  qword_4DC1E0 = 0;
  xmmword_4DC160 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0210),
                               (__m128i)(unsigned __int64)"tanhl");
  qword_4DC1F8 = 0;
  qword_4DC208 = 0;
  xmmword_4DC170 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0218),
                               (__m128i)(unsigned __int64)&unk_41B121);
  xmmword_4DC188 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0220),
                               (__m128i)(unsigned __int64)"tanl");
  xmmword_4DC198 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0228),
                               (__m128i)(unsigned __int64)&unk_41B10B);
  xmmword_4DC1C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0230),
                               (__m128i)(unsigned __int64)&unk_41B560);
  xmmword_4DC1E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0238),
                               (__m128i)(unsigned __int64)&unk_41B330);
  qword_4DC228 = (__int64)"asinl";
  qword_4DC2A0 = (__int64)"atan2l";
  xmmword_4DC210 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0240),
                               (__m128i)(unsigned __int64)&unk_41B548);
  qword_4DC250 = (__int64)"atan";
  qword_4DC278 = (__int64)"atan2";
  xmmword_4DC238 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0248),
                               (__m128i)(unsigned __int64)&unk_41B318);
  qword_4DC2C8 = (__int64)"atanl";
  qword_4DC2F0 = (__int64)"ceil";
  xmmword_4DC260 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0250),
                               (__m128i)(unsigned __int64)&unk_41B530);
  qword_4DC220 = 0;
  qword_4DC230 = 0;
  xmmword_4DC288 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0258),
                               (__m128i)(unsigned __int64)&unk_41B512);
  qword_4DC248 = 0;
  qword_4DC258 = 0;
  xmmword_4DC2B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0260),
                               (__m128i)(unsigned __int64)&unk_41B2FA);
  qword_4DC270 = 0;
  qword_4DC280 = 0;
  xmmword_4DC2D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0268),
                               (__m128i)(unsigned __int64)&unk_41B2E0);
  qword_4DC298 = 0;
  qword_4DC2A8 = 0;
  xmmword_4DC300 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0270),
                               (__m128i)(unsigned __int64)&unk_41B4F8);
  qword_4DC2C0 = 0;
  qword_4DC2D0 = 0;
  qword_4DC2E8 = 0;
  qword_4DC2F8 = 0;
  qword_4DC310 = 0;
  qword_4DC318 = (__int64)"ceill";
  qword_4DC340 = (__int64)"cos";
  qword_4DC368 = (__int64)"cosh";
  xmmword_4DC328 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0278),
                               (__m128i)(unsigned __int64)&unk_41B2C8);
  qword_4DC390 = (__int64)"coshl";
  qword_4DC3B8 = (__int64)"cosl";
  xmmword_4DC350 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0280),
                               (__m128i)(unsigned __int64)&unk_41B4E0);
  qword_4DC3E0 = (__int64)"exp";
  qword_4DC408 = (__int64)"expl";
  xmmword_4DC378 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0288),
                               (__m128i)(unsigned __int64)&unk_41B4C8);
  qword_4DC320 = 0;
  qword_4DC338 = 0;
  xmmword_4DC3A0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0290),
                               (__m128i)(unsigned __int64)&unk_41B2B0);
  qword_4DC348 = 0;
  qword_4DC360 = 0;
  xmmword_4DC3C8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0298),
                               (__m128i)(unsigned __int64)&unk_41B298);
  qword_4DC370 = 0;
  qword_4DC388 = 0;
  qword_4DC398 = 0;
  qword_4DC3B0 = 0;
  qword_4DC3C0 = 0;
  qword_4DC3D8 = 0;
  qword_4DC3E8 = 0;
  qword_4DC400 = 0;
  qword_4DC410 = 0;
  xmmword_4DC3F0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02A0),
                               (__m128i)(unsigned __int64)&unk_41B4B0);
  qword_4DC480 = (__int64)"floor";
  qword_4DC430 = (__int64)"fabs";
  xmmword_4DC418 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02A8),
                               (__m128i)(unsigned __int64)&unk_41B280);
  qword_4DC4A8 = (__int64)"floorl";
  qword_4DC458 = (__int64)"fabsl";
  xmmword_4DC440 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02B0),
                               (__m128i)(unsigned __int64)&unk_41B498);
  qword_4DC4D0 = (__int64)"fmod";
  qword_4DC428 = 0;
  xmmword_4DC468 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02B8),
                               (__m128i)(unsigned __int64)&unk_41B268);
  qword_4DC4F8 = (__int64)"fmodl";
  qword_4DC438 = 0;
  xmmword_4DC490 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02C0),
                               (__m128i)(unsigned __int64)&unk_41B480);
  qword_4DC450 = 0;
  qword_4DC460 = 0;
  xmmword_4DC4B8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02C8),
                               (__m128i)(unsigned __int64)&unk_41B250);
  qword_4DC478 = 0;
  qword_4DC488 = 0;
  xmmword_4DC4E0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02D0),
                               (__m128i)(unsigned __int64)&unk_41B462);
  qword_4DC4A0 = 0;
  qword_4DC4B0 = 0;
  xmmword_4DC508 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02D8),
                               (__m128i)(unsigned __int64)&unk_41B232);
  qword_4DC4C8 = 0;
  qword_4DC4D8 = 0;
  qword_4DC4F0 = 0;
  qword_4DC500 = 0;
  qword_4DC518 = 0;
  qword_4DC520 = (__int64)"frexp";
  qword_4DC528 = 0;
  qword_4DC548 = (__int64)"frexpl";
  xmmword_4DC530 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02E0),
                               (__m128i)(unsigned __int64)&unk_41B438);
  qword_4DC570 = (__int64)"ldexp";
  qword_4DC540 = 0;
  xmmword_4DC558 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02E8),
                               (__m128i)(unsigned __int64)&unk_41B208);
  qword_4DC598 = (__int64)"ldexpl";
  qword_4DC550 = 0;
  xmmword_4DC580 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02F0),
                               (__m128i)(unsigned __int64)&unk_41B420);
  qword_4DC5C0 = (__int64)"log";
  qword_4DC568 = 0;
  xmmword_4DC5A8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D02F8),
                               (__m128i)(unsigned __int64)&unk_41B1F0);
  qword_4DC5E8 = (__int64)"log10";
  qword_4DC578 = 0;
  xmmword_4DC5D0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0300),
                               (__m128i)(unsigned __int64)&unk_41B3F8);
  qword_4DC610 = (__int64)"log10l";
  qword_4DC590 = 0;
  qword_4DC5A0 = 0;
  qword_4DC5B8 = 0;
  qword_4DC5C8 = 0;
  qword_4DC5E0 = 0;
  qword_4DC5F0 = 0;
  qword_4DC608 = 0;
  qword_4DC618 = 0;
  xmmword_4DC5F8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0308),
                               (__m128i)(unsigned __int64)&unk_41B410);
  qword_4DC638 = (__int64)"logl";
  qword_4DC700 = (__int64)"sin";
  xmmword_4DC620 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0310),
                               (__m128i)(unsigned __int64)&unk_41B1E0);
  qword_4DC660 = (__int64)"modf";
  qword_4DC6D8 = (__int64)"powl";
  xmmword_4DC648 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0318),
                               (__m128i)(unsigned __int64)&unk_41B1C8);
  qword_4DC688 = (__int64)"modfl";
  qword_4DC630 = 0;
  xmmword_4DC670 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0320),
                               (__m128i)(unsigned __int64)&unk_41B3D0);
  qword_4DC6B0 = (__int64)"pow";
  qword_4DC640 = 0;
  xmmword_4DC698 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0328),
                               (__m128i)(unsigned __int64)&unk_41B1A0);
  qword_4DC658 = 0;
  qword_4DC668 = 0;
  xmmword_4DC6C0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0330),
                               (__m128i)(unsigned __int64)&unk_41B3C2);
  qword_4DC680 = 0;
  qword_4DC690 = 0;
  xmmword_4DC6E8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0338),
                               (__m128i)(unsigned __int64)&unk_41B192);
  qword_4DC6A8 = 0;
  qword_4DC6B8 = 0;
  xmmword_4DC710 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0340),
                               (__m128i)(unsigned __int64)&unk_41B3A8);
  qword_4DC6D0 = 0;
  qword_4DC6E0 = 0;
  qword_4DC6F8 = 0;
  qword_4DC708 = 0;
  qword_4DC720 = 0;
  qword_4DC728 = (__int64)"sinh";
  qword_4DC750 = (__int64)"sinhl";
  xmmword_4DC738 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0348),
                               (__m128i)(unsigned __int64)&unk_41B390);
  qword_4DC778 = (__int64)"sinl";
  qword_4DC7A0 = (__int64)"sqrt";
  xmmword_4DC760 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0350),
                               (__m128i)(unsigned __int64)&unk_41B178);
  qword_4DC7C8 = (__int64)"sqrtl";
  qword_4DC7F0 = (__int64)"tan";
  xmmword_4DC788 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0358),
                               (__m128i)(unsigned __int64)&unk_41B160);
  qword_4DC818 = (__int64)"tanh";
  qword_4DC730 = 0;
  xmmword_4DC7B0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0360),
                               (__m128i)(unsigned __int64)&unk_41B378);
  qword_4DC748 = 0;
  qword_4DC758 = 0;
  xmmword_4DC7D8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0368),
                               (__m128i)(unsigned __int64)&unk_41B148);
  qword_4DC770 = 0;
  qword_4DC780 = 0;
  qword_4DC798 = 0;
  qword_4DC7A8 = 0;
  qword_4DC7C0 = 0;
  qword_4DC7D0 = 0;
  qword_4DC7E8 = 0;
  qword_4DC7F8 = 0;
  qword_4DC810 = 0;
  qword_4DC820 = 0;
  xmmword_4DC800 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0370),
                               (__m128i)(unsigned __int64)&unk_41B360);
  qword_4DC838 = 0;
  qword_4DC848 = 0;
  xmmword_4DC828 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0378),
                               (__m128i)(unsigned __int64)&unk_41B348);
  qword_4DC860 = 0;
  qword_4DC870 = 0;
  xmmword_4DC850 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0380),
                               (__m128i)(unsigned __int64)&unk_41B130);
  qword_4DC888 = 0;
  qword_4DC840 = (__int64)"tanhl";
  xmmword_4DC878 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0388),
                               (__m128i)(unsigned __int64)&unk_41B118);
  qword_4DC868 = (__int64)"tanl";
  __cxa_atexit(sub_314460, nullptr, &off_4C8C60);
  xmmword_4DBA20 = 0;
  *(_QWORD *)&xmmword_4DBA20 = "__m64";
  qword_4DBA40 = 0;
  qword_4DBA48 = (__int64)"__m128";
  xmmword_4DBA30 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0390),
                               (__m128i)(unsigned __int64)"\bm64_u64\bm64_f32\am64_i8\bm64_i16\bm64_i32\bm64_i64\am64_u8\b"
                                                          "m64_u16\bm64_u32");
  qword_4DBA70 = (__int64)"__m128d";
  qword_4DBA50 = 0;
  xmmword_4DBA58 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D0398),
                               (__m128i)(unsigned __int64)"\tm128_f32\tm128_u64\bm128_i8\tm128_i16\tm128_i32\tm128_i64\bm"
                                                          "128_u8\tm128_u16\tm128_u32");
  qword_4DBA98 = (__int64)"__m128i";
  qword_4DBA68 = 0;
  xmmword_4DBA80 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D03A0),
                               (__m128i)(unsigned __int64)"\nm128d_f64");
  qword_4DBAC0 = (__int64)"__m256";
  qword_4DBA78 = 0;
  xmmword_4DBAA8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D03A8),
                               (__m128i)(unsigned __int64)"\tm128i_i8\n"
                                                          "m128i_i16\n"
                                                          "m128i_i32\n"
                                                          "m128i_i64\tm128i_u8\n"
                                                          "m128i_u16\n"
                                                          "m128i_u32\n"
                                                          "m128i_u64");
  qword_4DBAE8 = (__int64)"__m256d";
  qword_4DBA90 = 0;
  xmmword_4DBAD0 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D03B0),
                               (__m128i)(unsigned __int64)"\tm256_f32");
  qword_4DBB10 = (__int64)"__m256i";
  qword_4DBAA0 = 0;
  qword_4DBAB8 = 0;
  qword_4DBAC8 = 0;
  qword_4DBAE0 = 0;
  qword_4DBAF0 = 0;
  qword_4DBB08 = 0;
  qword_4DBB18 = 0;
  xmmword_4DBAF8 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D03B8),
                               (__m128i)(unsigned __int64)"\nm256d_f64");
  qword_4DBB38 = (__int64)"__m512";
  qword_4DBB30 = 0;
  xmmword_4DBB20 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D03C0),
                               (__m128i)(unsigned __int64)"\tm256i_i8\n"
                                                          "m256i_i16\n"
                                                          "m256i_i32\n"
                                                          "m256i_i64\tm256i_u8\n"
                                                          "m256i_u16\n"
                                                          "m256i_u32\n"
                                                          "m256i_u64");
  qword_4DBB60 = (__int64)"__m512d";
  qword_4DBB40 = 0;
  xmmword_4DBB48 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D03C8),
                               (__m128i)(unsigned __int64)"\tm512_f32");
  qword_4DBB88 = (__int64)"__m512i";
  qword_4DBB58 = 0;
  xmmword_4DBB70 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64((const __m128i *)&off_4D03D0),
                               (__m128i)(unsigned __int64)"\nm512d_f64");
  qword_4DBB68 = 0;
  qword_4DBB80 = 0;
  qword_4DBB90 = 0;
  qword_4DBBA8 = 0;
  xmmword_4DBB98 = (__int128)_mm_unpacklo_epi64(
                               _mm_loadl_epi64(&off_4D03D8),
                               (__m128i)(unsigned __int64)"\tm512i_i8\n"
                                                          "m512i_i16\n"
                                                          "m512i_i32\n"
                                                          "m512i_i64\tm512i_u8\n"
                                                          "m512i_u16\n"
                                                          "m512i_u32\n"
                                                          "m512i_u64");
  return __cxa_atexit(sub_314420, nullptr, &off_4C8C60);
}
