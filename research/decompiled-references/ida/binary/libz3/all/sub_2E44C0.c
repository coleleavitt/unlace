__m128 *__fastcall sub_2E44C0(__m128 *a1, __int64 a2, __int64 *a3)
{
  __int64 (*v4)(void); // rax
  __int64 v5; // r13
  __int64 *v6; // rbp
  __int64 v7; // r15
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // r12
  __int64 v12; // r14
  int v13; // edi
  bool v14; // bl
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // eax
  bool v18; // zf
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // eax
  __int64 *v22; // rdx
  int v23; // edi
  __int64 v24; // rax
  __m128 *v25; // rcx
  __int64 v26; // rdi
  __int64 *v27; // rbx
  unsigned __int64 v28; // r12
  __int64 v29; // rsi
  _DWORD *v31; // rax
  unsigned int v32; // r12d
  size_t v33; // rsi
  unsigned int *v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rax
  __m128 *v37; // rcx
  char **exception; // r12
  __int64 v40; // [rsp+18h] [rbp-B0h] BYREF
  __m128 *v41; // [rsp+20h] [rbp-A8h]
  int *v42; // [rsp+28h] [rbp-A0h]
  int v43[2]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v44; // [rsp+48h] [rbp-80h]
  __int64 v45; // [rsp+50h] [rbp-78h]
  __int64 v46[2]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v47[11]; // [rsp+70h] [rbp-58h] BYREF

  v41 = a1;
  v4 = *(__int64 (**)(void))(**(_QWORD **)a2 + 72LL);
  if ( (char *)v4 == (char *)sub_2DD1A0 )
    v40 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
  else
    v40 = v4();
  v42 = v43;
  sub_16669D0(v43, v40);
  v5 = *a3;
  v45 = v40;
  if ( !v5 || (v6 = nullptr, v7 = v5 + 40LL * *(unsigned int *)(v5 - 4), v7 == v5) )
  {
    v23 = v43[0];
    v6 = nullptr;
    goto LABEL_24;
  }
  do
  {
    sub_2E4050(v46, a2, (unsigned __int64 *)(v5 + 32));
    v11 = v46[0];
    v12 = v46[1];
    if ( (*(_BYTE *)(v5 + 4) & 1) == 0 && *(_DWORD *)v5 == 1 )
    {
      if ( (*(_BYTE *)(v5 + 20) & 1) == 0 && *(_DWORD *)(v5 + 16) == 1 )
      {
        v16 = v46[0];
        if ( v46[0] )
          goto LABEL_14;
        v16 = 0;
        goto LABEL_45;
      }
LABEL_9:
      v13 = v44;
      v14 = 0;
      if ( !v44 )
        goto LABEL_38;
      goto LABEL_10;
    }
    if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
      goto LABEL_9;
    if ( *(_DWORD *)(v5 + 16) != 1 )
      goto LABEL_9;
    v31 = *(_DWORD **)(sub_15D1F10(v46[0]) + 24);
    if ( !v31 || *v31 != 5 )
      goto LABEL_9;
    v13 = v44;
    v14 = v31[1] == 1;
    if ( !v44 )
    {
LABEL_38:
      sub_16669E0(v42);
      v13 = v44;
    }
LABEL_10:
    sub_166A700(v13, v5, v14, v8, v9, v10);
    v15 = sub_15E1B70(v43[0]);
    v16 = v15;
    if ( v15 )
    {
      v17 = *(_DWORD *)(v15 + 8) + 1;
      *(_DWORD *)(v16 + 8) = v17;
      if ( v11 )
      {
        v18 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v18 )
          sub_15D7BC0(v12, v11);
LABEL_14:
        v17 = *(_DWORD *)(v16 + 8);
      }
      *(_DWORD *)(v16 + 8) = v17 + 1;
      if ( !v6 )
        goto LABEL_46;
      goto LABEL_16;
    }
    if ( v11 && (v18 = *(_DWORD *)(v11 + 8) == 1, --*(_DWORD *)(v11 + 8), v18) )
    {
      sub_15D7BC0(v12, v11);
      v16 = 0;
    }
    else
    {
      v16 = 0;
    }
LABEL_45:
    if ( !v6 )
    {
LABEL_46:
      v36 = (_QWORD *)sub_186B270(0x18u);
      v6 = v36 + 1;
      *v36 = 2;
      v21 = 1;
      v22 = v6;
      goto LABEL_18;
    }
LABEL_16:
    v19 = *((_DWORD *)v6 - 1);
    if ( v19 == *((_DWORD *)v6 - 2) )
    {
      v32 = (3 * v19 + 1) >> 1;
      v33 = 8 * v32 + 8;
      if ( 8 * v19 + 8 >= (unsigned int)v33 || v19 >= v32 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(v47, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v47);
        sub_233E40((__int64)v47);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v34 = (unsigned int *)sub_186B300(v6 - 1, v33);
      v35 = v34[1];
      v6 = (__int64 *)(v34 + 2);
      *v34 = v32;
      LODWORD(v34) = v35;
      v22 = &v6[v35];
      v21 = (_DWORD)v34 + 1;
    }
    else
    {
      v20 = v19;
      v21 = v19 + 1;
      v22 = &v6[v20];
    }
LABEL_18:
    *v22 = v16;
    *((_DWORD *)v6 - 1) = v21;
    if ( v16 )
    {
      v18 = (*(_DWORD *)(v16 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v12, v16);
    }
    v5 += 40;
  }
  while ( v7 != v5 );
  v23 = v43[0];
  if ( *((_DWORD *)v6 - 1) == 1 && !*(_WORD *)(*v6 + 4) )
  {
    v37 = v41;
    ++*(_DWORD *)(*v6 + 8);
    *v37 = _mm_loadh_ps((const double *)&v40);
    goto LABEL_27;
  }
LABEL_24:
  v24 = sub_15E1AF0(v23);
  v25 = v41;
  v26 = v40;
  v41->m128_u64[0] = v24;
  v25->m128_u64[1] = v26;
  if ( v24 )
    ++*(_DWORD *)(v24 + 8);
  if ( v6 )
  {
LABEL_27:
    v27 = v6;
    v28 = (unsigned __int64)&v6[*((unsigned int *)v6 - 1)];
    if ( (unsigned __int64)v6 < v28 )
    {
      do
      {
        while ( 1 )
        {
          v29 = *v27;
          if ( *v27 )
          {
            v18 = (*(_DWORD *)(v29 + 8))-- == 1;
            if ( v18 )
              break;
          }
          if ( (unsigned __int64)++v27 >= v28 )
            goto LABEL_33;
        }
        ++v27;
        sub_15D7BC0(v40, v29);
      }
      while ( (unsigned __int64)v27 < v28 );
    }
LABEL_33:
    sub_186B220(v6 - 1);
  }
  return v41;
}

