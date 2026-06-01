__int64 __fastcall sub_BDCBD0(_QWORD *a1, unsigned int a2)
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
  int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // esi
  int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // ecx
  unsigned int v20; // eax
  unsigned int v21; // edx
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // edx
  unsigned int v25; // esi
  int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r10
  unsigned int v33; // r8d
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  int v37; // ecx
  unsigned int v38; // esi

  if ( a2 == 2 )
  {
    v26 = *(_DWORD *)(**(_QWORD **)(a1[15] + 8LL) + 12LL);
    v24 = *(_DWORD *)(**(_QWORD **)(a1[16] + 8LL) + 12LL) + 11;
    v4 = -(v24 + v26) ^ (v24 >> 13);
    v25 = v26 - 1640531527 - v24 - v4;
    goto LABEL_9;
  }
  if ( a2 > 2 )
  {
    if ( a2 == 3 )
    {
      v13 = *(_DWORD *)(**(_QWORD **)(a1[16] + 8LL) + 12LL);
      v14 = *(_DWORD *)(**(_QWORD **)(a1[17] + 8LL) + 12LL) + 11;
      v15 = v13 - 1640531527 - v14;
      v16 = (*(_DWORD *)(**(_QWORD **)(a1[15] + 8LL) + 12LL) - v13 - v14) ^ (v14 >> 13);
      v17 = (v15 - v16) ^ (v16 << 8);
      v18 = (v14 - v16 - v17) ^ (v17 >> 13);
      v19 = (v16 - v17 - v18) ^ (v18 >> 12);
      v20 = (v17 - v18 - v19) ^ (v19 << 16);
      v21 = (v18 - v19 - v20) ^ (v20 >> 5);
      v22 = (v19 - v20 - v21) ^ (v21 >> 3);
      v23 = (v20 - v21 - v22) ^ (v22 << 10);
      v24 = (v21 - v22 - v23) ^ (v23 >> 15);
      v4 = (v22 - v23 - v24) ^ (v24 >> 13);
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
      v30 = a2;
      v31 = a2 - 2;
      v32 = a2 - 1;
      a2 -= 3;
      v33 = *(_DWORD *)(**(_QWORD **)(a1[v32 + 14] + 8LL) + 12LL) + v28;
      v34 = *(_DWORD *)(**(_QWORD **)(a1[v31 + 14] + 8LL) + 12LL) + v27;
      LODWORD(v31) = (*(_DWORD *)(**(_QWORD **)(a1[v30 + 14] + 8LL) + 12LL) + v29 - (v33 + v34)) ^ (v34 >> 13);
      LODWORD(v30) = (v33 - v34 - v31) ^ ((_DWORD)v31 << 8);
      v35 = (v34 - v31 - v30) ^ ((unsigned int)v30 >> 13);
      LODWORD(v31) = (v31 - v30 - v35) ^ (v35 >> 12);
      LODWORD(v30) = (v30 - v35 - v31) ^ ((_DWORD)v31 << 16);
      v36 = (v35 - v31 - v30) ^ ((unsigned int)v30 >> 5);
      v29 = (v31 - v30 - v36) ^ (v36 >> 3);
      v28 = (v30 - v36 - v29) ^ (v29 << 10);
      v27 = (v28 >> 15) ^ (v36 - v29 - v28);
    }
    while ( a2 > 2 );
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
      {
LABEL_18:
        v37 = (v29 - (v28 + v27)) ^ (v27 >> 13);
        v38 = (v28 - v27 - v37) ^ (v37 << 8);
        v7 = (v27 - v37 - v38) ^ (v38 >> 13);
        v8 = (v37 - v38 - v7) ^ (v7 >> 12);
        v9 = v38 - v7 - v8;
        goto LABEL_6;
      }
      v28 += *(_DWORD *)(**(_QWORD **)(a1[16] + 8LL) + 12LL);
    }
    v27 += *(_DWORD *)(**(_QWORD **)(a1[15] + 8LL) + 12LL);
    goto LABEL_18;
  }
  result = 11;
  if ( a2 )
  {
    v3 = *(_DWORD *)(**(_QWORD **)(a1[15] + 8LL) + 12LL);
    v4 = -1640531538 - v3;
    v5 = (2 * v3 + 1640531527) ^ ((-1640531538 - v3) << 8);
    v6 = v3 + 1640531549;
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

