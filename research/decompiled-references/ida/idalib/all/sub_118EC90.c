__int64 __fastcall sub_118EC90(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  const char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  char *v11; // r14
  _BYTE *v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int16 *v17; // rdi
  __int64 result; // rax
  size_t v19; // rdx
  const char *v20; // [rsp+8h] [rbp-80h] BYREF
  void *dest; // [rsp+10h] [rbp-78h] BYREF
  __m128 v22; // [rsp+18h] [rbp-70h] BYREF
  void *src; // [rsp+30h] [rbp-58h] BYREF
  size_t n; // [rsp+38h] [rbp-50h]
  _QWORD v25[2]; // [rsp+40h] [rbp-48h] BYREF
  __int16 v26; // [rsp+50h] [rbp-38h]

  v4 = (_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
  v5 = *(unsigned int *)(a3 + 8);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    sub_2237220(a3, a3 + 16, v5 + 1, 8);
    v5 = *(unsigned int *)(a3 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v5) = "-target-abi";
  v6 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a3 + 8);
  v7 = sub_114B080(*(__int64 **)(v6 + 8), a2, v4);
  v8 = *(unsigned int *)(a3 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
  {
    v20 = v7;
    sub_2237220(a3, a3 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a3 + 8);
    v7 = v20;
  }
  *(_QWORD *)(*(_QWORD *)a3 + 8 * v8) = v7;
  ++*(_DWORD *)(a3 + 8);
  v9 = sub_10DCD30(a2, 0xB64u);
  if ( v9 )
  {
    v10 = -1;
    v11 = **(char ***)(v9 + 48);
    dest = &v22.m128_u16[4];
    if ( v11 )
      v10 = (__int64)&v11[strlen(v11)];
    sub_11892E0(&dest, v11, v10);
    sub_114DD40(&src, (__int64)&dest, (__int64)v4);
    v12 = dest;
    if ( src == v25 )
    {
      v19 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v25[0];
        else
          memcpy(dest, src, n);
        v19 = n;
        v12 = dest;
      }
      v22.m128_u64[0] = v19;
      v12[v19] = 0;
      v12 = src;
      goto LABEL_12;
    }
    if ( dest == &v22.m128_u16[4] )
    {
      v20 = (const char *)v25[0];
      dest = src;
      v22 = _mm_loadh_ps((const double *)&v20);
    }
    else
    {
      v20 = (const char *)v25[0];
      v13 = v22.m128_u64[1];
      dest = src;
      v22 = _mm_loadh_ps((const double *)&v20);
      if ( v12 )
      {
        src = v12;
        v25[0] = v13;
LABEL_12:
        n = 0;
        *v12 = 0;
        if ( src != v25 )
          operator delete(src);
        v14 = *(unsigned int *)(a3 + 8);
        if ( v14 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          sub_2237220(a3, a3 + 16, v14 + 1, 8);
          v14 = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v14) = "-tune-cpu";
        ++*(_DWORD *)(a3 + 8);
        v26 = 260;
        src = &dest;
        v15 = sub_10DA6C0(a2, (__int64)&src);
        v16 = *(unsigned int *)(a3 + 8);
        if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          v20 = (const char *)v15;
          sub_2237220(a3, a3 + 16, v16 + 1, 8);
          v16 = *(unsigned int *)(a3 + 8);
          v15 = (__int64)v20;
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v16) = v15;
        v17 = (unsigned __int16 *)dest;
        ++*(_DWORD *)(a3 + 8);
        if ( v17 != &v22.m128_u16[4] )
          operator delete(v17);
        goto LABEL_20;
      }
    }
    v12 = v25;
    src = v25;
    goto LABEL_12;
  }
LABEL_20:
  result = sub_10DE660(a2, 0x8CEu, 0x9DDu);
  if ( result )
  {
    result = sub_21B9810(result, 2254);
    if ( (_BYTE)result )
    {
      sub_10DC5D0(a3, (__int64)"-mllvm");
      return sub_10DC5D0(a3, (__int64)"-loongarch-annotate-tablejump");
    }
  }
  return result;
}
