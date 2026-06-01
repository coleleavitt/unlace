__int64 __fastcall sub_4F5180(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r14
  unsigned int v7; // ebx
  char v8; // al
  char v9; // dl
  __int64 v10; // rsi
  unsigned int v11; // edx
  unsigned int v12; // r9d
  int v13; // r13d
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rax
  unsigned int v20; // ebp
  _QWORD *v21; // rbx
  __int64 v22; // rbp
  __int64 v23; // rax
  _QWORD *v24; // rdi
  unsigned int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 i; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+8h] [rbp-50h]
  int v31; // [rsp+8h] [rbp-50h]
  char v32; // [rsp+17h] [rbp-41h]
  unsigned int v33; // [rsp+18h] [rbp-40h]
  _QWORD *v34; // [rsp+18h] [rbp-40h]

  v33 = *(_DWORD *)(a1 + 8);
  if ( v33 )
  {
    v30 = *(unsigned int *)(a1 + 8);
    v6 = 0;
    v7 = 0;
    v32 = 0;
    do
    {
      while ( 1 )
      {
        v8 = sub_558790(a2, *(_QWORD *)(*(_QWORD *)a1 + 8 * v6), a3);
        if ( v8 )
          break;
        v9 = sub_558790(a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 8 * v6));
        v8 = v32;
        if ( !v9 )
          break;
        v10 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6++);
        sub_553300(a2, v10);
        if ( v30 == v6 )
          goto LABEL_9;
      }
      if ( v7 != (_DWORD)v6 )
        *(_QWORD *)(*(_QWORD *)a1 + 8LL * v7) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
      v32 = v8;
      ++v7;
      ++v6;
    }
    while ( v30 != v6 );
LABEL_9:
    if ( v33 != v7 )
    {
      v11 = *(_DWORD *)(a1 + 8);
      if ( v11 >= v7 )
      {
        if ( v7 < v11 )
          *(_DWORD *)(a1 + 8) = v7;
      }
      else
      {
        v12 = *(_DWORD *)(a1 + 12);
        v13 = *(_DWORD *)(a1 + 8);
        v34 = (_QWORD *)(a1 + 16);
        do
        {
          if ( v11 < v12 )
          {
            v14 = *(_QWORD *)a1;
          }
          else
          {
            v31 = 2 * v12;
            v16 = sub_186B270(16LL * v12);
            v11 = *(_DWORD *)(a1 + 8);
            v17 = *(_QWORD **)a1;
            v12 = v31;
            v14 = v16;
            if ( v11 )
            {
              if ( v11 - 1 <= 2 || (_QWORD *)v16 == v17 + 1 )
              {
                for ( i = 0; i != v11; ++i )
                  *(_QWORD *)(v14 + i * 8) = v17[i];
              }
              else
              {
                v18 = 0;
                do
                {
                  *(__m128i *)(v14 + v18 * 8) = _mm_loadu_si128((const __m128i *)&v17[v18]);
                  v18 += 2;
                }
                while ( v18 != 2LL * (v11 >> 1) );
                if ( (v11 & 1) != 0 )
                  *(_QWORD *)(v14 + 8LL * (v11 & 0xFFFFFFFE)) = v17[v11 & 0xFFFFFFFE];
              }
            }
            if ( v17 != v34 && v17 )
            {
              sub_186B220(v17);
              v11 = *(_DWORD *)(a1 + 8);
              v12 = v31;
            }
            *(_QWORD *)a1 = v14;
            *(_DWORD *)(a1 + 12) = v12;
          }
          v15 = v11;
          ++v13;
          ++v11;
          *(_QWORD *)(v14 + 8 * v15) = 0;
          *(_DWORD *)(a1 + 8) = v11;
        }
        while ( v13 != v7 );
      }
    }
    if ( v32 )
    {
      sub_553300(a2, a3);
      return 0;
    }
    v33 = *(_DWORD *)(a1 + 8);
  }
  v20 = *(_DWORD *)(a1 + 12);
  if ( v33 >= v20 )
  {
    v22 = 2 * v20;
    v23 = sub_186B270(8 * v22);
    v24 = *(_QWORD **)a1;
    v21 = (_QWORD *)v23;
    v25 = *(_DWORD *)(a1 + 8);
    v33 = v25;
    if ( v25 )
    {
      v26 = *(_DWORD *)(a1 + 8);
      if ( v25 - 1 <= 2 || v21 == v24 + 1 )
      {
        v29 = 0;
        do
        {
          v21[v29] = v24[v29];
          ++v29;
        }
        while ( v29 != v33 );
      }
      else
      {
        v27 = 0;
        do
        {
          *(__m128i *)&v21[v27] = _mm_loadu_si128((const __m128i *)&v24[v27]);
          v27 += 2;
        }
        while ( 2LL * (v26 >> 1) != v27 );
        if ( (v33 & 1) != 0 )
          v21[v33 & 0xFFFFFFFE] = v24[v33 & 0xFFFFFFFE];
      }
    }
    if ( v24 != (_QWORD *)(a1 + 16) )
    {
      if ( v24 )
      {
        sub_186B220(v24);
        v33 = *(_DWORD *)(a1 + 8);
      }
    }
    *(_QWORD *)a1 = v21;
    *(_DWORD *)(a1 + 12) = v22;
  }
  else
  {
    v21 = *(_QWORD **)a1;
  }
  v21[v33] = a3;
  *(_DWORD *)(a1 + 8) = v33 + 1;
  return 1;
}

