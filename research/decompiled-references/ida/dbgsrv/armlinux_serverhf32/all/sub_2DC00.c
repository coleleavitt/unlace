/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DC00
// Address: 0x0002DC00

//----- (0002DC00) --------------------------------------------------------
unsigned int __fastcall sub_2DC00(int a1, unsigned int a2)
{
  unsigned int v3; // r2
  bool v4; // zf
  unsigned int v5; // r0
  unsigned int v6; // r7
  _BOOL4 v8; // r3
  _BOOL4 v9; // r1
  int v10; // r7
  __int64 v11; // r0
  int v12; // r0
  int v13; // r1
  bool v14; // zf
  signed int v15; // r7
  int v16; // r2
  int v17; // lr
  int v18; // r4
  int v19; // r4
  int v20; // r7
  __int64 v21; // r0
  __int64 v22; // r0
  __int64 v23; // r0
  __int64 v24; // r8
  __int64 v26; // r0
  int v27; // r2
  int v28; // r3
  int v29; // r12
  int v30; // r2
  unsigned __int64 v31; // kr18_8
  __int64 v32; // r0
  int v33; // [sp+8h] [bp-1Ch]
  __int64 v34; // [sp+10h] [bp-14h]

  v3 = *(_DWORD *)(a1 + 24);
  v4 = v3 == 12;
  if ( v3 != 12 )
    v4 = v3 == 24;
  if ( !v4 )
    return 0;
  v6 = *(_DWORD *)(a1 + 44);
  v5 = *(_DWORD *)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 40) == 0;
  if ( !v3 )
    v8 = 1;
  if ( !v8 )
  {
    v24 = 0;
    if ( v6 )
    {
      LODWORD(v26) = (v5 * (unsigned __int64)v3) >> 32;
      HIDWORD(v26) = 0;
      v24 = (v6 * (unsigned __int64)v3 + v26) >> 32 != 0;
    }
    if ( v24 )
      return 0;
  }
  v9 = !a2 || v3 == 0;
  if ( !v9 && !is_mul_ok(a2, v3) )
    return 0;
  v10 = *(_DWORD *)(a1 + 4);
  v33 = v10;
  LODWORD(v11) = sub_74C30(*(_DWORD *)(v10 + 364), 0, 1);
  v34 = v11 - *(_QWORD *)(v10 + 368);
  v12 = sub_74C30(
          *(_DWORD *)(v33 + 364),
          *(_QWORD *)(a1 + 40) * *(unsigned int *)(a1 + 24) + *(_QWORD *)(a1 + 8) + *(_QWORD *)(v33 + 368),
          0);
  v14 = ++v13 == 0;
  if ( !v13 )
    v14 = v12 == -1;
  if ( v14
    || (v15 = *(_DWORD *)(a1 + 24) * a2,
        v15 != sub_74A28(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 364), *(void **)(a1 + 28), v15)) )
  {
    a2 = 0;
  }
  else
  {
    v16 = *(_DWORD *)(a1 + 4);
    v17 = *(unsigned __int8 *)(v16 + 480);
    if ( *(_DWORD *)(a1 + 24) == 12 )
    {
      v27 = *(_DWORD *)(a1 + 28);
      v28 = v27 + 24 * a2 - 24;
      if ( a2 )
      {
        v29 = 0;
        v30 = v27 + 12 * a2 - 24;
        do
        {
          v31 = *(_QWORD *)(v30 + 12);
          v32 = *(int *)(v30 + 20);
          if ( v17 )
          {
            v32 = bswap32(v32);
            v31 = __PAIR64__(bswap32(HIDWORD(v31)), bswap32(v31));
          }
          ++v29;
          *(_DWORD *)(v28 + 8) = HIDWORD(v31);
          *(_DWORD *)(v28 + 12) = 0;
          *(_DWORD *)v28 = v31;
          *(_DWORD *)(v28 + 4) = 0;
          *(_QWORD *)(v28 + 16) = v32;
          v30 -= 12;
          v28 -= 24;
        }
        while ( a2 != v29 );
      }
    }
    else if ( *(_BYTE *)(v16 + 480) )
    {
      v18 = *(_DWORD *)(a1 + 28);
      if ( a2 )
      {
        v19 = v18 + 24;
        v20 = 0;
        do
        {
          LODWORD(v21) = sub_75294(*(_DWORD *)(v19 - 24), *(_DWORD *)(v19 - 20));
          *(_QWORD *)(v19 - 24) = v21;
          LODWORD(v22) = sub_75294(*(_DWORD *)(v19 - 16), *(_DWORD *)(v19 - 12));
          *(_QWORD *)(v19 - 16) = v22;
          LODWORD(v23) = sub_75294(*(_DWORD *)(v19 - 8), *(_DWORD *)(v19 - 4));
          ++v20;
          *(_QWORD *)(v19 - 8) = v23;
          v19 += 24;
        }
        while ( a2 != v20 );
      }
    }
  }
  sub_74C30(*(_DWORD *)(v33 + 364), v34 + *(_QWORD *)(v33 + 368), 0);
  return a2;
}
// 2DC7A: variable 'v11' is possibly undefined
// 2DCAE: variable 'v13' is possibly undefined
// 2DCF2: variable 'v21' is possibly undefined
// 2DCFE: variable 'v22' is possibly undefined
// 2DD0C: variable 'v23' is possibly undefined
