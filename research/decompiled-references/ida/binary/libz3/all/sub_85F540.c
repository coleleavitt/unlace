__int64 __fastcall sub_85F540(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 i; // r12
  __int64 v8; // r15
  unsigned int v9; // r12d
  unsigned int v10; // r9d
  unsigned int v11; // edx
  __int64 v12; // rsi
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // r15
  unsigned int v16; // edx
  _QWORD *v17; // r13
  unsigned int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // r13
  _QWORD *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 (__fastcall *v31)(__int64); // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // r12d
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // rax
  int v38; // r13d
  __int64 v39; // rdx
  __int64 v40; // r12
  unsigned int **v41; // r12
  unsigned int *v42; // r14
  unsigned int *v43; // r15
  _QWORD *v44; // rax
  char v45; // al
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  unsigned int v49; // r14d
  int v50; // eax
  __int64 v52; // r12
  char *v53; // rax
  char *v54; // rdi
  unsigned __int64 v55; // rax
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  __int64 v58; // r10
  __int64 j; // rax
  __int64 v60; // r12
  char *v61; // rax
  char *v62; // rdi
  unsigned __int64 v63; // rax
  __int64 v64; // r8
  unsigned __int64 v65; // rax
  __int64 v66; // r9
  __int64 v67; // [rsp+8h] [rbp-1B8h]
  __int64 v68; // [rsp+10h] [rbp-1B0h]
  __int64 v69; // [rsp+18h] [rbp-1A8h]
  __int64 v70; // [rsp+20h] [rbp-1A0h]
  unsigned int *v71; // [rsp+28h] [rbp-198h]
  unsigned int *v72; // [rsp+30h] [rbp-190h]
  __int64 v73; // [rsp+48h] [rbp-178h]
  __int64 v74; // [rsp+48h] [rbp-178h]
  __int64 v75; // [rsp+50h] [rbp-170h]
  unsigned int v76; // [rsp+50h] [rbp-170h]
  _QWORD *v77; // [rsp+50h] [rbp-170h]
  _QWORD *v78; // [rsp+50h] [rbp-170h]
  __int64 v79; // [rsp+58h] [rbp-168h]
  __int64 v80; // [rsp+58h] [rbp-168h]
  _QWORD *v81; // [rsp+58h] [rbp-168h]
  unsigned int **v82; // [rsp+60h] [rbp-160h]
  unsigned __int8 v83; // [rsp+6Ch] [rbp-154h]
  int v84; // [rsp+6Ch] [rbp-154h]
  unsigned int v85; // [rsp+6Ch] [rbp-154h]
  unsigned int v86; // [rsp+6Ch] [rbp-154h]
  char v87; // [rsp+6Ch] [rbp-154h]
  _QWORD *v88; // [rsp+70h] [rbp-150h]
  unsigned int v89; // [rsp+78h] [rbp-148h]
  int v90; // [rsp+7Ch] [rbp-144h]
  _QWORD v91[16]; // [rsp+80h] [rbp-140h] BYREF
  void *ptr; // [rsp+100h] [rbp-C0h]
  __int64 v93; // [rsp+108h] [rbp-B8h]
  _BYTE v94[176]; // [rsp+110h] [rbp-B0h] BYREF

  v88 = v91;
  v90 = 16;
  v93 = 0x1000000000LL;
  v3 = *(_DWORD *)(a2 + 24);
  ptr = v94;
  if ( v3 <= 1 )
    return 0;
  v83 = 0;
  v79 = v3 - 2;
  for ( i = 0; ; ++i )
  {
    v8 = *(_QWORD *)(sub_7E4F00(a1, *(unsigned int **)(a2 + 8 * i + 40)) + 64);
    v83 |= *(_QWORD *)(sub_7E4F00(a1, *(unsigned int **)(a3 + 8 * i + 40)) + 64) != v8;
    if ( i == v79 )
      break;
  }
  if ( !v83 )
    goto LABEL_64;
  v9 = 16;
  v10 = 1;
  v91[0] = a3;
  v11 = v93;
  v12 = *(_QWORD *)(a3 + 32);
  v89 = 1;
  if ( (unsigned int)v93 >= HIDWORD(v93) )
  {
    v60 = (unsigned int)(2 * HIDWORD(v93));
    v61 = (char *)sub_186B270(8 * v60);
    v11 = v93;
    v62 = (char *)ptr;
    v13 = v61;
    if ( (_DWORD)v93 )
    {
      if ( (unsigned int)(v93 - 1) <= 2 || v61 == (char *)ptr + 8 )
      {
        v65 = 0;
        v66 = 8LL * (unsigned int)v93;
        do
        {
          v13[v65 / 8] = *(_QWORD *)&v62[v65];
          v65 += 8LL;
        }
        while ( v65 != v66 );
      }
      else
      {
        v63 = 0;
        v64 = 16LL * ((unsigned int)v93 >> 1);
        do
        {
          *(__m128i *)&v13[v63 / 8] = _mm_loadu_si128((const __m128i *)&v62[v63]);
          v63 += 16LL;
        }
        while ( v64 != v63 );
        if ( (v11 & 1) != 0 )
          v13[v11 & 0xFFFFFFFE] = *(_QWORD *)&v62[8 * (v11 & 0xFFFFFFFE)];
      }
    }
    if ( v62 != v94 && v62 )
    {
      v78 = v13;
      sub_186B220(v62);
      v11 = v93;
      v13 = v78;
    }
    HIDWORD(v93) = v60;
    v10 = 1;
    ptr = v13;
    v9 = 16;
  }
  else
  {
    v13 = ptr;
  }
  v14 = v11;
  v15 = (__int64 *)(a2 + 40);
  v16 = v11 + 1;
  v13[v14] = v12;
  LODWORD(v93) = v16;
  v82 = (unsigned int **)(a2 + 40);
  v73 = 8 * v79;
  v80 = a2 + 8 * v79 + 48;
  while ( 1 )
  {
    v23 = *v15;
    if ( v10 < v9 )
    {
      v17 = v88;
    }
    else
    {
      v75 = *v15;
      v24 = 2 * v9;
      v25 = sub_186B270(8 * v24);
      v10 = v89;
      v17 = (_QWORD *)v25;
      v23 = v75;
      if ( v89 )
      {
        if ( v89 - 1 <= 2 || (_QWORD *)v25 == v88 + 1 )
        {
          for ( j = 0; j != v89; ++j )
            v17[j] = v88[j];
        }
        else
        {
          v26 = 0;
          do
          {
            *(__m128i *)&v17[v26] = _mm_loadu_si128((const __m128i *)&v88[v26]);
            v26 += 2;
          }
          while ( v26 != 2LL * (v89 >> 1) );
          if ( (v89 & 1) != 0 )
            v17[v89 & 0xFFFFFFFE] = v88[v89 & 0xFFFFFFFE];
        }
      }
      if ( v88 != v91 && v88 )
      {
        sub_186B220(v88);
        v10 = v89;
        v23 = v75;
      }
      v88 = v17;
      v16 = v93;
      v90 = v24;
    }
    v18 = HIDWORD(v93);
    v19 = v10++;
    v17[v19] = v23;
    v20 = *v15;
    v89 = v10;
    if ( v16 >= v18 )
    {
      v52 = 2 * v18;
      v53 = (char *)sub_186B270(8 * v52);
      v16 = v93;
      v54 = (char *)ptr;
      v21 = v53;
      if ( (_DWORD)v93 )
      {
        if ( (unsigned int)(v93 - 1) <= 2 || v53 == (char *)ptr + 8 )
        {
          v57 = 0;
          v58 = 8LL * (unsigned int)v93;
          do
          {
            v21[v57 / 8] = *(_QWORD *)&v54[v57];
            v57 += 8LL;
          }
          while ( v57 != v58 );
        }
        else
        {
          v55 = 0;
          v56 = 16LL * ((unsigned int)v93 >> 1);
          do
          {
            *(__m128i *)&v21[v55 / 8] = _mm_loadu_si128((const __m128i *)&v54[v55]);
            v55 += 16LL;
          }
          while ( v56 != v55 );
          if ( (v16 & 1) != 0 )
            v21[v16 & 0xFFFFFFFE] = *(_QWORD *)&v54[8 * (v16 & 0xFFFFFFFE)];
        }
      }
      if ( v54 && v54 != v94 )
      {
        v77 = v21;
        sub_186B220(v54);
        v16 = v93;
        v21 = v77;
      }
      ptr = v21;
      v10 = v89;
      HIDWORD(v93) = v52;
    }
    else
    {
      v21 = ptr;
    }
    v22 = v16++;
    ++v15;
    v21[v22] = v20;
    LODWORD(v93) = v16;
    if ( (__int64 *)v80 == v15 )
      break;
    v9 = v90;
  }
  v69 = *(_QWORD *)(a1 + 72);
  v27 = sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)v88, 0);
  v72 = (unsigned int *)v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 8);
  v68 = *(_QWORD *)(a1 + 72);
  v28 = sub_15DCAD0(*(_QWORD *)(a1 + 120), (int)ptr, 0);
  v71 = (unsigned int *)v28;
  if ( v28 )
    ++*(_DWORD *)(v28 + 8);
  v67 = *(_QWORD *)(a1 + 72);
  v29 = sub_15E1B70(v67);
  v70 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v30 = *(_QWORD *)(a1 + 80);
  v31 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 440LL);
  if ( v31 == sub_79F010 )
  {
    v32 = v30 + 1592;
  }
  else
  {
    v32 = ((__int64 (__fastcall *)(__int64, _QWORD))v31)(v30, 0);
    v30 = *(_QWORD *)(a1 + 80);
    v31 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 440LL);
  }
  v33 = *(_QWORD *)(v32 + 128);
  if ( v33 )
  {
    v34 = v83;
    v35 = *v72;
    if ( (unsigned int)v35 < *(_DWORD *)(v33 - 4) )
      LOBYTE(v34) = *(_QWORD *)(v33 + 8 * v35) == 0;
  }
  else
  {
    v34 = v83;
  }
  if ( v31 == sub_79F010 )
    v36 = v30 + 1592;
  else
    v36 = ((__int64 (__fastcall *)(__int64, _QWORD))v31)(v30, 0);
  v37 = *(_QWORD *)(v36 + 128);
  if ( v37 )
  {
    v38 = v83;
    v39 = *v71;
    if ( (unsigned int)v39 < *(_DWORD *)(v37 - 4) )
    {
      LOBYTE(v38) = *(_QWORD *)(v37 + 8 * v39) == 0;
      v38 |= v34;
    }
  }
  else
  {
    v38 = v83;
  }
  v40 = sub_7E5940(a1, v72);
  if ( *(_QWORD *)(sub_7E5940(a1, v71) + 64) == *(_QWORD *)(v40 + 64) )
    goto LABEL_56;
  v41 = (unsigned int **)(a3 + 40);
  v76 = -2;
  v74 = a3 + v73 + 48;
  while ( 1 )
  {
    v42 = *v41;
    v43 = *v82;
    v81 = (_QWORD *)sub_7E4F00(a1, *v41);
    v44 = (_QWORD *)sub_7E4F00(a1, v43);
    if ( v81 == v44 )
      goto LABEL_45;
    v45 = sub_15D27F0(*(_QWORD *)(a1 + 72), *v81, *v44);
    if ( v45 )
      break;
    v49 = sub_7E58D0(a1, (__int64)v42, (__int64)v43);
    if ( !(unsigned __int8)sub_7CB810(*(_QWORD *)(a1 + 80), v49 >> 1) )
    {
      sub_7F15F0(*(_QWORD *)(a1 + 80) + 160LL, v49);
      v38 = v83;
    }
    v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * v49);
    if ( v50 != 1 )
    {
      LOBYTE(v50) = v50 == 0;
      v38 |= v50;
      if ( v76 == -2 )
      {
        v76 = sub_7E58C0(a1, v70);
        if ( !(unsigned __int8)sub_7CB810(*(_QWORD *)(a1 + 80), v76 >> 1) )
        {
          sub_7F15F0(*(_QWORD *)(a1 + 80) + 160LL, v76);
          v38 = v83;
        }
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * v76) == 1 )
          goto LABEL_55;
      }
      v38 |= sub_7E5400(a1, v49, v76, nullptr);
    }
LABEL_45:
    ++v82;
    if ( (unsigned int **)v74 == ++v41 )
      goto LABEL_55;
  }
  if ( v76 != -2 )
    goto LABEL_99;
  v87 = v45;
  v76 = sub_7E58C0(a1, v70);
  if ( !(unsigned __int8)sub_7CB810(*(_QWORD *)(a1 + 80), v76 >> 1) )
  {
    sub_7F15F0(*(_QWORD *)(a1 + 80) + 160LL, v76);
    LOBYTE(v38) = v87;
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3288LL) + 4LL * v76) != 1 )
LABEL_99:
    LOBYTE(v38) = sub_7E5160(a1, v76, nullptr, v46, v47, v48) | v38;
LABEL_55:
  ++*(_DWORD *)(a1 + 144);
LABEL_56:
  if ( v70 )
  {
    v84 = *(_DWORD *)(v70 + 8);
    *(_DWORD *)(v70 + 8) = v84 - 1;
    if ( v84 == 1 )
      sub_15D7BC0(v67, v70);
  }
  v85 = v71[2];
  v71[2] = v85 - 1;
  if ( v85 == 1 )
    sub_15D7BC0(v68, v71);
  v86 = v72[2];
  v72[2] = v86 - 1;
  if ( v86 == 1 )
    sub_15D7BC0(v69, v72);
  v83 = v38;
LABEL_64:
  if ( ptr && ptr != v94 )
    sub_186B220(ptr);
  if ( v88 != v91 && v88 != nullptr )
    sub_186B220(v88);
  return v83;
}

