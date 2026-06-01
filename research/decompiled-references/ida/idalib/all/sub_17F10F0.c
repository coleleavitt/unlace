void __fastcall sub_17F10F0(__int64 a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int32 v4; // r12d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  char v20; // cl
  __int64 v21; // rax
  _QWORD *v22; // rsi
  __int64 v23; // rdi
  _QWORD *v24; // rdx
  __int64 v25; // rax
  int v26; // eax
  _QWORD *v27; // r10
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // esi
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __m128i v39; // xmm0
  __m128i v40; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v41; // [rsp+18h] [rbp-50h] BYREF
  __m128i v42; // [rsp+20h] [rbp-48h] BYREF
  __m128 v43[3]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a4;
  v41 = a2;
  v10 = sub_1A5B7C0(a1, *(_QWORD *)(a1 + 192), a2, a4, 0, 0);
  if ( v10 )
  {
    v11 = sub_B32AD0(*(_QWORD *)(a1 + 248), ((unsigned __int64)a3 << 32) | a3, 0);
    sub_B8CC60(v10, v11, v12, v13, v14, v15);
    return;
  }
  v16 = sub_17E04F0(a1 + 2720, &v41, v6, v7, v8, v9);
  v42.m128i_i32[2] = v4;
  v42.m128i_i64[0] = 0;
  v19 = v16;
  v20 = *(_BYTE *)v16 & 1;
  if ( v20 )
  {
    v23 = *(_QWORD *)(v16 + 8);
    v22 = (_QWORD *)(v16 + 8);
    v25 = 4;
    v24 = v22;
    if ( !v23 )
    {
LABEL_8:
      sub_1605170(v43, v22, &v24[v25], v19, 1);
      return;
    }
    v26 = 1;
  }
  else
  {
    v21 = *(unsigned int *)(v16 + 16);
    if ( !(_DWORD)v21 )
      goto LABEL_13;
    v22 = *(_QWORD **)(v19 + 8);
    v23 = *v22;
    if ( !*v22 )
    {
      v24 = *(_QWORD **)(v19 + 8);
LABEL_7:
      v25 = 2 * v21;
      goto LABEL_8;
    }
    v26 = v21 - 1;
  }
  v27 = v22;
  v18 = 1;
  v28 = 0;
  if ( v23 != -4096 )
  {
    while ( 1 )
    {
      if ( v23 != -8192 || v10 )
        v27 = (_QWORD *)v10;
      v28 = v26 & (v18 + v28);
      v17 = &v22[2 * v28];
      v23 = *v17;
      if ( !*v17 )
      {
        if ( !v20 )
        {
          v24 = v22;
          v21 = *(unsigned int *)(v19 + 16);
          v22 = v17;
          goto LABEL_7;
        }
        v24 = v22;
        v25 = 4;
        v22 = v17;
        goto LABEL_8;
      }
      if ( v23 == -4096 )
        break;
      v10 = (__int64)v27;
      v18 = (unsigned int)(v18 + 1);
      v27 = &v22[2 * v28];
    }
    v10 = (__int64)v27;
    v22 += 2 * v28;
    if ( v27 )
      goto LABEL_13;
  }
  v10 = (__int64)v22;
LABEL_13:
  v43[0].m128_u64[0] = v10;
  v29 = (*(_DWORD *)v19 >> 1) + 1;
  if ( (*(_BYTE *)v19 & 1) != 0 )
  {
    v31 = 6;
    v30 = 2;
  }
  else
  {
    v30 = *(_DWORD *)(v19 + 16);
    v31 = 3 * v30;
  }
  v32 = (unsigned int)(4 * v29);
  if ( (unsigned int)v32 >= (unsigned int)v31 )
  {
    sub_160BE60(v19, 2 * v30, v32, v31, (__int64)v17, v18);
LABEL_27:
    sub_17AC7B0(v19, v42.m128i_i64, v43);
    v29 = (*(_DWORD *)v19 >> 1) + 1;
    goto LABEL_17;
  }
  v33 = v30 - (v29 + *(_DWORD *)(v19 + 4));
  v34 = v30 >> 3;
  if ( (unsigned int)v33 <= (unsigned int)v34 )
  {
    sub_160BE60(v19, v30, v34, v33, (__int64)v17, v18);
    goto LABEL_27;
  }
LABEL_17:
  *(_DWORD *)v19 = *(_DWORD *)v19 & 1 | (2 * v29);
  v35 = v43[0].m128_u64[0];
  if ( *(_QWORD *)v43[0].m128_u64[0] != -4096 )
    --*(_DWORD *)(v19 + 4);
  *(_QWORD *)v35 = v42.m128i_i64[0];
  *(_DWORD *)(v35 + 8) = v42.m128i_i32[2];
  if ( (*(_BYTE *)v19 & 1) != 0 )
  {
    v36 = v19 + 8;
    v37 = 32;
  }
  else
  {
    v36 = *(_QWORD *)(v19 + 8);
    v37 = 16LL * *(unsigned int *)(v19 + 16);
  }
  sub_1605170(v43, (_QWORD *)v35, (_QWORD *)(v37 + v36), v19, 1);
  v38 = *(unsigned int *)(v19 + 48);
  v39 = _mm_load_si128(&v42);
  if ( v38 + 1 > (unsigned __int64)*(unsigned int *)(v19 + 52) )
  {
    v40 = v39;
    sub_2237220(v19 + 40, v19 + 56, v38 + 1, 16);
    v38 = *(unsigned int *)(v19 + 48);
    v39 = _mm_load_si128(&v40);
  }
  *(__m128i *)(*(_QWORD *)(v19 + 40) + 16 * v38) = v39;
  ++*(_DWORD *)(v19 + 48);
}
