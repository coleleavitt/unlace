__int64 __fastcall sub_53C820(__int64 a1, const char *a2)
{
  size_t v2; // rax
  __int64 *v3; // r8
  __int64 *v4; // rbx
  __int64 *i; // rbp
  char v6; // al
  volatile signed __int32 *v7; // rax
  __int64 v8; // rbx
  volatile signed __int32 *v10; // [rsp+10h] [rbp-88h]
  char v11; // [rsp+10h] [rbp-88h]
  void *v12[2]; // [rsp+20h] [rbp-78h] BYREF
  void *v13; // [rsp+30h] [rbp-68h]
  void *ptr[11]; // [rsp+40h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  v2 = 0;
  if ( a2 )
    v2 = strlen(a2);
  QT::QString::fromUtf8(v12, v2, a2);
  v3 = *(__int64 **)(a1 + 72);
  v4 = &v3[*(_QWORD *)(a1 + 80)];
  for ( i = v3; v4 != i; ++i )
  {
    QT::QObject::objectName((QT::QObject *)ptr);
    if ( v13 == ptr[2] )
    {
      v10 = (volatile signed __int32 *)ptr[0];
      v6 = QT::QtPrivate::equalStrings(v13, ptr[1], v13, v12[1]);
      if ( v10 && !_InterlockedSub(v10, 1u) )
      {
        v11 = v6;
        free(ptr[0]);
        v6 = v11;
      }
      if ( v6 )
      {
        v7 = (volatile signed __int32 *)v12[0];
        v8 = *i;
        if ( !v12[0] )
          return v8;
        goto LABEL_17;
      }
    }
    else if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
    }
  }
  v7 = (volatile signed __int32 *)v12[0];
  v8 = 0;
  if ( !v12[0] )
    return v8;
LABEL_17:
  if ( !_InterlockedSub(v7, 1u) )
    free(v12[0]);
  return v8;
}
