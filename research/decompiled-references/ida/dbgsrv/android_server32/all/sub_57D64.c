/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57D64
// Address: 0x00057D64

//----- (00057D64) --------------------------------------------------------
int __fastcall sub_57D64(int a1, int a2, unsigned int a3)
{
  int v4; // r5
  unsigned int v5; // r1
  int v6; // r3
  int v7; // r2
  int v8; // r4
  int v9; // r0
  unsigned int v10; // r1
  unsigned int v11; // r1
  _DWORD *v12; // r6
  int v13; // r0
  int v14; // r1
  int v15; // r7
  unsigned int v16; // r3
  int v17; // r2
  int v18; // r1
  int v19; // r6
  int v20; // r4
  int v21; // r5
  int v22; // r7
  int v23; // r0
  _DWORD *v24; // r4
  unsigned int v25; // r6
  int v27; // r1
  int v28; // r4
  _DWORD *v31; // [sp+10h] [bp-68h]
  _DWORD *v32; // [sp+14h] [bp-64h]
  int v33; // [sp+18h] [bp-60h]
  int v34; // [sp+1Ch] [bp-5Ch]
  unsigned int *v36; // [sp+28h] [bp-50h]
  _DWORD *v37; // [sp+30h] [bp-48h]
  _DWORD *v38; // [sp+34h] [bp-44h]
  unsigned int *v39; // [sp+3Ch] [bp-3Ch]
  unsigned int v41; // [sp+44h] [bp-34h]
  _DWORD *v42; // [sp+48h] [bp-30h]
  unsigned int v43; // [sp+4Ch] [bp-2Ch]
  int v44; // [sp+50h] [bp-28h]
  int v45; // [sp+54h] [bp-24h]
  unsigned int v46; // [sp+58h] [bp-20h]
  int v47; // [sp+5Ch] [bp-1Ch]
  int v48; // [sp+60h] [bp-18h]
  int v49; // [sp+64h] [bp-14h]
  _DWORD v50[2]; // [sp+68h] [bp-10h] BYREF
  int v51; // [sp+70h] [bp-8h]

  v4 = a1;
  v5 = a2 & 0xFFFFF000;
  *(_DWORD *)(a1 + 4120) = v5;
  v36 = (unsigned int *)(a1 + 4120);
  if ( v5 < a3 )
  {
    v31 = (_DWORD *)(a1 + 4164);
    v32 = (_DWORD *)(a1 + 4156);
    v37 = (_DWORD *)(a1 + 4132);
    v38 = (_DWORD *)(a1 + 4124);
    v39 = (unsigned int *)(a1 + 4168);
    v6 = a2 - v5;
    v49 = a1 + 24;
    v7 = 0;
    while ( 1 )
    {
      v34 = v6;
      v33 = v7;
      if ( (*(_BYTE *)(v4 + 16) & 2) == 0 )
      {
        v51 = 0;
        v50[1] = 0;
        v50[0] = &off_D9E70;
        v8 = callui(86, v50, 0);
        v50[0] = &off_D9E84;
        qsem_free(v51);
        if ( v8 )
          return -7;
        v5 = *v36;
      }
      v9 = (*(int (__fastcall **)(_DWORD, unsigned int, int, int, _DWORD))(**(_DWORD **)(v4 + 8) + 144))(
             *(_DWORD *)(v4 + 8),
             v5,
             v49,
             4096,
             *(_DWORD *)(v4 + 20));
      v10 = *v36;
      if ( v9 != 4096 )
      {
        *(_DWORD *)(v4 + 4136) = v10;
        return -7;
      }
      v11 = a3 - v10;
      if ( v11 >= 0x1000 )
        v11 = 4096;
      *v39 = v11;
      v12 = (_DWORD *)*v38;
      if ( v38 != (_DWORD *)*v38 )
        break;
LABEL_40:
      v25 = v34;
      if ( sub_58040(v4, v34) )
        return 1;
      if ( *v32 )
      {
        while ( v25 < *v39 )
        {
          if ( sub_58168(v4, v25++) )
            return 1;
        }
      }
      *v36 += 4096;
      v7 = v33 + 1;
      if ( (unsigned int)(v33 + 1) >> 3 >= 0x7D )
      {
        qtime64();
        v7 = 0;
        if ( (unsigned int)(v27 - *v31) >= 5 )
        {
          v28 = v27;
          sub_1BC48(*(_DWORD *)(v4 + 8), &byte_A0742, 0);
          *v31 = v28;
          v7 = 0;
        }
      }
      v5 = *v36;
      v6 = 0;
      if ( *v36 >= a3 )
        return -1;
    }
    v43 = v11;
    while ( 1 )
    {
      v13 = 40 * v12[3];
      v14 = **(_DWORD **)(v4 + 12);
      v44 = v12[4];
      v15 = *(_DWORD *)(v14 + v13 + 12) + v44;
      if ( !*(_DWORD *)(v14 + v13 + 16) )
        v15 = 0;
      v42 = v12;
      v16 = *(_DWORD *)(v14 + v13 + 4) - v44;
      v41 = v16;
      if ( v16 >= v43 )
        v16 = v43;
      if ( v16 )
        break;
LABEL_35:
      if ( v41 <= v43 )
      {
        **(_DWORD **)(a1 + 4) = v42[2];
        return 1;
      }
      if ( v43 == 4096 )
      {
        v42[4] = v44 + 4096;
        v24 = (_DWORD *)*v42;
      }
      else
      {
LABEL_38:
        v24 = (_DWORD *)*v42;
        *(_DWORD *)v42[1] = *v42;
        *(_DWORD *)(*v42 + 4) = v42[1];
        qfree(v42);
        --*v37;
      }
      v4 = a1;
      if ( v38 == v24 )
        goto LABEL_40;
      v43 = *v39;
      v12 = v24;
    }
    v48 = *(_DWORD *)(a1 + 16) & 0x20;
    v17 = *(_DWORD *)(a1 + 16) & 1;
    v18 = *(_DWORD *)(v14 + v13) + v44;
    v19 = 0;
    v47 = v15;
    v46 = v16;
    v45 = v17;
    while ( 1 )
    {
      v20 = *(unsigned __int8 *)(v18 + v19);
      v21 = *(unsigned __int8 *)(v49 + v19);
      if ( !v17 )
      {
        v22 = v18;
        v21 = toupper(*(unsigned __int8 *)(v49 + v19));
        v23 = toupper(v20);
        v18 = v22;
        v17 = v45;
        v16 = v46;
        v15 = v47;
        v20 = v23;
      }
      if ( !v15 )
        break;
      if ( v48 )
      {
        if ( (*(unsigned __int8 *)(v15 + v19) & (v21 ^ v20)) << 24 )
          goto LABEL_38;
        goto LABEL_34;
      }
      v20 = (unsigned __int8)v20;
      if ( v15 == 255 )
      {
        if ( (unsigned __int8)v20 != 255 )
          goto LABEL_31;
      }
      else if ( (unsigned __int8)v21 != (unsigned __int8)v20 && *(_BYTE *)(v15 + v19) )
      {
        goto LABEL_38;
      }
LABEL_34:
      if ( ++v19 >= v16 )
        goto LABEL_35;
    }
    v20 = (unsigned __int8)v20;
LABEL_31:
    if ( (unsigned __int8)v21 != v20 )
      goto LABEL_38;
    goto LABEL_34;
  }
  return -1;
}
// 57F9A: variable 'v27' is possibly undefined
// A0742: using guessed type char byte_A0742;
// D9E70: using guessed type _UNKNOWN *off_D9E70;
// D9E84: using guessed type _UNKNOWN *off_D9E84;
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
