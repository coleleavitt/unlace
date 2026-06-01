/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D47D4
// Address: 0x00000000000D47D4

//----- (00000000000D47D4) ----------------------------------------------------
unsigned __int8 **__fastcall sub_D47D4(unsigned __int8 **result, int a2)
{
  unsigned __int8 *v2; // x8
  int v3; // w11
  unsigned __int8 *v4; // x14
  unsigned int v5; // w2
  int v6; // w18
  int v7; // w6
  int v8; // w7
  unsigned __int64 v9; // x10
  unsigned __int64 v10; // x17
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x19
  unsigned __int8 *v14; // x9
  __int64 v15; // x24
  unsigned __int64 v16; // x27
  unsigned int v17; // w13
  __int64 v18; // x29
  __int64 v19; // x3
  unsigned __int64 v20; // x11
  unsigned __int8 *v21; // x12
  const char *v22; // x26
  __int64 v23; // x25
  const char *v24; // x16
  unsigned __int64 v25; // x3
  unsigned __int64 v26; // x19
  __int64 i; // x3
  int v28; // w20
  char v29; // w19
  unsigned int v30; // w28
  unsigned int v31; // w3
  unsigned int v32; // t1
  char v33; // w20
  int v34; // w19
  unsigned __int64 v35; // x3
  unsigned __int64 v36; // x19
  __int64 j; // x3
  int v38; // w20
  char v39; // w19
  __int64 v40; // x23
  unsigned int v41; // w3
  const char *v42; // x1
  char v43; // w20
  __int64 v44; // x19
  __int64 v45; // x21
  __int64 v46; // x30
  unsigned int v47; // w26
  __int64 v48; // x19
  unsigned int v49; // w20
  __int64 v50; // x19
  unsigned int v51; // w26
  unsigned __int8 *v52; // x3
  __int64 v53; // x23
  __int64 v54; // x21
  unsigned __int8 *v55; // x23
  __int64 v56; // x19
  __int64 v57; // x3
  __int64 v58; // x20
  unsigned int v59; // w21
  __int64 v60; // x23
  unsigned __int8 *v61; // x30
  unsigned __int8 v62; // w26
  unsigned __int8 *v63; // x20
  __int64 v64; // x19
  __int64 v65; // x23
  unsigned __int8 *v66; // x28
  int v67; // w23
  unsigned __int64 v68; // x21
  unsigned __int8 *v69; // x23
  unsigned __int8 v70; // w19
  __int64 v71; // x21
  __int128 *v72; // x19
  _OWORD *v73; // x20
  __int128 v74; // q0
  __int128 v75; // q1
  unsigned __int8 v76; // t1
  __int64 v77; // x26
  __int64 v78; // x21
  __int128 *v79; // x19
  _OWORD *v80; // x28
  __int64 v81; // x21
  __int128 v82; // q0
  __int128 v83; // q1
  unsigned __int8 v84; // t1
  unsigned __int8 *v85; // x3
  unsigned __int8 *v86; // x20
  unsigned int v87; // w19
  char *v88; // x21
  __int64 v89; // x23
  bool v90; // cf
  _OWORD *v91; // x28
  __int128 *v92; // x19
  __int64 v93; // x20
  __int64 v94; // x21
  __int64 v95; // x21
  __int128 v96; // q0
  __int128 v97; // q1
  unsigned __int8 v98; // t1
  unsigned __int8 *v99; // x20
  unsigned __int8 *v100; // x19
  unsigned __int8 *v101; // x19
  __int128 *v102; // x19
  unsigned __int8 *v103; // x14
  __int64 v104; // x21
  __int128 v105; // q0
  __int128 v106; // q1
  unsigned __int8 v107; // t1
  int v108; // w15
  __int64 v109; // x15
  int v110; // w13
  unsigned __int8 *v111; // x9
  unsigned int v112; // [xsp+8h] [xbp-B8h]
  unsigned int v113; // [xsp+10h] [xbp-B0h]
  __int64 v114; // [xsp+18h] [xbp-A8h]
  unsigned int v115; // [xsp+18h] [xbp-A8h]
  __int64 v116; // [xsp+18h] [xbp-A8h]
  unsigned __int64 v117; // [xsp+30h] [xbp-90h]
  __int64 v118; // [xsp+38h] [xbp-88h]
  unsigned __int64 v119; // [xsp+40h] [xbp-80h]
  unsigned __int64 v120; // [xsp+50h] [xbp-70h]
  unsigned int v121; // [xsp+5Ch] [xbp-64h]

  v2 = result[7];
  v3 = *((_DWORD *)result + 8);
  v4 = result[3];
  v5 = *((_DWORD *)v2 + 17);
  v6 = *((_DWORD *)v2 + 15);
  v7 = (_DWORD)v4 - (a2 - v3);
  v8 = v7 - 1;
  v121 = *((_DWORD *)v2 + 16);
  v10 = *((_QWORD *)v2 + 9);
  v9 = *((_QWORD *)v2 + 10);
  v11 = *((_QWORD *)v2 + 13);
  v12 = *((_QWORD *)v2 + 14);
  v13 = v5 - 1;
  v14 = *result;
  v120 = v10 + 1;
  v15 = (unsigned int)~(-1 << *((_DWORD *)v2 + 30));
  v16 = v13 + 1;
  v17 = *((_DWORD *)v2 + 22);
  v118 = v13 + 2;
  v119 = v10 + 16;
  v18 = v13 + 1 - (v5 & 0x1F);
  v117 = v10 + v13 + 1;
  v19 = (unsigned int)(v3 - 257);
  v20 = (unsigned __int64)&(*result)[*((_DWORD *)result + 2) - 5];
  v21 = &v4[v19];
  v22 = "invalid distance code";
  v23 = (unsigned int)~(-1 << *((_DWORD *)v2 + 31));
  v24 = "invalid distance too far back";
  while ( 2 )
  {
    if ( v17 <= 0xE )
    {
      v25 = (unsigned __int64)*v14 << v17;
      v26 = (unsigned __int64)v14[1] << ((unsigned __int8)v17 + 8);
      v14 += 2;
      v9 += v25 + v26;
      v17 += 16;
    }
    for ( i = v11 + 4 * (v9 & v15); ; i = v11
                                        + 4LL * *(unsigned __int16 *)(i + 2)
                                        + 4LL * ((unsigned int)v9 & ~(-1 << v29)) )
    {
      v28 = *(unsigned __int8 *)(i + 1);
      v29 = *(_BYTE *)i;
      v9 >>= v28;
      v17 -= v28;
      if ( !*(_BYTE *)i )
      {
        *v4++ = *(_BYTE *)(i + 2);
        goto LABEL_11;
      }
      if ( (*(_BYTE *)i & 0x10) != 0 )
        break;
      if ( (v29 & 0x40) != 0 )
      {
        if ( (v29 & 0x20) == 0 )
        {
          v24 = "invalid literal/length code";
          goto LABEL_96;
        }
        v108 = 16191;
LABEL_97:
        *((_DWORD *)v2 + 2) = v108;
        goto LABEL_98;
      }
    }
    v30 = *(unsigned __int16 *)(i + 2);
    v31 = v29 & 0xF;
    if ( (v29 & 0xF) != 0 )
    {
      if ( v17 < v31 )
      {
        v32 = *v14++;
        v33 = v17;
        v17 += 8;
        v9 += (unsigned __int64)v32 << v33;
      }
      v34 = v9 & ~(-1 << v31);
      v9 >>= v31;
      v30 += v34;
      v17 -= v31;
    }
    if ( v17 <= 0xE )
    {
      v35 = (unsigned __int64)*v14 << v17;
      v36 = (unsigned __int64)v14[1] << ((unsigned __int8)v17 + 8);
      v14 += 2;
      v9 += v35 + v36;
      v17 += 16;
    }
    for ( j = v12 + 4 * (v9 & v23); ; j = v12
                                        + 4LL * *(unsigned __int16 *)(j + 2)
                                        + 4LL * ((unsigned int)v9 & ~(-1 << v39)) )
    {
      v38 = *(unsigned __int8 *)(j + 1);
      v39 = *(_BYTE *)j;
      v9 >>= v38;
      v17 -= v38;
      if ( (*(_BYTE *)j & 0x10) != 0 )
        break;
      if ( (*(_BYTE *)j & 0x40) != 0 )
      {
        v24 = v22;
        goto LABEL_96;
      }
    }
    v40 = *(unsigned __int16 *)(j + 2);
    v41 = v39 & 0xF;
    v42 = v22;
    if ( v17 < v41 )
    {
      v43 = v17 + 8;
      v9 += (unsigned __int64)*v14 << v17;
      if ( v17 + 8 >= v41 )
      {
        v17 += 8;
        ++v14;
      }
      else
      {
        v44 = v14[1];
        v14 += 2;
        v17 += 16;
        v9 += v44 << v43;
      }
    }
    v45 = (unsigned int)v9 & ~(-1 << v41);
    v46 = v45 + v40;
    v9 >>= v41;
    v47 = v45 + v40 - ((_DWORD)v4 - v7);
    v17 -= v41;
    if ( (int)v45 + (int)v40 > (unsigned int)((_DWORD)v4 - v7) )
    {
      if ( v47 > v121 && *((_DWORD *)v2 + 1786) )
      {
LABEL_96:
        v108 = 16209;
        result[6] = (unsigned __int8 *)v24;
        goto LABEL_97;
      }
      if ( v5 )
      {
        v48 = v5 - v47;
        if ( v5 < v47 )
        {
          v49 = v47 - v5;
          v50 = v5 + v6 - v47;
          v51 = v30 - (v47 - v5);
          v52 = (unsigned __int8 *)(v10 + v50);
          if ( v30 > v49 )
          {
            v53 = v7 - 1 - v5 + (unsigned int)v45 + (unsigned int)v40 - (unsigned int)v4;
            v54 = v53 + 1;
            v114 = v53;
            if ( (unsigned __int64)(v53 + 1) < 0x20 )
            {
              v55 = v4;
              goto LABEL_64;
            }
            if ( (unsigned __int64)v4 < v120 + v50 + v53 )
            {
              v55 = v4;
              if ( v52 < &v4[v114 + 1] )
                goto LABEL_101;
            }
            v112 = v51;
            v77 = ((_BYTE)v114 + 1) & 0x1F;
            v78 = v54 - v77;
            v55 = &v4[v78];
            v49 -= v78;
            v52 += v78;
            v79 = (__int128 *)(v119 + v50);
            v80 = v4 + 16;
            v81 = v114 + 1 - v77;
            do
            {
              v82 = *(v79 - 1);
              v83 = *v79;
              v79 += 2;
              v81 -= 32;
              *(v80 - 1) = v82;
              *v80 = v83;
              v80 += 2;
            }
            while ( v81 );
            v51 = v112;
            if ( (((_BYTE)v114 + 1) & 0x1F) != 0 )
            {
LABEL_101:
              do
              {
LABEL_64:
                v84 = *v52++;
                --v49;
                *v55++ = v84;
              }
              while ( v49 );
            }
            v30 = v51 - v5;
            v85 = &v4[v114 + 1];
            if ( v51 > v5 )
            {
              v86 = &v4[v118];
              if ( v16 < 0x20 )
              {
                v87 = v5;
                v88 = (char *)v10;
                v22 = v42;
                goto LABEL_90;
              }
              v22 = v42;
              if ( (unsigned __int64)v85 < v117 )
              {
                v87 = v5;
                v88 = (char *)v10;
                if ( v10 < (unsigned __int64)&v86[v114] )
                  goto LABEL_102;
              }
              v102 = (__int128 *)(v10 + 16);
              v85 += v18;
              v103 = &v4[v114 + 17];
              v104 = v18;
              do
              {
                v105 = *(v102 - 1);
                v106 = *v102;
                v104 -= 32;
                v102 += 2;
                *((_OWORD *)v103 - 1) = v105;
                *(_OWORD *)v103 = v106;
                v103 += 32;
              }
              while ( v104 );
              v87 = v5 - v18;
              v88 = (char *)(v10 + v18);
              if ( (v5 & 0x1F) != 0 )
              {
LABEL_102:
                do
                {
LABEL_90:
                  v107 = *v88++;
                  --v87;
                  *v85++ = v107;
                }
                while ( v87 );
              }
              v4 = &v86[v114];
              v52 = &v86[v114 - (unsigned int)v46];
              if ( v30 < 3 )
              {
LABEL_80:
                if ( v30 )
                {
                  *v4 = *v52;
                  v101 = v4 + 1;
                  if ( v30 != 1 )
                  {
                    v101 = v4 + 2;
                    v4[1] = v52[1];
                  }
                  v4 = v101;
                  if ( v101 >= v21 )
                    break;
                  goto LABEL_12;
                }
LABEL_11:
                if ( v4 >= v21 )
                  break;
                goto LABEL_12;
              }
              do
              {
LABEL_78:
                v99 = v4 + 3;
                v30 -= 3;
                *v4 = *v52;
                v4[1] = v52[1];
                v100 = v52 + 3;
                v4[2] = v52[2];
                v52 += 3;
                v4 += 3;
              }
              while ( v30 > 2 );
              v4 = v99;
              v52 = v100;
              goto LABEL_80;
            }
            v4 += v114 + 1;
            v30 = v51;
            v52 = (unsigned __int8 *)v10;
          }
LABEL_77:
          v22 = v42;
          if ( v30 < 3 )
            goto LABEL_80;
          goto LABEL_78;
        }
        v52 = (unsigned __int8 *)(v10 + v48);
        if ( v30 <= v47 )
          goto LABEL_77;
        v113 = v30 - v47;
        v67 = v8 + v45 + v40;
        v68 = (unsigned int)(v67 - (_DWORD)v4) + 1LL;
        v116 = (unsigned int)(v67 - (_DWORD)v4);
        if ( v68 >= 0x20 )
        {
          v89 = (unsigned int)(v67 - (_DWORD)v4);
          if ( (unsigned __int64)v4 >= v120 + v48 + v89 || (v90 = v52 >= &v4[v89 + 1], v69 = v4, v90) )
          {
            v91 = v4 + 16;
            v92 = (__int128 *)(v119 + v48);
            v93 = ((_BYTE)v116 + 1) & 0x1F;
            v94 = v68 - v93;
            v69 = &v4[v94];
            v47 -= v94;
            v52 += v94;
            v95 = v116 + 1 - v93;
            do
            {
              v96 = *(v92 - 1);
              v97 = *v92;
              v92 += 2;
              v95 -= 32;
              *(v91 - 1) = v96;
              *v91 = v97;
              v91 += 2;
            }
            while ( v95 );
            if ( (((_BYTE)v116 + 1) & 0x1F) == 0 )
              goto LABEL_75;
          }
        }
        else
        {
          v69 = v4;
        }
        do
        {
          v98 = *v52++;
          --v47;
          *v69++ = v98;
        }
        while ( v47 );
LABEL_75:
        v30 = v113;
        v4 += v116 + 1;
        v52 = &v4[-(unsigned int)v46];
        goto LABEL_77;
      }
      v64 = v6 - v47;
      v52 = (unsigned __int8 *)(v10 + v64);
      if ( v30 <= v47 )
        goto LABEL_77;
      v115 = v30 - v47;
      v65 = (unsigned int)(v8 + v45 + v40 - (_DWORD)v4);
      if ( (unsigned __int64)(v65 + 1) >= 0x20 )
      {
        if ( (unsigned __int64)v4 >= v120 + v64 + v65 || (v66 = v4, v52 >= &v4[v65 + 1]) )
        {
          v71 = v65 + 1 - (((_BYTE)v65 + 1) & 0x1F);
          v66 = &v4[v71];
          v47 -= v71;
          v52 += v71;
          v72 = (__int128 *)(v119 + v64);
          v73 = v4 + 16;
          do
          {
            v74 = *(v72 - 1);
            v75 = *v72;
            v72 += 2;
            v71 -= 32;
            *(v73 - 1) = v74;
            *v73 = v75;
            v73 += 2;
          }
          while ( v71 );
          if ( (((_BYTE)v65 + 1) & 0x1F) == 0 )
            goto LABEL_58;
        }
      }
      else
      {
        v66 = v4;
      }
      do
      {
        v76 = *v52++;
        --v47;
        *v66++ = v76;
      }
      while ( v47 );
LABEL_58:
      v30 = v115;
      v4 += v65 + 1;
      v52 = &v4[-v46];
      goto LABEL_77;
    }
    v56 = -(__int64)(unsigned int)v46;
    v57 = 0;
    v58 = (__int64)&v4[-(unsigned int)v46 + 1];
    v59 = v30;
    do
    {
      v60 = v58 + v57;
      v61 = &v4[v57];
      v59 -= 3;
      *v61 = *(_BYTE *)(v58 + v57 - 1);
      v62 = *(_BYTE *)(v58 + v57);
      v57 += 3;
      v61[1] = v62;
      v61[2] = *(_BYTE *)(v60 + 1);
    }
    while ( v59 > 2 );
    v63 = &v4[v57];
    if ( v30 == (_DWORD)v57 )
    {
      v4 += v57;
    }
    else
    {
      *v63 = v4[v56 + v57];
      if ( v30 - 1 == (_DWORD)v57 )
      {
        v4 = v63 + 1;
      }
      else
      {
        v70 = v4[v56 + 1 + v57];
        v4 += v57 + 2;
        v63[1] = v70;
      }
    }
    v22 = v42;
    if ( v4 >= v21 )
      break;
LABEL_12:
    if ( (unsigned __int64)v14 < v20 )
      continue;
    break;
  }
LABEL_98:
  v109 = v17 >> 3;
  v110 = v17 & 7;
  result[3] = v4;
  v111 = &v14[-v109];
  *result = v111;
  *((_DWORD *)result + 8) = (_DWORD)v21 - (_DWORD)v4 + 257;
  *((_DWORD *)result + 2) = v20 - (_DWORD)v111 + 5;
  *((_QWORD *)v2 + 10) = (unsigned int)v9 & ~(-1 << v110);
  *((_DWORD *)v2 + 22) = v110;
  return result;
}
