_QWORD *__fastcall sub_21C7350(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  char *v5; // r15
  char v6; // si
  char *v7; // rax
  __int64 v8; // rbp
  unsigned int v9; // ecx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int8 *v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rbx
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  unsigned __int8 *v18; // r15
  size_t v19; // rax
  __m128i *v20; // rbx
  bool v21; // zf
  const __m128i *v22; // r13
  __m128i v23; // xmm0
  __m128i *v24; // rdi
  __int64 v26; // r9
  unsigned __int8 *v27; // [rsp+8h] [rbp-140h]
  _QWORD *v28; // [rsp+20h] [rbp-128h]
  __int64 v29; // [rsp+38h] [rbp-110h] BYREF
  unsigned __int8 *v30; // [rsp+40h] [rbp-108h] BYREF
  __int64 v31; // [rsp+48h] [rbp-100h]
  void *ptr; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-F0h]
  __m128i v34; // [rsp+60h] [rbp-E8h] BYREF
  void *v35; // [rsp+70h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+78h] [rbp-D0h]
  _BYTE v37[192]; // [rsp+88h] [rbp-C0h] BYREF

  v28 = a1;
  v27 = (unsigned __int8 *)&a2[a3];
  if ( &a2[a3] <= a2 )
  {
LABEL_41:
    *v28 = 0;
    return v28;
  }
  v5 = a2;
LABEL_3:
  if ( v5 )
  {
LABEL_4:
    v6 = *v5;
    v7 = v5;
    v8 = 0;
    v9 = 0;
    v10 = *v5 & 0x7F;
    while ( 1 )
    {
      do
      {
        v11 = v10 << v9;
        ++v7;
        v9 += 7;
        v8 += v11;
        if ( v6 >= 0 )
          goto LABEL_11;
        if ( !v7 )
          goto LABEL_10;
        v6 = *v7;
        v10 = *v7 & 0x7F;
      }
      while ( v9 <= 0x3E );
      if ( v9 == 63 )
      {
        a1 = (_QWORD *)(v6 & 1);
        if ( (_QWORD *)v10 != a1 )
        {
LABEL_10:
          v8 = 0;
LABEL_11:
          v12 = (unsigned __int8 *)&v5[(_DWORD)v7 - (_DWORD)v5];
          if ( !v12 )
          {
            LODWORD(v5) = 0;
            goto LABEL_18;
          }
          v13 = *v12;
          v5 = (char *)v12;
          v14 = 0;
          LODWORD(v15) = 0;
          v16 = *v12 & 0x7F;
          while ( 1 )
          {
            v17 = v16 << v15;
            ++v5;
            v15 = (unsigned int)(v15 + 7);
            v14 += v17;
            if ( (v13 & 0x80u) == 0LL )
              break;
            if ( !v5 )
              goto LABEL_18;
            v13 = (unsigned __int8)*v5;
            v16 = *v5 & 0x7F;
            if ( (unsigned int)v15 > 0x3E )
            {
              if ( (_DWORD)v15 == 63 )
              {
                a1 = (_QWORD *)(v13 & 1);
                if ( (_QWORD *)v16 != a1 )
                  goto LABEL_18;
              }
              else if ( (*v5 & 0x7F) != 0 )
              {
                goto LABEL_18;
              }
            }
          }
          v30 = nullptr;
          v31 = 0;
          v18 = &v12[(_DWORD)v5 - (_DWORD)v12];
          si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
          v35 = v37;
          if ( v14 )
          {
            if ( (unsigned __int8)sub_2218200(a1, v13, v17, v15) )
              sub_2EBB03(&v29, v18, v14, &v35, v8, v26);
            sub_21C5200(&v34, 23);
            *v28 = v34.m128i_i64[0];
            goto LABEL_27;
          }
          goto LABEL_19;
        }
      }
      else if ( (*v7 & 0x7F) != 0 )
      {
        goto LABEL_10;
      }
    }
  }
  while ( 1 )
  {
    v12 = nullptr;
    v8 = 0;
LABEL_18:
    v18 = &v12[(_DWORD)v5 - (_DWORD)v12];
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    v35 = v37;
LABEL_19:
    v31 = v8;
    v30 = v18;
    v5 = (char *)&v18[v8];
    v33 = 0;
    ptr = &v34;
    v19 = j__strlen(&byte_22F0C2F);
    sub_22471D0(&v30, &ptr, &byte_22F0C2F, v19, 0xFFFFFFFFLL, 1);
    v20 = (__m128i *)((char *)ptr + 16 * (unsigned int)v33);
    if ( ptr != v20 )
      break;
LABEL_31:
    if ( v5 < (char *)v27 && !*v5 )
    {
      while ( v27 != (unsigned __int8 *)++v5 )
      {
        if ( *v5 )
          goto LABEL_37;
      }
      v5 = (char *)v27;
    }
LABEL_37:
    if ( v20 != &v34 )
      free(v20);
    a1 = v35;
    if ( v35 != v37 )
    {
      free(v35);
      if ( v27 <= (unsigned __int8 *)v5 )
        goto LABEL_41;
      goto LABEL_3;
    }
    if ( v27 <= (unsigned __int8 *)v5 )
      goto LABEL_41;
    if ( v5 )
      goto LABEL_4;
  }
  v21 = *(_QWORD *)(a4 + 16) == 0;
  v34 = _mm_loadu_si128((const __m128i *)ptr);
  if ( v21 )
LABEL_53:
    std::__throw_bad_function_call();
  v22 = (const __m128i *)((char *)ptr + 16);
  while ( 1 )
  {
    (*(void (__fastcall **)(__int64 *, __int64, __m128i *))(a4 + 24))(&v29, a4, &v34);
    if ( v29 )
      break;
    if ( v20 == v22 )
    {
      v20 = (__m128i *)ptr;
      goto LABEL_31;
    }
    v23 = _mm_loadu_si128(v22++);
    v21 = *(_QWORD *)(a4 + 16) == 0;
    v34 = v23;
    if ( v21 )
      goto LABEL_53;
  }
  v24 = (__m128i *)ptr;
  *v28 = v29;
  if ( v24 != &v34 )
    free(v24);
LABEL_27:
  if ( v35 != v37 )
    free(v35);
  return v28;
}
