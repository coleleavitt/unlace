int __fastcall sub_2F45E0(__int64 a1, __int64 a2)
{
  size_t v2; // r13
  __int64 v3; // rax
  __int64 v4; // rcx
  size_t v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  _QWORD *v11; // [rsp+8h] [rbp-100h] BYREF
  int v12; // [rsp+10h] [rbp-F8h] BYREF
  int v13; // [rsp+14h] [rbp-F4h] BYREF
  int *v14; // [rsp+18h] [rbp-F0h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-E8h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+50h] [rbp-B8h]
  const char *v19; // [rsp+58h] [rbp-B0h]
  __int64 v20; // [rsp+60h] [rbp-A8h]
  char *v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+70h] [rbp-98h]
  int v23; // [rsp+78h] [rbp-90h]
  const char *v24; // [rsp+80h] [rbp-88h]
  __int64 v25; // [rsp+88h] [rbp-80h]

  v2 = j__strlen("Use the specified contextual profile file");
  unk_2CB2530 = 0;
  qword_2CB2520 = &off_2C4B8B0;
  *(_QWORD *)&dword_2CB2528 = dword_2CB2528 & 0x80000000;
  qword_2CB2560[1] = 0x100000000LL;
  unk_2CB2538 = 0;
  unk_2CB2540 = 0;
  unk_2CB2548 = 0;
  unk_2CB2550 = 0;
  unk_2CB2558 = 0;
  qword_2CB2560[0] = &qword_2CB2560[2];
  qword_2CB2560[3] = &qword_2CB2560[6];
  qword_2CB2560[4] = 1;
  LODWORD(qword_2CB2560[5]) = 0;
  BYTE4(qword_2CB2560[5]) = 1;
  v3 = sub_21ED2B0("Use the specified contextual profile file", a2);
  v4 = LODWORD(qword_2CB2560[1]);
  if ( (unsigned __int64)LODWORD(qword_2CB2560[1]) + 1 > HIDWORD(qword_2CB2560[1]) )
  {
    v11 = (_QWORD *)v3;
    sub_22134E0(qword_2CB2560, &qword_2CB2560[2], LODWORD(qword_2CB2560[1]) + 1LL, 8);
    v4 = LODWORD(qword_2CB2560[1]);
    v3 = (__int64)v11;
  }
  *(_QWORD *)(qword_2CB2560[0] + 8 * v4) = v3;
  qword_2CB2560[7] = &qword_2CB2560[9];
  ++LODWORD(qword_2CB2560[1]);
  v11 = &qword_2CB2560[14];
  qword_2CB2560[8] = 0;
  LOBYTE(qword_2CB2560[9]) = 0;
  qword_2CB2520 = off_2C4B7E0;
  *(__m128 *)&qword_2CB2560[11] = _mm_loadh_ps((const double *)&v11);
  LOBYTE(qword_2CB2560[14]) = 0;
  qword_2CB2560[17] = off_2BC0CB8;
  qword_2CB2560[13] = 0;
  LOBYTE(qword_2CB2560[16]) = 0;
  *(__m128 *)&qword_2CB2560[20] = _mm_loadh_ps((const double *)off_2C4D938);
  sub_21F3510(&qword_2CB2520, "use-ctx-profile", 15);
  ptr[0] = v17;
  sub_1FEE2C0(ptr, &byte_22CD811);
  sub_9CAB60(&qword_2CB2560[7], ptr);
  LOBYTE(qword_2CB2560[16]) = 1;
  sub_9CAB60(&qword_2CB2560[12], ptr);
  if ( ptr[0] != v17 )
    operator delete(ptr[0]);
  unk_2CB2548 = v2;
  BYTE2(dword_2CB2528) = BYTE2(dword_2CB2528) & 0x9F | 0x20;
  unk_2CB2540 = "Use the specified contextual profile file";
  sub_21F4400(&qword_2CB2520);
  __cxa_atexit(sub_1FC95A0, &qword_2CB2520, &off_2AFC540);
  v15[1] = j__strlen("Verbosity level of the contextual profile printer pass.");
  v17[0] = "everything";
  v19 = "print everything - most verbose";
  v21 = "yaml";
  v24 = "just the yaml representation of the profile";
  v15[0] = "Verbosity level of the contextual profile printer pass.";
  ptr[1] = (void *)0x400000002LL;
  ptr[0] = v17;
  v17[1] = 10;
  v18 = 0;
  v20 = 31;
  v22 = 4;
  v23 = 1;
  v25 = 43;
  v13 = 1;
  v12 = 1;
  v14 = &v12;
  sub_1FEE380(&unk_2CB22C0, "ctx-profile-printer-level", &v14, &v13, ptr, v15);
  if ( ptr[0] != v17 )
    free(ptr[0]);
  __cxa_atexit(sub_1FEE220, &unk_2CB22C0, &off_2AFC540);
  v5 = j__strlen("Treat the given module as-if it were containing the post-thinlink module containing the root");
  qword_2CB2240 = (__int64)&unk_2CB2250;
  v6 = v5;
  qword_2CB2210 = 0;
  qword_2CB2200 = (__int64)&off_2C4B8B0;
  qword_2CB2208 = (unsigned int)qword_2CB2208 & 0x80000000;
  qword_2CB2248 = 0x100000000LL;
  qword_2CB2218 = 0;
  qword_2CB2220 = 0;
  qword_2CB2228 = 0;
  qword_2CB2230 = 0;
  qword_2CB2238 = 0;
  qword_2CB2258 = (__int64)&unk_2CB2270;
  qword_2CB2260 = 1;
  dword_2CB2268 = 0;
  byte_2CB226C = 1;
  v7 = sub_21ED2B0(
         "Treat the given module as-if it were containing the post-thinlink module containing the root",
         &unk_2CB22C0);
  v8 = (unsigned int)qword_2CB2248;
  v9 = (unsigned int)qword_2CB2248 + 1LL;
  if ( v9 > HIDWORD(qword_2CB2248) )
  {
    v11 = (_QWORD *)v7;
    sub_22134E0((char *)&unk_2CB2250 - 16, &unk_2CB2250, v9, 8);
    v8 = (unsigned int)qword_2CB2248;
    v7 = (__int64)v11;
  }
  *(_QWORD *)(qword_2CB2240 + 8 * v8) = v7;
  word_2CB2288 = 0;
  xmmword_2CB22A8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CB2248) = qword_2CB2248 + 1;
  qword_2CB2280 = (__int64)off_2C474E8;
  byte_2CB2278 = 0;
  qword_2CB2200 = (__int64)off_2C4B848;
  qword_2CB2290 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CB2200, "ctx-profile-force-is-specialized", 32);
  word_2CB2288 = 256;
  qword_2CB2220 = (__int64)"Treat the given module as-if it were containing the post-thinlink module containing the root";
  qword_2CB2228 = v6;
  byte_2CB2278 = 0;
  sub_21F4400(&qword_2CB2200);
  return __cxa_atexit(sub_1FEA450, &qword_2CB2200, &off_2AFC540);
}

