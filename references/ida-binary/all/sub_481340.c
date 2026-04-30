void __fastcall sub_481340(_QWORD *a1, unsigned __int64 a2)
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
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // r12
  unsigned __int8 *v27; // r15
  __int64 i; // rax
  unsigned __int8 v29; // r13
  _QWORD *v30; // r11
  unsigned __int8 *v31; // r11
  void **v32; // r13
  __int64 v33; // rbx
  void *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // r10
  char v37; // r13
  __int64 v38; // r10
  unsigned __int64 v39; // rdi
  _QWORD *v40; // rax
  unsigned __int64 v41; // r10
  unsigned __int8 v42; // cl
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  void *v45; // rdi
  char *v46; // rsi
  _QWORD *v47; // [rsp+0h] [rbp-68h]
  unsigned __int64 v48; // [rsp+0h] [rbp-68h]
  _QWORD *v49; // [rsp+0h] [rbp-68h]
  __int64 v50; // [rsp+0h] [rbp-68h]
  void **v51; // [rsp+8h] [rbp-60h]
  void **v52; // [rsp+10h] [rbp-58h]
  _QWORD *v53; // [rsp+18h] [rbp-50h]
  __int64 v54; // [rsp+20h] [rbp-48h]
  __int64 v55; // [rsp+28h] [rbp-40h]

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
      sub_4817E0();
      return;
    }
    v7 = v6 >> 7;
    v8 = (v6 >> 7) - 1;
    v9 = 144 * (v6 >> 7) + 8;
  }
  v47 = a1;
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
  v47[4] = v11;
  v14 = v5 >> 7;
  v47[2] = v6;
  if ( v5 >> 7 )
  {
    v15 = (void **)(v4 + 128);
    v16 = v47;
    v17 = 144 * v14 + v4 + 128;
    do
    {
      v54 = v4;
      v18 = v15 - 16;
      v19 = v15;
      v20 = v16;
      v55 = v17;
      do
      {
        v21 = *(unsigned __int8 *)v18;
        if ( (_BYTE)v21 != 0xFF )
        {
          v22 = (const __m128i *)((char *)*v19 + 16 * v21);
          v23 = v20[2];
          v24 = v20[4];
          v25 = (v23 - 1)
              & (((0xD6E8FEB86659FD93LL
                 * (((0xD6E8FEB86659FD93LL
                    * (v22->m128i_i64[0] ^ v20[3] ^ ((unsigned __int64)(v22->m128i_i64[0] ^ v20[3]) >> 32))) >> 32)
                  ^ (0xD6E8FEB86659FD93LL
                   * (v22->m128i_i64[0] ^ v20[3] ^ ((unsigned __int64)(v22->m128i_i64[0] ^ v20[3]) >> 32))))) >> 32)
               ^ (0xD6E8FEB86659FD93LL
                * (((0xD6E8FEB86659FD93LL
                   * (v22->m128i_i64[0] ^ v20[3] ^ ((unsigned __int64)(v22->m128i_i64[0] ^ v20[3]) >> 32))) >> 32)
                 ^ (0xD6E8FEB86659FD93LL
                  * (v22->m128i_i64[0] ^ v20[3] ^ ((unsigned __int64)(v22->m128i_i64[0] ^ v20[3]) >> 32))))));
          v26 = v25 & 0x7F;
          v27 = (unsigned __int8 *)(v24 + 144 * (v25 >> 7));
LABEL_14:
          for ( i = v27[v26]; i != 255; i = *v27 )
          {
            if ( v22->m128i_i64[0] == *(_QWORD *)(*((_QWORD *)v27 + 16) + 16 * i) )
              break;
            if ( ++v26 != 128 )
              goto LABEL_14;
            v27 += 144;
            v26 = 0;
            if ( 0x8E38E38E38E38E39LL * ((__int64)&v27[-v24] >> 4) == v23 >> 7 )
              v27 = (unsigned __int8 *)v20[4];
          }
          v29 = v27[137];
          if ( v29 == v27[136] )
          {
            if ( v29 )
            {
              if ( v29 == 48 )
              {
                v37 = 80;
                v39 = 1280;
                v38 = 80;
              }
              else
              {
                v36 = v29;
                v37 = v29 + 16;
                v38 = v36 + 16;
                v39 = 16 * v38;
              }
            }
            else
            {
              v37 = 48;
              v39 = 768;
              v38 = 48;
            }
            v53 = v20;
            v52 = v18;
            v51 = v19;
            v48 = v38;
            v40 = (_QWORD *)operator new[](v39);
            v41 = v48;
            v19 = v51;
            v42 = v27[136];
            v30 = v40;
            v43 = 0;
            v18 = v52;
            v20 = v53;
            if ( !v42
              || (v46 = *((char **)v27 + 16),
                  v43 = v42,
                  *v30 = *(_QWORD *)v46,
                  v50 = 16LL * v42,
                  v30[(unsigned __int64)v50 / 8 - 1] = *(_QWORD *)&v46[v50 - 8],
                  qmemcpy(
                    (void *)((unsigned __int64)(v30 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)(v46 - ((char *)v30 - ((unsigned __int64)(v30 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v30 - (((_DWORD)v30 + 8) & 0xFFFFFFF8) + (unsigned int)v50) >> 3)),
                  v42 < v41) )
            {
              do
              {
                v44 = v43++;
                LOBYTE(v30[2 * v44]) = v43;
              }
              while ( v43 < v41 );
            }
            v45 = *((void **)v27 + 16);
            if ( v45 )
            {
              v49 = v30;
              operator delete[](v45);
              v20 = v53;
              v18 = v52;
              v19 = v51;
              v30 = v49;
            }
            v27[136] = v37;
            v29 = v27[137];
            *((_QWORD *)v27 + 16) = v30;
          }
          else
          {
            v30 = *((_QWORD **)v27 + 16);
          }
          v31 = (unsigned __int8 *)&v30[2 * v29];
          v27[137] = *v31;
          v27[v26] = v29;
          *(__m128i *)v31 = _mm_loadu_si128(v22);
        }
        v18 = (void **)((char *)v18 + 1);
      }
      while ( v19 != v18 );
      v4 = v54;
      v32 = v19;
      v16 = v20;
      v17 = v55;
      if ( *v19 )
      {
        operator delete[](*v19);
        *v32 = nullptr;
      }
      v15 = v32 + 18;
    }
    while ( v15 != (void **)v55 );
  }
  if ( v4 )
  {
    v33 = v4 + 144LL * *(_QWORD *)(v4 - 8);
    if ( v33 == v4 )
    {
      v35 = 0;
    }
    else
    {
      do
      {
        v34 = *(void **)(v33 - 16);
        v33 -= 144;
        if ( v34 )
          operator delete[](v34);
      }
      while ( v33 != v4 );
      v35 = 144LL * *(_QWORD *)(v4 - 8);
    }
    operator delete[]((void *)(v4 - 8), v35 + 8);
  }
}
