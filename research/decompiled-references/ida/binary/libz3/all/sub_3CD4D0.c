__int64 __fastcall sub_3CD4D0(__int64 a1, __int64 a2)
{
  char **exception; // r13
  __int64 v3; // rdx
  __int64 v4; // r13
  const double *v5; // rbp
  _QWORD *v6; // rbx
  _QWORD *v7; // r12
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // r12
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __m128 v22; // xmm0
  __m128 v23; // kr00_16
  _QWORD *v24; // rdx
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  _QWORD *v28; // rcx
  __int64 result; // rax
  unsigned int v30; // r13d
  unsigned int v31; // ecx
  unsigned int *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  _QWORD *v35; // rdx
  unsigned int v36; // [rsp+Ch] [rbp-5Ch]
  __m128 v37; // [rsp+10h] [rbp-58h] BYREF
  __int64 v38[9]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v5 = *(const double **)(a1 + 48);
  sub_64C320(*(_QWORD *)v5);
  sub_8E4B90(v5 + 98);
  v6 = *((_QWORD **)v5 + 171);
  if ( v6 )
  {
    v7 = &v6[*((unsigned int *)v6 - 1)];
    if ( v6 >= v7 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        a2 = *v6;
        if ( *v6 )
        {
          v8 = *((_QWORD *)v5 + 170);
          v9 = (*(_DWORD *)(a2 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v6 >= v7 )
          goto LABEL_8;
      }
      sub_15D7BC0(v8, a2);
      ++v6;
    }
    while ( v6 < v7 );
LABEL_8:
    v6 = *((_QWORD **)v5 + 171);
    if ( v6 )
LABEL_9:
      *((_DWORD *)v6 - 1) = 0;
  }
  v10 = *(_QWORD *)v5;
  v11 = *((_QWORD *)v5 + 2);
  sub_654110(*(_QWORD *)v5, a2);
  sub_632080(v11, v4, v10 + 2360);
  sub_5D9090(*(_QWORD *)v5, v4, v12, v13, v14, v15);
  v16 = *(_QWORD *)v5;
  sub_654110(*(_QWORD *)v5, v4);
  if ( !*(_DWORD *)(v16 + 2524) )
    return 0xFFFFFFFFLL;
  v17 = *(_QWORD **)(v16 + 2512);
  v18 = &v17[*(unsigned int *)(v16 + 2520)];
  if ( v17 == v18 )
  {
    v34 = *v17;
  }
  else
  {
    while ( 1 )
    {
      v34 = *v17;
      v19 = v17;
      if ( *v17 > 1u )
        break;
      if ( v18 == ++v17 )
      {
        v34 = v19[1];
        break;
      }
    }
  }
  v20 = *(_QWORD *)sub_63BA90(v16 + 2360, v34);
  if ( !v20 || !*(_DWORD *)(v20 - 4) )
    return 0xFFFFFFFFLL;
  v21 = *(_QWORD *)(*(_QWORD *)v20 + 40LL);
  v22 = _mm_loadh_ps(v5 + 1);
  if ( v21 )
    ++*(_DWORD *)(v21 + 8);
  v37 = v22;
  sub_3CDC10(v5, &v37);
  v23 = v37;
  if ( v37.m128_u64[0] )
    ++*(_DWORD *)(v37.m128_u64[0] + 8);
  v24 = *((_QWORD **)v5 + 171);
  if ( v24 )
  {
    v25 = *((_DWORD *)v24 - 1);
    if ( v25 == *((_DWORD *)v24 - 2) )
    {
      v30 = (3 * v25 + 1) >> 1;
      v31 = 8 * v30 + 8;
      if ( 8 * v25 + 8 >= v31 || v25 >= v30 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_C86F2(v38, "Overflow encountered when expanding vector", v3);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v38);
        sub_233E40((__int64)v38);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v32 = (unsigned int *)sub_186B300(v24 - 1, v31);
      v33 = v32[1];
      v24 = v32 + 2;
      *((_QWORD *)v5 + 171) = v32 + 2;
      *v32 = v30;
      LODWORD(v32) = v33;
      v28 = &v24[v33];
      v27 = (_DWORD)v32 + 1;
    }
    else
    {
      v26 = v25;
      v27 = v25 + 1;
      v28 = &v24[v26];
    }
  }
  else
  {
    v35 = (_QWORD *)sub_186B270(0x18u);
    *v35 = 2;
    v27 = 1;
    v24 = v35 + 1;
    *((_QWORD *)v5 + 171) = v24;
    v28 = v24;
  }
  *v28 = v23.m128_u64[0];
  *((_DWORD *)v24 - 1) = v27;
  result = sub_3CF500(v5, 20, 0);
  if ( v23.m128_u64[0] )
  {
    v9 = (*(_DWORD *)(v23.m128_u64[0] + 8))-- == 1;
    if ( v9 )
    {
      v36 = result;
      sub_15D7BC0(v23.m128_u64[1], v23.m128_u64[0]);
      return v36;
    }
  }
  return result;
}

