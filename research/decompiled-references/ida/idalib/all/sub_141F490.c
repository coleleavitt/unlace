__int64 __fastcall sub_141F490(_QWORD *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx

  v6 = a1[16];
  a1[26] += 40LL;
  v7 = (v6 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( a1[17] >= (unsigned __int64)(v7 + 40) && v6 )
    a1[16] = v7 + 40;
  else
    v7 = sub_986170((__int64)(a1 + 16), 40, 40, 4, a5, a6);
  sub_13F1090(v7, a2);
  return v7;
}
