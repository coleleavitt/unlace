/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8ED30
// Address: 0x0008ED30

//----- (0008ED30) --------------------------------------------------------
int __fastcall sub_8ED30(unsigned __int8 **a1, int a2)
{
  unsigned __int8 *v2; // r4
  int v3; // r2
  _BYTE *v4; // r3
  unsigned int v5; // r7
  unsigned __int8 *v6; // r5
  unsigned __int8 *v7; // r6
  int v8; // r1
  unsigned __int8 *v9; // r7
  unsigned int v10; // r6
  unsigned int v11; // r3
  int v12; // r0
  int v13; // r2
  int v14; // r0
  int v15; // r4
  int v16; // r0
  int v17; // r1
  int v18; // r1
  unsigned __int8 *v19; // r2
  unsigned int v20; // r5
  unsigned int v21; // r1
  unsigned int v22; // r0
  int v23; // r3
  int v24; // r5
  unsigned int v25; // r0
  char v26; // r5
  int v27; // r4
  unsigned int v28; // r5
  unsigned __int8 *v29; // r4
  int v30; // r0
  int v31; // r5
  unsigned int v32; // r7
  unsigned __int8 *v33; // r5
  int v34; // r5
  unsigned __int8 *v35; // r0
  unsigned __int8 *v36; // r4
  _BYTE *v37; // r0
  unsigned int v38; // r7
  _BYTE *v39; // r4
  unsigned __int8 *v40; // r0
  int v41; // r4
  int v42; // r5
  unsigned __int8 *v43; // r2
  unsigned __int8 *v44; // r1
  unsigned __int8 *v45; // r2
  int v46; // r4
  unsigned __int8 *v47; // r0
  unsigned __int8 *v48; // r5
  unsigned __int8 *v49; // r0
  unsigned __int8 *v50; // r5
  int v51; // r0
  const char *v52; // r2
  unsigned __int8 *v53; // r0
  int v55; // [sp+0h] [bp-68h]
  _BYTE *v56; // [sp+4h] [bp-64h]
  unsigned int v57; // [sp+8h] [bp-60h]
  int v58; // [sp+Ch] [bp-5Ch]
  int v59; // [sp+10h] [bp-58h]
  int v60; // [sp+14h] [bp-54h]
  int v61; // [sp+18h] [bp-50h]
  int v62; // [sp+1Ch] [bp-4Ch]
  _DWORD *v63; // [sp+20h] [bp-48h]
  unsigned int v64; // [sp+24h] [bp-44h]
  int v65; // [sp+28h] [bp-40h]
  int v66; // [sp+28h] [bp-40h]
  _BYTE *v67; // [sp+2Ch] [bp-3Ch]
  unsigned int v68; // [sp+30h] [bp-38h]
  int v69; // [sp+34h] [bp-34h]
  int v70; // [sp+38h] [bp-30h]
  int v71; // [sp+3Ch] [bp-2Ch]
  unsigned __int8 *v72; // [sp+40h] [bp-28h]
  unsigned __int8 *v74; // [sp+48h] [bp-20h]
  int v75; // [sp+4Ch] [bp-1Ch]
  unsigned int v76; // [sp+50h] [bp-18h]
  unsigned int v77; // [sp+54h] [bp-14h]
  unsigned int v78; // [sp+58h] [bp-10h]
  unsigned int v79; // [sp+58h] [bp-10h]
  unsigned int v80; // [sp+58h] [bp-10h]
  unsigned __int8 *v81; // [sp+60h] [bp-8h]
  unsigned __int8 *v82; // [sp+60h] [bp-8h]
  int v83; // [sp+64h] [bp-4h]

  v2 = a1[7];
  v63 = v2 + 7108;
  v3 = *((_DWORD *)v2 + 11);
  v4 = *((_BYTE **)v2 + 14);
  v62 = (int)&v4[v3];
  v5 = *((_DWORD *)v2 + 13);
  v67 = v4;
  v58 = (int)&v4[v5];
  v61 = v3;
  v59 = v5 + v3;
  v6 = a1[3];
  v7 = a1[4];
  v77 = (unsigned int)&v7[(_DWORD)v6 - 257];
  v81 = v6;
  v8 = (int)&v7[(_DWORD)v6 - a2];
  v57 = v5 - v8;
  v68 = v5;
  v56 = (_BYTE *)(v8 - v5);
  v9 = *a1;
  v76 = (unsigned int)&a1[1][(_DWORD)*a1 - 5];
  v69 = v8;
  v60 = -v8;
  v83 = *((_DWORD *)v2 + 20);
  v71 = *((_DWORD *)v2 + 21);
  v70 = ~(-1 << *((_DWORD *)v2 + 23));
  v75 = ~(-1 << *((_DWORD *)v2 + 22));
  v10 = *((_DWORD *)v2 + 16);
  v11 = *((_DWORD *)v2 + 15);
  v74 = v2;
  v64 = *((_DWORD *)v2 + 12);
  while ( 1 )
  {
    if ( v10 <= 0xE )
    {
      v11 += (*v9 << v10) + (v9[1] << (v10 + 8));
      v10 += 16;
      v9 += 2;
    }
    v12 = 4 * (v11 & v75);
    v13 = *(unsigned __int8 *)(v83 + v12);
    v14 = v83 + v12;
    v15 = *(unsigned __int8 *)(v14 + 1);
    v10 -= v15;
    v11 >>= v15;
    if ( v13 )
      break;
LABEL_8:
    *v81 = *(_BYTE *)(v14 + 2);
    v19 = v81 + 1;
LABEL_9:
    v81 = v19;
    if ( (unsigned int)v19 >= v77 || (unsigned int)v9 >= v76 )
      goto LABEL_73;
  }
  while ( 1 )
  {
    if ( (v13 & 0x10) != 0 )
    {
      v20 = v13 & 0xF;
      v21 = *(unsigned __int16 *)(v14 + 2);
      if ( (v13 & 0xF) != 0 )
      {
        if ( v10 < v20 )
        {
          v11 += *v9 << v10;
          v10 += 8;
          ++v9;
        }
        v10 -= v20;
        v22 = v11 >> v20;
        v21 += v11 & ~(-1 << v20);
      }
      else
      {
        v22 = v11;
      }
      v78 = v21;
      if ( v10 <= 0xE )
      {
        v22 += (*v9 << v10) + (v9[1] << (v10 + 8));
        v10 += 16;
        v9 += 2;
      }
      v72 = v9;
      v23 = v71 + 4 * (v22 & v70);
      v24 = *(unsigned __int8 *)(v23 + 1);
      v10 -= v24;
      v25 = v22 >> v24;
      v26 = *(_BYTE *)v23;
      if ( (*(_BYTE *)v23 & 0x10) == 0 )
      {
        while ( (v26 & 0x40) == 0 )
        {
          v23 = v71 + 4 * *(unsigned __int16 *)(v23 + 2) + 4 * (v25 & ~(-1 << v26));
          v27 = *(unsigned __int8 *)(v23 + 1);
          v10 -= v27;
          v25 >>= v27;
          v26 = *(_BYTE *)v23;
          if ( (*(_BYTE *)v23 & 0x10) != 0 )
            goto LABEL_23;
        }
        v52 = "invalid distance code";
        v11 = v25;
LABEL_70:
        v9 = v72;
LABEL_71:
        a1[6] = (unsigned __int8 *)v52;
        v51 = 16209;
        goto LABEL_72;
      }
LABEL_23:
      v28 = v26 & 0xF;
      v65 = *(unsigned __int16 *)(v23 + 2);
      if ( v10 < v28 )
      {
        v25 += *v9 << v10;
        if ( v10 + 8 >= v28 )
        {
          v10 += 8;
          v72 = v9 + 1;
        }
        else
        {
          v25 += v9[1] << (v10 + 8);
          v10 += 16;
          v72 = v9 + 2;
        }
      }
      v29 = &v81[-v69];
      v10 -= v28;
      v11 = v25 >> v28;
      v30 = v25 & ~(-1 << v28);
      v31 = v30 + v65;
      if ( v30 + v65 <= (unsigned int)&v81[-v69] )
      {
        v40 = &v81[-v30 - v65];
        v41 = 0;
        v42 = 0;
        v43 = v81;
        do
        {
          v43[v42] = v40[v42];
          v44 = &v43[v42];
          v44[1] = v40[v42 + 1];
          v44[2] = v40[v42 + 2];
          v43 = v81;
          v41 -= 3;
          v42 += 3;
        }
        while ( v78 + v41 > 2 );
        if ( v78 == v42 )
        {
          v19 = &v81[v42];
        }
        else
        {
          v81[v42] = v40[v42];
          v45 = &v81[v42];
          if ( v78 - 1 == v42 )
          {
            v9 = v72;
            v19 = v45 + 1;
            goto LABEL_9;
          }
          v45[1] = v40[v42 + 1];
          v19 = v45 + 2;
        }
        goto LABEL_62;
      }
      v32 = v31 - (_DWORD)v29;
      if ( v31 - (int)v29 > v64 && *v63 )
      {
        v52 = "invalid distance too far back";
        goto LABEL_70;
      }
      v55 = v30 + v65;
      if ( v68 )
      {
        if ( v68 < v32 )
        {
          v33 = &v67[v59 - v32];
          v19 = v81;
          if ( v21 > v32 - v68 )
          {
            v79 = v21 - (v32 - v68);
            v35 = &v81[v57 - v30 - v65];
            v36 = v81;
            do
              *v36++ = (v35++)[v62];
            while ( v35 );
            v66 = v55 - (_DWORD)v81;
            v34 = v55 - (_DWORD)v81;
            v37 = &v56[v55];
            v21 -= v32 - v68;
            if ( v79 > v68 )
            {
              v82 = &v81[v69];
              v38 = v68;
              v39 = v67;
              do
              {
                *v37 = *v39;
                --v38;
                ++v37;
                ++v39;
              }
              while ( v38 );
              v21 = v79 - v68;
              v33 = &v82[v34 - v55];
              v19 = &v82[v66];
            }
            else
            {
              v19 = &v56[v55];
              v33 = v67;
            }
          }
          if ( v21 < 3 )
            goto LABEL_57;
          do
          {
LABEL_56:
            *v19 = *v33;
            v19[1] = v33[1];
            v19[2] = v33[2];
            v19 += 3;
            v33 += 3;
            v21 -= 3;
          }
          while ( v21 > 2 );
LABEL_57:
          if ( v21 )
          {
            *v19 = *v33;
            if ( v21 == 1 )
            {
              ++v19;
            }
            else
            {
              v19[1] = v33[1];
              v19 += 2;
            }
          }
LABEL_62:
          v9 = v72;
          goto LABEL_9;
        }
        v33 = &v67[v68 - v32];
        v19 = v81;
        if ( v21 <= v32 )
        {
LABEL_55:
          if ( v21 < 3 )
            goto LABEL_57;
          goto LABEL_56;
        }
        v46 = v55 - (_DWORD)v81;
        v80 = v21 - v32;
        v49 = &v81[v60 - v30 - v65];
        v50 = v81;
        do
          *v50++ = (v49++)[v58];
        while ( v49 );
      }
      else
      {
        v33 = &v67[v61 - v32];
        if ( v21 <= v32 )
        {
          v19 = v81;
          if ( v21 < 3 )
            goto LABEL_57;
          goto LABEL_56;
        }
        v19 = v81;
        v46 = v55 - (_DWORD)v81;
        v80 = v21 - v32;
        v47 = &v81[v60 - v30 - v65];
        v48 = v81;
        do
          *v48++ = (v47++)[v62];
        while ( v47 );
      }
      v19 += v69 + v46;
      v33 = &v19[-v55];
      v21 = v80;
      goto LABEL_55;
    }
    if ( (v13 & 0x40) != 0 )
      break;
    v16 = v83 + 4 * *(unsigned __int16 *)(v14 + 2);
    v17 = 4 * (v11 & ~(-1 << v13));
    v13 = *(unsigned __int8 *)(v16 + v17);
    v14 = v16 + v17;
    v18 = *(unsigned __int8 *)(v14 + 1);
    v10 -= v18;
    v11 >>= v18;
    if ( !v13 )
      goto LABEL_8;
  }
  if ( (v13 & 0x20) == 0 )
  {
    v52 = "invalid literal/length code";
    goto LABEL_71;
  }
  v51 = 16191;
LABEL_72:
  *((_DWORD *)v74 + 1) = v51;
LABEL_73:
  a1[3] = v81;
  v53 = &v9[-(v10 >> 3)];
  *a1 = v53;
  a1[1] = (unsigned __int8 *)(v76 + 5 - (_DWORD)v53);
  a1[4] = (unsigned __int8 *)(v77 + 257 - (_DWORD)v81);
  *((_DWORD *)v74 + 15) = v11 & ~(-1 << (v10 & 7));
  *((_DWORD *)v74 + 16) = v10 & 7;
  return v10 & 7;
}
