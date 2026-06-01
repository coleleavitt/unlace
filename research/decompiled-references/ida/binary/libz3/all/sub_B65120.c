__int64 __fastcall sub_B65120(__int64 a1, int a2, _DWORD *a3, __int64 a4)
{
  _DWORD *v4; // r15
  _DWORD *v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // esi
  __int64 v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-D8h]
  _BYTE *v22; // [rsp+10h] [rbp-C8h]
  __int64 v23; // [rsp+18h] [rbp-C0h]
  _BYTE v24[184]; // [rsp+20h] [rbp-B8h] BYREF

  v22 = v24;
  v23 = 0x1000000000LL;
  if ( a2 )
  {
    v4 = a3;
    v5 = &a3[a2];
    v6 = 0;
    do
    {
      v9 = *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (*v4 >> 1));
      if ( (*v4 & 1) != 0 )
      {
        v6 = v23;
        v9 = sub_15E1A70(*(_QWORD *)(a1 + 104));
      }
      if ( v6 < HIDWORD(v23) )
      {
        v7 = (__int64)v22;
      }
      else
      {
        v20 = v9;
        v6 = v23;
        v7 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v23)));
        v9 = v20;
        if ( (_DWORD)v23 )
        {
          if ( (unsigned int)(v23 - 1) <= 2 || (_BYTE *)v7 == v22 + 8 )
          {
            v18 = 0;
            do
            {
              *(_QWORD *)(v7 + v18) = *(_QWORD *)&v22[v18];
              v18 += 8;
            }
            while ( 8LL * (unsigned int)v23 != v18 );
          }
          else
          {
            v10 = 0;
            do
            {
              *(__m128i *)(v7 + v10) = _mm_loadu_si128((const __m128i *)&v22[v10]);
              v10 += 16;
            }
            while ( v10 != 16LL * ((unsigned int)v23 >> 1) );
            if ( (v23 & 1) != 0 )
              *(_QWORD *)(v7 + 8LL * ((unsigned int)v23 & 0xFFFFFFFE)) = *(_QWORD *)&v22[8 * (v23 & 0xFFFFFFFE)];
          }
        }
        if ( v22 != v24 && v22 )
        {
          sub_186B220(v22);
          v6 = v23;
          v9 = v20;
        }
        v22 = (_BYTE *)v7;
        HIDWORD(v23) *= 2;
      }
      v8 = v6;
      ++v4;
      ++v6;
      *(_QWORD *)(v7 + 8 * v8) = v9;
      LODWORD(v23) = v6;
    }
    while ( v5 != v4 );
  }
  if ( a4 )
  {
    v11 = v23;
    v12 = sub_15E1A70(*(_QWORD *)(a1 + 104));
    if ( (unsigned int)v23 >= HIDWORD(v23) )
    {
      v11 = v23;
      v13 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v23)));
      if ( (_DWORD)v23 )
      {
        if ( (unsigned int)(v23 - 1) <= 2 || (_BYTE *)v13 == v22 + 8 )
        {
          v19 = 0;
          do
          {
            *(_QWORD *)(v13 + v19) = *(_QWORD *)&v22[v19];
            v19 += 8;
          }
          while ( v19 != 8LL * (unsigned int)v23 );
        }
        else
        {
          v17 = 0;
          do
          {
            *(__m128i *)(v13 + v17) = _mm_loadu_si128((const __m128i *)&v22[v17]);
            v17 += 16;
          }
          while ( 16LL * ((unsigned int)v23 >> 1) != v17 );
          if ( (v23 & 1) != 0 )
            *(_QWORD *)(v13 + 8LL * ((unsigned int)v23 & 0xFFFFFFFE)) = *(_QWORD *)&v22[8 * (v23 & 0xFFFFFFFE)];
        }
      }
      if ( v22 != v24 && v22 )
      {
        sub_186B220(v22);
        v11 = v23;
      }
      v22 = (_BYTE *)v13;
    }
    else
    {
      v13 = (__int64)v22;
    }
    *(_QWORD *)(v13 + 8LL * v11) = v12;
  }
  v14 = sub_15E1AF0(*(_QWORD *)(a1 + 104));
  v15 = sub_15DEFF0(*(_QWORD *)(a1 + 104), v14);
  if ( v22 != v24 && v22 )
    sub_186B220(v22);
  return v15;
}

