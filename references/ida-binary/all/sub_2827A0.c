_QWORD *__fastcall sub_2827A0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r15
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rbx
  void *v9; // rcx
  void *v10; // rdx
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-90h]
  __int64 v15; // [rsp+28h] [rbp-68h]
  void *ptr[2]; // [rsp+38h] [rbp-58h] BYREF
  __int64 v17; // [rsp+48h] [rbp-48h]
  unsigned __int64 v18; // [rsp+50h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)ptr = 0;
  v17 = 0;
  if ( (int)v3 <= 0 )
  {
    v11 = 0;
    v10 = nullptr;
    v9 = nullptr;
LABEL_10:
    *a1 = v9;
    a1[1] = v10;
    a1[2] = v11;
  }
  else
  {
    v13 = 0;
    v15 = 8 * (3LL * (unsigned int)(v3 - 1) + 3);
    while ( 1 )
    {
      v4 = (_QWORD *)*a2;
      v5 = *a2 + 72LL * a2[1];
      if ( !(72LL * a2[1]) )
        break;
      v6 = *(_QWORD *)(a3 + 8) + v13;
      v7 = *(_QWORD *)(v6 + 8);
      v8 = *(_QWORD *)(v6 + 16);
      while ( v4[2] != v8 || !(unsigned __int8)QT::QtPrivate::equalStrings(v8, v7, v8, v4[1]) )
      {
        v4 += 9;
        if ( v4 == (_QWORD *)v5 )
          goto LABEL_12;
      }
      QT::QString::append((QT::QString *)ptr, (const QT::QString *)(v4 + 3));
      QT::QString::append(ptr, "|", 1);
      QT::QString::append((QT::QString *)ptr, (const QT::QString *)(v4 + 6));
      QT::QString::append(ptr, "|", 1);
      v13 += 24;
      if ( v13 == v15 )
      {
        v9 = ptr[0];
        v10 = ptr[1];
        v11 = v17;
        goto LABEL_10;
      }
    }
LABEL_12:
    QT::QString::fromUtf8(a1, 0, (const char *)&unk_5C2F25);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  return a1;
}
