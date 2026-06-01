__int64 *__fastcall sub_1B9D520(__int64 *a1, __int64 *a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // rax
  void *v15; // r12
  __int64 v16; // rax
  void *v17; // rdx
  _QWORD *v18; // rax
  char v19; // cl
  unsigned __int64 i; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // edx
  const __m128i *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 *result; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned int v37; // r13d
  bool v38; // r8
  bool v39; // r13
  unsigned int v40; // [rsp+0h] [rbp-1D8h]
  __int64 *v41; // [rsp+0h] [rbp-1D8h]
  __int64 *v42; // [rsp+0h] [rbp-1D8h]
  __int64 *v43; // [rsp+0h] [rbp-1D8h]
  _DWORD *v44; // [rsp+8h] [rbp-1D0h]
  __int64 v45; // [rsp+10h] [rbp-1C8h]
  bool v46; // [rsp+18h] [rbp-1C0h]
  unsigned int v47; // [rsp+24h] [rbp-1B4h]
  __m128i v48[2]; // [rsp+30h] [rbp-1A8h] BYREF
  __m128i v49; // [rsp+50h] [rbp-188h] BYREF
  void *v50[2]; // [rsp+60h] [rbp-178h]
  __int128 v51; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  void *v53[2]; // [rsp+90h] [rbp-148h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-138h]
  int v55; // [rsp+190h] [rbp-48h]
  int v56; // [rsp+194h] [rbp-44h]

  v6 = a2[2];
  if ( v6 && !(unsigned __int8)sub_BFE300(v6) )
  {
    v33 = sub_1B7CAD0(a1, (unsigned __int16 *)a2[2], a3, a4, v7, v8, v9);
    if ( v33 == 1 )
      return (_QWORD *)(&dword_0 + 1);
    v34 = *a2;
    v35 = *((_DWORD *)a2 + 1);
    v49.m128i_i8[0] = 0;
    ptr[0] = nullptr;
    v36 = sub_19B0570(
            *a1,
            0,
            v33 & 0xFFFFFFFFFFFFFFFELL,
            v35,
            (v34 & 0x80000) == 0 ? 26 : 37,
            (__int64 *)ptr,
            a3,
            a4,
            &v49);
    if ( v36 == 1 )
      return (_QWORD *)(&dword_0 + 1);
    v15 = ptr[0];
    v44 = (_DWORD *)(v36 & 0xFFFFFFFFFFFFFFFELL);
    v13 = *(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  else
  {
    v10 = a2[3];
    v13 = (__int64)sub_1B90FD0(a1, v10, a3, a4);
    v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) != 42 )
      v14 = sub_F63050(v14, v10, v11, v12);
    v44 = nullptr;
    v15 = *(void **)(v14 + 32);
  }
  v16 = a2[4];
  if ( v16 )
  {
    v17 = (void *)a2[5];
    ptr[0] = (void *)a2[4];
    ptr[1] = v17;
    v18 = (_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v18 )
    {
      ptr[0] = v18;
      v19 = 0;
      for ( i = v18[1] & 0xFFFFFFFFFFFFFFF8LL; i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
      {
        v18 = (_QWORD *)i;
        v19 = 1;
      }
      if ( v19 )
        ptr[0] = v18;
    }
    sub_E90530((__int64 *)ptr);
  }
  if ( (*a2 & 0x200000) != 0 )
  {
    v21 = 16LL * ((*a2 & 0x100000) != 0) + 72;
    if ( (((unsigned __int64)*a2 >> 16) & 0x10) != 0 && *((_DWORD *)a2 + 18) )
      v21 += 32LL * *((unsigned int *)a2 + 21);
    v22 = *(__int64 *)((char *)a2 + v21);
  }
  else
  {
    v22 = 0;
  }
  v23 = sub_1B04070((__int64)a1, v22);
  v24 = a2[4];
  v25 = v23;
  if ( v24 )
  {
    v24 = sub_1B979C0(a1, a2[4], (void *)a2[5], (__int64)v15, v23);
    if ( v24 )
    {
      v45 = v26;
      goto LABEL_19;
    }
    return (_QWORD *)(&dword_0 + 1);
  }
  v45 = 0;
LABEL_19:
  v40 = 0;
  if ( (*a2 & 0x100000) != 0 )
    v40 = *((_DWORD *)a2 + 20);
  sub_1B91AC0(v48, a1, (const __m128i *)a2 + 3, a3, a4);
  if ( !v48[0].m128i_i64[0] )
    return (_QWORD *)(&dword_0 + 1);
  v27 = *a2;
  if ( (*a2 & 0x100000) != 0 && *((_DWORD *)a2 + 18) )
  {
    v28 = *((_DWORD *)a2 + 19);
    v55 = *((_DWORD *)a2 + 18);
    v29 = nullptr;
    v56 = v28;
    v30 = *((unsigned int *)a2 + 21);
    ptr[0] = v53;
    ptr[1] = (void *)0x800000000LL;
    v31 = 2 * v30;
    if ( (v27 & 0x100000) != 0 )
      v29 = (const __m128i *)(a2 + 11);
    if ( (unsigned __int8)sub_1B997D0(a1, v29, &v29[v31], (__int64)ptr) )
    {
      result = (_QWORD *)(&dword_0 + 1);
    }
    else
    {
      v47 = *((_DWORD *)a2 + 1);
      v38 = (*a2 & 0x80000) != 0;
      v49 = 0;
      *(_OWORD *)v50 = 0;
      v39 = v38;
      v51 = 0;
      sub_15AB8B0((__int64)&v49, v24, v45);
      result = sub_19CC2F0((__m128 *)*a1, v44, v13, v47, v39, &v49, v40, v25, v48, (__int64)ptr, 0, nullptr);
      if ( HIDWORD(v50[1]) )
      {
        v43 = result;
        free(v50[0]);
        result = v43;
      }
    }
    if ( ptr[0] != v53 )
    {
      v41 = result;
      free(ptr[0]);
      return v41;
    }
  }
  else
  {
    *(_OWORD *)ptr = 0;
    v37 = *((_DWORD *)a2 + 1);
    v46 = (v27 & 0x80000) != 0;
    *(_OWORD *)v53 = 0;
    v54 = 0;
    sub_15AB8B0((__int64)ptr, v24, v45);
    result = sub_19CC2F0((__m128 *)*a1, v44, v13, v37, v46, (__m128i *)ptr, v40, v25, v48, 0, 0, nullptr);
    if ( HIDWORD(v53[1]) )
    {
      v42 = result;
      free(v53[0]);
      return v42;
    }
  }
  return result;
}
