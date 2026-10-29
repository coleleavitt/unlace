bool __fastcall sub_7E8B00(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  bool result; // al
  __int64 v7; // r15
  __int32 v8; // eax
  __int64 v9; // rax
  __int64 v10; // r15
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rax
  unsigned int v13; // edx
  unsigned __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rax
  unsigned int v21; // edx
  unsigned __int64 v22; // rsi
  __int64 v23; // rdi
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // r15
  __m128i v27; // xmm0
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm0
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int32 v35; // [rsp+8h] [rbp-80h]
  __int64 v36; // [rsp+8h] [rbp-80h]
  __int64 v37; // [rsp+8h] [rbp-80h]
  __int64 v38; // [rsp+8h] [rbp-80h]
  unsigned int v39; // [rsp+24h] [rbp-64h] BYREF
  char *v40; // [rsp+28h] [rbp-60h] BYREF
  __m128i v41; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v42; // [rsp+48h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v40 = *a2;
  v3 = &v40[a3];
  if ( __CFADD__(a3, v40)
    || !sub_7E30F0((_DWORD *)a1, (unsigned __int64 *)&v40)
    || !sub_7E30F0(&v41, (unsigned __int64 *)&v40) )
  {
    return 0;
  }
  v7 = v41.m128i_u32[0];
  v8 = v41.m128i_i32[0];
  if ( v41.m128i_u32[0] != *(_QWORD *)(a1 + 16) )
  {
    v35 = v41.m128i_i32[0];
    sub_7DE7A0((__int64 *)(a1 + 8), v41.m128i_u32[0]);
    v8 = v35;
  }
  if ( v8 )
  {
    v9 = 24 * v7;
    v10 = 0;
    v36 = v9;
    while ( (unsigned __int8)sub_7E1CF0(
                               (__int64 *)(v10 + *(_QWORD *)(a1 + 8)),
                               (const void **)&v40,
                               (unsigned __int64)v3) )
    {
      v10 += 24;
      if ( v36 == v10 )
        goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  if ( !sub_7E30F0(&v39, (unsigned __int64 *)&v40) )
    return 0;
  v11 = v39;
  v12 = *(_QWORD *)(a1 + 40);
  v13 = v39;
  if ( v39 != v12 )
  {
    v41 = 0;
    if ( v39 >= v12 )
    {
      v14 = *(_QWORD *)(a1 + 32);
      v15 = a1 + 32;
      v16 = *(_QWORD *)(a1 + 48);
      if ( (unsigned __int64)&v41 < v14 || (unsigned __int64)&v41 >= v14 + 16 * v16 )
      {
        if ( v16 >= v39
          || (v31 = qvector_reserve(v15, v14, v39, 16),
              *(_QWORD *)(a1 + 32) = v31,
              v14 = v31,
              v12 = *(_QWORD *)(a1 + 40),
              v12 < v11) )
        {
          v27 = _mm_load_si128(&v41);
          while ( 1 )
          {
            v28 = v12++;
            *(__m128i *)(v14 + 16 * v28) = v27;
            if ( v11 == v12 )
              break;
            v14 = *(_QWORD *)(a1 + 32);
          }
        }
      }
      else if ( v16 >= v39
             || (v32 = qvector_reserve(v15, v14, v39, 16),
                 *(_QWORD *)(a1 + 32) = v32,
                 v14 = v32,
                 v12 = *(_QWORD *)(a1 + 40),
                 v12 < v11) )
      {
        while ( 1 )
        {
          v17 = v12++;
          *(_OWORD *)(v14 + 16 * v17) = 0;
          if ( v11 == v12 )
            break;
          v14 = *(_QWORD *)(a1 + 32);
        }
      }
      *(_QWORD *)(a1 + 40) = v11;
LABEL_24:
      v37 = 16 * v11;
      v18 = 0;
      while ( (unsigned __int8)sub_7E65D0((__int64 *)(v18 + *(_QWORD *)(a1 + 32)), (unsigned __int64 *)&v40, v3 - v40) )
      {
        v18 += 16;
        if ( v18 == v37 )
          goto LABEL_28;
      }
      return 0;
    }
    *(_QWORD *)(a1 + 40) = v39;
  }
  if ( v13 )
    goto LABEL_24;
LABEL_28:
  if ( !sub_7E30F0(&v39, (unsigned __int64 *)&v40) )
    return 0;
  v19 = v39;
  v20 = *(_QWORD *)(a1 + 64);
  v21 = v39;
  if ( v39 != v20 )
  {
    v41 = 0;
    if ( v39 >= v20 )
    {
      v22 = *(_QWORD *)(a1 + 56);
      v23 = a1 + 56;
      v24 = *(_QWORD *)(a1 + 72);
      if ( (unsigned __int64)&v41 < v22 || (unsigned __int64)&v41 >= v22 + 16 * v24 )
      {
        if ( v24 >= v39
          || (v33 = qvector_reserve(v23, v22, v39, 16),
              *(_QWORD *)(a1 + 56) = v33,
              v22 = v33,
              v20 = *(_QWORD *)(a1 + 64),
              v20 < v19) )
        {
          v29 = _mm_load_si128(&v41);
          while ( 1 )
          {
            v30 = v20++;
            *(__m128i *)(v22 + 16 * v30) = v29;
            if ( v19 == v20 )
              break;
            v22 = *(_QWORD *)(a1 + 56);
          }
        }
      }
      else if ( v24 >= v39
             || (v34 = qvector_reserve(v23, v22, v39, 16),
                 *(_QWORD *)(a1 + 56) = v34,
                 v22 = v34,
                 v20 = *(_QWORD *)(a1 + 64),
                 v20 < v19) )
      {
        while ( 1 )
        {
          v25 = v20++;
          *(_OWORD *)(v22 + 16 * v25) = 0;
          if ( v19 == v20 )
            break;
          v22 = *(_QWORD *)(a1 + 56);
        }
      }
      *(_QWORD *)(a1 + 64) = v19;
LABEL_38:
      v38 = 16 * v19;
      v26 = 0;
      while ( (unsigned __int8)sub_7E65D0((__int64 *)(v26 + *(_QWORD *)(a1 + 56)), (unsigned __int64 *)&v40, v3 - v40) )
      {
        v26 += 16;
        if ( v38 == v26 )
          goto LABEL_44;
      }
      return 0;
    }
    *(_QWORD *)(a1 + 64) = v39;
  }
  if ( v21 )
    goto LABEL_38;
LABEL_44:
  result = sub_7E3F30((_QWORD *)(a1 + 80), (unsigned __int64 *)&v40);
  if ( !result )
    return 0;
  *a2 = v40;
  return result;
}
