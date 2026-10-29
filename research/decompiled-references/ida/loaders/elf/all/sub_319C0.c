unsigned __int64 __fastcall sub_319C0(__int64 a1)
{
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // rcx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __m128i *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // [rsp+0h] [rbp-48h] BYREF
  __m128i v21; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-20h]

  v1 = *(unsigned int *)(a1 + 568);
  v2 = *(_QWORD *)(a1 + 120);
  v22 = __readfsqword(0x28u);
  if ( v2 < v1 )
  {
    v10 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a1 + 128) < v1 )
    {
      v18 = qvector_reserve(a1 + 112, v10, v1, 64);
      v2 = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(a1 + 112) = v18;
      v10 = v18;
    }
    memset((void *)(v10 + (v2 << 6)), 0, (v1 - v2) << 6);
    *(_QWORD *)(a1 + 120) = v1;
  }
  else if ( v1 != v2 )
  {
    *(_QWORD *)(a1 + 120) = v1;
  }
  v4 = *(_QWORD *)(a1 + 1360);
  if ( v1 != v4 )
  {
    v21.m128i_i8[8] = 0;
    v21.m128i_i64[0] = -1;
    v20 = 0;
    if ( v1 >= v4 )
    {
      v11 = *(_QWORD *)(a1 + 1352);
      v12 = *(_QWORD *)(a1 + 1368);
      if ( (unsigned __int64)&v20 < v11 || (unsigned __int64)&v20 >= v11 + 32 * v12 )
      {
        if ( v12 < v1 )
        {
          *(_QWORD *)(a1 + 1352) = qvector_reserve(a1 + 1352, v11, v1, 32);
          v4 = *(_QWORD *)(a1 + 1360);
        }
        if ( v4 < v1 )
        {
          do
          {
            v16 = v4++;
            v17 = (__m128i *)(*(_QWORD *)(a1 + 1352) + 32 * v16);
            *v17 = _mm_load_si128(&v20);
            v17[1] = _mm_load_si128(&v21);
          }
          while ( v1 != v4 );
        }
      }
      else
      {
        if ( v12 < v1 )
        {
          *(_QWORD *)(a1 + 1352) = qvector_reserve(a1 + 1352, v11, v1, 32);
          v4 = *(_QWORD *)(a1 + 1360);
        }
        if ( v4 < v1 )
        {
          do
          {
            v13 = v4++;
            v14 = *(_QWORD *)(a1 + 1352) + 32 * v13;
            *(_QWORD *)(v14 + 16) = -1;
            *(_BYTE *)(v14 + 24) = 0;
            *(_OWORD *)v14 = 0;
          }
          while ( v1 != v4 );
        }
      }
    }
    *(_QWORD *)(a1 + 1360) = v1;
  }
  v5 = *(_QWORD *)(a1 + 1336);
  v20.m128i_i8[0] = 0;
  if ( v1 < v5 )
    goto LABEL_15;
  if ( v5 < v1 )
  {
    v7 = *(_QWORD *)(a1 + 1328);
    v8 = *(_QWORD *)(a1 + 1344);
    v9 = a1 + 1328;
    if ( (unsigned __int64)&v20 < v7 || (unsigned __int64)&v20 >= v7 + v8 )
    {
      if ( v8 >= v1
        || (v19 = qvector_reserve(v9, v7, v1, 1),
            v5 = *(_QWORD *)(a1 + 1336),
            *(_QWORD *)(a1 + 1328) = v19,
            v7 = v19,
            v5 < v1) )
      {
        while ( 1 )
        {
          *(_BYTE *)(v7 + v5++) = v20.m128i_i8[0];
          if ( v1 == v5 )
            break;
          v7 = *(_QWORD *)(a1 + 1328);
        }
      }
    }
    else if ( v8 >= v1
           || (v15 = qvector_reserve(v9, v7, v1, 1),
               v5 = *(_QWORD *)(a1 + 1336),
               *(_QWORD *)(a1 + 1328) = v15,
               v7 = v15,
               v5 < v1) )
    {
      while ( 1 )
      {
        *(_BYTE *)(v7 + v5++) = 0;
        if ( v1 == v5 )
          break;
        v7 = *(_QWORD *)(a1 + 1328);
      }
    }
LABEL_15:
    *(_QWORD *)(a1 + 1336) = v1;
  }
  return v22 - __readfsqword(0x28u);
}

