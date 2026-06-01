void __fastcall sub_751560(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  int v4; // r8d
  int v5; // ecx
  int v6; // r9d
  int v7; // r11d
  int v8; // ebp
  int v9; // r12d
  int v10; // eax
  __int64 v11; // r11
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // r9d
  int v17; // r13d
  int v18; // ecx
  __int16 v19; // r8
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rax
  int v23; // r11d
  __int64 v24; // rcx
  __int64 v25; // r13
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  int v29; // r11d
  int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // r13
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // r8
  int v36; // ecx
  __int64 v37; // r9
  int v38; // r15d
  __int64 v39; // rcx
  __int16 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r8
  int v43; // r13d
  int v44; // r11d
  int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // r14
  __int64 v48; // rcx
  __int64 v49; // r8
  int v50; // ecx
  int v51; // r9d
  int v52; // eax
  __int64 v53; // rcx
  __int16 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  int v58; // r13d
  int v59; // r11d
  int v60; // r8d
  __int64 v61; // rcx
  __int64 v62; // r14
  __int64 v63; // rcx
  __int64 v64; // r8
  int v65; // ecx
  int v66; // r9d
  int v67; // eax
  __int64 v68; // rcx
  __int16 v69; // r8
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rcx

  v3 = *(unsigned __int16 *)(a2 + 2);
  v4 = 4 - (v3 == 0);
  v5 = v3 == 0 ? 138 : 7;
  if ( a3 >= 0 )
  {
    v6 = 0;
    v7 = -1;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(unsigned __int16 *)(a2 + 4LL * ++v8 + 2);
      v10 = v6 + 1;
      if ( v6 + 1 < v5 )
      {
        if ( v9 == v3 )
        {
          ++v6;
          goto LABEL_23;
        }
        if ( v10 < v4 )
        {
          v11 = a1 + 4LL * v3;
          do
          {
            while ( 1 )
            {
              v16 = *(unsigned __int16 *)(v11 + 2748);
              v17 = *(unsigned __int16 *)(v11 + 2750);
              v18 = *(_DWORD *)(a1 + 5940);
              v19 = *(_WORD *)(a1 + 5936) | (v16 << v18);
              *(_WORD *)(a1 + 5936) = v19;
              if ( v18 <= 16 - v17 )
                break;
              v12 = *(_QWORD *)(a1 + 40);
              v13 = *(_QWORD *)(a1 + 16);
              *(_QWORD *)(a1 + 40) = v12 + 1;
              *(_BYTE *)(v13 + v12) = v19;
              v14 = *(_QWORD *)(a1 + 40);
              LOBYTE(v13) = *(_BYTE *)(a1 + 5937);
              v15 = *(_QWORD *)(a1 + 16);
              *(_QWORD *)(a1 + 40) = v14 + 1;
              *(_BYTE *)(v15 + v14) = v13;
              LODWORD(v15) = *(_DWORD *)(a1 + 5940);
              *(_WORD *)(a1 + 5936) = v16 >> (16 - v15);
              *(_DWORD *)(a1 + 5940) = v15 + v17 - 16;
              if ( !--v10 )
                goto LABEL_10;
            }
            *(_DWORD *)(a1 + 5940) = v17 + v18;
            --v10;
          }
          while ( v10 );
LABEL_10:
          if ( !v9 )
            goto LABEL_11;
          goto LABEL_22;
        }
      }
      v20 = *(_DWORD *)(a1 + 5940);
      v21 = *(unsigned __int16 *)(a1 + 5936);
      if ( v3 )
      {
        if ( v3 != v7 )
        {
          v22 = a1 + 4LL * v3;
          v23 = *(unsigned __int16 *)(v22 + 2750);
          v10 = *(unsigned __int16 *)(v22 + 2748);
          v21 |= v10 << v20;
          *(_WORD *)(a1 + 5936) = v21;
          if ( 16 - v23 >= v20 )
          {
            v20 += v23;
            LOWORD(v10) = v6;
            *(_DWORD *)(a1 + 5940) = v20;
          }
          else
          {
            v24 = *(_QWORD *)(a1 + 40);
            v25 = *(_QWORD *)(a1 + 16);
            *(_QWORD *)(a1 + 40) = v24 + 1;
            *(_BYTE *)(v25 + v24) = v21;
            v26 = *(_QWORD *)(a1 + 40);
            LOBYTE(v25) = *(_BYTE *)(a1 + 5937);
            v27 = *(_QWORD *)(a1 + 16);
            *(_QWORD *)(a1 + 40) = v26 + 1;
            *(_BYTE *)(v27 + v26) = v25;
            LODWORD(v25) = *(_DWORD *)(a1 + 5940);
            v20 = v25 + v23 - 16;
            *(_DWORD *)(a1 + 5940) = v20;
            v21 = v10 >> (16 - v25);
            *(_WORD *)(a1 + 5936) = v21;
            LOWORD(v10) = v6;
          }
        }
        v28 = *(unsigned __int16 *)(a1 + 2812);
        v29 = *(unsigned __int16 *)(a1 + 2814);
        v30 = (v28 << v20) | v21;
        *(_WORD *)(a1 + 5936) = v30;
        if ( 16 - v29 >= v20 )
        {
          v36 = v29 + v20;
          *(_DWORD *)(a1 + 5940) = v36;
          v33 = (unsigned __int16)(v10 - 3);
          if ( v36 <= 14 )
          {
LABEL_30:
            *(_DWORD *)(a1 + 5940) = v36 + 2;
            *(_WORD *)(a1 + 5936) = (v33 << v36) | v30;
            goto LABEL_20;
          }
        }
        else
        {
          v31 = *(_QWORD *)(a1 + 40);
          v32 = *(_QWORD *)(a1 + 16);
          v33 = (unsigned __int16)(v10 - 3);
          *(_QWORD *)(a1 + 40) = v31 + 1;
          *(_BYTE *)(v32 + v31) = v30;
          v34 = *(_QWORD *)(a1 + 40);
          LOBYTE(v32) = *(_BYTE *)(a1 + 5937);
          v35 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v34 + 1;
          *(_BYTE *)(v35 + v34) = v32;
          LODWORD(v32) = *(_DWORD *)(a1 + 5940);
          v36 = v32 + v29 - 16;
          v30 = v28 >> (16 - v32);
          *(_WORD *)(a1 + 5936) = v30;
          *(_DWORD *)(a1 + 5940) = v36;
          if ( v36 <= 14 )
            goto LABEL_30;
        }
        v37 = *(_QWORD *)(a1 + 16);
        v38 = v33 << v36;
        v39 = *(_QWORD *)(a1 + 40);
        v40 = v38 | v30;
        *(_WORD *)(a1 + 5936) = v40;
        *(_QWORD *)(a1 + 40) = v39 + 1;
        *(_BYTE *)(v37 + v39) = v40;
        v41 = *(_QWORD *)(a1 + 40);
        LOBYTE(v37) = *(_BYTE *)(a1 + 5937);
        v42 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v41 + 1;
        *(_BYTE *)(v42 + v41) = v37;
        LODWORD(v42) = *(_DWORD *)(a1 + 5940);
        *(_DWORD *)(a1 + 5940) = v42 - 14;
        *(_WORD *)(a1 + 5936) = v33 >> (16 - v42);
      }
      else
      {
        if ( v10 > 10 )
        {
          v58 = *(unsigned __int16 *)(a1 + 2820);
          v59 = *(unsigned __int16 *)(a1 + 2822);
          v60 = (v58 << v20) | v21;
          *(_WORD *)(a1 + 5936) = v60;
          if ( 16 - v59 >= v20 )
          {
            v65 = v59 + v20;
          }
          else
          {
            v61 = *(_QWORD *)(a1 + 40);
            v62 = *(_QWORD *)(a1 + 16);
            *(_QWORD *)(a1 + 40) = v61 + 1;
            *(_BYTE *)(v62 + v61) = v60;
            v63 = *(_QWORD *)(a1 + 40);
            LOBYTE(v62) = *(_BYTE *)(a1 + 5937);
            v64 = *(_QWORD *)(a1 + 16);
            *(_QWORD *)(a1 + 40) = v63 + 1;
            *(_BYTE *)(v64 + v63) = v62;
            LODWORD(v62) = *(_DWORD *)(a1 + 5940);
            v60 = v58 >> (16 - v62);
            v65 = v62 + v59 - 16;
            *(_WORD *)(a1 + 5936) = v60;
          }
          *(_DWORD *)(a1 + 5940) = v65;
          if ( v65 <= 9 )
          {
            *(_DWORD *)(a1 + 5940) = v65 + 7;
            *(_WORD *)(a1 + 5936) = ((unsigned __int16)(v6 - 10) << v65) | v60;
          }
          else
          {
            v66 = (unsigned __int16)(v6 - 10);
            v67 = v66 << v65;
            v68 = *(_QWORD *)(a1 + 16);
            v69 = v67 | v60;
            v70 = *(_QWORD *)(a1 + 40);
            *(_WORD *)(a1 + 5936) = v69;
            *(_QWORD *)(a1 + 40) = v70 + 1;
            *(_BYTE *)(v68 + v70) = v69;
            v71 = *(_QWORD *)(a1 + 40);
            LOBYTE(v69) = *(_BYTE *)(a1 + 5937);
            v72 = *(_QWORD *)(a1 + 16);
            *(_QWORD *)(a1 + 40) = v71 + 1;
            *(_BYTE *)(v72 + v71) = v69;
            LODWORD(v71) = *(_DWORD *)(a1 + 5940);
            *(_DWORD *)(a1 + 5940) = v71 - 9;
            *(_WORD *)(a1 + 5936) = v66 >> (16 - v71);
          }
          goto LABEL_20;
        }
        v43 = *(unsigned __int16 *)(a1 + 2816);
        v44 = *(unsigned __int16 *)(a1 + 2818);
        v45 = (v43 << v20) | v21;
        *(_WORD *)(a1 + 5936) = v45;
        if ( 16 - v44 >= v20 )
        {
          v50 = v44 + v20;
          *(_DWORD *)(a1 + 5940) = v50;
          if ( v50 <= 13 )
          {
LABEL_39:
            *(_DWORD *)(a1 + 5940) = v50 + 3;
            *(_WORD *)(a1 + 5936) = ((__int16)(v6 - 2) << v50) | v45;
            goto LABEL_20;
          }
        }
        else
        {
          v46 = *(_QWORD *)(a1 + 40);
          v47 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v46 + 1;
          *(_BYTE *)(v47 + v46) = v45;
          v48 = *(_QWORD *)(a1 + 40);
          LOBYTE(v47) = *(_BYTE *)(a1 + 5937);
          v49 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 40) = v48 + 1;
          *(_BYTE *)(v49 + v48) = v47;
          LODWORD(v47) = *(_DWORD *)(a1 + 5940);
          v45 = v43 >> (16 - v47);
          v50 = v47 + v44 - 16;
          *(_WORD *)(a1 + 5936) = v45;
          *(_DWORD *)(a1 + 5940) = v50;
          if ( v50 <= 13 )
            goto LABEL_39;
        }
        v51 = (unsigned __int16)(v6 - 2);
        v52 = v51 << v50;
        v53 = *(_QWORD *)(a1 + 16);
        v54 = v52 | v45;
        v55 = *(_QWORD *)(a1 + 40);
        *(_WORD *)(a1 + 5936) = v54;
        *(_QWORD *)(a1 + 40) = v55 + 1;
        *(_BYTE *)(v53 + v55) = v54;
        v56 = *(_QWORD *)(a1 + 40);
        LOBYTE(v54) = *(_BYTE *)(a1 + 5937);
        v57 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 40) = v56 + 1;
        *(_BYTE *)(v57 + v56) = v54;
        LODWORD(v56) = *(_DWORD *)(a1 + 5940);
        *(_DWORD *)(a1 + 5940) = v56 - 13;
        *(_WORD *)(a1 + 5936) = v51 >> (16 - v56);
      }
LABEL_20:
      if ( v9 )
      {
        if ( v9 == v3 )
        {
          v7 = v3;
          v4 = 3;
          v5 = 6;
          v6 = 0;
          goto LABEL_23;
        }
LABEL_22:
        v7 = v3;
        v4 = 4;
        v3 = v9;
        v6 = 0;
        v5 = 7;
LABEL_23:
        if ( v8 > a3 )
          return;
      }
      else
      {
LABEL_11:
        v7 = v3;
        v4 = 3;
        v5 = 138;
        v3 = 0;
        v6 = 0;
        if ( v8 > a3 )
          return;
      }
    }
  }
}
