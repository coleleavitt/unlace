__int64 __fastcall sub_C59A30(
        unsigned __int64 a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7)
{
  __int64 v8; // rax
  __int64 v12; // rbx
  unsigned int v13; // r12d
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned int v23; // ebx
  char v25; // al
  __int64 v26; // [rsp-8h] [rbp-60h]
  int v27; // [rsp+14h] [rbp-44h]

  v8 = a3;
  v12 = a6[2].m128i_i64[0];
  v13 = a6[17].m128i_u32[0];
  v14 = *(unsigned int *)(v12 + 144);
  v15 = *(unsigned int *)(v12 + 148);
  v16 = *(_DWORD *)(v12 + 160) + 1;
  *(_DWORD *)(v12 + 160) = v16;
  if ( v14 + 1 > v15 )
  {
    v27 = v16;
    sub_2237220(v12 + 136, v12 + 152, v14 + 1, 4);
    v14 = *(unsigned int *)(v12 + 144);
    v8 = a3;
    v16 = v27;
  }
  *(_DWORD *)(*(_QWORD *)(v12 + 136) + 4 * v14) = v16;
  ++*(_DWORD *)(v12 + 144);
  v17 = a6[2].m128i_i64[0];
  v18 = *(unsigned int *)(v17 + 128);
  v19 = (unsigned int)(*(_DWORD *)(v17 + 160) + 1);
  *(_DWORD *)(v17 + 160) = v19;
  v20 = (v19 << 32) | v18;
  if ( (unsigned __int8)sub_C57730(v8, a4, a5, v20, (__int64)a6, a5, 0, 0)
    && (v25 = sub_C57D50(a1, a2, a5, v20, a5, a6, a7), v21 = v26, v25) )
  {
    v23 = sub_C56320((__int64)a6, 1, v13, v26, v22);
  }
  else
  {
    v23 = 0;
    if ( v13 != -1 )
      sub_C56320((__int64)a6, 0, v13, v21, v22);
  }
  --*(_DWORD *)(a6[2].m128i_i64[0] + 144);
  return v23;
}
