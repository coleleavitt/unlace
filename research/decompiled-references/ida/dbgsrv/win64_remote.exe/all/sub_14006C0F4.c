/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14006C0F4
// Address: 0x000000014006C0F4

//----- (000000014006C0F4) ----------------------------------------------------
__int64 __fastcall sub_14006C0F4(__int64 a1, __int64 a2)
{
  _BYTE *v2; // r8
  __int64 v4; // rcx
  _BYTE *v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE *v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int *v11; // r8
  _BYTE *v12; // r10
  bool v13; // zf
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r8
  _BYTE *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rax
  _DWORD *v25; // r10
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  _BYTE *v30; // rdx
  __int64 v31; // rcx
  unsigned int *v32; // r10

  v2 = *(_BYTE **)(a1 + 16);
  *(_QWORD *)(a1 + 8) = v2;
  v4 = *v2 & 0xF;
  v5 = &v2[-*((char *)qword_1400AE700 + v4)];
  *(_DWORD *)(a1 + 24) = *((_DWORD *)v5 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v4);
  *(_QWORD *)(a1 + 8) = v5;
  v6 = *v5 & 0xF;
  v7 = *((char *)qword_1400AE700 + v6);
  LOBYTE(v6) = *((_BYTE *)&qword_1400AE700[2] + v6);
  v8 = &v5[-v7];
  LODWORD(v7) = *((_DWORD *)v8 - 1);
  *(_QWORD *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 28) = (unsigned int)v7 >> v6;
  v9 = *v8 & 0xF;
  v10 = *((char *)qword_1400AE700 + v9);
  LOBYTE(v9) = *((_BYTE *)&qword_1400AE700[2] + v9);
  v11 = (unsigned int *)&v8[-v10];
  LODWORD(v10) = *(v11 - 1);
  v12 = v11 + 1;
  *(_QWORD *)(a1 + 8) = v11;
  v13 = *(_DWORD *)(a2 + 8) == 0;
  *(_DWORD *)(a1 + 32) = (unsigned int)v10 >> v9;
  result = *v11;
  *(_QWORD *)(a1 + 8) = v11 + 1;
  *(_DWORD *)(a1 + 36) = result;
  if ( !v13 )
  {
    v15 = *(unsigned int *)(a2 + 8);
    do
    {
      v16 = *v12 & 0xF;
      v17 = *((char *)qword_1400AE700 + v16);
      LOBYTE(v16) = *((_BYTE *)&qword_1400AE700[2] + v16);
      v18 = *(_DWORD *)&v12[-v17 - 4];
      *(_QWORD *)(a1 + 8) = &v12[-v17];
      *(_DWORD *)(a1 + 24) = v18 >> v16;
      v19 = v12[-v17] & 0xF;
      v20 = *((char *)qword_1400AE700 + v19);
      LOBYTE(v19) = *((_BYTE *)&qword_1400AE700[2] + v19);
      v21 = &v12[-v20 - v17];
      v22 = *((_DWORD *)v21 - 1);
      *(_QWORD *)(a1 + 8) = v21;
      *(_DWORD *)(a1 + 28) = v22 >> v19;
      v23 = *v21 & 0xF;
      v24 = *((char *)qword_1400AE700 + v23);
      LOBYTE(v23) = *((_BYTE *)&qword_1400AE700[2] + v23);
      v25 = &v12[-v24 - v20 - v17];
      LODWORD(v24) = *(v25 - 1);
      *(_QWORD *)(a1 + 8) = v25;
      *(_DWORD *)(a1 + 32) = (unsigned int)v24 >> v23;
      LODWORD(v24) = *v25++;
      *(_QWORD *)(a1 + 8) = v25;
      *(_DWORD *)(a1 + 36) = v24;
      v26 = *(_BYTE *)v25 & 0xF;
      v27 = *((char *)qword_1400AE700 + v26);
      LOBYTE(v26) = *((_BYTE *)&qword_1400AE700[2] + v26);
      LODWORD(v24) = *(_DWORD *)((char *)v25 - v27 - 4);
      *(_QWORD *)(a1 + 8) = (char *)v25 - v27;
      *(_DWORD *)(a1 + 24) = (unsigned int)v24 >> v26;
      v28 = *((_BYTE *)v25 - v27) & 0xF;
      v29 = *((char *)qword_1400AE700 + v28);
      v30 = (char *)v25 - v29 - v27;
      LODWORD(v24) = *((_DWORD *)v30 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v28);
      *(_QWORD *)(a1 + 8) = v30;
      *(_DWORD *)(a1 + 28) = v24;
      v31 = *v30 & 0xF;
      v32 = (_DWORD *)((char *)v25 + -v29 - *((char *)qword_1400AE700 + v31) - v27);
      LODWORD(v24) = *(v32 - 1) >> *((_BYTE *)&qword_1400AE700[2] + v31);
      *(_QWORD *)(a1 + 8) = v32;
      *(_DWORD *)(a1 + 32) = v24;
      result = *v32;
      v12 = v32 + 1;
      *(_QWORD *)(a1 + 8) = v12;
      *(_DWORD *)(a1 + 36) = result;
      --v15;
    }
    while ( v15 );
  }
  return result;
}
// 1400AE700: using guessed type __int64 qword_1400AE700[4];
