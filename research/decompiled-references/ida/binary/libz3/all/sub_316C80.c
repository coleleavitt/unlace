void __fastcall sub_316C80(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rbx
  __int64 *v6; // r15
  __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // edx
  int v10; // esi
  __m128 v11; // xmm0
  bool v12; // zf
  char v13; // al
  __int64 *v14; // r14
  int v15; // eax
  int v16; // eax
  int v17; // edx
  char v18; // si
  __int64 v19; // rdx
  __int64 v20; // rax
  char v21; // si
  char v22; // si
  __int64 v23; // rdx
  __int64 v24; // rax
  char v25; // si
  __int64 *v26; // r15
  __int64 *v27; // rsi
  char v28; // al
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rdi
  int v35; // eax
  void *v36; // r14
  __int64 v37; // rax
  char v38; // si
  char v39; // dl
  int v40; // edx
  __int64 v41; // rax
  __int64 v42; // rdx
  char v43; // cl
  __int64 v44; // rsi
  __int64 v45; // rdi
  unsigned __int64 v46; // rdi
  int v47; // eax
  __int64 v48; // r14
  int v49; // edx
  int v50; // esi
  char v51; // di
  __int64 v52; // rsi
  __int64 v53; // rdx
  char v54; // di
  char v55; // di
  __int64 v56; // rsi
  __int64 v57; // rdx
  char v58; // di
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 *v61; // rax
  __int64 v62; // rdi
  __int64 v63; // rsi
  int v64; // eax
  int v65; // edx
  char v66; // cl
  void *v67; // r14
  __int64 v68; // rax
  __int64 v69; // rdx
  char v70; // si
  __int64 v71; // rax
  char v72; // cl
  __int64 v73; // rdx
  char v74; // si
  unsigned int v75; // eax
  __int64 v76; // [rsp+0h] [rbp-98h]
  __int64 v78; // [rsp+18h] [rbp-80h]
  __m128i v79; // [rsp+20h] [rbp-78h]
  int v80; // [rsp+30h] [rbp-68h] BYREF
  char v81; // [rsp+34h] [rbp-64h]
  __int64 v82; // [rsp+38h] [rbp-60h]
  int v83; // [rsp+40h] [rbp-58h] BYREF
  char v84; // [rsp+44h] [rbp-54h]
  __int64 v85; // [rsp+48h] [rbp-50h]
  int v86; // [rsp+50h] [rbp-48h]

  if ( a1 != a2 && a2 != a1 + 56 )
  {
    v5 = a1 + 112;
    v78 = a1 + 16;
    while ( 1 )
    {
      v6 = (__int64 *)(v5 - 56);
      v7 = v5 - 40;
      if ( (*(_BYTE *)(a1 + 36) & 1) != 0
        || *(_DWORD *)(a1 + 32) != 1
        || (*((_BYTE *)v6 + 36) & 1) != 0
        || (v10 = *(_DWORD *)(v5 - 24), v10 != 1) )
      {
        LOBYTE(v8) = sub_1848D40(qword_1C7F2C0, v78, v7);
        v9 = *(_DWORD *)(v5 - 40);
        v10 = *(_DWORD *)(v5 - 24);
      }
      else if ( (*(_BYTE *)(a1 + 20) & 1) != 0 || (*((_BYTE *)v6 + 20) & 1) != 0 )
      {
        v75 = sub_182C7B0(qword_1C7F2C0, v78, v7);
        v9 = *(_DWORD *)(v5 - 40);
        v10 = *(_DWORD *)(v5 - 24);
        v8 = v75 >> 31;
      }
      else
      {
        v9 = *(_DWORD *)(v5 - 40);
        LOBYTE(v8) = *(_DWORD *)(a1 + 16) < v9;
      }
      v76 = v5;
      v11 = (__m128)_mm_loadu_si128((const __m128i *)(v5 - 56));
      v12 = (_BYTE)v8 == 0;
      v13 = v81;
      v79 = (__m128i)v11;
      *(_QWORD *)(v5 - 56) = 0;
      v80 = v9;
      if ( v12 )
        break;
      a4 = _mm_movehl_ps(a4, v11);
      v46 = a4.m128_u64[0];
      v81 = *((_BYTE *)v6 + 20) & 3 | v13 & 0xFC;
      v82 = *(_QWORD *)(v5 - 32);
      *(_QWORD *)(v5 - 32) = 0;
      v83 = v10;
      v84 = *((_BYTE *)v6 + 36) & 3 | v84 & 0xFC;
      v85 = *(_QWORD *)(v5 - 16);
      v47 = *(_DWORD *)(v5 - 8);
      *(_QWORD *)(v5 - 16) = 0;
      v86 = v47;
      v48 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v6 - a1) >> 3);
      if ( (__int64)v6 - a1 > 0 )
      {
        do
        {
          v59 = *v6;
          v60 = *(v6 - 7);
          v6 -= 7;
          v61 = v6 + 7;
          v6[7] = v60;
          *v6 = v59;
          if ( v59 )
          {
            v62 = v6[1];
            v12 = (*(_DWORD *)(v59 + 8))-- == 1;
            if ( v12 )
            {
              sub_15D7BC0(v62, v59);
              v61 = v6 + 7;
            }
          }
          v49 = *((_DWORD *)v6 + 18);
          v50 = *((_DWORD *)v6 + 4);
          *v6 = 0;
          v51 = *((_BYTE *)v6 + 20);
          *((_DWORD *)v6 + 18) = v50;
          v52 = v6[3];
          *((_DWORD *)v6 + 4) = v49;
          v53 = v6[10];
          v6[10] = v52;
          v6[3] = v53;
          LOBYTE(v53) = *((_BYTE *)v61 + 20);
          *((_BYTE *)v61 + 20) = v51 & 2 | v53 & 0xFD;
          LOBYTE(v53) = v53 & 2 | *((_BYTE *)v6 + 20) & 0xFD;
          *((_BYTE *)v6 + 20) = v53;
          v54 = *((_BYTE *)v61 + 20);
          *((_BYTE *)v61 + 20) = v53 & 1 | v54 & 0xFE;
          LODWORD(v52) = *((_DWORD *)v6 + 8);
          LOBYTE(v53) = v54 & 1 | *((_BYTE *)v6 + 20) & 0xFE;
          v55 = *((_BYTE *)v6 + 36);
          *((_BYTE *)v6 + 20) = v53;
          LODWORD(v53) = *((_DWORD *)v6 + 22);
          *((_DWORD *)v6 + 22) = v52;
          v56 = v6[5];
          *((_DWORD *)v6 + 8) = v53;
          v57 = v6[12];
          v6[12] = v56;
          v6[5] = v57;
          LOBYTE(v57) = *((_BYTE *)v61 + 36);
          *((_BYTE *)v61 + 36) = v55 & 2 | v57 & 0xFD;
          LOBYTE(v57) = v57 & 2 | *((_BYTE *)v6 + 36) & 0xFD;
          *((_BYTE *)v6 + 36) = v57;
          v58 = *((_BYTE *)v61 + 36) & 1;
          *((_BYTE *)v61 + 36) = v57 & 1 | *((_BYTE *)v61 + 36) & 0xFE;
          *((_BYTE *)v6 + 36) = v58 | *((_BYTE *)v6 + 36) & 0xFE;
          *((_DWORD *)v6 + 26) = *((_DWORD *)v6 + 12);
          --v48;
        }
        while ( v48 );
        v46 = v79.m128i_u64[1];
        v11.m128_u64[0] = v79.m128i_i64[0];
      }
      v63 = *(_QWORD *)a1;
      *(_QWORD *)a1 = v11.m128_u64[0];
      v79.m128i_i64[0] = v63;
      if ( v63 )
      {
        v12 = (*(_DWORD *)(v63 + 8))-- == 1;
        if ( v12 )
          sub_15D7BC0(v46, v63);
      }
      v64 = *(_DWORD *)(a1 + 16);
      v65 = v80;
      v79.m128i_i64[0] = 0;
      v66 = v81;
      v67 = qword_1C7F2C0;
      v80 = v64;
      v68 = *(_QWORD *)(a1 + 24);
      *(_DWORD *)(a1 + 16) = v65;
      v69 = v82;
      v82 = v68;
      LOBYTE(v68) = *(_BYTE *)(a1 + 20);
      *(_QWORD *)(a1 + 24) = v69;
      LOBYTE(v69) = v66;
      v66 &= ~2u;
      v70 = v68 & 0xFD;
      v81 = v68 & 1 | v66 & 0xFE | v68 & 2;
      LODWORD(v68) = *(_DWORD *)(a1 + 32);
      *(_BYTE *)(a1 + 20) = v66 & 1 | v70 & 0xFE | v69 & 2;
      LODWORD(v69) = v83;
      v83 = v68;
      v71 = *(_QWORD *)(a1 + 40);
      v72 = v84;
      *(_DWORD *)(a1 + 32) = v69;
      v73 = v85;
      v85 = v71;
      LOBYTE(v71) = *(_BYTE *)(a1 + 36);
      *(_QWORD *)(a1 + 40) = v73;
      LOBYTE(v73) = v72;
      v72 &= ~2u;
      v74 = v71 & 0xFD;
      v84 = v71 & 1 | v72 & 0xFE | v71 & 2;
      LODWORD(v71) = v86;
      *(_BYTE *)(a1 + 36) = v72 & 1 | v74 & 0xFE | v73 & 2;
      *(_DWORD *)(a1 + 48) = v71;
      sub_182CBA0(v67, &v80);
      sub_182CBA0(v67, &v83);
      v44 = v79.m128i_i64[0];
      if ( v79.m128i_i64[0] )
      {
        v45 = v79.m128i_i64[1];
        v12 = (*(_DWORD *)(v79.m128i_i64[0] + 8))-- == 1;
        if ( v12 )
LABEL_27:
          sub_15D7BC0(v45, v44);
      }
LABEL_28:
      v5 += 56;
      if ( a2 == v76 )
        return;
    }
    v14 = (__int64 *)(v5 - 112);
    v81 = *((_BYTE *)v6 + 20) & 3 | v13 & 0xFC;
    v82 = *(_QWORD *)(v5 - 32);
    *(_QWORD *)(v5 - 32) = 0;
    v83 = v10;
    v84 = *((_BYTE *)v6 + 36) & 3 | v84 & 0xFC;
    v85 = *(_QWORD *)(v5 - 16);
    v15 = *(_DWORD *)(v5 - 8);
    *(_QWORD *)(v5 - 16) = 0;
    v86 = v15;
    while ( 1 )
    {
      v26 = v14 + 7;
      v27 = v14 + 2;
      if ( (*((_BYTE *)v14 + 36) & 1) != 0 || *((_DWORD *)v14 + 8) != 1 || (v84 & 1) != 0 || v83 != 1 )
        break;
      if ( (*((_BYTE *)v14 + 20) & 1) == 0 && (v81 & 1) == 0 )
      {
        v28 = *((_DWORD *)v14 + 4) < v80;
LABEL_13:
        if ( !v28 )
          goto LABEL_22;
        goto LABEL_14;
      }
      if ( (int)sub_182C7B0(qword_1C7F2C0, v27, &v80) >= 0 )
      {
LABEL_22:
        v33 = v79.m128i_i64[0];
        v79.m128i_i64[0] = *v26;
        v32 = v79.m128i_i64[0];
        *v26 = v33;
        if ( v32 )
        {
          v34 = v79.m128i_i64[1];
          v12 = (*(_DWORD *)(v32 + 8))-- == 1;
          if ( v12 )
            sub_15D7BC0(v34, v32);
        }
        v35 = *((_DWORD *)v14 + 18);
        v79.m128i_i64[0] = 0;
        v36 = qword_1C7F2C0;
        *((_DWORD *)v26 + 4) = v80;
        v80 = v35;
        v37 = v26[3];
        v26[3] = v82;
        v82 = v37;
        v38 = *((_BYTE *)v26 + 20);
        LOBYTE(v37) = v38 & 2;
        v38 &= ~2u;
        v39 = v38 & 0xFE | v81 & 2 | v81 & 1;
        v81 = v38 & 1 | v81 & 0xFC | v37 & 0xFE;
        LODWORD(v37) = *((_DWORD *)v26 + 8);
        *((_BYTE *)v26 + 20) = v39;
        v40 = v83;
        v83 = v37;
        v41 = v26[5];
        *((_DWORD *)v26 + 8) = v40;
        v42 = v85;
        v85 = v41;
        LOBYTE(v41) = *((_BYTE *)v26 + 36);
        v26[5] = v42;
        LOBYTE(v42) = v84 & 1;
        v43 = v41 & 0xFC | v84 & 2;
        v84 = v41 & 1 | v84 & 0xFC | v41 & 2;
        LODWORD(v41) = v86;
        *((_BYTE *)v26 + 36) = v43 | v42;
        *((_DWORD *)v26 + 12) = v41;
        sub_182CBA0(v36, &v80);
        sub_182CBA0(v36, &v83);
        v44 = v79.m128i_i64[0];
        if ( v79.m128i_i64[0] )
        {
          v45 = v79.m128i_i64[1];
          v12 = (*(_DWORD *)(v79.m128i_i64[0] + 8))-- == 1;
          if ( v12 )
            goto LABEL_27;
        }
        goto LABEL_28;
      }
LABEL_14:
      v29 = v14[7];
      v30 = *v14;
      *v14 = v29;
      v14[7] = v30;
      if ( v29 )
      {
        v31 = v14[1];
        v12 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v12 )
          sub_15D7BC0(v31, v29);
      }
      v16 = *((_DWORD *)v14 + 18);
      v17 = *((_DWORD *)v14 + 4);
      v14 -= 7;
      v14[7] = 0;
      v18 = *((_BYTE *)v14 + 76);
      *((_DWORD *)v14 + 32) = v17;
      v19 = v14[10];
      *((_DWORD *)v14 + 18) = v16;
      v20 = v14[17];
      v14[17] = v19;
      v14[10] = v20;
      LOBYTE(v19) = *((_BYTE *)v26 + 20);
      *((_BYTE *)v26 + 20) = v18 & 2 | v19 & 0xFD;
      LOBYTE(v20) = v19 & 2 | *((_BYTE *)v14 + 76) & 0xFD;
      *((_BYTE *)v14 + 76) = v20;
      v21 = *((_BYTE *)v26 + 20);
      *((_BYTE *)v26 + 20) = v20 & 1 | v21 & 0xFE;
      LODWORD(v19) = *((_DWORD *)v14 + 22);
      LOBYTE(v20) = v21 & 1 | *((_BYTE *)v14 + 76) & 0xFE;
      v22 = *((_BYTE *)v14 + 92);
      *((_BYTE *)v14 + 76) = v20;
      LODWORD(v20) = *((_DWORD *)v14 + 36);
      *((_DWORD *)v14 + 36) = v19;
      v23 = v14[12];
      *((_DWORD *)v14 + 22) = v20;
      v24 = v14[19];
      v14[19] = v23;
      v14[12] = v24;
      LOBYTE(v23) = *((_BYTE *)v26 + 36);
      *((_BYTE *)v26 + 36) = v22 & 2 | v23 & 0xFD;
      LOBYTE(v24) = v23 & 2 | *((_BYTE *)v14 + 92) & 0xFD;
      *((_BYTE *)v14 + 92) = v24;
      v25 = *((_BYTE *)v26 + 36) & 1;
      *((_BYTE *)v26 + 36) = v24 & 1 | *((_BYTE *)v26 + 36) & 0xFE;
      *((_BYTE *)v14 + 92) = v25 | *((_BYTE *)v14 + 92) & 0xFE;
      *((_DWORD *)v14 + 40) = *((_DWORD *)v14 + 26);
    }
    v28 = sub_1848D40(qword_1C7F2C0, v27, &v80);
    goto LABEL_13;
  }
}

