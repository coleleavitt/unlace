__int64 __fastcall sub_ABE9D0(_QWORD *a1, __int64 *a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v10; // rax
  int v11; // ebp
  _QWORD *v12; // rax
  __int64 i; // rdx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  const __m128i *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int32 v33; // eax
  __int64 v34; // [rsp+0h] [rbp-98h]
  __int64 v36; // [rsp+18h] [rbp-80h]
  __int64 v37; // [rsp+18h] [rbp-80h]
  __int64 v38; // [rsp+18h] [rbp-80h]
  __int64 v39; // [rsp+18h] [rbp-80h]
  __int64 v40; // [rsp+20h] [rbp-78h]
  __int64 v41; // [rsp+20h] [rbp-78h]
  __int64 v42; // [rsp+20h] [rbp-78h]
  __int64 v43; // [rsp+20h] [rbp-78h]
  __int64 v44; // [rsp+28h] [rbp-70h]
  __int64 v45; // [rsp+38h] [rbp-60h] BYREF
  __m128i v46; // [rsp+40h] [rbp-58h] BYREF
  __int64 v47; // [rsp+50h] [rbp-48h]

  if ( a4 != a6 )
    return 1;
  v10 = *((unsigned int *)a2 + 2);
  v11 = *((_DWORD *)a2 + 2);
  if ( v10 != a4 )
  {
    v11 = a4;
    if ( v10 <= a4 )
    {
      if ( a4 > *((unsigned int *)a2 + 3) )
      {
        v34 = a5;
        sub_2237220(a2, a2 + 2, a4, 24);
        v10 = *((unsigned int *)a2 + 2);
        a5 = v34;
      }
      v12 = (_QWORD *)(*a2 + 24 * v10);
      for ( i = *a2 + 24 * a4; (_QWORD *)i != v12; *(v12 - 2) = 0 )
      {
        *v12 &= 0xFFFFFFFE00000000LL;
        v12 += 3;
      }
    }
    *((_DWORD *)a2 + 2) = a4;
  }
  v14 = 0;
  if ( !v11 )
    return 0;
  while ( 1 )
  {
    v16 = 24 * v14 + a5;
    v17 = (const __m128i *)(24 * v14 + a3);
    if ( (v17->m128i_i32[0] & 0x7FFFFFFF) == (*(_DWORD *)v16 & 0x7FFFFFFF) )
    {
      switch ( v17->m128i_i32[0] & 0x7FFFFFFF )
      {
        case 1:
          v31 = *(_QWORD *)(v16 + 8);
          v32 = v17->m128i_i64[1];
          if ( (*(_QWORD *)&byte_8[v32 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)v32 | (unsigned __int8)*(_QWORD *)&byte_8[v32 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (((unsigned __int8)v31 | (unsigned __int8)*(_QWORD *)&byte_8[v31 & 0xFFFFFFFFFFFFFFF0LL]) & 7 | *(_QWORD *)&byte_8[v31 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL) )
            goto LABEL_12;
          v38 = a5;
          v29 = sub_ABBE20(a1, v32, v31, 0);
          v30 = 0;
          goto LABEL_30;
        case 3:
          v27 = *(_QWORD *)(v16 + 8);
          v28 = v17->m128i_i64[1];
          if ( (*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)v28 | (unsigned __int8)*(_QWORD *)&byte_8[v28 & 0xFFFFFFFFFFFFFFF0LL]) & 7) != (((unsigned __int8)v27 | (unsigned __int8)*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL]) & 7 | *(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL) )
            goto LABEL_12;
          v38 = a5;
          v29 = sub_ABBE20(a1, v28, v27, 0);
          v30 = 1;
LABEL_30:
          sub_F1D250(&v46, v29, v30, 0);
          a5 = v38;
          break;
        case 6:
          v42 = a5;
          v36 = 24 * v14 + a5;
          sub_F22A90(&v45, v17->m128i_i64[1]);
          v24 = v45;
          sub_F22A90(&v45, *(_QWORD *)(v36 + 8));
          v25 = v45;
          a5 = v42;
          if ( v45 != v24 )
          {
            v37 = v45;
            v24 = sub_AB62A0(a1, v24, 0);
            v26 = sub_AB62A0(a1, v37, 0);
            a5 = v42;
            v25 = v26;
            if ( v26 != v24 )
              goto LABEL_12;
          }
          if ( !v24 )
            goto LABEL_12;
          v46.m128i_i64[1] = v25;
          v46.m128i_i64[0] = 6;
          break;
        case 7:
          v44 = a5;
          v40 = 24 * v14 + a5;
          sub_F22A90(&v45, v17->m128i_i64[1]);
          v20 = v45;
          sub_F22A90(&v45, *(_QWORD *)(v40 + 8));
          v21 = v45;
          v22 = 24 * v14 + a3;
          a5 = v44;
          if ( (v45 == v20
             || (v41 = v45,
                 v20 = sub_AB62A0(a1, v20, 0),
                 v23 = sub_AB62A0(a1, v41, 0),
                 v22 = 24 * v14 + a3,
                 a5 = v44,
                 v21 = v23,
                 v23 == v20))
            && v20 )
          {
            v43 = a5;
            v39 = v21;
            v33 = sub_F1D600(v22);
            a5 = v43;
            v46.m128i_i32[0] = 7;
            v46.m128i_i32[1] = v33;
            v46.m128i_i64[1] = v39;
          }
          else
          {
            v46 = (__m128i)6uLL;
          }
          break;
        case 8:
          v18 = *(_QWORD *)&byte_8[*(_QWORD *)(v17->m128i_i64[1] + 8) & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v18 & 0xFFFFFFFFFFFFFFF8LL
              | ((unsigned __int8)v18 | (unsigned __int8)*(_QWORD *)(v17->m128i_i64[1] + 8)) & 7) != (*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL) & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)*(_QWORD *)(*(_QWORD *)(v16 + 8) + 8LL)) & 7) )
            goto LABEL_12;
          goto LABEL_18;
        default:
LABEL_18:
          v19 = v17[1].m128i_i64[0];
          v46 = _mm_loadu_si128(v17);
          v47 = v19;
          break;
      }
    }
    else
    {
LABEL_12:
      v46 = (__m128i)(0xFFFFFFFE00000000LL & v46.m128i_u64[0]);
    }
    v15 = *a2;
    *(__m128i *)(v15 + 24 * v14) = _mm_load_si128(&v46);
    *(_QWORD *)(v15 + 24 * v14 + 16) = v47;
    if ( (*(_DWORD *)(*a2 + 24 * v14) & 0x7FFFFFFF) == 0 )
      return 1;
    if ( *((unsigned int *)a2 + 2) <= (unsigned __int64)++v14 )
      return 0;
  }
}
