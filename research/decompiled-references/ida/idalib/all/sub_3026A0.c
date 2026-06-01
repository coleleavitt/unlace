int __fastcall sub_3026A0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v9; // [rsp+8h] [rbp-F0h]
  int v10; // [rsp+14h] [rbp-E4h] BYREF
  void *v11; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-B8h] BYREF
  int v15; // [rsp+50h] [rbp-A8h]
  const char *v16; // [rsp+58h] [rbp-A0h]
  __int64 v17; // [rsp+60h] [rbp-98h]
  char *v18; // [rsp+68h] [rbp-90h]
  __int64 v19; // [rsp+70h] [rbp-88h]
  int v20; // [rsp+78h] [rbp-80h]
  const char *v21; // [rsp+80h] [rbp-78h]
  __int64 v22; // [rsp+88h] [rbp-70h]
  char *v23; // [rsp+90h] [rbp-68h]
  __int64 v24; // [rsp+98h] [rbp-60h]
  int v25; // [rsp+A0h] [rbp-58h]
  const char *v26; // [rsp+A8h] [rbp-50h]
  __int64 v27; // [rsp+B0h] [rbp-48h]

  v2 = j__strlen("Verify region info (time consuming)");
  qword_2CE1B00 = (__int64)&unk_2CE1B10;
  v3 = v2;
  qword_2CE1AD0 = 0;
  qword_2CE1AD8 = 0;
  qword_2CE1AE0 = 0;
  qword_2CE1AC0 = (__int64)&off_2C758B0;
  qword_2CE1AC8 = (unsigned int)qword_2CE1AC8 & 0x80000000;
  qword_2CE1B08 = 0x100000000LL;
  qword_2CE1AE8 = 0;
  qword_2CE1AF0 = 0;
  qword_2CE1AF8 = 0;
  qword_2CE1B18 = (__int64)&unk_2CE1B30;
  qword_2CE1B20 = 1;
  dword_2CE1B28 = 0;
  byte_2CE1B2C = 1;
  v4 = sub_2210FF0("Verify region info (time consuming)", a2);
  v5 = (unsigned int)qword_2CE1B08;
  v6 = (unsigned int)qword_2CE1B08 + 1LL;
  if ( v6 > HIDWORD(qword_2CE1B08) )
  {
    v9 = v4;
    sub_2237220((char *)&unk_2CE1B10 - 16, &unk_2CE1B10, v6, 8);
    v5 = (unsigned int)qword_2CE1B08;
    v4 = v9;
  }
  *(_QWORD *)(qword_2CE1B00 + 8 * v5) = v4;
  LODWORD(qword_2CE1B08) = qword_2CE1B08 + 1;
  byte_2CE1B49 = 0;
  qword_2CE1B40 = (__int64)off_2C714E8;
  qword_2CE1B38 = 0;
  xmmword_2CE1B68 = (__int128)_mm_loadh_ps((const double *)off_2C778E8);
  qword_2CE1AC0 = (__int64)off_2C71D10;
  qword_2CE1B50 = (__int64)off_2BEAB08;
  sub_2217250(&qword_2CE1AC0, "verify-region-info", 18);
  if ( qword_2CE1B38 )
  {
    v7 = sub_227D6D0();
    LOWORD(v15) = 259;
    ptr[0] = "cl::location(x) specified more than once!";
    sub_22116C0(&qword_2CE1AC0, ptr, 0, 0, v7);
  }
  else
  {
    byte_2CE1B49 = 1;
    qword_2CE1B38 = (__int64)byte_2CE1B7C;
    byte_2CE1B48 = byte_2CE1B7C[0];
  }
  qword_2CE1AE8 = v3;
  qword_2CE1AE0 = (__int64)"Verify region info (time consuming)";
  sub_2218140(&qword_2CE1AC0);
  __cxa_atexit(sub_2015670, &qword_2CE1AC0, &off_2B25620);
  ptr[0] = v14;
  v14[0] = "none";
  v16 = "print no details";
  v18 = "bb";
  v21 = "print regions in detail with block_iterator";
  v23 = "rn";
  v26 = "print regions in detail with element_iterator";
  v14[1] = 4;
  v15 = 0;
  v17 = 16;
  v19 = 2;
  v20 = 1;
  v22 = 43;
  v24 = 2;
  v25 = 2;
  v27 = 45;
  ptr[1] = (void *)0x400000003LL;
  v12[1] = j__strlen("style of printing regions");
  v12[0] = "style of printing regions";
  v10 = 1;
  v11 = &unk_2CE1B78;
  sub_2019100(&unk_2CE1860, "print-region-style", &v11, &v10, v12, ptr);
  if ( ptr[0] != v14 )
    free(ptr[0]);
  return __cxa_atexit(sub_2018FC0, &unk_2CE1860, &off_2B25620);
}
