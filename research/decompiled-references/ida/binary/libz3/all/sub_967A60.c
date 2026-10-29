__int64 __fastcall sub_967A60(__int64 **a1, unsigned __int64 a2)
{
  int v2; // eax
  unsigned int v3; // eax
  unsigned int v4; // r12d
  unsigned int v5; // ebp
  int v6; // eax
  unsigned int v7; // edx
  unsigned int v8; // esi
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // esi
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // r9d
  unsigned __int64 v17; // rdi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edx
  __int64 v22; // rsi
  unsigned int v23; // edi
  unsigned int v24; // r9d
  int v25; // eax
  unsigned int v26; // edx
  unsigned int v27; // r9d
  int v28; // edi
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // r9d
  unsigned int v32; // edi
  int v33; // eax
  int v34; // edx
  unsigned int v35; // eax
  int v36; // ecx
  unsigned int v37; // esi
  unsigned int v38; // eax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rsi
  int v42; // edx
  __int64 v43; // rcx
  unsigned int v44; // ecx
  unsigned int v45; // esi
  __int64 *v46; // r11
  int v47; // eax
  __int64 v48; // r10
  __int64 v49; // rdx
  int v50; // ebx
  __int64 v51; // rdx
  int v52; // ecx
  unsigned int v53; // ecx
  __int64 v54; // rdx
  int v55; // edx
  unsigned int v56; // edx
  int v57; // eax
  unsigned int v58; // ecx
  unsigned int v59; // edx
  int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // edx
  __int64 v63; // rcx
  __int64 v64; // rdx
  int v65; // edx
  __int64 v66; // rdx
  int v67; // edx

  v2 = **(_DWORD **)(*(_QWORD *)a2 + 16LL);
  if ( (*(_BYTE *)(a2 + 44) & 8) != 0 )
    goto LABEL_2;
  v17 = a2;
  LODWORD(a2) = *(_DWORD *)(*(_QWORD *)a2 + 24LL);
  v14 = v2 + 0x80000000;
  switch ( (_DWORD)a2 )
  {
    case 1:
      return v14;
    case 2:
      v39 = v2 + 506952121;
      v40 = *(_QWORD *)(*(_QWORD *)(v17 + 112) + 8LL);
      v41 = **a1;
      if ( v40 == v41 || v40 == *a1[1] )
        v42 = -1640531510;
      else
        v42 = *(_DWORD *)(*(_QWORD *)v40 + 12LL) - 1640531527;
      v43 = *(_QWORD *)(*(_QWORD *)(v17 + 120) + 8LL);
      if ( v43 == v41 || v43 == *a1[1] )
      {
        v45 = 0;
        v44 = 28;
      }
      else
      {
        v44 = *(_DWORD *)(*(_QWORD *)v43 + 12LL) + 11;
        v45 = v44 >> 13;
      }
      v6 = v45 ^ (v39 - v42 - v44);
      v7 = (v42 - v44 - v6) ^ (v6 << 8);
      v8 = (v44 - v6 - v7) ^ (v7 >> 13);
      goto LABEL_4;
    case 3:
      v18 = v2 + 506952121;
      v19 = *(_QWORD *)(*(_QWORD *)(v17 + 112) + 8LL);
      v20 = **a1;
      if ( v19 == v20 || v19 == *a1[1] )
        v21 = -1640531510;
      else
        v21 = *(_DWORD *)(*(_QWORD *)v19 + 12LL) - 1640531527;
      v22 = *(_QWORD *)(*(_QWORD *)(v17 + 120) + 8LL);
      if ( v22 == v20 || v22 == *a1[1] )
      {
        v24 = 0;
        v23 = 28;
      }
      else
      {
        v23 = *(_DWORD *)(*(_QWORD *)v22 + 12LL) + 11;
        v24 = v23 >> 13;
      }
      v25 = v24 ^ (v18 - v21 - v23);
      v26 = (v21 - v23 - v25) ^ (v25 << 8);
      v27 = (v23 - v25 - v26) ^ (v26 >> 13);
      v28 = (v25 - v26 - v27) ^ (v27 >> 12);
      v29 = (v26 - v27 - v28) ^ (v28 << 16);
      v30 = (v27 - v28 - v29) ^ (v29 >> 5);
      v31 = (v28 - v29 - v30) ^ (v30 >> 3);
      v32 = (v29 - v30 - v31) ^ (v31 << 10);
      v33 = (v30 - v31 - v32) ^ (v32 >> 15);
      if ( v22 == v20 || *a1[1] == v22 )
        v34 = 17;
      else
        v34 = *(_DWORD *)(*(_QWORD *)v22 + 12LL);
      v35 = v34 + v33;
      v36 = (v31 - v32 - v35) ^ (v35 >> 13);
      v37 = (v32 - v35 - v36) ^ (v36 << 8);
      v38 = (v37 >> 13) ^ (v35 - v36 - v37);
      v9 = (v36 - v37 - v38) ^ (v38 >> 12);
      v10 = (v37 - v38 - v9) ^ (v9 << 16);
      v11 = v38 - v9 - v10;
      goto LABEL_5;
  }
  if ( (unsigned int)a2 <= 2 )
  {
LABEL_2:
    v3 = v2 + 506952121;
    v4 = 11;
    v5 = -1640531527;
  }
  else
  {
    v46 = *a1;
    v4 = 11;
    v5 = -1640531527;
    v47 = -1640531527;
    v48 = **a1;
    do
    {
      v49 = *(_QWORD *)(*(_QWORD *)(v17 + 8LL * (unsigned int)(a2 - 1) + 112) + 8LL);
      if ( v49 == v48 || v49 == *a1[1] )
        v50 = 17;
      else
        v50 = *(_DWORD *)(*(_QWORD *)v49 + 12LL);
      v51 = *(_QWORD *)(*(_QWORD *)(v17 + 8LL * (unsigned int)(a2 - 2) + 112) + 8LL);
      if ( v51 == v48 || v51 == *a1[1] )
        v52 = 17;
      else
        v52 = *(_DWORD *)(*(_QWORD *)v51 + 12LL);
      v53 = v5 + v52;
      a2 = (unsigned int)(a2 - 3);
      v54 = *(_QWORD *)(*(_QWORD *)(v17 + 8 * a2 + 112) + 8LL);
      if ( v54 == v48 || v54 == *a1[1] )
        v55 = 17;
      else
        v55 = *(_DWORD *)(*(_QWORD *)v54 + 12LL);
      v56 = v4 + v55;
      v57 = (v47 + v50 - v53 - v56) ^ (v56 >> 13);
      v58 = (v53 - v56 - v57) ^ (v57 << 8);
      v59 = (v56 - v57 - v58) ^ (v58 >> 13);
      v60 = (v57 - v58 - v59) ^ (v59 >> 12);
      v61 = (v58 - v59 - v60) ^ (v60 << 16);
      v62 = (v59 - v60 - v61) ^ (v61 >> 5);
      v47 = (v60 - v61 - v62) ^ (v62 >> 3);
      v5 = (v61 - v62 - v47) ^ (v47 << 10);
      v4 = (v62 - v47 - v5) ^ (v5 >> 15);
    }
    while ( (unsigned int)a2 > 2 );
    v3 = v14 + v47;
    if ( (_DWORD)a2 == 1 )
    {
      v63 = *v46;
LABEL_50:
      v66 = *(_QWORD *)(*(_QWORD *)(v17 + 112) + 8LL);
      if ( v66 == v63 || v66 == *a1[1] )
        v67 = 17;
      else
        v67 = *(_DWORD *)(*(_QWORD *)v66 + 12LL);
      v4 += v67;
      goto LABEL_3;
    }
    if ( (_DWORD)a2 == 2 )
    {
      v63 = *v46;
      v64 = *(_QWORD *)(*(_QWORD *)(v17 + 120) + 8LL);
      if ( v64 == *v46 || v64 == *a1[1] )
        v65 = 17;
      else
        v65 = *(_DWORD *)(*(_QWORD *)v64 + 12LL);
      v5 += v65;
      goto LABEL_50;
    }
  }
LABEL_3:
  v6 = (v4 >> 13) ^ (v3 - v5 - v4);
  v7 = (v5 - v4 - v6) ^ (v6 << 8);
  v8 = (v4 - v6 - v7) ^ (v7 >> 13);
LABEL_4:
  v9 = (v6 - v7 - v8) ^ (v8 >> 12);
  v10 = (v7 - v8 - v9) ^ (v9 << 16);
  v11 = v8 - v9 - v10;
LABEL_5:
  v12 = v11 ^ (v10 >> 5);
  v13 = (v12 >> 3) ^ (v9 - v10 - v12);
  return (v12 - v13 - ((v10 - v12 - v13) ^ (v13 << 10))) ^ (((v10 - v12 - v13) ^ (v13 << 10)) >> 15);
}

