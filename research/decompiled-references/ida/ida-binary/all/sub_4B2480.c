void __fastcall sub_4B2480(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbp
  unsigned __int8 *v4; // r8
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  __int64 *v9; // rdx
  void **v10; // r8
  _QWORD *v11; // rsi
  _OWORD *v12; // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r11
  __int64 v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  char v25; // al
  unsigned __int8 v26; // dl
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rdx
  char *v32; // rdi
  unsigned __int8 *v33; // rbx
  __int64 v34; // rax
  void **v35; // rax
  void **v36; // r12
  void **v37; // rbp
  void **v38; // rbx
  char *v39; // rdi
  void **v40; // r13
  __int64 v41; // rax
  void **v42; // rax
  __int64 v43; // rax
  __int64 v44; // r10
  unsigned __int64 v45; // rdi
  unsigned __int64 v46; // rdx
  unsigned __int8 v47; // cl
  unsigned __int64 v48; // rcx
  void *v49; // rdi
  char *v50; // rsi
  __int64 v51; // rcx
  unsigned __int8 *v52; // [rsp+8h] [rbp-90h]
  __int64 v53; // [rsp+10h] [rbp-88h]
  __int64 v54; // [rsp+10h] [rbp-88h]
  __int64 v55; // [rsp+10h] [rbp-88h]
  __int64 v56; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v57; // [rsp+18h] [rbp-80h]
  __int64 v58; // [rsp+18h] [rbp-80h]
  __int64 v59; // [rsp+18h] [rbp-80h]
  unsigned __int64 v60; // [rsp+18h] [rbp-80h]
  _QWORD *v61; // [rsp+18h] [rbp-80h]
  __int64 v62; // [rsp+20h] [rbp-78h]
  char v63; // [rsp+20h] [rbp-78h]
  unsigned __int8 *v64; // [rsp+28h] [rbp-70h]
  unsigned __int64 v66; // [rsp+38h] [rbp-60h]
  __int64 v67; // [rsp+40h] [rbp-58h]
  unsigned __int8 *v68; // [rsp+48h] [rbp-50h]
  __int64 v69; // [rsp+50h] [rbp-48h]
  void **v70; // [rsp+58h] [rbp-40h]

  v2 = a2;
  if ( !a2 )
    v2 = a1[1];
  if ( v2 <= 0x40 )
  {
    v7 = 0;
    v8 = 152;
    v6 = 1;
    v3 = 128;
    v4 = (unsigned __int8 *)a1[4];
    v5 = a1[2];
  }
  else
  {
    _BitScanReverse64(&v2, v2);
    LODWORD(v2) = v2 ^ 0x3F;
    if ( (int)v2 <= 1
      || (v3 = 1LL << (65 - (unsigned __int8)v2), v4 = (unsigned __int8 *)a1[4], v5 = a1[2], v3 > 0x71C71C71C71C7180LL) )
    {
      QT::qBadAlloc();
      sub_4B2A60();
      return;
    }
    v6 = v3 >> 7;
    v7 = (v3 >> 7) - 1;
    v8 = 144 * (v3 >> 7) + 8;
  }
  v57 = v4;
  v53 = v7;
  v9 = (__int64 *)operator new[](v8);
  v10 = (void **)v57;
  *v9 = v6;
  v11 = v9 + 1;
  v12 = v9 + 1;
  v13 = (__int64)&v9[18 * v53 + 19];
  do
  {
    *v12 = -1;
    v12 += 9;
    *((_QWORD *)v12 - 2) = 0;
    *((_WORD *)v12 - 4) = 0;
    *(v12 - 8) = -1;
    *(v12 - 7) = -1;
    *(v12 - 6) = -1;
    *(v12 - 5) = -1;
    *(v12 - 4) = -1;
    *(v12 - 3) = -1;
    *(v12 - 2) = -1;
  }
  while ( v12 != (_OWORD *)v13 );
  v14 = v5 >> 7;
  a1[4] = v11;
  a1[2] = v3;
  if ( v14 )
  {
    v68 = v57;
    v64 = v57 + 128;
    v70 = (void **)v57;
    v69 = (__int64)&v57[144 * v14 + 128];
    do
    {
      v52 = v68;
      do
      {
        v15 = *v52;
        if ( (_BYTE)v15 != 0xFF )
        {
          v16 = *(_QWORD *)v64 + 32 * v15;
          v58 = *(_QWORD *)(v16 + 16);
          v54 = *(_QWORD *)(v16 + 8);
          v17 = QT::qHash(v58, v54, a1[3]);
          v18 = v54;
          v19 = v58;
          v66 = a1[2];
          v67 = a1[4];
          v20 = v17 & (v66 - 1);
          v21 = v20 & 0x7F;
          v22 = v67 + 144 * (v20 >> 7);
          while ( 1 )
          {
            v23 = *(unsigned __int8 *)(v22 + v21);
            if ( v23 == 255 )
              break;
            v24 = *(_QWORD *)(v22 + 128) + 32 * v23;
            if ( v19 == *(_QWORD *)(v24 + 16) )
            {
              v62 = v18;
              v59 = v22;
              v55 = v19;
              v25 = QT::QtPrivate::equalStrings(v19, *(_QWORD *)(v24 + 8), v19, v18);
              v19 = v55;
              v22 = v59;
              v18 = v62;
              if ( v25 )
                break;
            }
            if ( ++v21 == 128 )
            {
              v22 += 144;
              v21 = 0;
              if ( 0x8E38E38E38E38E39LL * ((v22 - v67) >> 4) == v66 >> 7 )
                v22 = v67;
            }
          }
          v26 = *(_BYTE *)(v22 + 137);
          if ( v26 == *(_BYTE *)(v22 + 136) )
          {
            if ( v26 )
            {
              if ( v26 == 48 )
              {
                v63 = 80;
                v45 = 2560;
                v44 = 80;
              }
              else
              {
                v44 = v26 + 16LL;
                v63 = v26 + 16;
                v45 = 32 * v44;
              }
            }
            else
            {
              v63 = 48;
              v45 = 1536;
              v44 = 48;
            }
            v60 = v44;
            v56 = v22;
            v27 = (_QWORD *)operator new[](v45);
            v22 = v56;
            v46 = 0;
            v47 = *(_BYTE *)(v56 + 136);
            if ( !v47
              || (v50 = *(char **)(v56 + 128),
                  v46 = v47,
                  v51 = 32LL * v47,
                  *v27 = *(_QWORD *)v50,
                  v27[(unsigned __int64)v51 / 8 - 1] = *(_QWORD *)&v50[v51 - 8],
                  qmemcpy(
                    (void *)((unsigned __int64)(v27 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                    (const void *)(v50 - ((char *)v27 - ((unsigned __int64)(v27 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                    8LL * (((unsigned int)v27 - (((_DWORD)v27 + 8) & 0xFFFFFFF8) + (unsigned int)v51) >> 3)),
                  v46 < v60) )
            {
              do
              {
                v48 = v46++;
                LOBYTE(v27[4 * v48]) = v46;
              }
              while ( v46 < v60 );
            }
            v49 = *(void **)(v56 + 128);
            if ( v49 )
            {
              v61 = v27;
              operator delete[](v49);
              v27 = v61;
              v22 = v56;
            }
            *(_QWORD *)(v22 + 128) = v27;
            v26 = *(_BYTE *)(v22 + 137);
            *(_BYTE *)(v22 + 136) = v63;
          }
          else
          {
            v27 = *(_QWORD **)(v22 + 128);
          }
          v28 = &v27[4 * v26];
          *(_BYTE *)(v22 + 137) = *(_BYTE *)v28;
          *(_BYTE *)(v22 + v21) = v26;
          v29 = *(_QWORD *)v16;
          *(_QWORD *)v16 = 0;
          *v28 = v29;
          v30 = *(_QWORD *)(v16 + 8);
          *(_QWORD *)(v16 + 8) = 0;
          v28[1] = v30;
          v31 = *(_QWORD *)(v16 + 16);
          *(_QWORD *)(v16 + 16) = 0;
          v28[2] = v31;
          *((_WORD *)v28 + 12) = *(_WORD *)(v16 + 24);
        }
        ++v52;
      }
      while ( v52 != v64 );
      v32 = *(char **)v64;
      if ( *(_QWORD *)v64 )
      {
        v33 = v68;
        do
        {
          v34 = *v33;
          if ( (_BYTE)v34 != 0xFF )
          {
            v35 = (void **)&v32[32 * v34];
            if ( *v35 )
            {
              if ( !_InterlockedSub((volatile signed __int32 *)*v35, 1u) )
                free(*v35);
              v32 = *(char **)v64;
            }
          }
          ++v33;
        }
        while ( v64 != v33 );
        if ( v32 )
          operator delete[](v32);
        *(_QWORD *)v64 = 0;
      }
      v64 += 144;
      v68 += 144;
    }
    while ( v64 != (unsigned __int8 *)v69 );
    v10 = v70;
  }
  if ( v10 )
  {
    v36 = &v10[18 * (_QWORD)*(v10 - 1)];
    if ( v36 == v10 )
    {
      v43 = 0;
    }
    else
    {
      v37 = v36 - 2;
      v38 = v10;
      do
      {
        v39 = (char *)*v37;
        v36 -= 18;
        if ( *v37 )
        {
          v40 = v36;
          if ( v36 == v37 )
            goto LABEL_47;
          do
          {
            v41 = *(unsigned __int8 *)v40;
            if ( (_BYTE)v41 != 0xFF )
            {
              v42 = (void **)&v39[32 * v41];
              if ( *v42 )
              {
                if ( !_InterlockedSub((volatile signed __int32 *)*v42, 1u) )
                  free(*v42);
                v39 = (char *)*v37;
              }
            }
            v40 = (void **)((char *)v40 + 1);
          }
          while ( v40 != v37 );
          if ( v39 )
LABEL_47:
            operator delete[](v39);
        }
        v37 -= 18;
      }
      while ( v36 != v38 );
      v10 = v38;
      v43 = 144LL * (_QWORD)*(v38 - 1);
    }
    operator delete[](v10 - 1, v43 + 8);
  }
}
