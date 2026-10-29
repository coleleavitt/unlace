unsigned __int64 __fastcall sub_1F74380(__int64 a1, char *a2, _DWORD *a3)
{
  char *v5; // r14
  char *v6; // rbp
  char *v7; // rsi
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // r12
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  char *v18; // rdi
  _DWORD *v19; // rax
  void *v20; // rdi
  size_t v21; // rdx
  unsigned __int64 result; // rax
  __int64 i; // rax
  __int64 v24; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+10h] [rbp-48h]
  _DWORD *v26; // [rsp+18h] [rbp-40h]

  v5 = *(char **)(a1 + 8);
  v6 = *(char **)a1;
  v7 = &a2[-*(_QWORD *)a1];
  v8 = (__int64)&v5[-*(_QWORD *)a1] >> 2;
  if ( !v8 )
  {
    v9 = 1;
    goto LABEL_23;
  }
  v9 = 2 * v8;
  v10 = -4;
  if ( v8 > 2 * v8 || v9 > 0x3FFFFFFFFFFFFFFFLL )
    goto LABEL_3;
  if ( v9 )
  {
LABEL_23:
    v10 = 4 * v9;
LABEL_3:
    v26 = a3;
    v24 = (__int64)v7;
    v11 = operator new(v10);
    a3 = v26;
    v12 = v11;
    v25 = v11 + v10;
    v13 = v11 + 4;
    goto LABEL_4;
  }
  v13 = 4;
  v12 = 0;
  v25 = 0;
LABEL_4:
  *(_DWORD *)&v7[v12] = *a3;
  if ( a2 != v6 )
  {
    v14 = (unsigned __int64)(a2 - 4 - v6) >> 2;
    if ( ((unsigned __int64)v6 >= v12 + 16 || v12 >= (unsigned __int64)(v6 + 16)) && (v14 & 0x3FFFFFFFFFFFFFFCLL) != 0 )
    {
      v15 = v14 + 1;
      v16 = 0;
      do
      {
        *(__m128i *)(v12 + v16) = _mm_loadu_si128((const __m128i *)&v6[v16]);
        v16 += 16;
      }
      while ( v16 != 16 * ((v14 + 1) >> 2) );
      v17 = 4 * (v15 & 0xFFFFFFFFFFFFFFFCLL);
      v18 = &v6[v17];
      v19 = (_DWORD *)(v12 + v17);
      if ( v15 != (v15 & 0xFFFFFFFFFFFFFFFCLL) )
      {
        *v19 = *(_DWORD *)v18;
        if ( a2 != v18 + 4 )
        {
          v19[1] = *((_DWORD *)v18 + 1);
          if ( a2 != v18 + 8 )
            v19[2] = *((_DWORD *)v18 + 2);
        }
      }
    }
    else
    {
      for ( i = 0; ; ++i )
      {
        *(_DWORD *)(v12 + 4 * i) = *(_DWORD *)&v6[4 * i];
        if ( i == v14 )
          break;
      }
    }
    v13 = v12 + 4 * v14 + 8;
  }
  if ( a2 != v5 )
  {
    v20 = (void *)v13;
    v21 = 4 * ((unsigned __int64)(v5 - a2 - 4) >> 2) + 4;
    v13 += v21;
    memcpy(v20, a2, v21);
  }
  if ( v6 )
    operator delete(v6);
  v24 = v13;
  result = v25;
  *(_QWORD *)(a1 + 16) = v25;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v24);
  return result;
}
