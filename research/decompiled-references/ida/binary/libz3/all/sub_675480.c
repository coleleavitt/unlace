__int64 __fastcall sub_675480(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // esi
  int v13; // eax
  unsigned int v14; // edx
  int v15; // esi
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edx
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // esi
  unsigned int v24; // edx
  unsigned int v25; // esi
  int v26; // eax
  unsigned int v27; // edx
  unsigned int v28; // eax
  int v29; // r8d
  int v30; // r8d
  unsigned int v31; // eax
  unsigned int v32; // edx
  int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // edx
  int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // ecx
  unsigned int v40; // esi

  if ( (_DWORD)a2 == 2 )
  {
    v26 = *(_DWORD *)(*a1 + 12LL) - 1640531527;
    v24 = *(_DWORD *)(a1[1] + 12LL) + 11;
    v4 = (-1640531513 - (v26 + v24)) ^ (v24 >> 13);
    v25 = v26 - v24 - v4;
    goto LABEL_9;
  }
  if ( (unsigned int)a2 > 2 )
  {
    if ( (_DWORD)a2 == 3 )
    {
      v13 = *(_DWORD *)(a1[1] + 12LL);
      v14 = *(_DWORD *)(a1[2] + 12LL) + 11;
      v15 = v13 - 1640531527;
      v16 = (*(_DWORD *)(*a1 + 12LL) - v13 - v14) ^ (v14 >> 13);
      v17 = (v15 - v14 - v16) ^ (v16 << 8);
      v18 = (v14 - v16 - v17) ^ (v17 >> 13);
      v19 = (v16 - v17 - v18) ^ (v18 >> 12);
      v20 = (v17 - v18 - v19) ^ (v19 << 16);
      v21 = (v18 - v19 - v20) ^ (v20 >> 5);
      v22 = (v19 - v20 - v21) ^ (v21 >> 3);
      v23 = (v20 - v21 - v22) ^ (v22 << 10);
      v24 = (v21 - v22 - v23) ^ (v23 >> 15);
      v4 = (v22 + 14 - v23 - v24) ^ (v24 >> 13);
      v25 = v23 - v24 - v4;
LABEL_9:
      v5 = v25 ^ (v4 << 8);
      v6 = v24 - v4;
      goto LABEL_5;
    }
    v27 = 11;
    v28 = -1640531527;
    v29 = -1640531527;
    do
    {
      v30 = *(_DWORD *)(a1[(unsigned int)(a2 - 1)] + 12LL) + v29;
      v31 = *(_DWORD *)(a1[(unsigned int)(a2 - 2)] + 12LL) + v28;
      a2 = (unsigned int)(a2 - 3);
      v32 = *(_DWORD *)(a1[a2] + 12LL) + v27;
      v33 = (v30 - (v31 + v32)) ^ (v32 >> 13);
      v34 = (v31 - v32 - v33) ^ (v33 << 8);
      v35 = (v32 - v33 - v34) ^ (v34 >> 13);
      v36 = (v33 - v34 - v35) ^ (v35 >> 12);
      v37 = (v34 - v35 - v36) ^ (v36 << 16);
      v38 = (v35 - v36 - v37) ^ (v37 >> 5);
      v29 = (v36 - v37 - v38) ^ (v38 >> 3);
      v28 = (v37 - v38 - v29) ^ (v29 << 10);
      v27 = (v28 >> 15) ^ (v38 - v29 - v28);
    }
    while ( (unsigned int)a2 > 2 );
    if ( (_DWORD)a2 != 1 )
    {
      if ( (_DWORD)a2 != 2 )
      {
LABEL_18:
        v39 = (v27 >> 13) ^ (v29 + 14 - v28 - v27);
        v40 = (v28 - v27 - v39) ^ (v39 << 8);
        v7 = (v40 >> 13) ^ (v27 - v39 - v40);
        v8 = (v39 - v40 - v7) ^ (v7 >> 12);
        v9 = v40 - v7 - v8;
        goto LABEL_6;
      }
      v28 += *(_DWORD *)(a1[1] + 12LL);
    }
    v27 += *(_DWORD *)(*a1 + 12LL);
    goto LABEL_18;
  }
  result = 11;
  if ( (_DWORD)a2 )
  {
    v3 = *(_DWORD *)(*a1 + 12LL);
    v4 = -1640531524 - v3;
    v5 = (2 * v3 + 1640531513) ^ ((-1640531524 - v3) << 8);
    v6 = v3 + 1640531535;
LABEL_5:
    v7 = (v6 - v5) ^ (v5 >> 13);
    v8 = (v4 - v5 - v7) ^ (v7 >> 12);
    v9 = v5 - v7 - v8;
LABEL_6:
    v10 = v9 ^ (v8 << 16);
    v11 = (v7 - v8 - v10) ^ (v10 >> 5);
    v12 = (v8 - v10 - v11) ^ (v11 >> 3);
    return (v11 - v12 - ((v10 - v11 - v12) ^ (v12 << 10))) ^ (((v10 - v11 - v12) ^ (v12 << 10)) >> 15);
  }
  return result;
}

