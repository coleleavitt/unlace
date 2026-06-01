// write access to const memory has been detected, the output may be wrong!
_OWORD *__fastcall sub_715BB0(__int64 *a1, int a2)
{
  unsigned __int64 v2; // rdx
  __int64 v4; // rbx
  __int64 *v5; // r13
  unsigned int v6; // eax
  _OWORD *result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD *v10; // rdx
  __int64 *v11; // r12
  __int64 *i; // rbx
  __int64 v13; // r8
  int v14; // r10d
  int v15; // r9d
  int v16; // r9d
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // edi
  __int64 v20; // rsi
  int v21; // edx
  __int64 v22; // r14
  __int64 v23; // rdx
  __m128i v24; // xmm0
  char *v25; // rax
  __int64 v26; // r15
  __int64 v27; // r15
  __int64 v28; // r14
  __int64 v29; // rdi

  v2 = (unsigned int)(a2 - 1);
  v4 = *((unsigned int *)a1 + 4);
  v5 = (__int64 *)*a1;
  v6 = (((((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
        | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
        | ((v2 | (v2 >> 1)) >> 2)
        | v2
        | (v2 >> 1)) >> 16)
      | ((((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4) | ((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 8)
      | ((((v2 | (v2 >> 1)) >> 2) | v2 | (v2 >> 1)) >> 4)
      | ((v2 | (v2 >> 1)) >> 2)
      | v2
      | (v2 >> 1))
     + 1;
  if ( v6 < 0x40 )
    v6 = 64;
  *((_DWORD *)a1 + 4) = v6;
  result = (_OWORD *)sub_25CC9C0(40LL * v6, 8);
  v8 = *((unsigned int *)a1 + 4);
  *a1 = (__int64)result;
  v9 = 40 * v8;
  v10 = (_OWORD *)((char *)result + 40 * v8);
  if ( v5 )
  {
    a1[1] = 0;
    v11 = &v5[5 * v4];
    if ( v9 )
    {
      if ( (((_BYTE)v10 - (_BYTE)result) & 8) == 0
        || (*result = 0, result = (_OWORD *)((char *)result + 40), result != v10) )
      {
        do
        {
          *result = 0;
          result += 5;
          *(_OWORD *)((char *)result - 40) = 0;
        }
        while ( result != v10 );
      }
    }
    for ( i = v5; v11 != i; i += 5 )
    {
      v13 = *i;
      v14 = *((_DWORD *)i + 2);
      if ( *i && v13 != -1 || v14 )
      {
        v15 = *((_DWORD *)a1 + 4);
        if ( !v15 )
        {
          *(_QWORD *)&dword_0 = *i;
          *(_DWORD *)byte_8 = *((_DWORD *)i + 2);
          BUG();
        }
        v16 = v15 - 1;
        LODWORD(v17) = v16 & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
        v18 = *a1 + 40LL * (unsigned int)v17;
        v19 = *(_DWORD *)(v18 + 8);
        v20 = *(_QWORD *)v18;
        if ( v14 != v19 || v13 != v20 )
        {
          v21 = 1;
          v22 = 0;
          if ( v20 )
          {
LABEL_16:
            if ( v19 == 0 && v20 == -1 && !v22 )
              v22 = v18;
            goto LABEL_19;
          }
          while ( v19 )
          {
LABEL_19:
            v17 = v16 & (unsigned int)(v17 + v21);
            v18 = *a1 + 40 * v17;
            v19 = *(_DWORD *)(v18 + 8);
            v20 = *(_QWORD *)v18;
            if ( v14 == v19 && v13 == v20 )
              goto LABEL_25;
            ++v21;
            if ( v20 )
              goto LABEL_16;
          }
          if ( v22 )
            v18 = v22;
        }
LABEL_25:
        *(_QWORD *)v18 = *i;
        *(_DWORD *)(v18 + 8) = *((_DWORD *)i + 2);
        v23 = i[2];
        v24 = _mm_loadu_si128((const __m128i *)(i + 3));
        i[2] = 0;
        *(_QWORD *)(v18 + 16) = v23;
        *(__m128i *)(v18 + 24) = v24;
        i[3] = 0;
        *((_DWORD *)i + 8) = 0;
        ++*((_DWORD *)a1 + 2);
        v25 = (char *)i[2];
        if ( *((_DWORD *)i + 7) )
        {
          v26 = *((unsigned int *)i + 6);
          if ( (_DWORD)v26 )
          {
            v27 = 8 * v26;
            v28 = 0;
            do
            {
              v29 = *(_QWORD *)&v25[v28];
              if ( v29 )
              {
                if ( v29 != -8 )
                {
                  operator delete();
                  v25 = (char *)i[2];
                }
              }
              v28 += 8;
            }
            while ( v28 != v27 );
          }
        }
        free(v25);
      }
    }
    return (_OWORD *)operator delete();
  }
  else
  {
    a1[1] = 0;
    if ( result != v10 )
    {
      if ( (((_BYTE)v10 - (_BYTE)result) & 8) == 0
        || (*result = 0, result = (_OWORD *)((char *)result + 40), result != v10) )
      {
        do
        {
          *result = 0;
          result += 5;
          *(_OWORD *)((char *)result - 40) = 0;
        }
        while ( result != v10 );
      }
    }
  }
  return result;
}

