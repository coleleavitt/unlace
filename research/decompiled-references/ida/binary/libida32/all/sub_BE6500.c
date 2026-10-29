unsigned __int64 __fastcall sub_BE6500(
        _QWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rbx
  int v16; // edx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  int v24; // ecx
  unsigned __int8 v25; // al
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+8h] [rbp-40h]
  __int64 v31; // [rsp+8h] [rbp-40h]

  v13 = 16 * a6 + 8 * a8 + 40;
  v14 = a1[294];
  a1[304] += v13;
  v15 = (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v13 + v15 && v14 )
  {
    a1[294] = v13 + v15;
  }
  else
  {
    v29 = a2;
    v31 = a5;
    v27 = sub_962430((__int64)(a1 + 294), v13, v13, 3, a5, a6);
    a5 = v31;
    a2 = v29;
    v15 = v27;
  }
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x1B;
  if ( unk_2CAD564 )
  {
    v30 = a5;
    v28 = a2;
    sub_EC5E10(27);
    a5 = v30;
    a2 = v28;
  }
  *(_WORD *)(v15 + 1) &= 0xF801u;
  v16 = 0;
  *(_QWORD *)(v15 + 8) = a2;
  *(_DWORD *)(v15 + 20) = a9;
  v17 = 0;
  *(_DWORD *)(v15 + 16) = a3;
  *(_QWORD *)(v15 + 24) = a4;
  *(_DWORD *)(v15 + 32) = a6;
  *(_DWORD *)(v15 + 36) = a8;
  if ( a6 )
  {
    do
    {
      v18 = 16 * v17;
      v19 = (__int64 *)(a5 + v18);
      v20 = (_QWORD *)(v15 + v18 + 40);
      v21 = v19[1];
      v22 = *v19;
      v20[1] = v21;
      *v20 = v22;
      v17 = (unsigned int)++v16;
    }
    while ( v16 != a6 );
  }
  v23 = 0;
  v24 = 0;
  if ( a8 )
  {
    do
    {
      *(_QWORD *)(v15 + 16LL * *(unsigned int *)(v15 + 32) + 8 * v23 + 40) = *(_QWORD *)(a7 + 8 * v23);
      v23 = (unsigned int)++v24;
    }
    while ( v24 != a8 );
  }
  v25 = sub_B406F0(v15);
  *(_BYTE *)(v15 + 1) = (v25 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
  *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v25 >> 2) & 7;
  return v15;
}

