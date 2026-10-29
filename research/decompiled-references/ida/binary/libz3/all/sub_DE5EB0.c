__m128i *__fastcall sub_DE5EB0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  char **exception; // rbx
  __int64 v7; // r14
  __int64 v11; // rax
  __m128i **v12; // rcx
  int v13; // edi
  unsigned int v14; // edx
  __m128i *v15; // rsi
  __int64 v16; // rdx
  __m128i **v17; // r8
  __m128i *result; // rax
  __int64 v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // r12
  __int64 *v22; // r14
  __int64 *v23; // r13
  _QWORD *v24; // rax
  _QWORD *v25; // rcx
  unsigned int v26; // eax
  _DWORD *v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rcx
  unsigned int v30; // edx
  int v31; // eax
  __m128i *v32; // r13
  int v33; // r9d
  __int64 v34; // rcx
  __m128i *v35; // r14
  int v36; // esi
  __int64 v37; // r9
  __m128i *v38; // rdi
  __int64 *v39; // rcx
  __int64 v40; // rdx
  unsigned int v41; // ecx
  size_t v42; // rsi
  unsigned int *v43; // rax
  __m128i *v44; // rax
  int v45; // r10d
  __m128i *v46; // r8
  const __m128i *v47; // r15
  __m128i *v48; // r11
  __int64 v49; // rax
  __m128i *v50; // rdx
  __m128i *v51; // rax
  unsigned int v52; // [rsp+8h] [rbp-90h]
  size_t v53; // [rsp+8h] [rbp-90h]
  int v54; // [rsp+8h] [rbp-90h]
  int v55; // [rsp+10h] [rbp-88h]
  size_t v56; // [rsp+10h] [rbp-88h]
  int v57; // [rsp+18h] [rbp-80h]
  __int64 v58[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = a4;
  v11 = *(unsigned int *)(a1 + 120);
  v12 = *(__m128i ***)(a1 + 112);
  v13 = *(_DWORD *)(a2 + 12);
  v14 = v11 - 1;
  v11 *= 16;
  v15 = (__m128i *)((char *)v12 + v11);
  v16 = 16LL * (v13 & v14);
  v17 = &v12[(unsigned __int64)v16 / 8];
  if ( v16 != v11 )
  {
    for ( result = (__m128i *)&v12[(unsigned __int64)v16 / 8]; v15 != result; ++result )
    {
      v19 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v19 + 12) == v13 && a2 == v19 )
          return result;
      }
      else if ( !v19 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v17 != v12; v12 += 2 )
  {
    result = *v12;
    if ( (unsigned __int64)*v12 > 1 )
    {
      if ( result->m128i_i32[3] == v13 && (__m128i *)a2 == result )
        return result;
    }
    else if ( !result )
    {
      break;
    }
  }
LABEL_8:
  v20 = (_QWORD *)sub_17E9C90(*(_QWORD *)(a1 + 8), 24);
  v20[1] = a3;
  v21 = v20;
  if ( a3 )
    ++*(_DWORD *)(a3 + 16);
  v20[2] = 0;
  *v20 = &off_1C5AF00;
  if ( (_DWORD)v7 )
  {
    v22 = &a5[v7];
    v23 = a5;
    v24 = (_QWORD *)sub_186B270(0x18u);
    v25 = v24 + 1;
    *v24 = 2;
    v26 = 1;
    v21[2] = v25;
    v27 = v25;
    while ( 1 )
    {
      v28 = *v23++;
      *v25 = v28;
      *(v27 - 1) = v26;
      if ( v23 == v22 )
        break;
      if ( *(v27 - 2) == v26 )
      {
        v41 = (3 * v26 + 1) >> 1;
        v42 = 8 * v41 + 8;
        if ( 8 * v26 + 8 >= (unsigned int)v42 || v26 >= v41 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v58, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v58);
          sub_233E40((__int64)v58);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v52 = (3 * v26 + 1) >> 1;
        v43 = (unsigned int *)sub_186B300(v27 - 2, v42);
        v27 = v43 + 2;
        v21[2] = v43 + 2;
        *v43 = v52;
        LODWORD(v43) = v43[1];
        v25 = &v27[2 * (unsigned int)v43];
        v26 = (_DWORD)v43 + 1;
      }
      else
      {
        v29 = v26++;
        v25 = &v27[2 * v29];
      }
    }
    do
    {
      if ( *a5 )
        ++*(_DWORD *)(*a5 + 8);
      ++a5;
    }
    while ( v22 != a5 );
  }
  v30 = *(_DWORD *)(a1 + 120);
  v31 = *(_DWORD *)(a1 + 124) + *(_DWORD *)(a1 + 128);
  ++*(_DWORD *)(a2 + 8);
  if ( 3 * v30 < 4 * v31 )
  {
    v55 = 2 * v30;
    v53 = 32LL * v30;
    v44 = (__m128i *)sub_186B270(v53);
    v34 = v53;
    v45 = v55;
    v32 = v44;
    v46 = &v44[v53 / 0x10];
    if ( v55 )
    {
      if ( (v53 & 0x10) == 0 || (*v44 = 0, ++v44, v44 != v46) )
      {
        do
        {
          *v44 = 0;
          v44 += 2;
          v44[-1] = 0;
        }
        while ( v44 != v46 );
      }
    }
    v47 = *(const __m128i **)(a1 + 112);
    v33 = v55 - 1;
    v35 = v46;
    v48 = (__m128i *)&v47[*(unsigned int *)(a1 + 120)];
    if ( v47 != v48 )
    {
      do
      {
        if ( v47->m128i_i64[0] > 1uLL )
        {
          v49 = 16LL * (*(_DWORD *)(v47->m128i_i64[0] + 12) & (unsigned int)v33);
          v50 = &v32[(unsigned __int64)v49 / 0x10];
          if ( v53 == v49 )
          {
LABEL_63:
            if ( v32 == v50 )
            {
LABEL_73:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v51 = v32;
            while ( v51->m128i_i64[0] )
            {
              if ( v50 == ++v51 )
                goto LABEL_73;
            }
          }
          else
          {
            v51 = &v32[(unsigned __int64)v49 / 0x10];
            while ( v51->m128i_i64[0] )
            {
              if ( v46 == ++v51 )
                goto LABEL_63;
            }
          }
          *v51 = _mm_loadu_si128(v47);
        }
        ++v47;
      }
      while ( v48 != v47 );
      v48 = *(__m128i **)(a1 + 112);
    }
    if ( v48 )
    {
      v57 = v55;
      v56 = v53;
      v54 = v45 - 1;
      sub_186B220(v48);
      v45 = v57;
      v34 = v56;
      v33 = v54;
    }
    *(_QWORD *)(a1 + 112) = v32;
    *(_DWORD *)(a1 + 120) = v45;
    *(_DWORD *)(a1 + 128) = 0;
  }
  else
  {
    v32 = *(__m128i **)(a1 + 112);
    v33 = v30 - 1;
    v34 = 16LL * v30;
    v35 = (__m128i *)((char *)v32 + v34);
  }
  v36 = *(_DWORD *)(a2 + 12);
  v37 = 16LL * (v36 & (unsigned int)v33);
  v38 = &v32[(unsigned __int64)v37 / 0x10];
  if ( v37 != v34 )
  {
    result = &v32[(unsigned __int64)v37 / 0x10];
    v39 = nullptr;
    while ( 1 )
    {
      v40 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v40 + 12) == v36 && a2 == v40 )
        {
          result->m128i_i64[0] = a2;
          result->m128i_i64[1] = (__int64)v21;
          return result;
        }
      }
      else
      {
        if ( !v40 )
        {
          if ( v39 )
            goto LABEL_16;
          v39 = (__int64 *)result;
          goto LABEL_17;
        }
        v39 = (__int64 *)result;
      }
      if ( ++result == v35 )
        goto LABEL_46;
    }
  }
  v39 = nullptr;
  while ( 1 )
  {
LABEL_46:
    if ( v38 == v32 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v32->m128i_i64[0];
    if ( v32->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v36 && (__m128i *)a2 == result )
    {
      v32->m128i_i64[0] = a2;
      v32->m128i_i64[1] = (__int64)v21;
      return result;
    }
LABEL_45:
    ++v32;
  }
  if ( result )
  {
    v39 = (__int64 *)v32;
    goto LABEL_45;
  }
  if ( v39 )
LABEL_16:
    --*(_DWORD *)(a1 + 128);
  else
    v39 = (__int64 *)v32;
LABEL_17:
  *v39 = a2;
  v39[1] = (__int64)v21;
  ++*(_DWORD *)(a1 + 124);
  return result;
}

