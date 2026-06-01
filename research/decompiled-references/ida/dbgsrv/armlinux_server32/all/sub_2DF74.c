/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DF74
// Address: 0x0002DF74

//----- (0002DF74) --------------------------------------------------------
int __fastcall sub_2DF74(int a1, _DWORD *a2)
{
  unsigned int v3; // r6
  int v4; // r4
  __int64 v6; // r10
  unsigned int v7; // r12
  unsigned int v8; // r0
  char *v9; // r2
  unsigned int v10; // r9
  char *v11; // r6
  int v12; // r9
  char *v13; // r6
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r1
  char *v18; // r0
  __int64 v19; // kr00_8
  char *v20; // r1
  char *v21; // r0
  char *v22; // lr
  int v23; // r5
  char *v24; // r11
  int v25; // r4
  char *v26; // r9
  char *v27; // r6
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  char *v32; // r12
  int v33; // r1
  char *v34; // r6
  int v35; // r8
  char *v36; // r6
  int v37; // r1
  int v38; // r2
  int v39; // r3
  int v40; // r1
  char *v41; // r0
  __int64 v42; // kr08_8
  char *v43; // r6
  char *v44; // r0
  char *v45; // r9
  int v46; // r5
  char *v47; // r4
  int v48; // r8
  char *v49; // r12
  int v50; // r0
  int v51; // r1
  int v52; // r2
  int v53; // r3
  char *v54; // lr
  int v55; // r1
  char *v56; // [sp+Ch] [bp-58h]
  int v57; // [sp+10h] [bp-54h]
  int v58; // [sp+2Ch] [bp-38h] BYREF
  int v59; // [sp+30h] [bp-34h]
  int v60; // [sp+34h] [bp-30h]
  int v61; // [sp+38h] [bp-2Ch]
  int v62; // [sp+3Ch] [bp-28h]
  int v63; // [sp+40h] [bp-24h]
  int v64; // [sp+44h] [bp-20h]
  int v65; // [sp+48h] [bp-1Ch]
  int v66; // [sp+4Ch] [bp-18h]
  int v67; // [sp+50h] [bp-14h]
  int v68; // [sp+54h] [bp-10h]
  int v69; // [sp+58h] [bp-Ch]

  v3 = *(_DWORD *)(a1 + 48);
  v4 = a1;
  if ( v3 < *(_DWORD *)(a1 + 52) )
    goto LABEL_2;
  v6 = *(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 40);
  if ( v6 )
  {
    v7 = *(_DWORD *)(a1 + 32);
    if ( (_DWORD)v6 == v7 )
    {
LABEL_5:
      *(_DWORD *)(v4 + 48) = 0;
      v8 = sub_2DD98(v4, v6);
      *(_DWORD *)(v4 + 52) = v8;
      if ( v8 )
      {
        v3 = *(_DWORD *)(v4 + 48);
        *(_QWORD *)(v4 + 40) += v8;
        if ( v8 > v3 )
        {
LABEL_2:
          *a2 = *(_DWORD *)(v4 + 28) + 24 * v3;
          ++*(_DWORD *)(v4 + 48);
          return 1;
        }
      }
      return 0;
    }
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v63 = 0;
    if ( (unsigned int)v6 >= v7 )
    {
      if ( (unsigned int)v6 <= v7 )
        goto LABEL_5;
      v9 = *(char **)(a1 + 28);
      v10 = *(_DWORD *)(a1 + 36);
      v57 = a1 + 28;
      v56 = v9;
      if ( v9 <= (char *)&v58 && &v58 < (int *)&v9[24 * v10] )
      {
        v64 = v58;
        v65 = v59;
        v66 = v60;
        v67 = v61;
        v68 = v62;
        v69 = v63;
        if ( (unsigned int)v6 <= v10 )
          goto LABEL_24;
        v41 = (char *)sub_78018(v57, nullptr, v6, 0x18u);
        v42 = *(_QWORD *)(v4 + 32);
        v43 = v41;
        v56 = v41;
        *(_DWORD *)(v4 + 36) = v10;
        v44 = *(char **)(v4 + 28);
        if ( (int)v42 - 1 >= 0 )
        {
          v45 = v43 + 24;
          v46 = v4;
          v47 = v44 + 24;
          v48 = v42 - 1;
          do
          {
            v49 = v45 - 24;
            v50 = *((_DWORD *)v47 - 6);
            v51 = *((_DWORD *)v47 - 5);
            v52 = *((_DWORD *)v47 - 4);
            v53 = *((_DWORD *)v47 - 3);
            v54 = v47 - 8;
            --v48;
            v47 += 24;
            v45 += 24;
            *(_DWORD *)v49 = v50;
            *((_DWORD *)v49 + 1) = v51;
            *((_DWORD *)v49 + 2) = v52;
            *((_DWORD *)v49 + 3) = v53;
            v49 += 16;
            v55 = *((_DWORD *)v54 + 1);
            *(_DWORD *)v49 = *(_DWORD *)v54;
            *((_DWORD *)v49 + 1) = v55;
          }
          while ( v48 != -1 );
          v4 = v46;
          v44 = *(char **)(v46 + 28);
          v56 = v43;
        }
        sub_77F70(v44);
        v7 = *(_DWORD *)(v4 + 32);
        *(_DWORD *)(v4 + 28) = v56;
        *(_DWORD *)(v4 + 36) = HIDWORD(v42);
        if ( (unsigned int)v6 > v7 )
        {
LABEL_24:
          v34 = v56;
          v35 = 24 * v7;
          while ( 1 )
          {
            v36 = &v34[v35];
            v37 = v65;
            v38 = v66;
            v39 = v67;
            ++v7;
            v35 += 24;
            *(_DWORD *)v36 = v64;
            *((_DWORD *)v36 + 1) = v37;
            *((_DWORD *)v36 + 2) = v38;
            *((_DWORD *)v36 + 3) = v39;
            v36 += 16;
            v40 = v69;
            *(_DWORD *)v36 = v68;
            *((_DWORD *)v36 + 1) = v40;
            if ( (unsigned int)v6 <= v7 )
              break;
            v34 = *(char **)(v4 + 28);
          }
        }
      }
      else
      {
        if ( (unsigned int)v6 <= v10 )
          goto LABEL_13;
        v18 = (char *)sub_78018(v57, nullptr, v6, 0x18u);
        v19 = *(_QWORD *)(v4 + 32);
        v20 = v18;
        *(_DWORD *)(v4 + 36) = v10;
        v56 = v18;
        v21 = *(char **)(v4 + 28);
        if ( (int)v19 - 1 >= 0 )
        {
          v22 = v21 + 24;
          v23 = v4;
          v24 = v20;
          v25 = v19 - 1;
          v26 = v20 + 24;
          do
          {
            v27 = v26 - 24;
            v28 = *((_DWORD *)v22 - 6);
            v29 = *((_DWORD *)v22 - 5);
            v30 = *((_DWORD *)v22 - 4);
            v31 = *((_DWORD *)v22 - 3);
            v32 = v22 - 8;
            --v25;
            v22 += 24;
            v26 += 24;
            *(_DWORD *)v27 = v28;
            *((_DWORD *)v27 + 1) = v29;
            *((_DWORD *)v27 + 2) = v30;
            *((_DWORD *)v27 + 3) = v31;
            v27 += 16;
            v33 = *((_DWORD *)v32 + 1);
            *(_DWORD *)v27 = *(_DWORD *)v32;
            *((_DWORD *)v27 + 1) = v33;
          }
          while ( v25 != -1 );
          v4 = v23;
          v56 = v24;
          v21 = *(char **)(v23 + 28);
        }
        sub_77F70(v21);
        v7 = *(_DWORD *)(v4 + 32);
        *(_DWORD *)(v4 + 28) = v56;
        *(_DWORD *)(v4 + 36) = HIDWORD(v19);
        if ( (unsigned int)v6 > v7 )
        {
LABEL_13:
          v11 = v56;
          v12 = 24 * v7;
          while ( 1 )
          {
            v13 = &v11[v12];
            v14 = v59;
            v15 = v60;
            v16 = v61;
            ++v7;
            v12 += 24;
            *(_DWORD *)v13 = v58;
            *((_DWORD *)v13 + 1) = v14;
            *((_DWORD *)v13 + 2) = v15;
            *((_DWORD *)v13 + 3) = v16;
            v13 += 16;
            v17 = v63;
            *(_DWORD *)v13 = v62;
            *((_DWORD *)v13 + 1) = v17;
            if ( (unsigned int)v6 <= v7 )
              break;
            v11 = *(char **)(v4 + 28);
          }
        }
      }
    }
    *(_DWORD *)(v4 + 32) = v6;
    goto LABEL_5;
  }
  return 0;
}
