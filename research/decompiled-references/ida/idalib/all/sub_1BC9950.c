unsigned __int64 __fastcall sub_1BC9950(__int64 a1, _BYTE *a2, __int64 a3, char a4, void **a5)
{
  _BYTE *v5; // r13
  bool v9; // al
  __int64 v10; // r14
  __int64 v11; // rax
  _BYTE *v12; // rdi
  void *v13; // rdx
  int v14; // ebx
  char v15; // cl
  unsigned __int8 v16; // dl
  size_t v18; // rdx
  bool v19; // al
  bool v20; // al
  bool v21; // al
  __int64 v22; // rdx
  unsigned __int64 v23; // [rsp+8h] [rbp-60h] BYREF
  void *src; // [rsp+10h] [rbp-58h] BYREF
  size_t n; // [rsp+18h] [rbp-50h]
  _QWORD v26[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a2;
  v9 = sub_B8BF70(a3);
  v10 = v9;
  if ( !v9 )
    v10 = sub_B8BF70((__int64)a2);
  v23 = sub_B77AF0(a3);
  if ( v23 )
  {
    v11 = sub_B77B50(a3);
    sub_1CB6030(&src, a1, *(_QWORD *)(v23 + 56), v11);
    a2 = src;
    v12 = *a5;
    if ( src == v26 )
    {
      v18 = n;
      if ( n )
      {
        if ( n == 1 )
          *v12 = v26[0];
        else
          memcpy(v12, src, n);
        v18 = n;
        v12 = *a5;
      }
      a5[1] = (void *)v18;
      v12[v18] = 0;
      v12 = src;
      goto LABEL_8;
    }
    if ( v12 == (_BYTE *)(a5 + 2) )
    {
      v23 = v26[0];
      *a5 = src;
      *(__m128 *)(a5 + 1) = _mm_loadh_ps((const double *)&v23);
    }
    else
    {
      v23 = v26[0];
      v13 = a5[2];
      *a5 = src;
      *(__m128 *)(a5 + 1) = _mm_loadh_ps((const double *)&v23);
      if ( v12 )
      {
        src = v12;
        v26[0] = v13;
LABEL_8:
        n = 0;
        *v12 = 0;
        if ( src != v26 )
          operator delete(src);
        v10 = 1;
        goto LABEL_11;
      }
    }
    v12 = v26;
    src = v26;
    goto LABEL_8;
  }
LABEL_11:
  if ( a5[1] )
    v10 = 2;
  if ( (*(_BYTE *)(a3 + 29) & 2) != 0 && (unsigned int)sub_B77890(a3) == 30 )
  {
    v15 = 9;
  }
  else
  {
    v14 = a4 & 2;
    v15 = v14;
    if ( v14 )
    {
      v15 = 2;
    }
    else
    {
      v16 = *(_BYTE *)(a3 + 28) & 0x7F;
      if ( v16 == 38 )
      {
        if ( (*(_BYTE *)(a3 + 29) & 2) != 0 )
        {
          v21 = sub_B98FC0(a3, (__int64)a2);
          v15 = 4;
          if ( !v21 )
          {
            LODWORD(src) = 0;
            v15 = sub_B99060(a3, &src, v22, 4) + 5;
          }
        }
        else
        {
          v15 = 3;
          if ( (v5[28] & 0x7F) == 0x36 )
            v15 = 10;
        }
      }
      else if ( (unsigned int)v16 - 35 <= 3 )
      {
        if ( (*(_BYTE *)(a3 + 29) & 2) == 0
          || (v19 = sub_B98360((_QWORD *)a3, (__int64)a2), v15 = 8, !v19)
          && (v20 = sub_B98230((_QWORD *)a3, (__int64)a2), v15 = 7, !v20) )
        {
          v15 = 1;
        }
      }
    }
  }
  return v15 & 0xF | (unsigned __int64)(v10 << 32);
}
