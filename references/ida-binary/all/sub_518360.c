unsigned __int64 __fastcall sub_518360(__int64 a1, const QT::QString *a2)
{
  __int64 v2; // rbp
  void (__fastcall *v3)(__int64, const char *, void **); // r13
  char *v4; // r12
  size_t v5; // r14
  __int64 v6; // rdx
  const char *v7; // rsi
  __int64 v9; // [rsp+8h] [rbp-80h]
  void *ptr; // [rsp+10h] [rbp-78h] BYREF
  char *s; // [rsp+18h] [rbp-70h]
  void *v12; // [rsp+30h] [rbp-58h] BYREF
  __int128 v13; // [rsp+38h] [rbp-50h]
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  if ( !v2 )
    return v14 - __readfsqword(0x28u);
  v3 = *(void (__fastcall **)(__int64, const char *, void **))(v2 + 8);
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
  v4 = s;
  v12 = nullptr;
  v13 = 0;
  if ( s )
  {
    v5 = strlen(s);
    v6 = v5 + 1;
  }
  else
  {
    v4 = (char *)&QT::QByteArray::_empty;
    if ( !&QT::QByteArray::_empty )
      goto LABEL_5;
    v6 = 1;
    v5 = 0;
  }
  v9 = v6;
  v12 = (void *)qvector_reserve(&v12, 0, v6, 1);
  *(_QWORD *)&v13 = v9;
  memmove(v12, v4, v5);
  *((_BYTE *)v12 + v5) = 0;
LABEL_5:
  v7 = *(const char **)(a1 + 24);
  v3(v2, v7, &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree(v12, v7);
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  return v14 - __readfsqword(0x28u);
}
