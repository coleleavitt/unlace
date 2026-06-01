void __fastcall sub_480600(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  void **v4; // r13
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  __int64 *v10; // rax
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  _OWORD *v13; // rax
  unsigned __int64 v14; // rbx
  void **v15; // rbp
  _QWORD *v16; // rax
  void **v17; // r15
  _QWORD *v18; // r12
  _QWORD *v19; // rax
  void **v20; // r9
  void **v21; // r12
  _QWORD *v22; // rdx
  __int64 v23; // r15
  int *v24; // r15
  unsigned __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int8 *v30; // r13
  __int64 i; // rax
  unsigned __int8 v32; // bp
  _QWORD *v33; // r11
  _QWORD *v34; // r11
  __int64 v35; // rax
  char *v36; // rdi
  void **v37; // rbp
  void **v38; // rbx
  __int64 v39; // rax
  void **v40; // r12
  void **v41; // rbp
  char *v42; // rdi
  void **v43; // rbx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // r10
  char v47; // bp
  __int64 v48; // r10
  unsigned __int64 v49; // rdi
  _QWORD *v50; // rax
  unsigned __int64 v51; // r10
  unsigned __int8 v52; // cl
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rcx
  void *v55; // rdi
  char *v56; // rsi
  unsigned __int64 v57; // [rsp+0h] [rbp-68h]
  _QWORD *v58; // [rsp+0h] [rbp-68h]
  __int64 v59; // [rsp+0h] [rbp-68h]
  void **v60; // [rsp+8h] [rbp-60h]
  _QWORD *v61; // [rsp+10h] [rbp-58h]
  __int64 v62; // [rsp+18h] [rbp-50h]
  void **v63; // [rsp+20h] [rbp-48h]
  void **v64; // [rsp+28h] [rbp-40h]

  v2 = a2;
  if ( !a2 )
    v2 = a1[1];
  if ( v2 <= 0x40 )
  {
    v4 = (void **)a1[4];
    v5 = a1[2];
    v8 = 0;
    v9 = 152;
    v7 = 1;
    v6 = 128;
  }
  else
  {
    _BitScanReverse64(&v2, v2);
    LODWORD(v2) = v2 ^ 0x3F;
    if ( (int)v2 <= 1
      || (v4 = (void **)a1[4], v5 = a1[2], v6 = 1LL << (65 - (unsigned __int8)v2), v6 > 0x71C71C71C71C7180LL) )
    {
      QT::qBadAlloc();
      sub_480B40();
      return;
    }
    v7 = v6 >> 7;
    v8 = (v6 >> 7) - 1;
    v9 = 144 * (v6 >> 7) + 8;
  }
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
  while ( v13 != (_OWORD *)v12 );
  v14 = v5 >> 7;
  a1[4] = v11;
  a1[2] = v6;
  if ( v14 )
  {
    v15 = v4 + 16;
    v62 = (__int64)&v4[18 * v14 + 16];
    v16 = a1;
    v17 = v4;
    v18 = v16;
    do
    {
      v63 = v4;
      v19 = v18;
      v20 = v15;
      v64 = v17;
      v21 = v4;
      v22 = v19;
      do
      {
        v23 = *(unsigned __int8 *)v21;
        if ( (_BYTE)v23 != 0xFF )
        {
          v24 = (int *)((char *)*v20 + 16 * v23);
          v25 = v22[2];
          v26 = v22[4];
          v27 = *v24;
          v28 = (v25 - 1)
              & (((0xD6E8FEB86659FD93LL
                 * (((0xD6E8FEB86659FD93LL * (v22[3] ^ v27 ^ ((v22[3] ^ v27) >> 32))) >> 32)
                  ^ (0xD6E8FEB86659FD93LL * (v22[3] ^ v27 ^ ((v22[3] ^ v27) >> 32))))) >> 32)
               ^ (0xD6E8FEB86659FD93LL
                * (((0xD6E8FEB86659FD93LL * (v22[3] ^ v27 ^ ((v22[3] ^ v27) >> 32))) >> 32)
                 ^ (0xD6E8FEB86659FD93LL * (v22[3] ^ v27 ^ ((v22[3] ^ v27) >> 32))))));
          v29 = v28 & 0x7F;
          v30 = (unsigned __int8 *)(v26 + 144 * (v28 >> 7));
LABEL_14:
          for ( i = v30[v29]; i != 255; i = *v30 )
          {
            if ( (_DWORD)v27 == *(_DWORD *)(*((_QWORD *)v30 + 16) + 16 * i) )
              break;
            if ( ++v29 != 128 )
              goto LABEL_14;
            v30 += 144;
            v29 = 0;
            if ( 0x8E38E38E38E38E39LL * ((__int64)&v30[-v26] >> 4) == v25 >> 7 )
              v30 = (unsigned __int8 *)v22[4];
          }
          v32 = v30[137];
          if ( v32 == v30[136] )
          {
            if ( v32 )
            {
              if ( v32 == 48 )
              {
                v47 = 80;
                v49 = 1280;
                v48 = 80;
              }
              else
              {
                v46 = v32;
                v47 = v32 + 16;
                v48 = v46 + 16;
                v49 = 16 * v48;
              }
            }
            else
            {
              v47 = 48;
              v49 = 768;
              v48 = 48;
            }
            v61 = v22;
            v60 = v20;
            v57 = v48;
            v50 = (_QWORD *)operator new[](v49);
            v51 = v57;
            v20 = v60;
            v52 = v30[136];
            v33 = v50;
            v53 = 0;
            v22 = v61;
            if ( !v52
              || (v56 = *((char **)v30 + 16),
                  v53 = v52,
                  *v33 = *(_QWORD *)v56,
                  v59 = 16LL * v52,
                  v33[(unsigned __int64)v59 / 8 - 1] = *(_QWORD *)&v56[v59 - 8],
                  qmemcpy(
                    (void *)((unsigned __int64)(v33 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)(v56 - ((char *)v33 - ((unsigned __int64)(v33 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v33 - (((_DWORD)v33 + 8) & 0xFFFFFFF8) + (unsigned int)v59) >> 3)),
                  v52 < v51) )
            {
              do
              {
                v54 = v53++;
                LOBYTE(v33[2 * v54]) = v53;
              }
              while ( v53 < v51 );
            }
            v55 = *((void **)v30 + 16);
            if ( v55 )
            {
              v58 = v33;
              operator delete[](v55);
              v22 = v61;
              v20 = v60;
              v33 = v58;
            }
            v30[136] = v47;
            v32 = v30[137];
            *((_QWORD *)v30 + 16) = v33;
          }
          else
          {
            v33 = *((_QWORD **)v30 + 16);
          }
          v34 = &v33[2 * v32];
          v30[137] = *(_BYTE *)v34;
          v30[v29] = v32;
          *(_DWORD *)v34 = *v24;
          v35 = *((_QWORD *)v24 + 1);
          *((_QWORD *)v24 + 1) = 0;
          v34[1] = v35;
        }
        v21 = (void **)((char *)v21 + 1);
      }
      while ( v21 != v20 );
      v36 = (char *)*v20;
      v37 = v20;
      v18 = v22;
      v17 = v64;
      if ( *v20 )
      {
        v38 = v63;
        do
        {
          v39 = *(unsigned __int8 *)v38;
          if ( (_BYTE)v39 != 0xFF )
          {
            QT::QIcon::~QIcon((QT::QIcon *)&v36[16 * v39 + 8]);
            v36 = (char *)*v37;
          }
          v38 = (void **)((char *)v38 + 1);
        }
        while ( v37 != v38 );
        if ( v36 )
          operator delete[](v36);
        *v37 = nullptr;
      }
      v15 = v37 + 18;
      v4 = v63 + 18;
    }
    while ( v15 != (void **)v62 );
    v4 = v64;
  }
  if ( v4 )
  {
    v40 = &v4[18 * (_QWORD)*(v4 - 1)];
    if ( v40 == v4 )
    {
      v45 = 0;
    }
    else
    {
      v41 = v40 - 2;
      do
      {
        v42 = (char *)*v41;
        v40 -= 18;
        if ( *v41 )
        {
          v43 = v40;
          if ( v40 == v41 )
            goto LABEL_43;
          do
          {
            v44 = *(unsigned __int8 *)v43;
            if ( (_BYTE)v44 != 0xFF )
            {
              QT::QIcon::~QIcon((QT::QIcon *)&v42[16 * v44 + 8]);
              v42 = (char *)*v41;
            }
            v43 = (void **)((char *)v43 + 1);
          }
          while ( v43 != v41 );
          if ( v42 )
LABEL_43:
            operator delete[](v42);
        }
        v41 -= 18;
      }
      while ( v40 != v4 );
      v45 = 144LL * (_QWORD)*(v4 - 1);
    }
    operator delete[](v4 - 1, v45 + 8);
  }
}
