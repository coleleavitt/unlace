/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D12D8
// Address: 0x00000000000D12D8

//----- (00000000000D12D8) ----------------------------------------------------
__int64 __fastcall sub_D12D8(__int64 result, __int64 a2, int a3)
{
  unsigned int v3; // w9
  int v4; // w8
  int v5; // w18
  int v6; // w6
  int v7; // w5
  int v8; // w4
  unsigned int v9; // w17
  int v10; // w3
  int v11; // w6
  unsigned int v12; // w5
  __int64 v13; // x4
  unsigned __int16 *v14; // x3
  unsigned __int16 *v15; // x4
  int v16; // w18
  int v17; // w7
  unsigned int v18; // w19
  __int64 v19; // x6
  __int64 v20; // x20
  __int64 v21; // x5
  __int64 v22; // x20
  int v23; // w7
  int v24; // w5
  int v25; // w4
  int v26; // w3
  int v27; // w6
  unsigned int v28; // w5
  int v29; // w4
  __int64 v30; // x6
  __int64 v31; // x7
  __int64 v32; // x4
  __int64 v33; // x7
  int v34; // w3
  int v35; // w3
  __int64 v36; // x4
  int v37; // w6
  int v38; // w3
  unsigned int v39; // w5
  __int64 v40; // x6
  __int64 v41; // x7
  __int64 v42; // x4
  __int64 v43; // x7
  int v44; // w3
  int v45; // w3
  int v46; // w6
  unsigned int v47; // w5
  int v48; // w4
  __int64 v49; // x6
  __int64 v50; // x7
  __int64 v51; // x4
  __int64 v52; // x7
  int v53; // w3
  int v54; // w3
  int v55; // w3
  unsigned int v56; // w6
  int v57; // w4
  __int64 v58; // x5
  __int64 v59; // x7
  __int64 v60; // x4
  __int64 v61; // x7
  int v62; // w3
  int v63; // w3
  unsigned int v64; // w18
  int v65; // w4
  __int64 v66; // x3
  __int64 v67; // x5
  __int64 v68; // x3
  char v69; // w4
  __int64 v70; // x5
  int v71; // w18
  unsigned int v72; // w18
  int v73; // w4
  __int64 v74; // x3
  __int64 v75; // x5
  __int64 v76; // x3
  char v77; // w4
  __int64 v78; // x5
  unsigned int v79; // w18
  int v80; // w4
  __int64 v81; // x3
  __int64 v82; // x5
  __int64 v83; // x3
  char v84; // w4
  __int64 v85; // x5

  if ( (a3 & 0x80000000) == 0 )
  {
    v3 = *(unsigned __int16 *)(a2 + 2);
    v4 = 0;
    v5 = 0;
    v6 = -1;
    if ( *(_WORD *)(a2 + 2) )
      v7 = 7;
    else
      v7 = 138;
    if ( *(_WORD *)(a2 + 2) )
      v8 = 4;
    else
      v8 = 3;
    do
    {
      ++v4;
      v9 = v3;
      v3 = *(unsigned __int16 *)(a2 + 4LL * v4 + 2);
      v10 = v5 + 1;
      if ( v5 + 1 < v7 && v9 == v3 )
      {
        v9 = v6;
      }
      else
      {
        if ( v10 >= v8 )
        {
          if ( v9 )
          {
            if ( v9 == v6 )
            {
              v24 = *(_DWORD *)(result + 5940);
              v25 = *(unsigned __int16 *)(result + 5936);
              LOWORD(v5) = v5 + 1;
            }
            else
            {
              v36 = result + 4LL * v9;
              v37 = *(_DWORD *)(result + 5940);
              v38 = *(unsigned __int16 *)(v36 + 2750);
              v39 = *(unsigned __int16 *)(v36 + 2748);
              v25 = *(unsigned __int16 *)(result + 5936) | (v39 << v37);
              *(_WORD *)(result + 5936) |= v39 << v37;
              if ( v37 <= 16 - v38 )
              {
                v24 = v37 + v38;
              }
              else
              {
                v40 = *(_QWORD *)(result + 40);
                v41 = *(_QWORD *)(result + 16);
                *(_QWORD *)(result + 40) = v40 + 1;
                *(_BYTE *)(v41 + v40) = v25;
                v42 = *(_QWORD *)(result + 40);
                LOBYTE(v40) = *(_BYTE *)(result + 5937);
                v43 = *(_QWORD *)(result + 16);
                *(_QWORD *)(result + 40) = v42 + 1;
                *(_BYTE *)(v43 + v42) = v40;
                LODWORD(v42) = *(_DWORD *)(result + 5940);
                v44 = v38 + v42;
                v25 = v39 >> (16 - v42);
                *(_WORD *)(result + 5936) = v25;
                v24 = v44 - 16;
              }
              *(_DWORD *)(result + 5940) = v24;
            }
            v55 = *(unsigned __int16 *)(result + 2814);
            v56 = *(unsigned __int16 *)(result + 2812);
            v57 = v25 | (v56 << v24);
            *(_WORD *)(result + 5936) = v57;
            if ( v24 <= 16 - v55 )
            {
              v63 = v24 + v55;
            }
            else
            {
              v58 = *(_QWORD *)(result + 40);
              v59 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v58 + 1;
              *(_BYTE *)(v59 + v58) = v57;
              v60 = *(_QWORD *)(result + 40);
              LOBYTE(v58) = *(_BYTE *)(result + 5937);
              v61 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v60 + 1;
              *(_BYTE *)(v61 + v60) = v58;
              LODWORD(v60) = *(_DWORD *)(result + 5940);
              v62 = v55 + v60;
              v57 = v56 >> (16 - v60);
              *(_WORD *)(result + 5936) = v57;
              v63 = v62 - 16;
            }
            v64 = (unsigned __int16)(v5 - 3);
            v65 = v57 | (v64 << v63);
            *(_DWORD *)(result + 5940) = v63;
            *(_WORD *)(result + 5936) = v65;
            if ( v63 < 15 )
            {
              v71 = v63 + 2;
            }
            else
            {
              v66 = *(_QWORD *)(result + 40);
              v67 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v66 + 1;
              *(_BYTE *)(v67 + v66) = v65;
              v68 = *(_QWORD *)(result + 40);
              v69 = *(_BYTE *)(result + 5937);
              v70 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v68 + 1;
              *(_BYTE *)(v70 + v68) = v69;
              LODWORD(v68) = *(_DWORD *)(result + 5940);
              *(_WORD *)(result + 5936) = v64 >> (16 - v68);
              v71 = v68 - 14;
            }
          }
          else if ( v10 > 10 )
          {
            v45 = *(unsigned __int16 *)(result + 2822);
            v46 = *(_DWORD *)(result + 5940);
            v47 = *(unsigned __int16 *)(result + 2820);
            v48 = *(unsigned __int16 *)(result + 5936) | (v47 << v46);
            *(_WORD *)(result + 5936) |= v47 << v46;
            if ( v46 <= 16 - v45 )
            {
              v54 = v46 + v45;
            }
            else
            {
              v49 = *(_QWORD *)(result + 40);
              v50 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v49 + 1;
              *(_BYTE *)(v50 + v49) = v48;
              v51 = *(_QWORD *)(result + 40);
              LOBYTE(v49) = *(_BYTE *)(result + 5937);
              v52 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v51 + 1;
              *(_BYTE *)(v52 + v51) = v49;
              LODWORD(v51) = *(_DWORD *)(result + 5940);
              v53 = v45 + v51;
              v48 = v47 >> (16 - v51);
              *(_WORD *)(result + 5936) = v48;
              v54 = v53 - 16;
            }
            v79 = (unsigned __int16)(v5 - 10);
            v80 = v48 | (v79 << v54);
            *(_DWORD *)(result + 5940) = v54;
            *(_WORD *)(result + 5936) = v80;
            if ( v54 < 10 )
            {
              v71 = v54 + 7;
            }
            else
            {
              v81 = *(_QWORD *)(result + 40);
              v82 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v81 + 1;
              *(_BYTE *)(v82 + v81) = v80;
              v83 = *(_QWORD *)(result + 40);
              v84 = *(_BYTE *)(result + 5937);
              v85 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v83 + 1;
              *(_BYTE *)(v85 + v83) = v84;
              LODWORD(v83) = *(_DWORD *)(result + 5940);
              *(_WORD *)(result + 5936) = v79 >> (16 - v83);
              v71 = v83 - 9;
            }
          }
          else
          {
            v26 = *(unsigned __int16 *)(result + 2818);
            v27 = *(_DWORD *)(result + 5940);
            v28 = *(unsigned __int16 *)(result + 2816);
            v29 = *(unsigned __int16 *)(result + 5936) | (v28 << v27);
            *(_WORD *)(result + 5936) |= v28 << v27;
            if ( v27 <= 16 - v26 )
            {
              v35 = v27 + v26;
            }
            else
            {
              v30 = *(_QWORD *)(result + 40);
              v31 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v30 + 1;
              *(_BYTE *)(v31 + v30) = v29;
              v32 = *(_QWORD *)(result + 40);
              LOBYTE(v30) = *(_BYTE *)(result + 5937);
              v33 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v32 + 1;
              *(_BYTE *)(v33 + v32) = v30;
              LODWORD(v32) = *(_DWORD *)(result + 5940);
              v34 = v26 + v32;
              v29 = v28 >> (16 - v32);
              *(_WORD *)(result + 5936) = v29;
              v35 = v34 - 16;
            }
            v72 = (unsigned __int16)(v5 - 2);
            v73 = v29 | (v72 << v35);
            *(_DWORD *)(result + 5940) = v35;
            *(_WORD *)(result + 5936) = v73;
            if ( v35 < 14 )
            {
              v71 = v35 + 3;
            }
            else
            {
              v74 = *(_QWORD *)(result + 40);
              v75 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v74 + 1;
              *(_BYTE *)(v75 + v74) = v73;
              v76 = *(_QWORD *)(result + 40);
              v77 = *(_BYTE *)(result + 5937);
              v78 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v76 + 1;
              *(_BYTE *)(v78 + v76) = v77;
              LODWORD(v76) = *(_DWORD *)(result + 5940);
              *(_WORD *)(result + 5936) = v72 >> (16 - v76);
              v71 = v76 - 13;
            }
          }
          *(_DWORD *)(result + 5940) = v71;
          v10 = 0;
          if ( v3 )
          {
LABEL_18:
            if ( v9 == v3 )
              v8 = 3;
            else
              v8 = 4;
            if ( v9 == v3 )
              v7 = 6;
            else
              v7 = 7;
            goto LABEL_52;
          }
        }
        else
        {
          v11 = *(_DWORD *)(result + 5940);
          v12 = *(unsigned __int16 *)(result + 5936);
          v13 = result + 4LL * v9;
          v14 = (unsigned __int16 *)(v13 + 2750);
          v15 = (unsigned __int16 *)(v13 + 2748);
          v16 = ~v5;
          do
          {
            v17 = *v14;
            v18 = *v15;
            v12 |= v18 << v11;
            *(_WORD *)(result + 5936) = v12;
            if ( v11 <= 16 - v17 )
            {
              v11 += v17;
            }
            else
            {
              v19 = *(_QWORD *)(result + 40);
              v20 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v19 + 1;
              *(_BYTE *)(v20 + v19) = v12;
              v21 = *(_QWORD *)(result + 40);
              LOBYTE(v19) = *(_BYTE *)(result + 5937);
              v22 = *(_QWORD *)(result + 16);
              *(_QWORD *)(result + 40) = v21 + 1;
              *(_BYTE *)(v22 + v21) = v19;
              LODWORD(v21) = *(_DWORD *)(result + 5940);
              v23 = v17 + v21;
              v12 = v18 >> (16 - v21);
              *(_WORD *)(result + 5936) = v12;
              v11 = v23 - 16;
            }
            ++v16;
            *(_DWORD *)(result + 5940) = v11;
          }
          while ( v16 );
          v10 = 0;
          if ( v3 )
            goto LABEL_18;
        }
        v7 = 138;
        v8 = 3;
      }
LABEL_52:
      v6 = v9;
      v5 = v10;
    }
    while ( v4 <= a3 );
  }
  return result;
}
