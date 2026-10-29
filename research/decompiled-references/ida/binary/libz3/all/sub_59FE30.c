__int64 __fastcall sub_59FE30(__int64 a1, __int64 a2)
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
  _QWORD *v13; // rax
  int v14; // edi
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // edx
  unsigned int v20; // esi
  unsigned int v21; // edx
  unsigned int v22; // esi
  int v23; // eax
  _QWORD *v24; // rdi
  unsigned int v25; // edx
  unsigned int v26; // eax
  int v27; // r8d
  int v28; // r8d
  unsigned int v29; // eax
  unsigned int v30; // edx
  int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // edx
  int v34; // ecx
  unsigned int v35; // eax
  unsigned int v36; // edx
  int v37; // ecx
  unsigned int v38; // esi

  if ( (_DWORD)a2 == 2 )
  {
    v23 = *(_DWORD *)(**(_QWORD **)a1 + 12LL) - 1640531527;
    v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 12LL) + 11;
    v4 = (-1640531510 - (v23 + v21)) ^ (v21 >> 13);
    v22 = v23 - v21 - v4;
    goto LABEL_9;
  }
  if ( (unsigned int)a2 <= 2 )
  {
    result = 11;
    if ( !(_DWORD)a2 )
      return result;
    v3 = *(_DWORD *)(**(_QWORD **)a1 + 12LL);
    v4 = -1640531521 - v3;
    v5 = (2 * v3 + 1640531510) ^ ((-1640531521 - v3) << 8);
    v6 = v3 + 1640531532;
    goto LABEL_5;
  }
  if ( (_DWORD)a2 != 3 )
  {
    v24 = *(_QWORD **)a1;
    v25 = 11;
    v26 = -1640531527;
    v27 = -1640531527;
    do
    {
      v28 = *(_DWORD *)(v24[(unsigned int)(a2 - 1)] + 12LL) + v27;
      v29 = *(_DWORD *)(v24[(unsigned int)(a2 - 2)] + 12LL) + v26;
      a2 = (unsigned int)(a2 - 3);
      v30 = *(_DWORD *)(v24[a2] + 12LL) + v25;
      v31 = (v28 - (v29 + v30)) ^ (v30 >> 13);
      v32 = (v29 - v30 - v31) ^ (v31 << 8);
      v33 = (v30 - v31 - v32) ^ (v32 >> 13);
      v34 = (v31 - v32 - v33) ^ (v33 >> 12);
      v35 = (v32 - v33 - v34) ^ (v34 << 16);
      v36 = (v33 - v34 - v35) ^ (v35 >> 5);
      v27 = (v34 - v35 - v36) ^ (v36 >> 3);
      v26 = (v35 - v36 - v27) ^ (v27 << 10);
      v25 = (v26 >> 15) ^ (v36 - v27 - v26);
    }
    while ( (unsigned int)a2 > 2 );
    if ( (_DWORD)a2 != 1 )
    {
      if ( (_DWORD)a2 != 2 )
      {
LABEL_17:
        v37 = (v25 >> 13) ^ (v27 + 17 - v26 - v25);
        v38 = (v26 - v25 - v37) ^ (v37 << 8);
        v7 = (v38 >> 13) ^ (v25 - v37 - v38);
        v8 = (v37 - v38 - v7) ^ (v7 >> 12);
        v9 = v38 - v7 - v8;
        goto LABEL_6;
      }
      v26 += *(_DWORD *)(v24[1] + 12LL);
    }
    v25 += *(_DWORD *)(*v24 + 12LL);
    goto LABEL_17;
  }
  v13 = *(_QWORD **)a1;
  v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 12LL);
  v15 = *(_DWORD *)(v13[2] + 12LL) + 11;
  LODWORD(v13) = (*(_DWORD *)(*v13 + 12LL) - v14 - v15) ^ (v15 >> 13);
  v16 = (v14 - 1640531527 - v15 - (_DWORD)v13) ^ ((_DWORD)v13 << 8);
  v17 = (v15 - (_DWORD)v13 - v16) ^ (v16 >> 13);
  LODWORD(v13) = ((_DWORD)v13 - v16 - v17) ^ (v17 >> 12);
  v18 = (v16 - v17 - (_DWORD)v13) ^ ((_DWORD)v13 << 16);
  v19 = (v17 - (_DWORD)v13 - v18) ^ (v18 >> 5);
  LODWORD(v13) = ((_DWORD)v13 - v18 - v19) ^ (v19 >> 3);
  v20 = (v18 - v19 - (_DWORD)v13) ^ ((_DWORD)v13 << 10);
  v21 = (v19 - (_DWORD)v13 - v20) ^ (v20 >> 15);
  v4 = ((_DWORD)v13 + 17 - v20 - v21) ^ (v21 >> 13);
  v22 = v20 - v21 - v4;
LABEL_9:
  v5 = v22 ^ (v4 << 8);
  v6 = v21 - v4;
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

