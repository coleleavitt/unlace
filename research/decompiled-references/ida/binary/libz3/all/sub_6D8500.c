_BYTE *__fastcall sub_6D8500(__int64 a1, __int64 *a2)
{
  _BYTE *result; // rax
  _DWORD *v3; // rdx
  int v4; // r12d
  char *v5; // r15
  __int64 v6; // r14
  unsigned int v7; // ecx
  int v8; // r13d
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 *v14; // r14
  unsigned __int64 v15; // rdx
  __int64 *v16; // r13
  __int64 v17; // r9
  __int64 *i; // rcx
  __int64 *v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // [rsp+0h] [rbp-D8h]
  char *ptr; // [rsp+10h] [rbp-C8h]
  unsigned int v25; // [rsp+18h] [rbp-C0h]
  _BYTE src[184]; // [rsp+20h] [rbp-B8h] BYREF

  sub_14B9B80(a1 + 32, a2);
  result = (_BYTE *)*a2;
  if ( !*(_WORD *)(*a2 + 4) )
  {
    v3 = *(_DWORD **)(*((_QWORD *)result + 2) + 24LL);
    if ( v3 )
    {
      if ( *v3 == 5 && v3[1] == 6 )
      {
        v4 = *((_DWORD *)result + 6);
        v5 = src;
        ptr = src;
        v25 = 0;
        if ( v4 )
        {
          LODWORD(v6) = 16;
          v7 = 0;
          v8 = 0;
          while ( 1 )
          {
            v10 = *(_QWORD *)&result[8 * v8 + 32];
            if ( v7 >= (unsigned int)v6 )
            {
              v23 = *(_QWORD *)&result[8 * v8 + 32];
              v6 = (unsigned int)(2 * v6);
              v11 = sub_186B270(8 * v6);
              v7 = v25;
              v5 = (char *)v11;
              v10 = v23;
              if ( v25 )
              {
                if ( v25 - 1 <= 2 || (char *)v11 == ptr + 8 )
                {
                  v22 = 0;
                  do
                  {
                    *(_QWORD *)&v5[v22] = *(_QWORD *)&ptr[v22];
                    v22 += 8;
                  }
                  while ( 8LL * v25 != v22 );
                }
                else
                {
                  v12 = 0;
                  do
                  {
                    *(__m128i *)&v5[v12] = _mm_loadu_si128((const __m128i *)&ptr[v12]);
                    v12 += 16;
                  }
                  while ( v12 != 16LL * (v25 >> 1) );
                  if ( (v25 & 1) != 0 )
                    *(_QWORD *)&v5[8 * (v25 & 0xFFFFFFFE)] = *(_QWORD *)&ptr[8 * (v25 & 0xFFFFFFFE)];
                }
              }
              if ( ptr != src && ptr )
              {
                sub_186B220(ptr);
                v7 = v25;
                v10 = v23;
              }
              ptr = v5;
            }
            v9 = v7;
            ++v8;
            ++v7;
            *(_QWORD *)&v5[8 * v9] = v10;
            v25 = v7;
            if ( v4 == v8 )
              break;
            result = (_BYTE *)*a2;
          }
          v13 = 8LL * v7;
          v14 = (__int64 *)&v5[v13];
          if ( &v5[v13] != v5 )
          {
            _BitScanReverse64(&v15, v13 >> 3);
            sub_6D7980(v5, &v5[v13], 2LL * (int)v15, a1 + 16);
            if ( (unsigned __int64)v13 <= 0x80 )
            {
              sub_6D72A0(v5, &v5[v13]);
            }
            else
            {
              v16 = (__int64 *)(v5 + 128);
              sub_6D72A0(v5, v5 + 128);
              do
              {
                v17 = *v16;
                for ( i = v16; sub_6BFEB0(v17, *(i - 1)); i = v19 - 1 )
                  *v19 = v20;
                ++v16;
                *v19 = v17;
              }
              while ( v14 != v16 );
            }
            v7 = v25;
            v5 = ptr;
          }
          if ( v7 == 1 )
          {
            v21 = *(_QWORD *)v5;
            if ( !*(_WORD *)(*(_QWORD *)v5 + 4LL) )
              goto LABEL_32;
          }
        }
        v21 = sub_15E1AF0(*(_QWORD *)(a1 + 16));
        if ( v21 )
LABEL_32:
          ++*(_DWORD *)(v21 + 8);
        sub_6BFE30(*a2, a2[1]);
        result = src;
        *a2 = v21;
        if ( ptr != src )
        {
          if ( ptr )
            return (_BYTE *)sub_186B220(ptr);
        }
      }
    }
  }
  return result;
}

