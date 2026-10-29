unsigned __int64 __fastcall sub_ED0ED0(
        _QWORD *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        void *src,
        __int64 a8,
        int a9)
{
  __int64 v13; // rax
  const void *v14; // r8
  size_t v15; // rbp
  unsigned __int64 v16; // rbx
  __int64 v17; // rsi
  __int16 v18; // ax
  __int64 v20; // rax
  int v21; // [rsp+0h] [rbp-48h]
  int v22; // [rsp+0h] [rbp-48h]
  int v23; // [rsp+4h] [rbp-44h]
  int v24; // [rsp+4h] [rbp-44h]
  const void *v25; // [rsp+8h] [rbp-40h]

  v13 = a1[294];
  v14 = src;
  v15 = 8 * a8;
  v16 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v17 = 8 * a8 + 56;
  a1[304] += v17;
  if ( a1[295] >= v17 + v16 && v13 )
  {
    a1[294] = v17 + v16;
  }
  else
  {
    v24 = a6;
    v22 = a2;
    v20 = sub_962430((__int64)(a1 + 294), v17, v17, 3, (__int64)src, a6);
    v14 = src;
    LODWORD(a6) = v24;
    v16 = v20;
    a2 = v22;
  }
  v18 = *(_WORD *)v16 & 0xFE00;
  LOBYTE(v18) = -109;
  *(_WORD *)v16 = v18;
  if ( unk_2CAD564 )
  {
    v25 = v14;
    v23 = a6;
    v21 = a2;
    sub_EC5E10(147);
    v14 = v25;
    LODWORD(a6) = v23;
    a2 = v21;
  }
  *(_BYTE *)(v16 + 8) = 8;
  *(_DWORD *)(v16 + 12) = a2;
  *(_DWORD *)(v16 + 16) = a9;
  *(_DWORD *)(v16 + 20) = a3;
  *(_QWORD *)(v16 + 24) = 0;
  *(_QWORD *)(v16 + 32) = 0;
  *(_DWORD *)(v16 + 40) = a4;
  *(_DWORD *)(v16 + 44) = a6;
  *(_DWORD *)(v16 + 48) = a5;
  *(_DWORD *)(v16 + 52) = a8;
  if ( v15 )
    memmove((void *)(v16 + 56), v14, v15);
  return v16;
}

