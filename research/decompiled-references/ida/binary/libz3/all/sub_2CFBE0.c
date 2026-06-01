__int64 __fastcall sub_2CFBE0(__int64 a1)
{
  _QWORD *v1; // rax
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rbx

  v1 = (_QWORD *)sub_186B270(0x18u);
  *v1 = off_1C4CCD0;
  v2 = v1;
  sub_180C5A0(v1 + 1, "del");
  *v2 = off_1C4CF00;
  v2[2] = 0;
  sub_DF7FD0(a1, v2);
  v3 = (_QWORD *)sub_186B270(0x18u);
  *v3 = off_1C4CCD0;
  v4 = v3;
  sub_180C5A0(v3 + 1, "infer");
  *v4 = off_1C4CFF0;
  v4[2] = 0;
  sub_DF7FD0(a1, v4);
  v5 = (_QWORD *)sub_186B270(0x18u);
  *v5 = off_1C4CCD0;
  v6 = v5;
  sub_180C5A0(v5 + 1, "assume");
  v6[2] = 0;
  *v6 = off_1C4CE10;
  return sub_DF7FD0(a1, v6);
}

