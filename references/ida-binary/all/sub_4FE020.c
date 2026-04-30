void __fastcall sub_4FE020(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rax
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rdi
  __int64 *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rcx
  _OWORD *v13; // rax
  unsigned __int64 v14; // rax
  void **v15; // r13
  _QWORD *v16; // rbx
  __int64 v17; // r12
  void **v18; // r8
  void **v19; // r9
  _QWORD *v20; // rdx
  __int64 v21; // rbx
  const __m128i *v22; // rbx
  unsigned __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r12
  unsigned __int8 *v28; // r15
  __int64 i; // rax
  unsigned __int8 v30; // r13
  _QWORD *v31; // r11
  unsigned __int8 *v32; // r11
  void **v33; // r13
  __int64 v34; // rbx
  void *v35; // rdi
  __int64 v36; // rax
  __int64 v37; // r10
  char v38; // r13
  __int64 v39; // r10
  unsigned __int64 v40; // rdi
  _QWORD *v41; // rax
  unsigned __int64 v42; // r10
  unsigned __int8 v43; // cl
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  void *v46; // rdi
  char *v47; // rsi
  _QWORD *v48; // [rsp+0h] [rbp-68h]
  unsigned __int64 v49; // [rsp+0h] [rbp-68h]
  _QWORD *v50; // [rsp+0h] [rbp-68h]
  __int64 v51; // [rsp+0h] [rbp-68h]
  void **v52; // [rsp+8h] [rbp-60h]
  void **v53; // [rsp+10h] [rbp-58h]
  _QWORD *v54; // [rsp+18h] [rbp-50h]
  __int64 v55; // [rsp+20h] [rbp-48h]
  __int64 v56; // [rsp+28h] [rbp-40h]

  v3 = a2;
  if ( !a2 )
    v3 = a1[1];
  if ( v3 <= 0x40 )
  {
    v4 = a1[4];
    v5 = a1[2];
    v8 = 0;
    v9 = 152;
    v7 = 1;
    v6 = 128;
  }
  else
  {
    _BitScanReverse64(&v3, v3);
    LODWORD(v3) = v3 ^ 0x3F;
    if ( (int)v3 <= 1 || (v4 = a1[4], v5 = a1[2], v6 = 1LL << (65 - (unsigned __int8)v3), v6 > 0x71C71C71C71C7180LL) )
    {
      QT::qBadAlloc();
      sub_4FE4C0();
      return;
    }
    v7 = v6 >> 7;
    v8 = (v6 >> 7) - 1;
    v9 = 144 * (v6 >> 7) + 8;
  }
  v48 = a1;
  v10 = (__int64 *)operator new[](v9);
  v11 = v10 + 1;
  *v10 = v7;
  v12 = (__int64)&v10[18 * v8 + 19];
  v13 = v10 + 1;
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
  while ( (_OWORD *)v12 != v13 );
  v48[4] = v11;
  v14 = v5 >> 7;
  v48[2] = v6;
  if ( v5 >> 7 )
  {
    v15 = (void **)(v4 + 128);
    v16 = v48;
    v17 = 144 * v14 + v4 + 128;
    do
    {
      v55 = v4;
      v18 = v15 - 16;
      v19 = v15;
      v20 = v16;
      v56 = v17;
      do
      {
        v21 = *(unsigned __int8 *)v18;
        if ( (_BYTE)v21 != 0xFF )
        {
          v22 = (const __m128i *)((char *)*v19 + 16 * v21);
          v23 = v20[2];
          v24 = v20[4];
          v25 = v22->m128i_i32[0];
          v26 = (v23 - 1)
              & (((0xD6E8FEB86659FD93LL
                 * (((0xD6E8FEB86659FD93LL * (v20[3] ^ v25 ^ ((v20[3] ^ v25) >> 32))) >> 32)
                  ^ (0xD6E8FEB86659FD93LL * (v20[3] ^ v25 ^ ((v20[3] ^ v25) >> 32))))) >> 32)
               ^ (0xD6E8FEB86659FD93LL
                * (((0xD6E8FEB86659FD93LL * (v20[3] ^ v25 ^ ((v20[3] ^ v25) >> 32))) >> 32)
                 ^ (0xD6E8FEB86659FD93LL * (v20[3] ^ v25 ^ ((v20[3] ^ v25) >> 32))))));
          v27 = v26 & 0x7F;
          v28 = (unsigned __int8 *)(v24 + 144 * (v26 >> 7));
LABEL_14:
          for ( i = v28[v27]; i != 255; i = *v28 )
          {
            if ( (_DWORD)v25 == *(_DWORD *)(*((_QWORD *)v28 + 16) + 16 * i) )
              break;
            if ( ++v27 != 128 )
              goto LABEL_14;
            v28 += 144;
            v27 = 0;
            if ( 0x8E38E38E38E38E39LL * ((__int64)&v28[-v24] >> 4) == v23 >> 7 )
              v28 = (unsigned __int8 *)v20[4];
          }
          v30 = v28[137];
          if ( v30 == v28[136] )
          {
            if ( v30 )
            {
              if ( v30 == 48 )
              {
                v38 = 80;
                v40 = 1280;
                v39 = 80;
              }
              else
              {
                v37 = v30;
                v38 = v30 + 16;
                v39 = v37 + 16;
                v40 = 16 * v39;
              }
            }
            else
            {
              v38 = 48;
              v40 = 768;
              v39 = 48;
            }
            v54 = v20;
            v53 = v18;
            v52 = v19;
            v49 = v39;
            v41 = (_QWORD *)operator new[](v40);
            v42 = v49;
            v19 = v52;
            v43 = v28[136];
            v31 = v41;
            v44 = 0;
            v18 = v53;
            v20 = v54;
            if ( !v43
              || (v47 = *((char **)v28 + 16),
                  v44 = v43,
                  *v31 = *(_QWORD *)v47,
                  v51 = 16LL * v43,
                  v31[(unsigned __int64)v51 / 8 - 1] = *(_QWORD *)&v47[v51 - 8],
                  qmemcpy(
                    (void *)((unsigned __int64)(v31 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)(v47 - ((char *)v31 - ((unsigned __int64)(v31 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v31 - (((_DWORD)v31 + 8) & 0xFFFFFFF8) + (unsigned int)v51) >> 3)),
                  v43 < v42) )
            {
              do
              {
                v45 = v44++;
                LOBYTE(v31[2 * v45]) = v44;
              }
              while ( v44 < v42 );
            }
            v46 = *((void **)v28 + 16);
            if ( v46 )
            {
              v50 = v31;
              operator delete[](v46);
              v20 = v54;
              v18 = v53;
              v19 = v52;
              v31 = v50;
            }
            v28[136] = v38;
            v30 = v28[137];
            *((_QWORD *)v28 + 16) = v31;
          }
          else
          {
            v31 = *((_QWORD **)v28 + 16);
          }
          v32 = (unsigned __int8 *)&v31[2 * v30];
          v28[137] = *v32;
          v28[v27] = v30;
          *(__m128i *)v32 = _mm_loadu_si128(v22);
        }
        v18 = (void **)((char *)v18 + 1);
      }
      while ( v19 != v18 );
      v4 = v55;
      v33 = v19;
      v16 = v20;
      v17 = v56;
      if ( *v19 )
      {
        operator delete[](*v19);
        *v33 = nullptr;
      }
      v15 = v33 + 18;
    }
    while ( v15 != (void **)v56 );
  }
  if ( v4 )
  {
    v34 = v4 + 144LL * *(_QWORD *)(v4 - 8);
    if ( v34 == v4 )
    {
      v36 = 0;
    }
    else
    {
      do
      {
        v35 = *(void **)(v34 - 16);
        v34 -= 144;
        if ( v35 )
          operator delete[](v35);
      }
      while ( v34 != v4 );
      v36 = 144LL * *(_QWORD *)(v4 - 8);
    }
    operator delete[]((void *)(v4 - 8), v36 + 8);
  }
}
