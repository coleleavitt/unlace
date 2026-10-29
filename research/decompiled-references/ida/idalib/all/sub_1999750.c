__int64 __fastcall sub_1999750(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbx
  unsigned __int16 *v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __m128i v10; // kr00_16
  const __m128i *v11; // r15
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
  __int8 v23; // al
  __int64 v24; // r15
  __int64 v25; // rax
  int v26; // r9d
  unsigned __int64 v27; // r8
  int v28; // ecx
  int v29; // edx
  int v30; // esi
  __int64 v31; // rdi
  __int64 v32; // [rsp+8h] [rbp-D0h]
  __m128i v33; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+20h] [rbp-B8h]
  __m128i v35; // [rsp+30h] [rbp-A8h]
  __int64 v36; // [rsp+40h] [rbp-98h]
  const __m128i *v37; // [rsp+50h] [rbp-88h] BYREF
  __int32 v38; // [rsp+58h] [rbp-80h]
  __int64 v39; // [rsp+60h] [rbp-78h]
  __int64 v40; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v41; // [rsp+70h] [rbp-68h]
  __int8 v42; // [rsp+74h] [rbp-64h]
  char v43; // [rsp+78h] [rbp-60h]
  __int16 v44; // [rsp+80h] [rbp-58h]
  __m128 v45; // [rsp+88h] [rbp-50h]
  char v46; // [rsp+98h] [rbp-40h]

  v5 = a2;
  v6 = *(unsigned __int16 **)(a2 + 8LL * ((*(_WORD *)a2 & 0x200) != 0) + 16);
  v7 = sub_EEE170(a2);
  sub_197B180((__int64)&v33, a1, *(_DWORD *)(a2 + 4), v7, v6, 0, a3, a4);
  if ( (_BYTE)v34 )
    return 1;
  v10 = v33;
  v11 = *(const __m128i **)(*a1 + 744);
  v12 = v11[2].m128i_i32[0];
  v13 = v11[4].m128i_i8[0] == 0;
  v37 = v11;
  v38 = v12;
  v14 = v11[2].m128i_i64[1];
  v43 = 0;
  v39 = v14;
  if ( v13 )
  {
    v15 = v11;
  }
  else
  {
    v41 = v11[3].m128i_u32[2];
    if ( v41 > 0x40 )
    {
      sub_2205510(&v40);
      v15 = *(const __m128i **)(*a1 + 744);
    }
    else
    {
      v15 = v11;
      v40 = v11[3].m128i_i64[0];
    }
    v23 = v11[3].m128i_i8[12];
    v43 = 1;
    v42 = v23;
  }
  v16 = v11[4].m128i_i16[4];
  v17 = *(unsigned int *)(a2 + 4);
  v46 = 1;
  v18 = (__m128)_mm_loadu_si128(v11 + 5);
  v44 = v16;
  v45 = v18;
  sub_1AA56C0(v15, v17, v8);
  v22 = sub_1998500(
          a1,
          *(unsigned __int16 **)(v5 + 8LL * ((unsigned int)((*(_WORD *)v5 & 0x200) != 0) + 1) + 16),
          0,
          v18,
          a4,
          v19,
          v20,
          v21);
  if ( v22 == 1 )
  {
    v5 = 1;
  }
  else
  {
    v32 = v22;
    v24 = *(_QWORD *)(v5 + 8LL * ((*(_WORD *)v5 & 0x200) != 0) + 16);
    v25 = sub_EEE170(v5);
    v27 = v32 & 0xFFFFFFFFFFFFFFFELL;
    if ( v24 != (v10.m128i_i64[1] & 0xFFFFFFFFFFFFFFFELL)
      || v25 != v10.m128i_i64[0]
      || *(_QWORD *)(v5 + 8LL * ((unsigned int)((*(_WORD *)v5 & 0x200) != 0) + 1) + 16) != v27 )
    {
      v28 = *(_DWORD *)(v5 + 12);
      v29 = *(_DWORD *)(v5 + 8);
      v35 = _mm_load_si128(&v33);
      v30 = *(_DWORD *)(v5 + 4);
      v31 = *a1;
      v36 = v34;
      v5 = sub_1C3AC70(v31, v30, v29, v28, v27, v26, v35.m128i_i64[0], v35.m128i_i64[1], v34);
    }
  }
  sub_15354C0((__int64)&v37);
  return v5;
}
