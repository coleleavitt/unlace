unsigned __int64 __fastcall sub_C9BAE0(
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
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        char a15)
{
  __int64 v15; // r11
  __int64 v16; // r13
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
  char v27; // dl
  __int64 v28; // rax
  int v29; // ecx
  char v30; // al
  __int64 v31; // rdx
  char v32; // al
  unsigned __int8 v33; // al
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  int v42; // [rsp+18h] [rbp-50h]
  char v43; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v44; // [rsp+20h] [rbp-48h]
  unsigned int v45; // [rsp+20h] [rbp-48h]
  __int64 v46; // [rsp+28h] [rbp-40h]

  v42 = a5;
  v15 = a12;
  v16 = 8LL * (unsigned int)(a13 + 1) + 40;
  v43 = a6;
  if ( a15 )
  {
    v17 = a1[294];
    a1[304] += v16;
    v18 = v16 + ((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( a1[295] >= v18 && v17 )
    {
      a1[294] = v18;
      v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
    else
    {
      v36 = sub_986170((__int64)(a1 + 294), v16, v16, 3, a5, a6);
      v15 = a12;
      v19 = v36;
    }
    v20 = 0;
  }
  else
  {
    v21 = sub_EE7680(a8, a9, a10, a12, a13, a14);
    v15 = a12;
    v23 = a1[294];
    v24 = 4LL * (unsigned int)a10;
    v20 = v21;
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
      v44 = v21;
      v35 = sub_986170((__int64)(a1 + 294), v25, v25, 3, v21, v22);
      v15 = a12;
      v20 = v44;
      v19 = v35;
    }
  }
  if ( v19 )
  {
    *(_WORD *)v19 = *(_WORD *)v19 & 0xFE00 | 0x21;
    if ( unk_2CD7484 )
    {
      v46 = v15;
      v45 = v20;
      sub_EE9B50(33);
      v15 = v46;
      v20 = v45;
    }
    v27 = *(_BYTE *)(v19 + 1);
    *(_WORD *)(v19 + 24) = a13;
    *(_BYTE *)(v19 + 1) = v27 & 0xF9 | (2 * (a3 & 3));
    *(_WORD *)(v19 + 1) &= 0xF807u;
    *(_QWORD *)(v19 + 8) = a2;
    v28 = a8;
    if ( a11 )
      v28 = a11;
    *(_QWORD *)(v19 + 16) = v28;
    *(_BYTE *)(v19 + 26) = (v43 != 0) + 2;
    v29 = 0;
    v30 = (4 * (a15 & 1)) | (a11 != 0) | *(_BYTE *)(v19 + 27) & 0xF8;
    v31 = 0;
    *(_BYTE *)(v19 + 27) = v30;
    *(_DWORD *)(v19 + 28) = v42;
    *(_DWORD *)(v19 + 32) = a4;
    *(_DWORD *)(v19 + 36) = a14;
    if ( a13 )
    {
      do
      {
        *(_QWORD *)(v19 + 48 + 8 * v31) = *(_QWORD *)(v15 + 8 * v31);
        v31 = (unsigned int)++v29;
      }
      while ( v29 != a13 );
      v30 = *(_BYTE *)(v19 + 27);
    }
    v32 = (8 * (v20 & 3)) | v30 & 0xE7;
    *(_BYTE *)(v19 + 27) = v32;
    if ( (v32 & 4) == 0 && !v20 )
    {
      v37 = v19 + 8LL * *(unsigned __int16 *)(v19 + 24) + 48;
      if ( 4 * a10 > 0 )
      {
        v38 = 0;
        do
        {
          *(_DWORD *)(v37 + 4 * v38) = *(_DWORD *)(a9 + 4 * v38);
          ++v38;
        }
        while ( ((4 * a10) >> 2) - v38 > 0 );
      }
    }
    *(_QWORD *)(v19 + 40) = a7;
    v33 = sub_B65CE0(v19);
    *(_BYTE *)(v19 + 1) = (v33 << 6) | *(_BYTE *)(v19 + 1) & 0x3F;
    *(_BYTE *)(v19 + 2) = *(_BYTE *)(v19 + 2) & 0xF8 | (v33 >> 2) & 7;
  }
  return v19;
}
