__int64 __fastcall sub_7E9000(__int64 a1, __int64 a2)
{
  int v2; // r8d
  __int64 result; // rax
  int v4; // r8d
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // esi
  unsigned int v8; // edx
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // esi
  int v14; // eax
  unsigned int v15; // edx
  int v16; // esi
  int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // edx
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // esi
  unsigned int v25; // edx
  int v26; // ecx
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v29; // edx
  int v30; // r8d
  unsigned int v31; // eax
  unsigned int v32; // r9d
  int v33; // r10d
  unsigned int v34; // r9d
  int v35; // r10d
  unsigned int v36; // eax
  int v37; // ecx
  unsigned int v38; // edx
  unsigned int v39; // eax
  int v40; // ecx
  unsigned int v41; // edx
  unsigned int v42; // eax
  int v43; // r8d

  v2 = **(_DWORD **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( (_DWORD)a2 == 2 )
  {
    v28 = ***(_DWORD ***)(a1 + 48);
    v29 = ***(_DWORD ***)(a1 + 56) + 11;
    v30 = (v2 - v28 - v29) ^ (v29 >> 13);
    v31 = (v28 - 1640531527 - v29 - v30) ^ (v30 << 8);
    v8 = (v29 - v30 - v31) ^ (v31 >> 13);
    v9 = (v30 - v31 - v8) ^ (v8 >> 12);
    v10 = v31 - v8 - v9;
    goto LABEL_6;
  }
  if ( (unsigned int)a2 > 2 )
  {
    if ( (_DWORD)a2 == 3 )
    {
      v14 = ***(_DWORD ***)(a1 + 56);
      v15 = ***(_DWORD ***)(a1 + 64) + 11;
      v16 = v14 - 1640531527;
      v17 = (***(_DWORD ***)(a1 + 48) - v14 - v15) ^ (v15 >> 13);
      v18 = (v16 - v15 - v17) ^ (v17 << 8);
      v19 = (v15 - v17 - v18) ^ (v18 >> 13);
      v20 = (v17 - v18 - v19) ^ (v19 >> 12);
      v21 = (v18 - v19 - v20) ^ (v20 << 16);
      v22 = (v19 - v20 - v21) ^ (v21 >> 5);
      v23 = (v20 - v21 - v22) ^ (v22 >> 3);
      v24 = (v21 - v22 - v23) ^ (v23 << 10);
      v25 = (v22 - v23 - v24) ^ (v24 >> 15);
      v26 = (v2 + v23 - v24 - v25) ^ (v25 >> 13);
      v27 = (v24 - v25 - v26) ^ (v26 << 8);
      v8 = (v25 - v26 - v27) ^ (v27 >> 13);
      v9 = (v26 - v27 - v8) ^ (v8 >> 12);
      v10 = v27 - v8 - v9;
      goto LABEL_6;
    }
    LODWORD(result) = 11;
    v32 = -1640531527;
    v33 = -1640531527;
    do
    {
      v34 = ***(_DWORD ***)(a1 + 8LL * (unsigned int)(a2 - 2) + 48) + v32;
      v35 = ***(_DWORD ***)(a1 + 8LL * (unsigned int)(a2 - 1) + 48) + v33;
      a2 = (unsigned int)(a2 - 3);
      v36 = ***(_DWORD ***)(a1 + 8 * a2 + 48) + result;
      v37 = (v35 - (v34 + v36)) ^ (v36 >> 13);
      v38 = (v34 - v36 - v37) ^ (v37 << 8);
      v39 = (v36 - v37 - v38) ^ (v38 >> 13);
      v40 = (v37 - v38 - v39) ^ (v39 >> 12);
      v41 = (v38 - v39 - v40) ^ (v40 << 16);
      v42 = (v39 - v40 - v41) ^ (v41 >> 5);
      v33 = (v40 - v41 - v42) ^ (v42 >> 3);
      v32 = (v41 - v42 - v33) ^ (v33 << 10);
      LODWORD(result) = (v32 >> 15) ^ (v42 - v33 - v32);
    }
    while ( (unsigned int)a2 > 2 );
    v43 = v33 + v2;
    if ( (_DWORD)a2 != 1 )
    {
      if ( (_DWORD)a2 != 2 )
      {
LABEL_17:
        v6 = (v43 - v32 - result) ^ ((unsigned int)result >> 13);
        v7 = (v32 - result - v6) ^ (v6 << 8);
        goto LABEL_5;
      }
      v32 += ***(_DWORD ***)(a1 + 56);
    }
    LODWORD(result) = ***(_DWORD ***)(a1 + 48) + result;
    goto LABEL_17;
  }
  result = 11;
  if ( (_DWORD)a2 )
  {
    v4 = v2 - 1640531527;
    v5 = ***(_DWORD ***)(a1 + 48);
    v6 = v4 - v5 - 11;
    v7 = (2 * v5 - v4) ^ (v6 << 8);
LABEL_5:
    v8 = (result - v6 - v7) ^ (v7 >> 13);
    v9 = (v6 - v7 - v8) ^ (v8 >> 12);
    v10 = v7 - v8 - v9;
LABEL_6:
    v11 = v10 ^ (v9 << 16);
    v12 = (v8 - v9 - v11) ^ (v11 >> 5);
    v13 = (v9 - v11 - v12) ^ (v12 >> 3);
    return (v12 - v13 - ((v11 - v12 - v13) ^ (v13 << 10))) ^ (((v11 - v12 - v13) ^ (v13 << 10)) >> 15);
  }
  return result;
}

