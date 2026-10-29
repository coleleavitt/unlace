unsigned __int64 __fastcall sub_1403A00(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int64 *v4; // rbp
  _QWORD *v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rsi
  int v8; // r13d
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned int v11; // r13d
  unsigned __int64 *v12; // rbx
  char v13; // al
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // rax
  __m128 v20; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v21[8]; // [rsp+18h] [rbp-40h] BYREF

  v21[0] = (unsigned __int64)a2;
  while ( 1 )
  {
    v2 = a2[1];
    if ( !v2 )
      break;
    a2 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v2 & 4) == 0 || !a2 )
      goto LABEL_5;
  }
  a2 = nullptr;
LABEL_5:
  sub_1402D90(a1, (__int64)a2);
  v3 = *(unsigned int *)(a1 + 384);
  v4 = *(unsigned __int64 **)(a1 + 368);
  if ( (_DWORD)v3 )
  {
    v5 = (_QWORD *)v21[0];
    while ( 1 )
    {
      v6 = v5[1];
      if ( !v6 )
      {
LABEL_10:
        v8 = -1916529075;
        goto LABEL_12;
      }
      v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v6 & 4) == 0 )
        break;
      v5 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v7 )
        goto LABEL_10;
    }
    v9 = HIDWORD(v7);
    v10 = 0x9DDFEA08EB382D69LL * (v9 ^ (((8 * v6) & 0x7FFFFFFC0LL) - 0xAE502812AA7333LL));
    v8 = -348639895
       * ((-348639895 * ((v10 >> 47) ^ v10 ^ v9))
        ^ ((unsigned int)((0x9DDFEA08EB382D69LL * ((v10 >> 47) ^ v10 ^ v9)) >> 32) >> 15));
LABEL_12:
    v20.m128_i32[0] = 1;
    v11 = (v3 - 1) & v8;
    while ( 1 )
    {
      v12 = &v4[4 * v11];
      if ( sub_FEE490(v21[0], *v12) )
        break;
      if ( sub_FEE490(*v12, 0xFFFFFFFFFFFFF000LL) )
      {
        v4 += 4 * v3;
        goto LABEL_22;
      }
      v11 = (v3 - 1) & (v20.m128_i32[0] + v11);
      ++v20.m128_i32[0];
    }
    v4 += 4 * v3;
    v13 = *(_BYTE *)(**(_QWORD **)(a1 + 32) + 280LL) & 2;
    if ( !v12 )
      goto LABEL_23;
    if ( !v13 || v12 != v4 )
      goto LABEL_17;
  }
  else
  {
LABEL_22:
    v13 = *(_BYTE *)(**(_QWORD **)(a1 + 32) + 280LL) & 2;
LABEL_23:
    if ( !v13 )
      goto LABEL_17;
  }
  if ( (unsigned __int8)sub_13F49C0(a1, (_QWORD *)v21[0]) )
  {
    sub_13C8330(*(__int64 **)(a1 + 32), v21[0], v15, v16, v17, v18);
    v19.m128_u64[0] = sub_13F4300((__int64 *)(a1 + 368), v21);
    v20 = v19;
    return v20.m128_u64[0];
  }
LABEL_17:
  v20.m128_u64[0] = (unsigned __int64)v4;
  v20 = _mm_loadh_ps((const double *)v20.m128_u64);
  return v20.m128_u64[0];
}
