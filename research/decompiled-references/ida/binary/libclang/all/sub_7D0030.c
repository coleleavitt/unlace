_QWORD *__fastcall sub_7D0030(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx

  v2 = a2[274];
  a2[284] += 200LL;
  v3 = (_QWORD *)((v2 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)(v3 + 25) && v2 )
    a2[274] = v3 + 25;
  else
    v3 = (_QWORD *)sub_7CF9B0((__int64)(a2 + 274), 200, 3);
  *v3 = 0;
  sub_25ABF10(v3 + 1, 6);
  v3[3] = v3 + 5;
  v3[4] = 0x800000000LL;
  sub_25ABF10(v3 + 13, 6);
  v3[15] = v3 + 17;
  v3[16] = 0x800000000LL;
  sub_6B5A70((__int64)a2, (__int64)sub_7CF1C0, (__int64)v3);
  return v3;
}

