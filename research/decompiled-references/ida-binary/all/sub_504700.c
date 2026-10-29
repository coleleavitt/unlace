unsigned __int64 __fastcall sub_504700(__int64 a1, __int64 a2, int a3, double a4, __m128 a5)
{
  __int64 v6; // rdi
  __int64 i; // r14
  unsigned int v8; // r15d
  __int64 v9; // rax
  __int64 v10; // r12
  _QWORD *v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  unsigned __int8 *v19; // rsi
  int v20; // r11d
  unsigned __int8 *v21; // rdx
  __int64 v22; // rax
  _DWORD *v23; // rax
  __int64 v24; // r12
  __m128i *v25; // rax
  __m128i v26; // xmm0
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // r9
  int *v32; // rax
  QT::QHBoxLayout *v33; // r15
  QT::QDialogButtonBox *v35; // r15
  QT::QAbstractButton *v37; // [rsp+10h] [rbp-90h]
  int j; // [rsp+18h] [rbp-88h]
  __int64 v39; // [rsp+28h] [rbp-78h] BYREF
  __m128i v40; // [rsp+30h] [rbp-70h] BYREF
  _QWORD v41[2]; // [rsp+40h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+50h] [rbp-50h] BYREF
  __int64 v43; // [rsp+60h] [rbp-40h]
  unsigned __int64 v44; // [rsp+68h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 408);
  v44 = __readfsqword(0x28u);
  if ( !v6 )
  {
    v35 = (QT::QDialogButtonBox *)operator new(0x28u);
    QT::QDialogButtonBox::QDialogButtonBox(v35, nullptr);
    *(_QWORD *)(a1 + 408) = v35;
    QT::QDialogButtonBox::clear(v35);
    QT::QDialogButtonBox::setCenterButtons(*(QT::QDialogButtonBox **)(a1 + 408), 1);
    v6 = *(_QWORD *)(a1 + 408);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( *(_QWORD *)(a2 + 8 * i) )
    {
      v8 = dword_6CD110[i];
      v37 = (QT::QAbstractButton *)QT::QDialogButtonBox::addButton(v6, v8);
      sub_518A60((QT::QString *)ptr);
      QT::QAbstractButton::setText(v37, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( a3 == i )
        *(_QWORD *)(a1 + 416) = v37;
      if ( v8 == 0x400000 )
      {
        LODWORD(ptr[0]) = 0x1000000;
        *(_QWORD *)sub_4FE850((volatile signed __int32 **)(a1 + 424), (int *)ptr, a4, a5) = v37;
        v6 = *(_QWORD *)(a1 + 408);
      }
      else
      {
        if ( v8 == 0x1000000 )
        {
          (*(void (__fastcall **)(void **))(*QT::QCoreApplication::self + 168LL))(ptr);
          QT::QAbstractButton::setShortcut(v37, (const QT::QKeySequence *)ptr);
          QT::QKeySequence::~QKeySequence((QT::QKeySequence *)ptr);
        }
        v6 = *(_QWORD *)(a1 + 408);
      }
    }
  }
  QT::QDialogButtonBox::buttons((QT::QDialogButtonBox *)ptr);
  v9 = 0;
  for ( j = 0; j < v43; v9 = j )
  {
    v10 = *((_QWORD *)ptr[1] + v9);
    LODWORD(v41[0]) = sub_4FA300(a1, v10);
    if ( LODWORD(v41[0]) )
    {
      v11 = *(_QWORD **)(a1 + 424);
      if ( !v11 )
        goto LABEL_27;
      v12 = v11[2];
      v13 = v11[4];
      v14 = (v12 - 1)
          & (((0xD6E8FEB86659FD93LL
             * (((0xD6E8FEB86659FD93LL
                * (v11[3] ^ SLODWORD(v41[0]) ^ ((v11[3] ^ (unsigned __int64)SLODWORD(v41[0])) >> 32))) >> 32)
              ^ (0xD6E8FEB86659FD93LL
               * (v11[3] ^ SLODWORD(v41[0]) ^ ((v11[3] ^ (unsigned __int64)SLODWORD(v41[0])) >> 32))))) >> 32)
           ^ (0xD6E8FEB86659FD93LL
            * (((0xD6E8FEB86659FD93LL
               * (v11[3] ^ SLODWORD(v41[0]) ^ ((v11[3] ^ (unsigned __int64)SLODWORD(v41[0])) >> 32))) >> 32)
             ^ (0xD6E8FEB86659FD93LL
              * (v11[3] ^ SLODWORD(v41[0]) ^ ((v11[3] ^ (unsigned __int64)SLODWORD(v41[0])) >> 32))))));
      v15 = v14 & 0x7F;
      v16 = 9 * (v14 >> 7);
      v17 = j;
      v18 = v13 + 16 * v16;
LABEL_19:
      v19 = (unsigned __int8 *)(v18 + 128);
      v20 = v17;
LABEL_20:
      v21 = (unsigned __int8 *)(v18 + v15);
      while ( 1 )
      {
        v22 = *v21;
        if ( v22 == 255 )
        {
          j = v20;
          goto LABEL_27;
        }
        v23 = (_DWORD *)(*(_QWORD *)v19 + 16 * v22);
        if ( LODWORD(v41[0]) == *v23 )
          break;
        if ( ++v21 == v19 )
        {
          v18 += 144;
          v19 = v21 + 144;
          v15 = 0;
          if ( 0x8E38E38E38E38E39LL * ((v18 - v13) >> 4) != v12 >> 7 )
            goto LABEL_20;
          v17 = v20;
          v18 = v13;
          goto LABEL_19;
        }
      }
      j = v20;
      if ( !v23 )
LABEL_27:
        *(_QWORD *)sub_4FE850((volatile signed __int32 **)(a1 + 424), (int *)v41, a4, a5) = v10;
    }
    ++j;
  }
  v40.m128i_i64[1] = 0;
  v24 = *(_QWORD *)(a1 + 408);
  v40.m128i_i64[0] = (__int64)sub_501FD0;
  v41[1] = 0;
  v41[0] = &QT::QDialogButtonBox::clicked;
  v25 = (__m128i *)operator new(0x20u);
  v26 = _mm_load_si128(&v40);
  v25->m128i_i32[0] = 1;
  v25[1] = v26;
  v25->m128i_i64[1] = (__int64)sub_4F8B80;
  QT::QObject::connectImpl(&v39, v24, v41, a1, &v40, v25, 0, 0, &QT::QDialogButtonBox::staticMetaObject);
  sub_4F4600((__m128i *)(a1 + 344), *(_QWORD *)(a1 + 360), &v39, v27, v28, v29);
  v32 = *(int **)(a1 + 344);
  if ( !v32 || *v32 > 1 )
    sub_4F4020((__m128i *)(a1 + 344), 0, 0, 0, v30, v31);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v39);
  v33 = (QT::QHBoxLayout *)operator new(0x20u);
  QT::QHBoxLayout::QHBoxLayout(v33);
  QT::QBoxLayout::addWidget(v33, *(_QWORD *)(a1 + 408), 0, 0);
  QT::QBoxLayout::addLayout(*(QT::QBoxLayout **)(a1 + 376), v33, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v44 - __readfsqword(0x28u);
}
