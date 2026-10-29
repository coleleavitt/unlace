unsigned __int64 __fastcall sub_5178A0(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  const __m128i *v6; // rax
  unsigned __int64 v7; // rsi
  const __m128i *v8; // rax
  unsigned __int64 v9; // r10
  unsigned __int64 *v10; // r11
  unsigned __int64 v11; // rsi
  unsigned __int64 *v12; // rax
  unsigned __int64 *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 *v15; // rax
  unsigned __int64 v16; // r10
  unsigned __int64 *v17; // r9
  int v18; // eax
  unsigned __int64 v20; // r12
  unsigned __int64 *v21; // rax
  unsigned __int64 *v22; // r9
  unsigned __int64 *v23; // r14
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 *v26; // rax
  __m128i *v27; // r14
  unsigned __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int8 *v31; // r12
  __m128i v32; // xmm0
  unsigned __int64 v33; // r12
  unsigned __int64 *v34; // rax
  unsigned __int64 *v35; // r9
  unsigned __int64 *v36; // r14
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rdx
  unsigned __int64 *v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rax
  char *v42; // r12
  __m128i v43; // xmm0
  __int64 v44; // r14
  __int64 v45; // r14
  __m128i v46; // [rsp+0h] [rbp-58h] BYREF
  __m128i v47; // [rsp+10h] [rbp-48h]
  unsigned __int64 v48; // [rsp+28h] [rbp-30h]

  v48 = __readfsqword(0x28u);
  v6 = (const __m128i *)sub_5168B0((unsigned __int64 **)a1, a2);
  if ( v6 != (const __m128i *)(*a1 + 33 * a1[1]) )
  {
    v7 = v6->m128i_i64[0];
    if ( a2 >= v6->m128i_i64[0] )
    {
      v33 = v6->m128i_u64[1];
      if ( a2 < v33 && v6 && v7 < a2 )
      {
        v46 = _mm_loadu_si128(v6);
        v47 = _mm_loadu_si128(v6 + 1);
        v34 = sub_5168B0((unsigned __int64 **)a1, v7);
        v36 = v34;
        if ( v35 != v34 )
        {
          v37 = *v34;
          if ( v7 >= v37 )
          {
            v38 = v36[1];
            if ( v7 < v38
              && (v38 >= a2
               || v35 == (unsigned __int64 *)((char *)v36 + 33)
               || *(unsigned __int64 *)((char *)v36 + 33) >= a2) )
            {
              sub_5154D0(*((unsigned int *)a1 + 14), v37, v38, a2);
              v36[1] = a2;
              *((_BYTE *)v36 + 32) = 1;
            }
          }
        }
        v39 = sub_5168B0((unsigned __int64 **)a1, a2);
        if ( v39 == (unsigned __int64 *)(*a1 + 33 * a1[1]) || a2 < *v39 && *v39 >= v33 )
        {
          v40 = *((unsigned int *)a1 + 14);
          v46.m128i_i64[0] = a2;
          sub_514A20(v40, v46.m128i_i64, 183);
          v41 = a1[1];
          v42 = (char *)v39 - *a1;
          if ( a1[2] < (unsigned __int64)(v41 + 1) )
          {
            v45 = qvector_reserve(a1, *a1, v41 + 1, 33);
            *a1 = v45;
            v41 = a1[1];
            v39 = (unsigned __int64 *)&v42[v45];
          }
          memmove((char *)v39 + 33, v39, 33 * v41 - (_QWORD)v42);
          *((_BYTE *)v39 + 24) = 0;
          *(_OWORD *)v39 = 0;
          v43 = _mm_load_si128(&v46);
          v39[2] = 0;
          *((_BYTE *)v39 + 32) = 0;
          a1[3] = (__int64)v39;
          ++a1[1];
          *(__m128i *)v39 = v43;
          *(__m128i *)((char *)v39 + 9) = _mm_loadu_si128((const __m128i *)((char *)&v46.m128i_u64[1] + 1));
          *(_BYTE *)(a1[3] + 32) = 1;
        }
      }
    }
  }
  v8 = (const __m128i *)sub_5168B0((unsigned __int64 **)a1, a3);
  v9 = a1[1];
  v10 = (unsigned __int64 *)*a1;
  if ( v8 != (const __m128i *)(*a1 + 33 * v9) )
  {
    v11 = v8->m128i_i64[0];
    if ( a3 >= v8->m128i_i64[0] )
    {
      v20 = v8->m128i_u64[1];
      if ( a3 < v20 && v8 && v11 < a3 )
      {
        v46 = _mm_loadu_si128(v8);
        v47 = _mm_loadu_si128(v8 + 1);
        v21 = sub_5168B0((unsigned __int64 **)a1, v11);
        v23 = v21;
        if ( v22 != v21 )
        {
          v24 = *v21;
          if ( v11 >= v24 )
          {
            v25 = v23[1];
            if ( v11 < v25
              && (v25 >= a3
               || v22 == (unsigned __int64 *)((char *)v23 + 33)
               || *(unsigned __int64 *)((char *)v23 + 33) >= a3) )
            {
              sub_5154D0(*((unsigned int *)a1 + 14), v24, v25, a3);
              v23[1] = a3;
              *((_BYTE *)v23 + 32) = 1;
            }
          }
        }
        v26 = sub_5168B0((unsigned __int64 **)a1, a3);
        v9 = a1[1];
        v10 = (unsigned __int64 *)*a1;
        v27 = (__m128i *)v26;
        if ( v26 == (unsigned __int64 *)(*a1 + 33 * v9) || (v28 = *v26, a3 < v27->m128i_i64[0]) && v28 >= v20 )
        {
          v29 = *((unsigned int *)a1 + 14);
          v46.m128i_i64[0] = a3;
          sub_514A20(v29, v46.m128i_i64, 183);
          v30 = a1[1];
          v31 = &v27->m128i_i8[-*a1];
          if ( a1[2] < (unsigned __int64)(v30 + 1) )
          {
            v44 = qvector_reserve(a1, *a1, v30 + 1, 33);
            *a1 = v44;
            v30 = a1[1];
            v27 = (__m128i *)&v31[v44];
          }
          memmove(&v27[2].m128i_i8[1], v27, 33 * v30 - (_QWORD)v31);
          v27[1].m128i_i8[8] = 0;
          *v27 = 0;
          v32 = _mm_load_si128(&v46);
          v27[1].m128i_i64[0] = 0;
          v27[2].m128i_i8[0] = 0;
          a1[3] = (__int64)v27;
          ++a1[1];
          *v27 = v32;
          *(__m128i *)((char *)v27 + 9) = _mm_loadu_si128((const __m128i *)((char *)&v46.m128i_u64[1] + 1));
          *(_BYTE *)(a1[3] + 32) = 1;
          v10 = (unsigned __int64 *)*a1;
          v9 = a1[1];
        }
      }
    }
  }
  while ( 1 )
  {
    v13 = (unsigned __int64 *)a1[3];
    if ( v13 == (unsigned __int64 *)((char *)v10 + 33 * v9) || a3 < *v13 || a3 >= v13[1] )
      break;
    if ( v10 == v13 )
      return v48 - __readfsqword(0x28u);
    v12 = (unsigned __int64 *)((char *)v13 - 33);
LABEL_9:
    if ( !v12 || a2 >= v12[1] )
      return v48 - __readfsqword(0x28u);
    sub_516950((__int64)a1, *v12);
    v10 = (unsigned __int64 *)*a1;
    v9 = a1[1];
  }
  if ( (_DWORD)v9 )
  {
    v14 = (unsigned int)(v9 - 1);
    if ( v14 < v9 )
    {
      if ( a3 >= *(unsigned __int64 *)((char *)v10 + 33 * v14 + 8)
        || (v15 = sub_5168B0((unsigned __int64 **)a1, a3), v17 != v15)
        && (v18 = 1041204193 * ((_DWORD)v15 - (_DWORD)v10), v18 != -1)
        && (v14 = (unsigned int)(v18 - 1), v18)
        && v14 < v16 )
      {
        v12 = (unsigned __int64 *)((char *)v10 + 33 * v14);
        goto LABEL_9;
      }
    }
  }
  return v48 - __readfsqword(0x28u);
}
