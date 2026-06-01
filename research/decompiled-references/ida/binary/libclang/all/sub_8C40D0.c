unsigned __int64 __fastcall sub_8C40D0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        int a7,
        int a8,
        unsigned __int64 a9)
{
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 v19; // rbx
  __int64 v21; // rax

  v14 = a4 + 1;
  v15 = a9;
  v16 = 8 * (v14 - ((unsigned int)(HIDWORD(a9) == 0) - 1));
  v17 = a1[274];
  v18 = v16 + 32;
  a1[284] += v18;
  v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v18 + v19 && v17 )
  {
    a1[274] = v18 + v19;
  }
  else
  {
    v21 = sub_8C1090((__int64)(a1 + 274), v18, 3);
    v15 = a9;
    v19 = v21;
  }
  sub_80AF80(v19, 0x5Bu, a2, 0, 0, a5, a3, a4, a6, a7, v15, 0, 0);
  *(_DWORD *)(v19 + 24) = a8;
  return v19;
}

