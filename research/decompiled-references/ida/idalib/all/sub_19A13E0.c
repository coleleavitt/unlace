__int64 __fastcall sub_19A13E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v6; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  _BYTE *v12; // rsi
  void *v13; // rdx
  int v14; // eax
  _BYTE *v15; // rdi
  __int64 v16; // rdx
  size_t v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-70h] BYREF
  void *v20[2]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  void *src; // [rsp+30h] [rbp-48h] BYREF
  size_t n; // [rsp+38h] [rbp-40h]
  _QWORD v24[7]; // [rsp+40h] [rbp-38h] BYREF

  v6 = (_BYTE *)(a1 + 40);
  if ( (**(_QWORD **)a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    v11 = sub_F63270(*(_QWORD *)(**(_QWORD **)a2 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  }
  else
  {
    v9 = **(_QWORD **)(a2 + 8);
    if ( !v9 )
      goto LABEL_16;
    if ( *(char *)(v9 + 8) < 0 )
      goto LABEL_16;
    v10 = *(_QWORD *)(v9 + 360);
    if ( !v10 || (*(_BYTE *)(v10 + 8) & 0x7Fu) - 59 > 2 )
      goto LABEL_16;
    v11 = (_QWORD *)(v10 - 64);
  }
  if ( !v11 )
  {
LABEL_16:
    *(_OWORD *)a1 = 0;
    *(_OWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 32) = 0;
    *(_BYTE *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 12) = 0;
    *(_QWORD *)(a1 + 24) = v6;
    *(_BYTE *)(a1 + 40) = 0;
    *(_OWORD *)(a1 + 48) = 0;
    return a1;
  }
  sub_B86A00((__int64)v20, v11 + 5);
  v12 = v20[0];
  v13 = v20[1];
  v14 = **(_DWORD **)(a2 + 16);
  *(_QWORD *)(a1 + 12) = 0;
  *(_BYTE *)(a1 + 20) = 0;
  *(_QWORD *)(a1 + 24) = v6;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 56) = 0;
  *(_DWORD *)a1 = v14;
  *(_DWORD *)(a1 + 4) = v14;
  *(_BYTE *)(a1 + 8) = 1;
  src = v24;
  sub_19A0BE0(&src, v12, (__int64)v13 + (_QWORD)v12);
  v15 = *(_BYTE **)(a1 + 24);
  if ( src == v24 )
  {
    v18 = n;
    if ( n )
    {
      if ( n == 1 )
        *v15 = v24[0];
      else
        memcpy(v15, src, n);
      v18 = n;
      v15 = *(_BYTE **)(a1 + 24);
    }
    *(_QWORD *)(a1 + 32) = v18;
    v15[v18] = 0;
    v15 = src;
  }
  else
  {
    if ( v15 == v6 )
    {
      v19 = v24[0];
      *(_QWORD *)(a1 + 24) = src;
      *(__m128 *)(a1 + 32) = _mm_loadh_ps((const double *)&v19);
    }
    else
    {
      v19 = v24[0];
      v16 = *(_QWORD *)(a1 + 40);
      *(_QWORD *)(a1 + 24) = src;
      *(__m128 *)(a1 + 32) = _mm_loadh_ps((const double *)&v19);
      if ( v15 )
      {
        src = v15;
        v24[0] = v16;
        goto LABEL_12;
      }
    }
    v15 = v24;
    src = v24;
  }
LABEL_12:
  n = 0;
  *v15 = 0;
  if ( src != v24 )
    operator delete(src);
  if ( v20[0] != &v21 )
  {
    operator delete(v20[0]);
    return a1;
  }
  return a1;
}
