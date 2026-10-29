unsigned __int64 __fastcall sub_4FA500(__int64 *a1, int a2)
{
  const char *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // rdi
  __int64 v11; // [rsp+0h] [rbp-98h] BYREF
  __int128 v12; // [rsp+8h] [rbp-90h]
  __int64 v13; // [rsp+18h] [rbp-80h]
  __int128 v14; // [rsp+20h] [rbp-78h]
  __m128i si128; // [rsp+30h] [rbp-68h]
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int64 v17; // [rsp+50h] [rbp-48h]
  int v18; // [rsp+58h] [rbp-40h]
  unsigned __int64 v19; // [rsp+68h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  sub_4F9A60(a1, 0xFFFFFFFF);
  if ( *((_BYTE *)QT::QCoreApplication::self + 529) )
    return v19 - __readfsqword(0x28u);
  v13 = 0;
  v18 = a2 | 0x1000000;
  v2 = (const char *)a1;
  v17 = 0;
  v12 = 0;
  v14 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_OWORD *)ptr = 0;
  v3 = QT::QCoreApplication::self[2];
  v11 = 0;
  (*(void (__fastcall **)(_QWORD *, __int64 *, __int64 *))(v3 + 120))(QT::QCoreApplication::self + 2, a1, &v11);
  v4 = a1[38];
  if ( v4 )
  {
    v2 = &byte_7;
    QT::QWidget::setFocus(v4, 7);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    v5 = v13;
    if ( v13 )
      goto LABEL_7;
  }
  else
  {
    v5 = v13;
    if ( v13 )
    {
LABEL_7:
      v6 = v14;
      if ( (_QWORD)v14 )
      {
        v7 = 0;
        do
        {
          v8 = (__int64 *)(v5 + 40 * v7);
          jvalue_t_clear(v8 + 3);
          v9 = *v8;
          if ( *v8 )
          {
            v8[1] = 0;
            qfree(v9, v2);
          }
          ++v7;
          v5 = v13;
        }
        while ( v6 != v7 );
      }
      *(_QWORD *)&v14 = 0;
      qfree(v5, v2);
    }
  }
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11, v2);
  }
  return v19 - __readfsqword(0x28u);
}
