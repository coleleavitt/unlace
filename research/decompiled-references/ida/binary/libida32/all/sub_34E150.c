int sub_34E150()
{
  size_t v0; // rax
  __int64 v1; // r13
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm2
  size_t v12; // rax
  size_t v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __m128i v18; // xmm3
  size_t v19; // rax
  size_t v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  size_t v25; // rax
  __m128i v27; // [rsp+0h] [rbp-58h] BYREF
  __int64 v28; // [rsp+18h] [rbp-40h]

  v0 = j__strlen("Convert noalias attributes to metadata during inlining.");
  qword_2CE3650 = 0;
  v1 = v0;
  qword_2CE3658 = 0;
  qword_2CE3660 = 0;
  qword_2CE3640 = (__int64)&off_2C4B8B0;
  qword_2CE3648 = (unsigned int)qword_2CE3648 & 0x80000000;
  qword_2CE3688 = 0x100000000LL;
  qword_2CE3668 = 0;
  qword_2CE3670 = 0;
  qword_2CE3678 = 0;
  qword_2CE3680 = (__int64)&unk_2CE3690;
  qword_2CE3698 = (__int64)&unk_2CE36B0;
  qword_2CE36A0 = 1;
  dword_2CE36A8 = 0;
  byte_2CE36AC = 1;
  v2 = sub_21ED2B0("Convert noalias attributes to metadata during inlining.");
  v3 = (unsigned int)qword_2CE3688;
  v4 = (unsigned int)qword_2CE3688 + 1LL;
  if ( v4 > HIDWORD(qword_2CE3688) )
  {
    v27.m128i_i64[0] = v2;
    sub_22134E0((char *)&unk_2CE3690 - 16, &unk_2CE3690, v4, 8);
    v3 = (unsigned int)qword_2CE3688;
    v2 = v27.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE3680 + 8 * v3) = v2;
  qword_2CE36C0 = (__int64)off_2C474E8;
  word_2CE36C8 = 0;
  qword_2CE3640 = (__int64)off_2C4B848;
  v27 = (__m128i)_mm_loadh_ps((const double *)off_2C4E368);
  xmmword_2CE36E8 = (__int128)v27;
  LODWORD(qword_2CE3688) = qword_2CE3688 + 1;
  byte_2CE36B8 = 0;
  qword_2CE36D0 = (__int64)off_2BC0B68;
  v5 = j__strlen("enable-noalias-to-md-conversion");
  sub_21F3510(&qword_2CE3640, "enable-noalias-to-md-conversion", v5);
  word_2CE36C8 = 257;
  qword_2CE3668 = v1;
  byte_2CE36B8 = 1;
  BYTE2(qword_2CE3648) = BYTE2(qword_2CE3648) & 0x9F | 0x20;
  qword_2CE3660 = (__int64)"Convert noalias attributes to metadata during inlining.";
  sub_21F4400(&qword_2CE3640);
  __cxa_atexit(sub_1FEA450, &qword_2CE3640, &off_2AFC540);
  v6 = j__strlen("Use the llvm.experimental.noalias.scope.decl intrinsic during inlining.");
  qword_2CE35C0 = (__int64)&unk_2CE35D0;
  v7 = v6;
  qword_2CE3590 = 0;
  qword_2CE3580 = (__int64)&off_2C4B8B0;
  qword_2CE3588 = (unsigned int)qword_2CE3588 & 0x80000000;
  qword_2CE35C8 = 0x100000000LL;
  qword_2CE3598 = 0;
  qword_2CE35A0 = 0;
  qword_2CE35A8 = 0;
  qword_2CE35B0 = 0;
  qword_2CE35B8 = 0;
  qword_2CE35D8 = (__int64)&unk_2CE35F0;
  qword_2CE35E0 = 1;
  dword_2CE35E8 = 0;
  byte_2CE35EC = 1;
  v8 = sub_21ED2B0("Use the llvm.experimental.noalias.scope.decl intrinsic during inlining.");
  v9 = (unsigned int)qword_2CE35C8;
  v10 = (unsigned int)qword_2CE35C8 + 1LL;
  if ( v10 > HIDWORD(qword_2CE35C8) )
  {
    v28 = v8;
    sub_22134E0((char *)&unk_2CE35D0 - 16, &unk_2CE35D0, v10, 8);
    v9 = (unsigned int)qword_2CE35C8;
    v8 = v28;
  }
  v11 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_2CE35C0 + 8 * v9) = v8;
  qword_2CE3600 = (__int64)off_2C474E8;
  qword_2CE3580 = (__int64)off_2C4B848;
  word_2CE3608 = 0;
  xmmword_2CE3628 = (__int128)v11;
  LODWORD(qword_2CE35C8) = qword_2CE35C8 + 1;
  byte_2CE35F8 = 0;
  qword_2CE3610 = (__int64)off_2BC0B68;
  v12 = j__strlen("use-noalias-intrinsic-during-inlining");
  sub_21F3510(&qword_2CE3580, "use-noalias-intrinsic-during-inlining", v12);
  word_2CE3608 = 257;
  qword_2CE35A8 = v7;
  byte_2CE35F8 = 1;
  BYTE2(qword_2CE3588) = BYTE2(qword_2CE3588) & 0x9F | 0x20;
  qword_2CE35A0 = (__int64)"Use the llvm.experimental.noalias.scope.decl intrinsic during inlining.";
  sub_21F4400(&qword_2CE3580);
  __cxa_atexit(sub_1FEA450, &qword_2CE3580, &off_2AFC540);
  v13 = j__strlen("Convert align attributes to assumptions during inlining.");
  qword_2CE3500 = (__int64)&unk_2CE3510;
  v14 = v13;
  qword_2CE34D0 = 0;
  qword_2CE34C0 = (__int64)&off_2C4B8B0;
  qword_2CE34C8 = (unsigned int)qword_2CE34C8 & 0x80000000;
  qword_2CE3508 = 0x100000000LL;
  qword_2CE34D8 = 0;
  qword_2CE34E0 = 0;
  qword_2CE34E8 = 0;
  qword_2CE34F0 = 0;
  qword_2CE34F8 = 0;
  qword_2CE3518 = (__int64)&unk_2CE3530;
  qword_2CE3520 = 1;
  dword_2CE3528 = 0;
  byte_2CE352C = 1;
  v15 = sub_21ED2B0("Convert align attributes to assumptions during inlining.");
  v16 = (unsigned int)qword_2CE3508;
  v17 = (unsigned int)qword_2CE3508 + 1LL;
  if ( v17 > HIDWORD(qword_2CE3508) )
  {
    v28 = v15;
    sub_22134E0((char *)&unk_2CE3510 - 16, &unk_2CE3510, v17, 8);
    v16 = (unsigned int)qword_2CE3508;
    v15 = v28;
  }
  v18 = _mm_load_si128(&v27);
  *(_QWORD *)(qword_2CE3500 + 8 * v16) = v15;
  word_2CE3548 = 0;
  qword_2CE3540 = (__int64)off_2C474E8;
  qword_2CE34C0 = (__int64)off_2C4B848;
  xmmword_2CE3568 = (__int128)v18;
  LODWORD(qword_2CE3508) = qword_2CE3508 + 1;
  byte_2CE3538 = 0;
  qword_2CE3550 = (__int64)off_2BC0B68;
  v19 = j__strlen("preserve-alignment-assumptions-during-inlining");
  sub_21F3510(&qword_2CE34C0, "preserve-alignment-assumptions-during-inlining", v19);
  word_2CE3548 = 256;
  byte_2CE3538 = 0;
  qword_2CE34E8 = v14;
  BYTE2(qword_2CE34C8) = BYTE2(qword_2CE34C8) & 0x9F | 0x20;
  qword_2CE34E0 = (__int64)"Convert align attributes to assumptions during inlining.";
  sub_21F4400(&qword_2CE34C0);
  __cxa_atexit(sub_1FEA450, &qword_2CE34C0, &off_2AFC540);
  v20 = j__strlen("the maximum number of instructions analyzed for may throw during attribute inference in inlined body");
  byte_2CE346C = 1;
  qword_2CE3410 = 0;
  v21 = v20;
  qword_2CE3400 = (__int64)&off_2C4B8B0;
  qword_2CE3408 = (unsigned int)qword_2CE3408 & 0x80000000;
  qword_2CE3448 = 0x100000000LL;
  qword_2CE3418 = 0;
  qword_2CE3420 = 0;
  qword_2CE3428 = 0;
  qword_2CE3430 = 0;
  qword_2CE3438 = 0;
  qword_2CE3440 = (__int64)&unk_2CE3450;
  qword_2CE3458 = (__int64)&unk_2CE3470;
  qword_2CE3460 = 1;
  dword_2CE3468 = 0;
  v22 = sub_21ED2B0("the maximum number of instructions analyzed for may throw during attribute inference in inlined body");
  v23 = (unsigned int)qword_2CE3448;
  v24 = (unsigned int)qword_2CE3448 + 1LL;
  if ( v24 > HIDWORD(qword_2CE3448) )
  {
    v27.m128i_i64[0] = v22;
    sub_22134E0((char *)&unk_2CE3450 - 16, &unk_2CE3450, v24, 8);
    v23 = (unsigned int)qword_2CE3448;
    v22 = v27.m128i_i64[0];
  }
  *(_QWORD *)(qword_2CE3440 + 8 * v23) = v22;
  xmmword_2CE34A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CE3448) = qword_2CE3448 + 1;
  qword_2CE3480 = (__int64)off_2C472D0;
  dword_2CE3478 = 0;
  byte_2CE348C = 0;
  qword_2CE3400 = (__int64)off_2C4B710;
  dword_2CE3488 = 0;
  qword_2CE3490 = (__int64)off_2BC0BF8;
  v25 = j__strlen("max-inst-checked-for-throw-during-inlining");
  sub_21F3510(&qword_2CE3400, "max-inst-checked-for-throw-during-inlining", v25);
  qword_2CE3428 = v21;
  dword_2CE3478 = 4;
  byte_2CE348C = 1;
  dword_2CE3488 = 4;
  BYTE2(qword_2CE3408) = BYTE2(qword_2CE3408) & 0x9F | 0x20;
  qword_2CE3420 = (__int64)"the maximum number of instructions analyzed for may throw during attribute inference in inlined body";
  sub_21F4400(&qword_2CE3400);
  return __cxa_atexit(sub_1FC9520, &qword_2CE3400, &off_2AFC540);
}

