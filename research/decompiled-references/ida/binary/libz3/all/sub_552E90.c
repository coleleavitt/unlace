__int64 *__fastcall sub_552E90(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // rax
  unsigned int v9; // edx
  unsigned int v10; // r13d
  __int64 v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __int64 i; // rax
  __int64 v18; // [rsp+0h] [rbp-48h]
  _QWORD *v19; // [rsp+8h] [rbp-40h]

  v3 = sub_1829B00(a1, *(_QWORD *)a2);
  v4 = (__int64 *)sub_17E9C90(a1 + 560, 88);
  *v4 = v3;
  v5 = v4;
  v19 = v4 + 3;
  v4[1] = (__int64)(v4 + 3);
  v4[2] = 0x800000000LL;
  if ( *(_DWORD *)(a2 + 16) )
  {
    v6 = 0;
    do
    {
      v8 = sub_1829B00(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v6));
      v9 = *((_DWORD *)v5 + 4);
      v10 = *((_DWORD *)v5 + 5);
      v11 = v8;
      if ( v9 < v10 )
      {
        v7 = v5[1];
      }
      else
      {
        v18 = v8;
        v12 = 2 * v10;
        v13 = sub_186B270(8 * v12);
        v9 = *((_DWORD *)v5 + 4);
        v14 = (_QWORD *)v5[1];
        v11 = v18;
        v7 = v13;
        if ( v9 )
        {
          if ( v9 - 1 <= 2 || (_QWORD *)v13 == v14 + 1 )
          {
            for ( i = 0; i != v9; ++i )
              *(_QWORD *)(v7 + i * 8) = v14[i];
          }
          else
          {
            v15 = 0;
            do
            {
              *(__m128i *)(v7 + v15 * 8) = _mm_loadu_si128((const __m128i *)&v14[v15]);
              v15 += 2;
            }
            while ( 2LL * (v9 >> 1) != v15 );
            if ( (v9 & 1) != 0 )
              *(_QWORD *)(v7 + 8LL * (v9 & 0xFFFFFFFE)) = v14[v9 & 0xFFFFFFFE];
          }
        }
        if ( v19 != v14 && v14 )
        {
          sub_186B220(v14);
          v9 = *((_DWORD *)v5 + 4);
          v11 = v18;
        }
        v5[1] = v7;
        *((_DWORD *)v5 + 5) = v12;
      }
      ++v6;
      *(_QWORD *)(v7 + 8LL * v9) = v11;
      *((_DWORD *)v5 + 4) = v9 + 1;
    }
    while ( (unsigned int)v6 < *(_DWORD *)(a2 + 16) );
  }
  return v5;
}

