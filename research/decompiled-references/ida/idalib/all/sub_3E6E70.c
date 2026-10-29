__int64 __fastcall sub_3E6E70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i *v12; // r12
  __int64 v13; // rbx
  __m128i *v14; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __m128i *v17; // rbx
  __int64 *v18; // rdi
  __int64 v19; // rax
  __m128i *v20; // r12
  __int64 v21; // rbx
  __m128i *v22; // rbp
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __m128i *v25; // rbx
  __int64 *v26; // rdi
  void *v27; // rdi
  __int64 v28; // rbx
  char *v29; // rdx
  __m128i *v30; // rax
  __int64 v31; // rcx
  unsigned int v33; // eax
  unsigned int v34; // r14d
  char *v35; // rbx
  __int128 v36; // kr00_16
  char *v37; // r12
  unsigned __int64 v38; // rdx
  unsigned int v39; // [rsp+4h] [rbp-8Ch]
  __int128 v40; // [rsp+8h] [rbp-88h] BYREF
  void *ptr; // [rsp+18h] [rbp-78h] BYREF
  __int128 v42; // [rsp+20h] [rbp-70h]
  void *src; // [rsp+38h] [rbp-58h] BYREF
  __int128 v44; // [rsp+40h] [rbp-50h]
  unsigned __int64 v45; // [rsp+50h] [rbp-40h]

  v4 = *(int *)(a1 + 8);
  v45 = __readfsqword(0x28u);
  v42 = 0;
  ptr = nullptr;
  v6 = switch_dbctx(v4);
  sub_3E5300(a1, v6, (__int64 *)&ptr, a3);
  v7 = *(int *)(a2 + 8);
  src = nullptr;
  v44 = 0;
  v8 = switch_dbctx(v7);
  sub_3E5300(a2, v8, (__int64 *)&src, a3);
  if ( *(_BYTE *)(a1 + 72) == 100 )
  {
    v33 = *(_DWORD *)(a1 + 12);
    v34 = *(_DWORD *)(a2 + 12);
    v40 = 0;
    v39 = v33;
    getinf_buf(26, &v40, 16);
    v35 = (char *)src;
    v36 = v40;
    v37 = (char *)src + 24 * v44;
    if ( src != v37 )
    {
      do
      {
        v38 = *(_QWORD *)v35;
        if ( *(_QWORD *)v35 >= (unsigned __int64)v36 && v38 < *((_QWORD *)&v36 + 1) )
          (*(void (__fastcall **)(_QWORD, char *, unsigned __int64, _QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32)
                                                                                           + 24LL))(
            *(_QWORD *)(a1 + 32),
            v35,
            v38,
            v34,
            v39,
            0);
        v35 += 24;
      }
      while ( v37 != v35 );
    }
  }
  v12 = (__m128i *)ptr;
  v13 = 24 * v42;
  v14 = (__m128i *)((char *)ptr + 24 * v42);
  if ( ptr != v14 )
  {
    v15 = 0xAAAAAAAAAAAAAAABLL * (v13 >> 3);
    if ( v15 )
    {
      _BitScanReverse64(&v16, v15);
      sub_3E6B30((__int64)ptr, (__m128i *)((char *)ptr + 24 * v42), 2LL * (int)v16, v9, v10, v11);
      if ( v13 > 384 )
      {
        v17 = v12 + 24;
        sub_3E1390(v12, v12 + 24);
        do
        {
          v18 = (__int64 *)v17;
          v17 = (__m128i *)((char *)v17 + 24);
          sub_3E1320(v18);
        }
        while ( v14 != v17 );
        goto LABEL_7;
      }
    }
    else
    {
      sub_3E6B30((__int64)ptr, (__m128i *)((char *)ptr + 24 * v42), -2, v9, v10, v11);
    }
    sub_3E1390(v12, v14);
  }
LABEL_7:
  v19 = v44;
  v20 = (__m128i *)src;
  v21 = 24 * v44;
  v22 = (__m128i *)((char *)src + 24 * v44);
  if ( src == v22 )
    goto LABEL_13;
  v23 = 0xAAAAAAAAAAAAAAABLL * (v21 >> 3);
  if ( !v23 )
  {
    sub_3E6B30((__int64)src, (__m128i *)((char *)src + 24 * v44), -2, v9, v10, v11);
    goto LABEL_24;
  }
  _BitScanReverse64(&v24, v23);
  sub_3E6B30((__int64)src, (__m128i *)((char *)src + 24 * v44), 2LL * (int)v24, v9, v10, v11);
  if ( v21 <= 384 )
  {
LABEL_24:
    sub_3E1390(v20, v22);
    v22 = (__m128i *)src;
    v19 = v44;
    goto LABEL_13;
  }
  v25 = v20 + 24;
  sub_3E1390(v20, v20 + 24);
  do
  {
    v26 = (__int64 *)v25;
    v25 = (__m128i *)((char *)v25 + 24);
    sub_3E1320(v26);
  }
  while ( v22 != v25 );
  v22 = (__m128i *)src;
  v19 = v44;
LABEL_13:
  v27 = ptr;
  v28 = 1;
  if ( (_QWORD)v42 == v19 )
  {
    if ( v19 )
    {
      v29 = (char *)ptr;
      v30 = v22;
      v31 = 0;
      while ( v29[8] == v30->m128i_i8[8] && *(_QWORD *)v29 == v30->m128i_i64[0] && v29[16] == v30[1].m128i_i8[0] )
      {
        ++v31;
        v29 += 24;
        v30 = (__m128i *)((char *)v30 + 24);
        if ( (_QWORD)v42 == v31 )
          goto LABEL_30;
      }
      v28 = 1;
    }
    else
    {
LABEL_30:
      v28 = 0;
    }
  }
  if ( v22 )
  {
    *(_QWORD *)&v44 = 0;
    qfree(v22);
    v27 = ptr;
  }
  if ( v27 )
  {
    *(_QWORD *)&v42 = 0;
    qfree(v27);
  }
  return v28;
}
