__int64 __fastcall sub_1148C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r13
  __int64 v8; // rdx
  const __m128i *v9; // r12
  __int64 v10; // rbp
  __int32 v11; // edi
  __int64 v12; // rax
  char v13; // cl
  __int32 v14; // esi
  __int64 v15; // rax
  __m128i v16; // xmm1
  __int64 v18; // rax
  __int64 v19; // [rsp+8h] [rbp-70h]
  _DWORD v20[2]; // [rsp+10h] [rbp-68h] BYREF
  char *v21; // [rsp+18h] [rbp-60h]
  __int64 v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+28h] [rbp-50h]
  int v24; // [rsp+2Ch] [rbp-4Ch]
  const char *v25; // [rsp+30h] [rbp-48h]
  __int64 v26; // [rsp+38h] [rbp-40h]
  char v27; // [rsp+40h] [rbp-38h] BYREF

  v7 = a1 + 4992;
  sub_11FBFB0(a1, a2, a3, a4);
  v8 = 0;
  v9 = (const __m128i *)v20;
  v20[1] = 0;
  *(_QWORD *)a1 = off_2C0CB88;
  v21 = "3";
  v24 = 0;
  v20[0] = 3114;
  v22 = 1;
  v23 = 193;
  v25 = "CL1.2";
  v26 = 5;
  *(_DWORD *)(a1 + 4992) = 0;
  *(_QWORD *)(a1 + 5000) = 0;
  *(_QWORD *)(a1 + 5008) = a1 + 4992;
  *(_QWORD *)(a1 + 5016) = a1 + 4992;
  *(_QWORD *)(a1 + 5024) = 0;
  do
  {
    if ( v8 && *(_DWORD *)(*(_QWORD *)(a1 + 5016) + 32LL) < v9->m128i_i32[0] )
      goto LABEL_12;
    v10 = *(_QWORD *)(a1 + 5000);
    if ( !v10 )
    {
      v10 = v7;
LABEL_16:
      if ( *(_QWORD *)(a1 + 5008) != v10 )
      {
        v19 = v8;
        v18 = std::_Rb_tree_decrement();
        v8 = v19;
        if ( v9->m128i_i32[0] <= *(_DWORD *)(v18 + 32) )
          goto LABEL_13;
      }
LABEL_12:
      v15 = operator new(0x38u);
      v16 = _mm_loadu_si128(v9);
      *(_QWORD *)(v15 + 48) = v9[1].m128i_i64[0];
      *(__m128i *)(v15 + 32) = v16;
      std::_Rb_tree_insert_and_rebalance();
      v8 = *(_QWORD *)(a1 + 5024) + 1LL;
      *(_QWORD *)(a1 + 5024) = v8;
      goto LABEL_13;
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
      goto LABEL_16;
    if ( v11 > v14 )
      goto LABEL_12;
LABEL_13:
    v9 = (const __m128i *)((char *)v9 + 24);
  }
  while ( v9 != (const __m128i *)&v27 );
  return sub_1199440(a2, a4);
}

