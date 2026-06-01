__int64 __fastcall sub_115D530(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  _QWORD *v10; // rbp
  __int64 v11; // rax
  int v12; // edx
  __int64 v14; // r14
  __int64 v15; // rax
  const char **v16; // rax
  __int64 v17; // rbp
  char *v18; // rbx
  const char *v19; // rdi
  size_t v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _BYTE *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rbx
  __m128i *v27; // rdi
  int v28; // eax
  __int64 v29; // rax
  void *v30; // [rsp+0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+8h] [rbp-40h]
  __m128i v32[3]; // [rsp+10h] [rbp-38h] BYREF

  LODWORD(v30) = 2323;
  v7 = sub_21B6DA0(a3, &v30, 1);
  v8 = *(_QWORD *)(a3 + 8);
  v9 = (_QWORD *)(v8 + 8LL * (unsigned int)v7);
  v10 = (_QWORD *)(v8 + 8 * HIDWORD(v7));
  if ( v9 == v10 )
    goto LABEL_5;
  while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 2323) )
  {
    if ( v10 == ++v9 )
      goto LABEL_5;
  }
  if ( v10 == v9 )
  {
LABEL_5:
    v11 = a1 + 16;
    if ( *(_DWORD *)(a4 + 32) != 29 || (v12 = *(_DWORD *)(a4 + 44), v12 != 7) && v12 != 13 )
    {
      *(_QWORD *)a1 = v11;
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 16) = 0;
      return a1;
    }
    *(_QWORD *)a1 = v11;
    strcpy((char *)(a1 + 16), "v9");
    *(_QWORD *)(a1 + 8) = 2;
    return a1;
  }
  do
  {
    v14 = *v9;
    v15 = *(_QWORD *)(*v9 + 16LL);
    if ( !v15 )
      v15 = *v9;
    ++v9;
    *(_BYTE *)(v15 + 44) |= 1u;
    if ( v9 == v10 )
      break;
    while ( !*v9 || !(unsigned __int8)sub_21B9810(*v9, 2323) )
    {
      if ( v10 == ++v9 )
        goto LABEL_16;
    }
  }
  while ( v10 != v9 );
LABEL_16:
  v16 = *(const char ***)(v14 + 48);
  v17 = a1 + 16;
  v18 = (char *)*v16;
  if ( !*v16 )
  {
    v20 = 0;
LABEL_28:
    *(_QWORD *)a1 = v17;
    sub_115C550((_QWORD *)a1, v18, (__int64)&v18[v20]);
    return a1;
  }
  v19 = *v16;
  v20 = strlen(*v16);
  if ( v20 != 6 || *(_DWORD *)v18 != 1769234798 || *((_WORD *)v18 + 2) != 25974 )
    goto LABEL_28;
  v24 = (_BYTE *)sub_22A33B0(v19, 2323, v21, v22, v23);
  v30 = v32;
  sub_115C550(&v30, v24, (__int64)&v24[v25]);
  v26 = v31;
  v27 = (__m128i *)v30;
  if ( v31 )
  {
    v28 = sub_9B4AA0((__int64)&v30, "generic");
    v27 = (__m128i *)v30;
    if ( v28 )
    {
      *(_QWORD *)a1 = v17;
      if ( v27 == v32 )
      {
        *(__m128i *)(a1 + 16) = _mm_load_si128(v32);
      }
      else
      {
        v29 = v32[0].m128i_i64[0];
        *(_QWORD *)a1 = v27;
        *(_QWORD *)(a1 + 16) = v29;
      }
      *(_QWORD *)(a1 + 8) = v26;
      return a1;
    }
  }
  *(_QWORD *)a1 = v17;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  if ( v27 == v32 )
    return a1;
  operator delete(v27);
  return a1;
}
