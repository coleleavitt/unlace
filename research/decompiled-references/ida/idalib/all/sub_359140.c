int __fastcall sub_359140(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v5; // [rsp+8h] [rbp-10h]

  qword_2D11130 = 0;
  qword_2D11138 = 0;
  qword_2D11140 = 0;
  qword_2D11120 = (__int64)&off_2C758B0;
  qword_2D11128 = (unsigned int)qword_2D11128 & 0x80000000;
  qword_2D11168 = 0x100000000LL;
  qword_2D11148 = 0;
  qword_2D11150 = 0;
  qword_2D11158 = 0;
  qword_2D11160 = (__int64)&unk_2D11170;
  qword_2D11178 = (__int64)&unk_2D11190;
  qword_2D11180 = 1;
  dword_2D11188 = 0;
  byte_2D1118C = 1;
  v1 = sub_2210FF0(a1);
  v2 = (unsigned int)qword_2D11168;
  v3 = (unsigned int)qword_2D11168 + 1LL;
  if ( v3 > HIDWORD(qword_2D11168) )
  {
    v5 = v1;
    sub_2237220((char *)&unk_2D11170 - 16, &unk_2D11170, v3, 8);
    v2 = (unsigned int)qword_2D11168;
    v1 = v5;
  }
  *(_QWORD *)(qword_2D11160 + 8 * v2) = v1;
  xmmword_2D111C8 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  LODWORD(qword_2D11168) = qword_2D11168 + 1;
  qword_2D111A0 = (__int64)off_2C712D0;
  dword_2D11198 = 0;
  byte_2D111AC = 0;
  qword_2D11120 = (__int64)off_2C75710;
  dword_2D111A8 = 0;
  qword_2D111B0 = (__int64)off_2BEAB98;
  sub_2217250(&qword_2D11120, "max-booleans-in-control-flow-hub", 32);
  dword_2D11198 = 32;
  byte_2D111AC = 1;
  dword_2D111A8 = 32;
  qword_2D11148 = 118;
  BYTE2(qword_2D11128) = BYTE2(qword_2D11128) & 0x9F | 0x20;
  qword_2D11140 = (__int64)"Set the maximum number of outgoing blocks for using a boolean value to record the exiting blo"
                           "ck in the ControlFlowHub.";
  sub_2218140(&qword_2D11120);
  return __cxa_atexit(sub_1FED260, &qword_2D11120, &off_2B25620);
}
