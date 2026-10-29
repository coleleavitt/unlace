/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C460
// Address: 0x0008C460

//----- (0008C460) --------------------------------------------------------
int __fastcall sub_8C460(int result, int a2, int a3)
{
  int v3; // r7
  int v4; // r6
  int v5; // r5
  int v6; // r4
  int v7; // r3
  int v8; // r5
  int v9; // r1
  int v10; // r2
  unsigned int v11; // r6
  int v12; // r5
  unsigned int v13; // r3
  int v14; // r7
  int v15; // r0
  int v16; // r5
  int *v17; // r4
  int v18; // r0
  unsigned int v19; // r3
  _WORD *v20; // r1
  int v21; // r7
  int v22; // r3
  int *v23; // r6
  int v24; // r5
  int v25; // r0
  int v26; // r2
  int v27; // r5
  char v28; // r0
  int v29; // r5
  int v30; // r0
  int v31; // r0
  int v32; // r2
  int v33; // r5
  int v34; // r0
  int v35; // r5
  char v36; // r0
  int v37; // r5
  int v38; // r0
  int v39; // r5
  int v40; // r0
  int v41; // r2
  int v42; // r5
  char v43; // r0
  int v44; // r5
  int v45; // r0
  unsigned int v46; // r2
  int v47; // r6
  int v48; // r5
  int v49; // r1
  int v50; // r3
  int v51; // r0
  int v52; // r2
  int v53; // r5
  int v54; // r0
  int v55; // r2
  char v56; // r0
  int v57; // r2
  int v58; // r2
  int v59; // r2
  int v60; // r5
  unsigned int v61; // r2
  int v62; // r0
  int v63; // r2
  char v64; // r0
  int v65; // r2
  int v66; // r2
  int v67; // r5
  unsigned int v68; // r2
  int v69; // r0
  int v70; // r2
  char v71; // r0
  int v72; // r2
  int v73; // r2
  unsigned int v74; // [sp+0h] [bp-48h]
  unsigned int v75; // [sp+0h] [bp-48h]
  unsigned __int16 *v76; // [sp+4h] [bp-44h]
  unsigned __int16 *v77; // [sp+8h] [bp-40h]
  unsigned __int16 *v78; // [sp+Ch] [bp-3Ch]
  unsigned __int16 *v79; // [sp+10h] [bp-38h]
  unsigned __int16 *v80; // [sp+14h] [bp-34h]
  unsigned __int16 *v81; // [sp+18h] [bp-30h]
  int v82; // [sp+20h] [bp-28h]
  int v83; // [sp+24h] [bp-24h]
  int v84; // [sp+28h] [bp-20h]
  int v85; // [sp+2Ch] [bp-1Ch]
  int v86; // [sp+30h] [bp-18h]
  int v87; // [sp+34h] [bp-14h]
  unsigned int v88; // [sp+38h] [bp-10h]
  char v89; // [sp+38h] [bp-10h]
  int v90; // [sp+3Ch] [bp-Ch]
  int v91; // [sp+3Ch] [bp-Ch]
  int v92; // [sp+3Ch] [bp-Ch]
  int *v93; // [sp+40h] [bp-8h]
  unsigned __int16 *v94; // [sp+44h] [bp-4h]

  v87 = result;
  if ( a3 >= 0 )
  {
    v3 = 3;
    if ( *(_WORD *)(a2 + 2) )
      v3 = 4;
    v4 = 138;
    if ( *(_WORD *)(a2 + 2) )
      v4 = 7;
    v81 = (unsigned __int16 *)(result + 2748);
    v80 = (unsigned __int16 *)(result + 2750);
    v79 = (unsigned __int16 *)(result + 2756);
    v78 = (unsigned __int16 *)(result + 2758);
    v77 = (unsigned __int16 *)(result + 2754);
    v94 = (unsigned __int16 *)(result + 5816);
    v93 = (int *)(result + 5820);
    v76 = (unsigned __int16 *)(result + 2752);
    v5 = 0;
    v90 = -1;
    v6 = 0;
    v83 = a3;
    v82 = a2;
    result = *(unsigned __int16 *)(a2 + 2);
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = result;
          v86 = v5 + 1;
          result = *(unsigned __int16 *)(a2 + 4 * (v5 + 1) + 2);
          v8 = v6 + 1;
          if ( v6 + 1 >= v4 || v7 != result )
            break;
          ++v6;
          v5 = v86;
          if ( v86 > a3 )
            return result;
        }
        v85 = v7;
        v84 = result;
        if ( v8 >= v3 )
        {
          if ( v7 )
          {
            if ( v7 == v90 )
            {
              v20 = v94;
              v21 = *v94;
              v22 = *v93;
              LOWORD(v6) = v6 + 1;
            }
            else
            {
              v31 = v87 + 4 * v7;
              v32 = *(unsigned __int16 *)(v31 + 2686);
              v33 = *v93;
              v88 = *(unsigned __int16 *)(v31 + 2684);
              v34 = *v94 | (v88 << *v93);
              *v94 = v34;
              if ( v33 <= 16 - v32 )
              {
                v22 = v33 + v32;
                v21 = v34;
              }
              else
              {
                v35 = *(_DWORD *)(v87 + 20);
                *(_DWORD *)(v87 + 20) = v35 + 1;
                *(_BYTE *)(*(_DWORD *)(v87 + 8) + v35) = v34;
                v36 = *((_BYTE *)v94 + 1);
                v37 = *(_DWORD *)(v87 + 20);
                *(_DWORD *)(v87 + 20) = v37 + 1;
                *(_BYTE *)(*(_DWORD *)(v87 + 8) + v37) = v36;
                v38 = *v93;
                v21 = v88 >> (16 - *v93);
                *v94 = v21;
                v22 = v32 + v38 - 16;
              }
              *v93 = v22;
              v20 = v94;
            }
            v46 = *v81;
            v47 = (v46 << v22) | v21;
            v48 = *v80;
            *v20 = v47;
            if ( v22 <= 16 - v48 )
            {
              v53 = v22 + v48;
              v52 = (v46 << v22) | v21;
              v23 = v93;
            }
            else
            {
              v49 = *(_DWORD *)(v87 + 20);
              *(_DWORD *)(v87 + 20) = v49 + 1;
              *(_BYTE *)(*(_DWORD *)(v87 + 8) + v49) = v47;
              v20 = v94;
              v89 = *((_BYTE *)v94 + 1);
              v50 = *(_DWORD *)(v87 + 20);
              *(_DWORD *)(v87 + 20) = v50 + 1;
              *(_BYTE *)(*(_DWORD *)(v87 + 8) + v50) = v89;
              v23 = v93;
              v51 = *v93;
              v52 = v46 >> (16 - *(_BYTE *)v93);
              *v94 = v52;
              v53 = v48 + v51 - 16;
            }
            *v23 = v53;
            v54 = ((unsigned __int16)(v6 - 3) << v53) | v52;
            *v20 = v54;
            if ( v53 < 15 )
            {
              v59 = v53 + 2;
            }
            else
            {
              v55 = *(_DWORD *)(v87 + 20);
              *(_DWORD *)(v87 + 20) = v55 + 1;
              *(_BYTE *)(*(_DWORD *)(v87 + 8) + v55) = v54;
              v56 = *((_BYTE *)v94 + 1);
              v57 = *(_DWORD *)(v87 + 20);
              *(_DWORD *)(v87 + 20) = v57 + 1;
              *(_BYTE *)(*(_DWORD *)(v87 + 8) + v57) = v56;
              v58 = *v23;
              *v94 = (unsigned __int16)(v6 - 3) >> (16 - *v23);
              v59 = v58 - 14;
            }
          }
          else
          {
            v23 = v93;
            if ( v8 > 10 )
            {
              v39 = *v93;
              v75 = *v79;
              v40 = *v94 | (v75 << *v93);
              v41 = *v78;
              *v94 = v40;
              v92 = v41;
              if ( v39 > 16 - v41 )
              {
                v42 = *(_DWORD *)(v87 + 20);
                *(_DWORD *)(v87 + 20) = v42 + 1;
                *(_BYTE *)(*(_DWORD *)(v87 + 8) + v42) = v40;
                v43 = *((_BYTE *)v94 + 1);
                v44 = *(_DWORD *)(v87 + 20);
                *(_DWORD *)(v87 + 20) = v44 + 1;
                *(_BYTE *)(*(_DWORD *)(v87 + 8) + v44) = v43;
                v23 = v93;
                v45 = *v93;
                v68 = v75 >> (16 - *v93);
                *v94 = v68;
                v67 = v92 + v45 - 16;
              }
              else
              {
                v67 = v39 + v41;
                v68 = v40;
                v23 = v93;
              }
              *v23 = v67;
              v69 = ((unsigned __int16)(v6 - 10) << v67) | v68;
              *v94 = v69;
              if ( v67 < 10 )
              {
                v59 = v67 + 7;
              }
              else
              {
                v70 = *(_DWORD *)(v87 + 20);
                *(_DWORD *)(v87 + 20) = v70 + 1;
                *(_BYTE *)(*(_DWORD *)(v87 + 8) + v70) = v69;
                v71 = *((_BYTE *)v94 + 1);
                v72 = *(_DWORD *)(v87 + 20);
                *(_DWORD *)(v87 + 20) = v72 + 1;
                *(_BYTE *)(*(_DWORD *)(v87 + 8) + v72) = v71;
                v73 = *v23;
                *v94 = (unsigned __int16)(v6 - 10) >> (16 - *v23);
                v59 = v73 - 9;
              }
            }
            else
            {
              v24 = *v93;
              v74 = *v76;
              v25 = *v94 | (v74 << *v93);
              v26 = *v77;
              *v94 = v25;
              v91 = v26;
              if ( v24 > 16 - v26 )
              {
                v27 = *(_DWORD *)(v87 + 20);
                *(_DWORD *)(v87 + 20) = v27 + 1;
                *(_BYTE *)(*(_DWORD *)(v87 + 8) + v27) = v25;
                v28 = *((_BYTE *)v94 + 1);
                v29 = *(_DWORD *)(v87 + 20);
                *(_DWORD *)(v87 + 20) = v29 + 1;
                *(_BYTE *)(*(_DWORD *)(v87 + 8) + v29) = v28;
                v30 = *v93;
                v61 = v74 >> (16 - *v93);
                *v94 = v61;
                v60 = v91 + v30 - 16;
              }
              else
              {
                v60 = v24 + v26;
                v61 = v25;
              }
              *v93 = v60;
              v62 = ((unsigned __int16)(v6 - 2) << v60) | v61;
              *v94 = v62;
              if ( v60 < 14 )
              {
                v59 = v60 + 3;
              }
              else
              {
                v63 = *(_DWORD *)(v87 + 20);
                *(_DWORD *)(v87 + 20) = v63 + 1;
                *(_BYTE *)(*(_DWORD *)(v87 + 8) + v63) = v62;
                v64 = *((_BYTE *)v94 + 1);
                v65 = *(_DWORD *)(v87 + 20);
                *(_DWORD *)(v87 + 20) = v65 + 1;
                *(_BYTE *)(*(_DWORD *)(v87 + 8) + v65) = v64;
                v66 = *v93;
                *v94 = (unsigned __int16)(v6 - 2) >> (16 - *v93);
                v59 = v66 - 13;
              }
            }
          }
          *v23 = v59;
        }
        else
        {
          v9 = -1 - v6;
          v10 = v87 + 4 * v7;
          v11 = *v94;
          v12 = *v93;
          do
          {
            v13 = *(unsigned __int16 *)(v10 + 2684);
            v11 |= v13 << v12;
            v14 = *(unsigned __int16 *)(v10 + 2686);
            *v94 = v11;
            if ( v12 <= 16 - v14 )
            {
              v12 += v14;
              v17 = v93;
            }
            else
            {
              v15 = *(_DWORD *)(v87 + 20);
              *(_DWORD *)(v87 + 20) = v15 + 1;
              *(_BYTE *)(*(_DWORD *)(v87 + 8) + v15) = v11;
              LOBYTE(v15) = *((_BYTE *)v94 + 1);
              v16 = *(_DWORD *)(v87 + 20);
              *(_DWORD *)(v87 + 20) = v16 + 1;
              *(_BYTE *)(*(_DWORD *)(v87 + 8) + v16) = v15;
              v17 = v93;
              v18 = *v93;
              v19 = v13 >> (16 - *v93);
              *v94 = v19;
              v12 = v14 + v18 - 16;
              v11 = v19;
            }
            *v17 = v12;
            ++v9;
          }
          while ( v9 );
        }
        v6 = 0;
        v4 = 138;
        v3 = 3;
        result = v84;
        if ( v84 )
          break;
        v90 = v85;
        a3 = v83;
        a2 = v82;
        v5 = v86;
        if ( v86 > v83 )
          return result;
      }
      v4 = 6;
      a3 = v83;
      a2 = v82;
      v5 = v86;
      if ( v85 != v84 )
        v4 = 7;
      v3 = 3;
      if ( v85 != v84 )
        v3 = 4;
      v6 = 0;
      v90 = v85;
      result = v84;
    }
    while ( v86 <= v83 );
  }
  return result;
}
