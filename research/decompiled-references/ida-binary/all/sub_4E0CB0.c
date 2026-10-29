__int64 __fastcall sub_4E0CB0(_DWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned int v5; // r14d
  __int64 v6; // rbx
  __int64 v7; // rax
  void (*v8)(); // rax
  __int64 v10; // rbx
  char hasAutoScroll; // al
  __int64 v12; // [rsp+0h] [rbp-68h] BYREF
  __int128 v13; // [rsp+8h] [rbp-60h]
  __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  __int128 v15; // [rsp+28h] [rbp-40h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v2 = *(_QWORD *)a1;
  v16 = __readfsqword(0x28u);
  v3 = a2;
  a1[420] |= 0x10u;
  if ( *(char *)(a2 + 64) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(v2 + 344))(a1, a2);
  }
  else
  {
    v12 = 0;
    v13 = 0;
    (*(void (__fastcall **)(_DWORD *, __int64 *))(v2 + 128))(a1, &v12);
    v4 = v13;
    v14 = 0;
    v15 = 0;
    if ( (_QWORD)v13 )
    {
      v14 = qvector_reserve(&v14, 0, v13, 1);
      v10 = 0;
      memset((void *)(v14 + v15), 0, v4 - v15);
      *(_QWORD *)&v15 = v4;
      do
      {
        hasAutoScroll = QT::QAbstractItemView::hasAutoScroll(*(QT::QAbstractItemView **)(v12 + 8 * v10));
        *(_BYTE *)(v14 + v10) = hasAutoScroll;
        QT::QAbstractItemView::setAutoScroll(*(QT::QAbstractItemView **)(v12 + 8 * v10++), 0);
      }
      while ( v4 != v10 );
    }
    v5 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 344LL))(a1, a2);
    v6 = 0;
    if ( v4 )
    {
      do
      {
        a2 = *(unsigned __int8 *)(v14 + v6);
        QT::QAbstractItemView::setAutoScroll(*(QT::QAbstractItemView **)(v12 + 8 * v6++), a2);
      }
      while ( v6 != v4 );
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree(v14, (const char *)a2);
    }
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12, (const char *)a2);
    }
  }
  v7 = *(_QWORD *)a1;
  a1[420] &= ~0x10u;
  v8 = *(void (**)())(v7 + 352);
  if ( v8 != nullsub_272 )
    ((void (__fastcall *)(_DWORD *, __int64))v8)(a1, v3);
  return v5;
}
