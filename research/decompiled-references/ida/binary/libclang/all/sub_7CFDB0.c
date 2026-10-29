_QWORD *__fastcall sub_7CFDB0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx

  v2 = a2[274];
  a2[284] += 104LL;
  v3 = (_QWORD *)((v2 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)(v3 + 13) && v2 )
    a2[274] = v3 + 13;
  else
    v3 = (_QWORD *)sub_7CF9B0((__int64)(a2 + 274), 104, 3);
  *v3 = 0;
  sub_25ABF10(v3 + 1, 6);
  v3[3] = v3 + 5;
  v3[4] = 0x800000000LL;
  sub_6B5A70((__int64)a2, (__int64)sub_7CF160, (__int64)v3);
  return v3;
}

