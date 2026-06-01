int sub_334010()
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
  sub_1FEBAE0(&qword_2CD55A0, 0, 0);
  word_2CD5628 = 0;
  byte_2CD5618 = 0;
  v14[0] = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CD5648 = (__int128)v14[0];
  qword_2CD5620 = (__int64)off_2C474E8;
  qword_2CD55A0 = (__int64)off_2C4B848;
  qword_2CD5630 = (__int64)off_2BC0B68;
  v1 = j__strlen("static-func-full-module-prefix");
  sub_21F3510(&qword_2CD55A0, "static-func-full-module-prefix", v1);
  word_2CD5628 = 257;
  qword_2CD55C8 = v0;
  byte_2CD5618 = 1;
  byte_2CD55AA = byte_2CD55AA & 0x9F | 0x20;
  qword_2CD55C0 = (__int64)"Use full module build paths in the profile counter names for static functions.";
  sub_21F4400(&qword_2CD55A0);
  __cxa_atexit(sub_1FEA450, &qword_2CD55A0, &off_2AFC540);
  v2 = j__strlen("Strip specified level of directory name from source path in the profile counter name for static functions.");
  sub_1FEBAE0(&qword_2CD54E0, 0, 0);
  dword_2CD5558 = 0;
  dword_2CD5568 = 0;
  qword_2CD5560 = (__int64)off_2C472D0;
  xmmword_2CD5588 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  byte_2CD556C = 0;
  qword_2CD54E0 = (__int64)off_2C4B710;
  qword_2CD5570 = (__int64)off_2BC0BF8;
  v3 = j__strlen("static-func-strip-dirname-prefix");
  sub_21F3510(&qword_2CD54E0, "static-func-strip-dirname-prefix", v3);
  qword_2CD5508 = v2;
  dword_2CD5558 = 0;
  byte_2CD556C = 1;
  dword_2CD5568 = 0;
  byte_2CD54EA = byte_2CD54EA & 0x9F | 0x20;
  qword_2CD5500 = (__int64)"Strip specified level of directory name from source path in the profile counter name for static functions.";
  sub_21F4400(&qword_2CD54E0);
  __cxa_atexit(sub_1FC9520, &qword_2CD54E0, &off_2AFC540);
  v4 = j__strlen("Enable name/filename string compression");
  sub_1FEBAE0(qword_2CD5420, 0, 0);
  si128 = _mm_load_si128(v14);
  LOBYTE(qword_2CD5420[15]) = 0;
  LOWORD(qword_2CD5420[17]) = 0;
  qword_2CD5420[16] = off_2C474E8;
  qword_2CD5420[18] = off_2BC0B68;
  *(__m128i *)&qword_2CD5420[21] = si128;
  qword_2CD5420[0] = off_2C4B848;
  v6 = j__strlen("enable-name-compression");
  sub_21F3510(qword_2CD5420, "enable-name-compression", v6);
  qword_2CD5420[5] = v4;
  qword_2CD5420[4] = "Enable name/filename string compression";
  LOWORD(qword_2CD5420[17]) = 257;
  LOBYTE(qword_2CD5420[15]) = 1;
  sub_21F4400(qword_2CD5420);
  __cxa_atexit(sub_1FEA450, qword_2CD5420, &off_2AFC540);
  v7 = j__strlen(
         "If true, the virtual table address will be instrumented to know the types of a C++ pointer. The information is "
         "used in indirect call promotion to do selective vtable-based comparison.");
  sub_1FEBAE0(qword_2CD5360, 0, 0);
  v8 = _mm_load_si128(v14);
  LOBYTE(qword_2CD5360[15]) = 0;
  LOWORD(qword_2CD5360[17]) = 0;
  qword_2CD5360[16] = off_2C474E8;
  qword_2CD5360[18] = off_2BC0B68;
  *(__m128i *)&qword_2CD5360[21] = v8;
  qword_2CD5360[0] = off_2C4B848;
  v9 = j__strlen("enable-vtable-value-profiling");
  sub_21F3510(qword_2CD5360, "enable-vtable-value-profiling", v9);
  qword_2CD5360[5] = v7;
  LOWORD(qword_2CD5360[17]) = 256;
  qword_2CD5360[4] = "If true, the virtual table address will be instrumented to know the types of a C++ pointer. The inf"
                     "ormation is used in indirect call promotion to do selective vtable-based comparison.";
  LOBYTE(qword_2CD5360[15]) = 0;
  sub_21F4400(qword_2CD5360);
  __cxa_atexit(sub_1FEA450, qword_2CD5360, &off_2AFC540);
  v10 = j__strlen(
          "If ThinLTO and WPD is enabled and this option is true, vtable profiles will be used by ICP pass for more effic"
          "ient indirect call sequence. If false, type profiles won't be used.");
  sub_1FEBAE0(qword_2CD52A0, 0, 0);
  v11 = _mm_load_si128(v14);
  qword_2CD52A0[0] = off_2C4B848;
  LOWORD(qword_2CD52A0[17]) = 0;
  qword_2CD52A0[16] = off_2C474E8;
  qword_2CD52A0[18] = off_2BC0B68;
  LOBYTE(qword_2CD52A0[15]) = 0;
  *(__m128i *)&qword_2CD52A0[21] = v11;
  v12 = j__strlen("enable-vtable-profile-use");
  sub_21F3510(qword_2CD52A0, "enable-vtable-profile-use", v12);
  qword_2CD52A0[5] = v10;
  LOBYTE(qword_2CD52A0[15]) = 0;
  LOWORD(qword_2CD52A0[17]) = 256;
  qword_2CD52A0[4] = "If ThinLTO and WPD is enabled and this option is true, vtable profiles will be used by ICP pass for"
                     " more efficient indirect call sequence. If false, type profiles won't be used.";
  sub_21F4400(qword_2CD52A0);
  return __cxa_atexit(sub_1FEA450, qword_2CD52A0, &off_2AFC540);
}

