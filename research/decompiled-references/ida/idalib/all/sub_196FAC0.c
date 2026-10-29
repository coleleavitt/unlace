__int64 __fastcall sub_196FAC0(__int64 *a1, __int64 *a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  void *v13; // r12
  __int64 v14; // rax
  void *v15; // rdx
  _QWORD *v16; // rax
  char v17; // cl
  unsigned __int64 i; // rdx
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // edx
  const __m128i *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 result; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  int v33; // ecx
  __int64 v34; // rax
  int v35; // r13d
  bool v36; // r8
  bool v37; // r13
  int v38; // [rsp+0h] [rbp-1D8h]
  __int64 v39; // [rsp+0h] [rbp-1D8h]
  __int64 v40; // [rsp+0h] [rbp-1D8h]
  __int64 v41; // [rsp+0h] [rbp-1D8h]
  int v42; // [rsp+8h] [rbp-1D0h]
  __int64 v43; // [rsp+10h] [rbp-1C8h]
  bool v44; // [rsp+18h] [rbp-1C0h]
  int v45; // [rsp+24h] [rbp-1B4h]
  __m128i v46[2]; // [rsp+30h] [rbp-1A8h] BYREF
  __int128 v47; // [rsp+50h] [rbp-188h] BYREF
  void *v48[2]; // [rsp+60h] [rbp-178h]
  __int128 v49; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  void *v51[2]; // [rsp+90h] [rbp-148h] BYREF
  __int128 v52; // [rsp+A0h] [rbp-138h]
  int v53; // [rsp+190h] [rbp-48h]
  int v54; // [rsp+194h] [rbp-44h]

  v6 = a2[2];
  if ( v6 && !(unsigned __int8)sub_BFE300(v6) )
  {
    v31 = sub_1933BC0(a1, a2[2], *(double *)a3.m128_u64, a4);
    if ( v31 == 1 )
      return 1;
    v32 = *a2;
    v33 = *((_DWORD *)a2 + 1);
    LOBYTE(v47) = 0;
    ptr[0] = nullptr;
    v34 = sub_19B0570(
            *a1,
            0,
            (unsigned int)v31 & 0xFFFFFFFE,
            v33,
            (v32 & 0x80000) == 0 ? 26 : 37,
            (unsigned int)ptr,
            (__int64)&v47);
    if ( v34 == 1 )
      return 1;
    v13 = ptr[0];
    v42 = v34 & 0xFFFFFFFE;
    v11 = *(_QWORD *)((v34 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  else
  {
    v7 = a2[3];
    v8 = (unsigned __int64)sub_1942710(a1, v7, a3, a4);
    LODWORD(v11) = v8;
    v12 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v12 + 16) != 42 )
      v12 = sub_F63050(v12, v7, v9, v10);
    v42 = 0;
    v13 = *(void **)(v12 + 32);
  }
  v14 = a2[4];
  if ( v14 )
  {
    v15 = (void *)a2[5];
    ptr[0] = (void *)a2[4];
    ptr[1] = v15;
    v16 = (_QWORD *)(*(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v16 )
    {
      ptr[0] = v16;
      v17 = 0;
      for ( i = v16[1] & 0xFFFFFFFFFFFFFFF8LL; i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
      {
        v16 = (_QWORD *)i;
        v17 = 1;
      }
      if ( v17 )
        ptr[0] = v16;
    }
    sub_E90530((__int64 *)ptr);
  }
  if ( (*a2 & 0x200000) != 0 )
  {
    v19 = 16LL * ((*a2 & 0x100000) != 0) + 72;
    if ( (((unsigned __int64)*a2 >> 16) & 0x10) != 0 && *((_DWORD *)a2 + 18) )
      v19 += 32LL * *((unsigned int *)a2 + 21);
    v20 = *(__int64 *)((char *)a2 + v19);
  }
  else
  {
    v20 = 0;
  }
  v21 = sub_18CBB50((__int64)a1, v20);
  v22 = a2[4];
  v23 = v21;
  if ( v22 )
  {
    v22 = sub_1969B50((__int64)a1, a2[4], (void *)a2[5], (__int64)v13, v21);
    if ( v22 )
    {
      v43 = v24;
      goto LABEL_19;
    }
    return 1;
  }
  v43 = 0;
LABEL_19:
  v38 = 0;
  if ( (*a2 & 0x100000) != 0 )
    v38 = *((_DWORD *)a2 + 20);
  sub_19431F0(v46, a1, (const __m128i *)a2 + 3, a3, a4);
  if ( !v46[0].m128i_i64[0] )
    return 1;
  v25 = *a2;
  if ( (*a2 & 0x100000) != 0 && *((_DWORD *)a2 + 18) )
  {
    v26 = *((_DWORD *)a2 + 19);
    v53 = *((_DWORD *)a2 + 18);
    v27 = nullptr;
    v54 = v26;
    v28 = *((unsigned int *)a2 + 21);
    ptr[0] = v51;
    ptr[1] = (void *)0x800000000LL;
    v29 = 2 * v28;
    if ( (v25 & 0x100000) != 0 )
      v27 = (const __m128i *)(a2 + 11);
    if ( (unsigned __int8)sub_196BD30(a1, v27, &v27[v29], (__int64)ptr) )
    {
      result = 1;
    }
    else
    {
      v45 = *((_DWORD *)a2 + 1);
      v36 = (*a2 & 0x80000) != 0;
      v47 = 0;
      *(_OWORD *)v48 = 0;
      v37 = v36;
      v49 = 0;
      sub_15AB8B0((__int64)&v47, v22, v43);
      result = sub_19CC2F0(*a1, v42, v11, v45, v37, (unsigned int)&v47, v38, v23, (__int64)v46, (__int64)ptr, 0, 0);
      if ( HIDWORD(v48[1]) )
      {
        v41 = result;
        free(v48[0]);
        result = v41;
      }
    }
    if ( ptr[0] != v51 )
    {
      v39 = result;
      free(ptr[0]);
      return v39;
    }
  }
  else
  {
    *(_OWORD *)ptr = 0;
    v35 = *((_DWORD *)a2 + 1);
    v44 = (v25 & 0x80000) != 0;
    *(_OWORD *)v51 = 0;
    v52 = 0;
    sub_15AB8B0((__int64)ptr, v22, v43);
    result = sub_19CC2F0(*a1, v42, v11, v35, v44, (unsigned int)ptr, v38, v23, (__int64)v46, 0, 0, 0);
    if ( HIDWORD(v51[1]) )
    {
      v40 = result;
      free(v51[0]);
      return v40;
    }
  }
  return result;
}
