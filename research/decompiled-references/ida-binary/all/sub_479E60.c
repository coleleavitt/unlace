QT::QIcon *__fastcall sub_479E60(QT::QIcon *this, __int64 a2, int a3)
{
  _QWORD *v5; // rdx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int8 *v12; // rdx
  unsigned __int8 *v13; // rax
  __int64 v14; // rsi
  _DWORD *v15; // rsi
  _QWORD _0[7]; // [rsp+0h] [rbp+0h] BYREF

  _0[1] = __readfsqword(0x28u);
  QT::QIcon::QIcon((QT::QIcon *)_0);
  v5 = *(_QWORD **)(a2 + 584);
  if ( v5 )
  {
    v6 = v5[2];
    v7 = v5[4];
    v8 = (0xD6E8FEB86659FD93LL * (v5[3] ^ a3 ^ ((v5[3] ^ (unsigned __int64)a3) >> 32))) >> 32;
    v9 = (v6 - 1)
       & (((0xD6E8FEB86659FD93LL * (v8 ^ (0xD6E8FEB86659FD93LL * (v5[3] ^ a3 ^ ((v5[3] ^ (unsigned __int64)a3) >> 32))))) >> 32)
        ^ (0xD6E8FEB86659FD93LL * (v8 ^ (0xD6E8FEB86659FD93LL * (v5[3] ^ a3 ^ ((v5[3] ^ (unsigned __int64)a3) >> 32))))));
    v10 = v9 & 0x7F;
    v11 = v7 + 144 * (v9 >> 7);
LABEL_3:
    v12 = (unsigned __int8 *)(v11 + 128);
LABEL_4:
    v13 = (unsigned __int8 *)(v11 + v10);
    while ( 1 )
    {
      v14 = *v13;
      if ( v14 == 255 )
        break;
      v15 = (_DWORD *)(*(_QWORD *)v12 + 16 * v14);
      if ( *v15 == a3 )
      {
        if ( !v15 )
          break;
        QT::QIcon::QIcon(this, (const QT::QIcon *)(v15 + 2));
        goto LABEL_12;
      }
      if ( ++v13 == v12 )
      {
        v11 += 144;
        v12 = v13 + 144;
        v10 = 0;
        if ( 0x8E38E38E38E38E39LL * ((v11 - v7) >> 4) != v6 >> 7 )
          goto LABEL_4;
        v11 = v7;
        goto LABEL_3;
      }
    }
  }
  QT::QIcon::QIcon(this, (const QT::QIcon *)_0);
LABEL_12:
  QT::QIcon::~QIcon((QT::QIcon *)_0);
  return this;
}
