__int64 __fastcall sub_17755D0(__int64 *a1, __int64 *a2, __m128 a3)
{
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  void **v9; // rbp
  __int64 v10; // rax
  void *v11; // r13
  __int64 v12; // rax
  void *v13; // rdx
  _QWORD *v14; // rax
  char v15; // cl
  unsigned __int64 i; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // eax
  const __m128i *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 result; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // rax
  unsigned int v33; // edx
  int v34; // r15d
  __int64 v35; // rax
  unsigned __int64 v36; // r8
  int v37; // ecx
  __int64 v38; // r15
  unsigned __int64 v39; // [rsp+8h] [rbp-1D0h]
  __int64 v40; // [rsp+8h] [rbp-1D0h]
  __int64 v41; // [rsp+8h] [rbp-1D0h]
  __int64 v42; // [rsp+8h] [rbp-1D0h]
  int v43; // [rsp+10h] [rbp-1C8h]
  unsigned __int16 *v44; // [rsp+18h] [rbp-1C0h]
  __int64 v45; // [rsp+20h] [rbp-1B8h]
  bool v46; // [rsp+2Ch] [rbp-1ACh]
  int v47; // [rsp+2Ch] [rbp-1ACh]
  __m128i v48[2]; // [rsp+30h] [rbp-1A8h] BYREF
  __int128 v49; // [rsp+50h] [rbp-188h] BYREF
  void *v50[2]; // [rsp+60h] [rbp-178h]
  __int128 v51; // [rsp+70h] [rbp-168h]
  void *ptr[2]; // [rsp+80h] [rbp-158h] BYREF
  void *v53[2]; // [rsp+90h] [rbp-148h] BYREF
  __int128 v54; // [rsp+A0h] [rbp-138h]
  int v55; // [rsp+190h] [rbp-48h]
  int v56; // [rsp+194h] [rbp-44h]

  v5 = a2[2];
  if ( v5 && !(unsigned __int8)sub_BFE300(v5) )
  {
    v44 = (unsigned __int16 *)a2[2];
    v29 = sub_175B800(a1, v44);
    if ( v29 == 1 )
      return 1;
    v30 = *a2;
    v31 = *((_DWORD *)a2 + 1);
    LOBYTE(v49) = 0;
    ptr[0] = nullptr;
    v32 = sub_19B0570(
            *a1,
            0,
            (unsigned int)v29 & 0xFFFFFFFE,
            v31,
            (v30 & 0x80000) == 0 ? 26 : 37,
            (unsigned int)ptr,
            (__int64)&v49);
    if ( v32 == 1 )
      return 1;
    v11 = ptr[0];
    v39 = v32 & 0xFFFFFFFFFFFFFFFELL;
    v9 = *(void ***)((v32 & 0xFFFFFFFFFFFFFFFELL) + 8);
  }
  else
  {
    v6 = a2[3];
    v9 = sub_176A2F0(a1, v6, a3);
    v10 = *(_QWORD *)((unsigned __int64)v9 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v10 + 16) != 42 )
      v10 = sub_F63050(v10, v6, v7, v8);
    v39 = 0;
    v11 = *(void **)(v10 + 32);
    v44 = nullptr;
  }
  v12 = a2[4];
  if ( v12 )
  {
    v13 = (void *)a2[5];
    ptr[0] = (void *)a2[4];
    ptr[1] = v13;
    v14 = (_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v14 )
    {
      ptr[0] = v14;
      v15 = 0;
      for ( i = v14[1] & 0xFFFFFFFFFFFFFFF8LL; i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
      {
        v14 = (_QWORD *)i;
        v15 = 1;
      }
      if ( v15 )
        ptr[0] = v14;
    }
    sub_E90530((__int64 *)ptr);
  }
  if ( (*a2 & 0x200000) != 0 )
  {
    v17 = 16LL * ((*a2 & 0x100000) != 0) + 72;
    if ( (((unsigned __int64)*a2 >> 16) & 0x10) != 0 && *((_DWORD *)a2 + 18) )
      v17 += 32LL * *((unsigned int *)a2 + 21);
    v18 = *(__int64 *)((char *)a2 + v17);
  }
  else
  {
    v18 = 0;
  }
  v19 = sub_17473B0((__int64)a1, v18);
  v20 = a2[4];
  v21 = v19;
  if ( v20 )
  {
    v20 = sub_176EE90(a1, a2[4], (void *)a2[5], (__int64)v11, v19);
    if ( v20 )
    {
      v45 = v22;
      goto LABEL_19;
    }
    return 1;
  }
  v45 = 0;
LABEL_19:
  v43 = 0;
  if ( (*a2 & 0x100000) != 0 )
    v43 = *((_DWORD *)a2 + 20);
  sub_176AF20(v48, a1, (const __m128i *)a2 + 3, a3);
  if ( !v48[0].m128i_i64[0] )
    return 1;
  v23 = *a2;
  if ( (*a2 & 0x100000) != 0 && *((_DWORD *)a2 + 18) )
  {
    v24 = *((_DWORD *)a2 + 19);
    v25 = nullptr;
    v55 = *((_DWORD *)a2 + 18);
    v26 = *((unsigned int *)a2 + 21);
    ptr[0] = v53;
    ptr[1] = (void *)0x800000000LL;
    v27 = 2 * v26;
    v56 = v24;
    if ( (v23 & 0x100000) != 0 )
      v25 = (const __m128i *)(a2 + 11);
    if ( (unsigned __int8)sub_1771010(a1, v25, &v25[v27], (__int64)ptr) )
    {
      result = 1;
    }
    else
    {
      v36 = *a2;
      v37 = *((_DWORD *)a2 + 1);
      v49 = 0;
      v47 = v37;
      *(_OWORD *)v50 = 0;
      v38 = (v36 >> 19) & 1;
      v51 = 0;
      sub_15AB8B0((__int64)&v49, v20, v45);
      result = sub_19CC2F0(
                 *a1,
                 v39,
                 (_DWORD)v9,
                 v47,
                 v38 & 1,
                 (unsigned int)&v49,
                 v43,
                 v21,
                 (__int64)v48,
                 (__int64)ptr,
                 0,
                 0);
      if ( HIDWORD(v50[1]) )
      {
        v42 = result;
        free(v50[0]);
        result = v42;
      }
    }
    if ( ptr[0] != v53 )
    {
      v40 = result;
      free(ptr[0]);
      return v40;
    }
  }
  else
  {
    v33 = *(_DWORD *)(*a1 + 12632);
    if ( v33
      || v44 != (unsigned __int16 *)v39
      || v9 != (void **)a2[3]
      || a2[4] != v20
      || a2[5] != v45
      || a2[6] != v48[0].m128i_i64[0] )
    {
      goto LABEL_38;
    }
    if ( (v23 & 0x200000) != 0 )
    {
      if ( (v23 & 0x100000) != 0 )
      {
        v33 = *((_DWORD *)a2 + 18);
        if ( v33 )
          v33 = *((_DWORD *)a2 + 21);
      }
      v35 = a2[4 * v33 + 9 + 2 * ((v23 & 0x100000) != 0)];
    }
    else
    {
      v35 = 0;
    }
    if ( v21 == v35 )
    {
      return (__int64)a2;
    }
    else
    {
LABEL_38:
      *(_OWORD *)ptr = 0;
      v34 = *((_DWORD *)a2 + 1);
      v46 = (v23 & 0x80000) != 0;
      *(_OWORD *)v53 = 0;
      v54 = 0;
      sub_15AB8B0((__int64)ptr, v20, v45);
      result = sub_19CC2F0(*a1, v39, (_DWORD)v9, v34, v46, (unsigned int)ptr, v43, v21, (__int64)v48, 0, 0, 0);
      if ( HIDWORD(v53[1]) )
      {
        v41 = result;
        free(v53[0]);
        return v41;
      }
    }
  }
  return result;
}
