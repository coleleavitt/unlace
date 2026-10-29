__int64 __fastcall sub_12EC800(_QWORD *a1)
{
  _QWORD *v2; // rax
  _DWORD *v3; // rdi
  bool v4; // zf
  __int64 (__fastcall *v5)(__int64); // rdx
  char v6; // al
  __int64 v7; // rsi
  _BYTE *v8; // r8
  char v9; // al
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 result; // rax
  void (*v13)(void); // rdx
  _QWORD *v14; // rdx
  _BYTE *v15; // rcx
  _QWORD *v16; // rax
  __int64 v17; // r12
  __m128i si128; // xmm0
  void *v19; // rdi
  void *v20; // rdi
  void *v21; // rdi
  void *v22; // rdi
  void **v23; // r13
  void **v24; // rbp
  char *v25; // rdi
  int v26; // eax
  __int64 v27; // rbp
  __int64 v28; // r13
  _QWORD *v29; // rax
  int v30; // eax
  char *v31; // rdi
  __int64 v32; // rbp
  __int64 v33; // r13
  _QWORD *v34; // rax
  void **v35; // r13
  void **v36; // rbp
  void **v37; // r13
  void **v38; // rbp
  void *v39; // rdi
  void *v40; // rdi
  void *v41; // rdi
  void *v42; // rdi
  void *v43; // rdi
  void *v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rsi
  _QWORD *v47; // rax
  _DWORD *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rax
  void *v51[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v52; // [rsp+20h] [rbp-68h] BYREF

  v2 = sub_105D340(a1[4], *(_QWORD *)(a1[2] + 16LL));
  if ( v2 )
  {
    v3 = (_DWORD *)a1[5];
    ++*((_DWORD *)v2 + 50);
    a1[5] = v2;
    if ( !v3 )
      goto LABEL_5;
    v4 = v3[50]-- == 1;
    if ( !v4 )
      goto LABEL_5;
  }
  else
  {
    v3 = (_DWORD *)a1[5];
    a1[5] = 0;
    if ( !v3 )
      return 0;
    v4 = v3[50]-- == 1;
    if ( !v4 )
      return 0;
  }
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 8LL))(v3);
  v2 = (_QWORD *)a1[5];
  if ( !v2 )
    return 0;
LABEL_5:
  if ( !a1[7] )
  {
    v14 = (_QWORD *)a1[2];
    v15 = (_BYTE *)*v14;
    if ( (*(_BYTE *)(*v14 + 60LL) & 0x10) != 0 || (v15[68] & 8) != 0 || (v15[89] & 4) != 0 || (v15[96] & 0x10) != 0 )
    {
      if ( *(_QWORD *)(v14[20] + 640LL) )
      {
        v16 = (_QWORD *)operator new(0x218u);
        v17 = a1[6];
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
        a1[6] = v16;
        memset(v16, 0, 0x218u);
        *((_DWORD *)v16 + 48) = 1;
        *v16 = v16 + 2;
        v16[4] = v16 + 6;
        v16[8] = v16 + 10;
        v16[12] = v16 + 14;
        v16[16] = v16 + 18;
        v16[20] = v16 + 22;
        v16[25] = v16 + 27;
        v16[46] = v16 + 48;
        v16[53] = v16 + 55;
        v16[59] = v16 + 61;
        *((__m128i *)v16 + 18) = si128;
        *(__m128i *)(v16 + 39) = si128;
        v16[63] = v16 + 65;
        if ( v17 )
        {
          v19 = *(void **)(v17 + 504);
          if ( v19 != (void *)(v17 + 520) )
            operator delete(v19);
          v20 = *(void **)(v17 + 472);
          if ( v20 != (void *)(v17 + 488) )
            operator delete(v20);
          v21 = *(void **)(v17 + 424);
          if ( v21 != (void *)(v17 + 440) )
            operator delete(v21);
          v22 = *(void **)(v17 + 368);
          if ( v22 != (void *)(v17 + 384) )
            operator delete(v22);
          v23 = *(void ***)(v17 + 336);
          v24 = *(void ***)(v17 + 328);
          if ( v23 != v24 )
          {
            do
            {
              while ( *v24 != v24 + 2 )
              {
                operator delete(*v24);
                v24 += 4;
                if ( v24 == v23 )
                  goto LABEL_39;
              }
              v24 += 4;
            }
            while ( v23 != v24 );
LABEL_39:
            v24 = *(void ***)(v17 + 328);
          }
          if ( v24 )
            operator delete(v24);
          v25 = *(char **)(v17 + 304);
          if ( *(_DWORD *)(v17 + 316) )
          {
            v26 = *(_DWORD *)(v17 + 312);
            if ( v26 )
            {
              v27 = 0;
              v28 = 8LL * (unsigned int)(v26 - 1) + 8;
              do
              {
                v29 = *(_QWORD **)&v25[v27];
                if ( v29 != (_QWORD *)-8LL && v29 )
                {
                  operator delete(*(_QWORD *)&v25[v27], *v29 + 17LL, 8);
                  v25 = *(char **)(v17 + 304);
                }
                v27 += 8;
              }
              while ( v28 != v27 );
            }
          }
          free(v25);
          if ( *(_DWORD *)(v17 + 292) )
          {
            v30 = *(_DWORD *)(v17 + 288);
            v31 = *(char **)(v17 + 280);
            if ( v30 )
            {
              v32 = 0;
              v33 = 8LL * (unsigned int)(v30 - 1) + 8;
              do
              {
                v34 = *(_QWORD **)&v31[v32];
                if ( v34 != (_QWORD *)-8LL && v34 )
                {
                  operator delete(*(_QWORD *)&v31[v32], *v34 + 17LL, 8);
                  v31 = *(char **)(v17 + 280);
                }
                v32 += 8;
              }
              while ( v32 != v33 );
            }
          }
          else
          {
            v31 = *(char **)(v17 + 280);
          }
          free(v31);
          v35 = *(void ***)(v17 + 264);
          v36 = *(void ***)(v17 + 256);
          if ( v35 != v36 )
          {
            do
            {
              while ( *v36 != v36 + 2 )
              {
                operator delete(*v36);
                v36 += 4;
                if ( v35 == v36 )
                  goto LABEL_59;
              }
              v36 += 4;
            }
            while ( v35 != v36 );
LABEL_59:
            v36 = *(void ***)(v17 + 256);
          }
          if ( v36 )
            operator delete(v36);
          v37 = *(void ***)(v17 + 240);
          v38 = *(void ***)(v17 + 232);
          if ( v37 != v38 )
          {
            do
            {
              while ( *v38 != v38 + 2 )
              {
                operator delete(*v38);
                v38 += 4;
                if ( v37 == v38 )
                  goto LABEL_65;
              }
              v38 += 4;
            }
            while ( v37 != v38 );
LABEL_65:
            v38 = *(void ***)(v17 + 232);
          }
          if ( v38 )
            operator delete(v38);
          v39 = *(void **)(v17 + 200);
          if ( v39 != (void *)(v17 + 216) )
            operator delete(v39);
          v40 = *(void **)(v17 + 160);
          if ( v40 != (void *)(v17 + 176) )
            operator delete(v40);
          v41 = *(void **)(v17 + 128);
          if ( v41 != (void *)(v17 + 144) )
            operator delete(v41);
          v42 = *(void **)(v17 + 96);
          if ( v42 != (void *)(v17 + 112) )
            operator delete(v42);
          v43 = *(void **)(v17 + 64);
          if ( v43 != (void *)(v17 + 80) )
            operator delete(v43);
          v44 = *(void **)(v17 + 32);
          if ( v44 != (void *)(v17 + 48) )
            operator delete(v44);
          if ( *(_QWORD *)v17 != v17 + 16 )
            operator delete(*(void **)v17);
          operator delete((void *)v17, 0x218u);
        }
        sub_22BC1E0(
          v51,
          *(_QWORD *)(*(_QWORD *)(a1[2] + 160LL) + 632LL),
          *(_QWORD *)(*(_QWORD *)(a1[2] + 160LL) + 640LL),
          0);
        sub_A0AAD0(a1[6], v51);
        if ( v51[0] != &v52 )
          operator delete(v51[0]);
        v45 = a1[6];
        v46 = *(_QWORD *)(a1[2] + 160LL);
        if ( *(_BYTE *)(v46 + 696) )
        {
          sub_9EE8A0(v45 + 64, v46 + 664);
          v45 = a1[6];
          v46 = *(_QWORD *)(a1[2] + 160LL);
        }
        if ( *(_BYTE *)(v46 + 728) )
        {
          sub_11189B0(v45 + 232, (__int64 *)(v46 + 704));
          v45 = a1[6];
        }
        sub_9EE8A0(v45 + 32, a1[5] + 216LL);
        v47 = sub_105D340(a1[4], a1[6]);
        if ( v47 )
          ++*((_DWORD *)v47 + 50);
        v48 = (_DWORD *)a1[7];
        a1[7] = v47;
        if ( v48 )
        {
          v4 = v48[50]-- == 1;
          if ( v4 )
            (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v48 + 8LL))(v48);
        }
        v2 = (_QWORD *)a1[5];
      }
    }
  }
  v5 = *(__int64 (__fastcall **)(__int64))(*v2 + 152LL);
  if ( v5 == sub_102B840 )
    v6 = *((_BYTE *)v2 + 285);
  else
    v6 = v5((__int64)v2);
  v7 = a1[4];
  v8 = *(_BYTE **)a1[2];
  if ( !v6 )
  {
    v9 = v8[106];
    if ( (v9 & 0x40) == 0 )
    {
      if ( v9 < 0 )
      {
        sub_FC70B0((__int64)v51, v7, 0, 823);
        sub_AEA040((__int64)v51);
        v50 = a1[2];
        v7 = a1[4];
        v8 = *(_BYTE **)v50;
        *(_BYTE *)(*(_QWORD *)v50 + 106LL) &= ~0x80u;
      }
      if ( (((v8[207] >> 1) + 3) & 3u) <= 1 )
      {
        sub_FC70B0((__int64)v51, v7, 0, 822);
        sub_AEA040((__int64)v51);
        v49 = a1[2];
        v7 = a1[4];
        v8 = *(_BYTE **)v49;
        *(_BYTE *)(*(_QWORD *)v49 + 207LL) &= 0xF9u;
      }
    }
  }
  v10 = (__int64 *)a1[5];
  v11 = *v10;
  if ( (v8[47] & 0x20) == 0 )
    goto LABEL_17;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64 *, _BYTE *, __int64))(v11 + 896))(v10, v8, v7) )
    return 0;
  v10 = (__int64 *)a1[5];
  v7 = a1[4];
  v8 = *(_BYTE **)a1[2];
  v11 = *v10;
LABEL_17:
  (*(void (__fastcall **)(__int64 *, __int64, _BYTE *, _QWORD))(v11 + 432))(v10, v7, v8, a1[7]);
  result = 1;
  if ( a1[7] )
  {
    v13 = *(void (**)(void))(*(_QWORD *)a1[5] + 904LL);
    if ( v13 != nullsub_569 )
    {
      v13();
      return 1;
    }
  }
  return result;
}
