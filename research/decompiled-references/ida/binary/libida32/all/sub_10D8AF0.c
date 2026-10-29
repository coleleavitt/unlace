__int64 __fastcall sub_10D8AF0(__int64 a1, __m128i *a2, unsigned __int64 a3)
{
  __m128i *v3; // r14
  __int64 v6; // rdx
  __m128i *v7; // r15
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  __m128i *v12; // rbx
  __m128i *v13; // rax
  __m128i v14; // xmm1
  __int32 v15; // edx
  __int64 v16; // rsi
  __int32 v17; // eax
  __m128i *v18; // rcx
  int v19; // eax
  __int8 *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // r15
  __int8 *v23; // rbx
  char *v24; // rbp
  __int64 v25; // rdx
  _BYTE *v26; // rax
  __int8 *v27; // rax
  __int8 *v28; // rdi
  size_t v29; // rdx
  __int64 v30; // rax
  __int64 v32; // rax
  signed __int64 v33; // rbp
  __int64 v34; // r14
  unsigned __int64 v35; // r13
  __m128i *v36; // rdi
  int v37; // ebx
  __int64 v38; // rax
  __m128i *v39; // rdi
  int v40; // ebx
  __int64 v41; // rax
  __int64 v42; // rbx
  unsigned __int64 v43; // r13
  __m128i *v44; // rbp
  __m128i *v45; // rdi
  int v46; // r14d
  __int64 v47; // rax
  __m128i *v48; // rbp
  __m128i *v49; // rdi
  int v50; // r14d
  __int64 v51; // rdx
  _DWORD v52[16]; // [rsp+8h] [rbp-40h] BYREF

  v3 = a2;
  v6 = *(unsigned int *)(a1 + 8);
  v7 = *(__m128i **)a1;
  v8 = *(unsigned int *)(a1 + 12);
  v9 = 7 * v6;
  v10 = v6 + 1;
  v11 = 8 * v9;
  v12 = (__m128i *)(*(_QWORD *)a1 + v11);
  if ( a2 == v12 )
  {
    if ( v8 < v10 )
    {
      v42 = a1 + 16;
      if ( (unsigned __int64)v7 > a3 || (unsigned __int64)a2 <= a3 )
      {
        v48 = (__m128i *)sub_22136C0(a1, a1 + 16, v10, 56, v52);
        sub_10D89C0(a1, v48);
        v49 = *(__m128i **)a1;
        v50 = v52[0];
        if ( *(_QWORD *)a1 != v42 )
          free(v49);
        v51 = *(unsigned int *)(a1 + 8);
        *(_QWORD *)a1 = v48;
        *(_DWORD *)(a1 + 12) = v50;
        v12 = (__m128i *)((char *)v48 + 56 * v51);
      }
      else
      {
        v43 = a3 - (_QWORD)v7;
        v44 = (__m128i *)sub_22136C0(a1, a1 + 16, v10, 56, v52);
        sub_10D89C0(a1, v44);
        v45 = *(__m128i **)a1;
        v46 = v52[0];
        if ( *(_QWORD *)a1 != v42 )
          free(v45);
        v47 = *(unsigned int *)(a1 + 8);
        *(_QWORD *)a1 = v44;
        a3 = (unsigned __int64)v44->m128i_u64 + v43;
        *(_DWORD *)(a1 + 12) = v46;
        v12 = (__m128i *)((char *)v44 + 56 * v47);
      }
    }
    v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
    sub_10B4F90(v12, *(_BYTE **)a3, *(_QWORD *)a3 + *(_QWORD *)(a3 + 8));
    v12[2] = _mm_loadu_si128((const __m128i *)(a3 + 32));
    v12[3].m128i_i32[0] = *(_DWORD *)(a3 + 48);
    v12[3].m128i_i32[1] = *(_DWORD *)(a3 + 52);
    v32 = (unsigned int)(*(_DWORD *)(a1 + 8) + 1);
    *(_DWORD *)(a1 + 8) = v32;
    return *(_QWORD *)a1 + 56 * v32 - 56;
  }
  else
  {
    if ( v8 < v10 )
    {
      v33 = (char *)a2 - (char *)v7;
      v34 = a1 + 16;
      if ( (unsigned __int64)v7 > a3 || (unsigned __int64)v12 <= a3 )
      {
        v7 = (__m128i *)sub_22136C0(a1, a1 + 16, v10, 56, v52);
        sub_10D89C0(a1, v7);
        v39 = *(__m128i **)a1;
        v40 = v52[0];
        if ( *(_QWORD *)a1 != v34 )
          free(v39);
        v41 = *(unsigned int *)(a1 + 8);
        *(_DWORD *)(a1 + 12) = v40;
        v3 = (__m128i *)((char *)v7 + v33);
        *(_QWORD *)a1 = v7;
        v11 = 56 * v41;
        v12 = (__m128i *)((char *)v7 + 56 * v41);
      }
      else
      {
        v35 = a3 - (_QWORD)v7;
        v7 = (__m128i *)sub_22136C0(a1, a1 + 16, v10, 56, v52);
        sub_10D89C0(a1, v7);
        v36 = *(__m128i **)a1;
        v37 = v52[0];
        if ( *(_QWORD *)a1 != v34 )
          free(v36);
        v38 = *(unsigned int *)(a1 + 8);
        *(_QWORD *)a1 = v7;
        a3 = (unsigned __int64)v7->m128i_u64 + v35;
        v3 = (__m128i *)((char *)v7 + v33);
        *(_DWORD *)(a1 + 12) = v37;
        v11 = 56 * v38;
        v12 = (__m128i *)((char *)v7 + 56 * v38);
      }
    }
    v13 = (__m128i *)((char *)v7 + v11 - 56);
    v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
    if ( (__m128i *)v13->m128i_i64[0] == &v13[1] )
    {
      v12[1] = _mm_loadu_si128(v13 + 1);
    }
    else
    {
      v12->m128i_i64[0] = v13->m128i_i64[0];
      v12[1].m128i_i64[0] = v13[1].m128i_i64[0];
    }
    v12->m128i_i64[1] = v13->m128i_i64[1];
    v14 = _mm_loadu_si128(v13 + 2);
    v13->m128i_i64[0] = (__int64)v13[1].m128i_i64;
    v13[1].m128i_i8[0] = 0;
    v13->m128i_i64[1] = 0;
    v12[2] = v14;
    v15 = v13[3].m128i_i32[0];
    v16 = *(unsigned int *)(a1 + 8);
    v17 = v13[3].m128i_i32[1];
    v18 = *(__m128i **)a1;
    v12[3].m128i_i32[0] = v15;
    v12[3].m128i_i32[1] = v17;
    v19 = v16;
    v20 = &v18->m128i_i8[56 * v16];
    v21 = v20 - 56 - (__int8 *)v3;
    v22 = 0x6DB6DB6DB6DB6DB7LL * (v21 >> 3);
    if ( v21 > 0 )
    {
      v23 = &v18[-6].m128i_i8[56 * v16];
      v24 = v20 - 40;
      while ( 1 )
      {
        v27 = *((__int8 **)v23 - 2);
        v28 = *((__int8 **)v24 - 2);
        if ( v27 == v23 )
        {
          v29 = *((_QWORD *)v23 - 1);
          if ( v29 )
          {
            if ( v29 == 1 )
              *v28 = *v23;
            else
              memcpy(v28, v23, v29);
            v28 = *((__int8 **)v24 - 2);
            v29 = *((_QWORD *)v23 - 1);
          }
          *((_QWORD *)v24 - 1) = v29;
          v28[v29] = 0;
          goto LABEL_10;
        }
        if ( v24 == v28 )
          break;
        *((_QWORD *)v24 - 2) = v27;
        v25 = *(_QWORD *)v24;
        *((_QWORD *)v24 - 1) = *((_QWORD *)v23 - 1);
        *(_QWORD *)v24 = *(_QWORD *)v23;
        if ( !v28 )
          goto LABEL_19;
        *((_QWORD *)v23 - 2) = v28;
        *(_QWORD *)v23 = v25;
LABEL_10:
        v26 = *((_BYTE **)v23 - 2);
        *((_QWORD *)v23 - 1) = 0;
        v24 -= 56;
        v23 -= 56;
        *v26 = 0;
        *(__m128i *)(v24 + 72) = _mm_loadu_si128((const __m128i *)(v23 + 72));
        *((_DWORD *)v24 + 22) = *((_DWORD *)v23 + 22);
        *((_DWORD *)v24 + 23) = *((_DWORD *)v23 + 23);
        if ( !--v22 )
        {
          v19 = *(_DWORD *)(a1 + 8);
          v18 = *(__m128i **)a1;
          goto LABEL_21;
        }
      }
      *((_QWORD *)v24 - 2) = v27;
      *((_QWORD *)v24 - 1) = *((_QWORD *)v23 - 1);
      *(_QWORD *)v24 = *(_QWORD *)v23;
LABEL_19:
      *((_QWORD *)v23 - 2) = v23;
      goto LABEL_10;
    }
LABEL_21:
    v30 = (unsigned int)(v19 + 1);
    *(_DWORD *)(a1 + 8) = v30;
    if ( (unsigned __int64)v3 <= a3 && a3 < (unsigned __int64)v18 + 56 * v30 )
      a3 += 56LL;
    sub_9CAB60((__int64)v3, a3);
    v3[2] = _mm_loadu_si128((const __m128i *)(a3 + 32));
    v3[3].m128i_i32[0] = *(_DWORD *)(a3 + 48);
    v3[3].m128i_i32[1] = *(_DWORD *)(a3 + 52);
    return (__int64)v3;
  }
}

