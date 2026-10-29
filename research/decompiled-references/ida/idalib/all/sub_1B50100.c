void __fastcall sub_1B50100(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbp
  __int64 v5; // r13
  int v6; // r9d
  int v7; // r8d
  int v8; // edi
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  int v14; // r10d
  _QWORD *v15; // rbp
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  _QWORD *v18; // rdi
  _QWORD *v19; // rdi
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  _QWORD *v24; // rdi

  v4 = *(_QWORD **)a1;
  v5 = *(_QWORD *)a1 + 616LL * *(unsigned int *)(a1 + 8);
  if ( *(_QWORD *)a1 != v5 )
  {
    do
    {
      *(_QWORD *)a2 = *v4;
      *(_QWORD *)(a2 + 8) = v4[1];
      *(_QWORD *)(a2 + 16) = v4[2];
      *(_QWORD *)(a2 + 24) = v4[3];
      *(_QWORD *)(a2 + 32) = v4[4];
      *(_QWORD *)(a2 + 40) = v4[5];
      *(_QWORD *)(a2 + 48) = v4[6];
      *(_QWORD *)(a2 + 56) = v4[7];
      *(_QWORD *)(a2 + 64) = v4[8];
      *(_QWORD *)(a2 + 72) = v4[9];
      *(_QWORD *)(a2 + 80) = v4[10];
      *(_QWORD *)(a2 + 88) = v4[11];
      *(_QWORD *)(a2 + 96) = v4[12];
      *(_QWORD *)(a2 + 104) = v4[13];
      *(_QWORD *)(a2 + 112) = v4[14];
      *(_QWORD *)(a2 + 120) = v4[15];
      *(_QWORD *)(a2 + 128) = v4[16];
      *(_QWORD *)(a2 + 136) = v4[17];
      v13 = v4[18];
      *(_DWORD *)(a2 + 160) = 0;
      *(_QWORD *)(a2 + 144) = v13;
      *(_DWORD *)(a2 + 164) = 4;
      v14 = *((_DWORD *)v4 + 40);
      *(_QWORD *)(a2 + 152) = a2 + 168;
      if ( v14 )
        sub_1576230((char ***)(a2 + 152), (char ***)v4 + 19);
      *(_DWORD *)(a2 + 208) = 0;
      *(_DWORD *)(a2 + 212) = 4;
      v6 = *((_DWORD *)v4 + 52);
      *(_QWORD *)(a2 + 200) = a2 + 216;
      if ( v6 )
        sub_1576230((char ***)(a2 + 200), (char ***)v4 + 25);
      *(_DWORD *)(a2 + 256) = 0;
      *(_DWORD *)(a2 + 260) = 4;
      v7 = *((_DWORD *)v4 + 64);
      *(_QWORD *)(a2 + 248) = a2 + 264;
      if ( v7 )
        sub_1576230((char ***)(a2 + 248), (char ***)v4 + 31);
      *(_DWORD *)(a2 + 304) = 0;
      *(_DWORD *)(a2 + 308) = 4;
      v8 = *((_DWORD *)v4 + 76);
      *(_QWORD *)(a2 + 296) = a2 + 312;
      if ( v8 )
        sub_1576230((char ***)(a2 + 296), (char ***)v4 + 37);
      *(_DWORD *)(a2 + 352) = 0;
      *(_DWORD *)(a2 + 356) = 4;
      v9 = *((_DWORD *)v4 + 88);
      *(_QWORD *)(a2 + 344) = a2 + 360;
      if ( v9 )
        sub_1576230((char ***)(a2 + 344), (char ***)v4 + 43);
      *(_DWORD *)(a2 + 400) = 0;
      *(_DWORD *)(a2 + 404) = 4;
      v10 = *((_DWORD *)v4 + 100);
      *(_QWORD *)(a2 + 392) = a2 + 408;
      if ( v10 )
        sub_1576230((char ***)(a2 + 392), (char ***)v4 + 49);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(a2 + 452) = 4;
      v11 = *((_DWORD *)v4 + 112);
      *(_QWORD *)(a2 + 440) = a2 + 456;
      if ( v11 )
        sub_1576230((char ***)(a2 + 440), (char ***)v4 + 55);
      *(_DWORD *)(a2 + 496) = 0;
      *(_QWORD *)(a2 + 488) = a2 + 504;
      *(_DWORD *)(a2 + 500) = 4;
      if ( *((_DWORD *)v4 + 124) )
        sub_1576230((char ***)(a2 + 488), (char ***)v4 + 61);
      *(_QWORD *)(a2 + 536) = v4[67];
      *(__m128i *)(a2 + 544) = _mm_loadu_si128((const __m128i *)v4 + 34);
      *(__m128i *)(a2 + 560) = _mm_loadu_si128((const __m128i *)v4 + 35);
      *(__m128i *)(a2 + 576) = _mm_loadu_si128((const __m128i *)v4 + 36);
      *(__m128i *)(a2 + 592) = _mm_loadu_si128((const __m128i *)v4 + 37);
      v12 = v4[76];
      v4 += 77;
      a2 += 616;
      *(_QWORD *)(a2 - 8) = v12;
    }
    while ( (_QWORD *)v5 != v4 );
    v15 = *(_QWORD **)a1;
    v16 = (_QWORD *)(*(_QWORD *)a1 + 616LL * *(unsigned int *)(a1 + 8));
    while ( v15 != v16 )
    {
      while ( 1 )
      {
        v16 -= 77;
        v17 = (_QWORD *)v16[61];
        if ( v17 != v16 + 63 )
          free(v17);
        v18 = (_QWORD *)v16[55];
        if ( v18 != v16 + 57 )
          free(v18);
        v19 = (_QWORD *)v16[49];
        if ( v19 != v16 + 51 )
          free(v19);
        v20 = (_QWORD *)v16[43];
        if ( v20 != v16 + 45 )
          free(v20);
        v21 = (_QWORD *)v16[37];
        if ( v21 != v16 + 39 )
          free(v21);
        v22 = (_QWORD *)v16[31];
        if ( v22 != v16 + 33 )
          free(v22);
        v23 = (_QWORD *)v16[25];
        if ( v23 != v16 + 27 )
          free(v23);
        v24 = (_QWORD *)v16[19];
        if ( v24 == v16 + 21 )
          break;
        free(v24);
        if ( v15 == v16 )
          return;
      }
    }
  }
}
