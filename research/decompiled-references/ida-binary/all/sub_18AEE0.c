unsigned __int64 __fastcall sub_18AEE0(__int64 a1, const QT::QString *a2, double a3, __m128 a4)
{
  bool v4; // zf
  void *v6; // rsi
  __int64 v7; // rax
  char *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 *v14; // rax
  __int64 v15; // rdi
  __int64 v17; // [rsp+0h] [rbp-58h] BYREF
  __int128 v18; // [rsp+8h] [rbp-50h]
  void *ptr; // [rsp+20h] [rbp-38h] BYREF
  void *v20; // [rsp+28h] [rbp-30h]
  unsigned __int64 v21; // [rsp+38h] [rbp-20h]

  v4 = *(_QWORD *)(a1 + 96) == 0;
  v21 = __readfsqword(0x28u);
  v17 = 0;
  v18 = 0;
  if ( !v4 )
  {
    QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
    v6 = v20;
    if ( !v20 )
      v6 = &QT::QByteArray::_empty;
    sub_536F00(&v17, v6, 0);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v7 = *(_QWORD *)(a1 + 96);
    v8 = (char *)&s1;
    if ( *(_QWORD *)(v7 + 40) )
      v8 = *(char **)(v7 + 32);
    a2 = (const QT::QString *)&v17;
    sub_4B5050(v8);
  }
  sub_18AE10(a1, 0.0, a4);
  v11 = v17;
  if ( v17 )
  {
    v12 = v18;
    if ( (_QWORD)v18 )
    {
      v13 = 0;
      do
      {
        v14 = (__int64 *)(v11 + 24 * v13);
        v15 = *v14;
        if ( *v14 )
        {
          v14[1] = 0;
          qfree(v15, a2, v11, v9, v10);
          v11 = v17;
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v18 = 0;
    qfree(v11, a2, v11, v9, v10);
  }
  return v21 - __readfsqword(0x28u);
}
