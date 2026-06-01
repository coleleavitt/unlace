unsigned __int64 __fastcall sub_8C7750(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rsi
  unsigned __int64 v4; // rbx

  v2 = a1[274];
  v3 = 8LL * a2 + 24;
  a1[284] += v3;
  v4 = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v4 && v2 )
    a1[274] = v3 + v4;
  else
    v4 = sub_8C1090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v4 = *(_WORD *)v4 & 0xFE00 | 7;
  if ( byte_4AD234C )
    sub_AC4570(7);
  *(_QWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 0;
  return v4;
}

