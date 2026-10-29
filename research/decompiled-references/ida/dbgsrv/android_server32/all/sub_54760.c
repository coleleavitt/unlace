/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54760
// Address: 0x00054760

//----- (00054760) --------------------------------------------------------
int __fastcall sub_54760(int a1, unsigned __int8 *a2, int a3)
{
  _DWORD *v5; // r7
  int v6; // r1
  __int64 v7; // r0
  unsigned int v8; // r2
  __int64 v9; // kr00_8
  unsigned int v10; // r2
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r2
  unsigned int v14; // r2
  _BOOL4 v15; // r1
  int v16; // r2
  int v17; // r1
  int v18; // r2
  int v19; // r2
  int v20; // r0
  unsigned int v21; // r2
  unsigned int v22; // r2
  int v23; // r1
  int v24; // r0
  unsigned __int8 *v26; // [sp+18h] [bp-40h]
  int v27; // [sp+20h] [bp-38h]
  unsigned __int8 v28[8]; // [sp+24h] [bp-34h] BYREF
  int v29; // [sp+2Ch] [bp-2Ch]
  int v30; // [sp+30h] [bp-28h]
  unsigned __int8 v31[8]; // [sp+34h] [bp-24h] BYREF
  _BOOL4 v32; // [sp+3Ch] [bp-1Ch]
  unsigned int v33; // [sp+40h] [bp-18h]
  unsigned __int8 v34[8]; // [sp+44h] [bp-14h] BYREF
  __int64 v35; // [sp+4Ch] [bp-Ch]
  int v36; // [sp+54h] [bp-4h]

  sub_539B0(a1, a2, a3);
  v27 = a1 + 444;
  v26 = a2;
  v5 = a2 + 8;
  while ( 1 )
  {
    v34[0] = 1;
    v35 = 0;
    v6 = *(unsigned __int16 *)(*(_DWORD *)v27 + 12);
    if ( v6 != 8509 )
      break;
    sub_539B0(a1, v34, 1);
    v9 = v35;
    v10 = v5[1];
    v5[1] = 0;
    *v5 = v9 != __PAIR64__(v10, *v5);
LABEL_2:
    *v26 = 0;
  }
  if ( v6 == 15677 )
  {
    sub_539B0(a1, v34, 1);
    v7 = v35;
    v8 = v5[1];
    v5[1] = 0;
    *v5 = v7 == __PAIR64__(v8, *v5);
    goto LABEL_2;
  }
  v11 = *(unsigned __int16 *)(*(_DWORD *)v27 + 12);
  if ( v11 != 38 )
    goto LABEL_15;
  while ( 2 )
  {
    v31[0] = 1;
    v32 = 0;
    v33 = 0;
    sub_539B0(a1, v31, 1);
    while ( 2 )
    {
      v34[0] = 1;
      v35 = 0;
      v12 = *(unsigned __int16 *)(*(_DWORD *)v27 + 12);
      if ( v12 == 8509 )
      {
        sub_539B0(a1, v34, 1);
        v14 = v33;
        v33 = 0;
        v32 = __PAIR64__(v35, HIDWORD(v35)) != __PAIR64__(v32, v14);
        goto LABEL_9;
      }
      if ( v12 == 15677 )
      {
        sub_539B0(a1, v34, 1);
        v13 = v33;
        v33 = 0;
        v32 = v35 == __PAIR64__(v13, v32);
LABEL_9:
        v31[0] = 0;
        continue;
      }
      break;
    }
    v15 = v32;
    v5[1] &= v33;
    *v5 &= v15;
    v11 = *(unsigned __int16 *)(*(_DWORD *)v27 + 12);
    if ( v11 == 38 )
      continue;
    break;
  }
LABEL_15:
  if ( v11 == 94 )
  {
LABEL_16:
    v28[0] = 1;
    v29 = 0;
    v30 = 0;
    sub_539B0(a1, v28, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v34[0] = 1;
        v35 = 0;
        v17 = *(unsigned __int16 *)(*(_DWORD *)v27 + 12);
        if ( v17 != 8509 )
          break;
        sub_539B0(a1, v34, 1);
        v18 = v30;
        v30 = 0;
        v29 = v35 != __PAIR64__(v18, v29);
        v28[0] = 0;
      }
      if ( v17 != 15677 )
        break;
      sub_539B0(a1, v34, 1);
      v16 = v30;
      v30 = 0;
      v29 = v35 == __PAIR64__(v16, v29);
      v28[0] = 0;
    }
    if ( *(_WORD *)(*(_DWORD *)v27 + 12) != 38 )
    {
      v24 = v29;
      v23 = v30;
      goto LABEL_32;
    }
    while ( 1 )
    {
      v31[0] = 1;
      v32 = 0;
      v33 = 0;
      sub_539B0(a1, v31, 1);
      while ( 1 )
      {
        v34[0] = 1;
        v35 = 0;
        v19 = *(_DWORD *)v27;
        v20 = *(unsigned __int16 *)(*(_DWORD *)v27 + 12);
        if ( v20 != 8509 )
          break;
        sub_539B0(a1, v34, 1);
        v22 = v33;
        v33 = 0;
        v32 = v35 != __PAIR64__(v22, v32);
LABEL_24:
        v31[0] = 0;
      }
      if ( v20 == 15677 )
        break;
      v23 = v33 & v30;
      v30 &= v33;
      v24 = v29 & v32;
      v29 &= v32;
      if ( *(_WORD *)(v19 + 12) != 38 )
      {
LABEL_32:
        v5[1] ^= v23;
        *v5 ^= v24;
        if ( *(_WORD *)(*(_DWORD *)v27 + 12) != 94 )
          return _stack_chk_guard - v36;
        goto LABEL_16;
      }
    }
    sub_539B0(a1, v34, 1);
    v21 = v33;
    v33 = 0;
    v32 = v35 == __PAIR64__(v21, v32);
    goto LABEL_24;
  }
  return _stack_chk_guard - v36;
}
