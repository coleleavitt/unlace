unsigned __int64 __fastcall sub_82E0A0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int i; // ecx
  __int64 v8; // rax
  size_t v9; // rbx
  size_t v10; // rbp
  char *v11; // r13
  void *v12; // rax
  const char *v13; // rsi
  size_t v14; // rbx
  __int64 v15; // rbp
  char *v16; // r13
  __int64 v17; // r14
  const char *v18; // rdi
  __int64 v19; // rax
  char v21; // [rsp+0h] [rbp-A8h]
  __int64 v22; // [rsp+8h] [rbp-A0h]
  int v24; // [rsp+1Ch] [rbp-8Ch]
  __int64 v25; // [rsp+20h] [rbp-88h]
  char *s; // [rsp+30h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t v29[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v30; // [rsp+68h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 12) )
  {
    for ( i = 0; ; i = v24 )
    {
      s = nullptr;
      v24 = i + 1;
      v8 = *(_QWORD *)a1;
      *(_OWORD *)n = 0;
      qsnprintf(v8 + 5128, 256, (int)"%u", i, a5, a6, v21);
      if ( (unsigned int)sub_82DDD0(*(_QWORD *)a1, (void **)&s) != 1 )
        break;
      v9 = n[0];
      if ( n[0] )
      {
        v11 = s;
        src = nullptr;
        *(_OWORD *)v29 = 0;
        if ( !s )
        {
          v14 = 0;
          v25 = a2[1];
          v15 = *a2 + 24 * v25;
          v22 = *a2;
          if ( v15 == *a2 )
            goto LABEL_17;
LABEL_7:
          v16 = (char *)src;
          v17 = v22;
          while ( 2 )
          {
            if ( *(_QWORD *)(v17 + 8) )
            {
              v13 = *(const char **)v17;
              v18 = haystack;
              if ( v14 )
                goto LABEL_14;
            }
            else
            {
              if ( !v14 )
              {
                if ( v15 != v17 )
                  goto LABEL_20;
                goto LABEL_26;
              }
              v13 = haystack;
LABEL_14:
              v18 = v16;
            }
            if ( !strcmp(v18, v13) )
            {
              if ( v15 != v17 )
                goto LABEL_20;
              goto LABEL_28;
            }
            v17 += 24;
            if ( v15 == v17 )
              goto LABEL_28;
            continue;
          }
        }
        v9 = strlen(s);
        v10 = v9 + 1;
      }
      else
      {
        v10 = 1;
        src = nullptr;
        v11 = (char *)&byte_22CD811;
        *(_OWORD *)v29 = 0;
      }
      v12 = (void *)qvector_reserve(&src, 0, v10, 1);
      v13 = v11;
      v29[0] = v10;
      src = v12;
      memmove(v12, v11, v9);
      *((_BYTE *)src + v9) = 0;
      v14 = v29[0];
      v25 = a2[1];
      v15 = *a2 + 24 * v25;
      v22 = *a2;
      if ( *a2 != v15 )
        goto LABEL_7;
LABEL_28:
      if ( v14 )
      {
        v11 = (char *)qalloc_or_throw(v14, v13);
        memcpy(v11, src, v14);
        v25 = a2[1];
        v22 = *a2;
      }
      else
      {
LABEL_26:
        v11 = nullptr;
      }
LABEL_17:
      if ( a2[2] < (unsigned __int64)(v25 + 1) )
      {
        v22 = qvector_reserve(a2, v22, v25 + 1, 24);
        *a2 = v22;
        v25 = a2[1];
      }
      v19 = v22 + 24 * v25;
      *(_QWORD *)v19 = v11;
      v16 = (char *)src;
      *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64((__m128i)v14, (__m128i)v14);
      ++a2[1];
LABEL_20:
      if ( v16 )
      {
        v29[0] = 0;
        qfree(v16);
      }
      if ( s )
      {
        n[0] = 0;
        qfree(s);
      }
    }
    if ( s )
    {
      n[0] = 0;
      qfree(s);
    }
  }
  return v30 - __readfsqword(0x28u);
}

