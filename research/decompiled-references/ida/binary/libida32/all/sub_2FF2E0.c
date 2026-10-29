int __fastcall sub_2FF2E0(__int64 a1, __int64 a2)
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
  qword_2CB7BE0 = (__int64)&unk_2CB7BF0;
  v3 = v2;
  qword_2CB7BB0 = 0;
  qword_2CB7BB8 = 0;
  qword_2CB7BC0 = 0;
  qword_2CB7BA0 = (__int64)&off_2C4B8B0;
  qword_2CB7BA8 = (unsigned int)qword_2CB7BA8 & 0x80000000;
  qword_2CB7BE8 = 0x100000000LL;
  qword_2CB7BC8 = 0;
  qword_2CB7BD0 = 0;
  qword_2CB7BD8 = 0;
  qword_2CB7BF8 = (__int64)&unk_2CB7C10;
  qword_2CB7C00 = 1;
  dword_2CB7C08 = 0;
  byte_2CB7C0C = 1;
  v4 = sub_21ED2B0("Verify region info (time consuming)", a2);
  v5 = (unsigned int)qword_2CB7BE8;
  v6 = (unsigned int)qword_2CB7BE8 + 1LL;
  if ( v6 > HIDWORD(qword_2CB7BE8) )
  {
    v9 = v4;
    sub_22134E0((char *)&unk_2CB7BF0 - 16, &unk_2CB7BF0, v6, 8);
    v5 = (unsigned int)qword_2CB7BE8;
    v4 = v9;
  }
  *(_QWORD *)(qword_2CB7BE0 + 8 * v5) = v4;
  LODWORD(qword_2CB7BE8) = qword_2CB7BE8 + 1;
  byte_2CB7C29 = 0;
  qword_2CB7C20 = (__int64)off_2C474E8;
  qword_2CB7C18 = 0;
  xmmword_2CB7C48 = (__int128)_mm_loadh_ps((const double *)off_2C4D8E8);
  qword_2CB7BA0 = (__int64)off_2C47D10;
  qword_2CB7C30 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CB7BA0, "verify-region-info", 18);
  if ( qword_2CB7C18 )
  {
    v7 = sub_2259990();
    LOWORD(v15) = 259;
    ptr[0] = "cl::location(x) specified more than once!";
    sub_21ED980(&qword_2CB7BA0, ptr, 0, 0, v7);
  }
  else
  {
    byte_2CB7C29 = 1;
    qword_2CB7C18 = (__int64)byte_2CB7C5C;
    byte_2CB7C28 = byte_2CB7C5C[0];
  }
  qword_2CB7BC8 = v3;
  qword_2CB7BC0 = (__int64)"Verify region info (time consuming)";
  sub_21F4400(&qword_2CB7BA0);
  __cxa_atexit(sub_1FF1930, &qword_2CB7BA0, &off_2AFC540);
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
  v11 = &unk_2CB7C58;
  sub_1FF53C0(&unk_2CB7940, "print-region-style", &v11, &v10, v12, ptr);
  if ( ptr[0] != v14 )
    free(ptr[0]);
  return __cxa_atexit(sub_1FF5280, &unk_2CB7940, &off_2AFC540);
}

