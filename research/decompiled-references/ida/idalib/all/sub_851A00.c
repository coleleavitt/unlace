unsigned __int64 __fastcall sub_851A00(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  int i; // ecx
  __int64 v8; // rax
  size_t v9; // rbx
  size_t v10; // rbp
  char *v11; // r13
  void *v12; // rax
  size_t v13; // rbx
  __int64 v14; // rbp
  char *v15; // r13
  __int64 v16; // r14
  const char *v17; // rsi
  const char *v18; // rdi
  __int64 v19; // rax
  __int64 v21; // [rsp+8h] [rbp-A0h]
  int v23; // [rsp+1Ch] [rbp-8Ch]
  __int64 v24; // [rsp+20h] [rbp-88h]
  char *s; // [rsp+30h] [rbp-78h] BYREF
  size_t n[3]; // [rsp+38h] [rbp-70h]
  void *src; // [rsp+50h] [rbp-58h] BYREF
  size_t v28[2]; // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 12) )
  {
    for ( i = 0; ; i = v23 )
    {
      s = nullptr;
      v23 = i + 1;
      v8 = *(_QWORD *)a1;
      *(_OWORD *)n = 0;
      qsnprintf(v8 + 5128, 256, (unsigned int)"%u", i, a5, a6);
      if ( (unsigned int)sub_851730(*(_QWORD *)a1, (void **)&s) != 1 )
        break;
      v9 = n[0];
      if ( n[0] )
      {
        v11 = s;
        src = nullptr;
        *(_OWORD *)v28 = 0;
        if ( !s )
        {
          v13 = 0;
          v24 = a2[1];
          v14 = *a2 + 24 * v24;
          v21 = *a2;
          if ( v14 == *a2 )
            goto LABEL_17;
LABEL_7:
          v15 = (char *)src;
          v16 = v21;
          while ( 2 )
          {
            if ( *(_QWORD *)(v16 + 8) )
            {
              v17 = *(const char **)v16;
              v18 = haystack;
              if ( v13 )
                goto LABEL_14;
            }
            else
            {
              if ( !v13 )
              {
                if ( v14 != v16 )
                  goto LABEL_20;
                goto LABEL_26;
              }
              v17 = haystack;
LABEL_14:
              v18 = v15;
            }
            if ( !strcmp(v18, v17) )
            {
              if ( v14 != v16 )
                goto LABEL_20;
              goto LABEL_28;
            }
            v16 += 24;
            if ( v14 == v16 )
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
        v11 = (char *)&byte_22F0C30;
        *(_OWORD *)v28 = 0;
      }
      v12 = (void *)qvector_reserve(&src, 0, v10, 1);
      v28[0] = v10;
      src = v12;
      memmove(v12, v11, v9);
      *((_BYTE *)src + v9) = 0;
      v13 = v28[0];
      v24 = a2[1];
      v14 = *a2 + 24 * v24;
      v21 = *a2;
      if ( *a2 != v14 )
        goto LABEL_7;
LABEL_28:
      if ( v13 )
      {
        v11 = (char *)qalloc_or_throw(v13);
        memcpy(v11, src, v13);
        v24 = a2[1];
        v21 = *a2;
      }
      else
      {
LABEL_26:
        v11 = nullptr;
      }
LABEL_17:
      if ( a2[2] < (unsigned __int64)(v24 + 1) )
      {
        v21 = qvector_reserve(a2, v21, v24 + 1, 24);
        *a2 = v21;
        v24 = a2[1];
      }
      v19 = v21 + 24 * v24;
      *(_QWORD *)v19 = v11;
      v15 = (char *)src;
      *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
      ++a2[1];
LABEL_20:
      if ( v15 )
      {
        v28[0] = 0;
        qfree(v15);
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
  return v29 - __readfsqword(0x28u);
}
