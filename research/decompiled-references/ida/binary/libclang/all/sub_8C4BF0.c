unsigned __int64 __fastcall sub_8C4BF0(_QWORD *a1, int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // rbx

  v3 = (unsigned int)(8 * a2) + 48LL;
  v4 = a1[274];
  a1[284] += v3;
  v5 = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v3 + v5 && v4 )
    a1[274] = v3 + v5;
  else
    v5 = sub_8C1090((__int64)(a1 + 274), v3, 3);
  *(_WORD *)v5 = *(_WORD *)v5 & 0xFE00 | 0x73;
  if ( byte_4AD234C )
    sub_AC4570(115);
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 24) = 0;
  *(_DWORD *)(v5 + 32) = a2;
  return v5;
}

