__int64 __fastcall sub_1CA1E0(int a1, double a2, __m128 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int8 *v8; // rcx
  unsigned __int8 *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // eax
  int v14; // r13d
  __int64 v16; // rax
  _QWORD *v17; // r13
  _QWORD *v18; // rdi
  _QWORD *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // r12
  __int64 v23; // rax
  __int64 v24; // rbp
  __int64 v25; // r13
  void *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rbp
  unsigned __int64 v30; // rax
  __int64 v31; // rbp
  unsigned __int8 *v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rsi
  int v35; // ebp
  __int64 v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rax
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // rsi
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int8 v47; // r15
  _QWORD *v48; // r8
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r9
  char v52; // r15
  __int64 v53; // r9
  unsigned __int64 v54; // rdi
  _QWORD *v55; // rax
  unsigned __int64 v56; // rax
  unsigned __int8 v57; // cl
  unsigned __int64 v58; // rcx
  void *v59; // rdi
  char *v60; // rsi
  __int64 v61; // rcx
  unsigned __int64 v62; // [rsp+0h] [rbp-78h]
  __int64 v63; // [rsp+0h] [rbp-78h]
  __int64 v64; // [rsp+8h] [rbp-70h]
  _QWORD *v65; // [rsp+8h] [rbp-70h]
  int v66; // [rsp+14h] [rbp-64h] BYREF
  void *v67; // [rsp+18h] [rbp-60h]
  __int64 v68; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v69; // [rsp+28h] [rbp-50h]
  char v70; // [rsp+30h] [rbp-48h]
  unsigned __int64 v71; // [rsp+38h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  QT::QReadWriteLock::tryLockForRead(&qword_8CAEF0, 0x7FFFFFFFFFFFFFFFLL, 0x100000000LL);
  if ( qword_8CAEF8 )
  {
    v4 = *(_QWORD *)(qword_8CAEF8 + 16);
    v5 = *(_QWORD *)(qword_8CAEF8 + 32);
    v6 = (unsigned __int8)(v4 - 1)
       & (unsigned __int8)(((0xD6E8FEB86659FD93LL
                           * (((0xD6E8FEB86659FD93LL
                              * (a1
                               ^ *(_QWORD *)(qword_8CAEF8 + 24)
                               ^ (((unsigned __int64)a1 ^ *(_QWORD *)(qword_8CAEF8 + 24)) >> 32))) >> 32)
                            ^ (0xD6E8FEB86659FD93LL
                             * (a1
                              ^ *(_QWORD *)(qword_8CAEF8 + 24)
                              ^ (((unsigned __int64)a1 ^ *(_QWORD *)(qword_8CAEF8 + 24)) >> 32))))) >> 32)
                         ^ (-109
                          * (((0xD6E8FEB86659FD93LL
                             * (a1
                              ^ *(_QWORD *)(qword_8CAEF8 + 24)
                              ^ (((unsigned __int64)a1 ^ *(_QWORD *)(qword_8CAEF8 + 24)) >> 32))) >> 32)
                           ^ (-109
                            * (a1
                             ^ *(_BYTE *)(qword_8CAEF8 + 24)
                             ^ (((unsigned __int64)a1 ^ *(_QWORD *)(qword_8CAEF8 + 24)) >> 32))))))
       & 0x7F;
    v7 = v5
       + 144
       * (((v4 - 1)
         & (((0xD6E8FEB86659FD93LL
            * (((0xD6E8FEB86659FD93LL
               * (a1 ^ *(_QWORD *)(qword_8CAEF8 + 24) ^ (((unsigned __int64)a1 ^ *(_QWORD *)(qword_8CAEF8 + 24)) >> 32))) >> 32)
             ^ (0xD6E8FEB86659FD93LL
              * (a1 ^ *(_QWORD *)(qword_8CAEF8 + 24) ^ (((unsigned __int64)a1 ^ *(_QWORD *)(qword_8CAEF8 + 24)) >> 32))))) >> 32)
          ^ (0xD6E8FEB86659FD93LL
           * (((0xD6E8FEB86659FD93LL
              * (a1 ^ *(_QWORD *)(qword_8CAEF8 + 24) ^ (((unsigned __int64)a1 ^ *(_QWORD *)(qword_8CAEF8 + 24)) >> 32))) >> 32)
            ^ (0xD6E8FEB86659FD93LL
             * (a1 ^ *(_QWORD *)(qword_8CAEF8 + 24) ^ (((unsigned __int64)a1 ^ *(_QWORD *)(qword_8CAEF8 + 24)) >> 32))))))) >> 7);
LABEL_3:
    v8 = (unsigned __int8 *)(v7 + 128);
LABEL_4:
    v9 = (unsigned __int8 *)(v7 + v6);
    while ( 1 )
    {
      v10 = *v9;
      if ( v10 == 255 )
        goto LABEL_16;
      v11 = *(_QWORD *)v8 + 16 * v10;
      if ( *(_DWORD *)v11 == a1 )
        break;
      if ( v8 == ++v9 )
      {
        v7 += 144;
        v8 += 144;
        v6 = 0;
        if ( 0x8E38E38E38E38E39LL * ((v7 - v5) >> 4) != v4 >> 7 )
          goto LABEL_4;
        v7 = *(_QWORD *)(qword_8CAEF8 + 32);
        goto LABEL_3;
      }
    }
    if ( v11 )
    {
      v12 = *(_QWORD *)(v11 + 8);
      if ( v12 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(v12 + 8))(*(_QWORD *)(v12 + 16));
        v14 = v13;
        if ( v13 < 0 )
        {
          QT::QReadWriteLock::unlock((QT::QReadWriteLock *)&qword_8CAEF0);
          sub_1C90D0((QT::QBasicTimer *)v12, a2, a3);
          return 1;
        }
        if ( *(_DWORD *)(v12 + 4) == v13 )
        {
LABEL_14:
          QT::QReadWriteLock::unlock((QT::QReadWriteLock *)&qword_8CAEF0);
          return 1;
        }
        *(_DWORD *)(v12 + 4) = v13;
        v16 = sub_30ED60(qword_8CD748);
        QT::QBasicTimer::start(v12, v14, v16);
        v17 = (_QWORD *)qword_8CAEF8;
        v18 = (_QWORD *)qword_8CAEF8;
        if ( qword_8CAEF8 )
        {
          if ( !*(_QWORD *)(qword_8CAEF8 + 8) )
          {
            v66 = *(_DWORD *)v12;
            goto LABEL_20;
          }
          v39 = *(_QWORD *)(qword_8CAEF8 + 24) ^ a1;
          v40 = *(_QWORD *)(qword_8CAEF8 + 16);
          v41 = *(_QWORD *)(qword_8CAEF8 + 32);
          v42 = (unsigned __int8)(v40 - 1)
              & (unsigned __int8)(((0xD6E8FEB86659FD93LL
                                  * (((0xD6E8FEB86659FD93LL * (v39 ^ HIDWORD(v39))) >> 32)
                                   ^ (0xD6E8FEB86659FD93LL * (v39 ^ HIDWORD(v39))))) >> 32)
                                ^ (-109
                                 * (((0xD6E8FEB86659FD93LL * (v39 ^ HIDWORD(v39))) >> 32) ^ (-109 * (v39 ^ BYTE4(v39))))))
              & 0x7F;
          v43 = v41
              + 144
              * (((v40 - 1)
                & (((0xD6E8FEB86659FD93LL
                   * (((0xD6E8FEB86659FD93LL * (v39 ^ HIDWORD(v39))) >> 32)
                    ^ (0xD6E8FEB86659FD93LL * (v39 ^ HIDWORD(v39))))) >> 32)
                 ^ (0xD6E8FEB86659FD93LL
                  * (((0xD6E8FEB86659FD93LL * (v39 ^ HIDWORD(v39))) >> 32)
                   ^ (0xD6E8FEB86659FD93LL * (v39 ^ HIDWORD(v39))))))) >> 7);
          while ( 1 )
          {
            v44 = *(unsigned __int8 *)(v43 + v42);
            if ( v44 == 255 || *(_DWORD *)(*(_QWORD *)(v43 + 128) + 16 * v44) == a1 )
              break;
            if ( ++v42 == 128 )
            {
              v43 += 144;
              v42 = 0;
              if ( 0x8E38E38E38E38E39LL * ((v43 - v41) >> 4) == v40 >> 7 )
                v43 = *(_QWORD *)(qword_8CAEF8 + 32);
            }
          }
          v28 = v43 - v41;
          v18 = (_QWORD *)qword_8CAEF8;
          v29 = v42 | (0x1C71C71C71C71C80LL * (v28 >> 4));
          if ( *(_DWORD *)qword_8CAEF8 > 1u )
          {
            qword_8CAEF8 = (__int64)sub_1C8D00((_DWORD *)qword_8CAEF8, a2, a3);
            v18 = (_QWORD *)qword_8CAEF8;
          }
          v30 = v29;
          v31 = v29 & 0x7F;
          v32 = (unsigned __int8 *)(v18[4] + 144 * (v30 >> 7));
          if ( v32[v31] != 0xFF )
          {
            sub_1C89A0(v18, v32, v31);
            v18 = (_QWORD *)qword_8CAEF8;
          }
          v66 = *(_DWORD *)v12;
          if ( v18 )
          {
            v17 = (_QWORD *)qword_8CAEF8;
LABEL_20:
            if ( *(_DWORD *)v18 <= 1u )
            {
              v33 = v17[2];
              if ( v17[1] >= v33 >> 1 )
              {
                sub_1C9B60((__int64)&v68, v17, &v66);
                v45 = *(_QWORD *)(v68 + 32) + 144 * (v69 >> 7);
                v46 = *(_QWORD *)(v45 + 128) + 16LL * *(unsigned __int8 *)(v45 + (v69 & 0x7F));
                if ( !v70 )
                  *(_DWORD *)v46 = v66;
LABEL_66:
                *(_QWORD *)(v46 + 8) = v12;
              }
              else
              {
                v34 = v17[4];
                v35 = v66;
                v36 = (unsigned __int8)(v33 - 1)
                    & (unsigned __int8)(((0xD6E8FEB86659FD93LL
                                        * (((0xD6E8FEB86659FD93LL
                                           * (v17[3] ^ v66 ^ ((v17[3] ^ (unsigned __int64)v66) >> 32))) >> 32)
                                         ^ (0xD6E8FEB86659FD93LL
                                          * (v17[3] ^ v66 ^ ((v17[3] ^ (unsigned __int64)v66) >> 32))))) >> 32)
                                      ^ (-109
                                       * (((0xD6E8FEB86659FD93LL
                                          * (v17[3] ^ v66 ^ ((v17[3] ^ (unsigned __int64)v66) >> 32))) >> 32)
                                        ^ (-109 * (*((_BYTE *)v17 + 24) ^ v66 ^ ((v17[3] ^ (unsigned __int64)v66) >> 32))))))
                    & 0x7F;
                v37 = v34
                    + 144
                    * (((v33 - 1)
                      & (((0xD6E8FEB86659FD93LL
                         * (((0xD6E8FEB86659FD93LL * (v17[3] ^ v66 ^ ((v17[3] ^ (unsigned __int64)v66) >> 32))) >> 32)
                          ^ (0xD6E8FEB86659FD93LL * (v17[3] ^ v66 ^ ((v17[3] ^ (unsigned __int64)v66) >> 32))))) >> 32)
                       ^ (0xD6E8FEB86659FD93LL
                        * (((0xD6E8FEB86659FD93LL * (v17[3] ^ v66 ^ ((v17[3] ^ (unsigned __int64)v66) >> 32))) >> 32)
                         ^ (0xD6E8FEB86659FD93LL * (v17[3] ^ v66 ^ ((v17[3] ^ (unsigned __int64)v66) >> 32))))))) >> 7);
                while ( 1 )
                {
                  v38 = *(unsigned __int8 *)(v37 + v36);
                  if ( v38 == 255 )
                    break;
                  if ( v66 == *(_DWORD *)(*(_QWORD *)(v37 + 128) + 16 * v38) )
                  {
                    v46 = *(_QWORD *)(144 * ((v36 | (unsigned __int64)(0x1C71C71C71C71C80LL * ((v37 - v34) >> 4))) >> 7)
                                    + v34
                                    + 128)
                        + 16LL
                        * *(unsigned __int8 *)(144
                                             * ((v36 | (unsigned __int64)(0x1C71C71C71C71C80LL * ((v37 - v34) >> 4))) >> 7)
                                             + v34
                                             + (v36 & 0x7F));
                    goto LABEL_66;
                  }
                  if ( ++v36 == 128 )
                  {
                    v37 += 144;
                    v36 = 0;
                    if ( 0x8E38E38E38E38E39LL * ((v37 - v34) >> 4) == v33 >> 7 )
                      v37 = v17[4];
                  }
                }
                v47 = *(_BYTE *)(v37 + 137);
                if ( v47 == *(_BYTE *)(v37 + 136) )
                {
                  if ( v47 )
                  {
                    if ( v47 == 48 )
                    {
                      v52 = 80;
                      v54 = 1280;
                      v53 = 80;
                    }
                    else
                    {
                      v51 = v47;
                      v52 = v47 + 16;
                      v53 = v51 + 16;
                      v54 = 16 * v53;
                    }
                  }
                  else
                  {
                    v52 = 48;
                    v54 = 768;
                    v53 = 48;
                  }
                  v64 = v37;
                  v62 = v53;
                  v55 = (_QWORD *)operator new[](v54);
                  v37 = v64;
                  v48 = v55;
                  v56 = 0;
                  v57 = *(_BYTE *)(v64 + 136);
                  if ( !v57
                    || (v60 = *(char **)(v64 + 128),
                        v56 = v57,
                        v61 = 16LL * v57,
                        *v48 = *(_QWORD *)v60,
                        v48[(unsigned __int64)v61 / 8 - 1] = *(_QWORD *)&v60[v61 - 8],
                        qmemcpy(
                          (void *)((unsigned __int64)(v48 + 1) & 0xFFFFFFFFFFFFFFF8LL),
                          (const void *)(v60 - ((char *)v48 - ((unsigned __int64)(v48 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
                          8LL * (((unsigned int)v48 - (((_DWORD)v48 + 8) & 0xFFFFFFF8) + (unsigned int)v61) >> 3)),
                        v56 < v62) )
                  {
                    do
                    {
                      v58 = v56++;
                      LOBYTE(v48[2 * v58]) = v56;
                    }
                    while ( v56 < v62 );
                  }
                  v59 = *(void **)(v64 + 128);
                  if ( v59 )
                  {
                    v65 = v48;
                    v63 = v37;
                    operator delete[](v59);
                    v48 = v65;
                    v37 = v63;
                  }
                  *(_BYTE *)(v37 + 136) = v52;
                  v47 = *(_BYTE *)(v37 + 137);
                  *(_QWORD *)(v37 + 128) = v48;
                }
                else
                {
                  v48 = *(_QWORD **)(v37 + 128);
                }
                *(_BYTE *)(v37 + 137) = v48[2 * v47];
                *(_BYTE *)(v37 + v36) = v47;
                v49 = v17[4];
                ++v17[1];
                v50 = *(_QWORD *)(v49
                                + 144 * ((v36 | (unsigned __int64)(0x1C71C71C71C71C80LL * ((v37 - v49) >> 4))) >> 7)
                                + 128)
                    + 16LL
                    * *(unsigned __int8 *)(v49
                                         + 144
                                         * ((v36 | (unsigned __int64)(0x1C71C71C71C71C80LL * ((v37 - v49) >> 4))) >> 7)
                                         + (v36 & 0x7F));
                *(_DWORD *)v50 = v35;
                *(_QWORD *)(v50 + 8) = v12;
              }
              goto LABEL_14;
            }
            v67 = v17;
            if ( v17 )
            {
              if ( *(_DWORD *)v17 != -1 )
              {
                _InterlockedAdd((volatile signed __int32 *)v17, 1u);
                v17 = (_QWORD *)qword_8CAEF8;
              }
              if ( v17 )
              {
                v19 = v17;
                if ( *(_DWORD *)v17 <= 1u )
                {
LABEL_27:
                  sub_1C9B60((__int64)&v68, v19, &v66);
                  v20 = *(_QWORD *)(v68 + 32) + 144 * (v69 >> 7);
                  v21 = *(_QWORD *)(v20 + 128) + 16LL * *(unsigned __int8 *)(v20 + (v69 & 0x7F));
                  if ( !v70 )
                    *(_DWORD *)v21 = v66;
                  *(_QWORD *)(v21 + 8) = v12;
                  if ( v67 )
                  {
                    if ( *(_DWORD *)v67 != -1 && !_InterlockedSub((volatile signed __int32 *)v67, 1u) )
                    {
                      v22 = v67;
                      if ( v67 )
                      {
                        v23 = *((_QWORD *)v67 + 4);
                        if ( v23 )
                        {
                          v24 = v23 + 144LL * *(_QWORD *)(v23 - 8);
                          if ( v23 == v24 )
                          {
                            v27 = 0;
                          }
                          else
                          {
                            do
                            {
                              v25 = v24;
                              v26 = *(void **)(v24 - 16);
                              v24 -= 144;
                              if ( v26 )
                                operator delete[](v26);
                            }
                            while ( v22[4] != v24 );
                            v27 = 144LL * *(_QWORD *)(v25 - 152);
                          }
                          operator delete[]((void *)(v24 - 8), v27 + 8);
                        }
                        operator delete(v22, 0x28u);
                      }
                    }
                  }
                  goto LABEL_14;
                }
LABEL_26:
                qword_8CAEF8 = (__int64)sub_1C8D00(v19, a2, a3);
                v19 = (_QWORD *)qword_8CAEF8;
                goto LABEL_27;
              }
            }
LABEL_48:
            v19 = nullptr;
            goto LABEL_26;
          }
        }
        else
        {
          v66 = *(_DWORD *)v12;
        }
        v67 = nullptr;
        goto LABEL_48;
      }
    }
  }
LABEL_16:
  QT::QReadWriteLock::unlock((QT::QReadWriteLock *)&qword_8CAEF0);
  return 0;
}
