__int64 __fastcall sub_1BA32D0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int16 *v6; // r12
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  const __m128i *v10; // r13
  __int32 v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  __int64 v14; // rdi
  __int16 v15; // ax
  unsigned int v16; // esi
  __m128 v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  int v22; // r9d
  __int8 v23; // al
  int v24; // ecx
  __m128i v25; // xmm1
  int v26; // edx
  int v27; // esi
  __m128i v28; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+10h] [rbp-A8h]
  __m128i v30; // [rsp+20h] [rbp-98h]
  __int64 v31; // [rsp+30h] [rbp-88h]
  const __m128i *v32; // [rsp+40h] [rbp-78h] BYREF
  __int32 v33; // [rsp+48h] [rbp-70h]
  __int64 v34; // [rsp+50h] [rbp-68h]
  __int64 v35; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v36; // [rsp+60h] [rbp-58h]
  __int8 v37; // [rsp+64h] [rbp-54h]
  char v38; // [rsp+68h] [rbp-50h]
  __int16 v39; // [rsp+70h] [rbp-48h]
  __m128 v40; // [rsp+78h] [rbp-40h]
  char v41; // [rsp+88h] [rbp-30h]

  v6 = *(unsigned __int16 **)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
  v7 = sub_EEE170(a2);
  sub_1B7D0C0((__int64)&v28, a1, *(unsigned int *)(a2 + 4), v7, v6, 0, a3, a4);
  if ( (_BYTE)v29 )
    return 1;
  v10 = *(const __m128i **)(*a1 + 744);
  v11 = v10[2].m128i_i32[0];
  v12 = v10[4].m128i_i8[0] == 0;
  v32 = v10;
  v33 = v11;
  v13 = v10[2].m128i_i64[1];
  v38 = 0;
  v34 = v13;
  if ( v12 )
  {
    v14 = (__int64)v10;
  }
  else
  {
    v36 = v10[3].m128i_u32[2];
    if ( v36 > 0x40 )
    {
      sub_2205510(&v35);
      v14 = *(_QWORD *)(*a1 + 744);
    }
    else
    {
      v14 = (__int64)v10;
      v35 = v10[3].m128i_i64[0];
    }
    v23 = v10[3].m128i_i8[12];
    v38 = 1;
    v37 = v23;
  }
  v15 = v10[4].m128i_i16[4];
  v16 = *(_DWORD *)(a2 + 4);
  v41 = 1;
  v17 = (__m128)_mm_loadu_si128(v10 + 5);
  v39 = v15;
  v40 = v17;
  sub_1AA56C0(v14, v16);
  v21 = sub_1B7AA40(
          a1,
          *(_WORD **)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16),
          0,
          v17,
          a4,
          v18,
          v19,
          v20);
  if ( v21 == 1 )
  {
    v8 = 1;
  }
  else
  {
    v24 = *(_DWORD *)(a2 + 12);
    v25 = _mm_load_si128(&v28);
    v26 = *(_DWORD *)(a2 + 8);
    v31 = v29;
    v27 = *(_DWORD *)(a2 + 4);
    v30 = v25;
    v8 = sub_1C3AC70(*a1, v27, v26, v24, (unsigned int)v21 & 0xFFFFFFFE, v22, v25.m128i_i64[0], v25.m128i_i64[1], v29);
  }
  sub_15354C0((__int64)&v32);
  return v8;
}
