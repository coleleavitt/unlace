void __fastcall sub_188F20(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r15
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbp
  unsigned __int8 *v5; // r8
  unsigned __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  __int64 *v10; // rdx
  void **v11; // r8
  _QWORD *v12; // rsi
  _OWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  __int64 v16; // r10
  const __m128i *v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r11
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  char v26; // al
  unsigned __int8 v27; // dl
  _QWORD *v28; // rax
  _QWORD *v29; // rax
  __m128i v30; // xmm0
  __int64 v31; // rcx
  __int64 v32; // rdx
  char *v33; // rbx
  unsigned __int8 *v34; // rbp
  __int64 v35; // rax
  char *v36; // r15
  _QWORD *v37; // rbx
  void *v38; // rdi
  void **v39; // r15
  void **v40; // r12
  void **v41; // r13
  char *v42; // r14
  void **v43; // rbp
  __int64 v44; // rax
  char *v45; // r14
  _QWORD *v46; // rbx
  void *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // r9
  unsigned __int64 v50; // rdi
  unsigned __int64 v51; // rdx
  unsigned __int8 v52; // cl
  unsigned __int64 v53; // rcx
  void *v54; // rdi
  char *v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // [rsp+0h] [rbp-A8h]
  unsigned __int8 *v58; // [rsp+0h] [rbp-A8h]
  __int64 v59; // [rsp+8h] [rbp-A0h]
  __int64 v60; // [rsp+10h] [rbp-98h]
  __int64 v61; // [rsp+10h] [rbp-98h]
  __int64 v62; // [rsp+10h] [rbp-98h]
  unsigned __int8 *v63; // [rsp+28h] [rbp-80h]
  __int64 v64; // [rsp+28h] [rbp-80h]
  __int64 v65; // [rsp+28h] [rbp-80h]
  unsigned __int64 v66; // [rsp+28h] [rbp-80h]
  _QWORD *v67; // [rsp+28h] [rbp-80h]
  __int64 v68; // [rsp+30h] [rbp-78h]
  char v69; // [rsp+30h] [rbp-78h]
  unsigned __int8 *v70; // [rsp+38h] [rbp-70h]
  unsigned __int64 v72; // [rsp+48h] [rbp-60h]
  __int64 v73; // [rsp+50h] [rbp-58h]
  unsigned __int8 *v74; // [rsp+58h] [rbp-50h]
  __int64 v75; // [rsp+60h] [rbp-48h]
  void **v76; // [rsp+68h] [rbp-40h]

  v3 = a2;
  if ( !a2 )
    v3 = a1[1];
  if ( v3 <= 0x40 )
  {
    v8 = 0;
    v9 = 152;
    v7 = 1;
    v4 = 128;
    v5 = (unsigned __int8 *)a1[4];
    v6 = a1[2];
  }
  else
  {
    _BitScanReverse64(&v3, v3);
    LODWORD(v3) = v3 ^ 0x3F;
    if ( (int)v3 <= 1
      || (v4 = 1LL << (65 - (unsigned __int8)v3), v5 = (unsigned __int8 *)a1[4], v6 = a1[2], v4 > 0x71C71C71C71C7180LL) )
    {
      QT::qBadAlloc();
      sub_189540();
      return;
    }
    v7 = v4 >> 7;
    v8 = (v4 >> 7) - 1;
    v9 = 144 * (v4 >> 7) + 8;
  }
  v63 = v5;
  v57 = v8;
  v10 = (__int64 *)operator new[](v9);
  v11 = (void **)v63;
  *v10 = v7;
  v12 = v10 + 1;
  v13 = v10 + 1;
  v14 = (__int64)&v10[18 * v57 + 19];
  do
  {
    *v13 = -1;
    v13 += 9;
    *((_QWORD *)v13 - 2) = 0;
    *((_WORD *)v13 - 4) = 0;
    *(v13 - 8) = -1;
    *(v13 - 7) = -1;
    *(v13 - 6) = -1;
    *(v13 - 5) = -1;
    *(v13 - 4) = -1;
    *(v13 - 3) = -1;
    *(v13 - 2) = -1;
  }
  while ( v13 != (_OWORD *)v14 );
  v15 = v6 >> 7;
  a1[4] = v12;
  a1[2] = v4;
  if ( v15 )
  {
    v74 = v63;
    v70 = v63 + 128;
    v76 = (void **)v63;
    v75 = (__int64)&v63[144 * v15 + 128];
    do
    {
      v58 = v74;
      do
      {
        v16 = *v58;
        if ( (_BYTE)v16 != 0xFF )
        {
          v17 = (const __m128i *)(*(_QWORD *)v70 + 32 * v16);
          v64 = v17[1].m128i_i64[0];
          v60 = v17->m128i_i64[1];
          v18 = QT::qHash(v64, v60, a1[3]);
          v19 = v60;
          v20 = v64;
          v72 = a1[2];
          v73 = a1[4];
          v21 = v18 & (v72 - 1);
          v22 = v21 & 0x7F;
          v23 = v73 + 144 * (v21 >> 7);
          while ( 1 )
          {
            v24 = *(unsigned __int8 *)(v23 + v22);
            if ( v24 == 255 )
              break;
            v25 = *(_QWORD *)(v23 + 128) + 32 * v24;
            v2 = v19;
            if ( v20 == *(_QWORD *)(v25 + 16) )
            {
              v68 = v19;
              v65 = v23;
              v61 = v20;
              v26 = QT::QtPrivate::equalStrings(v20, *(_QWORD *)(v25 + 8), v20, v19);
              v20 = v61;
              v23 = v65;
              v19 = v68;
              if ( v26 )
                break;
            }
            if ( ++v22 == 128 )
            {
              v23 += 144;
              v22 = 0;
              if ( 0x8E38E38E38E38E39LL * ((v23 - v73) >> 4) == v72 >> 7 )
                v23 = v73;
            }
          }
          v27 = *(_BYTE *)(v23 + 137);
          if ( v27 == *(_BYTE *)(v23 + 136) )
          {
            if ( v27 )
            {
              if ( v27 == 48 )
              {
                v69 = 80;
                v50 = 2560;
                v49 = 80;
              }
              else
              {
                v49 = v27 + 16LL;
                v69 = v27 + 16;
                v50 = 32 * v49;
              }
            }
            else
            {
              v69 = 48;
              v50 = 1536;
              v49 = 48;
            }
            v66 = v49;
            v62 = v23;
            v28 = (_QWORD *)operator new[](v50);
            v23 = v62;
            v51 = 0;
            v52 = *(_BYTE *)(v62 + 136);
            if ( !v52
              || (v55 = *(char **)(v62 + 128),
                  v51 = v52,
                  v56 = 32LL * v52,
                  *v28 = *(_QWORD *)v55,
                  v28[(unsigned __int64)v56 / 8 - 1] = *(_QWORD *)&v55[v56 - 8],
                  qmemcpy(
                    (void *)((unsigned __int64)(v28 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)(v55 - ((char *)v28 - ((unsigned __int64)(v28 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v28 - (((_DWORD)v28 + 8) & 0xFFFFFFF8) + (unsigned int)v56) >> 3)),
                  v51 < v66) )
            {
              do
              {
                v53 = v51++;
                LOBYTE(v28[4 * v53]) = v51;
              }
              while ( v51 < v66 );
            }
            v54 = *(void **)(v62 + 128);
            if ( v54 )
            {
              v67 = v28;
              operator delete[](v54);
              v28 = v67;
              v23 = v62;
            }
            *(_QWORD *)(v23 + 128) = v28;
            v27 = *(_BYTE *)(v23 + 137);
            *(_BYTE *)(v23 + 136) = v69;
          }
          else
          {
            v28 = *(_QWORD **)(v23 + 128);
          }
          v29 = &v28[4 * v27];
          *(_BYTE *)(v23 + 137) = *(_BYTE *)v29;
          *(_BYTE *)(v23 + v22) = v27;
          v30 = _mm_loadu_si128(v17);
          v31 = v17[1].m128i_i64[0];
          *(__m128i *)v29 = v30;
          v29[2] = v31;
          if ( v30.m128i_i64[0] )
            _InterlockedAdd((volatile signed __int32 *)v30.m128i_i64[0], 1u);
          v32 = v17[1].m128i_i64[1];
          v17[1].m128i_i64[1] = 0;
          v29[3] = v32;
        }
        ++v58;
      }
      while ( v58 != v70 );
      v33 = *(char **)v70;
      if ( *(_QWORD *)v70 )
      {
        v34 = v74;
        v59 = v2;
        do
        {
          v35 = *v34;
          if ( (_BYTE)v35 != 0xFF )
          {
            v36 = &v33[32 * v35];
            v37 = *((_QWORD **)v36 + 3);
            while ( v37 )
            {
              v38 = v37;
              v37 = (_QWORD *)v37[1];
              operator delete(v38, 0x10u);
            }
            if ( *(_QWORD *)v36 && !_InterlockedSub(*(volatile signed __int32 **)v36, 1u) )
              free(*(void **)v36);
            v33 = *(char **)v70;
          }
          ++v34;
        }
        while ( v34 != v70 );
        v2 = v59;
        if ( v33 )
          operator delete[](v33);
        *(_QWORD *)v70 = 0;
      }
      v70 += 144;
      v74 += 144;
    }
    while ( v70 != (unsigned __int8 *)v75 );
    v11 = v76;
  }
  if ( v11 )
  {
    v39 = &v11[18 * (_QWORD)*(v11 - 1)];
    if ( v39 == v11 )
    {
      v48 = 0;
    }
    else
    {
      v40 = v39 - 2;
      v41 = v11;
      do
      {
        v42 = (char *)*v40;
        v39 -= 18;
        if ( *v40 )
        {
          v43 = v39;
          if ( v39 == v40 )
            goto LABEL_53;
          do
          {
            v44 = *(unsigned __int8 *)v43;
            if ( (_BYTE)v44 != 0xFF )
            {
              v45 = &v42[32 * v44];
              v46 = *((_QWORD **)v45 + 3);
              while ( v46 )
              {
                v47 = v46;
                v46 = (_QWORD *)v46[1];
                operator delete(v47, 0x10u);
              }
              if ( *(_QWORD *)v45 )
              {
                if ( !_InterlockedSub(*(volatile signed __int32 **)v45, 1u) )
                  free(*(void **)v45);
              }
              v42 = (char *)*v40;
            }
            v43 = (void **)((char *)v43 + 1);
          }
          while ( v43 != v40 );
          if ( v42 )
LABEL_53:
            operator delete[](v42);
        }
        v40 -= 18;
      }
      while ( v39 != v41 );
      v11 = v41;
      v48 = 144LL * (_QWORD)*(v41 - 1);
    }
    operator delete[](v11 - 1, v48 + 8);
  }
}
