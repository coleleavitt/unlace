_QWORD *__fastcall sub_25030(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  _QWORD *v3; // rax
  _QWORD *v4; // r13
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 *v10; // rax
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  _OWORD *v13; // rax
  unsigned __int8 *v14; // r9
  __int64 v15; // rax
  unsigned __int64 v16; // r10
  __int64 v17; // rsi
  _QWORD *v18; // r15
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rax
  _QWORD *v26; // r12
  _BYTE *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rbp
  void *v31; // rdi
  __int64 v32; // rax
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rdi
  _QWORD *v36; // rax
  unsigned __int8 v37; // cl
  unsigned __int64 v38; // rax
  void *v39; // rdi
  char *v40; // rsi
  __int64 v41; // rcx
  _QWORD *v42; // rax
  unsigned __int64 v43; // rax
  int v44; // eax
  unsigned __int64 v45; // rbx
  __int64 v46; // rbx
  QT::QHashSeed *v47; // rdi
  __int64 *v48; // rax
  __int64 v49; // rbx
  _QWORD *v50; // rdx
  _OWORD *v51; // rax
  unsigned __int64 v52; // [rsp+8h] [rbp-70h]
  unsigned __int8 *v53; // [rsp+8h] [rbp-70h]
  unsigned __int64 v54; // [rsp+10h] [rbp-68h]
  unsigned __int8 *v55; // [rsp+18h] [rbp-60h]
  unsigned __int8 *v56; // [rsp+20h] [rbp-58h]
  __int64 v58; // [rsp+30h] [rbp-48h]
  __int64 v59; // [rsp+38h] [rbp-40h]

  v2 = a2;
  if ( !a1 )
  {
    v42 = (_QWORD *)operator new(0x28u);
    *(_DWORD *)v42 = 1;
    v4 = v42;
    v42[1] = 0;
    v42[3] = 0;
    v42[4] = 0;
    if ( a2 <= 0x40 )
    {
LABEL_61:
      v42[2] = 128;
      v47 = (QT::QHashSeed *)&qword_98;
      v46 = 1;
LABEL_53:
      v48 = (__int64 *)operator new[]((unsigned __int64)v47);
      *v48 = v46;
      v49 = v46 - 2;
      v50 = v48 + 1;
      v51 = v48 + 1;
      do
      {
        --v49;
        *v51 = -1;
        v51 += 9;
        *((_QWORD *)v51 - 2) = 0;
        *((_WORD *)v51 - 4) = 0;
        *(v51 - 8) = -1;
        *(v51 - 7) = -1;
        *(v51 - 6) = -1;
        *(v51 - 5) = -1;
        *(v51 - 4) = -1;
        *(v51 - 3) = -1;
        *(v51 - 2) = -1;
      }
      while ( v49 != -2 );
      v4[4] = v50;
      v4[3] = QT::QHashSeed::globalSeed(v47);
      return v4;
    }
    _BitScanReverse64(&v43, a2);
    v44 = v43 ^ 0x3F;
    if ( v44 > 1 )
    {
      v45 = 1LL << (65 - (unsigned __int8)v44);
      v4[2] = v45;
      if ( v45 <= 0x71C71C71C71C7180LL )
      {
        v46 = v45 >> 7;
        v47 = (QT::QHashSeed *)(144 * v46 + 8);
        goto LABEL_53;
      }
      goto LABEL_60;
    }
LABEL_59:
    v4[2] = -1;
LABEL_60:
    v42 = (_QWORD *)QT::qBadAlloc();
    goto LABEL_61;
  }
  v3 = (_QWORD *)operator new(0x28u);
  *(_DWORD *)v3 = 1;
  v4 = v3;
  v3[4] = 0;
  v5 = a1[1];
  v6 = a1[3];
  v4[1] = v5;
  if ( a2 < v5 )
    v2 = v5;
  v4[3] = v6;
  if ( v2 > 0x40 )
  {
    _BitScanReverse64(&v2, v2);
    if ( (int)(v2 ^ 0x3F) <= 1 )
    {
      v4[2] = -1;
    }
    else
    {
      v7 = 1LL << (65 - ((unsigned __int8)v2 ^ 0x3Fu));
      v4[2] = v7;
      if ( v7 <= 0x71C71C71C71C7180LL )
      {
        v8 = v7 >> 7;
        v9 = 144 * v8 + 8;
        goto LABEL_8;
      }
    }
    QT::qBadAlloc();
    goto LABEL_59;
  }
  v4[2] = 128;
  v9 = 152;
  v8 = 1;
LABEL_8:
  v10 = (__int64 *)operator new[](v9);
  *v10 = v8;
  v11 = v8 - 2;
  v12 = v10 + 1;
  v13 = v10 + 1;
  do
  {
    --v11;
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
  while ( v11 != -2 );
  v4[4] = v12;
  v52 = a1[2];
  if ( v52 >> 7 )
  {
    v58 = 0;
    v59 = 144 * (v52 >> 7);
    do
    {
      v14 = (unsigned __int8 *)(a1[4] + v58);
      v53 = v14;
      v56 = v14 + 128;
      do
      {
        v15 = *v53;
        if ( (_BYTE)v15 != 0xFF )
        {
          v16 = v4[2];
          v17 = v4[4];
          v18 = (_QWORD *)(*((_QWORD *)v14 + 16) + 8 * v15);
          v19 = 0xD6E8FEB86659FD93LL
              * (((0xD6E8FEB86659FD93LL * (*v18 ^ HIDWORD(*v18))) >> 32)
               ^ (0xD6E8FEB86659FD93LL * (*v18 ^ HIDWORD(*v18))));
          v20 = (v16 - 1) & (HIDWORD(v19) ^ v19 ^ v4[3]);
          v21 = v20 & 0x7F;
          v22 = v17 + 144 * (v20 >> 7);
LABEL_15:
          v23 = v21;
          while ( 1 )
          {
            v24 = *(unsigned __int8 *)(v22 + v23);
            if ( v24 == 255 || *v18 == *(_QWORD *)(*(_QWORD *)(v22 + 128) + 8 * v24) )
              break;
            if ( ++v23 == 128 )
            {
              v22 += 144;
              v21 = 0;
              v23 = 0;
              if ( 0x8E38E38E38E38E39LL * ((v22 - v17) >> 4) == v16 >> 7 )
              {
                v22 = v4[4];
                goto LABEL_15;
              }
            }
          }
          v25 = *(unsigned __int8 *)(v22 + 137);
          if ( (_BYTE)v25 == *(_BYTE *)(v22 + 136) )
          {
            if ( (_BYTE)v25 )
            {
              if ( (_BYTE)v25 == 48 )
              {
                v35 = 640;
                v34 = 80;
              }
              else
              {
                v34 = v25 + 16;
                v35 = 8 * (v25 + 16);
              }
            }
            else
            {
              v35 = 384;
              v34 = 48;
            }
            v55 = v14;
            v54 = v23;
            v36 = (_QWORD *)operator new[](v35);
            v37 = *(_BYTE *)(v22 + 136);
            v26 = v36;
            v38 = 0;
            v23 = v54;
            v14 = v55;
            if ( !v37
              || (v40 = *(char **)(v22 + 128),
                  v38 = v37,
                  v41 = 8LL * v37,
                  *v26 = *(_QWORD *)v40,
                  v26[(unsigned __int64)v41 / 8 - 1] = *(_QWORD *)&v40[v41 - 8],
                  qmemcpy(
                    (void *)((unsigned __int64)(v26 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)(v40 - ((char *)v26 - ((unsigned __int64)(v26 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v26 - (((_DWORD)v26 + 8) & 0xFFFFFFF8) + (unsigned int)v41) >> 3)),
                  v38 < v34) )
            {
              do
              {
                LOBYTE(v26[v38]) = v38 + 1;
                ++v38;
              }
              while ( v38 < v34 );
            }
            v39 = *(void **)(v22 + 128);
            if ( v39 )
            {
              operator delete[](v39);
              v14 = v55;
              v23 = v54;
            }
            *(_QWORD *)(v22 + 128) = v26;
            LOBYTE(v25) = *(_BYTE *)(v22 + 137);
            *(_BYTE *)(v22 + 136) = v34;
          }
          else
          {
            v26 = *(_QWORD **)(v22 + 128);
          }
          v27 = &v26[(unsigned __int8)v25];
          *(_BYTE *)(v22 + 137) = *v27;
          *(_BYTE *)(v22 + v23) = v25;
          *(_QWORD *)v27 = *v18;
        }
        ++v53;
      }
      while ( v53 != v56 );
      v58 += 144;
    }
    while ( v59 != v58 );
  }
  if ( *(_DWORD *)a1 != -1 && !_InterlockedSub((volatile signed __int32 *)a1, 1u) )
  {
    v28 = a1[4];
    if ( v28 )
    {
      v29 = v28 + 144LL * *(_QWORD *)(v28 - 8);
      if ( v28 == v29 )
      {
        v32 = 0;
      }
      else
      {
        do
        {
          v30 = v29;
          v31 = *(void **)(v29 - 16);
          v29 -= 144;
          if ( v31 )
            operator delete[](v31);
        }
        while ( a1[4] != v29 );
        v32 = 144LL * *(_QWORD *)(v30 - 152);
      }
      operator delete[]((void *)(v29 - 8), v32 + 8);
    }
    operator delete(a1, 0x28u);
  }
  return v4;
}
