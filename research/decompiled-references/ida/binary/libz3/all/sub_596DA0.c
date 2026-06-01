_QWORD *__fastcall sub_596DA0(__int64 a1, _QWORD *a2, __int64 a3)
{
  char **exception; // r12
  unsigned int v5; // ebx
  __int64 v6; // rax
  _QWORD *v7; // r14
  __m128i v8; // xmm0
  _QWORD *v9; // rax
  _QWORD *v10; // rsi
  size_t v11; // rdx
  __int64 v12; // rax
  _QWORD *v13; // rax
  char *i; // rbp
  unsigned int v15; // edx
  size_t v16; // rsi
  unsigned int v17; // r15d
  unsigned int *v18; // rax
  unsigned int v19; // eax
  size_t v20; // rdx
  unsigned int v21; // r15d
  __int64 v22; // rbx
  __int64 j; // rdx
  char v24; // cl
  __int64 v25; // rax
  int v26; // eax
  int v27; // r9d
  int v28; // esi
  __int64 v29; // rbx
  _QWORD *v30; // r12
  __int64 v31; // rsi
  __int64 v32; // rdi
  bool v33; // zf
  char *v34; // rbx
  char *v35; // r13
  __int64 v36; // rsi
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 *v40; // rcx
  __int64 v41; // rsi
  int v42; // [rsp+0h] [rbp-A8h]
  __int64 v43; // [rsp+8h] [rbp-A0h]
  __int64 *v44; // [rsp+10h] [rbp-98h]
  __int64 v46; // [rsp+20h] [rbp-88h]
  int v47; // [rsp+28h] [rbp-80h]
  __int64 v48; // [rsp+30h] [rbp-78h]
  void *v49; // [rsp+38h] [rbp-70h]
  int v50[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v51; // [rsp+58h] [rbp-50h]

  if ( a1 != a2[1] )
    return nullptr;
  v5 = 0;
  v6 = sub_4D6490(*(_QWORD *)(a1 + 24));
  v7 = (_QWORD *)a2[2];
  v43 = v6;
  if ( v7 )
  {
    v8 = _mm_loadl_epi64((const __m128i *)(v7 - 1));
    v5 = *((_DWORD *)v7 - 1);
    v9 = (_QWORD *)sub_186B270(8LL * (unsigned int)_mm_cvtsi128_si32(v8) + 8);
    v10 = (_QWORD *)a2[2];
    v7 = v9 + 1;
    *v9 = v8.m128i_i64[0];
    if ( v10 )
    {
      v11 = 8LL * *((unsigned int *)v10 - 1);
      if ( v11 <= 8 )
      {
        if ( v11 == 8 )
          v9[1] = *v10;
      }
      else
      {
        memmove(v9 + 1, v10, v11);
      }
    }
  }
  v12 = sub_4D6480(*(_QWORD *)(a1 + 24));
  v44 = (__int64 *)sub_62B3A0(v12 + 656, a3);
  if ( v5 )
  {
    v13 = (_QWORD *)sub_186B270(0x18u);
    *v13 = 2;
    for ( i = (char *)(v13 + 1); ; i = (char *)(v18 + 2) )
    {
      v19 = *((_DWORD *)i - 2);
      if ( v19 >= v5 )
        break;
      v15 = (3 * v19 + 1) >> 1;
      v16 = 8 * v15 + 8;
      v17 = v15;
      if ( 8 * v19 + 8 >= (unsigned int)v16 || v19 >= v15 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0((__int64 *)v50, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v50);
        sub_233E40((__int64)v50);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(i - 8, v16);
      *v18 = v17;
    }
    *((_DWORD *)i - 1) = v5;
    v20 = 8LL * v5;
    v21 = v5 - 1;
    v22 = 0;
    memset(i, 0, v20);
    for ( j = *v44; ; j = *v44 )
    {
      v24 = v22;
      v25 = (unsigned int)v22 >> 5;
      if ( !j )
      {
LABEL_17:
        v26 = sub_4D6480(*(_QWORD *)(a1 + 24));
        v5 = *((_DWORD *)i - 1);
        v28 = v26 + 104;
        goto LABEL_18;
      }
      while ( (unsigned int)v25 >= *(_DWORD *)(j - 4) )
      {
        if ( !v21 )
          goto LABEL_17;
        ++v22;
        --v21;
        v24 = v22;
        v25 = (unsigned int)v22 >> 5;
      }
      if ( (*(_DWORD *)(j + 4 * v25) & (1 << v24)) != 0 )
      {
        v38 = *(unsigned int *)(a2[5] + 4 * v22);
        if ( (_DWORD)v38 == -1 )
        {
          v30 = (_QWORD *)sub_186B270(8u);
          *v30 = off_1C51F68;
          goto LABEL_24;
        }
        v39 = sub_15DB5C0(v43, v38, v7[v22]);
        v40 = (__int64 *)&i[8 * v21];
        if ( v39 )
          ++*(_DWORD *)(v39 + 8);
        v41 = *v40;
        if ( *v40 )
        {
          v33 = (*(_DWORD *)(v41 + 8))-- == 1;
          if ( v33 )
          {
            v47 = (_DWORD)i + 8 * v21;
            v46 = v39;
            sub_15D7BC0(v43, v41);
            v40 = (__int64 *)&i[8 * v21];
            v39 = v46;
          }
        }
        *v40 = v39;
      }
      if ( !v21 )
        goto LABEL_17;
      ++v22;
      --v21;
    }
  }
  v28 = sub_4D6480(*(_QWORD *)(a1 + 24)) + 104;
  i = nullptr;
LABEL_18:
  sub_157BE40((int)v50, v28, a3, v5, (int)i, v27, v42, v43, (int)v44, a3, v46, v47, v48, v49);
  v29 = sub_4C4AD0(*(_QWORD *)(a1 + 24), a2[8]);
  if ( v29 )
  {
    v30 = (_QWORD *)sub_186B270(0x10u);
    *v30 = &off_1C51F30;
    v30[1] = v29;
  }
  else
  {
    v30 = nullptr;
  }
  v31 = *(_QWORD *)v50;
  if ( *(_QWORD *)v50 )
  {
    v32 = v51;
    v33 = (*(_DWORD *)(*(_QWORD *)v50 + 8LL))-- == 1;
    if ( v33 )
      sub_15D7BC0(v32, v31);
  }
  if ( i )
  {
LABEL_24:
    v34 = i;
    v35 = &i[8 * *((unsigned int *)i - 1)];
    if ( i < v35 )
    {
      do
      {
        while ( 1 )
        {
          v36 = *(_QWORD *)v34;
          if ( *(_QWORD *)v34 )
          {
            v33 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v33 )
              break;
          }
          v34 += 8;
          if ( v34 >= v35 )
            goto LABEL_30;
        }
        v34 += 8;
        sub_15D7BC0(v43, v36);
      }
      while ( v34 < v35 );
    }
LABEL_30:
    sub_186B220(i - 8);
  }
  if ( v7 )
    sub_186B220(v7 - 1);
  return v30;
}

