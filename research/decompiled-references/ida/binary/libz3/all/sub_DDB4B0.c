__int64 __fastcall sub_DDB4B0(__int64 a1, __int64 *a2, __int64 **a3, const char *a4, const char *a5)
{
  __int64 *v6; // r13
  __int64 *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // esi
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // r9
  unsigned int v15; // esi
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // r12
  __int64 *v19; // rbp
  __int64 v20; // rsi
  __int64 j; // rdx
  __int64 v24; // rdx
  __int64 v26; // [rsp+18h] [rbp-100h]
  __int64 v27; // [rsp+18h] [rbp-100h]
  __int64 v28; // [rsp+38h] [rbp-E0h]
  __int64 v29; // [rsp+40h] [rbp-D8h]
  __int64 *v30; // [rsp+48h] [rbp-D0h]
  __int64 i; // [rsp+50h] [rbp-C8h]
  _BYTE v32[192]; // [rsp+58h] [rbp-C0h] BYREF

  if ( *a3 == a2 )
  {
    sub_1638010(a1);
    sub_1638010(a1);
    sub_1638010(a1);
    return sub_1638210(a1);
  }
  else
  {
    v6 = a2 + 1;
    strlen(a5);
    strlen(a4);
    sub_1638010(a1);
    v7 = *a3;
    v30 = (__int64 *)v32;
    v8 = *(_QWORD *)(a1 + 928);
    if ( !v8 )
      v8 = a1;
    v29 = v8;
    for ( i = 0x1000000000LL; v6 != v7; ++v6 )
    {
      v11 = *v6;
      v12 = *(_QWORD *)(*(_QWORD *)(*v6 + 16) + 24LL);
      if ( !v12 || *(_DWORD *)(v12 + 4) )
      {
        v13 = sub_1638110(a1);
        v14 = v13;
        if ( v13 )
          ++*(_DWORD *)(v13 + 8);
        v15 = i;
        if ( (unsigned int)i < HIDWORD(i) )
        {
          v9 = (__int64)v30;
        }
        else
        {
          v26 = v13;
          v9 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(i)));
          v15 = i;
          v14 = v26;
          if ( (_DWORD)i )
          {
            if ( (unsigned int)(i - 1) <= 2 || (__int64 *)v9 == v30 + 1 )
            {
              v24 = 0;
              do
              {
                *(_QWORD *)(v9 + v24 * 8) = v30[v24];
                ++v24;
              }
              while ( (unsigned int)i != v24 );
            }
            else
            {
              v16 = 0;
              do
              {
                *(__m128i *)(v9 + v16 * 8) = _mm_loadu_si128((const __m128i *)&v30[v16]);
                v16 += 2;
              }
              while ( 2LL * ((unsigned int)i >> 1) != v16 );
              if ( (i & 1) != 0 )
                *(_QWORD *)(v9 + 8LL * ((unsigned int)i & 0xFFFFFFFE)) = v30[(unsigned int)i & 0xFFFFFFFE];
            }
          }
          if ( v30 != (__int64 *)v32 && v30 )
          {
            v28 = v9;
            sub_186B220(v30);
            v15 = i;
            v9 = v28;
            v14 = v26;
          }
          v30 = (__int64 *)v9;
          HIDWORD(i) *= 2;
        }
        *(_QWORD *)(v9 + 8LL * v15) = v14;
        ++*(_DWORD *)(v11 + 8);
        v10 = v15 + 1;
        if ( v10 >= HIDWORD(i) )
        {
          v9 = sub_186B270(8LL * (unsigned int)(2 * HIDWORD(i)));
          if ( v10 )
          {
            if ( v10 - 1 <= 2 || (__int64 *)v9 == v30 + 1 )
            {
              for ( j = 0; j != v10; ++j )
                *(_QWORD *)(v9 + j * 8) = v30[j];
            }
            else
            {
              v17 = 0;
              do
              {
                *(__m128i *)(v9 + v17 * 8) = _mm_loadu_si128((const __m128i *)&v30[v17]);
                v17 += 2;
              }
              while ( 2LL * (v10 >> 1) != v17 );
              if ( (v10 & 1) != 0 )
                *(_QWORD *)(v9 + 8LL * (v10 & 0xFFFFFFFE)) = v30[v10 & 0xFFFFFFFE];
            }
          }
          if ( v30 != (__int64 *)v32 && v30 )
          {
            v27 = v9;
            sub_186B220(v30);
            v9 = v27;
          }
          v30 = (__int64 *)v9;
          HIDWORD(i) *= 2;
        }
        *(_QWORD *)(v9 + 8LL * v10) = v11;
        v7 = *a3;
        LODWORD(i) = v10 + 1;
      }
    }
    sub_1638190(a1);
    v18 = v30;
    v19 = &v30[(unsigned int)i];
    if ( v30 < v19 )
    {
      do
      {
        while ( 1 )
        {
          v20 = *v18;
          if ( *v18 )
          {
            if ( (*(_DWORD *)(v20 + 8))-- == 1 )
              break;
          }
          if ( ++v18 >= v19 )
            goto LABEL_43;
        }
        sub_15D7BC0(v29, v20);
        ++v18;
      }
      while ( v18 < v19 );
LABEL_43:
      v18 = v30;
    }
    if ( v18 != (__int64 *)v32 )
    {
      if ( v18 )
        sub_186B220(v18);
    }
    sub_1638010(a1);
    sub_1638260(a1);
    sub_1638090(a1);
    sub_1638010(a1);
    sub_1638010(a1);
    sub_1638210(a1);
    return sub_1638DD0(a1);
  }
}

