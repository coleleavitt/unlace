unsigned __int64 __fastcall sub_4B95D0(__int64 a1)
{
  _QWORD *v1; // rbx
  unsigned __int64 v2; // r14
  const char *v3; // rdi
  char *v4; // rax
  __int64 v5; // rbp
  size_t v6; // r15
  void *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  char *v11; // rdx
  __int64 v12; // rbp
  __int64 v13; // rbx
  char *v14; // rax
  void *v15; // rdi
  __int64 v17; // rax
  void *ptr; // [rsp+8h] [rbp-78h] BYREF
  __int128 v19; // [rsp+10h] [rbp-70h]
  void *src; // [rsp+28h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+30h] [rbp-50h]
  unsigned __int64 v22; // [rsp+40h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v1 = *(_QWORD **)(a1 + 1528);
  v19 = 0;
  ptr = nullptr;
  if ( (unsigned __int8)sub_811EA0(&ptr, "noret.cfg") && (_QWORD)v19 )
  {
    v2 = 0;
    do
    {
      while ( 1 )
      {
        v3 = haystack;
        v4 = (char *)ptr + 24 * v2;
        if ( *((_QWORD *)v4 + 1) )
          v3 = *(const char **)v4;
        v5 = fopenRT(v3);
        if ( v5 )
        {
          src = nullptr;
          *(_OWORD *)n = 0;
          while ( qgetline() >= 0 )
          {
            while ( qcleanline(&src, 59, 7) > 0 )
            {
              v6 = n[0];
              v7 = nullptr;
              if ( n[0] )
              {
                v7 = (void *)qalloc_or_throw(n[0], (_BYTE *)&word_3A + 1);
                memcpy(v7, src, v6);
              }
              v8 = v1[40];
              v9 = v1[39];
              if ( v1[41] < (unsigned __int64)(v8 + 1) )
              {
                v17 = qvector_reserve(v1 + 39, v9, v8 + 1, 24);
                v1[39] = v17;
                v8 = v1[40];
                v9 = v17;
              }
              v10 = v9 + 24 * v8;
              *(_QWORD *)v10 = v7;
              *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v6);
              ++v1[40];
              if ( qgetline() < 0 )
                goto LABEL_16;
            }
          }
LABEL_16:
          qfclose(v5);
          if ( src )
            break;
        }
        if ( ++v2 >= (unsigned __int64)v19 )
          goto LABEL_18;
      }
      n[0] = 0;
      ++v2;
      qfree(src);
    }
    while ( v2 < (unsigned __int64)v19 );
  }
LABEL_18:
  register_undo_handlers(&unk_2B02F80, 10, 1, sub_4B2320);
  v11 = (char *)ptr;
  if ( ptr )
  {
    v12 = v19;
    if ( (_QWORD)v19 )
    {
      v13 = 0;
      do
      {
        v14 = &v11[24 * v13];
        v15 = *(void **)v14;
        if ( *(_QWORD *)v14 )
        {
          *((_QWORD *)v14 + 1) = 0;
          qfree(v15);
          v11 = (char *)ptr;
        }
        ++v13;
      }
      while ( v12 != v13 );
    }
    *(_QWORD *)&v19 = 0;
    qfree(v11);
  }
  return v22 - __readfsqword(0x28u);
}

