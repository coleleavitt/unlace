unsigned __int64 __fastcall sub_B8BB60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 result; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r14
  __int64 v16; // rcx
  unsigned __int16 v17; // ax
  __int16 v18; // ax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rax
  __int64 *v22; // rbx
  __int64 *v23; // rbp
  __int64 v24; // rdi
  unsigned __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  int v32; // esi
  bool v33; // zf
  __int32 v34; // edx
  __int64 v35; // rcx
  int v36; // edx
  unsigned __int64 v37; // rax
  __m128i *v38; // rax
  __m128i v39; // xmm1
  const __m128i *v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rsi
  unsigned __int64 v43; // [rsp+8h] [rbp-90h]
  __int64 v44; // [rsp+18h] [rbp-80h] BYREF
  __m128i v45; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v46; // [rsp+30h] [rbp-68h]
  __m128i v47; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v48; // [rsp+50h] [rbp-48h]

  v7 = *(_QWORD *)(a1 + 104);
  if ( !v7 )
  {
    sub_A55AE0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v7 = *(_QWORD *)(a1 + 104);
  }
  result = v7 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !result )
    return result;
  v9 = *(_QWORD *)result;
  if ( !*(_QWORD *)result )
    return result;
  v10 = sub_B6AC30(v9 + 48);
  v15 = v10;
  if ( !v10 )
  {
LABEL_13:
    v21 = *(_QWORD *)(v9 + 104);
    if ( v21 )
      goto LABEL_14;
    goto LABEL_22;
  }
  if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x4B )
  {
LABEL_7:
    v16 = *(_QWORD *)(v15 + 40);
    v17 = *(_WORD *)(v15 + 72);
    v46 = v15;
    v18 = v17 >> 14;
    v19 = v16 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v16 & 7) != 0 )
      v19 = 0;
    v45.m128i_i32[2] = v18 & 1;
    v45.m128i_i64[0] = v19;
    if ( !(unsigned __int8)sub_B86320((__int64 *)a2, v45.m128i_i64, &v44) )
    {
      v29 = *(unsigned int *)(a2 + 16);
      v30 = v44;
      v31 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
      v32 = 2 * v29;
      v13 = (unsigned int)(4 * v31);
      v47.m128i_i64[0] = v44;
      if ( (unsigned int)v13 < 3 * (int)v29 )
      {
        if ( (int)v29 - *(_DWORD *)(a2 + 12) - (int)v31 > (unsigned int)v29 >> 3 )
          goto LABEL_28;
        v32 = v29;
      }
      sub_B8B9B0(a2, v32, v31, v29, v13, v14);
      sub_B86320((__int64 *)a2, v45.m128i_i64, &v47);
      LODWORD(v31) = *(_DWORD *)(a2 + 8) + 1;
      v30 = v47.m128i_i64[0];
LABEL_28:
      v33 = *(_QWORD *)v30 == -4096;
      *(_DWORD *)(a2 + 8) = v31;
      if ( !v33 || *(_DWORD *)(v30 + 8) != -1 )
        --*(_DWORD *)(a2 + 12);
      v34 = v45.m128i_i32[2];
      v35 = v45.m128i_i64[0];
      *(_DWORD *)(v30 + 16) = 0;
      *(_DWORD *)(v30 + 8) = v34;
      v36 = *(_DWORD *)(a2 + 32);
      *(_QWORD *)v30 = v35;
      *(_DWORD *)(v30 + 16) = v36;
      v37 = *(unsigned int *)(a2 + 32);
      v12 = *(unsigned int *)(a2 + 36);
      if ( v37 >= v12 )
      {
        v39 = _mm_load_si128(&v45);
        v14 = *(_QWORD *)(a2 + 24);
        v48 = v46;
        v11 = v37 + 1;
        v13 = v14 + 24 * v37;
        v47 = v39;
        v40 = &v47;
        if ( v12 < v11 )
        {
          v41 = a2 + 24;
          v42 = a2 + 40;
          v43 = v14;
          if ( v14 > (unsigned __int64)&v47 || v13 <= (unsigned __int64)&v47 )
          {
            sub_22134E0(v41, v42, v11, 24);
            v11 = 3LL * *(unsigned int *)(a2 + 32);
            v13 = *(_QWORD *)(a2 + 24) + 24LL * *(unsigned int *)(a2 + 32);
            v40 = &v47;
          }
          else
          {
            sub_22134E0(v41, v42, v11, 24);
            v11 = *(_QWORD *)(a2 + 24);
            v14 = v43;
            v12 = 3LL * *(unsigned int *)(a2 + 32);
            v13 = v11 + 24LL * *(unsigned int *)(a2 + 32);
            v40 = (__m128i *)((char *)&v47 + v11 - v43);
          }
        }
        *(__m128i *)v13 = _mm_loadu_si128(v40);
        *(_QWORD *)(v13 + 16) = v40[1].m128i_i64[0];
        ++*(_DWORD *)(a2 + 32);
      }
      else
      {
        v38 = (__m128i *)(*(_QWORD *)(a2 + 24) + 24 * v37);
        v11 = v46;
        *v38 = _mm_load_si128(&v45);
        v38[1].m128i_i64[0] = v11;
        ++*(_DWORD *)(a2 + 32);
      }
    }
    while ( 1 )
    {
      v20 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v15 = v20;
      if ( !v20 )
        goto LABEL_13;
      if ( (*(_BYTE *)(v20 + 28) & 0x7F) == 0x4B )
        goto LABEL_7;
    }
  }
  while ( 1 )
  {
    v25 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v15 = v25;
    if ( !v25 )
      break;
    if ( (*(_BYTE *)(v25 + 28) & 0x7F) == 0x4B )
      goto LABEL_7;
  }
  v21 = *(_QWORD *)(v9 + 104);
  if ( v21 )
  {
LABEL_14:
    result = v21 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !result )
      return result;
    goto LABEL_15;
  }
LABEL_22:
  sub_A55AE0((__int64 *)(*(_QWORD *)(v9 + 96) + 88LL), *(_QWORD *)(v9 + 96), v11, v12, v13, v14);
  result = *(_QWORD *)(v9 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  if ( result )
  {
LABEL_15:
    v22 = *(__int64 **)(result + 8);
    result = *(unsigned int *)(result + 16);
    v23 = &v22[result];
    while ( v23 != v22 )
    {
      v24 = *v22++;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 104LL))(v24, a2);
LABEL_17:
      ;
    }
    return result;
  }
  if ( !*(_QWORD *)(v9 + 104) )
  {
    sub_A55AE0((__int64 *)(*(_QWORD *)(v9 + 96) + 88LL), *(_QWORD *)(v9 + 96), 0, v26, v27, v28);
    result = *(_QWORD *)(v9 + 104) & 0xFFFFFFFFFFFFFFF8LL;
    if ( result )
    {
      v22 = *(__int64 **)(result + 8);
      v23 = nullptr;
      goto LABEL_17;
    }
  }
  return result;
}

