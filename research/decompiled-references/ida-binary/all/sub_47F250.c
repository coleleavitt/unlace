__int64 __fastcall sub_47F250(__int64 a1, int a2, double a3, __m128 a4)
{
  _QWORD *v5; // rdi
  unsigned int isNull; // eax
  unsigned int v8; // r13d
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // r12
  _QWORD *v19; // rcx
  _QWORD *v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int8 *v23; // rax
  __int64 v24; // rdi
  __int64 v26; // rax
  __int64 v27; // rdi
  void *v28; // rbx
  unsigned __int64 v29; // r8
  __int64 v30; // r9
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int8 *v33; // rsi
  __int64 i; // rdx
  __int64 v35; // r12
  _QWORD *v36; // rax
  unsigned __int64 v37; // rax
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v46[7]; // [rsp+10h] [rbp-38h] BYREF

  v5 = *(_QWORD **)(a1 + 584);
  v46[1] = __readfsqword(0x28u);
  if ( !v5 || !v5[1] )
    goto LABEL_3;
  v29 = v5[2];
  v30 = v5[4];
  v31 = (0xD6E8FEB86659FD93LL * (v5[3] ^ a2 ^ ((v5[3] ^ (unsigned __int64)a2) >> 32))) >> 32;
  v32 = (unsigned __int8)(v29 - 1)
      & (unsigned __int8)(((0xD6E8FEB86659FD93LL
                          * (v31 ^ (0xD6E8FEB86659FD93LL * (v5[3] ^ a2 ^ ((v5[3] ^ (unsigned __int64)a2) >> 32))))) >> 32)
                        ^ (-109 * (v31 ^ (-109 * (*((_BYTE *)v5 + 24) ^ a2 ^ ((v5[3] ^ (unsigned __int64)a2) >> 32))))))
      & 0x7F;
  v33 = (unsigned __int8 *)(v30
                          + 144
                          * (((v29 - 1)
                            & (((0xD6E8FEB86659FD93LL
                               * (v31 ^ (0xD6E8FEB86659FD93LL * (v5[3] ^ a2 ^ ((v5[3] ^ (unsigned __int64)a2) >> 32))))) >> 32)
                             ^ (0xD6E8FEB86659FD93LL
                              * (v31 ^ (0xD6E8FEB86659FD93LL * (v5[3] ^ a2 ^ ((v5[3] ^ (unsigned __int64)a2) >> 32))))))) >> 7));
LABEL_26:
  for ( i = v33[v32]; i != 255; i = *v33 )
  {
    if ( *(_DWORD *)(*((_QWORD *)v33 + 16) + 16 * i) == a2 )
      break;
    if ( ++v32 != 128 )
      goto LABEL_26;
    v33 += 144;
    v32 = 0;
    if ( 0x8E38E38E38E38E39LL * ((__int64)&v33[-v30] >> 4) == v29 >> 7 )
      v33 = (unsigned __int8 *)v5[4];
  }
  v35 = v32 | (0x1C71C71C71C71C80LL * ((__int64)&v33[-v30] >> 4));
  if ( *(_DWORD *)v5 > 1u )
  {
    v36 = sub_47EA40(v5, a3, a4);
    *(_QWORD *)(a1 + 584) = v36;
    v5 = v36;
  }
  v37 = v35;
  v38 = v35 & 0x7F;
  v39 = v5[4] + 144 * (v37 >> 7);
  v40 = *(unsigned __int8 *)(v39 + v38);
  if ( (_BYTE)v40 != 0xFF )
  {
    v41 = *(_QWORD *)(v39 + 128) + 16 * v40;
    v42 = *(_QWORD *)(v41 + 8);
    *(_QWORD *)(v41 + 8) = 0;
    v43 = *(_QWORD **)(a1 + 584);
    v46[0] = v42;
    sub_47E020(v43, (unsigned __int8 *)v39, v38);
    v44 = v46[0];
    v46[0] = 0;
    v45 = v44;
    QT::QIcon::~QIcon((QT::QIcon *)v46);
  }
  else
  {
LABEL_3:
    QT::QIcon::QIcon((QT::QIcon *)&v45);
  }
  isNull = QT::QIcon::isNull((QT::QIcon *)&v45);
  LOBYTE(isNull) = isNull ^ 1;
  v8 = isNull;
  if ( (_BYTE)isNull )
  {
    v9 = QT::QIcon::cacheKey((QT::QIcon *)&v45);
    v10 = *(_QWORD *)(a1 + 592);
    v11 = v9;
    if ( v10 && *(_QWORD *)(v10 + 8) )
    {
      v12 = *(_QWORD *)(v10 + 32);
      v13 = 0xD6E8FEB86659FD93LL * (v9 ^ *(_QWORD *)(v10 + 24) ^ ((v9 ^ *(_QWORD *)(v10 + 24)) >> 32));
      v14 = *(_QWORD *)(v10 + 16);
      v15 = (unsigned __int8)(v14 - 1)
          & (unsigned __int8)(((0xD6E8FEB86659FD93LL * (HIDWORD(v13) ^ v13)) >> 32) ^ (-109 * (BYTE4(v13) ^ v13)))
          & 0x7F;
      v16 = v12
          + 144
          * (((v14 - 1)
            & (((0xD6E8FEB86659FD93LL * (HIDWORD(v13) ^ v13)) >> 32)
             ^ (0xD6E8FEB86659FD93LL * (HIDWORD(v13) ^ v13)))) >> 7);
      while ( 1 )
      {
        v17 = *(unsigned __int8 *)(v16 + v15);
        if ( v17 == 255 || v11 == *(_QWORD *)(*(_QWORD *)(v16 + 128) + 16 * v17) )
          break;
        if ( ++v15 == 128 )
        {
          v16 += 144;
          v15 = 0;
          if ( 0x8E38E38E38E38E39LL * ((v16 - v12) >> 4) == v14 >> 7 )
            v16 = *(_QWORD *)(v10 + 32);
        }
      }
      v18 = v15 | (0x1C71C71C71C71C80LL * ((v16 - v12) >> 4));
      v19 = *(_QWORD **)(a1 + 592);
      if ( *(_DWORD *)v10 > 1u )
      {
        v20 = sub_47EE80((_DWORD *)v10, a3, a4);
        *(_QWORD *)(a1 + 592) = v20;
        v19 = v20;
      }
      v21 = v18;
      v22 = v18 & 0x7F;
      v23 = (unsigned __int8 *)(v19[4] + 144 * (v21 >> 7));
      if ( v23[v22] != 0xFF )
        sub_47E3C0(v19, v23, v22);
    }
    v24 = *(_QWORD *)(a1 + 624);
    if ( v24 != a1 + 608 )
    {
      while ( *(_DWORD *)(v24 + 56) != a2 )
      {
        v24 = std::_Rb_tree_increment(v24);
        if ( v24 == a1 + 608 )
          goto LABEL_19;
      }
      v26 = std::_Rb_tree_rebalance_for_erase(v24, a1 + 608);
      v27 = *(_QWORD *)(v26 + 32);
      v28 = (void *)v26;
      if ( v27 )
      {
        *(_QWORD *)(v26 + 40) = 0;
        qfree(v27, (const char *)(a1 + 608));
      }
      operator delete(v28, 0x40u);
      --*(_QWORD *)(a1 + 640);
    }
  }
LABEL_19:
  QT::QIcon::~QIcon((QT::QIcon *)&v45);
  return v8;
}
