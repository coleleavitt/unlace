int __fastcall sub_335F40(const char *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+8h] [rbp-20h]

  unk_2CFE870 = 0;
  qword_2CFE860 = &off_2C758B0;
  *(_QWORD *)&dword_2CFE868 = dword_2CFE868 & 0x80000000;
  qword_2CFE8A0[1] = 0x100000000LL;
  unk_2CFE878 = 0;
  unk_2CFE880 = 0;
  unk_2CFE888 = 0;
  unk_2CFE890 = 0;
  unk_2CFE898 = 0;
  qword_2CFE8A0[0] = &qword_2CFE8A0[2];
  qword_2CFE8A0[3] = &qword_2CFE8A0[6];
  qword_2CFE8A0[4] = 1;
  LODWORD(qword_2CFE8A0[5]) = 0;
  BYTE4(qword_2CFE8A0[5]) = 1;
  v1 = sub_2210FF0(a1);
  v2 = LODWORD(qword_2CFE8A0[1]);
  if ( (unsigned __int64)LODWORD(qword_2CFE8A0[1]) + 1 > HIDWORD(qword_2CFE8A0[1]) )
  {
    v4 = v1;
    sub_2237220(qword_2CFE8A0, &qword_2CFE8A0[2], LODWORD(qword_2CFE8A0[1]) + 1LL, 8);
    v2 = LODWORD(qword_2CFE8A0[1]);
    v1 = v4;
  }
  *(_QWORD *)(qword_2CFE8A0[0] + 8 * v2) = v1;
  LOWORD(qword_2CFE8A0[9]) = 0;
  ++LODWORD(qword_2CFE8A0[1]);
  LOBYTE(qword_2CFE8A0[7]) = 0;
  qword_2CFE8A0[8] = off_2C714E8;
  *(__m128 *)&qword_2CFE8A0[13] = _mm_loadh_ps((const double *)off_2C78368);
  qword_2CFE860 = off_2C75848;
  qword_2CFE8A0[10] = off_2BEAB08;
  sub_2217250(&qword_2CFE860, "use-dereferenceable-at-point-semantics", 38);
  LOBYTE(qword_2CFE8A0[7]) = 0;
  unk_2CFE888 = 60;
  LOWORD(qword_2CFE8A0[9]) = 256;
  BYTE2(dword_2CFE868) = BYTE2(dword_2CFE868) & 0x9F | 0x20;
  unk_2CFE880 = "Deref attributes and metadata infer facts at definition only";
  sub_2218140(&qword_2CFE860);
  return __cxa_atexit(sub_200E190, &qword_2CFE860, &off_2B25620);
}
