__int64 __fastcall sub_751B80(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ecx
  int v4; // r14d
  int v5; // r9d
  unsigned int v6; // r10d
  unsigned __int16 *v7; // rax
  int v8; // r8d
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rcx
  char v13; // r11
  __int64 v14; // r9
  int v15; // r11d
  int v16; // eax
  __int64 v17; // r11
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r8
  int v21; // eax
  unsigned int v22; // r11d
  unsigned __int16 *v23; // r9
  int v24; // r12d
  int v25; // ebp
  int v26; // r14d
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rcx
  char v30; // r14
  __int64 v31; // r9
  int v32; // ecx
  __int64 v33; // r9
  int v34; // r11d
  int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rcx
  char v39; // bp
  __int64 v40; // r9
  unsigned int v41; // eax
  __int64 v42; // r8
  unsigned __int16 *v43; // r9
  int v44; // ebp
  int v45; // r11d
  __int64 v46; // rcx
  __int64 v47; // r12
  __int64 v48; // rcx
  __int64 v49; // r9
  int v50; // r11d
  int v51; // eax
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // rcx
  char v55; // r9
  __int64 v56; // r8
  int v57; // edx
  __int64 result; // rax
  int v59; // r9d
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rcx
  char v63; // r9
  __int64 v64; // r8

  v3 = *(_DWORD *)(a1 + 5940);
  v4 = *(unsigned __int16 *)(a1 + 5936);
  v5 = v4;
  if ( *(_DWORD *)(a1 + 5900) )
  {
    v6 = 0;
    while ( 1 )
    {
      v17 = *(_QWORD *)(a1 + 5888);
      v18 = *(unsigned __int8 *)(v17 + v6);
      v19 = v6 + 1;
      v20 = *(unsigned __int8 *)(v17 + v6 + 2);
      v6 += 3;
      v21 = v18 + (*(unsigned __int8 *)(v17 + v19) << 8);
      if ( !v21 )
        break;
      v22 = byte_23B6740[(int)v20];
      v23 = (unsigned __int16 *)(a2 + 4LL * (v22 + 257));
      v24 = *v23;
      v25 = v23[1];
      v26 = (v24 << v3) | v4;
      *(_WORD *)(a1 + 5936) = v26;
      if ( 16 - v25 >= v3 )
      {
        v32 = v25 + v3;
      }
      else
      {
        v27 = *(_QWORD *)(a1 + 40);
        v28 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v27 + 1;
        *(_BYTE *)(v28 + v27) = v26;
        v29 = *(_QWORD *)(a1 + 40);
        v30 = *(_BYTE *)(a1 + 5937);
        v31 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v29 + 1;
        *(_BYTE *)(v31 + v29) = v30;
        LODWORD(v31) = *(_DWORD *)(a1 + 5940);
        v26 = v24 >> (16 - v31);
        v32 = v31 + v25 - 16;
        *(_WORD *)(a1 + 5936) = v26;
      }
      *(_DWORD *)(a1 + 5940) = v32;
      v33 = v22;
      v34 = dword_23B7040[v22];
      if ( v34 )
      {
        v35 = (unsigned __int16)(v20 - word_23B66C0[2 * v33]);
        v26 |= v35 << v32;
        *(_WORD *)(a1 + 5936) = v26;
        if ( 16 - v34 >= v32 )
        {
          v32 += v34;
        }
        else
        {
          v36 = *(_QWORD *)(a1 + 40);
          v37 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v36 + 1;
          *(_BYTE *)(v37 + v36) = v26;
          v38 = *(_QWORD *)(a1 + 40);
          v39 = *(_BYTE *)(a1 + 5937);
          v40 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v38 + 1;
          *(_BYTE *)(v40 + v38) = v39;
          LODWORD(v40) = *(_DWORD *)(a1 + 5940);
          v26 = v35 >> (16 - v40);
          v32 = v40 + v34 - 16;
          *(_WORD *)(a1 + 5936) = v26;
        }
        *(_DWORD *)(a1 + 5940) = v32;
      }
      v41 = v21 - 1;
      if ( v41 > 0xFF )
        v42 = byte_23B6840[(v41 >> 7) + 256];
      else
        v42 = byte_23B6840[v41];
      v43 = (unsigned __int16 *)(a3 + 4 * v42);
      v44 = *v43;
      v45 = v43[1];
      v5 = v26 | (v44 << v32);
      v4 = v5;
      *(_WORD *)(a1 + 5936) = v5;
      if ( 16 - v45 >= v32 )
      {
        v3 = v45 + v32;
      }
      else
      {
        v46 = *(_QWORD *)(a1 + 40);
        v47 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v46 + 1;
        *(_BYTE *)(v47 + v46) = v5;
        v48 = *(_QWORD *)(a1 + 40);
        LOBYTE(v47) = *(_BYTE *)(a1 + 5937);
        v49 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v48 + 1;
        *(_BYTE *)(v49 + v48) = v47;
        LODWORD(v47) = *(_DWORD *)(a1 + 5940);
        v5 = v44 >> (16 - v47);
        v3 = v47 + v45 - 16;
        *(_WORD *)(a1 + 5936) = v5;
        v4 = v5;
      }
      *(_DWORD *)(a1 + 5940) = v3;
      v50 = dword_23B6FC0[v42];
      if ( !v50 )
        goto LABEL_6;
      v51 = (unsigned __int16)(v41 - word_23B6640[2 * v42]);
      v5 |= v51 << v3;
      v4 = v5;
      *(_WORD *)(a1 + 5936) = v5;
      if ( 16 - v50 >= v3 )
      {
        v3 += v50;
        *(_DWORD *)(a1 + 5940) = v3;
LABEL_6:
        if ( *(_DWORD *)(a1 + 5900) <= v6 )
          goto LABEL_21;
      }
      else
      {
        v52 = *(_QWORD *)(a1 + 40);
        v53 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v52 + 1;
        *(_BYTE *)(v53 + v52) = v5;
        v54 = *(_QWORD *)(a1 + 40);
        v55 = *(_BYTE *)(a1 + 5937);
        v56 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v54 + 1;
        *(_BYTE *)(v56 + v54) = v55;
        LODWORD(v56) = *(_DWORD *)(a1 + 5940);
        v3 = v56 + v50 - 16;
        v4 = v51 >> (16 - v56);
        *(_WORD *)(a1 + 5936) = v4;
        v5 = v4;
        *(_DWORD *)(a1 + 5940) = v3;
        if ( *(_DWORD *)(a1 + 5900) <= v6 )
          goto LABEL_21;
      }
    }
    v7 = (unsigned __int16 *)(a2 + 4 * v20);
    v8 = v7[1];
    v9 = *v7;
    v5 = v4 | (v9 << v3);
    v4 = v5;
    *(_WORD *)(a1 + 5936) = v5;
    if ( 16 - v8 >= v3 )
    {
      v3 += v8;
    }
    else
    {
      v10 = *(_QWORD *)(a1 + 40);
      v11 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 40) = v10 + 1;
      *(_BYTE *)(v11 + v10) = v4;
      v12 = *(_QWORD *)(a1 + 40);
      v13 = *(_BYTE *)(a1 + 5937);
      v14 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 40) = v12 + 1;
      *(_BYTE *)(v14 + v12) = v13;
      v15 = *(_DWORD *)(a1 + 5940);
      v16 = v9 >> (16 - v15);
      v3 = v15 + v8 - 16;
      *(_WORD *)(a1 + 5936) = v16;
      v5 = v16;
      v4 = v16;
    }
    *(_DWORD *)(a1 + 5940) = v3;
    goto LABEL_6;
  }
LABEL_21:
  v57 = *(unsigned __int16 *)(a2 + 1024);
  result = *(unsigned __int16 *)(a2 + 1026);
  v59 = (v57 << v3) | v5;
  *(_WORD *)(a1 + 5936) = v59;
  if ( 16 - (int)result >= v3 )
  {
    *(_DWORD *)(a1 + 5940) = result + v3;
  }
  else
  {
    v60 = *(_QWORD *)(a1 + 40);
    v61 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v60 + 1;
    *(_BYTE *)(v61 + v60) = v59;
    v62 = *(_QWORD *)(a1 + 40);
    v63 = *(_BYTE *)(a1 + 5937);
    v64 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v62 + 1;
    *(_BYTE *)(v64 + v62) = v63;
    LODWORD(v64) = *(_DWORD *)(a1 + 5940);
    result = (unsigned int)(v64 + result - 16);
    *(_DWORD *)(a1 + 5940) = result;
    *(_WORD *)(a1 + 5936) = v57 >> (16 - v64);
  }
  return result;
}
