__int64 __fastcall sub_5E2000(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  size_t v8; // r13
  __int16 v10; // ax
  char *v11; // rdi
  char v12; // dl
  __int64 v13; // r14
  __int64 i; // r13
  char *v15; // r12
  void *v16; // rdi
  void *v17; // rdi
  char j; // al
  __int64 v19; // rax
  unsigned __int64 v20; // r13
  __int64 v21; // r13
  size_t v22; // rax
  size_t v23; // r15
  size_t v24; // rax
  size_t v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  char *v28; // r15
  __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // rsi
  __m128i v32; // xmm0
  __int64 v33; // rsi
  __m128i v34; // xmm0
  void *v35; // rdi
  void *v37; // rdi
  size_t v38; // rdx
  void *v39; // rdi
  size_t v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rbx
  void *v45; // rax
  const void *v46; // rsi
  __int64 v47; // [rsp+0h] [rbp-4A0h]
  size_t v48; // [rsp+0h] [rbp-4A0h]
  size_t v49; // [rsp+0h] [rbp-4A0h]
  __int64 v50; // [rsp+8h] [rbp-498h]
  void *ptr; // [rsp+18h] [rbp-488h] BYREF
  __int128 v52; // [rsp+20h] [rbp-480h]
  __int16 v53; // [rsp+30h] [rbp-470h]
  int v54; // [rsp+34h] [rbp-46Ch]
  char v55; // [rsp+38h] [rbp-468h]
  __m128i v56; // [rsp+40h] [rbp-460h]
  char s[1032]; // [rsp+58h] [rbp-448h] BYREF
  unsigned __int64 v58; // [rsp+460h] [rbp-40h]

  v8 = *(_QWORD *)(a3 + 8);
  v58 = __readfsqword(0x28u);
  v52 = 0;
  ptr = nullptr;
  if ( v8 )
  {
    v45 = (void *)qalloc_or_throw(v8, a2);
    v46 = *(const void **)a3;
    *((_QWORD *)&v52 + 1) = v8;
    ptr = v45;
    memcpy(v45, v46, v8);
    *(_QWORD *)&v52 = v8;
  }
  v10 = *(_WORD *)(a3 + 24);
  v11 = (char *)a6[47];
  v54 = *(_DWORD *)(a3 + 28);
  v12 = *(_BYTE *)(a3 + 32);
  v53 = v10;
  v55 = v12;
  v56 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  if ( v11 )
  {
    v13 = a6[48];
    if ( v13 )
    {
      for ( i = 0; i != v13; ++i )
      {
        v15 = &v11[48 * i];
        v16 = *((void **)v15 + 3);
        if ( v16 )
        {
          *((_QWORD *)v15 + 4) = 0;
          qfree(v16);
        }
        v17 = *(void **)v15;
        if ( *(_QWORD *)v15 )
        {
          *((_QWORD *)v15 + 1) = 0;
          qfree(v17);
        }
        v11 = (char *)a6[47];
      }
    }
    a6[48] = 0;
    qfree(v11);
    a6[47] = 0;
    v10 = v53;
    a6[49] = 0;
  }
  if ( v10 == 123 )
  {
LABEL_13:
    for ( j = sub_727B60(a1, &ptr); j; j = sub_727B60(a1, &ptr) )
    {
      if ( v53 == 125 )
      {
        v43 = 0;
        goto LABEL_42;
      }
      v19 = a6[48];
      v20 = a6[49];
      if ( v20 < v19 + 1 )
      {
        v26 = qvector_reserve(a6 + 47, 0, v19 + 1, 48);
        v27 = a6[49];
        a6[49] = v20;
        v47 = v26;
        v50 = v27;
        v28 = (char *)a6[47];
        v29 = a6[48] - 1LL;
        if ( v29 >= 0 )
        {
          v30 = v26;
          do
          {
            v31 = *(_QWORD *)v28;
            v32 = _mm_loadu_si128((const __m128i *)(v28 + 8));
            *(_QWORD *)v28 = 0;
            *(_OWORD *)(v28 + 8) = 0;
            *(_QWORD *)v30 = v31;
            *(__m128i *)(v30 + 8) = v32;
            v33 = *((_QWORD *)v28 + 3);
            v34 = _mm_loadu_si128((const __m128i *)v28 + 2);
            *((_QWORD *)v28 + 3) = 0;
            *(_QWORD *)(v30 + 24) = v33;
            *(__m128i *)(v30 + 32) = v34;
            v35 = *(void **)v28;
            *((_QWORD *)v28 + 5) = 0;
            if ( v35 )
            {
              *((_QWORD *)v28 + 1) = 0;
              qfree(v35);
            }
            v28 += 48;
            v30 += 48;
          }
          while ( v29-- != 0 );
          v28 = (char *)a6[47];
        }
        qfree(v28);
        a6[47] = v47;
        a6[49] = v50;
        v19 = a6[48];
      }
      else
      {
        v47 = a6[47];
      }
      v21 = 48 * v19 + v47;
      *(_QWORD *)v21 = 0;
      *(_QWORD *)(v21 + 24) = 0;
      *(_OWORD *)(v21 + 8) = 0;
      *(_OWORD *)(v21 + 32) = 0;
      ++a6[48];
      if ( !(unsigned __int8)sub_727D10(s, 1024, a1, &ptr) || !(unsigned __int8)sub_727B60(a1, &ptr) )
        break;
      v22 = strlen(s);
      v23 = v22;
      if ( v22 )
      {
        v37 = *(void **)v21;
        v38 = v22 + 1;
        if ( *(_QWORD *)(v21 + 16) < v22 + 1 )
        {
          v48 = v22 + 1;
          v41 = qvector_reserve(v21, *(_QWORD *)v21, v38, 1);
          *(_QWORD *)v21 = v41;
          v38 = v48;
          v37 = (void *)v41;
        }
        *(_QWORD *)(v21 + 8) = v38;
        memmove(v37, s, v23);
        *(_BYTE *)(*(_QWORD *)v21 + v23) = 0;
      }
      else
      {
        *(_QWORD *)(v21 + 8) = 0;
      }
      if ( v53 != 58 )
        goto LABEL_40;
      if ( !(unsigned __int8)sub_727B60(a1, &ptr) || !(unsigned __int8)sub_727D10(s, 1024, a1, &ptr) )
        break;
      v24 = strlen(s);
      v25 = v24;
      if ( v24 )
      {
        v39 = *(void **)(v21 + 24);
        v40 = v24 + 1;
        if ( *(_QWORD *)(v21 + 40) < v24 + 1 )
        {
          v49 = v24 + 1;
          v42 = qvector_reserve(v21 + 24, *(_QWORD *)(v21 + 24), v40, 1);
          *(_QWORD *)(v21 + 24) = v42;
          v40 = v49;
          v39 = (void *)v42;
        }
        *(_QWORD *)(v21 + 32) = v40;
        memmove(v39, s, v25);
        *(_BYTE *)(*(_QWORD *)(v21 + 24) + v25) = 0;
        goto LABEL_13;
      }
      *(_QWORD *)(v21 + 32) = 0;
    }
  }
  else
  {
LABEL_40:
    sub_727810(a1, 1362);
  }
  v43 = 3;
LABEL_42:
  if ( ptr )
  {
    *(_QWORD *)&v52 = 0;
    qfree(ptr);
  }
  return v43;
}

