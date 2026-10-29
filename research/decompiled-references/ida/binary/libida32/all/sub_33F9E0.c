int sub_33F9E0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-F0h]
  int v7; // [rsp+10h] [rbp-E8h] BYREF
  int v8; // [rsp+14h] [rbp-E4h] BYREF
  int *v9; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v10[2]; // [rsp+20h] [rbp-D8h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-B8h] BYREF
  int v13; // [rsp+50h] [rbp-A8h]
  const char *v14; // [rsp+58h] [rbp-A0h]
  __int64 v15; // [rsp+60h] [rbp-98h]
  char *v16; // [rsp+68h] [rbp-90h]
  __int64 v17; // [rsp+70h] [rbp-88h]
  int v18; // [rsp+78h] [rbp-80h]
  const char *v19; // [rsp+80h] [rbp-78h]
  __int64 v20; // [rsp+88h] [rbp-70h]
  char *v21; // [rsp+90h] [rbp-68h]
  __int64 v22; // [rsp+98h] [rbp-60h]
  int v23; // [rsp+A0h] [rbp-58h]
  const char *v24; // [rsp+A8h] [rbp-50h]
  __int64 v25; // [rsp+B0h] [rbp-48h]

  v8 = 2;
  v9 = &v8;
  v12[0] = "scev";
  v14 = "Use the scalar evolution interface";
  v16 = "da";
  v19 = "Use the dependence analysis interface";
  v21 = "all";
  v24 = "Use all available analyses";
  v7 = 1;
  ptr[0] = v12;
  v12[1] = 4;
  v13 = 0;
  v15 = 34;
  v17 = 2;
  v18 = 1;
  v20 = 37;
  v22 = 3;
  v23 = 2;
  v25 = 26;
  ptr[1] = (void *)0x400000003LL;
  v10[1] = j__strlen("Which dependence analysis should loop fusion use?");
  v10[0] = "Which dependence analysis should loop fusion use?";
  sub_21C70B0(&unk_2CDA6A0, "loop-fusion-dependence-analysis", v10, ptr, &v7, &v9);
  if ( ptr[0] != v12 )
    free(ptr[0]);
  __cxa_atexit(sub_21C6F70, &unk_2CDA6A0, &off_2AFC540);
  v0 = j__strlen("Max number of iterations to be peeled from a loop, such that fusion can take place");
  qword_2CDA620 = (__int64)&unk_2CDA630;
  v1 = v0;
  qword_2CDA5F0 = 0;
  qword_2CDA5F8 = 0;
  qword_2CDA600 = 0;
  qword_2CDA5E0 = (__int64)&off_2C4B8B0;
  qword_2CDA5E8 = (unsigned int)qword_2CDA5E8 & 0x80000000;
  qword_2CDA628 = 0x100000000LL;
  qword_2CDA608 = 0;
  qword_2CDA610 = 0;
  qword_2CDA618 = 0;
  qword_2CDA638 = (__int64)&unk_2CDA650;
  qword_2CDA640 = 1;
  dword_2CDA648 = 0;
  byte_2CDA64C = 1;
  v2 = sub_21ED2B0("Max number of iterations to be peeled from a loop, such that fusion can take place");
  v3 = (unsigned int)qword_2CDA628;
  v4 = (unsigned int)qword_2CDA628 + 1LL;
  if ( v4 > HIDWORD(qword_2CDA628) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CDA630 - 16, &unk_2CDA630, v4, 8);
    v3 = (unsigned int)qword_2CDA628;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CDA620 + 8 * v3) = v2;
  xmmword_2CDA688 = (__int128)_mm_loadh_ps((const double *)off_2C4E4F8);
  LODWORD(qword_2CDA628) = qword_2CDA628 + 1;
  qword_2CDA660 = (__int64)off_2C472D0;
  dword_2CDA658 = 0;
  byte_2CDA66C = 0;
  qword_2CDA5E0 = (__int64)off_2C4B710;
  dword_2CDA668 = 0;
  qword_2CDA670 = (__int64)off_2BC0BF8;
  sub_21F3510(&qword_2CDA5E0, "loop-fusion-peel-max-count", 26);
  qword_2CDA608 = v1;
  dword_2CDA658 = 0;
  byte_2CDA66C = 1;
  dword_2CDA668 = 0;
  BYTE2(qword_2CDA5E8) = BYTE2(qword_2CDA5E8) & 0x9F | 0x20;
  qword_2CDA600 = (__int64)"Max number of iterations to be peeled from a loop, such that fusion can take place";
  sub_21F4400(&qword_2CDA5E0);
  return __cxa_atexit(sub_1FC9520, &qword_2CDA5E0, &off_2AFC540);
}

