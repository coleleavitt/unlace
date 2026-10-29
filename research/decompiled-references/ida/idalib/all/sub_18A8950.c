unsigned __int64 __fastcall sub_18A8950(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v8; // r12
  __int64 v9; // r13
  __int64 v10; // rsi
  _BOOL4 v11; // r12d
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  unsigned __int64 result; // rax
  __int64 v20; // rbx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 *v37; // [rsp+0h] [rbp-78h] BYREF
  __int64 v38; // [rsp+8h] [rbp-70h] BYREF
  char v39; // [rsp+1Fh] [rbp-59h]
  __m128 v40; // [rsp+20h] [rbp-58h] BYREF
  __int64 v41; // [rsp+30h] [rbp-48h]

  v8 = *(_BYTE *)(a3 + 58);
  v9 = *(_QWORD *)(a3 + 40);
  v38 = a3;
  v10 = v9;
  v37 = &v38;
  v11 = (v8 & 2) != 0;
  v41 = a1;
  v39 = 0;
  v40 = _mm_loadh_ps((const double *)&v37);
  v12 = sub_BAA9D0(a2, v9, v11, 0, a5, a6);
  if ( v12 )
  {
    v17 = v12;
    if ( *(_BYTE *)v40.m128_u64[0] )
      goto LABEL_4;
  }
  else
  {
    v33 = sub_BAC6C0(a2, v9, v13, v14, v15, v16);
    if ( !v33 )
      goto LABEL_4;
    if ( v33 == a4 )
      goto LABEL_4;
    v34 = sub_BAC6C0(a2, v9, v13, v14, v15, v16);
    v10 = v9;
    v17 = sub_BAA9D0(v34, v9, v11, 0, v35, v36);
    if ( !v17 || *(_BYTE *)v40.m128_u64[0] )
      goto LABEL_4;
  }
  if ( (*(_BYTE *)(v17 + 29) & 2) == 0
    && ((unsigned __int8)sub_BA7E40(*(_QWORD *)v40.m128_u64[1], v10, v13, v14, v15, v16)
     || (unsigned __int8)sub_BA7E40(v17, v10, v29, v30, v31, v32)) )
  {
    sub_18A8680((__int64)&v40, v17);
    v18 = *(_QWORD *)(a2 + 120);
    if ( v18 )
      goto LABEL_5;
LABEL_29:
    sub_A794E0((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), v13, v14, v15, v16);
    v18 = *(_QWORD *)(a2 + 120);
    goto LABEL_5;
  }
LABEL_4:
  v18 = *(_QWORD *)(a2 + 120);
  if ( !v18 )
    goto LABEL_29;
LABEL_5:
  result = v18 & 0xFFFFFFFFFFFFFFF8LL;
  if ( result )
  {
    if ( (*(_BYTE *)(result + 72) & 1) != 0 )
    {
      sub_BA8900(a2);
      result = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
    }
    v20 = *(_QWORD *)(result + 56);
    if ( v20 )
    {
      while ( *(char *)(v20 + 28) < 0 || (*(_BYTE *)(v20 + 8) & 6) != 0 )
      {
        v20 = *(_QWORD *)(v20 + 128);
        if ( !v20 )
          return result;
      }
LABEL_13:
      v21 = v9;
      v24 = sub_BAA9D0(v20, v9, v11, 0, v15, v16);
      if ( v24
        || (result = sub_BA8FC0(v20), a4 != result)
        && result
        && (v21 = v9, result = sub_BAA9D0(v20, v9, v11, 0, v15, v16), (v24 = result) != 0) )
      {
        result = v40.m128_u64[0];
        if ( !*(_BYTE *)v40.m128_u64[0] && (*(_BYTE *)(v24 + 29) & 2) == 0 )
        {
          if ( (unsigned __int8)sub_BA7E40(*(_QWORD *)v40.m128_u64[1], v21, v22, v23, v15, v16)
            || (result = sub_BA7E40(v24, v21, v25, v26, v27, v28), (_BYTE)result) )
          {
            result = (unsigned __int64)sub_18A8680((__int64)&v40, v24);
          }
        }
      }
      while ( 1 )
      {
        v20 = *(_QWORD *)(v20 + 128);
        if ( !v20 )
          break;
        if ( *(char *)(v20 + 28) >= 0 && (*(_BYTE *)(v20 + 8) & 6) == 0 )
          goto LABEL_13;
      }
    }
  }
  return result;
}
