int sub_348230()
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
  sub_1FEBAE0(&qword_2CDFB60, 0, 0);
  word_2CDFBE8 = 0;
  byte_2CDFBD8 = 0;
  v24 = _mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CDFC08 = (__int128)v24;
  qword_2CDFBE0 = (__int64)off_2C474E8;
  qword_2CDFB60 = (__int64)off_2C4B848;
  qword_2CDFBF0 = (__int64)off_2BC0B68;
  v1 = j__strlen("enable-nontrivial-unswitch");
  sub_21F3510(&qword_2CDFB60, "enable-nontrivial-unswitch", v1);
  word_2CDFBE8 = 256;
  qword_2CDFB88 = v0;
  byte_2CDFBD8 = 0;
  byte_2CDFB6A = byte_2CDFB6A & 0x9F | 0x20;
  qword_2CDFB80 = (__int64)"Forcibly enables non-trivial loop unswitching rather than following the configuration passed into the pass.";
  sub_21F4400(&qword_2CDFB60);
  __cxa_atexit(sub_1FEA450, &qword_2CDFB60, &off_2AFC540);
  v26 = j__strlen("The cost threshold for unswitching a loop.");
  sub_1FEBAE0(&qword_2CDFAA0, 0, 0);
  dword_2CDFB18 = 0;
  dword_2CDFB28 = 0;
  v25 = _mm_loadh_ps((const double *)&off_2C4D900);
  xmmword_2CDFB48 = (__int128)v25;
  v27 = off_2C47BB0;
  qword_2CDFB20 = (__int64)off_2C47BB0;
  qword_2CDFAA0 = (__int64)off_2C4B778;
  qword_2CDFB30 = (__int64)off_2BC0BC8;
  byte_2CDFB2C = 0;
  v2 = j__strlen("unswitch-threshold");
  sub_21F3510(&qword_2CDFAA0, "unswitch-threshold", v2);
  dword_2CDFB18 = 50;
  qword_2CDFAC8 = v26;
  byte_2CDFB2C = 1;
  byte_2CDFAAA = byte_2CDFAAA & 0x9F | 0x20;
  qword_2CDFAC0 = (__int64)"The cost threshold for unswitching a loop.";
  dword_2CDFB28 = 50;
  sub_21F4400(&qword_2CDFAA0);
  __cxa_atexit(sub_1FF0490, &qword_2CDFAA0, &off_2AFC540);
  v26 = j__strlen("Enable unswitch cost multiplier that prohibits exponential explosion in nontrivial unswitch.");
  sub_1FEBAE0(&qword_2CDF9E0, 0, 0);
  si128 = _mm_load_si128((const __m128i *)&v24);
  word_2CDFA68 = 0;
  xmmword_2CDFA88 = (__int128)si128;
  qword_2CDFA60 = (__int64)off_2C474E8;
  qword_2CDF9E0 = (__int64)off_2C4B848;
  qword_2CDFA70 = (__int64)off_2BC0B68;
  byte_2CDFA58 = 0;
  v4 = j__strlen("enable-unswitch-cost-multiplier");
  sub_21F3510(&qword_2CDF9E0, "enable-unswitch-cost-multiplier", v4);
  byte_2CDFA58 = 1;
  qword_2CDFA08 = v26;
  word_2CDFA68 = 257;
  byte_2CDF9EA = byte_2CDF9EA & 0x9F | 0x20;
  qword_2CDFA00 = (__int64)"Enable unswitch cost multiplier that prohibits exponential explosion in nontrivial unswitch.";
  sub_21F4400(&qword_2CDF9E0);
  __cxa_atexit(sub_1FEA450, &qword_2CDF9E0, &off_2AFC540);
  v26 = j__strlen("Toplevel siblings divisor for cost multiplier.");
  sub_1FEBAE0(&qword_2CDF920, 0, 0);
  v5 = _mm_load_si128((const __m128i *)&v25);
  qword_2CDF920 = (__int64)off_2C4B778;
  qword_2CDF9A0 = (__int64)v27;
  xmmword_2CDF9C8 = (__int128)v5;
  qword_2CDF9B0 = (__int64)off_2BC0BC8;
  dword_2CDF998 = 0;
  dword_2CDF9A8 = 0;
  byte_2CDF9AC = 0;
  v6 = j__strlen("unswitch-siblings-toplevel-div");
  sub_21F3510(&qword_2CDF920, "unswitch-siblings-toplevel-div", v6);
  dword_2CDF998 = 2;
  qword_2CDF948 = v26;
  byte_2CDF9AC = 1;
  byte_2CDF92A = byte_2CDF92A & 0x9F | 0x20;
  qword_2CDF940 = (__int64)"Toplevel siblings divisor for cost multiplier.";
  dword_2CDF9A8 = 2;
  sub_21F4400(&qword_2CDF920);
  __cxa_atexit(sub_1FF0490, &qword_2CDF920, &off_2AFC540);
  v26 = j__strlen("Number of unswitch candidates that are ignored when calculating cost multiplier.");
  sub_1FEBAE0(&qword_2CDF860, 0, 0);
  v7 = _mm_load_si128((const __m128i *)&v25);
  qword_2CDF860 = (__int64)off_2C4B778;
  qword_2CDF8E0 = (__int64)v27;
  xmmword_2CDF908 = (__int128)v7;
  qword_2CDF8F0 = (__int64)off_2BC0BC8;
  dword_2CDF8D8 = 0;
  dword_2CDF8E8 = 0;
  byte_2CDF8EC = 0;
  v8 = j__strlen("unswitch-num-initial-unscaled-candidates");
  sub_21F3510(&qword_2CDF860, "unswitch-num-initial-unscaled-candidates", v8);
  dword_2CDF8D8 = 8;
  qword_2CDF888 = v26;
  byte_2CDF8EC = 1;
  byte_2CDF86A = byte_2CDF86A & 0x9F | 0x20;
  qword_2CDF880 = (__int64)"Number of unswitch candidates that are ignored when calculating cost multiplier.";
  dword_2CDF8E8 = 8;
  sub_21F4400(&qword_2CDF860);
  __cxa_atexit(sub_1FF0490, &qword_2CDF860, &off_2AFC540);
  v9 = j__strlen(
         "If enabled, simple loop unswitching will also consider llvm.experimental.guard intrinsics as unswitch candidates.");
  sub_1FEBAE0(&qword_2CDF7A0, 0, 0);
  v10 = _mm_load_si128((const __m128i *)&v24);
  qword_2CDF820 = (__int64)off_2C474E8;
  word_2CDF828 = 0;
  xmmword_2CDF848 = (__int128)v10;
  qword_2CDF7A0 = (__int64)off_2C4B848;
  qword_2CDF830 = (__int64)off_2BC0B68;
  byte_2CDF818 = 0;
  v11 = j__strlen("simple-loop-unswitch-guards");
  sub_21F3510(&qword_2CDF7A0, "simple-loop-unswitch-guards", v11);
  word_2CDF828 = 257;
  qword_2CDF7C8 = v9;
  byte_2CDF818 = 1;
  byte_2CDF7AA = byte_2CDF7AA & 0x9F | 0x20;
  qword_2CDF7C0 = (__int64)"If enabled, simple loop unswitching will also consider llvm.experimental.guard intrinsics as "
                           "unswitch candidates.";
  sub_21F4400(&qword_2CDF7A0);
  __cxa_atexit(sub_1FEA450, &qword_2CDF7A0, &off_2AFC540);
  v12 = j__strlen(
          "If enabled, drop make.implicit metadata in unswitched implicit null checks to save time analyzing if we can keep it.");
  sub_1FEBAE0(&qword_2CDF6E0, 0, 0);
  v13 = _mm_load_si128((const __m128i *)&v24);
  word_2CDF768 = 0;
  xmmword_2CDF788 = (__int128)v13;
  qword_2CDF760 = (__int64)off_2C474E8;
  qword_2CDF6E0 = (__int64)off_2C4B848;
  qword_2CDF770 = (__int64)off_2BC0B68;
  byte_2CDF758 = 0;
  v14 = j__strlen("simple-loop-unswitch-drop-non-trivial-implicit-null-checks");
  sub_21F3510(&qword_2CDF6E0, "simple-loop-unswitch-drop-non-trivial-implicit-null-checks", v14);
  word_2CDF768 = 256;
  qword_2CDF708 = v12;
  byte_2CDF758 = 0;
  byte_2CDF6EA = byte_2CDF6EA & 0x9F | 0x20;
  qword_2CDF700 = (__int64)"If enabled, drop make.implicit metadata in unswitched implicit null checks to save time analy"
                           "zing if we can keep it.";
  sub_21F4400(&qword_2CDF6E0);
  __cxa_atexit(sub_1FEA450, &qword_2CDF6E0, &off_2AFC540);
  v26 = j__strlen("Max number of memory uses to explore during partial unswitching analysis");
  sub_1FEBAE0(&qword_2CDF620, 0, 0);
  dword_2CDF698 = 0;
  dword_2CDF6A8 = 0;
  v27 = off_2C472D0;
  v25 = _mm_loadh_ps((const double *)off_2C4E4F8);
  qword_2CDF6A0 = (__int64)off_2C472D0;
  xmmword_2CDF6C8 = (__int128)v25;
  qword_2CDF620 = (__int64)off_2C4B710;
  qword_2CDF6B0 = (__int64)off_2BC0BF8;
  byte_2CDF6AC = 0;
  v15 = j__strlen("simple-loop-unswitch-memoryssa-threshold");
  sub_21F3510(&qword_2CDF620, "simple-loop-unswitch-memoryssa-threshold", v15);
  qword_2CDF640 = (__int64)"Max number of memory uses to explore during partial unswitching analysis";
  qword_2CDF648 = v26;
  dword_2CDF698 = 100;
  byte_2CDF6AC = 1;
  byte_2CDF62A = byte_2CDF62A & 0x9F | 0x20;
  dword_2CDF6A8 = 100;
  sub_21F4400(&qword_2CDF620);
  __cxa_atexit(sub_1FC9520, &qword_2CDF620, &off_2AFC540);
  v26 = j__strlen("If enabled, the freeze instruction will be added to condition of loop unswitch to prevent miscompilation.");
  sub_1FEBAE0(&qword_2CDF560, 0, 0);
  v16 = _mm_load_si128((const __m128i *)&v24);
  word_2CDF5E8 = 0;
  xmmword_2CDF608 = (__int128)v16;
  qword_2CDF5E0 = (__int64)off_2C474E8;
  qword_2CDF560 = (__int64)off_2C4B848;
  qword_2CDF5F0 = (__int64)off_2BC0B68;
  byte_2CDF5D8 = 0;
  v17 = j__strlen("freeze-loop-unswitch-cond");
  sub_21F3510(&qword_2CDF560, "freeze-loop-unswitch-cond", v17);
  word_2CDF5E8 = 257;
  qword_2CDF588 = v26;
  byte_2CDF5D8 = 1;
  byte_2CDF56A = byte_2CDF56A & 0x9F | 0x20;
  qword_2CDF580 = (__int64)"If enabled, the freeze instruction will be added to condition of loop unswitch to prevent miscompilation.";
  sub_21F4400(&qword_2CDF560);
  __cxa_atexit(sub_1FEA450, &qword_2CDF560, &off_2AFC540);
  v26 = j__strlen(
          "Whether we should inject new invariants and unswitch them to eliminate some existing (non-invariant) conditions.");
  sub_1FEBAE0(&qword_2CDF4A0, 0, 0);
  v18 = _mm_load_si128((const __m128i *)&v24);
  qword_2CDF520 = (__int64)off_2C474E8;
  xmmword_2CDF548 = (__int128)v18;
  qword_2CDF4A0 = (__int64)off_2C4B848;
  qword_2CDF530 = (__int64)off_2BC0B68;
  byte_2CDF518 = 0;
  word_2CDF528 = 0;
  v19 = j__strlen("simple-loop-unswitch-inject-invariant-conditions");
  sub_21F3510(&qword_2CDF4A0, "simple-loop-unswitch-inject-invariant-conditions", v19);
  byte_2CDF518 = 1;
  qword_2CDF4C8 = v26;
  byte_2CDF4AA = byte_2CDF4AA & 0x9F | 0x20;
  qword_2CDF4C0 = (__int64)"Whether we should inject new invariants and unswitch them to eliminate some existing (non-inv"
                           "ariant) conditions.";
  word_2CDF528 = 257;
  sub_21F4400(&qword_2CDF4A0);
  __cxa_atexit(sub_1FEA450, &qword_2CDF4A0, &off_2AFC540);
  v20 = j__strlen(
          "Only try to inject loop invariant conditions and unswitch on them to eliminate branches that are not-taken 1/<"
          "this option> times or less.");
  sub_1FEBAE0(&qword_2CDF3E0, 0, 0);
  v21 = _mm_load_si128((const __m128i *)&v25);
  qword_2CDF3E0 = (__int64)off_2C4B710;
  qword_2CDF460 = (__int64)v27;
  xmmword_2CDF488 = (__int128)v21;
  qword_2CDF470 = (__int64)off_2BC0BF8;
  dword_2CDF458 = 0;
  dword_2CDF468 = 0;
  byte_2CDF46C = 0;
  v22 = j__strlen("simple-loop-unswitch-inject-invariant-condition-hotness-threshold");
  sub_21F3510(&qword_2CDF3E0, "simple-loop-unswitch-inject-invariant-condition-hotness-threshold", v22);
  qword_2CDF408 = v20;
  dword_2CDF458 = 16;
  byte_2CDF46C = 1;
  dword_2CDF468 = 16;
  byte_2CDF3EA = byte_2CDF3EA & 0x9F | 0x20;
  qword_2CDF400 = (__int64)"Only try to inject loop invariant conditions and unswitch on them to eliminate branches that "
                           "are not-taken 1/<this option> times or less.";
  sub_21F4400(&qword_2CDF3E0);
  return __cxa_atexit(sub_1FC9520, &qword_2CDF3E0, &off_2AFC540);
}

