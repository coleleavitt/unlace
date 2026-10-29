__int64 __fastcall sub_CCE960(__int64 a1, __int64 a2, __int64 a3)
{
  char **exception; // rbx
  __int64 v4; // rdx
  __int64 v8; // r15
  int v9; // ecx
  __m128i *v10; // rbp
  unsigned int v11; // edi
  int v12; // r9d
  size_t v13; // r15
  __m128i *v14; // rbx
  __int64 v15; // rdi
  __m128i *v16; // rsi
  __int64 result; // rax
  __int64 v18; // rdx
  __m128i *v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // rdx
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i *v28; // rax
  int v29; // r8d
  __m128i *v30; // r9
  const __m128i *v31; // rcx
  int v32; // r10d
  __m128i *v33; // r11
  __int64 v34; // rax
  __m128i *v35; // rdx
  __m128i *v36; // rax
  unsigned int v37; // ebx
  unsigned int v38; // ecx
  unsigned int *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rdx
  int v42; // [rsp+10h] [rbp-68h]
  __int64 v43[11]; // [rsp+20h] [rbp-58h] BYREF

  v8 = *(unsigned int *)(a1 + 32);
  v9 = *(_DWORD *)(a2 + 12);
  v10 = *(__m128i **)(a1 + 24);
  v11 = v8 - 1;
  v12 = v8;
  v13 = 16 * v8;
  v14 = &v10[v13 / 0x10];
  v15 = 16LL * (v9 & v11);
  v16 = &v10[(unsigned __int64)v15 / 0x10];
  if ( v15 != v13 )
  {
    for ( result = (__int64)v10[(unsigned __int64)v15 / 0x10].m128i_i64; v14 != (__m128i *)result; result += 16 )
    {
      v18 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v18 + 12) == v9 && a2 == v18 )
          return result;
      }
      else if ( !v18 )
      {
        goto LABEL_8;
      }
    }
  }
  if ( v10 != v16 )
  {
    for ( result = (__int64)v10; v16 != (__m128i *)result; result += 16 )
    {
      v26 = *(_QWORD *)result;
      if ( *(_QWORD *)result > 1u )
      {
        if ( *(_DWORD *)(v26 + 12) == v9 && a2 == v26 )
          return result;
      }
      else if ( !v26 )
      {
        break;
      }
    }
  }
LABEL_8:
  if ( 3 * v12 < (unsigned int)(4 * (*(_DWORD *)(a1 + 36) + *(_DWORD *)(a1 + 40))) )
  {
    v42 = 2 * v12;
    v13 = 16LL * (unsigned int)(2 * v12);
    v28 = (__m128i *)sub_186B270(v13);
    v29 = v42;
    v10 = v28;
    v30 = &v28[v13 / 0x10];
    if ( v42 )
    {
      if ( (v13 & 0x10) == 0 || (*v28 = 0, ++v28, v28 != v30) )
      {
        do
        {
          *v28 = 0;
          v28 += 2;
          v28[-1] = 0;
        }
        while ( v28 != v30 );
      }
    }
    v31 = *(const __m128i **)(a1 + 24);
    v32 = v42 - 1;
    v14 = v30;
    v33 = (__m128i *)&v31[*(unsigned int *)(a1 + 32)];
    if ( v31 != v33 )
    {
      do
      {
        if ( v31->m128i_i64[0] > 1uLL )
        {
          v34 = 16LL * (*(_DWORD *)(v31->m128i_i64[0] + 12) & (unsigned int)v32);
          v35 = &v10[(unsigned __int64)v34 / 0x10];
          if ( v13 == v34 )
          {
LABEL_51:
            if ( v10 == v35 )
            {
LABEL_66:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v36 = v10;
            while ( v36->m128i_i64[0] )
            {
              if ( v35 == ++v36 )
                goto LABEL_66;
            }
          }
          else
          {
            v36 = &v10[(unsigned __int64)v34 / 0x10];
            while ( v36->m128i_i64[0] )
            {
              if ( v30 == ++v36 )
                goto LABEL_51;
            }
          }
          *v36 = _mm_loadu_si128(v31);
        }
        ++v31;
      }
      while ( v33 != v31 );
      v33 = *(__m128i **)(a1 + 24);
    }
    if ( v33 )
    {
      sub_186B220(v33);
      v29 = v42;
      v32 = v42 - 1;
    }
    v9 = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a1 + 24) = v10;
    *(_DWORD *)(a1 + 32) = v29;
    *(_DWORD *)(a1 + 40) = 0;
    v15 = 16LL * (v9 & (unsigned int)v32);
    v16 = &v10[(unsigned __int64)v15 / 0x10];
  }
  if ( v15 != v13 )
  {
    v19 = v16;
    v20 = nullptr;
    while ( 1 )
    {
      v21 = v19->m128i_i64[0];
      if ( v19->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v21 + 12) == v9 && a2 == v21 )
        {
          v19->m128i_i64[0] = a2;
          v19->m128i_i64[1] = a3;
          goto LABEL_18;
        }
      }
      else
      {
        if ( !v21 )
        {
          if ( v20 )
            goto LABEL_64;
          v20 = (__int64 *)v19;
          goto LABEL_65;
        }
        v20 = (__int64 *)v19;
      }
      if ( ++v19 == v14 )
        goto LABEL_34;
    }
  }
  v20 = nullptr;
  while ( 1 )
  {
LABEL_34:
    if ( v10 == v16 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    v27 = v10->m128i_i64[0];
    if ( v10->m128i_i64[0] <= 1uLL )
      break;
    if ( *(_DWORD *)(v27 + 12) == v9 && a2 == v27 )
    {
      v10->m128i_i64[0] = a2;
      v10->m128i_i64[1] = a3;
      goto LABEL_18;
    }
LABEL_33:
    ++v10;
  }
  if ( v27 )
  {
    v20 = (__int64 *)v10;
    goto LABEL_33;
  }
  if ( v20 )
LABEL_64:
    --*(_DWORD *)(a1 + 40);
  else
    v20 = (__int64 *)v10;
LABEL_65:
  *v20 = a2;
  v20[1] = a3;
  ++*(_DWORD *)(a1 + 36);
LABEL_18:
  v22 = *(_QWORD **)(a1 + 56);
  ++*(_DWORD *)(a2 + 8);
  if ( v22 )
  {
    v23 = *((_DWORD *)v22 - 1);
    if ( v23 == *((_DWORD *)v22 - 2) )
    {
      v37 = (3 * v23 + 1) >> 1;
      v38 = 8 * v37 + 8;
      if ( 8 * v23 + 8 >= v38 || v23 >= v37 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_163D96(v43, "Overflow encountered when expanding vector", v4);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v43);
        sub_233E40((__int64)v43);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v39 = (unsigned int *)sub_186B300(v22 - 1, v38);
      v40 = v39[1];
      v22 = v39 + 2;
      *v39 = v37;
      *(_QWORD *)(a1 + 56) = v39 + 2;
      LODWORD(v39) = v40;
      v25 = &v22[v40];
      result = (unsigned int)((_DWORD)v39 + 1);
    }
    else
    {
      v24 = v23;
      result = v23 + 1;
      v25 = &v22[v24];
    }
  }
  else
  {
    v41 = (_QWORD *)sub_186B270(0x18u);
    *v41 = 2;
    result = 1;
    v22 = v41 + 1;
    *(_QWORD *)(a1 + 56) = v22;
    v25 = v22;
  }
  *v25 = a2;
  *((_DWORD *)v22 - 1) = result;
  return result;
}

