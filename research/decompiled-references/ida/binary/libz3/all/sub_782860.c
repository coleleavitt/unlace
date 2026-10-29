__int64 __fastcall sub_782860(__m128i **a1, __int64 a2, __int64 a3, __int64 a4, const __m128i *a5, __int64 a6)
{
  __m128i v10; // xmm0
  unsigned int v11; // eax
  unsigned __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rax
  __int64 result; // rax
  __int64 *v16; // rbx
  unsigned __int64 v17; // rbp
  __int64 v18; // rsi
  __int64 v19; // rdi
  __m128i v20; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  char v23; // [rsp+20h] [rbp-48h]

  v10 = _mm_loadl_epi64(a5);
  v21 = nullptr;
  v20 = _mm_unpacklo_epi64(v10, v10);
  v23 = sub_1859610(a4, "learned", 0);
  v11 = sub_1859960(a4, "max_memory", 0xFFFFFFFFLL);
  *a1 = &v20;
  v12 = (unsigned __int64)v11 << 20;
  v13 = v11 == -1;
  v14 = -1;
  if ( !v13 )
    v14 = v12;
  v22 = v14;
  result = sub_7830E0(&v20, a2, a3, a5, a6);
  *a1 = nullptr;
  v16 = v21;
  if ( v21 )
  {
    result = *((unsigned int *)v21 - 1);
    v17 = (unsigned __int64)&v21[result];
    if ( (unsigned __int64)v21 >= v17 )
      return sub_186B220(v16 - 1);
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v19 = v20.m128i_i64[1];
          v13 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v13 )
            break;
        }
        if ( (unsigned __int64)++v16 >= v17 )
          goto LABEL_10;
      }
      result = sub_15D7BC0(v19, v18);
      ++v16;
    }
    while ( (unsigned __int64)v16 < v17 );
LABEL_10:
    v16 = v21;
    if ( v21 )
      return sub_186B220(v16 - 1);
  }
  return result;
}

