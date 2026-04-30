__int64 __fastcall sub_1C90D0(QT::QBasicTimer *this, double a2, __m128 a3)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  unsigned __int8 *v9; // rcx
  __int64 i; // rax
  _QWORD *v11; // rdi
  __int64 v12; // r12
  unsigned __int64 v13; // rax
  __int64 v14; // r12
  unsigned __int8 *v15; // rax

  QT::QReadWriteLock::tryLockForWrite(&qword_8CAEF0, 0x7FFFFFFFFFFFFFFFLL, 0x100000000LL);
  if ( !qword_8CAEF8 || !*(_QWORD *)(qword_8CAEF8 + 8) )
    goto LABEL_16;
  v4 = *(_QWORD *)(qword_8CAEF8 + 16);
  v5 = *(_QWORD *)(qword_8CAEF8 + 32);
  v6 = *(int *)this;
  v7 = (v4 - 1)
     & (((0xD6E8FEB86659FD93LL
        * (((0xD6E8FEB86659FD93LL * (*(_QWORD *)(qword_8CAEF8 + 24) ^ v6 ^ ((*(_QWORD *)(qword_8CAEF8 + 24) ^ v6) >> 32))) >> 32)
         ^ (0xD6E8FEB86659FD93LL * (*(_QWORD *)(qword_8CAEF8 + 24) ^ v6 ^ ((*(_QWORD *)(qword_8CAEF8 + 24) ^ v6) >> 32))))) >> 32)
      ^ (0xD6E8FEB86659FD93LL
       * (((0xD6E8FEB86659FD93LL * (*(_QWORD *)(qword_8CAEF8 + 24) ^ v6 ^ ((*(_QWORD *)(qword_8CAEF8 + 24) ^ v6) >> 32))) >> 32)
        ^ (0xD6E8FEB86659FD93LL * (*(_QWORD *)(qword_8CAEF8 + 24) ^ v6 ^ ((*(_QWORD *)(qword_8CAEF8 + 24) ^ v6) >> 32))))));
  v8 = v7 & 0x7F;
  v9 = (unsigned __int8 *)(v5 + 144 * (v7 >> 7));
LABEL_4:
  for ( i = v9[v8]; i != 255; i = *v9 )
  {
    if ( (_DWORD)v6 == *(_DWORD *)(*((_QWORD *)v9 + 16) + 16 * i) )
      break;
    if ( ++v8 != 128 )
      goto LABEL_4;
    v9 += 144;
    v8 = 0;
    if ( 0x8E38E38E38E38E39LL * ((__int64)&v9[-v5] >> 4) == v4 >> 7 )
      v9 = *(unsigned __int8 **)(qword_8CAEF8 + 32);
  }
  v11 = (_QWORD *)qword_8CAEF8;
  v12 = v8 | (0x1C71C71C71C71C80LL * ((__int64)&v9[-v5] >> 4));
  if ( *(_DWORD *)qword_8CAEF8 > 1u )
  {
    qword_8CAEF8 = (__int64)sub_1C8D00((_DWORD *)qword_8CAEF8, a2, a3);
    v11 = (_QWORD *)qword_8CAEF8;
  }
  v13 = v12;
  v14 = v12 & 0x7F;
  v15 = (unsigned __int8 *)(v11[4] + 144 * (v13 >> 7));
  if ( v15[v14] != 0xFF )
  {
    sub_1C89A0(v11, v15, v14);
    QT::QBasicTimer::stop(this);
    if ( *(_DWORD *)this )
      QT::QBasicTimer::stop(this);
    operator delete(this, 0x18u);
    QT::QReadWriteLock::unlock((QT::QReadWriteLock *)&qword_8CAEF0);
    return 1;
  }
  else
  {
LABEL_16:
    QT::QReadWriteLock::unlock((QT::QReadWriteLock *)&qword_8CAEF0);
    return 0;
  }
}
