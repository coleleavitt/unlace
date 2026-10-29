__int64 __fastcall sub_9EC740(__int64 a1, int a2, _BYTE *a3, __int64 a4, char a5)
{
  _BYTE *v5; // r14
  _BYTE *v8; // rdi
  __int64 v9; // rdx
  size_t v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  size_t n; // [rsp+18h] [rbp-40h]
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  v5 = (_BYTE *)(a1 + 40);
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  *(_QWORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 40;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  src = v15;
  sub_9EB4F0(&src, a3, (__int64)&a3[a4]);
  v8 = *(_BYTE **)(a1 + 24);
  if ( src == v15 )
  {
    v11 = n;
    if ( n )
    {
      if ( n == 1 )
        *v8 = v15[0];
      else
        memcpy(v8, src, n);
      v11 = n;
      v8 = *(_BYTE **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = v11;
    v8[v11] = 0;
    v8 = src;
  }
  else
  {
    if ( v5 == v8 )
    {
      v12 = v15[0];
      *(_QWORD *)(a1 + 24) = src;
      *(__m128 *)(a1 + 32) = _mm_loadh_ps((const double *)&v12);
    }
    else
    {
      v12 = v15[0];
      v9 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 24) = src;
      *(__m128 *)(a1 + 32) = _mm_loadh_ps((const double *)&v12);
      if ( v8 )
      {
        src = v8;
        v15[0] = v9;
        goto LABEL_5;
      }
    }
    v8 = v15;
    src = v15;
  }
LABEL_5:
  n = 0;
  *v8 = 0;
  if ( src != v15 )
    operator delete(src);
  *(_BYTE *)(a1 + 56) = a5;
  return a1;
}
