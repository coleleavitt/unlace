__m128i *__fastcall sub_DE5A20(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int *a5)
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
  _QWORD *v21; // r13
  unsigned int *v22; // r12
  _QWORD *v23; // rax
  unsigned int *v24; // rax
  unsigned int *v25; // rdx
  unsigned int v26; // ecx
  int v27; // edi
  __int64 v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // r14d
  size_t v31; // rsi
  unsigned int *v32; // rax
  unsigned int v33; // edx
  int v34; // eax
  __m128i *v35; // r12
  int v36; // r9d
  __int64 v37; // rcx
  __m128i *v38; // r14
  int v39; // esi
  __int64 v40; // r9
  __m128i *v41; // rdi
  __int64 *v42; // rcx
  __int64 v43; // rdx
  __m128i *v44; // rax
  int v45; // r10d
  __m128i *v46; // r8
  const __m128i *v47; // r15
  __m128i *v48; // r11
  __int64 v49; // rax
  __m128i *v50; // rdx
  __m128i *v51; // rax
  size_t v52; // [rsp+8h] [rbp-90h]
  int v53; // [rsp+8h] [rbp-90h]
  int v54; // [rsp+10h] [rbp-88h]
  size_t v55; // [rsp+10h] [rbp-88h]
  int v56; // [rsp+18h] [rbp-80h]
  __int64 v57[11]; // [rsp+40h] [rbp-58h] BYREF

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
  *v20 = &off_1C5AF40;
  if ( (_DWORD)v7 )
  {
    v22 = &a5[v7];
    v23 = (_QWORD *)sub_186B270(0x10u);
    *v23 = 2;
    v24 = (unsigned int *)(v23 + 1);
    v21[2] = v24;
    v25 = v24;
    while ( 1 )
    {
      v26 = *a5++;
      *v24 = v26;
      v27 = *(v25 - 1);
      v28 = (unsigned int)(v27 + 1);
      *(v25 - 1) = v28;
      if ( v22 == a5 )
        break;
      v29 = *(v25 - 2);
      if ( v29 == (_DWORD)v28 )
      {
        v30 = (3 * v29 + 1) >> 1;
        v31 = 4 * v30 + 8;
        if ( 4 * v27 + 12 >= (unsigned int)v31 || v29 >= v30 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v57, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v57);
          sub_233E40((__int64)v57);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v32 = (unsigned int *)sub_186B300(v25 - 2, v31);
        v25 = v32 + 2;
        v21[2] = v32 + 2;
        *v32 = v30;
        v24 = &v32[v32[1] + 2];
      }
      else
      {
        v24 = &v25[v28];
      }
    }
  }
  v33 = *(_DWORD *)(a1 + 120);
  v34 = *(_DWORD *)(a1 + 124) + *(_DWORD *)(a1 + 128);
  ++*(_DWORD *)(a2 + 8);
  if ( 3 * v33 < 4 * v34 )
  {
    v54 = 2 * v33;
    v52 = 32LL * v33;
    v44 = (__m128i *)sub_186B270(v52);
    v37 = v52;
    v45 = v54;
    v35 = v44;
    v46 = &v44[v52 / 0x10];
    if ( v54 )
    {
      if ( (v52 & 0x10) == 0 || (*v44 = 0, ++v44, v44 != v46) )
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
    v36 = v54 - 1;
    v38 = v46;
    v48 = (__m128i *)&v47[*(unsigned int *)(a1 + 120)];
    if ( v47 != v48 )
    {
      do
      {
        if ( v47->m128i_i64[0] > 1uLL )
        {
          v49 = 16LL * (*(_DWORD *)(v47->m128i_i64[0] + 12) & (unsigned int)v36);
          v50 = &v35[(unsigned __int64)v49 / 0x10];
          if ( v52 == v49 )
          {
LABEL_60:
            if ( v35 == v50 )
            {
LABEL_70:
              sub_1872CE0("");
              sub_1873130(114, 213);
            }
            v51 = v35;
            while ( v51->m128i_i64[0] )
            {
              if ( v50 == ++v51 )
                goto LABEL_70;
            }
          }
          else
          {
            v51 = &v35[(unsigned __int64)v49 / 0x10];
            while ( v51->m128i_i64[0] )
            {
              if ( v46 == ++v51 )
                goto LABEL_60;
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
      v56 = v54;
      v55 = v52;
      v53 = v45 - 1;
      sub_186B220(v48);
      v45 = v56;
      v37 = v55;
      v36 = v53;
    }
    *(_QWORD *)(a1 + 112) = v35;
    *(_DWORD *)(a1 + 120) = v45;
    *(_DWORD *)(a1 + 128) = 0;
  }
  else
  {
    v35 = *(__m128i **)(a1 + 112);
    v36 = v33 - 1;
    v37 = 16LL * v33;
    v38 = (__m128i *)((char *)v35 + v37);
  }
  v39 = *(_DWORD *)(a2 + 12);
  v40 = 16LL * (v39 & (unsigned int)v36);
  v41 = &v35[(unsigned __int64)v40 / 0x10];
  if ( v40 != v37 )
  {
    result = &v35[(unsigned __int64)v40 / 0x10];
    v42 = nullptr;
    while ( 1 )
    {
      v43 = result->m128i_i64[0];
      if ( result->m128i_i64[0] > 1uLL )
      {
        if ( *(_DWORD *)(v43 + 12) == v39 && a2 == v43 )
        {
          result->m128i_i64[0] = a2;
          result->m128i_i64[1] = (__int64)v21;
          return result;
        }
      }
      else
      {
        if ( !v43 )
        {
          if ( v42 )
            goto LABEL_16;
          v42 = (__int64 *)result;
          goto LABEL_17;
        }
        v42 = (__int64 *)result;
      }
      if ( ++result == v38 )
        goto LABEL_43;
    }
  }
  v42 = nullptr;
  while ( 1 )
  {
LABEL_43:
    if ( v41 == v35 )
    {
      sub_1872CE0("");
      sub_1873130(114, 405);
    }
    result = (__m128i *)v35->m128i_i64[0];
    if ( v35->m128i_i64[0] <= 1uLL )
      break;
    if ( result->m128i_i32[3] == v39 && (__m128i *)a2 == result )
    {
      v35->m128i_i64[0] = a2;
      v35->m128i_i64[1] = (__int64)v21;
      return result;
    }
LABEL_42:
    ++v35;
  }
  if ( result )
  {
    v42 = (__int64 *)v35;
    goto LABEL_42;
  }
  if ( v42 )
LABEL_16:
    --*(_DWORD *)(a1 + 128);
  else
    v42 = (__int64 *)v35;
LABEL_17:
  *v42 = a2;
  v42[1] = (__int64)v21;
  ++*(_DWORD *)(a1 + 124);
  return result;
}

