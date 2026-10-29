unsigned __int64 __fastcall sub_182030(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  const QT::QObject *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  volatile signed __int32 *v12; // rax
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v14; // [rsp+10h] [rbp-38h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  sub_52F0B0(a1, a2, a3);
  v3 = *(const QT::QObject **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87CFA0, v3);
      if ( v4 )
      {
        v5 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *(const QT::QObject **)a2);
        *(_QWORD *)(a2 + 232) = v5;
        if ( !v5 )
        {
          if ( !*(_BYTE *)(v4 + 64) )
            v5 = *(_QWORD *)(v4 + 56);
          *(_QWORD *)(a2 + 232) = v5;
        }
        goto LABEL_6;
      }
      v3 = *(const QT::QObject **)(*((_QWORD *)v3 + 1) + 16LL);
    }
    while ( v3 );
    v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *(const QT::QObject **)a2);
    v8 = *(_QWORD *)(a2 + 256) == 0;
    *(_QWORD *)(a2 + 232) = v7;
    if ( !v8 )
      return v15 - __readfsqword(0x28u);
    goto LABEL_9;
  }
  *(_QWORD *)(a2 + 232) = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, nullptr);
LABEL_6:
  if ( !*(_QWORD *)(a2 + 256) )
  {
LABEL_9:
    if ( *(_DWORD *)(a2 + 8) == 31 )
    {
      if ( *(_QWORD *)a2 )
      {
        v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 8LL) + 16LL);
        if ( v9 )
        {
          *(_OWORD *)ptr = 0;
          v14 = 0;
          QT::qt_qFindChildren_helper(v9, 0, 0, &off_88B5C0, ptr, 1);
          v12 = (volatile signed __int32 *)ptr[0];
          if ( v14 )
          {
            if ( !ptr[0] || *(int *)ptr[0] > 1 )
            {
              sub_181C50((__int64)ptr, 0, 0, 0, v10, v11);
              v12 = (volatile signed __int32 *)ptr[0];
            }
            *(_QWORD *)(a2 + 256) = *(_QWORD *)ptr[1];
          }
          if ( v12 && !_InterlockedSub(v12, 1u) )
            free(ptr[0]);
        }
      }
    }
  }
  return v15 - __readfsqword(0x28u);
}
