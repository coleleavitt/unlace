int __fastcall sub_2F79A0(__int64 a1, __int64 a2)
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
  unk_2CDC450 = 0;
  qword_2CDC440 = &off_2C758B0;
  *(_QWORD *)&dword_2CDC448 = dword_2CDC448 & 0x80000000;
  qword_2CDC480[1] = 0x100000000LL;
  unk_2CDC458 = 0;
  unk_2CDC460 = 0;
  unk_2CDC468 = 0;
  unk_2CDC470 = 0;
  unk_2CDC478 = 0;
  qword_2CDC480[0] = &qword_2CDC480[2];
  qword_2CDC480[3] = &qword_2CDC480[6];
  qword_2CDC480[4] = 1;
  LODWORD(qword_2CDC480[5]) = 0;
  BYTE4(qword_2CDC480[5]) = 1;
  v3 = sub_2210FF0("Use the specified contextual profile file", a2);
  v4 = LODWORD(qword_2CDC480[1]);
  if ( (unsigned __int64)LODWORD(qword_2CDC480[1]) + 1 > HIDWORD(qword_2CDC480[1]) )
  {
    v11 = (_QWORD *)v3;
    sub_2237220(qword_2CDC480, &qword_2CDC480[2], LODWORD(qword_2CDC480[1]) + 1LL, 8);
    v4 = LODWORD(qword_2CDC480[1]);
    v3 = (__int64)v11;
  }
  *(_QWORD *)(qword_2CDC480[0] + 8 * v4) = v3;
  qword_2CDC480[7] = &qword_2CDC480[9];
  ++LODWORD(qword_2CDC480[1]);
  v11 = &qword_2CDC480[14];
  qword_2CDC480[8] = 0;
  LOBYTE(qword_2CDC480[9]) = 0;
  qword_2CDC440 = off_2C757E0;
  *(__m128 *)&qword_2CDC480[11] = _mm_loadh_ps((const double *)&v11);
  LOBYTE(qword_2CDC480[14]) = 0;
  qword_2CDC480[17] = off_2BEAC58;
  qword_2CDC480[13] = 0;
  LOBYTE(qword_2CDC480[16]) = 0;
  *(__m128 *)&qword_2CDC480[20] = _mm_loadh_ps((const double *)off_2C77938);
  sub_2217250(&qword_2CDC440, "use-ctx-profile", 15);
  ptr[0] = v17;
  sub_2012000(ptr, &byte_22F0C30);
  sub_9EE8A0(&qword_2CDC480[7], ptr);
  LOBYTE(qword_2CDC480[16]) = 1;
  sub_9EE8A0(&qword_2CDC480[12], ptr);
  if ( ptr[0] != v17 )
    operator delete(ptr[0]);
  unk_2CDC468 = v2;
  BYTE2(dword_2CDC448) = BYTE2(dword_2CDC448) & 0x9F | 0x20;
  unk_2CDC460 = "Use the specified contextual profile file";
  sub_2218140(&qword_2CDC440);
  __cxa_atexit(sub_1FED2E0, &qword_2CDC440, &off_2B25620);
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
  sub_20120C0(&unk_2CDC1E0, "ctx-profile-printer-level", &v14, &v13, ptr, v15);
  if ( ptr[0] != v17 )
    free(ptr[0]);
  __cxa_atexit(sub_2011F60, &unk_2CDC1E0, &off_2B25620);
  v5 = j__strlen("Treat the given module as-if it were containing the post-thinlink module containing the root");
  qword_2CDC160 = (__int64)&unk_2CDC170;
  v6 = v5;
  qword_2CDC130 = 0;
  qword_2CDC120 = (__int64)&off_2C758B0;
  qword_2CDC128 = (unsigned int)qword_2CDC128 & 0x80000000;
  qword_2CDC168 = 0x100000000LL;
  qword_2CDC138 = 0;
  qword_2CDC140 = 0;
  qword_2CDC148 = 0;
  qword_2CDC150 = 0;
  qword_2CDC158 = 0;
  qword_2CDC178 = (__int64)&unk_2CDC190;
  qword_2CDC180 = 1;
  dword_2CDC188 = 0;
  byte_2CDC18C = 1;
  v7 = sub_2210FF0(
         "Treat the given module as-if it were containing the post-thinlink module containing the root",
         &unk_2CDC1E0);
  v8 = (unsigned int)qword_2CDC168;
  v9 = (unsigned int)qword_2CDC168 + 1LL;
  if ( v9 > HIDWORD(qword_2CDC168) )
  {
    v11 = (_QWORD *)v7;
    sub_2237220((char *)&unk_2CDC170 - 16, &unk_2CDC170, v9, 8);
    v8 = (unsigned int)qword_2CDC168;
    v7 = (__int64)v11;
  }
  *(_QWORD *)(qword_2CDC160 + 8 * v8) = v7;
  word_2CDC1A8 = 0;
  xmmword_2CDC1C8 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CDC168) = qword_2CDC168 + 1;
  qword_2CDC1A0 = (__int64)off_2C714E8;
  byte_2CDC198 = 0;
  qword_2CDC120 = (__int64)off_2C75848;
  qword_2CDC1B0 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CDC120, "ctx-profile-force-is-specialized", 32);
  word_2CDC1A8 = 256;
  qword_2CDC140 = (__int64)"Treat the given module as-if it were containing the post-thinlink module containing the root";
  qword_2CDC148 = v6;
  byte_2CDC198 = 0;
  sub_2218140(&qword_2CDC120);
  return __cxa_atexit(sub_200E190, &qword_2CDC120, &off_2B25620);
}
