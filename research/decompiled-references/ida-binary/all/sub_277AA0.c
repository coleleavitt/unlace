_QWORD *__fastcall sub_277AA0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // r8
  _QWORD *v8; // rax
  _QWORD v10[11]; // [rsp+0h] [rbp-58h] BYREF

  v10[9] = __readfsqword(0x28u);
  v2 = 0;
  if ( a2 <= 6 && a1 )
  {
    do
    {
      v3 = *(_QWORD *)(a1 + 8);
      v10[v2++] = a1;
      a1 = *(_QWORD *)(v3 + 16);
    }
    while ( a2 + 1 > (unsigned int)v2 && a1 );
  }
  v4 = (_QWORD *)qword_8CC770;
  v5 = (_QWORD *)(qword_8CC770 + 16 * xmmword_8CC778);
  if ( (_QWORD *)qword_8CC770 != v5 )
  {
    v6 = &v10[v2];
    if ( v2 )
    {
      while ( 2 )
      {
        v7 = v4;
        v8 = v10;
        do
        {
          if ( *v4 == *v8 )
          {
            if ( v4 )
              return (_QWORD *)v4[1];
            return v7;
          }
          ++v8;
        }
        while ( v6 != v8 );
        v4 += 2;
        if ( v5 != v4 )
          continue;
        break;
      }
    }
    else
    {
      do
        v4 += 2;
      while ( v5 != v4 );
    }
  }
  return nullptr;
}
