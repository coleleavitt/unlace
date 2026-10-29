__int64 __fastcall sub_1976340(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx
  const __m128i *v11; // r13
  __int32 v12; // eax
  bool v13; // zf
  __int64 v14; // rax
  const __m128i *v15; // rdi
  __int16 v16; // ax
  __int64 v17; // rsi
  __m128 v18; // xmm0
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  int v23; // r9d
  __int8 v24; // al
  int v25; // ecx
  __m128i v26; // xmm1
  int v27; // edx
  int v28; // esi
  __m128i v29; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+10h] [rbp-A8h]
  __m128i v31; // [rsp+20h] [rbp-98h]
  __int64 v32; // [rsp+30h] [rbp-88h]
  const __m128i *v33; // [rsp+40h] [rbp-78h] BYREF
  __int32 v34; // [rsp+48h] [rbp-70h]
  __int64 v35; // [rsp+50h] [rbp-68h]
  __int64 v36; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v37; // [rsp+60h] [rbp-58h]
  __int8 v38; // [rsp+64h] [rbp-54h]
  char v39; // [rsp+68h] [rbp-50h]
  __int16 v40; // [rsp+70h] [rbp-48h]
  __m128 v41; // [rsp+78h] [rbp-40h]
  char v42; // [rsp+88h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
  v7 = sub_EEE170(a2);
  sub_19346D0((__int64)&v29, a1, *(_DWORD *)(a2 + 4), v7, v6, 0, a3, a4);
  if ( (_BYTE)v30 )
    return 1;
  v11 = *(const __m128i **)(*a1 + 744);
  v12 = v11[2].m128i_i32[0];
  v13 = v11[4].m128i_i8[0] == 0;
  v33 = v11;
  v34 = v12;
  v14 = v11[2].m128i_i64[1];
  v39 = 0;
  v35 = v14;
  if ( v13 )
  {
    v15 = v11;
  }
  else
  {
    v37 = v11[3].m128i_u32[2];
    if ( v37 > 0x40 )
    {
      sub_2205510(&v36);
      v15 = *(const __m128i **)(*a1 + 744);
    }
    else
    {
      v15 = v11;
      v36 = v11[3].m128i_i64[0];
    }
    v24 = v11[3].m128i_i8[12];
    v39 = 1;
    v38 = v24;
  }
  v16 = v11[4].m128i_i16[4];
  v17 = *(unsigned int *)(a2 + 4);
  v42 = 1;
  v18 = (__m128)_mm_loadu_si128(v11 + 5);
  v40 = v16;
  v41 = v18;
  sub_1AA56C0(v15, v17, v8);
  v22 = sub_1975200(
          a1,
          *(_WORD **)(a2 + 8LL * ((unsigned int)((*(_WORD *)a2 & 0x200) != 0) + 1) + 16),
          0,
          v18,
          a4,
          v19,
          v20,
          v21);
  if ( v22 == 1 )
  {
    v9 = 1;
  }
  else
  {
    v25 = *(_DWORD *)(a2 + 12);
    v26 = _mm_load_si128(&v29);
    v27 = *(_DWORD *)(a2 + 8);
    v32 = v30;
    v28 = *(_DWORD *)(a2 + 4);
    v31 = v26;
    v9 = sub_1C3AC70(*a1, v28, v27, v25, (unsigned int)v22 & 0xFFFFFFFE, v23, v26.m128i_i64[0], v26.m128i_i64[1], v30);
  }
  sub_15354C0((__int64)&v33);
  return v9;
}
