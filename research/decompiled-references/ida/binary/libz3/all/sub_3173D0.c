void __fastcall sub_3173D0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // r14
  __int64 *v6; // r15
  unsigned int v7; // eax
  int v8; // edx
  int v9; // esi
  __m128 v10; // xmm0
  bool v11; // zf
  char v12; // al
  __int64 *v13; // r13
  int v14; // eax
  int v15; // eax
  int v16; // edx
  char v17; // si
  __int64 v18; // rdx
  __int64 v19; // rax
  char v20; // si
  char v21; // si
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // si
  __int64 *v25; // r15
  __int64 *v26; // rdx
  char v27; // al
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // eax
  int v35; // edx
  char v36; // cl
  void *v37; // r13
  __int64 v38; // rax
  __int64 v39; // rdx
  char v40; // si
  char v41; // cl
  char v42; // si
  __int64 v43; // rax
  char v44; // cl
  __int64 v45; // rsi
  __int64 v46; // rdi
  unsigned __int64 v47; // rdi
  int v48; // eax
  __int64 v49; // r13
  int v50; // edx
  int v51; // esi
  char v52; // di
  __int64 v53; // rsi
  __int64 v54; // rdx
  char v55; // di
  char v56; // di
  __int64 v57; // rsi
  __int64 v58; // rdx
  char v59; // di
  __int64 v60; // rsi
  __int64 v61; // rdx
  __int64 *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rsi
  int v65; // eax
  void *v66; // r13
  __int64 v67; // rax
  char v68; // si
  char v69; // dl
  int v70; // edx
  __int64 v71; // rax
  __int64 v72; // rdx
  char v73; // cl
  unsigned int v74; // eax
  __int64 v75; // [rsp+0h] [rbp-98h]
  __int64 v77; // [rsp+18h] [rbp-80h]
  __m128i v78; // [rsp+20h] [rbp-78h]
  int v79; // [rsp+30h] [rbp-68h] BYREF
  char v80; // [rsp+34h] [rbp-64h]
  __int64 v81; // [rsp+38h] [rbp-60h]
  int v82; // [rsp+40h] [rbp-58h] BYREF
  char v83; // [rsp+44h] [rbp-54h]
  __int64 v84; // [rsp+48h] [rbp-50h]
  int v85; // [rsp+50h] [rbp-48h]

  if ( a1 != a2 && a2 != a1 + 56 )
  {
    v5 = a1 + 112;
    v77 = a1 + 16;
    while ( 1 )
    {
      v6 = (__int64 *)(v5 - 56);
      if ( (*(_BYTE *)(v5 - 20) & 1) != 0
        || *(_DWORD *)(v5 - 24) != 1
        || (*(_BYTE *)(a1 + 36) & 1) != 0
        || (v9 = *(_DWORD *)(a1 + 32), v9 != 1) )
      {
        LOBYTE(v7) = sub_1848D40(qword_1C7F2C0, v5 - 40, v77);
        v8 = *(_DWORD *)(v5 - 40);
        v9 = *(_DWORD *)(v5 - 24);
      }
      else if ( (*((_BYTE *)v6 + 20) & 1) != 0 || (*(_BYTE *)(a1 + 20) & 1) != 0 )
      {
        v74 = sub_182C7B0(qword_1C7F2C0, v5 - 40, v77);
        v8 = *(_DWORD *)(v5 - 40);
        v9 = *(_DWORD *)(v5 - 24);
        v7 = v74 >> 31;
      }
      else
      {
        v8 = *(_DWORD *)(v5 - 40);
        LOBYTE(v7) = v8 < *(_DWORD *)(a1 + 16);
      }
      v75 = v5;
      v10 = (__m128)_mm_loadu_si128((const __m128i *)(v5 - 56));
      v11 = (_BYTE)v7 == 0;
      v12 = v80;
      v78 = (__m128i)v10;
      *(_QWORD *)(v5 - 56) = 0;
      v79 = v8;
      if ( v11 )
        break;
      a4 = _mm_movehl_ps(a4, v10);
      v47 = a4.m128_u64[0];
      v80 = *((_BYTE *)v6 + 20) & 3 | v12 & 0xFC;
      v81 = *(_QWORD *)(v5 - 32);
      *(_QWORD *)(v5 - 32) = 0;
      v82 = v9;
      v83 = *((_BYTE *)v6 + 36) & 3 | v83 & 0xFC;
      v84 = *(_QWORD *)(v5 - 16);
      v48 = *(_DWORD *)(v5 - 8);
      *(_QWORD *)(v5 - 16) = 0;
      v85 = v48;
      v49 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v6 - a1) >> 3);
      if ( (__int64)v6 - a1 > 0 )
      {
        do
        {
          v60 = *v6;
          v61 = *(v6 - 7);
          v6 -= 7;
          v62 = v6 + 7;
          v6[7] = v61;
          *v6 = v60;
          if ( v60 )
          {
            v63 = v6[1];
            v11 = (*(_DWORD *)(v60 + 8))-- == 1;
            if ( v11 )
            {
              sub_15D7BC0(v63, v60);
              v62 = v6 + 7;
            }
          }
          v50 = *((_DWORD *)v6 + 18);
          v51 = *((_DWORD *)v6 + 4);
          *v6 = 0;
          v52 = *((_BYTE *)v6 + 20);
          *((_DWORD *)v6 + 18) = v51;
          v53 = v6[3];
          *((_DWORD *)v6 + 4) = v50;
          v54 = v6[10];
          v6[10] = v53;
          v6[3] = v54;
          LOBYTE(v54) = *((_BYTE *)v62 + 20);
          *((_BYTE *)v62 + 20) = v52 & 2 | v54 & 0xFD;
          LOBYTE(v54) = v54 & 2 | *((_BYTE *)v6 + 20) & 0xFD;
          *((_BYTE *)v6 + 20) = v54;
          v55 = *((_BYTE *)v62 + 20);
          *((_BYTE *)v62 + 20) = v54 & 1 | v55 & 0xFE;
          LODWORD(v53) = *((_DWORD *)v6 + 8);
          LOBYTE(v54) = v55 & 1 | *((_BYTE *)v6 + 20) & 0xFE;
          v56 = *((_BYTE *)v6 + 36);
          *((_BYTE *)v6 + 20) = v54;
          LODWORD(v54) = *((_DWORD *)v6 + 22);
          *((_DWORD *)v6 + 22) = v53;
          v57 = v6[5];
          *((_DWORD *)v6 + 8) = v54;
          v58 = v6[12];
          v6[12] = v57;
          v6[5] = v58;
          LOBYTE(v58) = *((_BYTE *)v62 + 36);
          *((_BYTE *)v62 + 36) = v56 & 2 | v58 & 0xFD;
          LOBYTE(v58) = v58 & 2 | *((_BYTE *)v6 + 36) & 0xFD;
          *((_BYTE *)v6 + 36) = v58;
          v59 = *((_BYTE *)v62 + 36) & 1;
          *((_BYTE *)v62 + 36) = v58 & 1 | *((_BYTE *)v62 + 36) & 0xFE;
          *((_BYTE *)v6 + 36) = v59 | *((_BYTE *)v6 + 36) & 0xFE;
          *((_DWORD *)v6 + 26) = *((_DWORD *)v6 + 12);
          --v49;
        }
        while ( v49 );
        v47 = v78.m128i_u64[1];
        v10.m128_u64[0] = v78.m128i_i64[0];
      }
      v64 = *(_QWORD *)a1;
      *(_QWORD *)a1 = v10.m128_u64[0];
      v78.m128i_i64[0] = v64;
      if ( v64 )
      {
        v11 = (*(_DWORD *)(v64 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v47, v64);
      }
      v65 = *(_DWORD *)(a1 + 16);
      v78.m128i_i64[0] = 0;
      v66 = qword_1C7F2C0;
      *(_DWORD *)(a1 + 16) = v79;
      v79 = v65;
      v67 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 24) = v81;
      v81 = v67;
      v68 = *(_BYTE *)(a1 + 20);
      LOBYTE(v67) = v68 & 2;
      v68 &= ~2u;
      v69 = v68 & 0xFE | v80 & 2 | v80 & 1;
      v80 = v68 & 1 | v80 & 0xFC | v67 & 0xFE;
      LODWORD(v67) = *(_DWORD *)(a1 + 32);
      *(_BYTE *)(a1 + 20) = v69;
      v70 = v82;
      v82 = v67;
      v71 = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(a1 + 32) = v70;
      v72 = v84;
      v84 = v71;
      LOBYTE(v71) = *(_BYTE *)(a1 + 36);
      *(_QWORD *)(a1 + 40) = v72;
      LOBYTE(v72) = v83 & 1;
      v73 = v71 & 0xFC | v83 & 2;
      v83 = v71 & 1 | v83 & 0xFC | v71 & 2;
      LODWORD(v71) = v85;
      *(_BYTE *)(a1 + 36) = v73 | v72;
      *(_DWORD *)(a1 + 48) = v71;
      sub_182CBA0(v66, &v79);
      sub_182CBA0(v66, &v82);
      v45 = v78.m128i_i64[0];
      if ( v78.m128i_i64[0] )
      {
        v46 = v78.m128i_i64[1];
        v11 = (*(_DWORD *)(v78.m128i_i64[0] + 8))-- == 1;
        if ( v11 )
LABEL_27:
          sub_15D7BC0(v46, v45);
      }
LABEL_28:
      v5 += 56;
      if ( a2 == v75 )
        return;
    }
    v13 = (__int64 *)(v5 - 112);
    v80 = *((_BYTE *)v6 + 20) & 3 | v12 & 0xFC;
    v81 = *(_QWORD *)(v5 - 32);
    *(_QWORD *)(v5 - 32) = 0;
    v82 = v9;
    v83 = *((_BYTE *)v6 + 36) & 3 | v83 & 0xFC;
    v84 = *(_QWORD *)(v5 - 16);
    v14 = *(_DWORD *)(v5 - 8);
    *(_QWORD *)(v5 - 16) = 0;
    v85 = v14;
    while ( 1 )
    {
      v25 = v13 + 7;
      v26 = v13 + 2;
      if ( (v83 & 1) != 0 || v82 != 1 || (*((_BYTE *)v13 + 36) & 1) != 0 || *((_DWORD *)v13 + 8) != 1 )
        break;
      if ( (v80 & 1) == 0 && (*((_BYTE *)v13 + 20) & 1) == 0 )
      {
        v27 = v79 < *((_DWORD *)v13 + 4);
LABEL_13:
        if ( !v27 )
          goto LABEL_22;
        goto LABEL_14;
      }
      if ( (int)sub_182C7B0(qword_1C7F2C0, &v79, v26) >= 0 )
      {
LABEL_22:
        v32 = v78.m128i_i64[0];
        v78.m128i_i64[0] = *v25;
        v31 = v78.m128i_i64[0];
        *v25 = v32;
        if ( v31 )
        {
          v33 = v78.m128i_i64[1];
          v11 = (*(_DWORD *)(v31 + 8))-- == 1;
          if ( v11 )
            sub_15D7BC0(v33, v31);
        }
        v34 = *((_DWORD *)v13 + 18);
        v35 = v79;
        v78.m128i_i64[0] = 0;
        v36 = *((_BYTE *)v13 + 76);
        v37 = qword_1C7F2C0;
        v79 = v34;
        v38 = v25[3];
        *((_DWORD *)v25 + 4) = v35;
        v39 = v81;
        v81 = v38;
        LOBYTE(v38) = v80;
        v40 = v36 & 0xFD;
        v25[3] = v39;
        LOBYTE(v39) = v38;
        LOBYTE(v38) = v38 & 0xFD;
        LOBYTE(v39) = v38 & 1 | v36 & 0xFC | v39 & 2;
        LOBYTE(v38) = v38 | v36 & 2;
        v41 = *((_BYTE *)v25 + 36);
        *((_BYTE *)v25 + 20) = v39;
        v80 = v40 & 1 | v38 & 0xFE;
        LODWORD(v38) = *((_DWORD *)v25 + 8);
        v42 = v41 & 0xFD;
        *((_DWORD *)v25 + 8) = v82;
        v82 = v38;
        v43 = v25[5];
        v25[5] = v84;
        v84 = v43;
        v44 = v83 & 0xFD | v41 & 2;
        *((_BYTE *)v25 + 36) = v83 & 1 | v42 & 0xFE | v83 & 2;
        v83 = v42 & 1 | v44 & 0xFE;
        *((_DWORD *)v25 + 12) = v85;
        sub_182CBA0(v37, &v79);
        sub_182CBA0(v37, &v82);
        v45 = v78.m128i_i64[0];
        if ( v78.m128i_i64[0] )
        {
          v46 = v78.m128i_i64[1];
          v11 = (*(_DWORD *)(v78.m128i_i64[0] + 8))-- == 1;
          if ( v11 )
            goto LABEL_27;
        }
        goto LABEL_28;
      }
LABEL_14:
      v28 = v13[7];
      v29 = *v13;
      *v13 = v28;
      v13[7] = v29;
      if ( v28 )
      {
        v30 = v13[1];
        v11 = (*(_DWORD *)(v28 + 8))-- == 1;
        if ( v11 )
          sub_15D7BC0(v30, v28);
      }
      v15 = *((_DWORD *)v13 + 18);
      v16 = *((_DWORD *)v13 + 4);
      v13 -= 7;
      v13[7] = 0;
      v17 = *((_BYTE *)v13 + 76);
      *((_DWORD *)v13 + 32) = v16;
      v18 = v13[10];
      *((_DWORD *)v13 + 18) = v15;
      v19 = v13[17];
      v13[17] = v18;
      v13[10] = v19;
      LOBYTE(v18) = *((_BYTE *)v25 + 20);
      *((_BYTE *)v25 + 20) = v17 & 2 | v18 & 0xFD;
      LOBYTE(v19) = v18 & 2 | *((_BYTE *)v13 + 76) & 0xFD;
      *((_BYTE *)v13 + 76) = v19;
      v20 = *((_BYTE *)v25 + 20);
      *((_BYTE *)v25 + 20) = v19 & 1 | v20 & 0xFE;
      LODWORD(v18) = *((_DWORD *)v13 + 22);
      LOBYTE(v19) = v20 & 1 | *((_BYTE *)v13 + 76) & 0xFE;
      v21 = *((_BYTE *)v13 + 92);
      *((_BYTE *)v13 + 76) = v19;
      LODWORD(v19) = *((_DWORD *)v13 + 36);
      *((_DWORD *)v13 + 36) = v18;
      v22 = v13[12];
      *((_DWORD *)v13 + 22) = v19;
      v23 = v13[19];
      v13[19] = v22;
      v13[12] = v23;
      LOBYTE(v22) = *((_BYTE *)v25 + 36);
      *((_BYTE *)v25 + 36) = v21 & 2 | v22 & 0xFD;
      LOBYTE(v23) = v22 & 2 | *((_BYTE *)v13 + 92) & 0xFD;
      *((_BYTE *)v13 + 92) = v23;
      v24 = *((_BYTE *)v25 + 36) & 1;
      *((_BYTE *)v25 + 36) = v23 & 1 | *((_BYTE *)v25 + 36) & 0xFE;
      *((_BYTE *)v13 + 92) = v24 | *((_BYTE *)v13 + 92) & 0xFE;
      *((_DWORD *)v13 + 40) = *((_DWORD *)v13 + 26);
    }
    v27 = sub_1848D40(qword_1C7F2C0, &v79, v26);
    goto LABEL_13;
  }
}

