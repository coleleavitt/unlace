QT::QMimeData *__fastcall sub_492550(__int64 a1, __int64 a2)
{
  QT::QMimeData *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r9
  unsigned __int64 v6; // r15
  __int64 v7; // r8
  __int64 v8; // r15
  __int64 *v9; // rcx
  __int64 *v10; // rax
  double v11; // xmm0_8
  __int64 v13; // rax
  __int64 *v14; // rsi
  __int64 v15; // rax
  __int64 v16; // [rsp+0h] [rbp-D8h]
  __int64 v17; // [rsp+0h] [rbp-D8h]
  __int64 v18; // [rsp+8h] [rbp-D0h]
  void *ptr[2]; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+20h] [rbp-B8h]
  __int64 v21; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+38h] [rbp-A0h]
  void *v23; // [rsp+50h] [rbp-88h] BYREF
  __int64 v24; // [rsp+58h] [rbp-80h]
  _BYTE v25[40]; // [rsp+70h] [rbp-68h] BYREF
  unsigned __int64 v26; // [rsp+98h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  v2 = (QT::QMimeData *)operator new(0x10u);
  QT::QMimeData::QMimeData(v2);
  v3 = *(_QWORD *)(a2 + 16);
  v20 = 0;
  v21 = 0;
  *(_OWORD *)ptr = 0;
  v22 = 0;
  if ( v3 )
    v21 = qvector_reserve(&v21, 0, v3, 16);
  QT::QDataStream::QDataStream(v25, ptr, 2, 0.0);
  v4 = *(_QWORD *)(a2 + 8);
  v5 = v4 + 24LL * *(_QWORD *)(a2 + 16);
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      if ( *(int *)v4 < 0 || *(int *)(v4 + 4) < 0 || !*(_QWORD *)(v4 + 16) )
        goto LABEL_17;
      v6 = *(_QWORD *)(v4 + 8);
      v7 = (unsigned int)v6;
      v8 = HIDWORD(v6);
      if ( v8 == 0xFFFFFFFFLL )
      {
        v23 = (void *)-1LL;
        v24 = v7;
        if ( !v7 )
        {
          v8 = -1;
          goto LABEL_11;
        }
LABEL_17:
        v4 += 24;
        if ( v5 == v4 )
          break;
      }
      else
      {
        v23 = (void *)v8;
        v24 = v7;
LABEL_11:
        v9 = (__int64 *)(v21 + 16 * v22);
        if ( (__int64 *)v21 != v9 )
        {
          v10 = (__int64 *)v21;
          while ( *v10 != v8 || v10[1] != v7 )
          {
            v10 += 2;
            if ( v9 == v10 )
              goto LABEL_27;
          }
          if ( v9 != v10 )
            goto LABEL_17;
        }
LABEL_27:
        if ( *((_QWORD *)&v22 + 1) < (unsigned __int64)(v22 + 1) )
        {
          v18 = v7;
          v17 = v5;
          v15 = qvector_reserve(&v21, v21, v22 + 1, 16);
          v7 = v18;
          v21 = v15;
          v5 = v17;
          v9 = (__int64 *)(v15 + 16 * v22);
        }
        *v9 = v8;
        v9[1] = v7;
        v13 = *(_QWORD *)(a1 + 16);
        v14 = *(__int64 **)(a1 + 208);
        *(_QWORD *)&v22 = v22 + 1;
        v16 = v5;
        sub_48C8A0((__int64)v25, v14, &v23, v4, *(_QWORD *)(v13 + 1784));
        v5 = v16;
        v4 += 24;
        if ( v16 == v4 )
          break;
      }
    }
  }
  v11 = QT::QString::fromUtf8(&v23, 19, "treewidget/x-inodes");
  QT::QMimeData::setData(v2, (const QT::QString *)&v23, (const QT::QByteArray *)ptr);
  if ( v23 && !_InterlockedSub((volatile signed __int32 *)v23, 1u) )
    free(v23);
  QT::QDataStream::~QDataStream((QT::QDataStream *)v25);
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v21, (const char *)&v23, v11);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v2;
}
