__int64 __fastcall sub_B72900(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned int v6; // edx
  unsigned int v7; // r13d
  _QWORD *v8; // rcx
  __int64 v9; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rdi
  __int64 v14; // rax
  __int64 i; // rax
  unsigned __int8 v16; // [rsp+7h] [rbp-41h]
  _QWORD *v17; // [rsp+8h] [rbp-40h]

  if ( *(_DWORD *)(a1 + 12) )
  {
    v16 = 1;
    v5 = 0;
    do
    {
      while ( 1 )
      {
        v9 = sub_9836E0(a2, *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * v5));
        if ( v9 )
          break;
        v16 = 0;
        if ( (unsigned int)++v5 >= *(_DWORD *)(a1 + 12) )
          return v16;
      }
      v6 = *(_DWORD *)(a3 + 8);
      v7 = *(_DWORD *)(a3 + 12);
      if ( v6 >= v7 )
      {
        v11 = 2 * v7;
        v12 = sub_186B270(8 * v11);
        v6 = *(_DWORD *)(a3 + 8);
        v13 = *(_QWORD **)a3;
        v8 = (_QWORD *)v12;
        if ( v6 )
        {
          if ( v6 - 1 <= 2 || (_QWORD *)v12 == v13 + 1 )
          {
            for ( i = 0; i != v6; ++i )
              v8[i] = v13[i];
          }
          else
          {
            v14 = 0;
            do
            {
              *(__m128i *)&v8[v14] = _mm_loadu_si128((const __m128i *)&v13[v14]);
              v14 += 2;
            }
            while ( 2LL * (v6 >> 1) != v14 );
            if ( (v6 & 1) != 0 )
              v8[v6 & 0xFFFFFFFE] = v13[v6 & 0xFFFFFFFE];
          }
        }
        if ( v13 && v13 != (_QWORD *)(a3 + 16) )
        {
          v17 = v8;
          sub_186B220(v13);
          v6 = *(_DWORD *)(a3 + 8);
          v8 = v17;
        }
        *(_QWORD *)a3 = v8;
        *(_DWORD *)(a3 + 12) = v11;
      }
      else
      {
        v8 = *(_QWORD **)a3;
      }
      ++v5;
      v8[v6] = v9;
      *(_DWORD *)(a3 + 8) = v6 + 1;
    }
    while ( (unsigned int)v5 < *(_DWORD *)(a1 + 12) );
  }
  else
  {
    return 1;
  }
  return v16;
}

