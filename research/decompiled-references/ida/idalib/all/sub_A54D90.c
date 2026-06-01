void __fastcall sub_A54D90(__int64 a1, __int64 a2, int *a3)
{
  __int64 v4; // rbx
  char v5; // al
  void *v6; // rdi
  void *v7; // rbp
  char *v8; // rax
  __int64 v9; // rdx
  int *v10; // rbp
  char *v11; // rbx
  void *v12; // rbp
  void **i; // rbx
  int *v14; // rax
  int *k; // rbx
  int *m; // rbx
  void *v17; // rbx
  void **j; // rbx
  unsigned int v19; // [rsp+0h] [rbp-58h] BYREF
  char v20; // [rsp+4h] [rbp-54h]
  void *v21[2]; // [rsp+8h] [rbp-50h] BYREF
  void *v22[2]; // [rsp+18h] [rbp-40h] BYREF
  __m128i v23; // [rsp+28h] [rbp-30h] BYREF

  if ( a2 && *(char *)(a2 + 29) < 0 )
    a2 = sub_B72720(a2);
  *(_QWORD *)(a1 + 8) = a2;
  v4 = *(_QWORD *)(a1 + 16);
  if ( (int *)v4 == a3 )
    return;
  sub_A53C40((__int64)&v19, a3);
  if ( (unsigned int *)v4 != &v19 )
  {
    if ( *(_DWORD *)v4 > 1u )
      sub_A4F8E0((int *)v4);
    *(_DWORD *)v4 = v19;
    v5 = *(_BYTE *)(v4 + 4);
    *(__m128i *)(v4 + 8) = _mm_loadu_si128((const __m128i *)v21);
    *(__m128i *)(v4 + 24) = _mm_loadu_si128((const __m128i *)v22);
    *(__m128i *)(v4 + 40) = _mm_loadu_si128(&v23);
    *(_BYTE *)(v4 + 4) = v20 & 1 | v5 & 0xFE;
    return;
  }
  if ( v19 <= 1 )
    return;
  switch ( v19 )
  {
    case 2u:
      goto LABEL_28;
    case 3u:
      v7 = (void *)sub_21F90D0();
      if ( v21[0] == v7 )
      {
        if ( !v21[1] )
          return;
        for ( i = (void **)((char *)v21[1] + 24 * *((_QWORD *)v21[1] - 1)); v21[1] != i; sub_A4F010((__int64)i) )
        {
          while ( 1 )
          {
            i -= 3;
            if ( v7 == *i )
              break;
            sub_21F9830(i);
            if ( i == v21[1] )
              goto LABEL_49;
          }
        }
LABEL_49:
        operator delete[](i - 1, 24LL * (_QWORD)*(i - 1) + 8);
        return;
      }
LABEL_32:
      sub_21F9830(v21);
      return;
    case 4u:
LABEL_28:
      if ( LODWORD(v21[1]) <= 0x40 )
        return;
      v6 = v21[0];
      if ( !v21[0] )
        return;
LABEL_24:
      operator delete[](v6);
      return;
    case 8u:
      v8 = (char *)v21[0];
      if ( v21[0] )
      {
        v9 = 56LL * *((_QWORD *)v21[0] - 1);
        v10 = (int *)((char *)v21[0] + v9);
        if ( v21[0] != (char *)v21[0] + v9 )
        {
          while ( 1 )
          {
            v11 = (char *)(v10 - 14);
            if ( (unsigned int)*(v10 - 14) <= 1 )
            {
              if ( v11 == v8 )
                goto LABEL_40;
            }
            else
            {
              sub_A4F8E0(v10 - 14);
              v8 = (char *)v21[0];
              if ( v11 == v21[0] )
              {
LABEL_40:
                v9 = 56LL * *((_QWORD *)v10 - 8);
                break;
              }
            }
            v10 -= 14;
          }
        }
        operator delete[](v8 - 8, v9 + 8);
      }
      return;
    case 5u:
      if ( LODWORD(v22[1]) > 0x40 && v22[0] )
        operator delete[](v22[0]);
      goto LABEL_28;
    case 6u:
      v12 = (void *)sub_21F90D0();
      if ( v22[1] == v12 )
      {
        if ( v23.m128i_i64[0] )
        {
          for ( j = (void **)(v23.m128i_i64[0] + 24LL * *(_QWORD *)(v23.m128i_i64[0] - 8));
                (void **)v23.m128i_i64[0] != j;
                sub_A4F010((__int64)j) )
          {
            while ( 1 )
            {
              j -= 3;
              if ( v12 == *j )
                break;
              sub_21F9830(j);
              if ( j == (void **)v23.m128i_i64[0] )
                goto LABEL_84;
            }
          }
LABEL_84:
          operator delete[](j - 1, 24LL * (_QWORD)*(j - 1) + 8);
        }
      }
      else
      {
        sub_21F9830(&v22[1]);
      }
      if ( v21[0] == v12 )
      {
        if ( !v21[1] )
          return;
        for ( i = (void **)((char *)v21[1] + 24 * *((_QWORD *)v21[1] - 1)); v21[1] != i; sub_A4F010((__int64)i) )
        {
          while ( 1 )
          {
            i -= 3;
            if ( v12 == *i )
              break;
            sub_21F9830(i);
            if ( i == v21[1] )
              goto LABEL_49;
          }
        }
        goto LABEL_49;
      }
      goto LABEL_32;
    case 7u:
      if ( (unsigned int)(LODWORD(v22[1]) - 3) > 0xFFFFFFFB )
        return;
      v6 = (void *)v23.m128i_i64[0];
      if ( !v23.m128i_i64[0] )
        return;
      goto LABEL_24;
    case 9u:
      v14 = (int *)v21[0];
      if ( !v21[0] )
        return;
      for ( k = (int *)((char *)v21[0] + 56 * *((_QWORD *)v21[0] - 1)); k != v21[0]; v14 = (int *)v21[0] )
      {
        while ( 1 )
        {
          k -= 14;
          if ( (unsigned int)*k > 1 )
            break;
          if ( k == v14 )
            goto LABEL_64;
        }
        sub_A4F8E0(k);
      }
      goto LABEL_64;
    case 0xAu:
      v14 = (int *)v21[0];
      if ( !v21[0] )
        return;
      for ( m = (int *)((char *)v21[0] + 56 * *((_QWORD *)v21[0] - 1)); m != v21[0]; v14 = (int *)v21[0] )
      {
        while ( 1 )
        {
          m -= 14;
          if ( (unsigned int)*m > 1 )
            break;
          if ( m == v14 )
            goto LABEL_64;
        }
        sub_A4F8E0(m);
      }
LABEL_64:
      operator delete[](v14 - 2, 56LL * *((_QWORD *)v14 - 1) + 8);
      return;
  }
  if ( v19 != 11 )
  {
    if ( v19 != 12 )
      return;
    if ( LODWORD(v21[1]) <= 4 )
      return;
    v6 = v22[0];
    if ( !v22[0] )
      return;
    goto LABEL_24;
  }
  v17 = v21[1];
  if ( v21[1] )
  {
    if ( *(_DWORD *)v21[1] > 1u )
      sub_A4F8E0((int *)v21[1]);
    operator delete(v17, 0x38u);
  }
}
