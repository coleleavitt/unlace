/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100081BF0
// Address: 0x0000000100081BF0

//----- (0000000100081BF0) ----------------------------------------------------
__int64 __fastcall sub_100081BF0(unsigned int a1, _BYTE *a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  _BYTE *v4; // r13
  unsigned __int64 v5; // rdi
  _BYTE *v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r11
  unsigned int v13; // r12d
  unsigned int v14; // r14d
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  int v17; // edi
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // r10
  unsigned __int64 v23; // rsi
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rsi
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rcx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // r11
  unsigned __int64 v47; // rcx
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rax
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // r10
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdi
  unsigned __int64 v62; // rcx
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rcx
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rcx
  unsigned __int8 v69; // di
  __int64 v70; // rcx
  unsigned __int64 v71; // rdi
  __int64 v72; // [rsp-8h] [rbp-8h]

  if ( !a2 )
    return 0;
  v3 = a3;
  v4 = a2;
  v5 = a1 ^ 0xFFFFFFFFLL;
  if ( a3 >= 0x2F )
  {
    if ( ((unsigned __int8)a2 & 7) != 0 )
    {
      v6 = a2 + 1;
      LODWORD(v5) = *((_DWORD *)qword_1000A1740 + (unsigned __int8)(*a2 ^ v5)) ^ ((unsigned int)v5 >> 8);
      v7 = a3 - 1;
      if ( v3 == 1
        || ((unsigned __int8)v6 & 7) == 0
        || (v6 = a2 + 2,
            LODWORD(v5) = *((_DWORD *)qword_1000A1740 + (unsigned __int8)(a2[1] ^ v5)) ^ ((unsigned int)v5 >> 8),
            v7 = v3 - 2,
            v3 == 2)
        || ((unsigned __int8)v6 & 7) == 0
        || (v6 = a2 + 3,
            LODWORD(v5) = *((_DWORD *)qword_1000A1740 + (unsigned __int8)(a2[2] ^ v5)) ^ ((unsigned int)v5 >> 8),
            v7 = v3 - 3,
            v3 == 3)
        || ((unsigned __int8)v6 & 7) == 0
        || (v6 = a2 + 4,
            LODWORD(v5) = *((_DWORD *)qword_1000A1740 + (unsigned __int8)(a2[3] ^ v5)) ^ ((unsigned int)v5 >> 8),
            v7 = v3 - 4,
            v3 == 4)
        || ((unsigned __int8)v6 & 7) == 0
        || (v6 = a2 + 5,
            LODWORD(v5) = *((_DWORD *)qword_1000A1740 + (unsigned __int8)(a2[4] ^ v5)) ^ ((unsigned int)v5 >> 8),
            v7 = v3 - 5,
            v3 == 5)
        || ((unsigned __int8)v6 & 7) == 0
        || (v6 = a2 + 6,
            LODWORD(v5) = *((_DWORD *)qword_1000A1740 + (unsigned __int8)(a2[5] ^ v5)) ^ ((unsigned int)v5 >> 8),
            v7 = v3 - 6,
            v3 == 6)
        || ((unsigned __int8)v6 & 7) == 0
        || (v6 = a2 + 7,
            LODWORD(v5) = *((_DWORD *)qword_1000A1740 + (unsigned __int8)(a2[6] ^ v5)) ^ ((unsigned int)v5 >> 8),
            v7 = v3 - 7,
            v3 == 7)
        || ((unsigned __int8)v6 & 7) == 0 )
      {
        v3 = v7;
        v4 = v6;
      }
      else
      {
        v3 -= 8LL;
        v4 = a2 + 8;
        LODWORD(v5) = *((_DWORD *)qword_1000A1740 + (unsigned __int8)(a2[7] ^ v5)) ^ ((unsigned int)v5 >> 8);
      }
    }
    v9 = 40 * (v3 / 0x28);
    v10 = 0;
    v11 = v3 / 0x28 - 1;
    if ( v3 / 0x28 == 1 )
    {
      v21 = 0;
      v12 = 0;
      v22 = 0;
    }
    else
    {
      *(&v72 - 7) = v9;
      *(&v72 - 8) = v3;
      *(&v72 - 6) = 40 * (v3 / 0x28) - 40;
      *(&v72 - 9) = (__int64)v4;
      LODWORD(v12) = 0;
      v13 = 0;
      v14 = 0;
      do
      {
        *(&v72 - 11) = v11;
        v15 = *(_QWORD *)v4;
        *(&v72 - 10) = *(_QWORD *)v4;
        v16 = *((_QWORD *)v4 + 1);
        v17 = *((_DWORD *)&qword_1000A1B40[384] + (((unsigned int)v15 ^ (unsigned int)v5) >> 24))
            ^ *((_DWORD *)&qword_1000A1B40[256] + (unsigned __int8)(((unsigned int)v15 ^ (unsigned int)v5) >> 16))
            ^ *((_DWORD *)qword_1000A1B40 + (unsigned __int8)(v15 ^ v5))
            ^ *((_DWORD *)&qword_1000A1B40[128] + (unsigned __int8)((unsigned __int16)(v15 ^ v5) >> 8));
        v18 = *((_QWORD *)v4 + 2);
        v19 = *((_QWORD *)v4 + 3);
        v20 = *((_QWORD *)v4 + 4);
        LODWORD(v5) = *((_DWORD *)&qword_1000A1B40[896] + HIBYTE(*(&v72 - 10)))
                    ^ *(_DWORD *)((char *)&qword_1000A1B40[768] + (((unsigned __int64)*(&v72 - 10) >> 46) & 0x3FC))
                    ^ *(_DWORD *)((char *)&qword_1000A1B40[640] + (((unsigned __int64)*(&v72 - 10) >> 38) & 0x3FC))
                    ^ *(_DWORD *)((char *)&qword_1000A1B40[512] + (((unsigned __int64)*(&v72 - 10) >> 30) & 0x3FC))
                    ^ v17;
        v13 = *((_DWORD *)&qword_1000A1B40[896] + HIBYTE(v16))
            ^ *(_DWORD *)((char *)&qword_1000A1B40[768] + ((v16 >> 46) & 0x3FC))
            ^ *(_DWORD *)((char *)&qword_1000A1B40[640] + ((v16 >> 38) & 0x3FC))
            ^ *(_DWORD *)((char *)&qword_1000A1B40[512] + ((v16 >> 30) & 0x3FC))
            ^ *((_DWORD *)&qword_1000A1B40[384] + (((unsigned int)v16 ^ v13) >> 24))
            ^ *((_DWORD *)&qword_1000A1B40[256] + (unsigned __int8)(((unsigned int)v16 ^ v13) >> 16))
            ^ *((_DWORD *)qword_1000A1B40 + (unsigned __int8)(v16 ^ v13))
            ^ *((_DWORD *)&qword_1000A1B40[128] + (unsigned __int8)((unsigned __int16)(v16 ^ v13) >> 8));
        v14 = *((_DWORD *)&qword_1000A1B40[896] + HIBYTE(v18))
            ^ *(_DWORD *)((char *)&qword_1000A1B40[768] + ((v18 >> 46) & 0x3FC))
            ^ *(_DWORD *)((char *)&qword_1000A1B40[640] + ((v18 >> 38) & 0x3FC))
            ^ *(_DWORD *)((char *)&qword_1000A1B40[512] + ((v18 >> 30) & 0x3FC))
            ^ *((_DWORD *)&qword_1000A1B40[384] + (((unsigned int)v18 ^ v14) >> 24))
            ^ *((_DWORD *)&qword_1000A1B40[256] + (unsigned __int8)(((unsigned int)v18 ^ v14) >> 16))
            ^ *((_DWORD *)qword_1000A1B40 + (unsigned __int8)(v18 ^ v14))
            ^ *((_DWORD *)&qword_1000A1B40[128] + (unsigned __int8)((unsigned __int16)(v18 ^ v14) >> 8));
        LODWORD(v12) = *((_DWORD *)&qword_1000A1B40[896] + HIBYTE(v19))
                     ^ *(_DWORD *)((char *)&qword_1000A1B40[768] + ((v19 >> 46) & 0x3FC))
                     ^ *(_DWORD *)((char *)&qword_1000A1B40[640] + ((v19 >> 38) & 0x3FC))
                     ^ *(_DWORD *)((char *)&qword_1000A1B40[512] + ((v19 >> 30) & 0x3FC))
                     ^ *((_DWORD *)&qword_1000A1B40[384] + (((unsigned int)v19 ^ (unsigned int)v12) >> 24))
                     ^ *((_DWORD *)&qword_1000A1B40[256]
                       + (unsigned __int8)(((unsigned int)v19 ^ (unsigned int)v12) >> 16))
                     ^ *((_DWORD *)qword_1000A1B40 + (unsigned __int8)(v19 ^ v12))
                     ^ *((_DWORD *)&qword_1000A1B40[128] + (unsigned __int8)((unsigned __int16)(v19 ^ v12) >> 8));
        LODWORD(v10) = *((_DWORD *)&qword_1000A1B40[896] + HIBYTE(v20))
                     ^ *(_DWORD *)((char *)&qword_1000A1B40[768] + ((v20 >> 46) & 0x3FC))
                     ^ *(_DWORD *)((char *)&qword_1000A1B40[640] + ((v20 >> 38) & 0x3FC))
                     ^ *(_DWORD *)((char *)&qword_1000A1B40[512] + ((v20 >> 30) & 0x3FC))
                     ^ *((_DWORD *)&qword_1000A1B40[384] + (((unsigned int)v20 ^ (unsigned int)v10) >> 24))
                     ^ *((_DWORD *)&qword_1000A1B40[256]
                       + (unsigned __int8)(((unsigned int)v20 ^ (unsigned int)v10) >> 16))
                     ^ *((_DWORD *)qword_1000A1B40 + (unsigned __int8)(v20 ^ v10))
                     ^ *((_DWORD *)&qword_1000A1B40[128] + (unsigned __int8)((unsigned __int16)(v20 ^ v10) >> 8));
        v4 += 40;
        v11 = *(&v72 - 11) - 1;
      }
      while ( *(&v72 - 11) != 1 );
      v4 = (_BYTE *)(*(&v72 - 6) + *(&v72 - 9));
      v21 = v13;
      v22 = (unsigned int)v10;
      v10 = v14;
      v12 = (unsigned int)v12;
      v3 = *(&v72 - 8);
      v9 = *(&v72 - 7);
    }
    v23 = ((*(_QWORD *)v4 ^ (unsigned __int64)(unsigned int)v5) >> 8)
        ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)(*v4 ^ v5));
    v24 = (v23 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v23);
    v25 = (v24 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v24);
    v26 = (v25 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v25);
    v27 = (v26 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v26);
    v28 = (v27 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v27);
    v29 = (v28 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v28);
    v30 = *((_DWORD *)qword_1000A1740 + (unsigned __int8)v29) ^ (unsigned int)(v29 >> 8);
    v31 = ((v30 ^ *((_QWORD *)v4 + 1) ^ v21) >> 8)
        ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)(v30 ^ v4[8] ^ v21));
    v32 = (v31 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v31);
    v33 = (v32 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v32);
    v34 = (v33 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v33);
    v35 = (v34 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v34);
    v36 = (v35 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v35);
    v37 = (v36 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v36);
    v38 = *((_DWORD *)qword_1000A1740 + (unsigned __int8)v37) ^ (unsigned int)(v37 >> 8) ^ *((_QWORD *)v4 + 2) ^ v10;
    v39 = (v38 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v38);
    v40 = (v39 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v39);
    v41 = (v40 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v40);
    v42 = (v41 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v41);
    v43 = (v42 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v42);
    v44 = (v43 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v43);
    v45 = (v44 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v44);
    v3 -= v9;
    v46 = *((_DWORD *)qword_1000A1740 + (unsigned __int8)v45) ^ (unsigned int)(v45 >> 8) ^ *((_QWORD *)v4 + 3) ^ v12;
    v47 = (v46 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v46);
    v48 = (v47 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v47);
    v49 = (v48 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v48);
    v50 = (v49 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v49);
    v51 = (v50 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v50);
    v52 = (v51 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v51);
    v53 = (v52 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v52);
    v54 = *((_DWORD *)qword_1000A1740 + (unsigned __int8)v53) ^ (unsigned int)(v53 >> 8) ^ *((_QWORD *)v4 + 4) ^ v22;
    v55 = (v54 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v54);
    v56 = (v55 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v55);
    v57 = (v56 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v56);
    v58 = (v57 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v57);
    v59 = (v58 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v58);
    v60 = (v59 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v59);
    v61 = (v60 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v60);
    v5 = *((_DWORD *)qword_1000A1740 + (unsigned __int8)v61) ^ (unsigned int)(v61 >> 8);
    v4 += 40;
  }
  if ( v3 >= 8 )
  {
    do
    {
      v3 -= 8LL;
      v62 = (v5 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)(*v4 ^ v5));
      v63 = (((((v62 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)(v4[1] ^ v62))) >> 8)
            ^ *((unsigned int *)qword_1000A1740
              + (unsigned __int8)(v4[2] ^ BYTE1(v62) ^ *((_DWORD *)qword_1000A1740 + (unsigned __int8)(v4[1] ^ v62))))) >> 8)
          ^ *((unsigned int *)qword_1000A1740
            + (unsigned __int8)(v4[3]
                              ^ ((unsigned __int16)(((unsigned int)v62 >> 8)
                                                  ^ *((_DWORD *)qword_1000A1740 + (unsigned __int8)(v4[1] ^ v62))) >> 8)
                              ^ *((_DWORD *)qword_1000A1740
                                + (unsigned __int8)(v4[2]
                                                  ^ BYTE1(v62)
                                                  ^ *((_DWORD *)qword_1000A1740 + (unsigned __int8)(v4[1] ^ v62))))));
      v64 = (v63 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)(v4[4] ^ v63));
      v65 = (((v64 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)(v4[5] ^ v64))) >> 8)
          ^ *((unsigned int *)qword_1000A1740
            + (unsigned __int8)(v4[6] ^ BYTE1(v64) ^ *((_DWORD *)qword_1000A1740 + (unsigned __int8)(v4[5] ^ v64))));
      v66 = v65 >> 8;
      LOBYTE(v65) = v4[7] ^ v65;
      v4 += 8;
      v5 = v66 ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)v65);
    }
    while ( v3 > 7 );
  }
  if ( v3 )
  {
    if ( (v3 & 1) == 0 )
    {
      v67 = v3;
      if ( v3 == 1 )
        return v5 ^ 0xFFFFFFFF;
LABEL_34:
      v70 = 0;
      do
      {
        v71 = (v5 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)(v4[v70] ^ v5));
        v5 = (v71 >> 8) ^ *((unsigned int *)qword_1000A1740 + (unsigned __int8)(v4[v70 + 1] ^ v71));
        v70 += 2;
      }
      while ( v67 != v70 );
      return v5 ^ 0xFFFFFFFF;
    }
    v67 = v3 - 1;
    v68 = v5 >> 8;
    v69 = *v4++ ^ v5;
    v5 = v68 ^ *((unsigned int *)qword_1000A1740 + v69);
    if ( v3 != 1 )
      goto LABEL_34;
  }
  return v5 ^ 0xFFFFFFFF;
}
// 1000A1740: using guessed type __int64 qword_1000A1740[128];
// 1000A1B40: using guessed type __int64 qword_1000A1B40[512];
