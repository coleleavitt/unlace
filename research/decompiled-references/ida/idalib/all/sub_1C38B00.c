__int64 __fastcall sub_1C38B00(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r12
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 *v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // r13
  _QWORD *v17; // rdx
  __int64 v18; // rax
  int v19; // esi
  int v20; // r9d
  __int64 v21; // rdi
  __m128 v22[3]; // [rsp+0h] [rbp-38h] BYREF

  result = 0;
  if ( (*(_BYTE *)(a2 + 12) & 0xC) == 0xC )
  {
    if ( (*(_BYTE *)(a2 + 12) & 2) != 0 )
      return result;
  }
  else if ( (*(_BYTE *)(a2 + 12) & 0xC) != 0 )
  {
    return result;
  }
  v7 = *(_QWORD *)(**(_QWORD **)(a2 + 16) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_QWORD *)(v7 + 8) & 7LL;
  if ( v8 | (*(__int64 *)(v7 + 8) >> 3) & 1 )
    v7 = sub_F64F00(**(_QWORD **)(a2 + 16), a2, v8, v8 | (*(__int64 *)(v7 + 8) >> 3) & 1, a5);
  v9 = *a1;
  v10 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
  v11 = *(unsigned int *)(*a1 + 16);
  v12 = *(_QWORD *)*a1;
  if ( !(_DWORD)v11 )
    goto LABEL_18;
  v13 = (v11 - 1) & (v10 ^ (v10 >> 9));
  v14 = (__int64 *)(v12 + 16LL * v13);
  v15 = *v14;
  if ( v10 != *v14 )
  {
    v19 = 1;
    if ( v15 )
    {
      do
      {
        v20 = v19 + 1;
        v13 = (v11 - 1) & (v19 + v13);
        v14 = (__int64 *)(v12 + 16LL * v13);
        v21 = *v14;
        if ( v10 == *v14 )
          goto LABEL_7;
        v19 = v20;
      }
      while ( v21 );
    }
LABEL_18:
    sub_1C38AA0(v22, (_QWORD *)(v12 + 16LL * (unsigned int)v11), (_QWORD *)(v12 + 16LL * (unsigned int)v11), *a1, 1);
    v16 = v22[0].m128_u64[0];
    goto LABEL_8;
  }
LABEL_7:
  sub_1C38AA0(v22, v14, (_QWORD *)(16 * v11 + v12), *a1, 1);
  v16 = v22[0].m128_u64[0];
LABEL_8:
  v17 = (_QWORD *)(*(_QWORD *)v9 + 16LL * *(unsigned int *)(v9 + 16));
  sub_1C38AA0(v22, v17, v17, v9, 1);
  if ( v22[0].m128_u64[0] == v16
    || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_EF2290(*(_QWORD *)(v16 + 8)) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                             & 0xFFFFFFFFFFFFFFF0LL)
                 + 16LL) == 42) != (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1[3] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                         & 0xFFFFFFFFFFFFFFF0LL)
                                             + 16LL) == 42) )
  {
    return 0;
  }
  v18 = *(_QWORD *)(v16 + 8);
  a1[2] = v10;
  a1[1] = v18;
  return 1;
}
