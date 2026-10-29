/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DA3C
// Address: 0x0002DA3C

//----- (0002DA3C) --------------------------------------------------------
unsigned int __fastcall sub_2DA3C(int a1, unsigned int a2)
{
  unsigned int v2; // r7
  __int64 v4; // kr08_8
  _BOOL4 v6; // r3
  _BOOL4 v7; // r1
  int v8; // r7
  __int64 v9; // r0
  int v10; // r0
  int v11; // r1
  bool v12; // zf
  signed int v13; // r7
  int v14; // r2
  int v15; // r7
  int v16; // r4
  int v17; // r4
  int v18; // r7
  __int64 v19; // r0
  __int64 v20; // r0
  unsigned int v21; // r4
  __int64 v22; // r8
  int v24; // r2
  _DWORD *v25; // r3
  int v26; // r4
  int v27; // r2
  unsigned __int64 v28; // kr10_8
  int v29; // [sp+8h] [bp-1Ch]
  __int64 v30; // [sp+10h] [bp-14h]

  v2 = *(_DWORD *)(a1 + 24);
  if ( ((v2 - 8) & 0xFFFFFFF7) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v6 = v4 == 0;
    if ( !v2 )
      v6 = 1;
    if ( v6 )
      goto LABEL_35;
    v22 = 0;
    if ( HIDWORD(v4) )
      v22 = (HIDWORD(v4) * (unsigned __int64)v2 + (((unsigned int)v4 * (unsigned __int64)v2) >> 32)) >> 32 != 0;
    if ( !v22 )
    {
LABEL_35:
      v7 = !a2 || v2 == 0;
      if ( v7 || is_mul_ok(a2, v2) )
      {
        v8 = *(_DWORD *)(a1 + 4);
        v29 = v8;
        LODWORD(v9) = sub_74C30(*(_DWORD *)(v8 + 364), 0, 1);
        v30 = v9 - *(_QWORD *)(v8 + 368);
        v10 = sub_74C30(
                *(_DWORD *)(v29 + 364),
                *(_QWORD *)(a1 + 40) * *(unsigned int *)(a1 + 24) + *(_QWORD *)(a1 + 8) + *(_QWORD *)(v29 + 368),
                0);
        v12 = ++v11 == 0;
        if ( !v11 )
          v12 = v10 == -1;
        if ( v12
          || (v13 = *(_DWORD *)(a1 + 24) * a2,
              v13 != sub_74A28(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 364), *(void **)(a1 + 28), v13)) )
        {
          v21 = 0;
        }
        else
        {
          v14 = *(_DWORD *)(a1 + 4);
          v15 = *(unsigned __int8 *)(v14 + 480);
          if ( *(_DWORD *)(a1 + 24) == 8 )
          {
            v24 = *(_DWORD *)(a1 + 28);
            v25 = (_DWORD *)(v24 + 16 * (a2 + 0xFFFFFFF));
            if ( a2 )
            {
              v26 = 0;
              v27 = v24 + 8 * (a2 + 0x1FFFFFFF) - 8;
              do
              {
                v28 = *(_QWORD *)(v27 + 8);
                if ( v15 )
                  v28 = __PAIR64__(bswap32(HIDWORD(v28)), bswap32(v28));
                ++v26;
                v25[2] = HIDWORD(v28);
                v25[3] = 0;
                *v25 = v28;
                v25[1] = 0;
                v27 -= 8;
                v25 -= 4;
              }
              while ( a2 != v26 );
              v21 = a2;
              goto LABEL_26;
            }
          }
          else if ( *(_BYTE *)(v14 + 480) )
          {
            v16 = *(_DWORD *)(a1 + 28);
            if ( a2 )
            {
              v17 = v16 + 16;
              v18 = 0;
              do
              {
                LODWORD(v19) = sub_75294(*(_DWORD *)(v17 - 16), *(_DWORD *)(v17 - 12));
                *(_QWORD *)(v17 - 16) = v19;
                LODWORD(v20) = sub_75294(*(_DWORD *)(v17 - 8), *(_DWORD *)(v17 - 4));
                ++v18;
                *(_QWORD *)(v17 - 8) = v20;
                v17 += 16;
              }
              while ( a2 != v18 );
            }
          }
          v21 = a2;
        }
LABEL_26:
        sub_74C30(*(_DWORD *)(v29 + 364), v30 + *(_QWORD *)(v29 + 368), 0);
        return v21;
      }
    }
  }
  return 0;
}
// 2DAB6: variable 'v9' is possibly undefined
// 2DAEA: variable 'v11' is possibly undefined
// 2DB2A: variable 'v19' is possibly undefined
// 2DB38: variable 'v20' is possibly undefined
