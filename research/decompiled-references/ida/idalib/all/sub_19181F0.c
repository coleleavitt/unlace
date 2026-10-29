__int64 __fastcall sub_19181F0(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned int v10; // r12d
  unsigned __int8 v11; // bp
  unsigned __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rax
  _QWORD *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned int v26; // ebx
  unsigned int v27; // r12d
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbx
  unsigned __int64 v30; // rax
  __int64 v31; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v32[8]; // [rsp+8h] [rbp-40h] BYREF

  v10 = a4;
  v11 = a5;
  if ( !(_BYTE)a5 )
  {
    v12 = sub_19179A0(a1, (_QWORD *)(*a2 & 0xFFFFFFFFFFFFFFFELL), 1u, a4, a5, a6, a7, a8);
    *a2 = v12;
    if ( v12 == 1 )
      return 0;
  }
  v13 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
  v14 = sub_19179A0(a1, v13, 1u, a4, a5, a6, a7, a8);
  *a3 = v14;
  if ( v14 == 1 )
    return 0;
  v17 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v18 = *(_QWORD *)v17;
  if ( *(_BYTE *)(*(_QWORD *)v17 + 16LL) != 31 )
  {
    v25 = *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v25 + 16) == 31 )
    {
      v18 = sub_F63050(v18, v13, v25, v15);
      v14 = *a3;
    }
    else
    {
      v18 = 0;
    }
  }
  v19 = *(_QWORD *)(*(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v19 + 16) != 31 )
  {
    v24 = *(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v24 + 16) != 31 )
      return sub_1917F70(a1, a2, a3, v10, v11, v16, a7, a8);
    v19 = sub_F63050(v19, v13, v24, v15);
  }
  if ( !v18 || !v19 )
    return sub_1917F70(a1, a2, a3, v10, v11, v16, a7, a8);
  if ( *(_DWORD *)(v19 + 40) != *(_DWORD *)(v18 + 44) )
    return sub_18F40B0(a1, v10, a2, a3, *(double *)a7.m128_u64);
  v20 = *(_QWORD **)(a1 + 248);
  if ( *(_QWORD *)(*(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(v19 + 8)
                                                                             & 0xFFFFFFFFFFFFFFF0LL) )
  {
    v32[0] = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v29 = sub_6D5440(v32);
    v31 = *(_QWORD *)((*a2 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v30 = sub_6D5440(&v31);
    return sub_ABBE20(v20, v30, v29, 0);
  }
  else
  {
    v21 = *(_QWORD *)(v19 + 32);
    v22 = *(_QWORD *)(v18 + 32);
    if ( (*(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
        | ((unsigned __int8)v22 | (unsigned __int8)*(_QWORD *)&byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (*(_QWORD *)&byte_8[v21 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v21 | (unsigned __int8)*(_QWORD *)&byte_8[v21 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
      return sub_18F40B0(a1, v10, a2, a3, *(double *)a7.m128_u64);
    v26 = *(_DWORD *)(v19 + 44);
    v27 = *(_DWORD *)(v18 + 40);
    v28 = sub_ABBE20(v20, v22, v21, 0);
    return sub_A76DD0((__int64)v20, v28, v27, v26);
  }
}
