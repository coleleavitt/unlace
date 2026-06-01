__m128i *__fastcall sub_5F82B0(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  char **exception; // r12
  int v8; // ebx
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 *v12; // r13
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  int v15; // eax
  __int64 v16; // r14
  _QWORD *v17; // rbx
  unsigned int v18; // eax
  __int64 v19; // rax
  int v20; // edi
  __int64 *v21; // rcx
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 v24; // rdx
  __int64 *v25; // r8
  __int64 *i; // rax
  __int64 v27; // rdx
  int v28; // edx
  unsigned int v29; // edx
  size_t v30; // rsi
  unsigned int *v31; // rax
  unsigned __int64 v32; // rbp
  __int64 v33; // rax
  __int64 *v34; // rbp
  unsigned __int64 v35; // r12
  __int64 v36; // rsi
  __int64 v39; // rax
  int v40; // [rsp+0h] [rbp-98h]
  int v41; // [rsp+8h] [rbp-90h]
  unsigned int v42; // [rsp+Ch] [rbp-8Ch]
  __m128i *v44; // [rsp+10h] [rbp-88h]
  __int64 v45; // [rsp+18h] [rbp-80h]
  __int64 v46; // [rsp+18h] [rbp-80h]
  int v47; // [rsp+20h] [rbp-78h]
  char v48; // [rsp+28h] [rbp-70h]
  int v49; // [rsp+38h] [rbp-60h]
  __int64 v50[11]; // [rsp+40h] [rbp-58h] BYREF

  v8 = *(_DWORD *)(a3 + 24);
  v9 = *(_QWORD *)(a3 + 16);
  v45 = *(_QWORD *)(a2 + 24);
  if ( v8 == 1 )
  {
    v17 = nullptr;
  }
  else
  {
    v10 = *(_QWORD *)(a3 + 32);
    v12 = (__int64 *)(a3 + 32);
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v13 = (_QWORD *)sub_186B270(0x18u);
    v14 = v13 + 1;
    *v13 = 2;
    v15 = 1;
    v16 = a3 + 8LL * (unsigned int)(v8 - 2) + 40;
    v17 = v14;
    while ( 1 )
    {
      ++v12;
      *v14 = v10;
      *((_DWORD *)v17 - 1) = v15;
      if ( v12 == (__int64 *)v16 )
        break;
      while ( 1 )
      {
        v10 = *v12;
        if ( *v12 )
          ++*(_DWORD *)(v10 + 8);
        v18 = *((_DWORD *)v17 - 1);
        if ( v18 == *((_DWORD *)v17 - 2) )
          break;
        ++v12;
        v17[v18] = v10;
        *((_DWORD *)v17 - 1) = v18 + 1;
        if ( v12 == (__int64 *)v16 )
          goto LABEL_10;
      }
      v29 = (3 * v18 + 1) >> 1;
      v30 = 8 * v29 + 8;
      if ( 8 * v18 + 8 >= (unsigned int)v30 || v18 >= v29 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v50, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (3 * v18 + 1) >> 1;
      v31 = (unsigned int *)sub_186B300(v17 - 1, v30);
      v17 = v31 + 2;
      *v31 = v42;
      LODWORD(v31) = v31[1];
      v14 = &v17[(unsigned int)v31];
      v15 = (_DWORD)v31 + 1;
    }
  }
LABEL_10:
  v19 = *(unsigned int *)(a2 + 80);
  v20 = *(_DWORD *)(v9 + 12);
  v21 = *(__int64 **)(a2 + 72);
  v22 = v19 - 1;
  v19 *= 16;
  v23 = (__int64 *)((char *)v21 + v19);
  v24 = 16LL * (v20 & v22);
  v25 = &v21[(unsigned __int64)v24 / 8];
  if ( v24 != v19 )
  {
    for ( i = &v21[(unsigned __int64)v24 / 8]; v23 != i; i += 2 )
    {
      v27 = *i;
      if ( (unsigned __int64)*i > 1 )
      {
        if ( *(_DWORD *)(v27 + 12) == v20 && v9 == v27 )
          goto LABEL_23;
      }
      else if ( !v27 )
      {
        goto LABEL_17;
      }
    }
  }
  if ( v21 == v25 )
  {
LABEL_17:
    sub_1872CE0("");
    sub_1873130(114, 60);
  }
  while ( 1 )
  {
    v39 = *v21;
    if ( (unsigned __int64)*v21 > 1 )
      break;
    if ( !v39 )
      goto LABEL_17;
LABEL_40:
    v21 += 2;
    if ( v25 == v21 )
      goto LABEL_17;
  }
  if ( *(_DWORD *)(v39 + 12) != v20 || v9 != v39 )
    goto LABEL_40;
  i = v21;
LABEL_23:
  v32 = *(_QWORD *)(a2 + 24);
  if ( v17 )
    v28 = *((_DWORD *)v17 - 1);
  else
    v28 = 0;
  v33 = sub_15DC610(
          *(_QWORD *)(a2 + 24),
          i[1],
          v28,
          (int)v17,
          (int)v25,
          a6,
          v40,
          v41,
          a1,
          v45,
          v47,
          v48,
          v45,
          v49,
          v50[0],
          (void *)v50[1]);
  *v44 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v33, (__m128i)v32);
  if ( v33 )
    ++*(_DWORD *)(v33 + 8);
  if ( v17 )
  {
    v34 = v17;
    v35 = (unsigned __int64)&v17[*((unsigned int *)v17 - 1)];
    if ( (unsigned __int64)v17 < v35 )
    {
      do
      {
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 )
          {
            if ( (*(_DWORD *)(v36 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v34 >= v35 )
            goto LABEL_34;
        }
        ++v34;
        sub_15D7BC0(v46, v36);
      }
      while ( (unsigned __int64)v34 < v35 );
    }
LABEL_34:
    sub_186B220(v17 - 1);
  }
  return v44;
}

