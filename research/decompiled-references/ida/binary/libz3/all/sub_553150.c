__int64 *__fastcall sub_553150(__int64 a1, __int64 a2)
{
  __int64 v4; // rbp
  __int64 *v5; // rax
  __int64 *v6; // r14
  __int64 v7; // rbp
  __int64 v8; // r15
  __int64 v9; // rax
  unsigned int v10; // edx
  unsigned int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 i; // rax
  __int64 v19; // [rsp+10h] [rbp-48h]
  _QWORD *v20; // [rsp+18h] [rbp-40h]

  v4 = sub_1829D10(a1, *(_QWORD *)a2);
  v5 = (__int64 *)sub_17E9C90(a1 + 560, 88);
  *v5 = v4;
  v6 = v5;
  v20 = v5 + 3;
  v5[1] = (__int64)(v5 + 3);
  v5[2] = 0x800000000LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v7 = 0;
    do
    {
      v9 = sub_1829D10(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v7));
      v10 = *((_DWORD *)v6 + 4);
      v11 = *((_DWORD *)v6 + 5);
      v12 = v9;
      if ( v10 < v11 )
      {
        v8 = v6[1];
      }
      else
      {
        v19 = v9;
        v13 = 2 * v11;
        v14 = sub_186B270(8 * v13);
        v10 = *((_DWORD *)v6 + 4);
        v15 = (_QWORD *)v6[1];
        v12 = v19;
        v8 = v14;
        if ( v10 )
        {
          if ( v10 - 1 <= 2 || (_QWORD *)v14 == v15 + 1 )
          {
            for ( i = 0; i != v10; ++i )
              *(_QWORD *)(v8 + i * 8) = v15[i];
          }
          else
          {
            v16 = 0;
            do
            {
              *(__m128i *)(v8 + v16 * 8) = _mm_loadu_si128((const __m128i *)&v15[v16]);
              v16 += 2;
            }
            while ( 2LL * (v10 >> 1) != v16 );
            if ( (v10 & 1) != 0 )
              *(_QWORD *)(v8 + 8LL * (v10 & 0xFFFFFFFE)) = v15[v10 & 0xFFFFFFFE];
          }
        }
        if ( v20 != v15 && v15 )
        {
          sub_186B220(v15);
          v10 = *((_DWORD *)v6 + 4);
        }
        v6[1] = v8;
        *((_DWORD *)v6 + 5) = v13;
      }
      ++v7;
      *(_QWORD *)(v8 + 8LL * v10) = v12;
      *((_DWORD *)v6 + 4) = v10 + 1;
    }
    while ( (unsigned int)v7 < *(_DWORD *)(a2 + 16) );
  }
  return v6;
}

