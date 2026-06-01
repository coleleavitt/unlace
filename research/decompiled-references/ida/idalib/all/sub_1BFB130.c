__int64 __fastcall sub_1BFB130(__int64 *a1, __int64 a2, char a3, char a4, __m128 a5, __m128 a6)
{
  unsigned __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // r13
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  _QWORD v34[7]; // [rsp+0h] [rbp-38h] BYREF

  v9 = sub_A73030(*(_QWORD *)(*a1 + 248), a2, 1u);
  v10 = *a1;
  v11 = a1[7];
  v12 = a1[1];
  v13 = a1[2];
  v34[0] = v9;
  v34[1] = *(_QWORD *)(*(_QWORD *)(v10 + 248) + 18720LL);
  result = sub_1BFAC00(v10, (__int64)v34, v12, v13, v11, 0, a5, a6);
  if ( a3 )
  {
    v22 = sub_A73030(*(_QWORD *)(*a1 + 248), a2 | 4, 1u);
    v23 = a1[7];
    v24 = a1[1];
    v25 = a1[2];
    v26 = *a1;
    v34[0] = v22;
    result = sub_1BFAC00(v26, (__int64)v34, v24, v25, v23, 0, a5, a6);
  }
  if ( a4 )
  {
    result = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL)
           & 0xF7;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
        & 0xF7) == 0x22
      && (a2 & 2) == 0
      && (byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 2) == 0 )
    {
      v15 = *(_QWORD *)(*a1 + 248);
      v16 = sub_A70F20(v15, a2, 2);
      v17 = sub_A73030(v15, v16, 1u);
      v18 = a1[7];
      v19 = a1[1];
      v20 = a1[2];
      v21 = *a1;
      v34[0] = v17;
      result = sub_1BFAC00(v21, (__int64)v34, v19, v20, v18, 0, a5, a6);
      if ( a3 )
      {
        v27 = *(_QWORD *)(*a1 + 248);
        v28 = sub_A70F20(v27, a2, 6);
        v29 = sub_A73030(v27, v28, 1u);
        v30 = a1[7];
        v31 = a1[1];
        v32 = a1[2];
        v33 = *a1;
        v34[0] = v29;
        return sub_1BFAC00(v33, (__int64)v34, v31, v32, v30, 0, a5, a6);
      }
    }
  }
  return result;
}
