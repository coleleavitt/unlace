__int64 __fastcall sub_830440(__int64 a1, int *a2)
{
  int v3; // eax
  __int64 v4; // r11
  __int64 v5; // rax
  _DWORD *v6; // r10
  __int64 v7; // rax
  unsigned __int16 v8; // dx
  unsigned __int16 v9; // cx
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // esi
  unsigned int v13; // eax
  __int16 v14; // di
  int v15; // edx
  _DWORD *v16; // rcx
  __int16 v17; // ax
  int v18; // r8d
  __int64 v19; // r9
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // r10
  __int64 v25; // r11
  unsigned __int16 v26; // dx
  unsigned __int16 v27; // ax
  __int16 v28; // di
  int v29; // edx
  __int64 v30; // rcx
  __int16 v31; // ax
  int v32; // r8d
  _DWORD v33[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v34; // [rsp+18h] [rbp-20h]

  v3 = *a2;
  v34 = __readfsqword(0x28u);
  v4 = (__int64)a2;
  memset(&v33[1], 0, 18);
  v33[0] = v3;
  if ( !*(_WORD *)(a1 + 8) )
  {
    v5 = a1 + 10;
    while ( 1 )
    {
      v5 += 2;
      if ( !*(_WORD *)(v5 - 2) )
        break;
      if ( a1 + 22 == v5 )
      {
        if ( (*(_BYTE *)(a1 + 6) & 1) != 0 )
          break;
        sub_82FFC0((__int64)a2);
        sub_82FFC0(a1);
        do
        {
          v26 = *(_WORD *)(a1 + 6);
          v27 = *(_WORD *)(v25 + 6);
          v28 = 0;
          if ( v27 >= v26 )
          {
            v28 = 1;
            *(_WORD *)(v25 + 6) = v27 - v26;
          }
          v29 = 0;
          v30 = v24;
          do
          {
            if ( *(__int16 *)v30 < 0 )
              v29 |= 1u;
            v31 = 2 * *(_WORD *)v30;
            if ( (v29 & 2) != 0 )
              v31 |= 1u;
            v30 -= 2;
            v29 *= 2;
            *(_WORD *)(v30 + 2) = v31;
          }
          while ( (_DWORD *)v30 != (_DWORD *)((char *)v33 + 2) );
          HIWORD(v33[4]) |= v28;
          sub_830040(v25);
        }
        while ( v32 != 1 );
        goto LABEL_20;
      }
    }
  }
  v6 = &v33[5];
  do
  {
    v7 = 4;
    while ( 1 )
    {
      v8 = *(_WORD *)(a1 + v7);
      v9 = *(_WORD *)(v4 + v7);
      if ( v8 != v9 )
        break;
      v7 += 2;
      if ( v7 == 22 )
        goto LABEL_10;
    }
    v14 = 0;
    if ( v9 < v8 )
      goto LABEL_13;
LABEL_10:
    v10 = 20;
    v11 = 0;
    do
    {
      v12 = *(unsigned __int16 *)(a1 + v10);
      v13 = *(unsigned __int16 *)(v4 + v10) - v12 - v11;
      *(_WORD *)(v4 + v10) = *(_WORD *)(v4 + v10) - v12 - v11;
      v10 -= 2;
      v11 = HIWORD(v13) & 1;
    }
    while ( v10 != 2 );
    v14 = 1;
LABEL_13:
    v15 = 0;
    v16 = v6;
    do
    {
      if ( *(__int16 *)v16 < 0 )
        v15 |= 1u;
      v17 = 2 * *(_WORD *)v16;
      if ( (v15 & 2) != 0 )
        v17 |= 1u;
      v16 = (_DWORD *)((char *)v16 - 2);
      v15 *= 2;
      *((_WORD *)v16 + 1) = v17;
    }
    while ( v16 != (_DWORD *)((char *)v33 + 2) );
    HIWORD(v33[4]) |= v14;
    sub_830040(v4);
  }
  while ( v18 != 1 );
LABEL_20:
  sub_82FFC0((__int64)v33);
  sub_82FFC0((__int64)v33);
  v21 = v19 + 18;
  while ( 1 )
  {
    v19 += 2;
    if ( *(_WORD *)(v19 - 2) )
      break;
    if ( v21 == v19 )
    {
      result = 0;
      goto LABEL_24;
    }
  }
  result = 1;
LABEL_24:
  v23 = *(_QWORD *)((char *)&v33[3] + 2);
  *(__m128i *)v20 = _mm_load_si128((const __m128i *)v33);
  *(_QWORD *)(v20 + 14) = v23;
  return result;
}
