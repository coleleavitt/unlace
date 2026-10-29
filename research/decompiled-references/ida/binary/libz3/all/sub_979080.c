__int64 __fastcall sub_979080(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  __int64 result; // rax
  unsigned int v4; // r8d
  int v5; // r10d
  unsigned int i; // eax
  unsigned int v7; // r8d
  int v8; // r10d
  unsigned int v9; // eax
  int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // eax
  int v17; // edx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  int v20; // edx
  unsigned int v21; // ecx
  unsigned int v22; // eax
  int v23; // edx
  int v24; // ecx
  unsigned int v25; // edx
  unsigned int v26; // eax
  int v27; // ecx
  unsigned int v28; // edx
  unsigned int v29; // eax
  int v30; // ecx

  v2 = a2;
  result = 628119524;
  if ( (*(_BYTE *)(a2 + 44) & 8) == 0 )
  {
    v4 = -1640531527;
    v5 = -1640531527;
    LODWORD(a2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
    for ( i = 11; (unsigned int)a2 > 2; i = (v4 >> 15) ^ (v15 - v5 - v4) )
    {
      v7 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v2 + 8LL * (unsigned int)(a2 - 2) + 112) + 8LL) + 12LL) + v4;
      v8 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v2 + 8LL * (unsigned int)(a2 - 1) + 112) + 8LL) + 12LL) + v5;
      a2 = (unsigned int)(a2 - 3);
      v9 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v2 + 8 * a2 + 112) + 8LL) + 12LL) + i;
      v10 = (v8 - (v7 + v9)) ^ (v9 >> 13);
      v11 = (v7 - v9 - v10) ^ (v10 << 8);
      v12 = (v9 - v10 - v11) ^ (v11 >> 13);
      v13 = (v10 - v11 - v12) ^ (v12 >> 12);
      v14 = (v11 - v12 - v13) ^ (v13 << 16);
      v15 = (v12 - v13 - v14) ^ (v14 >> 5);
      v5 = (v13 - v14 - v15) ^ (v15 >> 3);
      v4 = (v14 - v15 - v5) ^ (v5 << 10);
    }
    if ( (_DWORD)a2 != 1 )
    {
      if ( (_DWORD)a2 != 2 )
      {
        v24 = (v5 - (v4 + i)) ^ (i >> 13);
        v25 = (v24 << 8) ^ (v4 - i - v24);
        v26 = (v25 >> 13) ^ (i - v24 - v25);
        v27 = (v26 >> 12) ^ (v24 - v25 - v26);
        v28 = (v27 << 16) ^ (v25 - v26 - v27);
        v29 = (v28 >> 5) ^ (v26 - v27 - v28);
        v30 = (v29 >> 3) ^ (v27 - v28 - v29);
        return (((v30 << 10) ^ (v28 - v29 - v30)) >> 15) ^ (v29 - v30 - ((v30 << 10) ^ (v28 - v29 - v30)));
      }
      v4 += *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v2 + 120) + 8LL) + 12LL);
    }
    v16 = *(_DWORD *)(**(_QWORD **)(*(_QWORD *)(v2 + 112) + 8LL) + 12LL) + i;
    v17 = (v16 >> 13) ^ (v5 - v16 - v4);
    v18 = (v17 << 8) ^ (v4 - v16 - v17);
    v19 = (v18 >> 13) ^ (v16 - v17 - v18);
    v20 = (v19 >> 12) ^ (v17 - v18 - v19);
    v21 = (v20 << 16) ^ (v18 - v19 - v20);
    v22 = (v21 >> 5) ^ (v19 - v20 - v21);
    v23 = (v22 >> 3) ^ (v20 - v21 - v22);
    return (((v23 << 10) ^ (v21 - v22 - v23)) >> 15) ^ (v22 - v23 - ((v23 << 10) ^ (v21 - v22 - v23)));
  }
  return result;
}

