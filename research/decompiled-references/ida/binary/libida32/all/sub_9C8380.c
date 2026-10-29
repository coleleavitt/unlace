__int64 __fastcall sub_9C8380(__int64 a1, __int64 a2, char a3, _BYTE *a4, __int64 a5)
{
  _BYTE *v5; // r13
  _BYTE *v7; // rdi
  __int64 v8; // rdx
  size_t v10; // rdx
  double v11[3]; // [rsp+8h] [rbp-60h] BYREF
  void *src; // [rsp+20h] [rbp-48h] BYREF
  size_t n; // [rsp+28h] [rbp-40h]
  _QWORD v14[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = (_BYTE *)(a1 + 40);
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = a3;
  *(_QWORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 40;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  src = v14;
  sub_9C77B0(&src, a4, (__int64)&a4[a5]);
  v7 = *(_BYTE **)(a1 + 24);
  if ( src == v14 )
  {
    v10 = n;
    if ( n )
    {
      if ( n == 1 )
        *v7 = v14[0];
      else
        memcpy(v7, src, n);
      v10 = n;
      v7 = *(_BYTE **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = v10;
    v7[v10] = 0;
    v7 = src;
  }
  else
  {
    if ( v5 == v7 )
    {
      v11[0] = *(double *)v14;
      *(_QWORD *)(a1 + 24) = src;
      *(__m128 *)(a1 + 32) = _mm_loadh_ps(v11);
    }
    else
    {
      v11[0] = *(double *)v14;
      v8 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 24) = src;
      *(__m128 *)(a1 + 32) = _mm_loadh_ps(v11);
      if ( v7 )
      {
        src = v7;
        v14[0] = v8;
        goto LABEL_5;
      }
    }
    v7 = v14;
    src = v14;
  }
LABEL_5:
  n = 0;
  *v7 = 0;
  if ( src != v14 )
    operator delete(src);
  return a1;
}

