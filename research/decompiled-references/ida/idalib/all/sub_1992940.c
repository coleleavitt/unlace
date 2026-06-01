__int64 __fastcall sub_1992940(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  void *v12; // r13
  __int64 v13; // rax
  void *v14; // rdx
  _QWORD *v15; // rax
  char v16; // cl
  unsigned __int64 i; // rdx
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  int v25; // eax
  const __m128i *v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 result; // rax
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // ecx
  __int64 v33; // rax
  int v34; // r15d
  __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // r8
  int v38; // ecx
  __int64 v39; // r15
  unsigned __int64 v40; // [rsp+8h] [rbp-1D0h]
  __int64 v41; // [rsp+8h] [rbp-1D0h]
  __int64 v42; // [rsp+8h] [rbp-1D0h]
  __int64 v43; // [rsp+8h] [rbp-1D0h]
  int v44; // [rsp+10h] [rbp-1C8h]
  unsigned __int16 *v45; // [rsp+18h] [rbp-1C0h]
  __int64 v46; // [rsp+20h] [rbp-1B8h]
  bool v47; // [rsp+2Ch] [rbp-1ACh]
  int v48; // [rsp+2Ch] [rbp-1ACh]
  __m128i v49[2]; // [rsp+30h] [rbp-1A8h] BYREF
  __int128 v50; // [rsp+50h] [rbp-188h] BYREF
  void *v51[2]; // [rsp+60h] [rbp-178h]
  __int128 v52; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  void *v54[2]; // [rsp+90h] [rbp-148h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-138h]
  int v56; // [rsp+190h] [rbp-48h]
  int v57; // [rsp+194h] [rbp-44h]

  v6 = *(_QWORD *)(a2 + 16);
  if ( v6 && !(unsigned __int8)sub_BFE300(v6) )
  {
    v45 = *(unsigned __int16 **)(a2 + 16);
    v30 = sub_190CCA0(a1, v45, *(double *)a3.m128_u64, a4);
    if ( v30 == 1 )
      return 1;
    v31 = *(_QWORD *)a2;
    v32 = *(_DWORD *)(a2 + 4);
    LOBYTE(v50) = 0;
    ptr[0] = nullptr;
    v33 = sub_19B0570(
            *a1,
            0,
            (unsigned int)v30 & 0xFFFFFFFE,
            v32,
            (v31 & 0x80000) == 0 ? 26 : 37,
            (unsigned int)ptr,
            (__int64)&v50);
    if ( v33 == 1 )
      return 1;
    v12 = ptr[0];
    v40 = v33 & 0xFFFFFFFFFFFFFFFELL;
    v10 = *(_QWORD *)((v33 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 24);
    v10 = (unsigned __int64)sub_19885D0(a1, v7, a3, a4);
    v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v11 + 16) != 42 )
      v11 = sub_F63050(v11, v7, v8, v9);
    v40 = 0;
    v12 = *(void **)(v11 + 32);
    v45 = nullptr;
  }
  v13 = *(_QWORD *)(a2 + 32);
  if ( v13 )
  {
    v14 = *(void **)(a2 + 40);
    ptr[0] = *(void **)(a2 + 32);
    ptr[1] = v14;
    v15 = (_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v15 )
    {
      ptr[0] = v15;
      v16 = 0;
      for ( i = v15[1] & 0xFFFFFFFFFFFFFFF8LL; i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
      {
        v15 = (_QWORD *)i;
        v16 = 1;
      }
      if ( v16 )
        ptr[0] = v15;
    }
    sub_E90530((__int64 *)ptr);
  }
  if ( (*(_QWORD *)a2 & 0x200000LL) != 0 )
  {
    v18 = 16LL * ((*(_QWORD *)a2 & 0x100000LL) != 0) + 72;
    if ( ((*(_QWORD *)a2 >> 16) & 0x10) != 0 && *(_DWORD *)(a2 + 72) )
      v18 += 32LL * *(unsigned int *)(a2 + 84);
    v19 = *(_QWORD *)(a2 + v18);
  }
  else
  {
    v19 = 0;
  }
  v20 = sub_18CBE40((__int64)a1, v19);
  v21 = *(_QWORD *)(a2 + 32);
  v22 = v20;
  if ( v21 )
  {
    v21 = sub_198CB00((__int64)a1, *(_QWORD *)(a2 + 32), *(void **)(a2 + 40), (__int64)v12, v20);
    if ( v21 )
    {
      v46 = v23;
      goto LABEL_19;
    }
    return 1;
  }
  v46 = 0;
LABEL_19:
  v44 = 0;
  if ( (*(_QWORD *)a2 & 0x100000LL) != 0 )
    v44 = *(_DWORD *)(a2 + 80);
  sub_1989150(v49, a1, (const __m128i *)(a2 + 48), a3, a4);
  if ( !v49[0].m128i_i64[0] )
    return 1;
  v24 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 0x100000) != 0 && *(_DWORD *)(a2 + 72) )
  {
    v25 = *(_DWORD *)(a2 + 76);
    v26 = nullptr;
    v56 = *(_DWORD *)(a2 + 72);
    v27 = *(unsigned int *)(a2 + 84);
    ptr[0] = v54;
    ptr[1] = (void *)0x800000000LL;
    v28 = 2 * v27;
    v57 = v25;
    if ( (v24 & 0x100000) != 0 )
      v26 = (const __m128i *)(a2 + 88);
    if ( (unsigned __int8)sub_198ECE0(a1, v26, &v26[v28], (__int64)ptr) )
    {
      result = 1;
    }
    else
    {
      v37 = *(_QWORD *)a2;
      v38 = *(_DWORD *)(a2 + 4);
      v50 = 0;
      v48 = v38;
      *(_OWORD *)v51 = 0;
      v39 = (v37 >> 19) & 1;
      v52 = 0;
      sub_15AB8B0((__int64)&v50, v21, v46);
      result = sub_19CC2F0(*a1, v40, v10, v48, v39 & 1, (unsigned int)&v50, v44, v22, (__int64)v49, (__int64)ptr, 0, 0);
      if ( HIDWORD(v51[1]) )
      {
        v43 = result;
        free(v51[0]);
        result = v43;
      }
    }
    if ( ptr[0] != v54 )
    {
      v41 = result;
      free(ptr[0]);
      return v41;
    }
  }
  else
  {
    if ( v45 != (unsigned __int16 *)v40
      || v10 != *(_QWORD *)(a2 + 24)
      || *(_QWORD *)(a2 + 32) != v21
      || *(_QWORD *)(a2 + 40) != v46
      || v49[0].m128i_i64[0] != *(_QWORD *)(a2 + 48) )
    {
      goto LABEL_37;
    }
    if ( (v24 & 0x200000) != 0 )
    {
      v35 = 0;
      if ( ((v24 >> 16) & 0x10) != 0 )
      {
        v35 = *(unsigned int *)(a2 + 72);
        if ( (_DWORD)v35 )
          v35 = *(unsigned int *)(a2 + 84);
      }
      v36 = *(_QWORD *)(a2 + 32 * v35 + 16LL * ((v24 & 0x100000) != 0) + 72);
    }
    else
    {
      v36 = 0;
    }
    result = a2;
    if ( v22 != v36 )
    {
LABEL_37:
      *(_OWORD *)ptr = 0;
      v34 = *(_DWORD *)(a2 + 4);
      v47 = (v24 & 0x80000) != 0;
      *(_OWORD *)v54 = 0;
      v55 = 0;
      sub_15AB8B0((__int64)ptr, v21, v46);
      result = sub_19CC2F0(*a1, v40, v10, v34, v47, (unsigned int)ptr, v44, v22, (__int64)v49, 0, 0, 0);
      if ( HIDWORD(v54[1]) )
      {
        v42 = result;
        free(v54[0]);
        return v42;
      }
    }
  }
  return result;
}
