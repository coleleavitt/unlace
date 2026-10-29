/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C770
// Address: 0x0006C770

//----- (0006C770) --------------------------------------------------------
int __fastcall sub_6C770(unsigned int a1, int a2, int a3, int a4)
{
  int v4; // r4
  unsigned int v5; // r4
  __suseconds_t v6; // r0
  unsigned int v7; // r1
  unsigned int v8; // r1
  int v9; // r5
  int v10; // kr00_4
  int v11; // r6
  unsigned __int64 v12; // r2
  unsigned int v13; // r4
  unsigned __int64 v14; // r0
  __suseconds_t v15; // r0
  unsigned int v16; // r1
  bool v17; // cf
  int v18; // r4
  int v19; // r0
  int v21; // [sp+4h] [bp-18h]
  int v23; // [sp+10h] [bp-Ch]
  unsigned int v24; // [sp+10h] [bp-Ch]
  int v25; // [sp+14h] [bp-8h]

  v4 = 0;
  v21 = a3;
  if ( a4 < 0 )
  {
    v9 = 0;
    v8 = 0;
    if ( !a3 )
      return v4;
  }
  else
  {
    v23 = 1000 * a4;
    v5 = (unsigned __int64)(1000LL * a4) >> 32;
    v6 = qtime64();
    a3 = v21;
    v10 = v6 + v23 + 1000000 * v7;
    v8 = ((unsigned int)v6 + __PAIR64__(v5, v23) + 1000000LL * v7) >> 32;
    v9 = v10;
    v4 = 0;
    if ( !v21 )
      return v4;
  }
  v11 = a3;
  HIDWORD(v12) = a1;
  v24 = v8;
  while ( 1 )
  {
    v25 = v11;
    LODWORD(v14) = v9 | v8;
    v13 = v8;
    HIDWORD(v14) = -1;
    if ( (_DWORD)v14 )
    {
      v15 = qtime64();
      v14 = 1000000LL * v16 + (unsigned int)v15;
      v12 = __PAIR64__(a1, HIDWORD(v14));
      v17 = v14 >= __PAIR64__(v13, v9);
      HIDWORD(v14) = 0;
      if ( !v17 )
      {
        HIDWORD(v12) = a1;
        HIDWORD(v14) = (__PAIR64__(v13, v9) - __PAIR64__(v12, v14)) / 0x3E8;
      }
    }
    v18 = HIDWORD(v12);
    if ( (*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)HIDWORD(v12) + 24))(HIDWORD(v12), HIDWORD(v14)) < 1 )
      break;
    v19 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v18 + 28))(v18, a2, v11);
    if ( v19 <= 0 )
      break;
    a2 += v19;
    v11 -= v19;
    v8 = v24;
    HIDWORD(v12) = v18;
    if ( v25 == v19 )
      return v21;
  }
  return v21 - v11;
}
// 6C7B0: variable 'v7' is possibly undefined
// 6C7EE: variable 'v16' is possibly undefined
