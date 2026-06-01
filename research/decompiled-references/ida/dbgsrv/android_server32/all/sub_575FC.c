/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_575FC
// Address: 0x000575FC

//----- (000575FC) --------------------------------------------------------
int __fastcall sub_575FC(int a1, unsigned int a2, int a3)
{
  int v4; // r5
  unsigned int v5; // r1
  int v6; // r3
  int v7; // r4
  int v8; // r0
  unsigned int v9; // r1
  unsigned int v10; // r0
  unsigned int v11; // r1
  _DWORD *v12; // r4
  unsigned int v13; // r6
  int v14; // r0
  int v15; // r1
  int v16; // r3
  unsigned int v17; // r2
  unsigned int v18; // r4
  unsigned int v19; // r2
  unsigned int v20; // r6
  unsigned int v21; // r3
  unsigned int v22; // r1
  int v23; // r2
  int v24; // r7
  int v25; // r5
  int v26; // r4
  int v27; // r6
  int v28; // r0
  unsigned int v29; // r4
  int v31; // r1
  int v32; // r1
  int v33; // r4
  unsigned int v34; // r0
  _DWORD *v36; // [sp+10h] [bp-78h]
  _DWORD *v37; // [sp+14h] [bp-74h]
  int v38; // [sp+18h] [bp-70h]
  int v39; // [sp+1Ch] [bp-6Ch]
  int v40; // [sp+20h] [bp-68h]
  unsigned int v41; // [sp+28h] [bp-60h]
  unsigned int *v42; // [sp+2Ch] [bp-5Ch]
  int v43; // [sp+30h] [bp-58h]
  _DWORD *v44; // [sp+38h] [bp-50h]
  _DWORD *v45; // [sp+40h] [bp-48h]
  int v46; // [sp+44h] [bp-44h]
  unsigned int *v47; // [sp+48h] [bp-40h]
  unsigned int v48; // [sp+50h] [bp-38h]
  unsigned int v50; // [sp+58h] [bp-30h]
  unsigned int v51; // [sp+5Ch] [bp-2Ch]
  _DWORD *v52; // [sp+60h] [bp-28h]
  unsigned int v53; // [sp+64h] [bp-24h]
  unsigned int v54; // [sp+68h] [bp-20h]
  int v55; // [sp+6Ch] [bp-1Ch]
  unsigned int v56; // [sp+70h] [bp-18h]
  int v57; // [sp+74h] [bp-14h]
  _DWORD v58[2]; // [sp+78h] [bp-10h] BYREF
  int v59; // [sp+80h] [bp-8h]

  v4 = a1;
  v5 = (a3 - 1) & 0xFFFFF000;
  *(_DWORD *)(a1 + 4120) = v5;
  v42 = (unsigned int *)(a1 + 4120);
  v41 = a2;
  if ( v5 + 4096 <= a2 )
    return -1;
  v43 = a1 + 4121;
  v36 = (_DWORD *)(a1 + 4164);
  v37 = (_DWORD *)(a1 + 4156);
  v44 = (_DWORD *)(a1 + 4132);
  v45 = (_DWORD *)(a1 + 4124);
  v47 = (unsigned int *)(a1 + 4168);
  v6 = a3 - v5;
  v38 = a1 + 24;
  v39 = 0;
  while ( 1 )
  {
    v40 = v6;
    if ( (*(_BYTE *)(v4 + 16) & 2) == 0 )
    {
      v59 = 0;
      v58[1] = 0;
      v58[0] = &off_D9E70;
      v7 = callui(86, v58, 0);
      v58[0] = &off_D9E84;
      qsem_free(v59);
      if ( v7 )
        return -7;
      v5 = *v42;
    }
    v8 = (*(int (__fastcall **)(_DWORD, unsigned int, int, int, _DWORD))(**(_DWORD **)(v4 + 8) + 144))(
           *(_DWORD *)(v4 + 8),
           v5,
           v38,
           4096,
           *(_DWORD *)(v4 + 20));
    v9 = *v42;
    if ( v8 != 4096 )
      break;
    v10 = v41;
    if ( v9 >= v41 )
      v10 = *v42;
    v11 = v10 - v9;
    *v47 = v11;
    v12 = (_DWORD *)*v45;
    if ( v45 != (_DWORD *)*v45 )
    {
      while ( 1 )
      {
        v48 = v11;
        v13 = 4096 - v11;
        v52 = v12;
        v14 = 40 * v12[3];
        v15 = **(_DWORD **)(v4 + 12);
        v16 = v15 + v14;
        v46 = v12[4];
        v17 = *(_DWORD *)(v15 + v14 + 4) - v46;
        v18 = v17;
        if ( v17 >= v13 )
          v18 = v13;
        v51 = v13;
        v50 = *(_DWORD *)(v15 + v14 + 4) - v46;
        v56 = v18;
        v19 = v17 - v18;
        v20 = *(_DWORD *)(v16 + 12) + v19;
        if ( !*(_DWORD *)(v16 + 16) )
          v20 = 0;
        if ( v18 )
          break;
LABEL_32:
        if ( v50 <= v51 )
        {
          **(_DWORD **)(a1 + 4) = v52[2];
          return 1;
        }
        if ( v48 )
        {
LABEL_34:
          v12 = (_DWORD *)*v52;
          *(_DWORD *)v52[1] = *v52;
          *(_DWORD *)(*v52 + 4) = v52[1];
          qfree(v52);
          --*v44;
        }
        else
        {
          v52[4] = v46 + 4096;
          v12 = (_DWORD *)*v52;
        }
        v4 = a1;
        if ( v45 == v12 )
          goto LABEL_38;
        v11 = *v47;
      }
      v55 = *(_DWORD *)(a1 + 16) & 0x20;
      v57 = *(_DWORD *)(a1 + 16) & 1;
      v21 = v18;
      v22 = *(_DWORD *)(v15 + v14) + v19;
      v23 = v43 - v18 - 1;
      v24 = 0;
      v54 = v20;
      v53 = v22;
      while ( 2 )
      {
        v25 = *(unsigned __int8 *)(v22 + v24);
        v26 = *(unsigned __int8 *)(v23 + v24);
        if ( !v57 )
        {
          v27 = v23;
          v26 = toupper(v26);
          v28 = toupper(v25);
          v23 = v27;
          v22 = v53;
          v20 = v54;
          v21 = v56;
          v25 = v28;
        }
        if ( v20 )
        {
          if ( v55 )
          {
            if ( (*(unsigned __int8 *)(v20 + v24) & (v26 ^ v25)) << 24 )
              goto LABEL_34;
            goto LABEL_31;
          }
          v25 = (unsigned __int8)v25;
          if ( v20 != 255 )
          {
            if ( (unsigned __int8)v26 != (unsigned __int8)v25 && *(_BYTE *)(v20 + v24) )
              goto LABEL_34;
            goto LABEL_31;
          }
          if ( (unsigned __int8)v25 == 255 )
          {
LABEL_31:
            if ( ++v24 >= v21 )
              goto LABEL_32;
            continue;
          }
        }
        else
        {
          v25 = (unsigned __int8)v25;
        }
        break;
      }
      if ( (unsigned __int8)v26 != v25 )
        goto LABEL_34;
      goto LABEL_31;
    }
LABEL_38:
    v29 = v40;
    if ( sub_578FC(v4, v40) )
      return 1;
    if ( *v37 )
    {
      while ( *v47 < v29 )
      {
        if ( sub_57A30(v4, v29--) )
          return 1;
      }
    }
    *v42 -= 4096;
    v31 = v39 + 1;
    if ( (unsigned int)(v39 + 1) >> 3 >= 0x7D )
    {
      qtime64();
      v33 = v32;
      v34 = v32 - *v36;
      v31 = 0;
      if ( v34 >= 5 )
      {
        sub_1BC48(*(_DWORD *)(v4 + 8), &byte_A0742);
        *v36 = v33;
        v31 = 0;
      }
    }
    v39 = v31;
    v5 = *v42;
    v6 = 4096;
    if ( *v42 + 4096 <= v41 )
      return -1;
  }
  *(_DWORD *)(v4 + 4136) = v9;
  return -7;
}
// 5784E: variable 'v32' is possibly undefined
// A0742: using guessed type char byte_A0742;
// D9E70: using guessed type _UNKNOWN *off_D9E70;
// D9E84: using guessed type _UNKNOWN *off_D9E84;
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
