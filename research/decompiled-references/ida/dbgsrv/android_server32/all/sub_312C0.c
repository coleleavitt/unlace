/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_312C0
// Address: 0x000312C0

//----- (000312C0) --------------------------------------------------------
int __fastcall sub_312C0(int a1, int a2, unsigned int *a3)
{
  unsigned int v5; // r5
  int result; // r0
  unsigned int v7; // r7
  __int64 v8; // r0
  __int64 v9; // kr00_8
  unsigned int v10; // r7
  int v11; // r3
  int v12; // r5
  int v13; // r6
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r3
  _QWORD *v21; // r1
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  int v24; // r2
  int v25; // r3
  unsigned int v26; // [sp+1Ch] [bp-6Ch]
  int v27; // [sp+20h] [bp-68h]
  unsigned int v28; // [sp+30h] [bp-58h]
  unsigned int v29; // [sp+30h] [bp-58h]
  _DWORD v30[7]; // [sp+34h] [bp-54h] BYREF
  void *v31; // [sp+50h] [bp-38h]
  int v32; // [sp+54h] [bp-34h]
  int v33; // [sp+58h] [bp-30h]
  int v34; // [sp+5Ch] [bp-2Ch]
  int v35; // [sp+60h] [bp-28h]
  int v36; // [sp+64h] [bp-24h]
  int v37; // [sp+68h] [bp-20h]
  _DWORD *v38; // [sp+70h] [bp-18h] BYREF
  int v39; // [sp+74h] [bp-14h]
  int v40; // [sp+78h] [bp-10h]
  int v41; // [sp+7Ch] [bp-Ch]
  int v42; // [sp+80h] [bp-8h]

  v5 = a3[2];
  result = 0;
  if ( !v5 )
    return result;
  v28 = *(_DWORD *)(a1 + 312);
  v27 = a1;
  v7 = *a3;
  LODWORD(v8) = qlsize(*(int **)(a1 + 364));
  v26 = v7;
  v9 = v8 - v7;
  v10 = 1;
  if ( v28 )
    v10 = v28;
  v11 = v5 / v10;
  if ( v9 < 0 )
  {
    v29 = v10;
    v13 = 0;
    v12 = 0;
LABEL_10:
    v14 = sub_375C0();
    v11 = v13;
    v10 = v29;
    if ( v14 != 1 )
      sub_371F8(0, v15, v16, v13);
    goto LABEL_11;
  }
  if ( v10 <= v5 && 0xFFFFFFFF / (v5 / v10) < v10 || (v12 = 0, v9 < v11 * v10) )
  {
    v29 = v10;
    v12 = (v9 / (unsigned __int64)v10) >> 32;
    v13 = v9 / (unsigned __int64)v10;
    goto LABEL_10;
  }
LABEL_11:
  result = 0;
  if ( v11 | v12 )
  {
    v30[3] = 0;
    v30[2] = v26;
    v30[4] = v11;
    v30[1] = v27;
    v30[6] = v10;
    v37 = 0;
    v36 = 0;
    v35 = 0;
    v34 = 0;
    v33 = 0;
    v32 = 0;
    v31 = nullptr;
    v30[5] = v12;
    v30[0] = &off_D64D4;
    do
    {
      if ( !sub_31488((int)v30, &v38) )
        break;
      v17 = *v38;
      v18 = v38[1];
      v19 = v38[2];
      v42 = v38[3];
      v41 = v19;
      v40 = v18;
      v39 = v17;
      v20 = *(_DWORD *)(a2 + 4);
      v21 = v38;
      if ( *(_DWORD *)(a2 + 8) >= (unsigned int)(v20 + 1) )
      {
        v22 = *(_DWORD **)a2;
      }
      else
      {
        v22 = qvector_reserve(a2, *(void **)a2, v20 + 1, 0x10u);
        *(_DWORD *)a2 = v22;
        v20 = *(_DWORD *)(a2 + 4);
        v21 = v38;
      }
      v22[4 * v20] = v39;
      v23 = &v22[4 * v20];
      v24 = v42;
      v25 = v41;
      v23[1] = v40;
      v23[2] = v25;
      v23[3] = v24;
      ++*(_DWORD *)(a2 + 4);
    }
    while ( *v21 );
    v30[0] = &off_D64D4;
    if ( v31 )
    {
      v32 = 0;
      qfree(v31);
      v33 = 0;
      v31 = nullptr;
    }
    return 1;
  }
  return result;
}
// 31300: variable 'v8' is possibly undefined
// 3144A: variable 'v15' is possibly undefined
// 3144A: variable 'v16' is possibly undefined
// D64D4: using guessed type _UNKNOWN *off_D64D4;
