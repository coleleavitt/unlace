void __fastcall sub_4FEA20(__int64 a1, const QT::QObject *a2, double a3, __m128 a4)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rsi
  unsigned __int64 v9; // r9
  __int64 v10; // r10
  unsigned __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int8 *v14; // rdi
  unsigned __int8 *v15; // rcx
  __int64 v16; // rdx
  _DWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // r13d
  unsigned int v21; // eax
  volatile signed __int32 *v22; // rsi
  volatile signed __int32 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rbp
  __int64 v27; // rax
  __int64 v28; // rbx
  void *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+4h] [rbp-54h] BYREF
  void *v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v35; // [rsp+18h] [rbp-40h]
  char v36; // [rsp+20h] [rbp-38h]
  unsigned __int64 v37; // [rsp+28h] [rbp-30h]

  v37 = __readfsqword(0x28u);
  v6 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QAbstractButton::staticMetaObject, a2);
  if ( v6 )
  {
    v7 = sub_4FA300(a1, v6);
  }
  else
  {
    v18 = QT::QMetaObject::cast((QT::QMetaObject *)&off_896140, a2);
    if ( !v18 )
      return;
    v19 = v18;
    sub_4981D0((QT::QKeySequence *)&v34, v18);
    v20 = sub_5192C0(&v34, v19);
    QT::QKeySequence::~QKeySequence((QT::QKeySequence *)&v34);
    v7 = v20 & 0x1FFFFFF;
  }
  if ( !v7 )
    return;
  v8 = *(_QWORD *)(a1 + 424);
  if ( !v8 )
  {
    v32 = v7;
    v33 = nullptr;
    goto LABEL_25;
  }
  v9 = *(_QWORD *)(v8 + 16);
  v10 = *(_QWORD *)(v8 + 32);
  v11 = (0xD6E8FEB86659FD93LL * (*(_QWORD *)(v8 + 24) ^ v7 ^ ((*(_QWORD *)(v8 + 24) ^ (unsigned __int64)v7) >> 32))) >> 32;
  v12 = (unsigned __int8)(v9 - 1)
      & (unsigned __int8)(((0xD6E8FEB86659FD93LL
                          * (v11
                           ^ (0xD6E8FEB86659FD93LL
                            * (*(_QWORD *)(v8 + 24) ^ v7 ^ ((*(_QWORD *)(v8 + 24) ^ (unsigned __int64)v7) >> 32))))) >> 32)
                        ^ (-109
                         * (v11
                          ^ (-109 * (*(_BYTE *)(v8 + 24) ^ v7 ^ ((*(_QWORD *)(v8 + 24) ^ (unsigned __int64)v7) >> 32))))))
      & 0x7F;
  v13 = v10
      + 144
      * (((v9 - 1)
        & (((0xD6E8FEB86659FD93LL
           * (v11
            ^ (0xD6E8FEB86659FD93LL * (*(_QWORD *)(v8 + 24) ^ v7 ^ ((*(_QWORD *)(v8 + 24) ^ (unsigned __int64)v7) >> 32))))) >> 32)
         ^ (0xD6E8FEB86659FD93LL
          * (v11
           ^ (0xD6E8FEB86659FD93LL * (*(_QWORD *)(v8 + 24) ^ v7 ^ ((*(_QWORD *)(v8 + 24) ^ (unsigned __int64)v7) >> 32))))))) >> 7);
LABEL_6:
  v14 = (unsigned __int8 *)(v13 + 128);
LABEL_7:
  v15 = (unsigned __int8 *)(v13 + v12);
  while ( 1 )
  {
    v16 = *v15;
    if ( v16 == 255 )
      break;
    v17 = (_DWORD *)(*(_QWORD *)v14 + 16 * v16);
    if ( *v17 == v7 )
    {
      if ( v17 )
        return;
      break;
    }
    if ( ++v15 == v14 )
    {
      v13 += 144;
      v14 = v15 + 144;
      v12 = 0;
      if ( 0x8E38E38E38E38E39LL * ((v13 - v10) >> 4) != v9 >> 7 )
        goto LABEL_7;
      v13 = *(_QWORD *)(v8 + 32);
      goto LABEL_6;
    }
  }
  v32 = v7;
  v21 = *(_DWORD *)v8;
  v22 = *(volatile signed __int32 **)(a1 + 424);
  if ( v21 > 1 )
  {
    v33 = *(void **)(a1 + 424);
    if ( v22 )
    {
      if ( *v22 != -1 )
      {
        _InterlockedAdd(v22, 1u);
        v22 = *(volatile signed __int32 **)(a1 + 424);
      }
      if ( v22 )
      {
        if ( *v22 <= 1u )
          goto LABEL_27;
        goto LABEL_26;
      }
    }
LABEL_25:
    v22 = nullptr;
LABEL_26:
    v23 = (volatile signed __int32 *)sub_4FDC40(v22, a3, a4);
    *(_QWORD *)(a1 + 424) = v23;
    v22 = v23;
LABEL_27:
    sub_4FE4C0((__int64)&v34, v22, &v32);
    v24 = *(_QWORD *)(v34 + 32) + 144 * (v35 >> 7);
    v25 = *(_QWORD *)(v24 + 128) + 16LL * *(unsigned __int8 *)(v24 + (v35 & 0x7F));
    if ( !v36 )
      *(_DWORD *)v25 = v32;
    *(_QWORD *)(v25 + 8) = a2;
    if ( v33 )
    {
      if ( *(_DWORD *)v33 != -1 && !_InterlockedSub((volatile signed __int32 *)v33, 1u) )
      {
        v26 = v33;
        if ( v33 )
        {
          v27 = *((_QWORD *)v33 + 4);
          if ( v27 )
          {
            v28 = v27 + 144LL * *(_QWORD *)(v27 - 8);
            if ( v27 != v28 )
            {
              do
              {
                v29 = *(void **)(v28 - 16);
                v28 -= 144;
                if ( v29 )
                  operator delete[](v29);
              }
              while ( v26[4] != v28 );
            }
            operator delete[]((void *)(v28 - 8), 144LL * *(_QWORD *)(v28 - 8) + 8);
          }
          operator delete(v26, 0x28u);
        }
      }
    }
    return;
  }
  sub_4FE4C0((__int64)&v34, v22, &v32);
  v30 = *(_QWORD *)(v34 + 32) + 144 * (v35 >> 7);
  v31 = *(_QWORD *)(v30 + 128) + 16LL * *(unsigned __int8 *)(v30 + (v35 & 0x7F));
  if ( !v36 )
    *(_DWORD *)v31 = v32;
  *(_QWORD *)(v31 + 8) = a2;
}
