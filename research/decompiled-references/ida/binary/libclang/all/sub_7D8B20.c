unsigned __int64 __fastcall sub_7D8B20(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8,
        char *src,
        __int64 a10)
{
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  _DWORD *v16; // rbp

  v11 = sub_79A610(144, a1, a2, 0);
  v12 = *(_QWORD *)(a5 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a5 + 40) & 7) != 0 )
    v12 = 0;
  sub_77B010(v11, 0x27u, (__int64)a1, a2, a3, a4, v12, a6, a7, a8);
  *(_QWORD *)(v11 + 112) = a5 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v11 + 104) = 0;
  *(_QWORD *)(v11 + 120) = 0;
  v13 = 24 * a10 + 8;
  *(_QWORD *)v11 = &off_49F6AD8;
  v14 = a1[274];
  a1[284] += v13;
  v15 = v13 + ((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= v15 && v14 )
  {
    a1[274] = v15;
    v16 = (_DWORD *)((v14 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v16 = (_DWORD *)sub_7CF9B0((__int64)(a1 + 274), v13, 3);
  }
  *v16 = a10;
  if ( &src[24 * a10] != src )
    memmove(v16 + 2, src, 8 * ((unsigned __int64)(24 * a10 - 24) >> 3) + 24);
  *(_BYTE *)(v11 + 140) &= 0xF0u;
  *(_QWORD *)(v11 + 128) = v16;
  *(_DWORD *)(v11 + 136) = 0;
  return v11;
}

