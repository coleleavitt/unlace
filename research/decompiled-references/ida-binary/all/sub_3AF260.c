__int64 __fastcall type_listing_t__::vfunc_5(
        __m128i *this,
        const char *a2,
        __int64 a3,
        __int64 a4,
        double a5,
        double a6)
{
  __m128i *v6; // r12
  const char *v7; // rbp
  int v8; // eax
  __int64 *v10; // rax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 i; // rbx
  __int64 v15; // rbx
  __int64 v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r15
  int v19; // eax
  __int64 v20; // rbx
  char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // [rsp+7h] [rbp-41h]
  __int64 v25; // [rsp+8h] [rbp-40h]

  v6 = this;
  v7 = a2;
  v8 = *((unsigned __int16 *)a2 + 4);
  if ( v8 == 2004 )
  {
LABEL_15:
    v16 = *((_QWORD *)a2 + 3);
    v24 = *(_BYTE *)(*((_QWORD *)this + 125) + 56LL);
    v25 = *((_QWORD *)a2 + 2);
    if ( v16 )
    {
      v17 = *((_QWORD *)a2 + 2);
      v18 = 0;
      while ( !*(_QWORD *)(v17 + 8) || strcmp(*(const char **)v17, "c-syntax") )
      {
        ++v18;
        v17 += 40;
        if ( v16 == v18 )
          goto LABEL_25;
      }
    }
    else
    {
LABEL_25:
      a3 = v16 + 1;
      if ( *((_QWORD *)v7 + 4) < (unsigned __int64)(v16 + 1) )
      {
        v22 = qvector_reserve(v7 + 16, v25, a3, 40);
        v16 = *((_QWORD *)v7 + 3);
        v25 = v22;
        *((_QWORD *)v7 + 2) = v22;
      }
      a4 = v25;
      a5 = 0.0;
      v17 = v25 + 40 * v16;
      *(_QWORD *)v17 = 0;
      *(_OWORD *)(v17 + 8) = 0;
      *(_DWORD *)(v17 + 24) = 0;
      *(_QWORD *)(v17 + 32) = 0;
      ++*((_QWORD *)v7 + 3);
      v21 = *(char **)v17;
      if ( *(_QWORD *)(v17 + 16) <= 8u )
      {
        v23 = qvector_reserve(v17, v21, 9, 1);
        *(_QWORD *)v17 = v23;
        v21 = (char *)v23;
      }
      *(_QWORD *)(v17 + 8) = 9;
      *(_QWORD *)v21 = 0x7861746E79732D63LL;
      *(_BYTE *)(*(_QWORD *)v17 + 8LL) = 0;
    }
    v19 = *(_DWORD *)(v17 + 24);
    v20 = v17 + 24;
    if ( v19 )
      jvalue_t_clear(v20);
    *(_DWORD *)v20 = 5;
    *(_BYTE *)(v20 + 8) = v24;
    return watchview_t__::vfunc_5(v6, (__int64)v7, a3, a4, a5, a6);
  }
  if ( v8 != 2005 )
    return watchview_t__::vfunc_5(v6, (__int64)v7, a3, a4, a5, a6);
  v10 = *((__int64 **)a2 + 2);
  v11 = v10[1];
  if ( !v11 )
    return watchview_t__::vfunc_5(v6, (__int64)v7, a3, a4, a5, a6);
  v12 = *v10;
  v13 = 0;
  for ( i = *v10; ; i += 40 )
  {
    if ( *(_QWORD *)(i + 8) )
    {
      a2 = "c-syntax";
      if ( !strcmp(*(const char **)i, "c-syntax") )
        break;
    }
    if ( v11 == ++v13 )
      return watchview_t__::vfunc_5(v6, (__int64)v7, a3, a4, a5, a6);
  }
  v15 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v12 + 8) )
    {
      a2 = "c-syntax";
      if ( !strcmp(*(const char **)v12, "c-syntax") )
        break;
    }
    ++v15;
    v12 += 40;
    if ( v11 == v15 )
    {
      if ( !under_debugger )
      {
        this = (__m128i *)(elf_gnu_hash_bucket + 433);
        interr(1289, "c-syntax", a3, a4, a5);
        goto LABEL_15;
      }
LABEL_32:
      BUG();
    }
  }
  if ( *(_DWORD *)(v12 + 24) == 5 )
  {
    a3 = *(unsigned __int8 *)(v12 + 32);
    *(_BYTE *)(*((_QWORD *)this + 125) + 56LL) = a3;
    return watchview_t__::vfunc_5(v6, (__int64)v7, a3, a4, a5, a6);
  }
  if ( under_debugger )
    goto LABEL_32;
  interr(1281, "c-syntax", a3, a4, a5);
  return sub_3AF4B0();
}
