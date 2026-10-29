int sub_3373D0()
{
  size_t v0; // r14
  size_t v1; // rax
  size_t v2; // r14
  size_t v3; // rax
  size_t v4; // r14
  __m128i si128; // xmm1
  size_t v6; // rax
  size_t v7; // r14
  __m128i v8; // xmm1
  size_t v9; // rax
  size_t v10; // r14
  __m128i v11; // xmm1
  size_t v12; // rax
  __m128i v14[3]; // [rsp+0h] [rbp-38h] BYREF

  v0 = j__strlen("Use full module build paths in the profile counter names for static functions.");
  sub_200F820(&qword_2CFF4C0, 0, 0);
  word_2CFF548 = 0;
  byte_2CFF538 = 0;
  v14[0] = (__m128i)_mm_loadh_ps((const double *)off_2C78368);
  xmmword_2CFF568 = (__int128)v14[0];
  qword_2CFF540 = (__int64)off_2C714E8;
  qword_2CFF4C0 = (__int64)off_2C75848;
  qword_2CFF550 = (__int64)off_2BEAB08;
  v1 = j__strlen("static-func-full-module-prefix");
  sub_2217250(&qword_2CFF4C0, "static-func-full-module-prefix", v1);
  word_2CFF548 = 257;
  qword_2CFF4E8 = v0;
  byte_2CFF538 = 1;
  byte_2CFF4CA = byte_2CFF4CA & 0x9F | 0x20;
  qword_2CFF4E0 = (__int64)"Use full module build paths in the profile counter names for static functions.";
  sub_2218140(&qword_2CFF4C0);
  __cxa_atexit(sub_200E190, &qword_2CFF4C0, &off_2B25620);
  v2 = j__strlen("Strip specified level of directory name from source path in the profile counter name for static functions.");
  sub_200F820(&qword_2CFF400, 0, 0);
  dword_2CFF478 = 0;
  dword_2CFF488 = 0;
  qword_2CFF480 = (__int64)off_2C712D0;
  xmmword_2CFF4A8 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  byte_2CFF48C = 0;
  qword_2CFF400 = (__int64)off_2C75710;
  qword_2CFF490 = (__int64)off_2BEAB98;
  v3 = j__strlen("static-func-strip-dirname-prefix");
  sub_2217250(&qword_2CFF400, "static-func-strip-dirname-prefix", v3);
  qword_2CFF428 = v2;
  dword_2CFF478 = 0;
  byte_2CFF48C = 1;
  dword_2CFF488 = 0;
  byte_2CFF40A = byte_2CFF40A & 0x9F | 0x20;
  qword_2CFF420 = (__int64)"Strip specified level of directory name from source path in the profile counter name for static functions.";
  sub_2218140(&qword_2CFF400);
  __cxa_atexit(sub_1FED260, &qword_2CFF400, &off_2B25620);
  v4 = j__strlen("Enable name/filename string compression");
  sub_200F820(qword_2CFF340, 0, 0);
  si128 = _mm_load_si128(v14);
  LOBYTE(qword_2CFF340[15]) = 0;
  LOWORD(qword_2CFF340[17]) = 0;
  qword_2CFF340[16] = off_2C714E8;
  qword_2CFF340[18] = off_2BEAB08;
  *(__m128i *)&qword_2CFF340[21] = si128;
  qword_2CFF340[0] = off_2C75848;
  v6 = j__strlen("enable-name-compression");
  sub_2217250(qword_2CFF340, "enable-name-compression", v6);
  qword_2CFF340[5] = v4;
  qword_2CFF340[4] = "Enable name/filename string compression";
  LOWORD(qword_2CFF340[17]) = 257;
  LOBYTE(qword_2CFF340[15]) = 1;
  sub_2218140(qword_2CFF340);
  __cxa_atexit(sub_200E190, qword_2CFF340, &off_2B25620);
  v7 = j__strlen(
         "If true, the virtual table address will be instrumented to know the types of a C++ pointer. The information is "
         "used in indirect call promotion to do selective vtable-based comparison.");
  sub_200F820(qword_2CFF280, 0, 0);
  v8 = _mm_load_si128(v14);
  LOBYTE(qword_2CFF280[15]) = 0;
  LOWORD(qword_2CFF280[17]) = 0;
  qword_2CFF280[16] = off_2C714E8;
  qword_2CFF280[18] = off_2BEAB08;
  *(__m128i *)&qword_2CFF280[21] = v8;
  qword_2CFF280[0] = off_2C75848;
  v9 = j__strlen("enable-vtable-value-profiling");
  sub_2217250(qword_2CFF280, "enable-vtable-value-profiling", v9);
  qword_2CFF280[5] = v7;
  LOWORD(qword_2CFF280[17]) = 256;
  qword_2CFF280[4] = "If true, the virtual table address will be instrumented to know the types of a C++ pointer. The inf"
                     "ormation is used in indirect call promotion to do selective vtable-based comparison.";
  LOBYTE(qword_2CFF280[15]) = 0;
  sub_2218140(qword_2CFF280);
  __cxa_atexit(sub_200E190, qword_2CFF280, &off_2B25620);
  v10 = j__strlen(
          "If ThinLTO and WPD is enabled and this option is true, vtable profiles will be used by ICP pass for more effic"
          "ient indirect call sequence. If false, type profiles won't be used.");
  sub_200F820(qword_2CFF1C0, 0, 0);
  v11 = _mm_load_si128(v14);
  qword_2CFF1C0[0] = off_2C75848;
  LOWORD(qword_2CFF1C0[17]) = 0;
  qword_2CFF1C0[16] = off_2C714E8;
  qword_2CFF1C0[18] = off_2BEAB08;
  LOBYTE(qword_2CFF1C0[15]) = 0;
  *(__m128i *)&qword_2CFF1C0[21] = v11;
  v12 = j__strlen("enable-vtable-profile-use");
  sub_2217250(qword_2CFF1C0, "enable-vtable-profile-use", v12);
  qword_2CFF1C0[5] = v10;
  LOBYTE(qword_2CFF1C0[15]) = 0;
  LOWORD(qword_2CFF1C0[17]) = 256;
  qword_2CFF1C0[4] = "If ThinLTO and WPD is enabled and this option is true, vtable profiles will be used by ICP pass for"
                     " more efficient indirect call sequence. If false, type profiles won't be used.";
  sub_2218140(qword_2CFF1C0);
  return __cxa_atexit(sub_200E190, qword_2CFF1C0, &off_2B25620);
}
