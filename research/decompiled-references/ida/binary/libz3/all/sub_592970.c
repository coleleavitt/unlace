__int64 __fastcall sub_592970(__int64 **a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  int v4; // ecx
  unsigned int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // edx
  int v8; // ecx
  unsigned int v9; // esi
  unsigned int v10; // eax
  unsigned int v11; // edx
  int v12; // esi
  __int64 *v13; // rax
  int v14; // ecx
  __int64 v15; // rdi
  unsigned int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // edx
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // esi
  unsigned int v22; // edx
  int v23; // esi
  int v24; // eax
  __int64 *v25; // rdi
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // r8d
  __int64 v29; // rcx
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // eax
  unsigned int v35; // edx
  int v36; // ecx
  unsigned int v37; // esi

  if ( a2 == 2 )
  {
    v24 = *(_DWORD *)*a1 - 1640531527;
    v22 = (*a1)[1] + 11;
    v4 = (-1640531510 - (v24 + v22)) ^ (v22 >> 13);
    v23 = v24 - v22 - v4;
    goto LABEL_9;
  }
  if ( a2 <= 2 )
  {
    result = 11;
    if ( !a2 )
      return result;
    v3 = **a1;
    v4 = -1640531521 - v3;
    v5 = (2 * v3 + 1640531510) ^ ((-1640531521 - (_DWORD)v3) << 8);
    v6 = v3 + 1640531532;
    goto LABEL_5;
  }
  if ( a2 != 3 )
  {
    v25 = *a1;
    v26 = 11;
    v27 = -1640531527;
    v28 = -1640531527;
    do
    {
      v29 = a2 - 1;
      v30 = LODWORD(v25[a2 - 2]) + v27;
      v31 = LODWORD(v25[a2 - 3]) + v26;
      a2 -= 3;
      LODWORD(v29) = (LODWORD(v25[v29]) + v28 - (v30 + v31)) ^ (v31 >> 13);
      v32 = (v30 - v31 - v29) ^ ((_DWORD)v29 << 8);
      v33 = (v31 - v29 - v32) ^ (v32 >> 13);
      LODWORD(v29) = (v29 - v32 - v33) ^ (v33 >> 12);
      v34 = (v32 - v33 - v29) ^ ((_DWORD)v29 << 16);
      v35 = (v33 - v29 - v34) ^ (v34 >> 5);
      v28 = (v29 - v34 - v35) ^ (v35 >> 3);
      v27 = (v34 - v35 - v28) ^ (v28 << 10);
      v26 = (v27 >> 15) ^ (v35 - v28 - v27);
    }
    while ( a2 > 2 );
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
      {
LABEL_17:
        v36 = (v26 >> 13) ^ (v28 + 17 - v27 - v26);
        v37 = (v27 - v26 - v36) ^ (v36 << 8);
        v7 = (v37 >> 13) ^ (v26 - v36 - v37);
        v8 = (v36 - v37 - v7) ^ (v7 >> 12);
        v9 = v37 - v7 - v8;
        goto LABEL_6;
      }
      v27 += *((_DWORD *)v25 + 2);
    }
    v26 += *(_DWORD *)v25;
    goto LABEL_17;
  }
  v13 = *a1;
  v14 = *((_DWORD *)*a1 + 4);
  v15 = (*a1)[1];
  v16 = v14 + 11;
  LODWORD(v13) = (*v13 - v15 - v16) ^ (v16 >> 13);
  v17 = (v15 - 1640531527 - (v14 + 11) - (_DWORD)v13) ^ ((_DWORD)v13 << 8);
  v18 = (v16 - (_DWORD)v13 - v17) ^ (v17 >> 13);
  LODWORD(v13) = ((_DWORD)v13 - v17 - v18) ^ (v18 >> 12);
  v19 = (v17 - v18 - (_DWORD)v13) ^ ((_DWORD)v13 << 16);
  v20 = (v18 - (_DWORD)v13 - v19) ^ (v19 >> 5);
  LODWORD(v13) = ((_DWORD)v13 - v19 - v20) ^ (v20 >> 3);
  v21 = (v19 - v20 - (_DWORD)v13) ^ ((_DWORD)v13 << 10);
  v22 = (v20 - (_DWORD)v13 - v21) ^ (v21 >> 15);
  v4 = ((_DWORD)v13 + 17 - v21 - v22) ^ (v22 >> 13);
  v23 = v21 - v22 - v4;
LABEL_9:
  v5 = v23 ^ (v4 << 8);
  v6 = v22 - v4;
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

