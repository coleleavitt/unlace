__int64 __fastcall sub_EA89C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5, __int64 a6)
{
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __m128i v14; // xmm0
  __m128i v16; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v17; // [rsp+10h] [rbp-48h] BYREF
  __m128i v18; // [rsp+20h] [rbp-38h]
  _QWORD *v19; // [rsp+30h] [rbp-28h]

  v7 = *(_QWORD *)(a1 + 8);
  v8 = (*(_BYTE *)(a2 + 28) & 0x7F) - 34;
  if ( v8 > 0x11 )
  {
    v11 = *(_QWORD *)(a2 + 40);
    goto LABEL_11;
  }
  v9 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  v10 = *(_QWORD *)(a2 + 56) & 4LL;
  if ( (*(_QWORD *)(a2 + 56) & 4) == 0 )
  {
    if ( !v9 )
      goto LABEL_5;
    goto LABEL_4;
  }
  v9 = (__int64 *)v9[4];
  if ( v9 )
  {
LABEL_4:
    sub_EA8520(*(_QWORD *)(a1 + 8), *v9, (__int64)v9, v10, (__int64)a5, a6);
    v7 = *(_QWORD *)(a1 + 8);
    v8 = (*(_BYTE *)(a2 + 28) & 0x7F) - 34;
  }
LABEL_5:
  v11 = *(_QWORD *)(a2 + 40);
  if ( v8 > 5 )
  {
LABEL_11:
    v16.m128i_i64[0] = v11;
    v16.m128i_i32[2] = 0;
    sub_B85890(&v17, v11);
    v13 = v17;
    v18 = _mm_load_si128(&v16);
    goto LABEL_7;
  }
  v12 = *(unsigned int *)(a2 + 24);
  v13 = *(_QWORD **)(a2 + 160);
  v16.m128i_i64[0] = *(_QWORD *)(a2 + 40);
  v16.m128i_i32[2] = v12;
  v14 = _mm_load_si128(&v16);
  v17 = v13;
  v18 = v14;
LABEL_7:
  v19 = v13;
  return sub_EA4BE0(v7, v11, v12, v10, a5, a6, v18.m128i_u64[0], v18.m128i_i32[2], v13);
}
