__int64 __fastcall sub_5963C0(unsigned __int8 **a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v9; // edx
  int v10; // ecx
  unsigned __int8 *v11; // rax
  int v12; // edi
  int v13; // ecx
  int v14; // edx
  int v15; // esi
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // esi
  unsigned int v19; // ecx
  unsigned int v20; // esi
  unsigned int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // edx
  int v24; // ecx
  unsigned int v25; // esi
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // esi
  int v29; // edx
  int v30; // ecx
  int v31; // esi
  int v32; // eax
  unsigned __int8 *v33; // rdi
  unsigned int v34; // r10d
  unsigned int v35; // r8d
  int v36; // ecx
  int v37; // r9d
  int v38; // edx
  int v39; // edx
  unsigned int v40; // eax
  int v41; // ecx
  unsigned int v42; // edx
  unsigned int v43; // eax
  int v44; // ecx
  unsigned int v45; // edx
  unsigned int v46; // eax
  int v47; // ecx
  int v48; // ecx
  unsigned int v49; // esi

  if ( (_DWORD)a2 == 2 )
  {
    v29 = **a1;
    v30 = v29 - 1640531527;
    v31 = (*a1)[1] + 11;
    v29 -= 17;
    v32 = -1640531510 - (v30 + v31);
    v5 = (v30 + v29) ^ (v32 << 8);
    v6 = (v29 + 2 * v31 - v5) ^ 0x4F1BB;
    v7 = (v32 - v5 - v6) ^ 0x61CC7;
LABEL_5:
    v8 = (v5 - v6 - v7) ^ (v7 << 16);
    v9 = (v8 >> 5) ^ (v6 - v7 - v8);
    v10 = (v7 - v8 - v9) ^ (v9 >> 3);
    return (v9 - v10 - ((v8 - v9 - v10) ^ (v10 << 10))) ^ (((v8 - v9 - v10) ^ (v10 << 10)) >> 15);
  }
  if ( (unsigned int)a2 <= 2 )
  {
    result = 11;
    if ( !(_DWORD)a2 )
      return result;
    v3 = **a1;
    v4 = -1640531521 - v3;
    v5 = (2 * v3 + 1640531510) ^ ((-1640531521 - v3) << 8);
    v6 = (v3 + 1640531532 - v5) ^ 0x2B589;
    v7 = (v4 - v5 - v6) ^ 0xB15F;
    goto LABEL_5;
  }
  if ( (_DWORD)a2 != 3 )
  {
    v33 = *a1;
    v34 = 11;
    v35 = -1640531527;
    v36 = -1640531527;
    do
    {
      v37 = v33[(unsigned int)(a2 - 1)];
      v38 = v33[(unsigned int)(a2 - 2)];
      a2 = (unsigned int)(a2 - 3);
      v39 = v35 + v38;
      v40 = v34 + v33[a2];
      v41 = (v36 + v37 - (v39 + v40)) ^ (v40 >> 13);
      v42 = (v39 - v40 - v41) ^ (v41 << 8);
      v43 = (v40 - v41 - v42) ^ (v42 >> 13);
      v44 = (v41 - v42 - v43) ^ (v43 >> 12);
      v45 = (v42 - v43 - v44) ^ (v44 << 16);
      v46 = (v43 - v44 - v45) ^ (v45 >> 5);
      v36 = (v46 >> 3) ^ (v44 - v45 - v46);
      v35 = (v45 - v46 - v36) ^ (v36 << 10);
      v34 = (v46 - v36 - v35) ^ (v35 >> 15);
    }
    while ( (unsigned int)a2 > 2 );
    v47 = v36 + 17;
    if ( (_DWORD)a2 != 1 )
    {
      if ( (_DWORD)a2 != 2 )
      {
LABEL_16:
        v48 = (v34 >> 13) ^ (v47 - v35 - v34);
        v49 = (v35 - v34 - v48) ^ (v48 << 8);
        v23 = (v34 - v48 - v49) ^ (v49 >> 13);
        v24 = (v48 - v49 - v23) ^ (v23 >> 12);
        v25 = v49 - v23 - v24;
        goto LABEL_8;
      }
      v35 += v33[1];
    }
    v34 += *v33;
    goto LABEL_16;
  }
  v11 = *a1;
  v12 = **a1;
  v13 = v11[1];
  v14 = v11[2] + 11;
  v15 = v13 - v12;
  LODWORD(v11) = v12 - v13 - v14;
  v16 = (v13 + v13 - v12 - 1640531527) ^ ((_DWORD)v11 << 8);
  v17 = (v15 + 2 * v14 - v16) ^ 0x30E44;
  LODWORD(v11) = ((_DWORD)v11 - v16 - v17) ^ 0x9E347;
  v18 = (v16 - v17 - (_DWORD)v11) ^ ((_DWORD)v11 << 16);
  v19 = (v17 - (_DWORD)v11 - v18) ^ (v18 >> 5);
  LODWORD(v11) = (v19 >> 3) ^ ((_DWORD)v11 - v18 - v19);
  v20 = (v18 - v19 - (_DWORD)v11) ^ ((_DWORD)v11 << 10);
  v21 = (v19 - (_DWORD)v11 - v20) ^ (v20 >> 15);
  v22 = ((_DWORD)v11 + 17 - v20 - v21) ^ (v21 >> 13);
  LODWORD(v11) = (v20 - v21 - v22) ^ (v22 << 8);
  v23 = (v21 - v22 - (_DWORD)v11) ^ ((unsigned int)v11 >> 13);
  v24 = (v22 - (_DWORD)v11 - v23) ^ (v23 >> 12);
  v25 = (_DWORD)v11 - v23 - v24;
LABEL_8:
  v26 = v25 ^ (v24 << 16);
  v27 = (v23 - v24 - v26) ^ (v26 >> 5);
  v28 = (v24 - v26 - v27) ^ (v27 >> 3);
  return (v27 - v28 - ((v26 - v27 - v28) ^ (v28 << 10))) ^ (((v26 - v27 - v28) ^ (v28 << 10)) >> 15);
}

