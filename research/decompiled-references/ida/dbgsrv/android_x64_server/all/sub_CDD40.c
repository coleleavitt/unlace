/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CDD40
// Address: 0x00000000000CDD40

//----- (00000000000CDD40) ----------------------------------------------------
__int64 __fastcall sub_CDD40(unsigned int a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v3; // r10
  _QWORD *v4; // r14
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r11
  __int64 v11; // rdi
  unsigned __int64 v12; // rcx
  unsigned int v13; // ebp
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r10
  unsigned int v20; // r14d
  __int64 v21; // rcx
  __int64 i; // r8
  unsigned __int64 v23; // rsi
  __int64 v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rdx
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rbp
  unsigned __int64 v31; // rbx
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rbx
  __int64 v36; // rbx
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rsi
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rdi
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // rax
  unsigned __int64 v47; // rsi
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rsi
  __int64 v52; // rsi
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  unsigned __int64 v60; // r8
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rcx
  unsigned __int64 v66; // rax
  unsigned __int64 v67; // rcx
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rdx
  unsigned __int8 *v70; // rbx
  unsigned __int64 v71; // rsi
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rsi
  unsigned __int64 v74; // rcx
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // rcx
  unsigned __int64 v77; // rsi
  __int64 v78; // [rsp+0h] [rbp-58h]
  unsigned __int64 v79; // [rsp+8h] [rbp-50h]
  unsigned __int64 v80; // [rsp+10h] [rbp-48h]
  unsigned __int64 v81; // [rsp+18h] [rbp-40h]
  _QWORD *v82; // [rsp+20h] [rbp-38h]

  if ( !a2 )
    return 0;
  v3 = a3;
  v4 = a2;
  v5 = a1 ^ 0xFFFFFFFFLL;
  if ( a3 >= 0x2FuLL )
  {
    if ( ((unsigned __int8)a2 & 7) != 0 )
    {
      do
      {
        v8 = *(unsigned __int8 *)v4;
        v4 = (_QWORD *)((char *)v4 + 1);
        v5 = (v5 >> 8) ^ *((unsigned int *)qword_1164E0 + (v8 ^ (unsigned __int8)v5));
        --v3;
      }
      while ( v3 && ((unsigned __int8)v4 & 7) != 0 );
    }
    v9 = 40 * (v3 / 0x28);
    v10 = *v4 ^ (unsigned int)v5;
    v11 = 0;
    v12 = v3 / 0x28 - 1;
    if ( v3 / 0x28 == 1 )
    {
      v23 = 0;
      v25 = 0;
      v24 = 0;
    }
    else
    {
      v79 = 5 * (v3 / 0x28);
      v80 = v3;
      v78 = (__int64)&v4[v79 - 5];
      v13 = 0;
      v14 = 0;
      v15 = 0;
      do
      {
        v81 = v12;
        v16 = v4[1] ^ v14;
        v17 = v4[2] ^ v15;
        v18 = v4[3] ^ v13;
        v82 = v4;
        v19 = v4[4] ^ (unsigned int)v11;
        v20 = *((_DWORD *)qword_1168E0 + (unsigned __int8)v10);
        v14 = *((_DWORD *)qword_1168E0 + (unsigned __int8)v16);
        v15 = *((_DWORD *)qword_1168E0 + (unsigned __int8)v17);
        v13 = *((_DWORD *)qword_1168E0 + (unsigned __int8)v18);
        LODWORD(v11) = *((_DWORD *)qword_1168E0 + (unsigned __int8)v19);
        v21 = 8;
        for ( i = 0; i != 7168; i += 1024 )
        {
          v20 ^= *(_DWORD *)((char *)&qword_1168E0[128] + 4 * (unsigned __int8)(v10 >> v21) + i);
          v14 ^= *(_DWORD *)((char *)&qword_1168E0[128] + 4 * (unsigned __int8)(v16 >> v21) + i);
          v15 ^= *(_DWORD *)((char *)&qword_1168E0[128] + 4 * (unsigned __int8)(v17 >> v21) + i);
          v13 ^= *(_DWORD *)((char *)&qword_1168E0[128] + 4 * (unsigned __int8)(v18 >> v21) + i);
          LODWORD(v11) = *(_DWORD *)((char *)&qword_1168E0[128] + 4 * (unsigned __int8)(v19 >> v21) + i) ^ v11;
          v21 += 8;
        }
        v10 = v82[5] ^ v20;
        v4 = v82 + 5;
        v12 = v81 - 1;
      }
      while ( v81 != 1 );
      v23 = v14;
      v24 = (unsigned int)v11;
      v11 = v15;
      v25 = v13;
      v4 = (_QWORD *)v78;
      v3 = v80;
      v9 = v79 * 8;
    }
    v29 = (v10 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v10);
    v30 = (v29 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v29);
    v31 = (v30 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v30);
    v32 = (v31 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v31);
    v33 = (v32 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v32);
    v34 = (v33 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v33);
    v35 = (v34 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v34);
    v36 = *((_DWORD *)qword_1164E0 + (unsigned __int8)v35) ^ (unsigned int)(v35 >> 8);
    v37 = ((v36 ^ v4[1] ^ v23) >> 8)
        ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)(v36 ^ *((_BYTE *)v4 + 8) ^ v23));
    v38 = (v37 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v37);
    v39 = (v38 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v38);
    v40 = (v39 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v39);
    v41 = (v40 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v40);
    v42 = (v41 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v41);
    v43 = (v42 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v42);
    v44 = *((_DWORD *)qword_1164E0 + (unsigned __int8)v43) ^ (unsigned int)(v43 >> 8) ^ v4[2] ^ v11;
    v45 = (v44 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v44);
    v46 = (v45 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v45);
    v47 = (v46 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v46);
    v48 = (v47 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v47);
    v49 = (v48 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v48);
    v50 = (v49 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v49);
    v51 = (v50 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v50);
    v52 = *((_DWORD *)qword_1164E0 + (unsigned __int8)v51) ^ (unsigned int)(v51 >> 8);
    v3 -= v9;
    v53 = ((v52 ^ v4[3] ^ v25) >> 8)
        ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)(v52 ^ *((_BYTE *)v4 + 24) ^ v25));
    v54 = (v53 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v53);
    v55 = (v54 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v54);
    v56 = (v55 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v55);
    v57 = (v56 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v56);
    v58 = (v57 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v57);
    v59 = (v58 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v58);
    v60 = *((_DWORD *)qword_1164E0 + (unsigned __int8)v59) ^ (unsigned int)(v59 >> 8) ^ v4[4] ^ v24;
    v61 = (v60 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v60);
    v62 = (v61 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v61);
    v63 = (v62 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v62);
    v64 = (v63 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v63);
    v65 = (v64 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v64);
    v66 = (v65 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v65);
    v67 = (v66 >> 8) ^ *((unsigned int *)qword_1164E0 + (unsigned __int8)v66);
    v5 = *((_DWORD *)qword_1164E0 + (unsigned __int8)v67) ^ (unsigned int)(v67 >> 8);
    v4 += 5;
    if ( v3 < 8 )
    {
LABEL_4:
      if ( !v3 )
        return v5 ^ 0xFFFFFFFF;
      goto LABEL_5;
    }
  }
  else if ( a3 < 8uLL )
  {
    goto LABEL_4;
  }
  v68 = v3 - 8;
  v69 = (v3 - 8) & 0xFFFFFFFFFFFFFFF8LL;
  v70 = (unsigned __int8 *)v4;
  do
  {
    v3 -= 8LL;
    v71 = (v5 >> 8) ^ *((unsigned int *)qword_1164E0 + (*v70 ^ (unsigned __int64)(unsigned __int8)v5));
    v72 = (v71 >> 8) ^ *((unsigned int *)qword_1164E0 + (v70[1] ^ (unsigned __int64)(unsigned __int8)v71));
    v73 = (v72 >> 8) ^ *((unsigned int *)qword_1164E0 + (v70[2] ^ (unsigned __int64)(unsigned __int8)v72));
    v74 = (v73 >> 8) ^ *((unsigned int *)qword_1164E0 + (v70[3] ^ (unsigned __int64)(unsigned __int8)v73));
    v75 = (v74 >> 8) ^ *((unsigned int *)qword_1164E0 + (v70[4] ^ (unsigned __int64)(unsigned __int8)v74));
    v76 = (v75 >> 8) ^ *((unsigned int *)qword_1164E0 + (v70[5] ^ (unsigned __int64)(unsigned __int8)v75));
    v77 = (v76 >> 8) ^ *((unsigned int *)qword_1164E0 + (v70[6] ^ (unsigned __int64)(unsigned __int8)v76));
    v5 = (v77 >> 8) ^ *((unsigned int *)qword_1164E0 + (v70[7] ^ (unsigned __int64)(unsigned __int8)v77));
    v70 += 8;
  }
  while ( v3 > 7 );
  v4 = (_QWORD *)((char *)v4 + v69 + 8);
  v3 = v68 - v69;
  if ( v68 == v69 )
    return v5 ^ 0xFFFFFFFF;
LABEL_5:
  if ( (v3 & 1) == 0 )
  {
    v6 = v3;
    if ( v3 == 1 )
      return v5 ^ 0xFFFFFFFF;
LABEL_19:
    v27 = 0;
    do
    {
      v28 = (v5 >> 8)
          ^ *((unsigned int *)qword_1164E0 + (*((unsigned __int8 *)v4 + v27) ^ (unsigned __int64)(unsigned __int8)v5));
      v5 = (v28 >> 8)
         ^ *((unsigned int *)qword_1164E0 + (*((unsigned __int8 *)v4 + v27 + 1) ^ (unsigned __int64)(unsigned __int8)v28));
      v27 += 2;
    }
    while ( v6 != v27 );
    return v5 ^ 0xFFFFFFFF;
  }
  v6 = v3 - 1;
  v26 = *(unsigned __int8 *)v4;
  v4 = (_QWORD *)((char *)v4 + 1);
  v5 = (v5 >> 8) ^ *((unsigned int *)qword_1164E0 + (v26 ^ (unsigned __int8)v5));
  if ( v3 != 1 )
    goto LABEL_19;
  return v5 ^ 0xFFFFFFFF;
}
// 1164E0: using guessed type __int64 qword_1164E0[128];
// 1168E0: using guessed type __int64 qword_1168E0[512];
