void __fastcall sub_17F13C0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int32 a5, unsigned int a6)
{
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // r10d
  __int64 v21; // rax
  unsigned int v22; // ecx
  _QWORD *v23; // rsi
  __int64 v24; // rdi
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // esi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __m128i v40; // xmm0
  int v41; // eax
  _QWORD *v42; // r11
  __m128i v43; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v44; // [rsp+18h] [rbp-50h] BYREF
  __m128i v45; // [rsp+20h] [rbp-48h] BYREF
  __m128 v46[3]; // [rsp+30h] [rbp-38h] BYREF

  v8 = *(_QWORD *)(a1 + 192);
  v44 = a3;
  v9 = sub_1A5B7C0(a1, v8, a3, a6, 0, 0);
  v45.m128i_i64[0] = a2;
  v45.m128i_i32[2] = a5;
  if ( !v9 || (v14 = v9, ((*(_BYTE *)(v9 + 28) + 94) & 0x7Fu) > 0xC) )
  {
    v15 = sub_17E04F0(a1 + 2720, &v44, v10, v11, v12, v13);
    v17 = v15;
    v18 = *(_BYTE *)v15 & 1;
    if ( (*(_BYTE *)v15 & 1) != 0 )
    {
      v16 = v45.m128i_i64[0];
      v19 = v15 + 8;
      v20 = 1;
      v21 = 32;
      v22 = ((unsigned __int8)((unsigned __int32)v45.m128i_i32[0] >> 4)
           ^ (unsigned __int8)((unsigned __int32)v45.m128i_i32[0] >> 9))
          & 1;
      v23 = (_QWORD *)(v19
                     + 16LL
                     * (((unsigned __int8)((unsigned __int32)v45.m128i_i32[0] >> 4)
                       ^ (unsigned __int8)((unsigned __int32)v45.m128i_i32[0] >> 9))
                      & 1));
      v24 = *v23;
      if ( *v23 == v45.m128i_i64[0] )
      {
LABEL_8:
        sub_1605170(v46, v23, (_QWORD *)(v21 + v19), v17, 1);
        return;
      }
    }
    else
    {
      v29 = *(unsigned int *)(v15 + 16);
      if ( !(_DWORD)v29 )
      {
        v23 = nullptr;
        goto LABEL_23;
      }
      v16 = v45.m128i_i64[0];
      v20 = v29 - 1;
      v19 = *(_QWORD *)(v17 + 8);
      v22 = (v29 - 1) & (((unsigned __int32)v45.m128i_i32[0] >> 4) ^ ((unsigned __int32)v45.m128i_i32[0] >> 9));
      v23 = (_QWORD *)(v19 + 16LL * v22);
      v24 = *v23;
      if ( *v23 == v45.m128i_i64[0] )
      {
LABEL_17:
        v21 = 16 * v29;
        goto LABEL_8;
      }
    }
    v41 = 1;
    v42 = nullptr;
    if ( v24 != -4096 )
    {
      while ( 1 )
      {
        if ( v24 == -8192 && !v42 )
          v42 = v23;
        v22 = v20 & (v41 + v22);
        v23 = (_QWORD *)(v19 + 16LL * v22);
        v24 = *v23;
        if ( v16 == *v23 )
          break;
        if ( v24 == -4096 )
        {
          if ( v42 )
            v23 = v42;
          goto LABEL_23;
        }
        ++v41;
      }
      if ( !(_BYTE)v18 )
      {
        v29 = *(unsigned int *)(v17 + 16);
        goto LABEL_17;
      }
      v21 = 32;
      goto LABEL_8;
    }
LABEL_23:
    v46[0].m128_u64[0] = (unsigned __int64)v23;
    v30 = (*(_DWORD *)v17 >> 1) + 1;
    if ( (*(_BYTE *)v17 & 1) != 0 )
    {
      v32 = 6;
      v31 = 2;
    }
    else
    {
      v31 = *(_DWORD *)(v17 + 16);
      v32 = 3 * v31;
    }
    v33 = (unsigned int)(4 * v30);
    if ( (unsigned int)v32 <= (unsigned int)v33 )
    {
      sub_160BE60(v17, 2 * v31, v33, v32, v18, v16);
    }
    else
    {
      v34 = v31 - (v30 + *(_DWORD *)(v17 + 4));
      v35 = v31 >> 3;
      if ( (unsigned int)v34 > (unsigned int)v35 )
      {
LABEL_27:
        *(_DWORD *)v17 = *(_DWORD *)v17 & 1 | (2 * v30);
        v36 = v46[0].m128_u64[0];
        if ( *(_QWORD *)v46[0].m128_u64[0] != -4096 )
          --*(_DWORD *)(v17 + 4);
        *(_QWORD *)v36 = v45.m128i_i64[0];
        *(_DWORD *)(v36 + 8) = v45.m128i_i32[2];
        if ( (*(_BYTE *)v17 & 1) != 0 )
        {
          v37 = v17 + 8;
          v38 = 32;
        }
        else
        {
          v37 = *(_QWORD *)(v17 + 8);
          v38 = 16LL * *(unsigned int *)(v17 + 16);
        }
        sub_1605170(v46, (_QWORD *)v36, (_QWORD *)(v38 + v37), v17, 1);
        v39 = *(unsigned int *)(v17 + 48);
        v40 = _mm_load_si128(&v45);
        if ( v39 + 1 > (unsigned __int64)*(unsigned int *)(v17 + 52) )
        {
          v43 = v40;
          sub_2237220(v17 + 40, v17 + 56, v39 + 1, 16);
          v39 = *(unsigned int *)(v17 + 48);
          v40 = _mm_load_si128(&v43);
        }
        *(__m128i *)(*(_QWORD *)(v17 + 40) + 16 * v39) = v40;
        ++*(_DWORD *)(v17 + 48);
        return;
      }
      sub_160BE60(v17, v31, v35, v34, v18, v16);
    }
    sub_17AC7B0(v17, v45.m128i_i64, v46);
    v30 = (*(_DWORD *)v17 >> 1) + 1;
    goto LABEL_27;
  }
  if ( (*(_BYTE *)(v9 + 29) & 1) == 0 )
  {
LABEL_4:
    sub_1806F90(a1, *(_QWORD *)(a1 + 192), v14, &v45);
    return;
  }
  v25 = sub_B8C3D0(v9, v8, v10, v11, v12, v13);
  v26 = *v25;
  v27 = *v25 + 8LL * *((unsigned int *)v25 + 2);
  if ( *v25 >= v27 )
  {
    if ( v26 != v27 )
    {
      while ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 411 )
      {
        v27 += 8LL;
        if ( v26 == v27 )
          goto LABEL_13;
      }
      return;
    }
  }
  else
  {
    v28 = *v25;
    while ( *(_WORD *)(*(_QWORD *)v28 + 36LL) != 411 )
    {
      v28 += 8LL;
      if ( v27 == v28 )
        goto LABEL_13;
    }
    if ( v27 != v28 )
      return;
  }
LABEL_13:
  if ( (*(_BYTE *)(v14 + 28) & 0x7Fu) - 18 <= 0x3F )
    goto LABEL_4;
}
