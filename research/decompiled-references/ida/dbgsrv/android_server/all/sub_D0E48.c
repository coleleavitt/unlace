/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D0E48
// Address: 0x00000000000D0E48

//----- (00000000000D0E48) ----------------------------------------------------
__int64 __fastcall sub_D0E48(__int64 result, __int64 a2, __int64 a3)
{
  unsigned int v3; // w10
  int *v4; // x8
  _WORD *v5; // x9
  __int64 v6; // x4
  int v7; // w3
  unsigned __int8 v8; // w5
  __int64 v9; // x6
  unsigned int v10; // w3
  __int64 v11; // x7
  int v12; // w20
  __int64 v13; // x4
  int v14; // w5
  unsigned int v15; // w19
  int v16; // w22
  int v17; // w4
  __int64 v18; // x20
  __int64 v19; // x21
  __int64 v20; // x4
  __int64 v21; // x21
  int v22; // w5
  int v23; // w5
  int v24; // w6
  int v25; // w4
  unsigned int v26; // w5
  __int64 v27; // x3
  __int64 v28; // x6
  __int64 v29; // x7
  __int64 v30; // x7
  int v31; // w4
  int v32; // w4
  __int16 v33; // w19
  int v34; // w7
  unsigned int v35; // w6
  __int64 v36; // x5
  __int64 v37; // x19
  __int64 v38; // x4
  __int64 v39; // x19
  int v40; // w7
  unsigned int v41; // w6
  unsigned int v42; // w3
  __int64 v43; // x7
  int v44; // w19
  unsigned int v45; // w20
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x5
  int v49; // w5
  unsigned int v50; // w6
  __int64 v51; // x4
  __int64 v52; // x7
  __int64 v53; // x7
  int v54; // w5
  int v55; // w10
  unsigned int v56; // w11
  __int64 v57; // x9
  __int64 v58; // x14
  __int64 v59; // x9
  char v60; // w13
  __int64 v61; // x14

  if ( *(_DWORD *)(result + 5900) )
  {
    v3 = 0;
    v4 = (int *)(result + 5940);
    v5 = (_WORD *)(result + 5936);
    while ( 1 )
    {
      v6 = *(_QWORD *)(result + 5888);
      v7 = *(unsigned __int8 *)(v6 + v3);
      v8 = *(_BYTE *)(v6 + v3 + 1);
      v9 = *(unsigned __int8 *)(v6 + v3 + 2);
      v3 += 3;
      v10 = v7 & 0xFFFF00FF | (v8 << 8);
      if ( v10 )
      {
        v11 = *((unsigned __int8 *)qword_11F760 + v9);
        v12 = *v4;
        v13 = a2 + ((4 * v11) | 0x400);
        v14 = *(unsigned __int16 *)(v13 + 6);
        v15 = *(unsigned __int16 *)(v13 + 4);
        v16 = v15 << *v4;
        v17 = (unsigned __int16)*v5 | v16;
        *v5 |= v16;
        if ( v12 <= 16 - v14 )
        {
          v23 = v12 + v14;
        }
        else
        {
          v18 = *(_QWORD *)(result + 40);
          v19 = *(_QWORD *)(result + 16);
          *(_QWORD *)(result + 40) = v18 + 1;
          *(_BYTE *)(v19 + v18) = v17;
          v20 = *(_QWORD *)(result + 40);
          LOBYTE(v18) = *(_BYTE *)(result + 5937);
          v21 = *(_QWORD *)(result + 16);
          *(_QWORD *)(result + 40) = v20 + 1;
          *(_BYTE *)(v21 + v20) = v18;
          LODWORD(v20) = *(_DWORD *)(result + 5940);
          v22 = v14 + v20;
          v17 = v15 >> (16 - v20);
          *(_WORD *)(result + 5936) = v17;
          v23 = v22 - 16;
        }
        *v4 = v23;
        if ( (unsigned __int64)(v11 - 8) <= 0x13 )
        {
          v33 = dword_11FEA4[v11];
          v34 = *((_DWORD *)qword_11FD58 + v11);
          v35 = (unsigned __int16)(v9 - v33);
          v17 |= v35 << v23;
          *v5 = v17;
          if ( v23 <= 16 - v34 )
          {
            v23 += v34;
          }
          else
          {
            v36 = *(_QWORD *)(result + 40);
            v37 = *(_QWORD *)(result + 16);
            *(_QWORD *)(result + 40) = v36 + 1;
            *(_BYTE *)(v37 + v36) = v17;
            v38 = *(_QWORD *)(result + 40);
            LOBYTE(v36) = *(_BYTE *)(result + 5937);
            v39 = *(_QWORD *)(result + 16);
            *(_QWORD *)(result + 40) = v38 + 1;
            *(_BYTE *)(v39 + v38) = v36;
            LODWORD(v38) = *(_DWORD *)(result + 5940);
            v40 = v34 + v38;
            v17 = v35 >> (16 - v38);
            *(_WORD *)(result + 5936) = v17;
            v23 = v40 - 16;
          }
          *v4 = v23;
        }
        v41 = v10 - 1;
        v42 = ((v10 - 1) >> 7) + 256;
        if ( v41 < 0x100 )
          v42 = v41;
        v43 = (unsigned __int8)byte_11F560[v42];
        v27 = a3 + 4 * v43;
        v44 = *(unsigned __int16 *)(v27 + 2);
        v45 = *(unsigned __int16 *)v27;
        LODWORD(v27) = v17 | (v45 << v23);
        *v5 = v17 | ((_WORD)v45 << v23);
        if ( v23 <= 16 - v44 )
        {
          v32 = v23 + v44;
        }
        else
        {
          v46 = *(_QWORD *)(result + 40);
          v47 = *(_QWORD *)(result + 16);
          *(_QWORD *)(result + 40) = v46 + 1;
          *(_BYTE *)(v47 + v46) = v27;
          v27 = *(_QWORD *)(result + 40);
          LOBYTE(v46) = *(_BYTE *)(result + 5937);
          v48 = *(_QWORD *)(result + 16);
          *(_QWORD *)(result + 40) = v27 + 1;
          *(_BYTE *)(v48 + v27) = v46;
          LODWORD(v27) = *(_DWORD *)(result + 5940);
          LODWORD(v48) = v44 + v27;
          LODWORD(v27) = v45 >> (16 - v27);
          *(_WORD *)(result + 5936) = v27;
          v32 = v48 - 16;
        }
        *v4 = v32;
        if ( (unsigned __int64)(v43 - 4) > 0x19 )
          goto LABEL_25;
        v49 = dword_11FDCC[v43];
        v50 = (unsigned __int16)(v41 - *((_DWORD *)qword_11FF18 + v43));
        LODWORD(v27) = v27 | (v50 << v32);
        *v5 = v27;
        if ( v32 <= 16 - v49 )
        {
          v32 += v49;
        }
        else
        {
          v51 = *(_QWORD *)(result + 40);
          v52 = *(_QWORD *)(result + 16);
          *(_QWORD *)(result + 40) = v51 + 1;
          *(_BYTE *)(v52 + v51) = v27;
          v27 = *(_QWORD *)(result + 40);
          LOBYTE(v51) = *(_BYTE *)(result + 5937);
          v53 = *(_QWORD *)(result + 16);
          *(_QWORD *)(result + 40) = v27 + 1;
          *(_BYTE *)(v53 + v27) = v51;
          LODWORD(v27) = *(_DWORD *)(result + 5940);
          v54 = v49 + v27;
          LODWORD(v27) = v50 >> (16 - v27);
          *(_WORD *)(result + 5936) = v27;
          v32 = v54 - 16;
        }
      }
      else
      {
        v27 = a2 + 4 * v9;
        v24 = *v4;
        v25 = *(unsigned __int16 *)(v27 + 2);
        v26 = *(unsigned __int16 *)v27;
        LOWORD(v27) = *v5 | (v26 << *v4);
        *v5 = v27;
        if ( v24 <= 16 - v25 )
        {
          v32 = v24 + v25;
        }
        else
        {
          v28 = *(_QWORD *)(result + 40);
          v29 = *(_QWORD *)(result + 16);
          *(_QWORD *)(result + 40) = v28 + 1;
          *(_BYTE *)(v29 + v28) = v27;
          v27 = *(_QWORD *)(result + 40);
          LOBYTE(v28) = *(_BYTE *)(result + 5937);
          v30 = *(_QWORD *)(result + 16);
          *(_QWORD *)(result + 40) = v27 + 1;
          *(_BYTE *)(v30 + v27) = v28;
          LODWORD(v27) = *(_DWORD *)(result + 5940);
          v31 = v25 + v27;
          LODWORD(v27) = v26 >> (16 - v27);
          *(_WORD *)(result + 5936) = v27;
          v32 = v31 - 16;
        }
      }
      *v4 = v32;
LABEL_25:
      if ( v3 >= *(_DWORD *)(result + 5900) )
        goto LABEL_28;
    }
  }
  v32 = *(_DWORD *)(result + 5940);
  LOWORD(v27) = *(_WORD *)(result + 5936);
  v4 = (int *)(result + 5940);
  v5 = (_WORD *)(result + 5936);
LABEL_28:
  v55 = *(unsigned __int16 *)(a2 + 1026);
  v56 = *(unsigned __int16 *)(a2 + 1024);
  *v5 = v27 | ((_WORD)v56 << v32);
  if ( v32 <= 16 - v55 )
  {
    *v4 = v32 + v55;
  }
  else
  {
    v57 = *(_QWORD *)(result + 40);
    v58 = *(_QWORD *)(result + 16);
    *(_QWORD *)(result + 40) = v57 + 1;
    *(_BYTE *)(v58 + v57) = v27 | ((_BYTE)v56 << v32);
    v59 = *(_QWORD *)(result + 40);
    v60 = *(_BYTE *)(result + 5937);
    v61 = *(_QWORD *)(result + 16);
    *(_QWORD *)(result + 40) = v59 + 1;
    *(_BYTE *)(v61 + v59) = v60;
    LODWORD(v59) = *(_DWORD *)(result + 5940);
    *(_WORD *)(result + 5936) = v56 >> (16 - v59);
    *v4 = v55 + v59 - 16;
  }
  return result;
}
// 11F760: using guessed type __int64 qword_11F760[32];
// 11FD58: using guessed type __int64 qword_11FD58[4];
// 11FDCC: using guessed type int dword_11FDCC[];
// 11FEA4: using guessed type int dword_11FEA4[];
// 11FF18: using guessed type __int64 qword_11FF18[15];
