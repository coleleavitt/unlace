unsigned __int64 __fastcall sub_7D6D00(
        _QWORD *a1,
        char a2,
        __int64 a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        char *src,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  int v14; // r11d
  __int64 v15; // rsi
  __int64 v16; // rax
  _DWORD *v17; // r14
  int v18; // r13d
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 *v21; // rbp
  __int64 v22; // r15
  int v23; // eax
  char v24; // al
  __int64 v26; // rax

  v12 = sub_79A610(200, a1, a3, 0);
  v13 = *(_QWORD *)(a7 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a7 + 40) & 7) != 0 )
    v13 = 0;
  sub_7A2EA0((_QWORD *)v12, 0x3Bu, a2, (__int64)a1, a3, a4, a5, v13, a11);
  v14 = a9;
  *(_QWORD *)(v12 + 152) = a7 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v12 + 144) = 0;
  *(_QWORD *)v12 = &off_49F6870;
  *(_QWORD *)(v12 + 160) = 0;
  v15 = 24 * a9 + 8;
  v16 = a1[274];
  a1[284] += v15;
  v17 = (_DWORD *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= (unsigned __int64)v17 + v15 && v16 )
  {
    a1[274] = (char *)v17 + v15;
  }
  else
  {
    v26 = sub_7CF9B0((__int64)(a1 + 274), v15, 3);
    v14 = a9;
    v17 = (_DWORD *)v26;
  }
  *v17 = v14;
  if ( src != &src[24 * a9] )
    memmove(v17 + 2, src, 8 * ((unsigned __int64)(24 * a9 - 24) >> 3) + 24);
  *(_QWORD *)(v12 + 168) = v17;
  v18 = 0;
  *(_QWORD *)(v12 + 184) = a6;
  *(_BYTE *)(v12 + 180) &= 0xF0u;
  *(_DWORD *)(v12 + 176) = 0;
  *(_QWORD *)v12 = &off_49F68F0;
  *(_QWORD *)(v12 + 192) = 0;
  v19 = (unsigned int)(8 * *(_DWORD *)(a6 + 20));
  v20 = a6 + v19 + 24;
  v21 = (__int64 *)(a6 + 24);
  if ( v19 )
  {
    do
    {
      while ( 1 )
      {
        v22 = *v21;
        sub_798630(*v21, v12 + 64);
        v23 = *(unsigned __int8 *)(v22 + 28);
        if ( (*(_BYTE *)(v22 + 28) & 0x7F) != 0x42 )
          break;
        ++v21;
        v18 |= sub_7D1000(*(_QWORD *)(v22 + 56), v12 + 64) | (*(_BYTE *)(v22 + 28) >> 7);
        if ( (__int64 *)v20 == v21 )
        {
          if ( !(_BYTE)v18 )
            goto LABEL_12;
          goto LABEL_15;
        }
      }
      LOBYTE(v23) = (unsigned __int8)v23 >> 7;
      ++v21;
      v18 |= v23;
    }
    while ( (__int64 *)v20 != v21 );
    if ( !(_BYTE)v18 )
      goto LABEL_12;
LABEL_15:
    sub_794C70(v12, 1);
  }
LABEL_12:
  v24 = *(_BYTE *)(v12 + 180);
  *(_BYTE *)(v12 + 74) &= ~0x10u;
  *(_BYTE *)(v12 + 180) = v24 & 0xF8 | 2;
  sub_6E87A0((__int64)a1, v12, a10);
  return v12;
}

