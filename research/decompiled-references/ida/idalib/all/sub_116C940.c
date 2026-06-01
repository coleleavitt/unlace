__int64 __fastcall sub_116C940(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r13
  __int64 v8; // rdx
  const __m128i *v9; // r12
  __int64 v10; // rbp
  __int32 v11; // edi
  __int64 v12; // rax
  char v13; // cl
  __int32 v14; // esi
  _BOOL4 v15; // r8d
  __m128i *v16; // rax
  __m128i v17; // xmm1
  __int64 v19; // rax
  _BOOL4 v20; // [rsp+8h] [rbp-70h]
  __int64 v21; // [rsp+8h] [rbp-70h]
  _DWORD v22[2]; // [rsp+10h] [rbp-68h] BYREF
  char *v23; // [rsp+18h] [rbp-60h]
  __int64 v24; // [rsp+20h] [rbp-58h]
  int v25; // [rsp+28h] [rbp-50h]
  int v26; // [rsp+2Ch] [rbp-4Ch]
  const char *v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+38h] [rbp-40h]
  char v29; // [rsp+40h] [rbp-38h] BYREF

  v7 = a1 + 4992;
  sub_121FCF0(a1, a2, a3, a4);
  v8 = 0;
  v9 = (const __m128i *)v22;
  v22[1] = 0;
  *(_QWORD *)a1 = off_2C36B88;
  v23 = "3";
  v26 = 0;
  v22[0] = 3114;
  v24 = 1;
  v25 = 193;
  v27 = "CL1.2";
  v28 = 5;
  *(_DWORD *)(a1 + 4992) = 0;
  *(_QWORD *)(a1 + 5000) = 0;
  *(_QWORD *)(a1 + 5008) = a1 + 4992;
  *(_QWORD *)(a1 + 5016) = a1 + 4992;
  *(_QWORD *)(a1 + 5024) = 0;
  do
  {
    if ( v8 )
    {
      v10 = *(_QWORD *)(a1 + 5016);
      if ( *(_DWORD *)(v10 + 32) < v9->m128i_i32[0] )
        goto LABEL_12;
    }
    v10 = *(_QWORD *)(a1 + 5000);
    if ( !v10 )
    {
      v10 = v7;
LABEL_18:
      if ( *(_QWORD *)(a1 + 5008) != v10 )
      {
        v21 = v8;
        v19 = std::_Rb_tree_decrement(v10);
        v8 = v21;
        if ( v9->m128i_i32[0] <= *(_DWORD *)(v19 + 32) )
          goto LABEL_15;
      }
LABEL_12:
      v15 = 1;
      if ( v7 != v10 )
        v15 = v9->m128i_i32[0] < *(_DWORD *)(v10 + 32);
      v20 = v15;
      v16 = (__m128i *)operator new(0x38u);
      v17 = _mm_loadu_si128(v9);
      v16[3].m128i_i64[0] = v9[1].m128i_i64[0];
      v16[2] = v17;
      std::_Rb_tree_insert_and_rebalance(v20, v16, v10, v7);
      v8 = *(_QWORD *)(a1 + 5024) + 1LL;
      *(_QWORD *)(a1 + 5024) = v8;
      goto LABEL_15;
    }
    v11 = v9->m128i_i32[0];
    while ( 1 )
    {
      v14 = *(_DWORD *)(v10 + 32);
      if ( v11 >= v14 )
        break;
      v12 = *(_QWORD *)(v10 + 16);
      v13 = 1;
      if ( !v12 )
        goto LABEL_10;
LABEL_7:
      v10 = v12;
    }
    v12 = *(_QWORD *)(v10 + 24);
    v13 = 0;
    if ( v12 )
      goto LABEL_7;
LABEL_10:
    if ( v13 )
      goto LABEL_18;
    if ( v11 > v14 )
      goto LABEL_12;
LABEL_15:
    v9 = (const __m128i *)((char *)v9 + 24);
  }
  while ( v9 != (const __m128i *)&v29 );
  return sub_11BD180(a2, a4);
}
