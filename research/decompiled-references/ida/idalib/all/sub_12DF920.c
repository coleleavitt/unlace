void __fastcall sub_12DF920(__int64 a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // rbx
  unsigned int *v6; // rbx
  __int64 v7; // r13
  _QWORD *v8; // r15
  __int64 v9; // rax
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  int v12; // r14d
  __int64 v13; // rbx
  _BYTE *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  char *v18; // rdx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  char *v21; // rsi
  char *v22; // rsi
  int v23; // ecx
  __int64 v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // esi
  int v32; // r13d
  unsigned int v33; // esi
  int v34; // eax
  int v35; // rax^4
  __int64 v36; // r14
  void *v37; // rax
  int v38; // edx
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned __int64 v49; // r14
  unsigned int v50; // rax^4
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rax
  unsigned __int64 v54; // r14
  __int64 v55; // rsi
  __int64 v56; // r13
  unsigned int v57; // eax
  __int64 v58; // [rsp+8h] [rbp-1B0h]
  unsigned int v59; // [rsp+8h] [rbp-1B0h]
  unsigned __int64 v60; // [rsp+10h] [rbp-1A8h]
  __int64 v61; // [rsp+20h] [rbp-198h]
  __int64 v62; // [rsp+20h] [rbp-198h]
  int v63; // [rsp+48h] [rbp-170h]
  int v64; // [rsp+48h] [rbp-170h]
  void *v65[2]; // [rsp+50h] [rbp-168h] BYREF
  void *v66; // [rsp+60h] [rbp-158h] BYREF
  __int64 v67; // [rsp+68h] [rbp-150h]
  __m128i v68; // [rsp+70h] [rbp-148h] BYREF
  char v69; // [rsp+80h] [rbp-138h]
  _QWORD v70[14]; // [rsp+90h] [rbp-128h] BYREF
  __int64 v71; // [rsp+100h] [rbp-B8h] BYREF
  _QWORD v72[2]; // [rsp+108h] [rbp-B0h] BYREF
  char v73; // [rsp+118h] [rbp-A0h] BYREF
  char *v74; // [rsp+128h] [rbp-90h] BYREF
  __int64 v75; // [rsp+130h] [rbp-88h]
  char v76; // [rsp+138h] [rbp-80h] BYREF
  int v77; // [rsp+148h] [rbp-70h]
  __int128 v78; // [rsp+150h] [rbp-68h] BYREF
  __int128 v79; // [rsp+160h] [rbp-58h] BYREF
  __int128 v80; // [rsp+170h] [rbp-48h]

  sub_FC5CB0((_DWORD *)a1, a2);
  v5 = *(_DWORD **)(*(_QWORD *)a3 + 64LL);
  if ( v5 && *(_DWORD **)(a1 + 48) != v5 )
    return;
  if ( !*(_BYTE *)(a1 + 32) && a2 <= 3 )
  {
    if ( !v5 )
      return;
    v31 = a3[2];
    if ( !v31 )
      return;
    if ( v31 < 0 )
      v31 = sub_10212A0(*(_QWORD *)(*(_QWORD *)a3 + 64LL), v31);
    v32 = v5[130];
    v33 = v31 & 0x7FFFFFFF;
    if ( v33 < v5[119] || v33 >= v5[120] )
      v34 = sub_101D590((__int64)v5, v33);
    else
      v34 = v5[118];
    if ( v32 != v34 )
      return;
  }
  v6 = *(unsigned int **)(a1 + 16);
  if ( v6 )
  {
    if ( v6[3] <= v6[2] )
    {
      v56 = sub_2237400(*(_QWORD *)(a1 + 16), v6 + 4, 0, 104, &v71);
      sub_FCF3F0(v56 + 104LL * v6[2], a2, (__int64)a3);
      sub_12DEF20(v6, v56);
      v57 = v71;
      if ( v6 + 4 != *(unsigned int **)v6 )
      {
        v59 = v71;
        free(*(void **)v6);
        v57 = v59;
      }
      *(_QWORD *)v6 = v56;
      v6[3] = v57;
      ++v6[2];
    }
    else
    {
      sub_FCF3F0(*(_QWORD *)v6 + 104LL * v6[2]++, a2, (__int64)a3);
    }
    v7 = *(_QWORD *)(a1 + 24);
    if ( !v7 )
      return;
    v8 = (_QWORD *)(**(_QWORD **)(a1 + 16) + 104LL * *(unsigned int *)(*(_QWORD *)(a1 + 16) + 8LL) - 104);
    memset(v70, 0, sizeof(v70));
    if ( v8 )
      goto LABEL_10;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 24) )
      return;
    memset(v70, 0, sizeof(v70));
  }
  v8 = v70;
  sub_FCF3F0((__int64)v70, a2, (__int64)a3);
  LOBYTE(v70[13]) = 1;
  v7 = *(_QWORD *)(a1 + 24);
LABEL_10:
  v9 = *(_QWORD *)(a1 + 40);
  v73 = 0;
  v78 = 0;
  v58 = v9;
  v72[0] = &v73;
  v79 = 0;
  v80 = 0;
  v76 = 0;
  v74 = &v76;
  LODWORD(v9) = *(_DWORD *)v8;
  v72[1] = 0;
  LODWORD(v71) = v9;
  LODWORD(v9) = *((_DWORD *)v8 + 1);
  v75 = 0;
  HIDWORD(v71) = v9;
  v10 = (_BYTE *)v8[3];
  v11 = v8[4];
  v65[0] = &v66;
  sub_12DB1F0(v65, v10, (__int64)&v10[v11]);
  sub_A0AAD0((__int64)v72, v65);
  if ( v65[0] != &v66 )
    operator delete(v65[0]);
  v77 = 0;
  v12 = *((_DWORD *)v8 + 2);
  if ( v12 )
  {
    v13 = v8[2];
    if ( v12 < 0 )
      v12 = sub_1021D50(v8[2], v12);
    v14 = (_BYTE *)sub_101FA90(v13, v12);
    v65[0] = &v66;
    sub_12DB1F0(v65, v14, (__int64)&v14[v15]);
    sub_A0AAD0((__int64)&v74, v65);
    if ( v65[0] != &v66 )
      operator delete(v65[0]);
    if ( v75 )
    {
      v35 = (unsigned __int64)sub_A80750(v13, v12) >> 32;
      v36 = v8[7];
      v77 = v35;
      v61 = v8[8];
      while ( v61 != v36 )
      {
        while ( 1 )
        {
          v37 = (void *)sub_13DCDE0(*(_QWORD *)v36, *(unsigned int *)(v36 + 8), v13, v58);
          LODWORD(v65[1]) = v38;
          v65[0] = v37;
          v60 = (unsigned __int64)sub_A80750(v13, (int)v37) >> 32;
          v39 = sub_A80750(v13, SHIDWORD(v65[0]));
          v40 = *((_QWORD *)&v78 + 1);
          v41 = HIDWORD(v39);
          v65[0] = (void *)__PAIR64__(v41, v60);
          if ( *((_QWORD *)&v78 + 1) == (_QWORD)v79 )
            break;
          **((_DWORD **)&v78 + 1) = v60;
          v42 = v40 + 8;
          v36 += 12;
          *(_DWORD *)(v42 - 4) = v41;
          *((_QWORD *)&v78 + 1) = v42;
          if ( v61 == v36 )
            goto LABEL_43;
        }
        v36 += 12;
        sub_12DF100((__int64)&v78, *((char **)&v78 + 1), v65);
      }
LABEL_43:
      v43 = v8[10];
      v44 = v8[11];
      if ( v43 != v44 )
      {
        v45 = v43 + 24;
        v62 = v44 + 24;
        do
        {
          *(_OWORD *)v65 = 0;
          v68.m128i_i8[0] = 0;
          v46 = *(_QWORD *)(v45 - 24);
          v47 = *(unsigned int *)(v45 - 16);
          v66 = &v68;
          v67 = 0;
          v48 = sub_13DCDE0(v46, v47, v13, v58);
          v63 = HIDWORD(v48);
          v49 = (unsigned __int64)sub_A80750(v13, v48) >> 32;
          v50 = (unsigned __int64)sub_A80750(v13, v63) >> 32;
          v51 = *(_QWORD *)(v45 - 12);
          v52 = *(unsigned int *)(v45 - 4);
          v65[0] = (void *)__PAIR64__(v50, v49);
          v53 = sub_13DCDE0(v51, v52, v13, v58);
          v64 = HIDWORD(v53);
          v54 = (unsigned __int64)sub_A80750(v13, v53) >> 32;
          v65[1] = (void *)__PAIR64__((unsigned __int64)sub_A80750(v13, v64) >> 32, v54);
          sub_9EE8A0((__int64)&v66, v45);
          v55 = v80;
          v69 = *(_BYTE *)(v45 + 32);
          if ( (_QWORD)v80 == *((_QWORD *)&v80 + 1) )
          {
            sub_12DF350((__int64)&v79 + 8, (const __m128i *)v80, (const __m128i *)v65);
            if ( v66 != &v68 )
              operator delete(v66);
          }
          else
          {
            *(void **)v80 = v65[0];
            *(void **)(v55 + 8) = v65[1];
            *(_QWORD *)(v55 + 16) = v55 + 32;
            if ( v66 == &v68 )
            {
              *(__m128i *)(v55 + 32) = _mm_load_si128(&v68);
            }
            else
            {
              *(_QWORD *)(v55 + 16) = v66;
              *(_QWORD *)(v55 + 32) = v68.m128i_i64[0];
            }
            *(_QWORD *)(v55 + 24) = v67;
            *(_BYTE *)(v55 + 48) = v69;
            *(_QWORD *)&v80 = v80 + 56;
          }
          v45 += 64;
        }
        while ( v45 != v62 );
      }
    }
  }
  v16 = *(unsigned int *)(v7 + 8);
  v17 = *(_QWORD *)v7;
  v18 = (char *)&v71;
  v19 = v16 + 1;
  v20 = *(_QWORD *)v7 + (v16 << 7);
  if ( v19 > *(unsigned int *)(v7 + 12) )
  {
    if ( v17 > (unsigned __int64)&v71 || v20 <= (unsigned __int64)&v71 )
    {
      sub_12DF670(v7, v19);
      v18 = (char *)&v71;
      v20 = *(_QWORD *)v7 + ((unsigned __int64)*(unsigned int *)(v7 + 8) << 7);
    }
    else
    {
      sub_12DF670(v7, v19);
      v18 = (char *)&v72[-1] + *(_QWORD *)v7 - v17;
      v20 = *(_QWORD *)v7 + ((unsigned __int64)*(unsigned int *)(v7 + 8) << 7);
    }
  }
  *(_DWORD *)v20 = *(_DWORD *)v18;
  *(_DWORD *)(v20 + 4) = *((_DWORD *)v18 + 1);
  *(_QWORD *)(v20 + 8) = v20 + 24;
  v21 = *((char **)v18 + 1);
  if ( v21 == v18 + 24 )
  {
    *(__m128i *)(v20 + 24) = _mm_loadu_si128((const __m128i *)(v18 + 24));
  }
  else
  {
    *(_QWORD *)(v20 + 8) = v21;
    *(_QWORD *)(v20 + 24) = *((_QWORD *)v18 + 3);
  }
  *(_QWORD *)(v20 + 16) = *((_QWORD *)v18 + 2);
  *((_QWORD *)v18 + 1) = v18 + 24;
  *((_QWORD *)v18 + 2) = 0;
  v18[24] = 0;
  *(_QWORD *)(v20 + 40) = v20 + 56;
  v22 = *((char **)v18 + 5);
  if ( v22 == v18 + 56 )
  {
    *(__m128i *)(v20 + 56) = _mm_loadu_si128((const __m128i *)(v18 + 56));
  }
  else
  {
    *(_QWORD *)(v20 + 40) = v22;
    *(_QWORD *)(v20 + 56) = *((_QWORD *)v18 + 7);
  }
  *(_QWORD *)(v20 + 48) = *((_QWORD *)v18 + 6);
  *((_QWORD *)v18 + 5) = v18 + 56;
  v23 = *((_DWORD *)v18 + 18);
  v18[56] = 0;
  *((_QWORD *)v18 + 6) = 0;
  *(_QWORD *)(v20 + 88) = 0;
  *(_QWORD *)(v20 + 96) = 0;
  *(_QWORD *)(v20 + 80) = 0;
  *(_DWORD *)(v20 + 72) = v23;
  *(_QWORD *)(v20 + 80) = *((_QWORD *)v18 + 10);
  v24 = *((_QWORD *)v18 + 11);
  *((_QWORD *)v18 + 10) = 0;
  v25 = *(_QWORD *)(v20 + 88);
  *(_QWORD *)(v20 + 88) = v24;
  v26 = *((_QWORD *)v18 + 12);
  *((_QWORD *)v18 + 11) = v25;
  v27 = *(_QWORD *)(v20 + 96);
  *(_QWORD *)(v20 + 96) = v26;
  *((_QWORD *)v18 + 12) = v27;
  *(_QWORD *)(v20 + 112) = 0;
  *(_QWORD *)(v20 + 104) = 0;
  *(_QWORD *)(v20 + 120) = 0;
  *(_QWORD *)(v20 + 104) = *((_QWORD *)v18 + 13);
  v28 = *((_QWORD *)v18 + 14);
  *((_QWORD *)v18 + 13) = 0;
  v29 = *(_QWORD *)(v20 + 112);
  *(_QWORD *)(v20 + 112) = v28;
  *((_QWORD *)v18 + 14) = v29;
  v30 = *(_QWORD *)(v20 + 120);
  *(_QWORD *)(v20 + 120) = *((_QWORD *)v18 + 15);
  *((_QWORD *)v18 + 15) = v30;
  ++*(_DWORD *)(v7 + 8);
  sub_12DBD50(&v71);
  if ( LOBYTE(v70[13]) )
    sub_12DBE10(v70);
}
