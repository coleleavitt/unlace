__int64 *__fastcall sub_34340(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rsi
  __int64 *v3; // rbp
  __int64 v4; // kr00_8
  __int64 v5; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // [rsp+0h] [rbp-38h] BYREF
  __int128 v12; // [rsp+8h] [rbp-30h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v1 = xmmword_CB418;
  v2 = qword_CB410;
  v13 = __readfsqword(0x28u);
  if ( !(_QWORD)xmmword_CB418 )
  {
    v11 = 0;
    v12 = 0;
    if ( (unsigned __int64)&v11 < qword_CB410
      || (unsigned __int64)&v11 >= qword_CB410 + 24LL * *((_QWORD *)&xmmword_CB418 + 1) )
    {
      if ( *((_QWORD *)&xmmword_CB418 + 1) > 0xFu
        || (qword_CB410 = qvector_reserve(&qword_CB410, qword_CB410, 16, 24),
            v2 = qword_CB410,
            v1 = xmmword_CB418,
            (unsigned __int64)xmmword_CB418 <= 0xF) )
      {
        v7 = 24 * v1;
        do
        {
          v8 = v7 + v2;
          v7 += 24;
          *(_QWORD *)v8 = 0;
          *(_OWORD *)(v8 + 8) = 0;
          v2 = qword_CB410;
        }
        while ( v7 != 384 );
      }
    }
    else if ( *((_QWORD *)&xmmword_CB418 + 1) > 0xFu
           || (qword_CB410 = qvector_reserve(&qword_CB410, qword_CB410, 16, 24),
               v2 = qword_CB410,
               v1 = xmmword_CB418,
               (unsigned __int64)xmmword_CB418 <= 0xF) )
    {
      v9 = 24 * v1;
      do
      {
        v10 = v9 + v2;
        v9 += 24;
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        v2 = qword_CB410;
      }
      while ( v9 != 384 );
    }
    *(_QWORD *)&xmmword_CB418 = 16;
  }
  v3 = (__int64 *)(v2 + 24LL * dword_CB404);
  v4 = dword_CB404 + 1;
  v3[1] = 0;
  v5 = *(_QWORD *)(a1 + 112) & 0x7FFFFFFFFFFFFFFFLL;
  dword_CB404 = (((HIDWORD(v4) >> 28) + (_BYTE)v4) & 0xF) - (HIDWORD(v4) >> 28);
  sub_20160(v3, (__int64)"<%llu>", v5);
  return v3;
}
