__int64 __fastcall sub_71D9D0(__int64 a1, unsigned __int64 *a2, __int64 a3, void **a4, __int64 a5)
{
  unsigned __int64 v9; // rdx
  __int64 v10; // r12
  unsigned __int64 v11; // r14
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __m128i v18; // xmm0
  void (__fastcall ***v19)(void *); // rbx
  bool v20; // zf
  __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // rbp
  __int64 v24; // rsi
  size_t v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rdx
  int v29; // eax
  __int64 v30; // rsi
  __int64 v31; // rbx
  __int64 v32; // rdx
  int v33; // eax
  void **v34; // rsi
  __int64 v35; // rax
  int v36; // eax
  void (__fastcall ***v37)(void *); // rbx
  void (***v38)(void); // rdi
  unsigned int v39; // ebx
  __int64 v40; // rsi
  __int64 v41; // rdi
  _DWORD *v43; // rax
  char **exception; // rbx
  _BYTE *v45; // rdi
  __m128i v46; // xmm0
  size_t v47; // rdx
  __m128i v48; // xmm0
  size_t v49; // rdx
  int v50; // [rsp+1Ch] [rbp-9Ch]
  int v51[2]; // [rsp+20h] [rbp-98h] BYREF
  int v52[2]; // [rsp+28h] [rbp-90h]
  int v53[4]; // [rsp+30h] [rbp-88h] BYREF
  void *dest; // [rsp+40h] [rbp-78h] BYREF
  __m128i v55; // [rsp+48h] [rbp-70h] BYREF
  __int64 v56; // [rsp+60h] [rbp-58h] BYREF
  __m128i n; // [rsp+68h] [rbp-50h] BYREF

  v9 = a2[1];
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *a2;
  if ( v9 )
    v12 = *(unsigned int *)(v9 - 4);
  else
    v12 = 0;
  v13 = sub_15EC1C0(v11, v12);
  v18 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v13, (__m128i)v11);
  *(__m128i *)v53 = v18;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  sub_719980(a1, (__int64 *)v53, v14, v15, v16, v17);
  *(_QWORD *)(a1 + 464) = a5;
  v19 = *(void (__fastcall ****)(void *))(a1 + 480);
  *(_QWORD *)(a1 + 456) = a3;
  *(_BYTE *)(a1 + 472) = 0;
  if ( v19 )
  {
    v20 = (*((_DWORD *)v19 + 4))-- == 1;
    if ( v20 )
    {
      (**v19)(v19);
      sub_186B220(v19);
    }
  }
  v21 = *(_QWORD *)v53;
  *(_QWORD *)(a1 + 480) = 0;
  v56 = -1;
  *(_QWORD *)v51 = v10;
  *(_QWORD *)v52 = 0;
  sub_715950((_QWORD *)(a1 + 144), v21, (unsigned int *)&v56, (__int64)v51);
  v22 = *(_QWORD *)v51;
  v23 = *(_QWORD *)v52;
  sub_714210((__m128i *)&v56, (const __m128i *)(a1 + 144), *(__int64 *)v53);
  v24 = *(_QWORD *)v53;
  *(_QWORD *)v53 = v56;
  if ( v24 && (v25 = n.m128i_i64[0], v20 = *(_DWORD *)(v24 + 8) == 1, --*(_DWORD *)(v24 + 8), v20) )
  {
    sub_15D7BC0(v25, v24);
    if ( v23 )
      goto LABEL_11;
  }
  else if ( v23 )
  {
LABEL_11:
    v26 = *(unsigned int *)(v23 - 4);
    goto LABEL_12;
  }
  v26 = 0;
LABEL_12:
  v27 = sub_15EC1C0(v22, v26);
  v28 = *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL);
  if ( v27 )
  {
    v29 = *(_DWORD *)(v27 + 8);
    *(_DWORD *)(v27 + 8) = v29 + 1;
    if ( v28 != v27 )
    {
      sub_E5EBF0(*(_QWORD *)(a1 + 120), v27);
      v29 = *(_DWORD *)(v27 + 8) - 1;
    }
    *(_DWORD *)(v27 + 8) = v29;
    if ( !v29 )
    {
      sub_15D7BC0(v22, v27);
      if ( v23 )
        goto LABEL_17;
      goto LABEL_47;
    }
  }
  else if ( v28 )
  {
    sub_E5EBF0(*(_QWORD *)(a1 + 120), 0);
  }
  if ( v23 )
  {
LABEL_17:
    v30 = *(unsigned int *)(v23 - 4);
    goto LABEL_18;
  }
LABEL_47:
  v30 = 0;
LABEL_18:
  v31 = sub_15EC1C0(v22, v30);
  v32 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 856LL);
  if ( v31 )
  {
    v33 = *(_DWORD *)(v31 + 8);
    *(_DWORD *)(v31 + 8) = v33 + 1;
    if ( v32 != v31 )
    {
      sub_E5EBF0(*(_QWORD *)(a1 + 80), v31);
      v33 = *(_DWORD *)(v31 + 8) - 1;
    }
    *(_DWORD *)(v31 + 8) = v33;
    if ( !v33 )
      sub_15D7BC0(v22, v31);
  }
  else if ( v32 )
  {
    sub_E5EBF0(*(_QWORD *)(a1 + 80), 0);
  }
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 104) + 856LL) != *(_QWORD *)v53 )
    sub_E5EBF0(*(_QWORD *)(a1 + 120), *(_QWORD *)v53);
  v34 = nullptr;
  v35 = sub_15E1A70(*(_QWORD *)(a1 + 16));
  if ( v35 != *(_QWORD *)(*(_QWORD *)(a1 + 64) + 856LL) )
  {
    v34 = (void **)v35;
    sub_E5EBF0(*(_QWORD *)(a1 + 80), v35);
  }
  v36 = sub_71AF20((void **)a1, v34, *(double *)v18.m128i_i64);
  v37 = *(void (__fastcall ****)(void *))(a1 + 408);
  if ( v37 )
    ++*((_DWORD *)v37 + 4);
  v38 = (void (***)(void))*a4;
  if ( *a4 )
  {
    v20 = (*((_DWORD *)v38 + 4))-- == 1;
    if ( v20 )
    {
      v50 = v36;
      (**v38)();
      sub_186B220(v38);
      v36 = v50;
    }
  }
  *a4 = v37;
  if ( !v36 )
  {
    (*(void (__fastcall **)(void **))(**(_QWORD **)(a1 + 120) + 48LL))(&dest);
    if ( v55.m128i_i64[0] != 2 || *(_WORD *)dest != 27503 )
    {
LABEL_57:
      exception = (char **)__cxa_allocate_exception(0x28u);
      *exception = (char *)off_1C63670;
      sub_2333C0(exception + 1, &dest);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'tactic_exception, (void (*)(void *))sub_230EA0);
    }
    (*(void (__fastcall **)(__int64 *))(**(_QWORD **)(a1 + 80) + 48LL))(&v56);
    v45 = dest;
    if ( dest == &v55.m128i_u64[1] )
    {
      if ( (unsigned __int64 *)v56 != &n.m128i_u64[1] )
      {
        v48 = _mm_loadu_si128(&n);
        dest = (void *)v56;
        v55 = v48;
        goto LABEL_66;
      }
    }
    else if ( (unsigned __int64 *)v56 != &n.m128i_u64[1] )
    {
      v46 = _mm_loadu_si128(&n);
      v47 = v55.m128i_u64[1];
      dest = (void *)v56;
      v55 = v46;
      if ( v45 )
      {
        v56 = (__int64)v45;
        n.m128i_i64[1] = v47;
LABEL_63:
        n.m128i_i64[0] = 0;
        *(_BYTE *)v56 = 0;
        sub_233E40((__int64)&v56);
        goto LABEL_57;
      }
LABEL_66:
      v56 = (__int64)&n.m128i_i64[1];
      goto LABEL_63;
    }
    v49 = n.m128i_i64[0];
    if ( n.m128i_i64[0] )
    {
      if ( n.m128i_i64[0] == 1 )
        *(_BYTE *)dest = n.m128i_i8[8];
      else
        memcpy(dest, &n.m128i_u64[1], n.m128i_u64[0]);
      v45 = dest;
      v49 = n.m128i_i64[0];
    }
    v55.m128i_i64[0] = v49;
    v45[v49] = 0;
    goto LABEL_63;
  }
  if ( v36 == 1 )
  {
    sub_1872CE0("");
    sub_1873130(114, 1408);
  }
  if ( *(_BYTE *)(a1 + 472) )
  {
    v43 = *(_DWORD **)(a1 + 480);
    if ( v43 )
      ++v43[4];
    if ( v37 )
    {
      v20 = (*((_DWORD *)v37 + 4))-- == 1;
      if ( v20 )
      {
        (**v37)(v37);
        sub_186B220(v37);
        v43 = *(_DWORD **)(a1 + 480);
      }
    }
    *a4 = v43;
    v39 = 1;
  }
  else
  {
    v39 = -1;
  }
  v40 = *(_QWORD *)v53;
  if ( *(_QWORD *)v53 )
  {
    v41 = *(_QWORD *)&v53[2];
    v20 = (*(_DWORD *)(*(_QWORD *)v53 + 8LL))-- == 1;
    if ( v20 )
      sub_15D7BC0(v41, v40);
  }
  sub_2334C0((__int64 *)v51);
  return v39;
}

