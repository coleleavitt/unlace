bool __fastcall sub_2134E40(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  _BYTE *v5; // rax
  char v6; // cl
  _BYTE *v7; // r13
  bool result; // al
  _BYTE *v9; // rdi
  _BYTE *v10; // rbp
  _BYTE *v11; // rdx
  int v12; // eax
  _BYTE *v13; // r13
  _QWORD *v14; // rdi
  __int64 v15; // rax
  __m128 *v16; // rsi
  void **p_src; // r9
  _QWORD *v18; // rdx
  size_t v19; // r10
  size_t v20; // r15
  size_t v21; // rax
  _QWORD *v22; // r11
  char v23; // r14
  size_t v24; // rbp
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // rax
  _BYTE *v27; // rdi
  __int64 v28; // rax
  void **v29; // [rsp+8h] [rbp-70h] BYREF
  size_t v30; // [rsp+10h] [rbp-68h]
  _QWORD *v31; // [rsp+18h] [rbp-60h]
  void *src; // [rsp+20h] [rbp-58h] BYREF
  size_t n; // [rsp+28h] [rbp-50h]
  _QWORD v34[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = sub_2153C00(a1);
  v5 = (_BYTE *)sub_2124B50(v4);
  v6 = *v5;
  v7 = v5;
  if ( *v5 == 10 || v6 == 62 )
  {
    v10 = v5;
  }
  else
  {
    result = v6 == 13 || v6 == 0;
    if ( result )
      return result;
    v9 = v7;
    while ( 1 )
    {
      v10 = v9 + 1;
      if ( v6 == 33 )
      {
        v11 = v9 + 2;
        ++v9;
        v10 = v11;
      }
      v6 = v9[1];
      if ( v6 == 62 || v6 == 10 )
        break;
      v9 = v10;
      result = v6 == 13 || v6 == 0;
      if ( result )
        return result;
    }
  }
  result = 1;
  if ( v6 == 62 )
  {
    v12 = *(_DWORD *)(a1 + 296);
    v13 = v7 + 1;
    v14 = *(_QWORD **)(a1 + 32);
    if ( !v12 )
    {
      v12 = sub_2239B50(v14, v10 + 1);
      v14 = *(_QWORD **)(a1 + 32);
    }
    *(_DWORD *)(a1 + 296) = v12;
    v15 = *(_QWORD *)(*v14 + 24LL * (unsigned int)(v12 - 1));
    v16 = *(__m128 **)(v15 + 8);
    sub_2124C60(a1 + 48, (__int64)v16, *(_QWORD *)(v15 + 16) - (_QWORD)v16, (__int64)(v10 + 1), 1);
    sub_2132C70(a1, v16);
    p_src = &src;
    n = 0;
    v18 = v34;
    LOBYTE(v34[0]) = 0;
    src = v34;
    v19 = v10 - v13;
    if ( v10 == v13 )
      goto LABEL_38;
    v20 = 0;
    v21 = 0;
    v22 = v34;
    while ( 1 )
    {
      v23 = v13[v21];
      v24 = v21 + 1;
      if ( v23 == 33 )
      {
        v23 = v13[v21 + 1];
        v24 = v21 + 2;
      }
      v25 = v20 + 1;
      if ( v18 == v22 )
        v26 = 15;
      else
        v26 = v34[0];
      if ( v25 <= v26 )
      {
        *((_BYTE *)v18 + v20) = v23;
        n = v20 + 1;
        *((_BYTE *)src + v25) = 0;
        if ( v19 <= v24 )
          goto LABEL_25;
      }
      else
      {
        v31 = v22;
        v30 = v19;
        v29 = p_src;
        sub_998B30((__int64)p_src, v20, 0, nullptr, 1u);
        v19 = v30;
        p_src = v29;
        v22 = v31;
        *((_BYTE *)src + v20) = v23;
        n = v20 + 1;
        *((_BYTE *)src + v25) = 0;
        if ( v19 <= v24 )
        {
LABEL_25:
          v19 = n;
          v27 = *(_BYTE **)a2;
          if ( src != p_src + 2 )
          {
            if ( v27 == (_BYTE *)(a2 + 16) )
            {
              v29 = (void **)v34[0];
              *(_QWORD *)a2 = src;
              *(__m128 *)(a2 + 8) = _mm_loadh_ps((const double *)&v29);
            }
            else
            {
              v29 = (void **)v34[0];
              v28 = *(_QWORD *)(a2 + 16);
              *(_QWORD *)a2 = src;
              *(__m128 *)(a2 + 8) = _mm_loadh_ps((const double *)&v29);
              if ( v27 )
              {
                src = v27;
                v34[0] = v28;
                goto LABEL_29;
              }
            }
            v27 = p_src + 2;
            src = p_src + 2;
LABEL_29:
            n = 0;
            *v27 = 0;
            if ( src != p_src + 2 )
              operator delete(src);
            return 0;
          }
          if ( !n )
          {
LABEL_36:
            *(_QWORD *)(a2 + 8) = v19;
            v27[v19] = 0;
            v27 = src;
            goto LABEL_29;
          }
          if ( n != 1 )
          {
            v29 = p_src;
            memcpy(v27, src, n);
            v19 = n;
            v27 = *(_BYTE **)a2;
            p_src = v29;
            goto LABEL_36;
          }
          *v27 = v34[0];
          v19 = n;
LABEL_38:
          v27 = *(_BYTE **)a2;
          goto LABEL_36;
        }
      }
      v20 = n;
      v18 = src;
      v21 = v24;
    }
  }
  return result;
}
