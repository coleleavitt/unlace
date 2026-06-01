/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C0E8
// Address: 0x0008C0E8

//----- (0008C0E8) --------------------------------------------------------
int __fastcall sub_8C0E8(int a1, int a2, int a3)
{
  unsigned __int16 *v3; // r6
  unsigned int v4; // r4
  unsigned __int8 *v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r4
  int v9; // r3
  int v10; // r0
  unsigned int v11; // r5
  int v12; // r7
  unsigned __int16 *v13; // r1
  int v14; // r6
  int v15; // r3
  int v16; // r6
  int *v17; // r0
  int v18; // r3
  int v19; // r5
  int v20; // r2
  unsigned __int16 *v21; // r1
  int v22; // r0
  unsigned int v23; // r7
  int *v24; // r5
  int v25; // r4
  int v26; // r3
  int v27; // r4
  char v28; // r3
  int v29; // r4
  int v30; // r3
  int v31; // r6
  int v32; // r4
  unsigned int v33; // r1
  int v34; // r5
  int v35; // r2
  int v36; // r3
  int v37; // r2
  int v38; // r1
  int v39; // r3
  unsigned int v40; // r4
  bool v41; // cf
  unsigned int v42; // r3
  unsigned __int16 *v43; // r3
  int v44; // r7
  unsigned int v45; // r5
  int v46; // r1
  int v47; // r2
  char v48; // r1
  int v49; // r2
  int v50; // r1
  int v51; // r5
  int v52; // r1
  unsigned int v53; // r7
  int v54; // r5
  int v55; // r0
  char v56; // r4
  int v57; // r2
  int v58; // r3
  int v59; // r7
  unsigned __int16 *v60; // r4
  int v61; // r2
  int v62; // r1
  unsigned int v63; // r3
  int v64; // r6
  int v65; // r5
  char v66; // r6
  int v67; // r2
  int *v68; // r5
  int v69; // r0
  int result; // r0
  __int16 v72; // [sp+4h] [bp-30h]
  _DWORD *v73; // [sp+8h] [bp-2Ch]
  unsigned int *v74; // [sp+Ch] [bp-28h]
  int v77; // [sp+18h] [bp-1Ch]
  __int16 v78; // [sp+18h] [bp-1Ch]
  int v79; // [sp+1Ch] [bp-18h]
  int v80; // [sp+1Ch] [bp-18h]
  unsigned __int16 *v81; // [sp+24h] [bp-10h]
  unsigned int v82; // [sp+2Ch] [bp-8h]
  int *v83; // [sp+30h] [bp-4h]

  v74 = (unsigned int *)(a1 + 5792);
  if ( !*(_DWORD *)(a1 + 5792) )
  {
    v59 = *(unsigned __int16 *)(a1 + 5816);
    v60 = (unsigned __int16 *)(a1 + 5816);
    v61 = *(_DWORD *)(a1 + 5820);
    v83 = (int *)(a1 + 5820);
    goto LABEL_31;
  }
  v3 = (unsigned __int16 *)(a1 + 5816);
  v83 = (int *)(a1 + 5820);
  v73 = (_DWORD *)(a1 + 5784);
  v4 = 0;
  v81 = (unsigned __int16 *)(a1 + 5816);
  do
  {
    v5 = (unsigned __int8 *)(*v73 + v4);
    v6 = (v5[1] << 8) + *v5;
    v7 = v5[2];
    v82 = v4 + 3;
    if ( v6 )
    {
      v77 = v6;
      v72 = v7;
      v8 = *((unsigned __int8 *)&word_C8A12 + v7);
      v9 = a2 + 4 * (v8 | 0x100);
      v10 = *(unsigned __int16 *)(v9 + 6);
      v11 = *(unsigned __int16 *)(v9 + 4);
      v12 = *v83;
      v13 = v3;
      v14 = *v3 | (v11 << *v83);
      *v13 = v14;
      v79 = v10;
      if ( v12 <= 16 - v10 )
      {
        v20 = v12 + v10;
        v19 = v14;
        v17 = v83;
      }
      else
      {
        v15 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = v15 + 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v15) = v14;
        LOBYTE(v15) = *((_BYTE *)v13 + 1);
        v16 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = v16 + 1;
        v17 = v83;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v16) = v15;
        v18 = *v83;
        v19 = v11 >> (16 - *(_BYTE *)v83);
        *v13 = v19;
        v20 = v79 + v18 - 16;
      }
      *v17 = v20;
      v31 = v8;
      if ( (unsigned int)(v8 - 8) > 0x13 )
      {
        v38 = v19;
        v39 = v77;
      }
      else
      {
        v32 = dword_C900C[v8];
        v33 = (unsigned __int16)(v72 - LOWORD(dword_C9158[v31]));
        v34 = v19 | (v33 << v20);
        *v81 = v34;
        if ( v20 <= 16 - v32 )
        {
          v20 += v32;
          v38 = v34;
        }
        else
        {
          v35 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 20) = v35 + 1;
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + v35) = v34;
          LOBYTE(v35) = *((_BYTE *)v81 + 1);
          v36 = *(_DWORD *)(a1 + 20);
          *(_DWORD *)(a1 + 20) = v36 + 1;
          v17 = v83;
          *(_BYTE *)(*(_DWORD *)(a1 + 8) + v36) = v35;
          v37 = *v83;
          v38 = v33 >> (16 - *(_BYTE *)v83);
          *v81 = v38;
          v20 = v32 + v37 - 16;
        }
        v39 = v77;
        *v17 = v20;
      }
      v40 = ((unsigned int)(v39 - 1) >> 7) + 256;
      v41 = (unsigned int)(v39 - 1) >= 0x100;
      v78 = v39 - 1;
      v42 = v39 - 1;
      if ( v41 )
        v42 = v40;
      v80 = (unsigned __int8)byte_C8812[v42];
      v43 = (unsigned __int16 *)(a3 + 4 * v80);
      v44 = v43[1];
      v45 = *v43;
      v46 = v38 | (v45 << v20);
      *v81 = v46;
      if ( v20 <= 16 - v44 )
      {
        v61 = v20 + v44;
        v51 = v46;
      }
      else
      {
        v47 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = v47 + 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v47) = v46;
        v48 = *((_BYTE *)v81 + 1);
        v49 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = v49 + 1;
        v17 = v83;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v49) = v48;
        v50 = *v83;
        v51 = v45 >> (16 - *v83);
        *v81 = v51;
        v61 = v44 + v50 - 16;
      }
      *v17 = v61;
      if ( (unsigned int)(v80 - 4) > 0x19 )
      {
        v59 = v51;
        v3 = v81;
        v4 = v82;
        continue;
      }
      v52 = dword_C9080[v80];
      v53 = (unsigned __int16)(v78 - LOWORD(dword_C91CC[v80]));
      v54 = v51 | (v53 << v61);
      v3 = v81;
      *v81 = v54;
      if ( v61 <= 16 - v52 )
      {
        v61 += v52;
        v59 = v54;
        v24 = v83;
      }
      else
      {
        v55 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = v55 + 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v55) = v54;
        v56 = *((_BYTE *)v81 + 1);
        v57 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = v57 + 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v57) = v56;
        v24 = v83;
        v58 = *v83;
        v59 = v53 >> (16 - *v83);
        *v81 = v59;
        v61 = v52 + v58 - 16;
      }
    }
    else
    {
      v21 = (unsigned __int16 *)(a2 + 4 * v7);
      v22 = v21[1];
      v23 = *v21;
      v24 = v83;
      v25 = *v83;
      v26 = *v3 | (v23 << *v83);
      *v3 = v26;
      if ( v25 <= 16 - v22 )
      {
        v61 = v25 + v22;
        v59 = v26;
      }
      else
      {
        v27 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = v27 + 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v27) = v26;
        v28 = *((_BYTE *)v3 + 1);
        v29 = *(_DWORD *)(a1 + 20);
        *(_DWORD *)(a1 + 20) = v29 + 1;
        *(_BYTE *)(*(_DWORD *)(a1 + 8) + v29) = v28;
        v30 = *v83;
        v59 = v23 >> (16 - *v83);
        *v3 = v59;
        v61 = v22 + v30 - 16;
      }
    }
    v4 = v82;
    *v24 = v61;
  }
  while ( v4 < *v74 );
  v60 = v3;
LABEL_31:
  v62 = *(unsigned __int16 *)(a2 + 1026);
  v63 = *(unsigned __int16 *)(a2 + 1024);
  v64 = (v63 << v61) | v59;
  *v60 = v64;
  if ( v61 <= 16 - v62 )
  {
    result = v61 + v62;
    v68 = v83;
  }
  else
  {
    v65 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 20) = v65 + 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + v65) = v64;
    v66 = *((_BYTE *)v60 + 1);
    v67 = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 20) = v67 + 1;
    *(_BYTE *)(*(_DWORD *)(a1 + 8) + v67) = v66;
    v68 = v83;
    v69 = *v83;
    *v60 = v63 >> (16 - *(_BYTE *)v83);
    result = v62 + v69 - 16;
  }
  *v68 = result;
  return result;
}
// C8A12: using guessed type __int16 word_C8A12;
// C900C: using guessed type int dword_C900C[8];
// C9080: using guessed type int dword_C9080[4];
// C9158: using guessed type int dword_C9158[];
// C91CC: using guessed type int dword_C91CC[];
