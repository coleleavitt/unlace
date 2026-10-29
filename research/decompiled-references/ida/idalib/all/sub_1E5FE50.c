__int64 __fastcall sub_1E5FE50(__int64 a1, __int64 a2)
{
  __m128i si128; // xmm0
  _QWORD *v3; // r14
  __int64 v4; // r13
  unsigned __int64 v5; // rbp
  __int64 *v6; // rbp
  __int64 v7; // r12
  int v8; // edx
  __int64 result; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 *v14; // rbp

  si128 = _mm_load_si128((const __m128i *)&xmmword_23A7D60);
  v3 = (_QWORD *)(a1 + 16);
  v4 = a1 + 40;
  v5 = a2;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 16) = a1 + 40;
  *(__m128i *)(a1 + 24) = si128;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v6 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
                    v7 = *v6;
                    v8 = *(unsigned __int8 *)(*v6 + 16);
                    result = *(unsigned __int8 *)(*v6 + 16);
                    if ( (unsigned int)(v8 - 25) <= 1 )
                    {
                      *(_QWORD *)(a1 + 8) = v7;
                      return result;
                    }
                    if ( (_BYTE)v8 != 40 )
                      break;
                    v12 = *(_QWORD *)(a1 + 24);
                    v5 = *(_QWORD *)(v7 + 32);
                    if ( (unsigned __int64)(v12 + 1) > *(_QWORD *)(a1 + 32) )
                    {
                      a2 = a1 + 40;
                      sub_2236E10(v3, v4, v12 + 1, 1);
                      v12 = *(_QWORD *)(a1 + 24);
                    }
                    *(_BYTE *)(*(_QWORD *)(a1 + 16) + v12) = 2;
                    ++*(_QWORD *)(a1 + 24);
                  }
                  if ( (unsigned __int8)(v8 - 5) > 1u )
                  {
                    v10 = (unsigned int)(v8 - 2);
                    if ( (unsigned int)v10 > 1 )
                      break;
                  }
                  v11 = *(_QWORD *)(a1 + 24);
                  v5 = *(_QWORD *)(v7 + 32);
                  if ( (unsigned __int64)(v11 + 1) > *(_QWORD *)(a1 + 32) )
                  {
                    a2 = a1 + 40;
                    sub_2236E10(v3, v4, v11 + 1, 1);
                    v11 = *(_QWORD *)(a1 + 24);
                  }
                  *(_BYTE *)(*(_QWORD *)(a1 + 16) + v11) = 3;
                  ++*(_QWORD *)(a1 + 24);
                }
                if ( (_BYTE)v8 != 42 )
                  break;
                a2 = 4;
                v5 = *(_QWORD *)(v7 + 32);
                sub_1E5FE00(v3, 4);
              }
              if ( (_BYTE)v8 != 11 )
                break;
              a2 = 5;
              v5 = *(_QWORD *)(v7 + 32);
              sub_1E5FE00(v3, 5);
            }
            if ( (_BYTE)v8 != 33 )
              break;
            a2 = 7;
            v5 = *(_QWORD *)(v7 + 32);
            sub_1E5FE00(v3, 7);
          }
          v13 = (unsigned int)(v8 - 43);
          if ( (unsigned int)v13 > 1 )
            break;
          while ( 1 )
          {
            v5 = *(_QWORD *)(v7 + 32);
            if ( (*(_BYTE *)(v7 + 18) & 0x10) == 0 )
              break;
            v14 = (__int64 *)(v5 & 0xFFFFFFFFFFFFFFF0LL);
            v7 = *v14;
            if ( (unsigned int)*(unsigned __int8 *)(*v14 + 16) - 43 > 1 )
              v7 = sub_F63050(*v14, a2, v13, v10);
          }
          a2 = 6;
          sub_1E5FE00(v3, 6);
        }
        if ( (_BYTE)result != 8 )
          break;
        a2 = 1;
        v5 = *(_QWORD *)(v7 + 48);
        sub_1E5FE00(v3, 1);
      }
      if ( (_BYTE)result != 30 )
        break;
      a2 = 8;
      v5 = *(_QWORD *)(v7 + 24);
      sub_1E5FE00(v3, 8);
    }
    result = sub_F63050(*v6, a2, v13, v10);
    if ( v7 == result )
      break;
    a2 = 0;
    v5 = result & 0xFFFFFFFFFFFFFFF0LL;
    sub_1E5FE00(v3, 0);
  }
  *(_QWORD *)(a1 + 8) = 0;
  return result;
}
