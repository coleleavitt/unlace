__int64 __fastcall sub_B0D200(__int64 a1)
{
  char **exception; // rbx
  unsigned __int64 v3; // rbp
  unsigned int v4; // eax
  unsigned int v5; // r12d
  size_t v6; // rdi
  unsigned int *v7; // rax
  __int64 *v8; // rbx
  unsigned int *v9; // r15
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 *v12; // r8
  unsigned __int64 v13; // rdx
  __int64 *v14; // rcx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __m128i v17; // xmm0
  unsigned __int64 v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 *v21; // r14
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned int v25; // r12d
  int v26; // ebp
  unsigned int v27; // r15d
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rax
  __int64 v31; // r14
  unsigned int **v32; // rbx
  unsigned int *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  char *v37; // r15
  __int64 v38; // r12
  char *v39; // rbx
  char *v40; // rbp
  unsigned __int64 v41; // rdx
  unsigned int v42; // r13d
  unsigned int v43; // edx
  char *v44; // rax
  char *v45; // rcx
  unsigned __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // ecx
  unsigned int v50; // edx
  char *v51; // rax
  char *v52; // rsi
  char *v53; // r12
  _QWORD *v54; // rax
  unsigned int v55; // r14d
  unsigned int v56; // edx
  char *v57; // rax
  char *v58; // rcx
  unsigned int v59; // [rsp+Ch] [rbp-5Ch]
  __int64 v60[11]; // [rsp+10h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a1 + 952);
  if ( !v3 )
  {
    v59 = 0;
    v54 = (_QWORD *)sub_186B270(0x18u);
    v3 = (unsigned __int64)(v54 + 1);
    *v54 = 2;
    *(_QWORD *)(a1 + 952) = v54 + 1;
    goto LABEL_3;
  }
  v59 = *(_DWORD *)(v3 - 4);
  if ( v59 <= 0x3FF )
  {
LABEL_3:
    while ( 1 )
    {
      v4 = *(_DWORD *)(v3 - 8);
      if ( v4 > 0x3FF )
        break;
      while ( 1 )
      {
        v5 = (3 * v4 + 1) >> 1;
        v6 = 8 * v5 + 8;
        if ( 8 * v4 + 8 >= (unsigned int)v6 || v4 >= v5 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_B035D0(v60, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v60);
          sub_233E40((__int64)v60);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v7 = (unsigned int *)sub_186B270(v6);
        v8 = *(__int64 **)(a1 + 952);
        v9 = v7;
        v3 = (unsigned __int64)(v7 + 2);
        if ( !v8 )
          break;
        v10 = *((unsigned int *)v8 - 1);
        v7[1] = v10;
        v11 = 8 * v10;
        v12 = &v8[v10];
        if ( v8 != v12 )
        {
          v13 = v11 - 8;
          v14 = v8;
          if ( (unsigned __int64)(v11 - 8) <= 8 || v3 < (unsigned __int64)(v8 + 2) && v8 < (__int64 *)v9 + 3 )
          {
            v47 = v3;
            do
            {
              v48 = *v14;
              *v14++ = 0;
              v47 += 8LL;
              *(_QWORD *)(v47 - 8) = v48;
            }
            while ( v12 != v14 );
          }
          else
          {
            v15 = 0;
            v16 = (v13 >> 3) + 1;
            do
            {
              v17 = _mm_loadu_si128((const __m128i *)&v8[v15 / 2]);
              *(_OWORD *)&v8[v15 / 2] = 0;
              *(__m128i *)&v9[v15 + 2] = v17;
              v15 += 4LL;
            }
            while ( 4 * (v16 >> 1) != v15 );
            if ( (v16 & 1) != 0 )
            {
              v18 = v16 & 0xFFFFFFFFFFFFFFFELL;
              v19 = &v8[v18];
              v20 = *v19;
              *v19 = 0;
              *(_QWORD *)(v3 + 8 * v18) = v20;
            }
          }
        }
        v21 = &v8[v10];
        if ( (_DWORD)v10 )
        {
          do
          {
            while ( *v8 )
            {
              v22 = (void *)(*v8++ - 8);
              sub_186B220(v22);
              if ( v21 == v8 )
                goto LABEL_18;
            }
            ++v8;
          }
          while ( v8 != v21 );
LABEL_18:
          v8 = *(__int64 **)(a1 + 952);
        }
        sub_186B220(v8 - 1);
        *v9 = v5;
        v4 = *(_DWORD *)(v3 - 8);
        *(_QWORD *)(a1 + 952) = v3;
        if ( v4 > 0x3FF )
          goto LABEL_20;
      }
      v7[1] = 0;
      *(_QWORD *)(a1 + 952) = v3;
      *v7 = v5;
    }
LABEL_20:
    *(_DWORD *)(v3 - 4) = 1024;
    memset((void *)(v3 + 8LL * v59), 0, 0x2000 - 8LL * v59);
  }
  v23 = *(_QWORD *)(a1 + 960);
  if ( v23 )
    *(_DWORD *)(v23 - 4) = 0;
  v24 = *(_QWORD *)(a1 + 864);
  if ( !v24 || !*(_DWORD *)(v24 - 4) )
    return 0;
  v25 = 0;
  do
  {
    v26 = 0;
    v27 = *(_DWORD *)(v24 + 4LL * v25);
    v28 = *(_QWORD *)(a1 + 856);
    if ( v28 )
    {
      if ( v27 < *(_DWORD *)(v28 - 4) )
      {
        v29 = *(_DWORD *)(v28 + 4LL * v27);
        v26 = -v29;
        if ( v29 > 0 )
          v26 = v29;
      }
    }
    v30 = *(_QWORD *)(a1 + 952);
    if ( !v30 || *(_DWORD *)(v30 - 4) <= v26 )
    {
      sub_B05D80((_QWORD *)a1);
      return 0;
    }
    v31 = 8LL * v26;
    v32 = (unsigned int **)(v30 + v31);
    v33 = *(unsigned int **)(v30 + v31);
    if ( !v33 || (v34 = *(v33 - 1), !(_DWORD)v34) )
    {
      v35 = *(_QWORD *)(a1 + 960);
      if ( !v35 || (v36 = *(unsigned int *)(v35 - 4), (_DWORD)v36 == *(_DWORD *)(v35 - 8)) )
      {
        sub_2FD3F0((unsigned int **)(a1 + 960));
        v35 = *(_QWORD *)(a1 + 960);
        v32 = (unsigned int **)(v31 + *(_QWORD *)(a1 + 952));
        v36 = *(unsigned int *)(v35 - 4);
        v33 = *v32;
      }
      *(_DWORD *)(v35 + 4 * v36) = v26;
      ++*(_DWORD *)(v35 - 4);
      if ( !v33 )
      {
LABEL_62:
        sub_2FD3F0(v32);
        v33 = *v32;
        v34 = *(*v32 - 1);
        goto LABEL_39;
      }
      v34 = *(v33 - 1);
    }
    if ( *(v33 - 2) == (_DWORD)v34 )
      goto LABEL_62;
LABEL_39:
    v33[v34] = v27;
    ++v25;
    ++*(v33 - 1);
    v24 = *(_QWORD *)(a1 + 864);
  }
  while ( v24 && v25 < *(_DWORD *)(v24 - 4) );
  v37 = *(char **)(a1 + 960);
  if ( v37 )
  {
    v38 = 4LL * *((unsigned int *)v37 - 1);
    v39 = &v37[v38];
    if ( v37 != &v37[v38] )
    {
      v40 = v37 + 4;
      _BitScanReverse64(&v41, v38 >> 2);
      sub_B039F0(*(__m128i **)(a1 + 960), &v37[v38], 2LL * (int)v41);
      if ( (unsigned __int64)v38 > 0x40 )
      {
        v53 = v37 + 64;
        do
        {
          v55 = *(_DWORD *)v40;
          if ( *(_DWORD *)v40 < *(_DWORD *)v37 )
          {
            if ( v40 - v37 <= 4 )
            {
              if ( v40 - v37 == 4 )
                *(_DWORD *)v40 = *(_DWORD *)v37;
            }
            else
            {
              memmove(v37 + 4, v37, v40 - v37);
            }
            *(_DWORD *)v37 = v55;
          }
          else
          {
            v56 = *((_DWORD *)v40 - 1);
            v57 = v40 - 4;
            if ( v55 >= v56 )
            {
              v58 = v40;
            }
            else
            {
              do
              {
                *((_DWORD *)v57 + 1) = v56;
                v58 = v57;
                v56 = *((_DWORD *)v57 - 1);
                v57 -= 4;
              }
              while ( v55 < v56 );
            }
            *(_DWORD *)v58 = v55;
          }
          v40 += 4;
        }
        while ( v53 != v40 );
        do
        {
          v49 = *(_DWORD *)v53;
          v50 = *((_DWORD *)v53 - 1);
          v51 = v53 - 4;
          if ( *(_DWORD *)v53 >= v50 )
          {
            v52 = v53;
          }
          else
          {
            do
            {
              *((_DWORD *)v51 + 1) = v50;
              v52 = v51;
              v50 = *((_DWORD *)v51 - 1);
              v51 -= 4;
            }
            while ( v49 < v50 );
          }
          v53 += 4;
          *(_DWORD *)v52 = v49;
        }
        while ( v39 != v53 );
      }
      else if ( v38 != 4 )
      {
        do
        {
          v42 = *(_DWORD *)v40;
          if ( *(_DWORD *)v40 < *(_DWORD *)v37 )
          {
            if ( v40 - v37 <= 4 )
            {
              if ( v40 - v37 == 4 )
                *(_DWORD *)v40 = *(_DWORD *)v37;
            }
            else
            {
              memmove(v37 + 4, v37, v40 - v37);
            }
            *(_DWORD *)v37 = v42;
          }
          else
          {
            v43 = *((_DWORD *)v40 - 1);
            v44 = v40 - 4;
            if ( v42 >= v43 )
            {
              v45 = v40;
            }
            else
            {
              do
              {
                *((_DWORD *)v44 + 1) = v43;
                v45 = v44;
                v43 = *((_DWORD *)v44 - 1);
                v44 -= 4;
              }
              while ( v42 < v43 );
            }
            *(_DWORD *)v45 = v42;
          }
          v40 += 4;
        }
        while ( v39 != v40 );
      }
    }
  }
  return 1;
}

