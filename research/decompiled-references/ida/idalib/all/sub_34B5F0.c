int sub_34B5F0()
{
  size_t v0; // r14
  size_t v1; // rax
  size_t v2; // rax
  __m128i si128; // xmm1
  size_t v4; // rax
  __m128i v5; // xmm0
  size_t v6; // rax
  __m128i v7; // xmm0
  size_t v8; // rax
  size_t v9; // r14
  __m128i v10; // xmm1
  size_t v11; // rax
  size_t v12; // r14
  __m128i v13; // xmm1
  size_t v14; // rax
  size_t v15; // rax
  __m128i v16; // xmm1
  size_t v17; // rax
  __m128i v18; // xmm1
  size_t v19; // rax
  size_t v20; // rbp
  __m128i v21; // xmm0
  size_t v22; // rax
  __m128 v24; // [rsp+0h] [rbp-68h] BYREF
  __m128 v25; // [rsp+10h] [rbp-58h] BYREF
  size_t v26; // [rsp+20h] [rbp-48h]
  __int64 (__fastcall **v27)(); // [rsp+28h] [rbp-40h]

  v0 = j__strlen("Forcibly enables non-trivial loop unswitching rather than following the configuration passed into the pass.");
  sub_200F820(&qword_2D09A80, 0, 0);
  word_2D09B08 = 0;
  byte_2D09AF8 = 0;
  v24 = _mm_loadh_ps((const double *)off_2C78368);
  xmmword_2D09B28 = (__int128)v24;
  qword_2D09B00 = (__int64)off_2C714E8;
  qword_2D09A80 = (__int64)off_2C75848;
  qword_2D09B10 = (__int64)off_2BEAB08;
  v1 = j__strlen("enable-nontrivial-unswitch");
  sub_2217250(&qword_2D09A80, "enable-nontrivial-unswitch", v1);
  word_2D09B08 = 256;
  qword_2D09AA8 = v0;
  byte_2D09AF8 = 0;
  byte_2D09A8A = byte_2D09A8A & 0x9F | 0x20;
  qword_2D09AA0 = (__int64)"Forcibly enables non-trivial loop unswitching rather than following the configuration passed into the pass.";
  sub_2218140(&qword_2D09A80);
  __cxa_atexit(sub_200E190, &qword_2D09A80, &off_2B25620);
  v26 = j__strlen("The cost threshold for unswitching a loop.");
  sub_200F820(&qword_2D099C0, 0, 0);
  dword_2D09A38 = 0;
  dword_2D09A48 = 0;
  v25 = _mm_loadh_ps((const double *)&off_2C77900);
  xmmword_2D09A68 = (__int128)v25;
  v27 = off_2C71BB0;
  qword_2D09A40 = (__int64)off_2C71BB0;
  qword_2D099C0 = (__int64)off_2C75778;
  qword_2D09A50 = (__int64)off_2BEAB68;
  byte_2D09A4C = 0;
  v2 = j__strlen("unswitch-threshold");
  sub_2217250(&qword_2D099C0, "unswitch-threshold", v2);
  dword_2D09A38 = 50;
  qword_2D099E8 = v26;
  byte_2D09A4C = 1;
  byte_2D099CA = byte_2D099CA & 0x9F | 0x20;
  qword_2D099E0 = (__int64)"The cost threshold for unswitching a loop.";
  dword_2D09A48 = 50;
  sub_2218140(&qword_2D099C0);
  __cxa_atexit(sub_20141D0, &qword_2D099C0, &off_2B25620);
  v26 = j__strlen("Enable unswitch cost multiplier that prohibits exponential explosion in nontrivial unswitch.");
  sub_200F820(&qword_2D09900, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v24);
  word_2D09988 = 0;
  xmmword_2D099A8 = (__int128)si128;
  qword_2D09980 = (__int64)off_2C714E8;
  qword_2D09900 = (__int64)off_2C75848;
  qword_2D09990 = (__int64)off_2BEAB08;
  byte_2D09978 = 0;
  v4 = j__strlen("enable-unswitch-cost-multiplier");
  sub_2217250(&qword_2D09900, "enable-unswitch-cost-multiplier", v4);
  byte_2D09978 = 1;
  qword_2D09928 = v26;
  word_2D09988 = 257;
  byte_2D0990A = byte_2D0990A & 0x9F | 0x20;
  qword_2D09920 = (__int64)"Enable unswitch cost multiplier that prohibits exponential explosion in nontrivial unswitch.";
  sub_2218140(&qword_2D09900);
  __cxa_atexit(sub_200E190, &qword_2D09900, &off_2B25620);
  v26 = j__strlen("Toplevel siblings divisor for cost multiplier.");
  sub_200F820(&qword_2D09840, 0, 0);
  v5 = _mm_load_si128((const __m128i *)&v25);
  qword_2D09840 = (__int64)off_2C75778;
  qword_2D098C0 = (__int64)v27;
  xmmword_2D098E8 = (__int128)v5;
  qword_2D098D0 = (__int64)off_2BEAB68;
  dword_2D098B8 = 0;
  dword_2D098C8 = 0;
  byte_2D098CC = 0;
  v6 = j__strlen("unswitch-siblings-toplevel-div");
  sub_2217250(&qword_2D09840, "unswitch-siblings-toplevel-div", v6);
  dword_2D098B8 = 2;
  qword_2D09868 = v26;
  byte_2D098CC = 1;
  byte_2D0984A = byte_2D0984A & 0x9F | 0x20;
  qword_2D09860 = (__int64)"Toplevel siblings divisor for cost multiplier.";
  dword_2D098C8 = 2;
  sub_2218140(&qword_2D09840);
  __cxa_atexit(sub_20141D0, &qword_2D09840, &off_2B25620);
  v26 = j__strlen("Number of unswitch candidates that are ignored when calculating cost multiplier.");
  sub_200F820(&qword_2D09780, 0, 0);
  v7 = _mm_load_si128((const __m128i *)&v25);
  qword_2D09780 = (__int64)off_2C75778;
  qword_2D09800 = (__int64)v27;
  xmmword_2D09828 = (__int128)v7;
  qword_2D09810 = (__int64)off_2BEAB68;
  dword_2D097F8 = 0;
  dword_2D09808 = 0;
  byte_2D0980C = 0;
  v8 = j__strlen("unswitch-num-initial-unscaled-candidates");
  sub_2217250(&qword_2D09780, "unswitch-num-initial-unscaled-candidates", v8);
  dword_2D097F8 = 8;
  qword_2D097A8 = v26;
  byte_2D0980C = 1;
  byte_2D0978A = byte_2D0978A & 0x9F | 0x20;
  qword_2D097A0 = (__int64)"Number of unswitch candidates that are ignored when calculating cost multiplier.";
  dword_2D09808 = 8;
  sub_2218140(&qword_2D09780);
  __cxa_atexit(sub_20141D0, &qword_2D09780, &off_2B25620);
  v9 = j__strlen(
         "If enabled, simple loop unswitching will also consider llvm.experimental.guard intrinsics as unswitch candidates.");
  sub_200F820(&qword_2D096C0, 0, 0);
  v10 = _mm_load_si128((const __m128i *)&v24);
  qword_2D09740 = (__int64)off_2C714E8;
  word_2D09748 = 0;
  xmmword_2D09768 = (__int128)v10;
  qword_2D096C0 = (__int64)off_2C75848;
  qword_2D09750 = (__int64)off_2BEAB08;
  byte_2D09738 = 0;
  v11 = j__strlen("simple-loop-unswitch-guards");
  sub_2217250(&qword_2D096C0, "simple-loop-unswitch-guards", v11);
  word_2D09748 = 257;
  qword_2D096E8 = v9;
  byte_2D09738 = 1;
  byte_2D096CA = byte_2D096CA & 0x9F | 0x20;
  qword_2D096E0 = (__int64)"If enabled, simple loop unswitching will also consider llvm.experimental.guard intrinsics as "
                           "unswitch candidates.";
  sub_2218140(&qword_2D096C0);
  __cxa_atexit(sub_200E190, &qword_2D096C0, &off_2B25620);
  v12 = j__strlen(
          "If enabled, drop make.implicit metadata in unswitched implicit null checks to save time analyzing if we can keep it.");
  sub_200F820(&qword_2D09600, 0, 0);
  v13 = _mm_load_si128((const __m128i *)&v24);
  word_2D09688 = 0;
  xmmword_2D096A8 = (__int128)v13;
  qword_2D09680 = (__int64)off_2C714E8;
  qword_2D09600 = (__int64)off_2C75848;
  qword_2D09690 = (__int64)off_2BEAB08;
  byte_2D09678 = 0;
  v14 = j__strlen("simple-loop-unswitch-drop-non-trivial-implicit-null-checks");
  sub_2217250(&qword_2D09600, "simple-loop-unswitch-drop-non-trivial-implicit-null-checks", v14);
  word_2D09688 = 256;
  qword_2D09628 = v12;
  byte_2D09678 = 0;
  byte_2D0960A = byte_2D0960A & 0x9F | 0x20;
  qword_2D09620 = (__int64)"If enabled, drop make.implicit metadata in unswitched implicit null checks to save time analy"
                           "zing if we can keep it.";
  sub_2218140(&qword_2D09600);
  __cxa_atexit(sub_200E190, &qword_2D09600, &off_2B25620);
  v26 = j__strlen("Max number of memory uses to explore during partial unswitching analysis");
  sub_200F820(&qword_2D09540, 0, 0);
  dword_2D095B8 = 0;
  dword_2D095C8 = 0;
  v27 = off_2C712D0;
  v25 = _mm_loadh_ps((const double *)off_2C784F8);
  qword_2D095C0 = (__int64)off_2C712D0;
  xmmword_2D095E8 = (__int128)v25;
  qword_2D09540 = (__int64)off_2C75710;
  qword_2D095D0 = (__int64)off_2BEAB98;
  byte_2D095CC = 0;
  v15 = j__strlen("simple-loop-unswitch-memoryssa-threshold");
  sub_2217250(&qword_2D09540, "simple-loop-unswitch-memoryssa-threshold", v15);
  qword_2D09560 = (__int64)"Max number of memory uses to explore during partial unswitching analysis";
  qword_2D09568 = v26;
  dword_2D095B8 = 100;
  byte_2D095CC = 1;
  byte_2D0954A = byte_2D0954A & 0x9F | 0x20;
  dword_2D095C8 = 100;
  sub_2218140(&qword_2D09540);
  __cxa_atexit(sub_1FED260, &qword_2D09540, &off_2B25620);
  v26 = j__strlen("If enabled, the freeze instruction will be added to condition of loop unswitch to prevent miscompilation.");
  sub_200F820(&qword_2D09480, 0, 0);
  v16 = _mm_load_si128((const __m128i *)&v24);
  word_2D09508 = 0;
  xmmword_2D09528 = (__int128)v16;
  qword_2D09500 = (__int64)off_2C714E8;
  qword_2D09480 = (__int64)off_2C75848;
  qword_2D09510 = (__int64)off_2BEAB08;
  byte_2D094F8 = 0;
  v17 = j__strlen("freeze-loop-unswitch-cond");
  sub_2217250(&qword_2D09480, "freeze-loop-unswitch-cond", v17);
  word_2D09508 = 257;
  qword_2D094A8 = v26;
  byte_2D094F8 = 1;
  byte_2D0948A = byte_2D0948A & 0x9F | 0x20;
  qword_2D094A0 = (__int64)"If enabled, the freeze instruction will be added to condition of loop unswitch to prevent miscompilation.";
  sub_2218140(&qword_2D09480);
  __cxa_atexit(sub_200E190, &qword_2D09480, &off_2B25620);
  v26 = j__strlen(
          "Whether we should inject new invariants and unswitch them to eliminate some existing (non-invariant) conditions.");
  sub_200F820(&qword_2D093C0, 0, 0);
  v18 = _mm_load_si128((const __m128i *)&v24);
  qword_2D09440 = (__int64)off_2C714E8;
  xmmword_2D09468 = (__int128)v18;
  qword_2D093C0 = (__int64)off_2C75848;
  qword_2D09450 = (__int64)off_2BEAB08;
  byte_2D09438 = 0;
  word_2D09448 = 0;
  v19 = j__strlen("simple-loop-unswitch-inject-invariant-conditions");
  sub_2217250(&qword_2D093C0, "simple-loop-unswitch-inject-invariant-conditions", v19);
  byte_2D09438 = 1;
  qword_2D093E8 = v26;
  byte_2D093CA = byte_2D093CA & 0x9F | 0x20;
  qword_2D093E0 = (__int64)"Whether we should inject new invariants and unswitch them to eliminate some existing (non-inv"
                           "ariant) conditions.";
  word_2D09448 = 257;
  sub_2218140(&qword_2D093C0);
  __cxa_atexit(sub_200E190, &qword_2D093C0, &off_2B25620);
  v20 = j__strlen(
          "Only try to inject loop invariant conditions and unswitch on them to eliminate branches that are not-taken 1/<"
          "this option> times or less.");
  sub_200F820(&qword_2D09300, 0, 0);
  v21 = _mm_load_si128((const __m128i *)&v25);
  qword_2D09300 = (__int64)off_2C75710;
  qword_2D09380 = (__int64)v27;
  xmmword_2D093A8 = (__int128)v21;
  qword_2D09390 = (__int64)off_2BEAB98;
  dword_2D09378 = 0;
  dword_2D09388 = 0;
  byte_2D0938C = 0;
  v22 = j__strlen("simple-loop-unswitch-inject-invariant-condition-hotness-threshold");
  sub_2217250(&qword_2D09300, "simple-loop-unswitch-inject-invariant-condition-hotness-threshold", v22);
  qword_2D09328 = v20;
  dword_2D09378 = 16;
  byte_2D0938C = 1;
  dword_2D09388 = 16;
  byte_2D0930A = byte_2D0930A & 0x9F | 0x20;
  qword_2D09320 = (__int64)"Only try to inject loop invariant conditions and unswitch on them to eliminate branches that "
                           "are not-taken 1/<this option> times or less.";
  sub_2218140(&qword_2D09300);
  return __cxa_atexit(sub_1FED260, &qword_2D09300, &off_2B25620);
}
