unsigned __int64 __fastcall sub_7D8F40(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9,
        char *src,
        __int64 a11)
{
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax
  int v16; // r11d
  __int64 v17; // rdx
  __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  _DWORD *v20; // r12
  int v21; // r15d
  __int64 *v22; // r12
  __int64 v23; // r14
  __int64 v24; // r13
  int v25; // eax
  __int64 v27; // rax

  v14 = sub_79A610(160, a1, a2, 0);
  v15 = *(_QWORD *)(a6 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a6 + 40) & 7) != 0 )
    v15 = 0;
  sub_77B010(v14, 0x28u, (__int64)a1, a2, a3, a4, v15, a7, a8, a9);
  v16 = a11;
  *(_QWORD *)(v14 + 112) = a6 & 0xFFFFFFFFFFFFFFFBLL;
  *(_QWORD *)(v14 + 104) = 0;
  *(_QWORD *)(v14 + 120) = 0;
  *(_QWORD *)v14 = &off_49F6AD8;
  v17 = a1[274];
  v18 = 24 * a11 + 8;
  a1[284] += v18;
  v19 = v18 + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a1[275] >= v19 && v17 )
  {
    a1[274] = v19;
    v20 = (_DWORD *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v27 = sub_7CF9B0((__int64)(a1 + 274), v18, 3);
    v16 = a11;
    v20 = (_DWORD *)v27;
  }
  *v20 = v16;
  if ( src != &src[24 * a11] )
    memmove(v20 + 2, src, 8 * ((unsigned __int64)(24 * a11 - 24) >> 3) + 24);
  v21 = 0;
  *(_QWORD *)(v14 + 128) = v20;
  v22 = (__int64 *)(a5 + 24);
  *(_BYTE *)(v14 + 140) &= 0xF0u;
  *(_DWORD *)(v14 + 136) = 0;
  *(_QWORD *)v14 = &off_49F6B50;
  *(_QWORD *)(v14 + 144) = a5;
  *(_QWORD *)(v14 + 152) = 0;
  v23 = a5 + (unsigned int)(8 * *(_DWORD *)(a5 + 20)) + 24;
  if ( 8 * *(_DWORD *)(a5 + 20) )
  {
    do
    {
      while ( 1 )
      {
        v24 = *v22;
        sub_798630(*v22, a2);
        v25 = *(unsigned __int8 *)(v24 + 28);
        if ( (*(_BYTE *)(v24 + 28) & 0x7F) != 0x42 )
          break;
        ++v22;
        v21 |= sub_7D1000(*(_QWORD *)(v24 + 56), a2) | (*(_BYTE *)(v24 + 28) >> 7);
        if ( (__int64 *)v23 == v22 )
        {
          if ( !(_BYTE)v21 )
            goto LABEL_12;
          goto LABEL_15;
        }
      }
      LOBYTE(v25) = (unsigned __int8)v25 >> 7;
      ++v22;
      v21 |= v25;
    }
    while ( (__int64 *)v23 != v22 );
    if ( !(_BYTE)v21 )
      goto LABEL_12;
LABEL_15:
    sub_794C70(v14, 1);
  }
LABEL_12:
  *(_BYTE *)(v14 + 140) = *(_BYTE *)(v14 + 140) & 0xF8 | 2;
  return v14;
}

