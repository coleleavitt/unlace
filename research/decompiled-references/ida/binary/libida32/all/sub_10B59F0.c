void __fastcall sub_10B59F0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  _BYTE *v4; // r15
  size_t v5; // rbx
  size_t v6; // rax
  int v7; // eax
  size_t v8; // rbp
  size_t v9; // rdx
  int v10; // eax
  _OWORD *v11; // rax
  __int64 v12; // rdx
  size_t v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  _BYTE *v18; // rax
  _QWORD *v19; // rbp
  _BYTE *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  _BYTE *v25; // rdi
  __int64 v26; // rcx
  __m128i v27; // xmm1
  size_t v28; // rdx
  _BYTE *v29; // rdi
  __int64 v30; // [rsp+10h] [rbp-60h] BYREF
  void *s1; // [rsp+18h] [rbp-58h] BYREF
  size_t v32; // [rsp+20h] [rbp-50h]
  _OWORD src[4]; // [rsp+28h] [rbp-48h] BYREF

  if ( a1 == a2 || a2 == a1 + 32 )
    return;
  v2 = a1 + 32;
  do
  {
    v4 = *(_BYTE **)a1;
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)(v2 + 8);
    s1 = *(void **)v2;
    v32 = v6;
    v7 = sub_2222570(&s1, v4, v5);
    if ( v7 )
    {
      if ( v7 >= 0 )
        goto LABEL_26;
    }
    else
    {
      v8 = v32;
      v9 = v32;
      if ( v5 <= v32 )
        v9 = v5;
      if ( v9 && (v10 = memcmp(s1, v4, v9)) != 0 )
      {
        if ( v10 < 0 )
          goto LABEL_26;
      }
      else if ( v5 == v8 || v5 > v8 )
      {
LABEL_26:
        sub_10B5710((__m128i *)v2);
        goto LABEL_27;
      }
    }
    v11 = *(_OWORD **)v2;
    s1 = src;
    if ( v11 == (_OWORD *)(v2 + 16) )
    {
      v27 = _mm_loadu_si128((const __m128i *)(v2 + 16));
      v13 = *(_QWORD *)(v2 + 8);
      *(_BYTE *)(v2 + 16) = 0;
      *(_QWORD *)(v2 + 8) = 0;
      src[0] = v27;
      v32 = v13;
      v14 = (v2 - a1) >> 5;
      if ( v2 - a1 <= 0 )
      {
        v25 = *(_BYTE **)a1;
        goto LABEL_41;
      }
    }
    else
    {
      v12 = *(_QWORD *)(v2 + 16);
      *(_QWORD *)v2 = v2 + 16;
      s1 = v11;
      *(_QWORD *)&src[0] = v12;
      v13 = *(_QWORD *)(v2 + 8);
      *(_QWORD *)(v2 + 8) = 0;
      v14 = (v2 - a1) >> 5;
      v32 = v13;
      *(_BYTE *)(v2 + 16) = 0;
      if ( v2 - a1 <= 0 )
        goto LABEL_30;
    }
    v15 = (_QWORD *)(v2 - 16);
    do
    {
      v19 = (_QWORD *)*(v15 - 2);
      v20 = (_BYTE *)v15[2];
      if ( v15 == v19 )
      {
        v21 = *(v15 - 1);
        if ( v21 )
        {
          if ( v21 == 1 )
          {
            *v20 = *(_BYTE *)v15;
          }
          else
          {
            v30 = v14;
            memcpy(v20, v15, v21);
            v14 = v30;
          }
        }
        v22 = *(v19 - 1);
        v23 = v19[2];
        v19[3] = v22;
        *(_BYTE *)(v23 + v22) = 0;
      }
      else
      {
        if ( v20 == (_BYTE *)(v15 + 4) )
        {
          v24 = *(v15 - 1);
          v15[2] = v19;
          v15[3] = v24;
          v15[4] = *v15;
        }
        else
        {
          v16 = *(v15 - 1);
          v17 = v15[4];
          v15[2] = v19;
          v15[3] = v16;
          v15[4] = *v15;
          if ( v20 )
          {
            *(v15 - 2) = v20;
            *v15 = v17;
            goto LABEL_17;
          }
        }
        *(v15 - 2) = v15;
      }
LABEL_17:
      v18 = (_BYTE *)*(v15 - 2);
      *(v15 - 1) = 0;
      v15 -= 4;
      *v18 = 0;
      --v14;
    }
    while ( v14 );
    v13 = v32;
    v11 = s1;
LABEL_30:
    v25 = *(_BYTE **)a1;
    if ( v11 != src )
    {
      if ( v25 == (_BYTE *)(a1 + 16) )
      {
        v30 = *(_QWORD *)&src[0];
        *(_QWORD *)a1 = v11;
        *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v30);
      }
      else
      {
        v30 = *(_QWORD *)&src[0];
        v26 = *(_QWORD *)(a1 + 16);
        *(_QWORD *)a1 = v11;
        *(__m128 *)(a1 + 8) = _mm_loadh_ps((const double *)&v30);
        if ( v25 )
        {
          s1 = v25;
          *(_QWORD *)&src[0] = v26;
          goto LABEL_34;
        }
      }
      s1 = src;
      v25 = src;
      goto LABEL_34;
    }
LABEL_41:
    if ( v13 )
    {
      if ( v13 == 1 )
      {
        *v25 = src[0];
        v28 = v32;
        v29 = *(_BYTE **)a1;
        *(_QWORD *)(a1 + 8) = v32;
        v29[v28] = 0;
        v25 = s1;
        goto LABEL_34;
      }
      memcpy(v25, src, v13);
      v13 = v32;
      v25 = *(_BYTE **)a1;
    }
    *(_QWORD *)(a1 + 8) = v13;
    v25[v13] = 0;
    v25 = s1;
LABEL_34:
    v32 = 0;
    *v25 = 0;
    if ( s1 != src )
      operator delete(s1);
LABEL_27:
    v2 += 32;
  }
  while ( a2 != v2 );
}

