__int64 __fastcall sub_DE8BC0(__int64 a1)
{
  _QWORD *v1; // r8
  __int64 v2; // rsi
  int v3; // edi
  int v4; // edx
  int v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // esi
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
  int v27; // eax
  unsigned int v28; // edx
  int v29; // edi
  unsigned int v30; // eax
  unsigned int v31; // edx
  int v32; // r9d
  __int64 v33; // r10
  unsigned int v34; // edx
  unsigned int v35; // eax
  int v36; // ecx
  unsigned int v37; // edx
  unsigned int v38; // eax
  int v39; // ecx
  unsigned int v40; // edx
  unsigned int v41; // eax
  int v42; // edi
  int v43; // ecx
  unsigned int v44; // esi

  v1 = *(_QWORD **)(a1 + 40);
  if ( !v1 )
    return 11;
  LODWORD(v2) = *((_DWORD *)v1 - 1);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  if ( (_DWORD)v2 == 2 )
  {
    v27 = *(_DWORD *)(*v1 + 8LL);
    v28 = *(_DWORD *)(v1[1] + 8LL) + 11;
    v29 = (v3 - v27 - v28) ^ (v28 >> 13);
    v6 = (v27 - 1640531527 - v28 - v29) ^ (v29 << 8);
    v7 = (v28 - v29 - v6) ^ (v6 >> 13);
    v8 = (v29 - v6 - v7) ^ (v7 >> 12);
    goto LABEL_6;
  }
  if ( (unsigned int)v2 > 2 )
  {
    if ( (_DWORD)v2 == 3 )
    {
      v14 = *(_DWORD *)(v1[1] + 8LL);
      v15 = *(_DWORD *)(v1[2] + 8LL) + 11;
      v16 = v14 - 1640531527;
      v17 = (*(_DWORD *)(*v1 + 8LL) - v14 - v15) ^ (v15 >> 13);
      v18 = (v16 - v15 - v17) ^ (v17 << 8);
      v19 = (v15 - v17 - v18) ^ (v18 >> 13);
      v20 = (v17 - v18 - v19) ^ (v19 >> 12);
      v21 = (v18 - v19 - v20) ^ (v20 << 16);
      v22 = (v19 - v20 - v21) ^ (v21 >> 5);
      v23 = (v20 - v21 - v22) ^ (v22 >> 3);
      v24 = (v21 - v22 - v23) ^ (v23 << 10);
      v25 = (v22 - v23 - v24) ^ (v24 >> 15);
      v26 = (v3 + v23 - v24 - v25) ^ (v25 >> 13);
      v6 = (v24 - v25 - v26) ^ (v26 << 8);
      v7 = (v25 - v26 - v6) ^ (v6 >> 13);
      v8 = (v26 - v6 - v7) ^ (v7 >> 12);
      goto LABEL_6;
    }
    v30 = 11;
    v31 = -1640531527;
    v32 = -1640531527;
    do
    {
      v33 = v1[(unsigned int)(v2 - 1)];
      v34 = *(_DWORD *)(v1[(unsigned int)(v2 - 2)] + 8LL) + v31;
      v2 = (unsigned int)(v2 - 3);
      v35 = *(_DWORD *)(v1[v2] + 8LL) + v30;
      v36 = (*(_DWORD *)(v33 + 8) + v32 - (v34 + v35)) ^ (v35 >> 13);
      v37 = (v34 - v35 - v36) ^ (v36 << 8);
      v38 = (v35 - v36 - v37) ^ (v37 >> 13);
      v39 = (v36 - v37 - v38) ^ (v38 >> 12);
      v40 = (v37 - v38 - v39) ^ (v39 << 16);
      v41 = (v38 - v39 - v40) ^ (v40 >> 5);
      v32 = (v39 - v40 - v41) ^ (v41 >> 3);
      v31 = (v40 - v41 - v32) ^ (v32 << 10);
      v30 = (v31 >> 15) ^ (v41 - v32 - v31);
    }
    while ( (unsigned int)v2 > 2 );
    v42 = v32 + v3;
    if ( (_DWORD)v2 != 1 )
    {
      if ( (_DWORD)v2 != 2 )
      {
LABEL_18:
        v43 = (v42 - v31 - v30) ^ (v30 >> 13);
        v44 = (v31 - v30 - v43) ^ (v43 << 8);
        v7 = (v30 - v43 - v44) ^ (v44 >> 13);
        v8 = (v43 - v44 - v7) ^ (v7 >> 12);
        v9 = v44 - v7 - v8;
        goto LABEL_7;
      }
      v31 += *(_DWORD *)(v1[1] + 8LL);
    }
    v30 += *(_DWORD *)(*v1 + 8LL);
    goto LABEL_18;
  }
  if ( (_DWORD)v2 )
  {
    v4 = *(_DWORD *)(*v1 + 8LL);
    v5 = v3 - 1640531538 - v4;
    v6 = (1640531527 - v3 + 2 * v4) ^ (v5 << 8);
    v7 = (v4 + 11 - (v3 - 1640531538) - v6) ^ (v6 >> 13);
    v8 = (v5 - v6 - v7) ^ (v7 >> 12);
LABEL_6:
    v9 = v6 - v7 - v8;
LABEL_7:
    v10 = v9 ^ (v8 << 16);
    v11 = (v7 - v8 - v10) ^ (v10 >> 5);
    v12 = (v8 - v10 - v11) ^ (v11 >> 3);
    return (v11 - v12 - ((v10 - v11 - v12) ^ (v12 << 10))) ^ (((v10 - v11 - v12) ^ (v12 << 10)) >> 15);
  }
  return 11;
}

