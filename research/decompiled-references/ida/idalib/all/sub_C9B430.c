unsigned __int64 __fastcall sub_C9B430(
        _QWORD *a1,
        __int64 a2,
        char a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        unsigned int a12,
        char a13)
{
  __int64 v13; // r13
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  unsigned int v20; // r8d
  unsigned int v21; // eax
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  char v27; // al
  int v28; // edx
  __int64 v29; // rax
  char v30; // al
  unsigned __int8 v31; // al
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v41; // [rsp+20h] [rbp-58h]
  unsigned int v42; // [rsp+20h] [rbp-58h]
  unsigned int v43; // [rsp+28h] [rbp-50h]
  __int64 v44; // [rsp+28h] [rbp-50h]
  __int64 v45; // [rsp+30h] [rbp-48h]

  v13 = a6;
  v41 = (__int64)(a1 + 294);
  v14 = a8;
  v15 = a10;
  v16 = 8LL * (unsigned int)(a11 + 1) + 40;
  if ( a13 )
  {
    v17 = a1[294];
    a1[304] += v16;
    v18 = ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL) + v16;
    if ( a1[295] >= v18 && v17 )
    {
      a1[294] = v18;
      v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v34 = sub_986170(v41, v16, v16, 3, a5, a6);
      v15 = a10;
      v14 = a8;
      v19 = v34;
    }
    v20 = 0;
  }
  else
  {
    v21 = sub_EE7680(a6, a7, a8, a10, a11, a12);
    v14 = a8;
    v15 = a10;
    v20 = v21;
    v23 = a1[294];
    v24 = 4LL * (unsigned int)a8;
    if ( v21 )
      v24 = 0;
    v25 = v16 + v24;
    a1[304] += v25;
    v26 = v25 + ((v23 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[295] >= v26 && v23 )
    {
      a1[294] = v26;
      v19 = (v23 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v43 = v21;
      v33 = sub_986170(v41, v25, v25, 3, v21, v22);
      v15 = a10;
      v14 = a8;
      v19 = v33;
      v20 = v43;
    }
  }
  if ( v19 )
  {
    *(_WORD *)v19 = *(_WORD *)v19 & 0xFE00 | 0x21;
    if ( unk_2CD7484 )
    {
      v45 = v15;
      v44 = v14;
      v42 = v20;
      sub_EE9B50(33);
      v15 = v45;
      v14 = v44;
      v20 = v42;
    }
    *(_BYTE *)(v19 + 1) = *(_BYTE *)(v19 + 1) & 0xF9 | (2 * (a3 & 3));
    *(_WORD *)(v19 + 1) &= 0xF807u;
    if ( a9 )
      v13 = a9;
    *(_QWORD *)(v19 + 8) = a2;
    v27 = *(_BYTE *)(v19 + 27);
    *(_QWORD *)(v19 + 16) = v13;
    v28 = 0;
    *(_BYTE *)(v19 + 27) = (a9 != 0) | v27 & 0xFA | (4 * (a13 & 1));
    *(_QWORD *)(v19 + 24) &= 0xFD00FFFFuLL;
    *(_WORD *)(v19 + 24) = a11;
    *(_DWORD *)(v19 + 32) = a4;
    *(_DWORD *)(v19 + 36) = a12;
    v29 = 0;
    if ( a11 )
    {
      do
      {
        *(_QWORD *)(v19 + 48 + 8 * v29) = *(_QWORD *)(v15 + 8 * v29);
        v29 = (unsigned int)++v28;
      }
      while ( v28 != a11 );
    }
    v30 = (8 * (v20 & 3)) | *(_BYTE *)(v19 + 27) & 0xE7;
    *(_BYTE *)(v19 + 27) = v30;
    if ( (v30 & 4) == 0 && !v20 )
    {
      v35 = v19 + 8LL * *(unsigned __int16 *)(v19 + 24) + 48;
      if ( 4 * v14 > 0 )
      {
        v36 = 0;
        do
        {
          *(_DWORD *)(v35 + 4 * v36) = *(_DWORD *)(a7 + 4 * v36);
          ++v36;
        }
        while ( ((4 * v14) >> 2) - v36 > 0 );
      }
    }
    *(_QWORD *)(v19 + 40) = a5;
    v31 = sub_B65CE0(v19);
    *(_BYTE *)(v19 + 1) = (v31 << 6) | *(_BYTE *)(v19 + 1) & 0x3F;
    *(_BYTE *)(v19 + 2) = *(_BYTE *)(v19 + 2) & 0xF8 | (v31 >> 2) & 7;
  }
  return v19;
}
