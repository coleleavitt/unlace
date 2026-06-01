__m128i *__fastcall sub_842CF0(__m128i *a1, __int64 a2, __int64 a3, int a4)
{
  char **exception; // r12
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 v11; // rsi
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r14
  double v18; // rdi
  __int64 *v19; // r15
  __int64 *v20; // r12
  __int64 *v21; // rbx
  __int64 v22; // r11
  __int64 v23; // rax
  __int64 *v24; // rcx
  int v25; // r8d
  unsigned int v26; // edx
  __int64 *v27; // rsi
  __int64 v28; // rdx
  __int64 *v29; // r10
  __int64 *i; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r13
  unsigned int v34; // esi
  __int64 v35; // rax
  __int64 v36; // rsi
  __int64 *v37; // rax
  __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned int v40; // eax
  unsigned int *v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int64 v44; // r12
  double v45; // r13
  __int64 *v46; // rbp
  __int64 v47; // rsi
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  int v52; // eax
  unsigned __int64 v53; // rdx
  _QWORD *v54; // rax
  double v56[5]; // [rsp+18h] [rbp-80h] BYREF
  __int64 v57[11]; // [rsp+40h] [rbp-58h] BYREF

  v7 = *(_QWORD *)(a3 + 16);
  v8 = *(unsigned int *)(a2 + 120);
  v9 = *(_QWORD *)(a2 + 112);
  v10 = v8 - 1;
  v8 *= 32;
  v11 = v9 + v8;
  v12 = a4 + *(_DWORD *)(v7 + 12);
  v13 = 32LL * (v12 & v10);
  v14 = v9 + v13;
  if ( v13 == v8 )
  {
LABEL_51:
    if ( v9 != v14 )
    {
      while ( 1 )
      {
        v52 = *(_DWORD *)(v9 + 4);
        if ( v52 == 2 )
        {
          if ( v12 == *(_DWORD *)v9 && a4 == *(_DWORD *)(v9 + 16) && v7 == *(_QWORD *)(v9 + 8) )
          {
            v15 = v9;
            goto LABEL_9;
          }
        }
        else if ( !v52 )
        {
          goto LABEL_52;
        }
        v9 += 32;
        if ( v14 == v9 )
          goto LABEL_52;
      }
    }
    goto LABEL_52;
  }
  v15 = v9 + v13;
  while ( 1 )
  {
    v16 = *(_DWORD *)(v15 + 4);
    if ( v16 != 2 )
    {
      if ( !v16 )
        goto LABEL_52;
      goto LABEL_4;
    }
    if ( v12 == *(_DWORD *)v15 && a4 == *(_DWORD *)(v15 + 16) && v7 == *(_QWORD *)(v15 + 8) )
      break;
LABEL_4:
    v15 += 32;
    if ( v11 == v15 )
      goto LABEL_51;
  }
LABEL_9:
  v17 = *(_QWORD *)(v15 + 24);
  if ( !v17 )
  {
LABEL_52:
    v50 = *(_QWORD *)(a2 + 24);
    v51 = *(_QWORD *)(v50 + 856);
    *a1 = _mm_unpacklo_epi64((__m128i)v51, (__m128i)v50);
    if ( !v51 )
      return a1;
LABEL_53:
    ++*(_DWORD *)(v51 + 8);
    return a1;
  }
  v18 = *(double *)(a2 + 24);
  v19 = *(__int64 **)(v17 + 8);
  v56[0] = v18;
  v56[3] = v18;
  if ( !v19 || (v20 = &v19[*((unsigned int *)v19 - 1)], v20 == v19) )
  {
    v51 = *(_QWORD *)(*(_QWORD *)&v56[0] + 856LL);
    *(__m128 *)a1 = _mm_loadh_ps(v56);
    if ( !v51 )
      return a1;
    goto LABEL_53;
  }
  v21 = nullptr;
  while ( 1 )
  {
    v22 = *v19;
    v23 = *(unsigned int *)(v17 + 24);
    v24 = *(__int64 **)(v17 + 16);
    v25 = *(_DWORD *)(*v19 + 12);
    v26 = v23 - 1;
    v23 *= 16;
    v27 = (__int64 *)((char *)v24 + v23);
    v28 = 16LL * (v25 & v26);
    v29 = &v24[(unsigned __int64)v28 / 8];
    if ( v28 != v23 )
    {
      for ( i = &v24[(unsigned __int64)v28 / 8]; v27 != i; i += 2 )
      {
        v31 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *(_DWORD *)(v31 + 12) == v25 && v22 == v31 )
            goto LABEL_20;
        }
        else if ( !v31 )
        {
          goto LABEL_20;
        }
      }
    }
    for ( ; v29 != v24; v24 += 2 )
    {
      while ( 1 )
      {
        v38 = *v24;
        if ( (unsigned __int64)*v24 > 1 )
          break;
        if ( v38 )
        {
          v24 += 2;
          if ( v29 != v24 )
            continue;
        }
        goto LABEL_20;
      }
      if ( *(_DWORD *)(v38 + 12) == v25 && v22 == v38 )
        break;
    }
LABEL_20:
    v32 = sub_15E1B70(SLODWORD(v18));
    v33 = v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    if ( v21 )
      break;
    v54 = (_QWORD *)sub_186B270(0x18u);
    *v54 = 2;
    v37 = v54 + 1;
    v36 = 1;
    v21 = v37;
LABEL_25:
    ++v19;
    *v37 = v33;
    *((_DWORD *)v21 - 1) = v36;
    if ( v20 == v19 )
      goto LABEL_39;
LABEL_26:
    v18 = *(double *)(a2 + 24);
  }
  v34 = *((_DWORD *)v21 - 1);
  if ( v34 != *((_DWORD *)v21 - 2) )
  {
    v35 = v34;
    v36 = v34 + 1;
    v37 = &v21[v35];
    goto LABEL_25;
  }
  v39 = (3 * v34 + 1) >> 1;
  v40 = 8 * v39 + 8;
  if ( 8 * v34 + 8 >= v40 || v34 >= v39 )
  {
    exception = (char **)__cxa_allocate_exception(0x28u);
    sub_24ABB0(v57, "Overflow encountered when expanding vector");
    *exception = (char *)off_1C63128;
    sub_2333C0(exception + 1, v57);
    sub_233E40((__int64)v57);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
  }
  v41 = (unsigned int *)sub_186B300(v21 - 1, v40);
  v21 = (__int64 *)(v41 + 2);
  ++v19;
  *v41 = (3 * v34 + 1) >> 1;
  v42 = v41[1];
  v36 = (unsigned int)(v42 + 1);
  v21[v42] = v33;
  *((_DWORD *)v21 - 1) = v36;
  if ( v20 != v19 )
    goto LABEL_26;
LABEL_39:
  if ( (_DWORD)v36 )
  {
    v43 = sub_15EC240(*(_QWORD *)&v56[0], v36);
    *(__m128 *)a1 = _mm_loadh_ps(v56);
    if ( v43 )
      goto LABEL_41;
LABEL_42:
    v44 = (unsigned __int64)&v21[*((unsigned int *)v21 - 1)];
    if ( (unsigned __int64)v21 < v44 )
    {
      v45 = v56[0];
      v46 = v21;
      do
      {
        while ( 1 )
        {
          v47 = *v46;
          if ( *v46 )
          {
            if ( (*(_DWORD *)(v47 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v46 >= v44 )
            goto LABEL_48;
        }
        ++v46;
        sub_15D7BC0(*(_QWORD *)&v45, v47);
      }
      while ( (unsigned __int64)v46 < v44 );
    }
  }
  else
  {
    v53 = *(_QWORD *)(a2 + 24);
    v43 = *(_QWORD *)(v53 + 856);
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v43, (__m128i)v53);
    if ( v43 )
    {
LABEL_41:
      ++*(_DWORD *)(v43 + 8);
      goto LABEL_42;
    }
  }
LABEL_48:
  sub_186B220(v21 - 1);
  return a1;
}

