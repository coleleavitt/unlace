__int64 *__fastcall sub_1D29E90(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  void *v17; // r13
  __int64 v18; // rax
  void *v19; // rdx
  _QWORD *v20; // rax
  char v21; // cl
  unsigned __int64 i; // rdx
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r12
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // eax
  const __m128i *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 *result; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  unsigned int v41; // ecx
  __int64 v42; // rax
  unsigned int v43; // r15d
  __int64 v44; // rax
  unsigned __int64 v45; // r8
  unsigned int v46; // ecx
  __int64 v47; // r15
  __int64 v48; // [rsp-10h] [rbp-1E8h]
  __int64 v49; // [rsp-8h] [rbp-1E0h]
  unsigned __int16 *v50; // [rsp+8h] [rbp-1D0h]
  __int64 *v51; // [rsp+8h] [rbp-1D0h]
  __int64 *v52; // [rsp+8h] [rbp-1D0h]
  __int64 *v53; // [rsp+8h] [rbp-1D0h]
  unsigned int v54; // [rsp+10h] [rbp-1C8h]
  unsigned __int16 *v55; // [rsp+18h] [rbp-1C0h]
  __int64 v56; // [rsp+20h] [rbp-1B8h]
  bool v57; // [rsp+2Ch] [rbp-1ACh]
  unsigned int v58; // [rsp+2Ch] [rbp-1ACh]
  __m128i v59[2]; // [rsp+30h] [rbp-1A8h] BYREF
  __m128i v60; // [rsp+50h] [rbp-188h] BYREF
  void *v61[2]; // [rsp+60h] [rbp-178h]
  __int128 v62; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  void *v64[2]; // [rsp+90h] [rbp-148h] BYREF
  __int128 v65; // [rsp+A0h] [rbp-138h]
  int v66; // [rsp+190h] [rbp-48h]
  int v67; // [rsp+194h] [rbp-44h]

  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 && !(unsigned __int8)sub_BFE300(v6) )
  {
    v55 = *(unsigned __int16 **)(a2 + 16);
    v39 = sub_1D11200(a1, v55, a3, a4, v7, v8, v9);
    if ( v39 == 1 )
      return (_QWORD *)(&dword_0 + 1);
    v40 = *(_QWORD *)a2;
    v41 = *(_DWORD *)(a2 + 4);
    v60.m128i_i8[0] = 0;
    ptr[0] = nullptr;
    v42 = sub_19B0570(
            *a1,
            0,
            v39 & 0xFFFFFFFFFFFFFFFELL,
            v41,
            (v40 & 0x80000) == 0 ? 26 : 37,
            (__int64 *)ptr,
            a3,
            a4,
            &v60);
    v14 = v48;
    v15 = v49;
    if ( v42 == 1 )
      return (_QWORD *)(&dword_0 + 1);
    v17 = ptr[0];
    v50 = (unsigned __int16 *)(v42 & 0xFFFFFFFFFFFFFFFELL);
    v13 = *(_QWORD *)((v42 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 24);
    v13 = (__int64)sub_1D1AC70(a1, v10, a3, a4);
    v16 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v16 + 16) != 42 )
      v16 = sub_F63050(v16, v10, v11, v12);
    v50 = nullptr;
    v17 = *(void **)(v16 + 32);
    v55 = nullptr;
  }
  v18 = *(_QWORD *)(a2 + 32);
  if ( v18 )
  {
    v19 = *(void **)(a2 + 40);
    ptr[0] = *(void **)(a2 + 32);
    ptr[1] = v19;
    v20 = (_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v20 )
    {
      ptr[0] = v20;
      v21 = 0;
      for ( i = v20[1] & 0xFFFFFFFFFFFFFFF8LL; i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
      {
        v20 = (_QWORD *)i;
        v21 = 1;
      }
      if ( v21 )
        ptr[0] = v20;
    }
    sub_E90530((__int64 *)ptr);
  }
  v23 = *(_QWORD *)a2 >> 16;
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
  {
    v24 = 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 72;
    v23 = (*(_QWORD *)a2 >> 16) & 0x10LL;
    if ( (_DWORD)v23 && *(_DWORD *)(a2 + 72) )
    {
      v23 = 32LL * *(unsigned int *)(a2 + 84);
      v24 += v23;
    }
    v25 = *(_QWORD *)(a2 + v24);
  }
  else
  {
    v25 = 0;
  }
  v26 = sub_1D1B120((__int64)a1, v25, a3, a4, v23, v12, v14, v15);
  v30 = *(_QWORD *)(a2 + 32);
  v31 = v26;
  if ( v30 )
  {
    v30 = sub_1D23E30((__int64 **)a1, *(_QWORD *)(a2 + 32), *(void **)(a2 + 40), (__int64)v17, v26);
    if ( v30 )
    {
      v56 = v32;
      goto LABEL_19;
    }
    return (_QWORD *)(&dword_0 + 1);
  }
  v56 = 0;
LABEL_19:
  v54 = 0;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
    v54 = *(_DWORD *)(a2 + 80);
  sub_1D204A0(v59, a1, (const __m128i *)(a2 + 48), a3, a4, v27, v28, v29);
  if ( !v59[0].m128i_i64[0] )
    return (_QWORD *)(&dword_0 + 1);
  v33 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 && *(_DWORD *)(a2 + 72) )
  {
    v34 = *(_DWORD *)(a2 + 76);
    v35 = nullptr;
    v66 = *(_DWORD *)(a2 + 72);
    v36 = *(unsigned int *)(a2 + 84);
    ptr[0] = v64;
    ptr[1] = (void *)0x800000000LL;
    v37 = 2 * v36;
    v67 = v34;
    if ( (v33 & 0x100000) != 0 )
      v35 = (const __m128i *)(a2 + 88);
    if ( (unsigned __int8)sub_1D25BD0((__int64 **)a1, v35, &v35[v37], (__int64)ptr) )
    {
      result = (_QWORD *)(&dword_0 + 1);
    }
    else
    {
      v45 = *(_QWORD *)a2;
      v46 = *(_DWORD *)(a2 + 4);
      v60 = 0;
      v58 = v46;
      *(_OWORD *)v61 = 0;
      v47 = (v45 >> 19) & 1;
      v62 = 0;
      sub_15AB8B0((__int64)&v60, v30, v56);
      result = sub_19CC2F0((__m128 *)*a1, v50, v13, v58, v47 & 1, &v60, v54, v31, v59, (__int64)ptr, 0, nullptr);
      if ( HIDWORD(v61[1]) )
      {
        v53 = result;
        free(v61[0]);
        result = v53;
      }
    }
    if ( ptr[0] != v64 )
    {
      v51 = result;
      free(ptr[0]);
      return v51;
    }
  }
  else if ( !*(_DWORD *)(*a1 + 12632)
         && v55 == v50
         && v13 == *(_QWORD *)(a2 + 24)
         && *(_QWORD *)(a2 + 32) == v30
         && *(_QWORD *)(a2 + 40) == v56
         && v59[0].m128i_i64[0] == *(_QWORD *)(a2 + 48)
         && ((v33 & 0x200000) == 0 ? (v44 = 0) : (v44 = *(_QWORD *)sub_1CAFE50(a2)), v31 == v44) )
  {
    return (__int64 *)a2;
  }
  else
  {
    *(_OWORD *)ptr = 0;
    v43 = *(_DWORD *)(a2 + 4);
    v57 = (v33 & 0x80000) != 0;
    *(_OWORD *)v64 = 0;
    v65 = 0;
    sub_15AB8B0((__int64)ptr, v30, v56);
    result = sub_19CC2F0((__m128 *)*a1, v50, v13, v43, v57, (__m128i *)ptr, v54, v31, v59, 0, 0, nullptr);
    if ( HIDWORD(v64[1]) )
    {
      v52 = result;
      free(v64[0]);
      return v52;
    }
  }
  return result;
}
