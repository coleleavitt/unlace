__int64 *__fastcall sub_1D03DC0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
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
  void *v15; // r13
  __int64 v16; // rax
  void *v17; // rdx
  _QWORD *v18; // rax
  char v19; // cl
  unsigned __int64 i; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // eax
  const __m128i *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 *result; // rax
  __int64 v33; // rax
  __int64 v34; // rdx
  unsigned int v35; // ecx
  __int64 v36; // rax
  unsigned int v37; // r15d
  __int64 v38; // rax
  unsigned __int64 v39; // r8
  unsigned int v40; // ecx
  __int64 v41; // r15
  unsigned __int16 *v42; // [rsp+8h] [rbp-1D0h]
  __int64 *v43; // [rsp+8h] [rbp-1D0h]
  __int64 *v44; // [rsp+8h] [rbp-1D0h]
  __int64 *v45; // [rsp+8h] [rbp-1D0h]
  unsigned int v46; // [rsp+10h] [rbp-1C8h]
  unsigned __int16 *v47; // [rsp+18h] [rbp-1C0h]
  __int64 v48; // [rsp+20h] [rbp-1B8h]
  bool v49; // [rsp+2Ch] [rbp-1ACh]
  unsigned int v50; // [rsp+2Ch] [rbp-1ACh]
  __m128i v51[2]; // [rsp+30h] [rbp-1A8h] BYREF
  __m128i v52; // [rsp+50h] [rbp-188h] BYREF
  void *v53[2]; // [rsp+60h] [rbp-178h]
  __int128 v54; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  void *v56[2]; // [rsp+90h] [rbp-148h] BYREF
  __int128 v57; // [rsp+A0h] [rbp-138h]
  int v58; // [rsp+190h] [rbp-48h]
  int v59; // [rsp+194h] [rbp-44h]

  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 && !(unsigned __int8)sub_BFE300(v6) )
  {
    v47 = *(unsigned __int16 **)(a2 + 16);
    v33 = sub_1CE88F0(a1, v47, a3, a4, v7, v8, v9);
    if ( v33 == 1 )
      return (_QWORD *)(&dword_0 + 1);
    v34 = *(_QWORD *)a2;
    v35 = *(_DWORD *)(a2 + 4);
    v52.m128i_i8[0] = 0;
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
            &v52);
    if ( v36 == 1 )
      return (_QWORD *)(&dword_0 + 1);
    v15 = ptr[0];
    v42 = (unsigned __int16 *)(v36 & 0xFFFFFFFFFFFFFFFELL);
    v13 = *(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 24);
    v13 = sub_1CF6840((unsigned int *)a1, v10, a3, a4);
    v14 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) != 42 )
      v14 = sub_F63050(v14, v10, v11, v12);
    v42 = nullptr;
    v15 = *(void **)(v14 + 32);
    v47 = nullptr;
  }
  v16 = *(_QWORD *)(a2 + 32);
  if ( v16 )
  {
    v17 = *(void **)(a2 + 40);
    ptr[0] = *(void **)(a2 + 32);
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
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
  {
    v21 = 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 72;
    if ( ((*(_QWORD *)a2 >> 16) & 0x10) != 0 && *(_DWORD *)(a2 + 72) )
      v21 += 32LL * *(unsigned int *)(a2 + 84);
    v22 = *(_QWORD *)(a2 + v21);
  }
  else
  {
    v22 = 0;
  }
  v23 = sub_1CB9120((__int64)a1, v22);
  v24 = *(_QWORD *)(a2 + 32);
  v25 = v23;
  if ( v24 )
  {
    v24 = sub_1CFE3D0((__int64)a1, *(_QWORD *)(a2 + 32), *(void **)(a2 + 40), (__int64)v15, v23);
    if ( v24 )
    {
      v48 = v26;
      goto LABEL_19;
    }
    return (_QWORD *)(&dword_0 + 1);
  }
  v48 = 0;
LABEL_19:
  v46 = 0;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
    v46 = *(_DWORD *)(a2 + 80);
  sub_1CF74E0(v51, (__int64)a1, (const __m128i *)(a2 + 48), a3, a4);
  if ( !v51[0].m128i_i64[0] )
    return (_QWORD *)(&dword_0 + 1);
  v27 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 && *(_DWORD *)(a2 + 72) )
  {
    v28 = *(_DWORD *)(a2 + 76);
    v29 = nullptr;
    v58 = *(_DWORD *)(a2 + 72);
    v30 = *(unsigned int *)(a2 + 84);
    ptr[0] = v56;
    ptr[1] = (void *)0x800000000LL;
    v31 = 2 * v30;
    v59 = v28;
    if ( (v27 & 0x100000) != 0 )
      v29 = (const __m128i *)(a2 + 88);
    if ( (unsigned __int8)sub_1D004D0((unsigned int *)a1, v29, &v29[v31], (__int64)ptr) )
    {
      result = (_QWORD *)(&dword_0 + 1);
    }
    else
    {
      v39 = *(_QWORD *)a2;
      v40 = *(_DWORD *)(a2 + 4);
      v52 = 0;
      v50 = v40;
      *(_OWORD *)v53 = 0;
      v41 = (v39 >> 19) & 1;
      v54 = 0;
      sub_15AB8B0((__int64)&v52, v24, v48);
      result = sub_19CC2F0((__m128 *)*a1, v42, v13, v50, v41 & 1, &v52, v46, v25, v51, (__int64)ptr, 0, nullptr);
      if ( HIDWORD(v53[1]) )
      {
        v45 = result;
        free(v53[0]);
        result = v45;
      }
    }
    if ( ptr[0] != v56 )
    {
      v43 = result;
      free(ptr[0]);
      return v43;
    }
  }
  else if ( !*(_DWORD *)(*a1 + 12632)
         && v47 == v42
         && v13 == *(_QWORD *)(a2 + 24)
         && *(_QWORD *)(a2 + 32) == v24
         && *(_QWORD *)(a2 + 40) == v48
         && *(_QWORD *)(a2 + 48) == v51[0].m128i_i64[0]
         && ((v27 & 0x200000) == 0 ? (v38 = 0) : (v38 = *(_QWORD *)sub_1CAFE50(a2)), v25 == v38) )
  {
    return (__int64 *)a2;
  }
  else
  {
    *(_OWORD *)ptr = 0;
    v37 = *(_DWORD *)(a2 + 4);
    v49 = (v27 & 0x80000) != 0;
    *(_OWORD *)v56 = 0;
    v57 = 0;
    sub_15AB8B0((__int64)ptr, v24, v48);
    result = sub_19CC2F0((__m128 *)*a1, v42, v13, v37, v49, (__m128i *)ptr, v46, v25, v51, 0, 0, nullptr);
    if ( HIDWORD(v56[1]) )
    {
      v44 = result;
      free(v56[0]);
      return v44;
    }
  }
  return result;
}
