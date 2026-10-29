void __fastcall sub_B03E00(__int64 a1, int *a2)
{
  unsigned int *v2; // r15
  int *v4; // rdx
  unsigned int v5; // eax
  __int64 v6; // rcx
  char v7; // si
  int v8; // ebx
  __int64 v9; // r12
  int v10; // r13d
  bool v11; // di
  char v12; // r10
  char v13; // r9
  bool v14; // si
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // r11
  unsigned int *v18; // rax
  unsigned int *v19; // rdx
  unsigned int v20; // ecx
  unsigned int v21; // esi
  unsigned int v22; // ecx
  __int64 v23; // rsi
  __int64 v24; // rcx
  char v25; // di
  __int64 v26; // rcx
  __int64 v27; // rsi
  char v28; // di
  char v29; // r8
  int v30; // eax
  __int64 v31; // rax
  char v32; // cl
  char v33; // dl
  __int64 v34; // rax
  char v35; // si
  char v36; // dl
  void *v37; // rbx
  unsigned int v38; // ebp
  int *v39; // r8
  char v40; // al
  char v41; // al
  int v42; // edx
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rax
  char v46; // cl
  char v47; // si
  char v48; // r11
  char v49; // si
  __int64 v50; // rdx
  __int64 v51; // rax
  char v52; // al
  bool v53; // cl
  __int64 v54; // rdi
  int v55; // ebp
  __int64 v56; // rsi
  char v57; // r11
  bool v58; // r8
  char v59; // r12
  char v60; // di
  char v61; // r8
  char v62; // di
  char v63; // cl
  void *v64; // rbx
  __int64 v65; // [rsp+8h] [rbp-90h]
  int v67; // [rsp+28h] [rbp-70h]
  bool v68; // [rsp+2Dh] [rbp-6Bh]
  bool v69; // [rsp+2Eh] [rbp-6Ah]
  char v70; // [rsp+2Fh] [rbp-69h]
  int v71; // [rsp+30h] [rbp-68h]
  unsigned int v72; // [rsp+30h] [rbp-68h]
  int v73; // [rsp+38h] [rbp-60h] BYREF
  char v74; // [rsp+3Ch] [rbp-5Ch]
  __int64 v75; // [rsp+40h] [rbp-58h]
  int v76; // [rsp+48h] [rbp-50h] BYREF
  char v77; // [rsp+4Ch] [rbp-4Ch]
  __int64 v78; // [rsp+50h] [rbp-48h]

  if ( (int *)a1 != a2 )
  {
    v2 = (unsigned int *)(a1 + 40);
    while ( a2 != (int *)v2 )
    {
      v4 = (int *)v2;
      v5 = *v2;
      v6 = *((_QWORD *)v2 + 4);
      v2 += 10;
      v7 = *((_BYTE *)v4 + 28);
      v8 = *(v2 - 8);
      v9 = *((_QWORD *)v2 - 3);
      v65 = v6;
      v10 = *(v2 - 4);
      v11 = (v4[3] & 2) != 0;
      v12 = v4[3] & 1;
      v13 = v7 & 1;
      v14 = (v7 & 2) != 0;
      v68 = v11;
      v69 = v14;
      if ( v5 >= *(_DWORD *)a1 )
      {
        v38 = *(v2 - 10);
        v73 = *(v2 - 8);
        v75 = v9;
        v39 = (int *)(v2 - 20);
        v72 = v38;
        v40 = v12 | v74 & 0xFC;
        *((_QWORD *)v2 - 3) = 0;
        v76 = v10;
        v74 = (2 * v11) | v40;
        v41 = v77;
        *((_QWORD *)v2 - 1) = 0;
        v77 = (2 * v14) | v13 | v41 & 0xFC;
        v78 = v6;
        if ( v38 >= *(v2 - 20) )
        {
          v53 = v14;
          v58 = v11;
          v70 = v13;
          v55 = v10;
          v67 = v8;
          v57 = v12;
          v56 = 0;
          v54 = 0;
        }
        else
        {
          do
          {
            v42 = v39[2];
            v39[10] = *v39;
            v43 = v39[12];
            v39[12] = v42;
            v44 = *((_QWORD *)v39 + 2);
            v39[2] = v43;
            v45 = *((_QWORD *)v39 + 7);
            *((_QWORD *)v39 + 7) = v44;
            LOBYTE(v44) = *((_BYTE *)v39 + 52);
            *((_QWORD *)v39 + 2) = v45;
            v46 = v44 & 0xFD;
            v47 = v44 & 0xFD | v39[3] & 2;
            LOBYTE(v44) = v39[3] & 0xFD | v44 & 2;
            LOBYTE(v45) = v47;
            v48 = *((_BYTE *)v39 + 28);
            v49 = v48 & 2;
            *((_BYTE *)v39 + 52) = v39[3] & 1 | v45 & 0xFE;
            LOBYTE(v45) = v44;
            LODWORD(v44) = v39[6];
            v48 &= ~2u;
            *((_BYTE *)v39 + 12) = v46 & 1 | v45 & 0xFE;
            LODWORD(v45) = v39[16];
            v39[16] = v44;
            v50 = *((_QWORD *)v39 + 4);
            v39[6] = v45;
            v51 = *((_QWORD *)v39 + 9);
            *((_QWORD *)v39 + 9) = v50;
            *((_QWORD *)v39 + 4) = v51;
            v52 = v39[17] & 1;
            v53 = (v39[17] & 2) != 0;
            *((_BYTE *)v39 + 68) = v48 & 1 | v39[17] & 0xFC | v49 & 0xFE;
            *((_BYTE *)v39 + 28) = v52 | v48 & 0xFE | (2 * v53);
            v4 = v39;
            v39 -= 10;
          }
          while ( v38 < *(v4 - 10) );
          v54 = *((_QWORD *)v4 + 2);
          v70 = v52;
          v55 = v4[6];
          v56 = *((_QWORD *)v4 + 4);
          v57 = v4[3] & 1;
          v67 = v4[2];
          v58 = (v4[3] & 2) != 0;
        }
        v75 = v54;
        *((_QWORD *)v4 + 2) = v9;
        v59 = *((_BYTE *)v4 + 12);
        v78 = v56;
        *v4 = v72;
        v4[2] = v8;
        v60 = v74;
        v73 = v67;
        v4[6] = v10;
        *((_BYTE *)v4 + 12) = v12 | (2 * v68) | v59 & 0xFC;
        v61 = v60 & 0xFC | (v57 | (2 * v58)) & 3;
        *((_QWORD *)v4 + 4) = v65;
        v62 = *((_BYTE *)v4 + 28);
        v74 = v61;
        v76 = v55;
        v63 = v77 & 0xFC | (v70 | (2 * v53)) & 3;
        *((_BYTE *)v4 + 28) = v13 | v62 & 0xFC | (2 * v69);
        v64 = qword_1C7F2C0;
        v77 = v63;
        sub_182CBA0(qword_1C7F2C0, &v73);
        sub_182CBA0(v64, &v76);
      }
      else
      {
        v15 = *(v2 - 10);
        v16 = (__int64)v4 - a1;
        *((_QWORD *)v2 - 3) = 0;
        *((_QWORD *)v2 - 1) = 0;
        v71 = v15;
        v74 = (2 * v11) | v12 | v74 & 0xFC;
        v77 = (2 * v14) | v13 | v77 & 0xFC;
        v17 = 0xCCCCCCCCCCCCCCCDLL * (v16 >> 3);
        if ( v16 > 0 )
        {
          v18 = v2;
          do
          {
            v19 = v18;
            v20 = *(v18 - 20);
            v21 = *(v18 - 18);
            v18 -= 10;
            *v18 = v20;
            v22 = v18[2];
            v18[2] = v21;
            v23 = *((_QWORD *)v18 - 3);
            *(v18 - 8) = v22;
            v24 = *((_QWORD *)v18 + 2);
            *((_QWORD *)v18 + 2) = v23;
            *((_QWORD *)v18 - 3) = v24;
            LOBYTE(v23) = *((_BYTE *)v18 + 12);
            *((_BYTE *)v18 + 12) = *(_BYTE *)(v19 - 17) & 2 | v23 & 0xFD;
            LOBYTE(v24) = v23 & 2 | *(_BYTE *)(v19 - 17) & 0xFD;
            *((_BYTE *)v19 - 68) = v24;
            v25 = *((_BYTE *)v18 + 12);
            *((_BYTE *)v18 + 12) = v24 & 1 | v25 & 0xFE;
            *((_BYTE *)v19 - 68) = v25 & 1 | *(_BYTE *)(v19 - 17) & 0xFE;
            LODWORD(v23) = *(v18 - 4);
            *(v18 - 4) = v18[6];
            v26 = *((_QWORD *)v18 + 4);
            v18[6] = v23;
            v27 = *((_QWORD *)v18 - 1);
            *((_QWORD *)v18 - 1) = v26;
            LOBYTE(v26) = *((_BYTE *)v18 + 28);
            *((_QWORD *)v18 + 4) = v27;
            *((_BYTE *)v18 + 28) = *(_BYTE *)(v19 - 13) & 2 | v26 & 0xFD;
            LOBYTE(v26) = v26 & 2 | *(_BYTE *)(v19 - 13) & 0xFD;
            *((_BYTE *)v19 - 52) = v26;
            v28 = v18[7] & 1;
            *((_BYTE *)v18 + 28) = v26 & 1 | v18[7] & 0xFE;
            *((_BYTE *)v19 - 52) = v28 | *(_BYTE *)(v19 - 13) & 0xFE;
            --v17;
          }
          while ( v17 );
        }
        v29 = *(_BYTE *)(a1 + 12);
        *(_DWORD *)a1 = v71;
        v30 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 8) = v8;
        v73 = v30;
        v31 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)(a1 + 16) = v9;
        v75 = v31;
        LOBYTE(v31) = v74 & 0xFC;
        *(_BYTE *)(a1 + 12) = v12 | v29 & 0xFC | (2 * v68);
        v32 = *(_BYTE *)(a1 + 28);
        v33 = v32 & 2;
        v74 = v29 & 1 | v29 & 2 | v31;
        LODWORD(v31) = *(_DWORD *)(a1 + 24);
        v32 &= ~2u;
        *(_DWORD *)(a1 + 24) = v10;
        v76 = v31;
        v34 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 32) = v65;
        v78 = v34;
        v35 = v33;
        v36 = v77 & 0xFC;
        *(_BYTE *)(a1 + 28) = v13 | v32 & 0xFE | (2 * v69);
        v77 = v32 & 1 | v35 | v36;
        v37 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, &v73);
        sub_182CBA0(v37, &v76);
      }
    }
  }
}

