int __fastcall sub_2F9340(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 v6; // [rsp+8h] [rbp-10h]

  qword_2CB5550 = 0;
  qword_2CB5558 = 0;
  qword_2CB5560 = 0;
  qword_2CB5540 = (__int64)&off_2C4B8B0;
  qword_2CB5548 = (unsigned int)qword_2CB5548 & 0x80000000;
  qword_2CB5588 = 0x100000000LL;
  qword_2CB5568 = 0;
  qword_2CB5570 = 0;
  qword_2CB5578 = 0;
  qword_2CB5580 = (__int64)&unk_2CB5590;
  qword_2CB5598 = (__int64)&unk_2CB55B0;
  qword_2CB55A0 = 1;
  dword_2CB55A8 = 0;
  byte_2CB55AC = 1;
  v2 = sub_21ED2B0(a1, a2);
  v3 = (unsigned int)qword_2CB5588;
  v4 = (unsigned int)qword_2CB5588 + 1LL;
  if ( v4 > HIDWORD(qword_2CB5588) )
  {
    v6 = v2;
    sub_22134E0((char *)&unk_2CB5590 - 16, &unk_2CB5590, v4, 8);
    v3 = (unsigned int)qword_2CB5588;
    v2 = v6;
  }
  *(_QWORD *)(qword_2CB5580 + 8 * v3) = v2;
  word_2CB55C8 = 0;
  xmmword_2CB55E8 = (__int128)_mm_loadh_ps((const double *)off_2C4E368);
  LODWORD(qword_2CB5588) = qword_2CB5588 + 1;
  qword_2CB55C0 = (__int64)off_2C474E8;
  byte_2CB55B8 = 0;
  qword_2CB5540 = (__int64)off_2C4B848;
  qword_2CB55D0 = (__int64)off_2BC0B68;
  sub_21F3510(&qword_2CB5540, "interactive-model-runner-echo-reply", 35);
  word_2CB55C8 = 256;
  byte_2CB55B8 = 0;
  qword_2CB5568 = 109;
  BYTE2(qword_2CB5548) = BYTE2(qword_2CB5548) & 0x9F | 0x20;
  qword_2CB5560 = (__int64)"The InteractiveModelRunner will echo back to stderr the data received from the host (for debu"
                           "gging purposes).";
  sub_21F4400(&qword_2CB5540);
  return __cxa_atexit(sub_1FEA450, &qword_2CB5540, &off_2AFC540);
}

