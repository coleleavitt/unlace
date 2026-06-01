_QWORD *__fastcall sub_6A83C0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  void *v5; // r15
  unsigned __int64 v8; // rbp
  int v9; // eax
  char v10; // dl
  unsigned __int64 v11; // rcx
  char v13; // al
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // r9
  _QWORD *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // eax
  int v22; // ebp
  unsigned int v23; // ebp
  _BYTE *v24; // rdi
  char *v25; // rax
  size_t v26; // rdx
  __m128i v27; // xmm1
  unsigned int v28; // [rsp+8h] [rbp-60h]
  unsigned int v29; // [rsp+8h] [rbp-60h]
  unsigned int v30; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int64 v32; // [rsp+18h] [rbp-50h]
  _BYTE v33[72]; // [rsp+20h] [rbp-48h] BYREF

  v5 = a1 + 2;
  if ( (*(_BYTE *)(a2 + 29) & 2) != 0 )
    goto LABEL_17;
  v8 = a2;
  v9 = *(_BYTE *)(a2 + 28) & 0x7F;
  v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v9 - 32) <= 5 )
  {
    if ( (unsigned int)sub_781200(a2) == 1 )
      goto LABEL_17;
    v9 = *(_BYTE *)(a2 + 28) & 0x7F;
    v10 = *(_BYTE *)(a2 + 28) & 0x7F;
  }
  if ( (unsigned int)(v9 - 38) > 6 || v10 == 41 )
    goto LABEL_21;
  v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v11 = *(_QWORD *)v11;
  if ( ((*(_BYTE *)(v11 + 8) + 72) & 0x7Fu) <= 3 )
  {
    if ( (unsigned int)sub_77D1A0(a2) == 1 )
      goto LABEL_17;
    v9 = *(_BYTE *)(a2 + 28) & 0x7F;
    v10 = *(_BYTE *)(a2 + 28) & 0x7F;
LABEL_21:
    v11 = (unsigned int)(v9 - 57);
    if ( (unsigned int)v11 <= 2 )
    {
      if ( (unsigned int)sub_7A47D0(a2) == 1 )
        goto LABEL_17;
      v9 = *(_BYTE *)(a2 + 28) & 0x7F;
      v11 = (unsigned int)(v9 - 58);
      v10 = *(_BYTE *)(a2 + 28) & 0x7F;
      if ( (unsigned int)v11 <= 1 )
      {
        if ( (*(_BYTE *)(a2 + 180) & 7u) > 1 )
          goto LABEL_25;
        goto LABEL_17;
      }
    }
    if ( v10 != 60 )
    {
LABEL_13:
      if ( (unsigned int)(v9 - 56) > 4 )
        goto LABEL_14;
LABEL_25:
      v13 = *(_BYTE *)(a2 + 74);
      if ( (v13 & 4) != 0 && (v13 & 1) == 0 )
        goto LABEL_17;
      goto LABEL_26;
    }
LABEL_11:
    if ( (unsigned int)sub_782150(a2) != 1 )
    {
      v9 = *(_BYTE *)(a2 + 28) & 0x7F;
      v10 = *(_BYTE *)(a2 + 28) & 0x7F;
      goto LABEL_13;
    }
LABEL_17:
    *a1 = v5;
    a1[1] = 0x200000000LL;
    return a1;
  }
  if ( v10 == 60 )
    goto LABEL_11;
LABEL_14:
  if ( v10 == 41 || ((v10 + 63) & 0x7Fu) <= 1 || v10 == 45 )
    goto LABEL_17;
LABEL_26:
  v14 = (v10 + 112) & 0x7F;
  ptr = v33;
  v32 = 0x200000000LL;
  if ( (unsigned __int8)v14 > 0x39u || (v15 = 0x2784C000000003FLL, !_bittest64(&v15, v14)) )
  {
    v17 = *(unsigned int *)(a2 + 24);
    if ( (int)v17 < 0 )
      goto LABEL_29;
    v25 = v33;
LABEL_50:
    *(_DWORD *)v25 = v17;
    v23 = v32 + 1;
    goto LABEL_43;
  }
  v16 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)a2 + 16LL))(a2);
  v17 = v16;
  if ( *(int *)(a2 + 24) >= 0 )
  {
    if ( (unsigned int)v32 >= (unsigned __int64)HIDWORD(v32) )
    {
      v30 = v16;
      sub_25D6060(&ptr, v33, (unsigned int)v32 + 1LL, 4);
      *((_DWORD *)ptr + (unsigned int)v32) = v30;
      v23 = v32 + 1;
      goto LABEL_43;
    }
    v25 = (char *)ptr + 4 * (unsigned int)v32;
    goto LABEL_50;
  }
LABEL_29:
  v18 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v18 = (_QWORD *)*v18;
  if ( !v18 || (v28 = v17, v19 = sub_79A2E0(v18), v17 = v28, *(int *)(v19 + 24) >= 0) )
  {
    if ( (int)v17 < 0 )
    {
      a2 = (unsigned int)v17;
      v17 = (unsigned int)sub_CAAA20(a3, (unsigned int)v17);
    }
    if ( (unsigned int)v32 >= (unsigned __int64)HIDWORD(v32) )
    {
      a2 = (unsigned __int64)v33;
      v29 = v17;
      sub_25D6060(&ptr, v33, (unsigned int)v32 + 1LL, 4);
      v20 = (unsigned int)v32;
      v17 = v29;
      *((_DWORD *)ptr + (unsigned int)v32) = v29;
    }
    else
    {
      v20 = (unsigned __int64)ptr;
      *((_DWORD *)ptr + (unsigned int)v32) = v17;
    }
    LODWORD(v32) = v32 + 1;
  }
  v21 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, __int64, __int64))(*(_QWORD *)v8 + 16LL))(
          v8,
          a2,
          v20,
          v11,
          a5,
          v17);
  v22 = v21;
  if ( v21 < 0 )
    v22 = sub_CAB1A0(a3, (unsigned int)v21);
  if ( (unsigned int)v32 >= (unsigned __int64)HIDWORD(v32) )
    sub_25D6060(&ptr, v33, (unsigned int)v32 + 1LL, 4);
  *((_DWORD *)ptr + (unsigned int)v32) = v22;
  v23 = v32 + 1;
LABEL_43:
  LODWORD(v32) = v23;
  v24 = ptr;
  *a1 = v5;
  a1[1] = 0x200000000LL;
  if ( !v23 )
    goto LABEL_44;
  if ( v24 != v33 )
  {
    v27 = _mm_cvtsi32_si128(HIDWORD(v32));
    *a1 = v24;
    a1[1] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), v27).m128i_u64[0];
    return a1;
  }
  if ( v23 > 2 )
  {
    sub_25D6060(a1, v5, v23, 4);
    v24 = ptr;
    v26 = 4LL * (unsigned int)v32;
    if ( !v26 )
      goto LABEL_55;
    v5 = (void *)*a1;
  }
  else
  {
    v26 = 4LL * v23;
  }
  memcpy(v5, v24, v26);
  v24 = ptr;
LABEL_55:
  *((_DWORD *)a1 + 2) = v23;
LABEL_44:
  if ( v24 != v33 )
    free(v24);
  return a1;
}

