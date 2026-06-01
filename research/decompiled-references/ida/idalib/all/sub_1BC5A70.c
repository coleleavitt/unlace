__int64 __fastcall sub_1BC5A70(__int64 *a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v5; // rbp
  const __m128i *v6; // rbx
  __int32 v7; // eax
  bool v8; // zf
  __int64 v9; // rax
  __int64 v10; // rdi
  __int8 v11; // al
  __int16 v12; // ax
  __m128 v13; // xmm0
  unsigned int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  const __m128i *v26; // [rsp+0h] [rbp-78h] BYREF
  __int32 v27; // [rsp+8h] [rbp-70h]
  __int64 v28; // [rsp+10h] [rbp-68h]
  __int64 v29; // [rsp+18h] [rbp-60h] BYREF
  unsigned int v30; // [rsp+20h] [rbp-58h]
  __int8 v31; // [rsp+24h] [rbp-54h]
  char v32; // [rsp+28h] [rbp-50h]
  __int16 v33; // [rsp+30h] [rbp-48h]
  __m128 v34; // [rsp+38h] [rbp-40h]
  char v35; // [rsp+48h] [rbp-30h]

  v5 = a2;
  v6 = *(const __m128i **)(*a1 + 744);
  v7 = v6[2].m128i_i32[0];
  v8 = v6[4].m128i_i8[0] == 0;
  v26 = v6;
  v27 = v7;
  v9 = v6[2].m128i_i64[1];
  v32 = 0;
  v28 = v9;
  if ( v8 )
  {
    v10 = (__int64)v6;
  }
  else
  {
    v30 = v6[3].m128i_u32[2];
    if ( v30 > 0x40 )
    {
      sub_2205510(&v29);
      v10 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v10 = (__int64)v6;
      v29 = v6[3].m128i_i64[0];
    }
    v11 = v6[3].m128i_i8[12];
    v32 = 1;
    v31 = v11;
  }
  v12 = v6[4].m128i_i16[4];
  v13 = (__m128)_mm_loadu_si128(v6 + 5);
  v35 = 1;
  v14 = *(_DWORD *)(a2 + 4);
  v33 = v12;
  v34 = v13;
  sub_1AA58B0(v10, v14);
  v20 = sub_1B71AD0(a1, *(const __m128i **)(v5 + 8), 0, v13, a4, v15, v16, v17);
  if ( v20 == 1 || (v23 = sub_1B73BE0(a1, *(_QWORD *)(v5 + 16), v18, v13, a4, v19, v21), v23 == 1) )
  {
    v5 = 1;
  }
  else
  {
    v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
    v25 = v20 & 0xFFFFFFFFFFFFFFFELL;
    if ( *(_DWORD *)(*a1 + 12632) || v24 != *(_QWORD *)(v5 + 16) || *(_QWORD *)(v5 + 8) != v25 )
      v5 = sub_1C3AA30(
             *a1,
             *(_DWORD *)(v5 + 4),
             v25,
             *(_DWORD *)(v5 + 24),
             *(_DWORD *)(v5 + 24),
             v24,
             *(_DWORD *)(v5 + 28));
  }
  sub_15354C0((__int64)&v26);
  return v5;
}
