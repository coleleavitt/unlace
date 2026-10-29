__int64 __fastcall sub_9F7940(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rbx
  unsigned __int64 v5; // rdx
  __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rcx
  const __m128i *v9; // r15
  __m128i *v10; // rbx
  const __m128i *v11; // r13
  __int8 v12; // al
  __int8 v13; // al
  __int8 v14; // al
  __int8 v15; // al
  __int8 v16; // dl
  _BYTE *v17; // r13
  __int64 v19; // rax
  unsigned __int64 i; // r13
  __int64 v21; // r13
  __int64 j; // rbx
  __int64 k; // r15
  __int64 v24; // rbx
  __int64 v25; // rax
  unsigned int v26; // [rsp+4h] [rbp-44h]
  __int64 v27; // [rsp+8h] [rbp-40h]

  if ( a1 != a2 )
  {
    v2 = *(_QWORD *)a2;
    v3 = a2 + 16;
    v4 = *(_QWORD *)a1;
    v5 = *(unsigned int *)(a1 + 8);
    if ( a2 + 16 == *(_QWORD *)a2 )
    {
      v26 = *(_DWORD *)(a2 + 8);
      v6 = v26;
      if ( v26 <= v5 )
      {
        v19 = *(_QWORD *)a1;
        if ( v26 )
        {
          v25 = sub_9F7350(a2 + 16, v3 + 320LL * v26, v4);
          v5 = *(unsigned int *)(a1 + 8);
          v4 = v25;
          v19 = *(_QWORD *)a1;
        }
        for ( i = v19 + 320 * v5; v4 != i; sub_9E5FF0(i + 16) )
        {
          while ( 1 )
          {
            i -= 320LL;
            if ( *(_BYTE *)(i + 312) )
              break;
            sub_9E5FF0(i + 16);
            if ( v4 == i )
              goto LABEL_27;
          }
          sub_9E5FA0(i + 192);
        }
LABEL_27:
        v21 = *(_QWORD *)a2;
        *(_DWORD *)(a1 + 8) = v26;
        for ( j = v21 + 320LL * *(unsigned int *)(a2 + 8); v21 != j; sub_9E5FF0(j + 16) )
        {
          while ( 1 )
          {
            j -= 320;
            if ( *(_BYTE *)(j + 312) )
              break;
            sub_9E5FF0(j + 16);
            if ( v21 == j )
              goto LABEL_30;
          }
          sub_9E5FA0(j + 192);
        }
      }
      else
      {
        v7 = 320 * v5;
        v8 = 320 * v5;
        if ( v26 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          for ( k = v4 + v7; k != v4; sub_9E5FF0(k + 16) )
          {
            while ( 1 )
            {
              k -= 320;
              if ( *(_BYTE *)(k + 312) )
                break;
              sub_9E5FF0(k + 16);
              if ( k == v4 )
                goto LABEL_34;
            }
            sub_9E5FA0(k + 192);
          }
LABEL_34:
          *(_DWORD *)(a1 + 8) = 0;
          sub_9F3700(a1, v26);
          v2 = *(_QWORD *)a2;
          v6 = *(unsigned int *)(a2 + 8);
          v8 = 0;
          v4 = *(_QWORD *)a1;
          v9 = *(const __m128i **)a2;
        }
        else
        {
          v9 = (const __m128i *)(v2 + v7);
          if ( *(_DWORD *)(a1 + 8) )
          {
            v27 = 320 * v5;
            sub_9F7350(v2, (__int64)v9, v4);
            v2 = *(_QWORD *)a2;
            v8 = v27;
            v6 = *(unsigned int *)(a2 + 8);
            v4 = *(_QWORD *)a1;
            v9 = (const __m128i *)(*(_QWORD *)a2 + v27);
          }
        }
        v10 = (__m128i *)(v8 + v4);
        v11 = (const __m128i *)(v2 + 320 * v6);
        if ( v11 != v9 )
        {
          do
          {
            *v10 = _mm_loadu_si128(v9);
            sub_9E6510((__int64)v10[1].m128i_i64, (__int64)v9[1].m128i_i64);
            v10[19].m128i_i8[8] = 0;
            if ( v9[19].m128i_i8[8] )
            {
              sub_9E6480(v10 + 12, v9 + 12);
              v12 = v9[19].m128i_i8[0] & 1 | v10[19].m128i_i8[0] & 0xFE;
              v10[19].m128i_i8[0] = v12;
              v13 = v9[19].m128i_i8[0] & 2 | v12 & 0xFD;
              v10[19].m128i_i8[0] = v13;
              v14 = v9[19].m128i_i8[0] & 4 | v13 & 0xFB;
              v10[19].m128i_i8[0] = v14;
              v15 = v9[19].m128i_i8[0] & 8 | v14 & 0xF7;
              v10[19].m128i_i8[0] = v15;
              v16 = v9[19].m128i_i8[0];
              v10[19].m128i_i8[8] = 1;
              v10[19].m128i_i8[0] = v16 & 0x70 | v15 & 0x8F;
            }
            v9 += 20;
            v10 += 20;
          }
          while ( v11 != v9 );
          v2 = *(_QWORD *)a2;
        }
        *(_DWORD *)(a1 + 8) = v26;
        v24 = v2 + 320LL * *(unsigned int *)(a2 + 8);
        if ( v24 != v2 )
        {
          while ( 1 )
          {
            v24 -= 320;
            if ( !*(_BYTE *)(v24 + 312) )
              break;
LABEL_46:
            sub_9E5FA0(v24 + 192);
            sub_9E5FF0(v24 + 16);
            if ( v24 == v2 )
              goto LABEL_30;
          }
          while ( 1 )
          {
            sub_9E5FF0(v24 + 16);
            if ( v24 == v2 )
              break;
            v24 -= 320;
            if ( *(_BYTE *)(v24 + 312) )
              goto LABEL_46;
          }
        }
      }
LABEL_30:
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      v17 = (_BYTE *)(v4 + 320 * v5);
      if ( (_BYTE *)v4 != v17 )
      {
        do
        {
          while ( 1 )
          {
            v17 -= 320;
            if ( v17[312] )
              break;
            sub_9E5FF0((__int64)(v17 + 16));
            if ( (_BYTE *)v4 == v17 )
              goto LABEL_15;
          }
          sub_9E5FA0((__int64)(v17 + 192));
          sub_9E5FF0((__int64)(v17 + 16));
        }
        while ( (_BYTE *)v4 != v17 );
LABEL_15:
        v17 = *(_BYTE **)a1;
      }
      if ( v17 != (_BYTE *)(a1 + 16) )
        free(v17);
      *(_QWORD *)a1 = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
      *(_QWORD *)a2 = v3;
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return a1;
}

