unsigned __int64 __fastcall sub_81F4B0(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rsi
  __int64 v6; // rax
  unsigned __int64 v7; // rbx

  v5 = 8 * (a2 + (unsigned __int64)a3) + 48;
  v6 = a1[274];
  a1[284] += v5;
  v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v5 + v7 && v6 )
    a1[274] = v5 + v7;
  else
    v7 = sub_81EE10((__int64)(a1 + 274), v5, 3);
  *(_WORD *)v7 = *(_WORD *)v7 & 0xFE00 | 0x10;
  if ( byte_4AD234C )
    sub_AC4570(16);
  *(_QWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 16) = a2;
  *(_DWORD *)(v7 + 20) = a3;
  *(_QWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 40) = 0;
  return v7;
}

