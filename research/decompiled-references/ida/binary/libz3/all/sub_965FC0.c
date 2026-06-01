__int64 __fastcall sub_965FC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  int *v6; // rax
  int v7; // eax
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r12
  char v18; // al
  unsigned int v19; // edx
  _QWORD *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 i; // rax
  _QWORD *v24; // [rsp+18h] [rbp-D0h]
  _QWORD *v25; // [rsp+20h] [rbp-C8h]
  unsigned int v26; // [rsp+28h] [rbp-C0h]
  unsigned int v27; // [rsp+2Ch] [rbp-BCh]
  _QWORD v28[23]; // [rsp+30h] [rbp-B8h] BYREF

  v4 = a3;
  if ( *(_DWORD *)(a3 + 24) )
  {
    v5 = *(_QWORD *)(a3 + 16);
    v6 = *(int **)(v5 + 24);
    if ( v6 )
      v7 = *v6;
    else
      v7 = -1;
    if ( v7 == *(_DWORD *)(a1 + 8) )
    {
      std::__ostream_insert<char,std::char_traits<char>>();
      v9 = *(_QWORD *)(v5 + 16);
      if ( (v9 & 7) != 0 )
      {
        std::__ostream_insert<char,std::char_traits<char>>();
        std::ostream::operator<<();
      }
      else
      {
        if ( v9 )
          strlen(*(const char **)(v5 + 16));
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      v10 = *(_QWORD *)(v5 + 24);
      if ( v10 && (v11 = *(_QWORD *)(v10 + 8)) != 0 )
        v12 = *(unsigned int *)(v11 - 4);
      else
        v12 = 0;
      sub_15D4280(a2, v12);
      v28[0] = v4;
      v27 = 16;
      v25 = v28;
      LODWORD(v13) = 0;
      while ( 1 )
      {
        v14 = *(unsigned int *)(v4 + 24);
        v26 = v13;
        if ( (_DWORD)v14 )
        {
          v15 = v4 + 8 * v14;
          do
          {
            v16 = *(_QWORD *)(v5 + 24);
            v17 = *(_QWORD *)(v4 + 32);
            if ( v16 && (v18 = *(_BYTE *)(v16 + 17), (v18 & 1) != 0) && (v18 & 2) != 0 && v5 == *(_QWORD *)(v17 + 16) )
            {
              v19 = v26;
              if ( v26 >= v27 )
              {
                v21 = sub_186B270(16LL * v27);
                v19 = v26;
                v20 = (_QWORD *)v21;
                if ( v26 )
                {
                  if ( v26 - 1 <= 2 || (_QWORD *)v21 == v25 + 1 )
                  {
                    for ( i = 0; i != v26; ++i )
                      v20[i] = v25[i];
                  }
                  else
                  {
                    v22 = 0;
                    do
                    {
                      *(__m128i *)&v20[v22] = _mm_loadu_si128((const __m128i *)&v25[v22]);
                      v22 += 2;
                    }
                    while ( 2LL * (v26 >> 1) != v22 );
                    if ( (v26 & 1) != 0 )
                      v20[v26 & 0xFFFFFFFE] = v25[v26 & 0xFFFFFFFE];
                  }
                }
                if ( v25 != v28 && v25 )
                {
                  v24 = v20;
                  sub_186B220(v25);
                  v19 = v26;
                  v20 = v24;
                }
                v25 = v20;
                v27 *= 2;
              }
              else
              {
                v20 = v25;
              }
              v20[v19] = v17;
              v26 = v19 + 1;
            }
            else
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_965E10(a1, a2, v17);
            }
            v4 += 8;
          }
          while ( v15 != v4 );
          LODWORD(v13) = v26;
        }
        if ( !(_DWORD)v13 )
          break;
        v13 = (unsigned int)(v13 - 1);
        v4 = v25[v13];
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      if ( v25 != v28 && v25 )
        sub_186B220(v25);
    }
    else
    {
      sub_1648CA0(a2, *(_QWORD *)(a1 + 24), a3, 1);
    }
  }
  else
  {
    sub_965E10(a1, a2, a3);
  }
  return a2;
}

