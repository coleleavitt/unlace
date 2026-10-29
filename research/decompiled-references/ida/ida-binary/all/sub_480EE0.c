_QWORD *__fastcall sub_480EE0(_QWORD *a1, int *a2, const QT::QIcon *a3)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbp
  unsigned __int8 *v11; // rbx
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  unsigned __int8 v14; // r15
  _QWORD *v15; // rdx
  __int64 v16; // rax
  QT::QIcon *v17; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  char v28; // r15
  __int64 v29; // r8
  unsigned __int64 v30; // rdi
  _QWORD *v31; // rax
  unsigned __int8 v32; // cl
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  void *v35; // rdi
  char *v36; // rsi
  __int64 v37; // rcx
  unsigned __int64 v38; // [rsp+8h] [rbp-60h]
  _QWORD *v39; // [rsp+8h] [rbp-60h]
  __int64 v40; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v41[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a1[2];
  v41[1] = __readfsqword(0x28u);
  if ( !v5 )
  {
    v13 = a1[1];
    goto LABEL_15;
  }
  v7 = *a2;
  v8 = a1[4];
  v9 = (v5 - 1)
     & (((0xD6E8FEB86659FD93LL
        * (((0xD6E8FEB86659FD93LL * (a1[3] ^ v7 ^ ((a1[3] ^ v7) >> 32))) >> 32)
         ^ (0xD6E8FEB86659FD93LL * (a1[3] ^ v7 ^ ((a1[3] ^ v7) >> 32))))) >> 32)
      ^ (0xD6E8FEB86659FD93LL
       * (((0xD6E8FEB86659FD93LL * (a1[3] ^ v7 ^ ((a1[3] ^ v7) >> 32))) >> 32)
        ^ (0xD6E8FEB86659FD93LL * (a1[3] ^ v7 ^ ((a1[3] ^ v7) >> 32))))));
  v10 = v9 & 0x7F;
  v11 = (unsigned __int8 *)(v8 + 144 * (v9 >> 7));
LABEL_3:
  v12 = v11[v10];
  if ( v12 == 255 )
  {
LABEL_9:
    v13 = a1[1];
    if ( v13 < v5 >> 1 )
    {
LABEL_10:
      v14 = v11[137];
      if ( v14 == v11[136] )
      {
        if ( v14 )
        {
          if ( v14 == 48 )
          {
            v28 = 80;
            v30 = 1280;
            v29 = 80;
          }
          else
          {
            v27 = v14;
            v28 = v14 + 16;
            v29 = v27 + 16;
            v30 = 16 * v29;
          }
        }
        else
        {
          v28 = 48;
          v30 = 768;
          v29 = 48;
        }
        v38 = v29;
        v31 = (_QWORD *)operator new[](v30);
        v32 = v11[136];
        v15 = v31;
        v33 = 0;
        if ( !v32
          || (v36 = *((char **)v11 + 16),
              v33 = v32,
              v37 = 16LL * v32,
              *v15 = *(_QWORD *)v36,
              v15[(unsigned __int64)v37 / 8 - 1] = *(_QWORD *)&v36[v37 - 8],
              qmemcpy(
                (void *)((unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                (const void *)(v36 - ((char *)v15 - ((unsigned __int64)(v15 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                8LL * (((unsigned int)v15 - (((_DWORD)v15 + 8) & 0xFFFFFFF8) + (unsigned int)v37) >> 3)),
              v33 < v38) )
        {
          do
          {
            v34 = v33++;
            LOBYTE(v15[2 * v34]) = v33;
          }
          while ( v33 < v38 );
        }
        v35 = *((void **)v11 + 16);
        if ( v35 )
        {
          v39 = v15;
          operator delete[](v35);
          v15 = v39;
        }
        v11[136] = v28;
        v14 = v11[137];
        *((_QWORD *)v11 + 16) = v15;
      }
      else
      {
        v15 = *((_QWORD **)v11 + 16);
      }
      v11[137] = v15[2 * v14];
      v11[v10] = v14;
      v16 = a1[4];
      ++a1[1];
      v17 = (QT::QIcon *)(*(_QWORD *)(144 * ((v10 | (0x1C71C71C71C71C80LL * ((__int64)&v11[-v16] >> 4))) >> 7)
                                    + v16
                                    + 128)
                        + 16LL
                        * *(unsigned __int8 *)(144 * ((v10 | (0x1C71C71C71C71C80LL * ((__int64)&v11[-v16] >> 4))) >> 7)
                                             + v16
                                             + (v10 & 0x7F))
                        + 8);
      *((_DWORD *)v17 - 2) = *a2;
      QT::QIcon::QIcon(v17, a3);
      return a1;
    }
LABEL_15:
    sub_480600(a1, v13 + 1);
    v19 = a1[4];
    v20 = *a2;
    v21 = a1[2];
    v22 = (v21 - 1)
        & (((0xD6E8FEB86659FD93LL
           * (((0xD6E8FEB86659FD93LL * (a1[3] ^ v20 ^ ((a1[3] ^ v20) >> 32))) >> 32)
            ^ (0xD6E8FEB86659FD93LL * (a1[3] ^ v20 ^ ((a1[3] ^ v20) >> 32))))) >> 32)
         ^ (0xD6E8FEB86659FD93LL
          * (((0xD6E8FEB86659FD93LL * (a1[3] ^ v20 ^ ((a1[3] ^ v20) >> 32))) >> 32)
           ^ (0xD6E8FEB86659FD93LL * (a1[3] ^ v20 ^ ((a1[3] ^ v20) >> 32))))));
    v10 = v22 & 0x7F;
    v11 = (unsigned __int8 *)(v19 + 144 * (v22 >> 7));
    while ( 1 )
    {
      v23 = v11[v10];
      if ( v23 == 255 || (_DWORD)v20 == *(_DWORD *)(*((_QWORD *)v11 + 16) + 16 * v23) )
        break;
      if ( ++v10 == 128 )
      {
        v11 += 144;
        v10 = 0;
        if ( 0x8E38E38E38E38E39LL * ((__int64)&v11[-v19] >> 4) == v21 >> 7 )
          v11 = (unsigned __int8 *)a1[4];
      }
    }
    goto LABEL_10;
  }
  while ( (_DWORD)v7 != *(_DWORD *)(*((_QWORD *)v11 + 16) + 16 * v12) )
  {
    if ( ++v10 != 128 )
      goto LABEL_3;
    v11 += 144;
    v10 = 0;
    if ( 0x8E38E38E38E38E39LL * ((__int64)&v11[-v8] >> 4) == v5 >> 7 )
      v11 = (unsigned __int8 *)a1[4];
    v12 = *v11;
    if ( v12 == 255 )
      goto LABEL_9;
  }
  v24 = *(_QWORD *)(v8 + 144 * ((v10 | (0x1C71C71C71C71C80LL * ((__int64)&v11[-v8] >> 4))) >> 7) + 128)
      + 16LL
      * *(unsigned __int8 *)(v8 + 144 * ((v10 | (0x1C71C71C71C71C80LL * ((__int64)&v11[-v8] >> 4))) >> 7) + (v10 & 0x7F));
  QT::QIcon::QIcon((QT::QIcon *)v41, a3);
  v25 = v41[0];
  v26 = *(_QWORD *)(v24 + 8);
  v41[0] = 0;
  *(_QWORD *)(v24 + 8) = v25;
  v40 = v26;
  QT::QIcon::~QIcon((QT::QIcon *)&v40);
  QT::QIcon::~QIcon((QT::QIcon *)v41);
  return a1;
}
