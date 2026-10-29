int __fastcall sub_2F43F0(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v8; // [rsp+8h] [rbp-20h]

  v2 = j__strlen("Disable constant-folding of FP intrinsics and libcalls.");
  qword_2CB2180 = (__int64)&unk_2CB2190;
  v3 = v2;
  qword_2CB2150 = 0;
  qword_2CB2158 = 0;
  qword_2CB2160 = 0;
  qword_2CB2140 = (__int64)&off_2C4B8B0;
  qword_2CB2148 = (unsigned int)qword_2CB2148 & 0x80000000;
  qword_2CB2188 = 0x100000000LL;
  qword_2CB2168 = 0;
  qword_2CB2170 = 0;
  qword_2CB2178 = 0;
  qword_2CB2198 = (__int64)&unk_2CB21B0;
  qword_2CB21A0 = 1;
  dword_2CB21A8 = 0;
  byte_2CB21AC = 1;
  v4 = sub_21ED2B0("Disable constant-folding of FP intrinsics and libcalls.", a2);
  v5 = (unsigned int)qword_2CB2188;
  v6 = (unsigned int)qword_2CB2188 + 1LL;
  if ( v6 > HIDWORD(qword_2CB2188) )
  {
    v8 = v4;
    sub_22134E0((char *)&unk_2CB2190 - 16, &unk_2CB2190, v6, 8);
    v5 = (unsigned int)qword_2CB2188;
    v4 = v8;
  }
  *(_QWORD *)(qword_2CB2180 + 8 * v5) = v4;
  word_2CB21C8 = 0;
  xmmword_2CB21E8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CB2188) = qword_2CB2188 + 1;
  qword_2CB21C0 = (__int64)off_2C474E8;
  byte_2CB21B8 = 0;
  qword_2CB2140 = (__int64)off_2C4B848;
  qword_2CB21D0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CB2140, "disable-fp-call-folding", 23);
  qword_2CB2160 = (__int64)"Disable constant-folding of FP intrinsics and libcalls.";
  qword_2CB2168 = v3;
  word_2CB21C8 = 256;
  byte_2CB21B8 = 0;
  BYTE2(qword_2CB2148) = BYTE2(qword_2CB2148) & 0x9F | 0x20;
  sub_21F4400(&qword_2CB2140);
  return __cxa_atexit(sub_1FEA450, &qword_2CB2140, &off_2AFC540);
}

