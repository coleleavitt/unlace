__int64 __fastcall sub_20F720(__int64 a1, const char *a2, unsigned int a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r8
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rbp
  int v12; // eax
  size_t v13; // r13
  __m128i si128; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rdi
  size_t v17; // rbx
  void *v18; // rax
  __int64 v19; // rdi
  _QWORD *v20; // rax
  __m128i v21[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD **)(a1 + 192);
  if ( !v4 )
    return 0;
  v5 = (_QWORD *)(a1 + 184);
  v7 = (_QWORD *)(a1 + 184);
  do
  {
    while ( 1 )
    {
      v8 = v4[2];
      v9 = v4[3];
      if ( *((_DWORD *)v4 + 8) >= (int)a2 )
        break;
      v4 = (_QWORD *)v4[3];
      if ( !v9 )
        goto LABEL_6;
    }
    v7 = v4;
    v4 = (_QWORD *)v4[2];
  }
  while ( v8 );
LABEL_6:
  result = 0;
  if ( v5 != v7 && *((_DWORD *)v7 + 8) <= (int)a2 && v7[6] )
  {
    if ( a4 )
    {
      v11 = v7[5] + 32LL * a3;
      if ( a4 != v11 )
      {
        v12 = *(_DWORD *)a4;
        if ( *(int *)v11 < -1 )
        {
          if ( v12 >= -1 )
          {
            v16 = *(_QWORD *)(a4 + 8);
            if ( v16 )
            {
              *(_QWORD *)(a4 + 16) = 0;
              qfree(v16, a2);
            }
          }
          *(_QWORD *)(a4 + 8) = *(_QWORD *)(v11 + 8);
        }
        else if ( v12 < -1 )
        {
          *(_QWORD *)(a4 + 8) = 0;
          *(_OWORD *)(a4 + 16) = 0;
          v17 = *(_QWORD *)(v11 + 16);
          if ( v17 )
          {
            v18 = (void *)qalloc_or_throw(*(_QWORD *)(v11 + 16));
            *(_QWORD *)(a4 + 24) = v17;
            *(_QWORD *)(a4 + 8) = v18;
            memcpy(v18, *(const void **)(v11 + 8), v17);
            *(_QWORD *)(a4 + 16) = v17;
          }
        }
        else
        {
          v13 = *(_QWORD *)(v11 + 16);
          si128 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
          if ( v13 )
          {
            v19 = *(_QWORD *)(v11 + 16);
            v21[0] = si128;
            v20 = (_QWORD *)qalloc_or_throw(v19);
            a2 = *(const char **)(v11 + 8);
            v4 = v20;
            memcpy(v20, a2, v13);
            si128 = _mm_load_si128(v21);
          }
          v15 = *(_QWORD *)(a4 + 8);
          if ( v15 )
          {
            *(_QWORD *)(a4 + 16) = 0;
            v21[0] = si128;
            qfree(v15, a2);
            si128 = _mm_load_si128(v21);
          }
          *(_QWORD *)(a4 + 8) = v4;
          *(__m128i *)(a4 + 16) = si128;
        }
        *(_DWORD *)a4 = *(_DWORD *)v11;
      }
    }
    return 1;
  }
  return result;
}
