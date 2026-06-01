unsigned __int64 __fastcall sub_8C2FA0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        int a7,
        unsigned __int64 a8,
        unsigned int a9)
{
  unsigned int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // r8
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rsi
  unsigned __int64 v20; // rbx
  __int64 v22; // rax

  v14 = a4;
  v15 = a9;
  v16 = a8;
  if ( a9 >= v14 )
    v14 = a9;
  v17 = 8 * (v14 + 1 - ((HIDWORD(a8) == 0) - 1));
  v18 = a1[274];
  v19 = v17 + 24;
  a1[284] += v19;
  v20 = (v18 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v19 + v20 && v18 )
  {
    a1[274] = v19 + v20;
  }
  else
  {
    v22 = sub_8C1090((__int64)(a1 + 274), v19, 3);
    v15 = a9;
    v16 = a8;
    v20 = v22;
  }
  sub_80AF80(v20, 0x5Du, a2, 0, 0, a5, a3, a4, a6, a7, v16, v15, 0);
  return v20;
}

