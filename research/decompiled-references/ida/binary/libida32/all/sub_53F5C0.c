unsigned __int64 __fastcall sub_53F5C0(__int64 a1)
{
  unsigned __int8 v2; // al
  __int64 v3; // rdi
  const char *v4; // rax
  const char *v5; // rbp
  size_t v6; // rax
  size_t v7; // r12
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  __int64 v11; // rdi
  const char *v12; // rax
  const char *v13; // rbp
  size_t v14; // rax
  size_t v15; // r12
  __int64 v16; // rax
  __int64 v17; // rdx
  int *v18; // rax
  int *v19; // rdi
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  const char *v24; // rax
  const char *v25; // rbp
  size_t v26; // rax
  size_t v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rbp
  void *v30; // rdi
  size_t v31; // r13
  __int64 v32; // rsi
  __m128i si128; // xmm0
  _DWORD *v34; // rsi
  void *v35; // rdi
  size_t v36; // r13
  void *v37; // rdi
  size_t v38; // r13
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  const void *v44; // r13
  void *v45; // rdi
  __int64 v46; // rax

  v2 = *(_BYTE *)(*(_QWORD *)(a1 + 248) + 100LL);
  if ( v2 == 29 )
    goto LABEL_10;
  if ( v2 > 0x1Du )
  {
    if ( v2 == 45 )
    {
      v11 = *(_QWORD *)(a1 + 272);
      if ( v11 )
      {
        v12 = sub_51E810(v11);
        v13 = v12;
        if ( v12 && (v14 = strlen(v12), (v15 = v14) != 0) )
        {
          v30 = *(void **)(a1 + 160);
          v31 = v14 + 1;
          if ( *(_QWORD *)(a1 + 176) < v14 + 1 )
          {
            v39 = qvector_reserve(a1 + 160, *(_QWORD *)(a1 + 160), v31, 1);
            *(_QWORD *)(a1 + 160) = v39;
            v30 = (void *)v39;
          }
          *(_QWORD *)(a1 + 168) = v31;
          memmove(v30, v13, v15);
          *(_BYTE *)(*(_QWORD *)(a1 + 160) + v15) = 0;
          v10 = *(_QWORD *)(a1 + 168);
          if ( v10 > 1 )
          {
            *(_BYTE *)(a1 + 192) = 12;
            return v10 - 1;
          }
        }
        else
        {
          *(_QWORD *)(a1 + 168) = 0;
        }
        v16 = **(_QWORD **)(a1 + 248);
        if ( !v16 )
          sub_53CC80();
        v17 = *(_QWORD *)(v16 + 32);
        if ( v17 )
        {
          v18 = *(int **)(v16 + 24);
          v19 = &v18[v17];
          if ( v18 != v19 )
          {
            v20 = *(_QWORD *)(a1 + 240);
            v21 = 0;
            while ( 1 )
            {
              v22 = *v18;
              v23 = v21;
              v21 += v22;
              if ( v20 < v21 )
                break;
              if ( v19 == ++v18 )
                goto LABEL_29;
            }
            if ( v23 == v20 && v22 > 1 )
            {
              v34 = *(_DWORD **)(a1 + 160);
              if ( *(_QWORD *)(a1 + 176) <= 4u )
              {
                v41 = qvector_reserve(a1 + 160, v34, 5, 1);
                *(_QWORD *)(a1 + 160) = v41;
                v34 = (_DWORD *)v41;
              }
              *(_QWORD *)(a1 + 168) = 5;
              *v34 = 1263747405;
              *(_BYTE *)(*(_QWORD *)(a1 + 160) + 4LL) = 0;
            }
          }
        }
LABEL_29:
        *(_BYTE *)(a1 + 192) = 12;
        v10 = *(_QWORD *)(a1 + 168);
        goto LABEL_15;
      }
      if ( !under_debugger )
        interr(3110);
LABEL_62:
      BUG();
    }
LABEL_47:
    if ( !under_debugger )
      interr(3098);
    goto LABEL_62;
  }
  if ( v2 == 12 )
  {
    v3 = *(_QWORD *)(a1 + 280);
    if ( v3 )
    {
      v4 = sub_51E7A0(v3);
      v5 = v4;
      if ( !v4 || (v6 = strlen(v4), (v7 = v6) == 0) )
      {
        *(_QWORD *)(a1 + 168) = 0;
        *(_BYTE *)(a1 + 192) = 12;
        return 0;
      }
      v35 = *(void **)(a1 + 160);
      v36 = v6 + 1;
      if ( *(_QWORD *)(a1 + 176) < v6 + 1 )
      {
        v42 = qvector_reserve(a1 + 160, *(_QWORD *)(a1 + 160), v36, 1);
        *(_QWORD *)(a1 + 160) = v42;
        v35 = (void *)v42;
      }
      *(_QWORD *)(a1 + 168) = v36;
      memmove(v35, v5, v7);
      *(_BYTE *)(*(_QWORD *)(a1 + 160) + v7) = 0;
      v10 = *(_QWORD *)(a1 + 168);
      *(_BYTE *)(a1 + 192) = 12;
      goto LABEL_15;
    }
    goto LABEL_14;
  }
  if ( v2 != 13 )
    goto LABEL_47;
LABEL_10:
  v9 = *(_QWORD *)(a1 + 264);
  if ( v9 )
  {
    v24 = sub_51E6F0(v9);
    v25 = v24;
    if ( v24 && (v26 = strlen(v24), (v27 = v26) != 0) )
    {
      v37 = *(void **)(a1 + 160);
      v38 = v26 + 1;
      if ( *(_QWORD *)(a1 + 176) < v26 + 1 )
      {
        v43 = qvector_reserve(a1 + 160, *(_QWORD *)(a1 + 160), v38, 1);
        *(_QWORD *)(a1 + 160) = v43;
        v37 = (void *)v43;
      }
      *(_QWORD *)(a1 + 168) = v38;
      memmove(v37, v25, v27);
      *(_BYTE *)(*(_QWORD *)(a1 + 160) + v27) = 0;
      v10 = *(_QWORD *)(a1 + 168);
      *(_BYTE *)(a1 + 192) = (*(_DWORD *)(*(_QWORD *)(a1 + 264) + 116LL) & 0x800) == 0 ? 12 : 4;
      if ( v10 > 1 )
        return v10 - 1;
    }
    else
    {
      v28 = *(_QWORD *)(a1 + 264);
      *(_QWORD *)(a1 + 168) = 0;
      *(_BYTE *)(a1 + 192) = (*(_DWORD *)(v28 + 116) & 0x800) == 0 ? 12 : 4;
    }
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 208) + 56LL) )
      goto LABEL_13;
    v29 = *(_QWORD *)(a1 + 320);
    if ( v29 <= 1 )
    {
      *(_QWORD *)(a1 + 168) = 0;
      *(_BYTE *)(a1 + 192) = 4;
      goto LABEL_13;
    }
    v44 = *(const void **)(a1 + 312);
    v45 = *(void **)(a1 + 160);
    if ( *(_QWORD *)(a1 + 176) < v29 )
    {
      v46 = qvector_reserve(a1 + 160, *(_QWORD *)(a1 + 160), *(_QWORD *)(a1 + 320), 1);
      *(_QWORD *)(a1 + 160) = v46;
      v45 = (void *)v46;
    }
    *(_QWORD *)(a1 + 168) = v29;
    memmove(v45, v44, v29 - 1);
    *(_BYTE *)(*(_QWORD *)(a1 + 160) + v29 - 1) = 0;
    v10 = *(_QWORD *)(a1 + 168);
    *(_BYTE *)(a1 + 192) = 4;
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 168);
  }
  if ( v10 > 1 )
    return v10 - 1;
LABEL_13:
  if ( !*(_BYTE *)(a1 + 344) )
  {
LABEL_14:
    v10 = *(_QWORD *)(a1 + 168);
    goto LABEL_15;
  }
  v32 = *(_QWORD *)(a1 + 160);
  if ( *(_QWORD *)(a1 + 176) <= 0x13u )
  {
    v40 = qvector_reserve(a1 + 160, v32, 20, 1);
    *(_QWORD *)(a1 + 160) = v40;
    v32 = v40;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_2383B20);
  *(_QWORD *)(a1 + 168) = 20;
  *(__m128i *)v32 = si128;
  *(_DWORD *)(v32 + 15) = 695432033;
  *(_BYTE *)(*(_QWORD *)(a1 + 160) + 19LL) = 0;
  v10 = *(_QWORD *)(a1 + 168);
  *(_BYTE *)(a1 + 192) = 4;
LABEL_15:
  if ( !v10 )
    return 0;
  return v10 - 1;
}

