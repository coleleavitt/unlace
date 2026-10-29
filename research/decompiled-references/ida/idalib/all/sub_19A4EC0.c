__int64 __fastcall sub_19A4EC0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx

  v6 = *(_QWORD **)(a1 + 248);
  v7 = v6[294];
  v6[304] += 24LL;
  v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v6[295] >= (unsigned __int64)(v8 + 24) && v7 )
    v6[294] = v8 + 24;
  else
    v8 = sub_986170((__int64)(v6 + 294), 24, 24, 3, a5, a6);
  sub_A556A0(v8, a2);
  return v8;
}
