void __fastcall sub_7F1EC0(__int64 a1, unsigned int a2)
{
  char **v2; // rbp
  char **exception; // rbp
  __int64 v6; // rax
  _QWORD *v7; // rdx
  int v8; // r12d
  _QWORD *v9; // rax
  _DWORD *i; // rax
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // ebp
  size_t v15; // rsi
  unsigned int *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  unsigned int *v21; // rdi
  unsigned int *j; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int *v25; // rax
  __int64 v26; // rdx
  unsigned int *v27; // r11
  unsigned int v28; // edx
  __int64 v29; // rsi
  __int64 v30; // rdx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  __m128i v33; // xmm0
  unsigned __int64 v34; // rdx
  __int64 v35; // r10
  __int64 *v36; // r13
  void *v37; // rdi
  __int64 *v38; // r12
  unsigned int v39; // eax
  unsigned int v40; // r12d
  size_t v41; // rdi
  unsigned int *v42; // rax
  unsigned int *v43; // r14
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 *v46; // r11
  unsigned __int64 v47; // rdi
  __int64 *v48; // r10
  _DWORD *v49; // rdx
  __int64 v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rax
  _QWORD *v53; // rax
  unsigned int v54; // [rsp+0h] [rbp-74h]
  unsigned int v55; // [rsp+4h] [rbp-70h]
  unsigned int v56; // [rsp+8h] [rbp-6Ch]
  __int64 v57[11]; // [rsp+1Ch] [rbp-58h] BYREF

  if ( !*(_BYTE *)(a1 + 8) )
    return;
  if ( *(_DWORD *)(a1 + 32) )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD **)(a1 + 24);
    if ( v6 )
      v8 = *(_DWORD *)(v6 - 4);
    else
      v8 = 0;
    if ( v7 )
      goto LABEL_10;
    v9 = (_QWORD *)sub_186B270(0x10u);
    v7 = v9 + 1;
    *v9 = 2;
    *(_QWORD *)(a1 + 24) = v9 + 1;
    for ( i = v9 + 1; ; i = (_DWORD *)v7 + v17 )
    {
      *i = v8;
      ++*((_DWORD *)v7 - 1);
      v11 = (*(_DWORD *)(a1 + 32))-- == 1;
      if ( v11 )
        break;
      while ( 1 )
      {
        v12 = *(_QWORD *)(a1 + 16);
        v8 = v12 ? *(_DWORD *)(v12 - 4) : 0;
LABEL_10:
        v13 = *((unsigned int *)v7 - 1);
        if ( (_DWORD)v13 == *((_DWORD *)v7 - 2) )
          break;
        *((_DWORD *)v7 + v13) = v8;
        ++*((_DWORD *)v7 - 1);
        v11 = (*(_DWORD *)(a1 + 32))-- == 1;
        if ( v11 )
          goto LABEL_12;
      }
      v14 = (unsigned int)(3 * v13 + 1) >> 1;
      v15 = 4 * v14 + 8;
      if ( 4 * (int)v13 + 8 >= (unsigned int)v15 || (unsigned int)v13 >= v14 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v57, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v57);
        sub_233E40((__int64)v57);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v16 = (unsigned int *)sub_186B300(v7 - 1, v15);
      v7 = v16 + 2;
      *v16 = v14;
      v17 = v16[1];
      *(_QWORD *)(a1 + 24) = v7;
    }
LABEL_12:
    if ( !*(_BYTE *)(a1 + 8) )
      goto LABEL_13;
  }
  v18 = *(_QWORD *)(a1 + 40);
  v19 = a2 >> 1;
  if ( v18 )
  {
    if ( (unsigned int)v19 < *(_DWORD *)(v18 - 4) && *(_BYTE *)(v18 + v19) )
    {
LABEL_13:
      sub_7F0DF0(a1, a2);
      return;
    }
  }
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 3616LL) >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL)
                                                                                        + 3296LL)
                                                                            + 24 * v19) )
  {
LABEL_62:
    sub_7F1380((_QWORD *)a1, a2);
    goto LABEL_13;
  }
  v20 = *(_QWORD *)(a1 + 632);
  v55 = a2 + 1;
  if ( !v20 )
  {
    if ( a2 == -1 )
      goto LABEL_24;
    v56 = 0;
    v53 = (_QWORD *)sub_186B270(0x18u);
    *v53 = 2;
    v20 = (unsigned __int64)(v53 + 1);
    *(_QWORD *)(a1 + 632) = v53 + 1;
LABEL_48:
    while ( 1 )
    {
      v39 = *(_DWORD *)(v20 - 8);
      if ( v39 >= v55 )
        break;
      v40 = (3 * v39 + 1) >> 1;
      v41 = 8 * v40 + 8;
      v54 = v40;
      if ( 8 * v39 + 8 >= (unsigned int)v41 || v39 >= v40 )
      {
        v2 = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v57, "Overflow encountered when expanding vector");
        *v2 = (char *)off_1C63128;
        sub_2333C0(v2 + 1, v57);
        sub_233E40((__int64)v57);
        __cxa_throw(v2, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v42 = (unsigned int *)sub_186B270(v41);
      v38 = *(__int64 **)(a1 + 632);
      v43 = v42;
      v20 = (unsigned __int64)(v42 + 2);
      if ( v38 )
      {
        v44 = *((unsigned int *)v38 - 1);
        v45 = 8 * v44;
        v42[1] = v44;
        v46 = &v38[v44];
        if ( v38 != v46 )
        {
          v47 = v45 - 8;
          v48 = v38;
          if ( (unsigned __int64)(v45 - 8) > 8 && (v20 >= (unsigned __int64)(v38 + 2) || v38 >= (__int64 *)v42 + 3) )
          {
            v31 = 0;
            v32 = (v47 >> 3) + 1;
            do
            {
              v33 = _mm_loadu_si128((const __m128i *)&v38[v31 / 2]);
              *(_OWORD *)&v38[v31 / 2] = 0;
              *(__m128i *)&v42[v31 + 2] = v33;
              v31 += 4LL;
            }
            while ( 4 * (v32 >> 1) != v31 );
            if ( (v32 & 1) != 0 )
            {
              v34 = 2 * (v32 & 0xFFFFFFFFFFFFFFFELL);
              v35 = v38[v34 / 2];
              v38[v34 / 2] = 0;
              *(_QWORD *)&v42[v34 + 2] = v35;
            }
          }
          else
          {
            v49 = v42 + 2;
            do
            {
              v50 = *v48;
              *v48++ = 0;
              v49 += 2;
              *((_QWORD *)v49 - 1) = v50;
            }
            while ( v46 != v48 );
          }
        }
        v36 = &v38[v44];
        if ( (_DWORD)v44 )
        {
          do
          {
            while ( *v38 )
            {
              v37 = (void *)(*v38++ - 8);
              sub_186B220(v37);
              if ( v36 == v38 )
                goto LABEL_46;
            }
            ++v38;
          }
          while ( v36 != v38 );
LABEL_46:
          v38 = *(__int64 **)(a1 + 632);
        }
        sub_186B220(v38 - 1);
        *(_QWORD *)(a1 + 632) = v20;
        *v43 = v54;
      }
      else
      {
        v42[1] = 0;
        *(_QWORD *)(a1 + 632) = v20;
        *v42 = v54;
      }
    }
    *(_DWORD *)(v20 - 4) = v55;
    v51 = 8LL * v55;
    v52 = 8LL * v56;
    if ( v52 != v51 )
      memset((void *)(v20 + v52), 0, v51 - v52);
    goto LABEL_24;
  }
  v56 = *(_DWORD *)(v20 - 4);
  if ( v56 < a2 + 1 )
    goto LABEL_48;
LABEL_24:
  v21 = *(unsigned int **)(v20 + 8LL * a2);
  if ( v21 )
  {
    for ( j = &v21[*(v21 - 1)]; j != v21; ++v21 )
    {
      v23 = *v21;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 624) + v23) )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8 * v23);
        v25 = (unsigned int *)(v24 + 20);
        v26 = *(unsigned int *)(v24 + 4);
        v27 = &v25[v26];
        if ( !(v26 * 4) )
          goto LABEL_62;
        while ( 1 )
        {
          v28 = *v25;
          if ( *v25 != a2 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 24LL) + 3288LL) + 4LL * v28) == 1 )
          {
            if ( !*(_BYTE *)(a1 + 8) )
              break;
            v29 = *(_QWORD *)(a1 + 40);
            if ( v29 )
            {
              v30 = v28 >> 1;
              if ( (unsigned int)v30 < *(_DWORD *)(v29 - 4) )
              {
                if ( *(_BYTE *)(v29 + v30) )
                  break;
              }
            }
          }
          if ( v27 == ++v25 )
            goto LABEL_62;
        }
      }
    }
  }
}

