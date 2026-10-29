void __fastcall sub_182C460(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 **v11; // rax
  __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  __int64 *v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __m128i *v19; // r13
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 *v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rax
  __int32 v27; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v28[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( !(unsigned __int8)sub_16211A0(a1, a3, a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL, &v27, 0xFFFFFFFFLL, 0) )
  {
    a3[3].m128i_i8[10] |= 1u;
    return;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_10;
  v11 = (__int64 **)sub_B8C3D0(a2, (__int64)a3, v7, v8, v9, v10);
  v12 = *v11;
  v13 = (unsigned __int64)&(*v11)[*((unsigned int *)v11 + 2)];
  if ( (unsigned __int64)v12 < v13 )
  {
    v24 = v12;
    while ( *(_WORD *)(*v24 + 36) != 258 )
    {
      if ( (__int64 *)v13 == ++v24 )
        goto LABEL_10;
    }
    if ( (__int64 *)v13 == v24 )
      goto LABEL_10;
  }
  else
  {
    if ( v12 == (__int64 *)v13 )
      goto LABEL_10;
    if ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 258 )
    {
      v14 = (__int64 *)(v13 + 8);
      while ( v12 != v14 )
      {
        v15 = *v14++;
        if ( *(_WORD *)(v15 + 36) == 258 )
          goto LABEL_19;
      }
      goto LABEL_10;
    }
  }
LABEL_19:
  v25 = *v12;
  if ( *(_WORD *)(*v12 + 36) != 258 )
  {
    v26 = v12 + 1;
    do
      v25 = *v26++;
    while ( *(_WORD *)(v25 + 36) != 258 );
  }
  if ( v27 != *(_DWORD *)(v25 + 40) )
  {
    sub_168B9F0((__int64)v28, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1ACBu, 0);
    sub_15DD120((__int64)v28, (__int64)a3);
    sub_15F7200(v28);
    return;
  }
LABEL_10:
  v16 = *(_QWORD **)(a1 + 248);
  v17 = v16[294];
  v16[304] += 48LL;
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v16[295] >= v18 + 48 && v17 )
  {
    v16[294] = v18 + 48;
    v19 = (__m128i *)((v17 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    v19 = (__m128i *)sub_986170((__int64)(v16 + 294), 48, 48, 3, v9, v10);
  }
  sub_B14530(v19, *(_QWORD *)(a1 + 248), a3, v27);
  sub_B8CC60(a2, (__int64)v19, v20, v21, v22, v23);
}
