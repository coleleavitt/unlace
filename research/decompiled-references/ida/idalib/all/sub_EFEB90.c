unsigned __int64 __fastcall sub_EFEB90(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rbx
  __int16 v8; // ax

  v6 = a1[294];
  a1[304] += 56LL;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v7 + 56 && v6 )
    a1[294] = v7 + 56;
  else
    v7 = sub_986170((__int64)(a1 + 294), 56, 56, 3, a5, a6);
  v8 = *(_WORD *)v7;
  *(_QWORD *)(v7 + 32) = 0;
  *(_BYTE *)(v7 + 40) = 1;
  v8 &= 0xFE00u;
  LOBYTE(v8) = v8 | 0xB9;
  *(_WORD *)v7 = v8;
  if ( unk_2CD7484 )
    sub_EE9B50(185);
  *(_QWORD *)(v7 + 8) = 42;
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 24) = v7 + 32;
  return v7;
}
