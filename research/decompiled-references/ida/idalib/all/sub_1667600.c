void __fastcall sub_1667600(__int64 a1, __int32 a2, int a3, const void *a4, size_t a5, int a6)
{
  char v6; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rcx
  __int32 v15; // esi
  __int32 v16; // edi
  __m128i *v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r15
  int v24; // eax
  unsigned __int64 v25; // rdx
  const __m128i *v26; // rbp
  size_t v27; // rdx
  const void *v28; // rdi
  size_t v29; // rdx
  __int64 v30; // rcx
  const void *v31; // rdi
  int v32; // eax
  __int64 v33; // rsi
  __int64 v36; // [rsp+8h] [rbp-68h]
  __int64 v37; // [rsp+8h] [rbp-68h]
  unsigned __int64 v38; // [rsp+10h] [rbp-60h]
  _QWORD v39[2]; // [rsp+18h] [rbp-58h] BYREF
  __int32 v40; // [rsp+28h] [rbp-48h]
  __int32 v41; // [rsp+2Ch] [rbp-44h]
  __int32 v42; // [rsp+30h] [rbp-40h]

  if ( !a3 )
  {
    v18 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 88) = a2;
    *(_DWORD *)(a1 + 84) = v18;
    return;
  }
  v6 = a3;
  if ( (a3 & 2) != 0 )
  {
    v12 = *(unsigned int *)(a1 + 8);
    v13 = *(_QWORD *)a1;
    v14 = *(unsigned int *)(a1 + 12);
    v15 = *(_DWORD *)(a1 + 88);
    v16 = *(_DWORD *)(a1 + 84);
    v17 = (__m128i *)(v13 + 32 * v12);
    if ( v12 >= v14 )
    {
      v41 = v15;
      v25 = v12 + 1;
      v39[0] = a4;
      v26 = (const __m128i *)v39;
      v39[1] = a5;
      v40 = v16;
      v42 = a2;
      if ( v14 < v25 )
      {
        v33 = a1 + 16;
        if ( v13 > (unsigned __int64)v39 || v17 <= (__m128i *)v39 )
        {
          sub_2237220(a1, v33, v25, 32);
          v17 = (__m128i *)(*(_QWORD *)a1 + 32LL * *(unsigned int *)(a1 + 8));
        }
        else
        {
          sub_2237220(a1, v33, v25, 32);
          v26 = (const __m128i *)((char *)v39 + *(_QWORD *)a1 - v13);
          v17 = (__m128i *)(32LL * *(unsigned int *)(a1 + 8) + *(_QWORD *)a1);
        }
      }
      *v17 = _mm_loadu_si128(v26);
      v17[1] = _mm_loadu_si128(v26 + 1);
      ++*(_DWORD *)(a1 + 8);
    }
    else
    {
      v17->m128i_i64[0] = (__int64)a4;
      v17->m128i_i64[1] = a5;
      v17[1].m128i_i32[0] = v16;
      v17[1].m128i_i32[1] = v15;
      v17[1].m128i_i32[2] = a2;
      ++*(_DWORD *)(a1 + 8);
    }
    goto LABEL_7;
  }
  if ( (a3 & 4) == 0 )
    goto LABEL_7;
  v10 = *(unsigned int *)(a1 + 8);
  if ( !a5 )
  {
    if ( (_DWORD)v10 )
    {
      v11 = *(_QWORD *)a1 + 32LL * (unsigned int)v10 - 32;
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(v11 + 16);
      LODWORD(v11) = *(_DWORD *)(v11 + 20);
      *(_DWORD *)(a1 + 8) = v10 - 1;
      *(_DWORD *)(a1 + 88) = v11;
    }
    goto LABEL_7;
  }
  v19 = 32 * v10;
  v20 = *(_QWORD *)a1 + v19;
  v21 = v19 >> 5;
  v22 = v19 >> 7;
  v38 = *(_QWORD *)a1;
  if ( v22 )
  {
    v36 = v20 - (v22 << 7);
    while ( a5 != *(_QWORD *)(v20 - 24) || memcmp(*(const void **)(v20 - 32), a4, a5) )
    {
      if ( a5 == *(_QWORD *)(v20 - 56) && !memcmp(*(const void **)(v20 - 64), a4, a5) )
      {
        v20 -= 32;
        goto LABEL_23;
      }
      if ( a5 == *(_QWORD *)(v20 - 88) && !memcmp(*(const void **)(v20 - 96), a4, a5) )
      {
        v20 -= 64;
        goto LABEL_23;
      }
      v23 = v20 - 128;
      if ( a5 == *(_QWORD *)(v20 - 120) && !memcmp(*(const void **)(v20 - 128), a4, a5) )
      {
        v20 -= 96;
        goto LABEL_23;
      }
      v20 -= 128;
      if ( v36 == v23 )
      {
        v21 = (__int64)(v23 - v38) >> 5;
        goto LABEL_32;
      }
    }
    goto LABEL_23;
  }
  v23 = v20;
LABEL_32:
  if ( v21 == 2 )
  {
    v29 = *(_QWORD *)(v23 - 24);
    v30 = v23 - 32;
    v31 = *(const void **)(v23 - 32);
    if ( a5 != v29 )
      goto LABEL_40;
    goto LABEL_39;
  }
  if ( v21 == 3 )
  {
    if ( a5 == *(_QWORD *)(v23 - 24) )
    {
      v20 = v23;
      if ( !memcmp(*(const void **)(v23 - 32), a4, a5) )
        goto LABEL_23;
    }
    v29 = *(_QWORD *)(v23 - 56);
    v30 = v23 - 64;
    v31 = *(const void **)(v23 - 64);
    v23 -= 32;
    if ( a5 != v29 )
    {
LABEL_40:
      v27 = *(_QWORD *)(v30 - 24);
      v28 = *(const void **)(v30 - 32);
      v23 = v30;
      if ( a5 != v27 )
        goto LABEL_7;
      goto LABEL_36;
    }
LABEL_39:
    v37 = v30;
    v20 = v23;
    v32 = memcmp(v31, a4, v29);
    v30 = v37;
    if ( v32 )
      goto LABEL_40;
LABEL_23:
    if ( v38 != v20 )
    {
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(v20 - 16);
      v24 = *(_DWORD *)(v20 - 12);
      *(_DWORD *)(a1 + 8) = (__int64)(v20 - 32 - v38) >> 5;
      *(_DWORD *)(a1 + 88) = v24;
    }
    goto LABEL_7;
  }
  if ( v21 != 1 )
    goto LABEL_7;
  v27 = *(_QWORD *)(v23 - 24);
  v28 = *(const void **)(v23 - 32);
  if ( a5 != v27 )
    goto LABEL_7;
LABEL_36:
  if ( !memcmp(v28, a4, v27) )
  {
    v20 = v23;
    goto LABEL_23;
  }
LABEL_7:
  if ( (v6 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 84) = a6;
    *(_DWORD *)(a1 + 88) = a2;
  }
}
