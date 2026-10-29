void __fastcall sub_E81B80(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 *v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rax
  __m128i v9; // xmm2
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned int *v13; // rax
  __int64 v14; // rdx
  const __m128i *v15; // rax
  const __m128i *v16; // rbp
  const __m128i *v17; // r14
  __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  __m128i *v20; // r13
  __int64 v21; // r10
  __int64 v22; // r12
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  __int64 v26; // r12
  unsigned __int64 v27; // rdx
  __m128i *v28; // r12
  __m128i v29; // xmm1
  __int64 v30; // rsi
  char v31; // r12
  __int64 v32; // rcx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rsi
  __int64 v35; // rcx
  unsigned int *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // ebx
  unsigned int *v40; // rax
  __int64 v41; // [rsp+8h] [rbp-D0h]
  __int64 v42; // [rsp+18h] [rbp-C0h]
  __int64 v43; // [rsp+28h] [rbp-B0h]
  void *v44; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int32 v45; // [rsp+38h] [rbp-A0h]
  char v46; // [rsp+3Ch] [rbp-9Ch]
  __m128i v47; // [rsp+40h] [rbp-98h] BYREF
  _QWORD *v48; // [rsp+50h] [rbp-88h]
  __m128i v49; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v50; // [rsp+70h] [rbp-68h] BYREF
  __m128i v51; // [rsp+80h] [rbp-58h] BYREF
  _QWORD *v52; // [rsp+90h] [rbp-48h]

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 18 > 0x3F )
  {
    v37 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v37 + 1) <= *(_QWORD *)(a1 + 40) )
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v37) = 0;
    }
    else
    {
      sub_22130D0(a1 + 24, a1 + 48, v37 + 1, 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 32)) = 0;
    }
    ++*(_QWORD *)(a1 + 32);
    v38 = *(unsigned int *)(a1 + 184);
    v39 = *(_BYTE *)(v2 + 28) & 0x7F;
    if ( v38 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
    {
      sub_22134E0(a1 + 176, a1 + 192, v38 + 1, 4);
      v38 = *(unsigned int *)(a1 + 184);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v38) = v39;
    ++*(_DWORD *)(a1 + 184);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 32);
    if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(a1 + 40) )
    {
      a2 = a1 + 48;
      sub_22130D0(a1 + 24, a1 + 48, v5 + 1, 1);
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + *(_QWORD *)(a1 + 32)) = 1;
    }
    else
    {
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v5) = 1;
    }
    ++*(_QWORD *)(a1 + 32);
    if ( (*(_BYTE *)(v2 + 28) & 0x7Fu) - 34 > 5 )
    {
      a2 = *(_QWORD *)(v2 + 40);
      v49.m128i_i32[2] = 0;
      v49.m128i_i64[0] = a2;
      sub_B61B50(&v50, a2);
      v8 = v50;
      v51 = _mm_load_si128(&v49);
    }
    else
    {
      v6 = *(unsigned int *)(v2 + 24);
      v7 = *(_QWORD *)(v2 + 40);
      v8 = *(_QWORD **)(v2 + 160);
      v47.m128i_i64[0] = v7;
      v47.m128i_i32[2] = v6;
      v9 = _mm_load_si128(&v47);
      v48 = v8;
      v51 = v9;
    }
    v52 = v8;
    sub_E80EA0(a1, a2, v6, v7, v3, v4, v51.m128i_u64[0], v51.m128i_i32[2], v8);
    v12 = *(_BYTE *)(v2 + 28) & 0x7F;
    if ( (unsigned int)(v12 - 60) > 1 )
    {
      if ( (unsigned int)(v12 - 41) > 1 )
      {
        if ( (unsigned int)(v12 - 34) > 5 || !sub_B53E10(v2) )
          return;
        v40 = (unsigned int *)sub_B53E10(v2);
        v14 = *v40;
        v15 = (const __m128i *)(v40 + 2);
      }
      else
      {
        v36 = *(unsigned int **)(v2 + 128);
        v14 = *v36;
        v15 = (const __m128i *)(v36 + 2);
      }
    }
    else
    {
      v13 = *(unsigned int **)(v2 + 168);
      v14 = *v13;
      v15 = (const __m128i *)(v13 + 2);
    }
    v16 = (const __m128i *)((char *)v15 + 24 * v14);
    if ( v16 != v15 )
    {
      v17 = v15;
      v42 = a1 + 192;
      v41 = a1 + 176;
      while ( 2 )
      {
        v18 = *(unsigned int *)(a1 + 184);
        v19 = *(unsigned int *)(a1 + 188);
        v49 = _mm_loadu_si128(v17);
        v50 = (_QWORD *)v17[1].m128i_i64[0];
        v20 = (__m128i *)v17->m128i_i64[1];
        v21 = v17[1].m128i_i64[0];
        v22 = v17->m128i_i32[0] & 0x7FFFFFFF;
        if ( v18 + 1 > v19 )
        {
          v43 = v17[1].m128i_i64[0];
          sub_22134E0(v41, v42, v18 + 1, 4);
          v18 = *(unsigned int *)(a1 + 184);
          v21 = v43;
        }
        *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v18) = v22;
        v23 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
        *(_DWORD *)(a1 + 184) = v23;
        switch ( v22 )
        {
          case 1LL:
            sub_E847E0(a1, v20, v23, v18, v10, v11);
            goto LABEL_20;
          case 2LL:
            sub_E81B80(a1, v21);
            goto LABEL_20;
          case 3LL:
            v32 = (unsigned int)v23;
            v33 = (unsigned int)v23 + 1LL;
            if ( v33 > *(unsigned int *)(a1 + 188) )
            {
              sub_22134E0(v41, v42, v33, 4);
              v32 = *(unsigned int *)(a1 + 184);
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v32) = 0;
            v34 = *(unsigned int *)(a1 + 188);
            v35 = (unsigned int)(*(_DWORD *)(a1 + 184) + 1);
            *(_DWORD *)(a1 + 184) = v35;
            if ( v35 + 1 > v34 )
            {
              sub_22134E0(v41, v42, v35 + 1, 4);
              v35 = *(unsigned int *)(a1 + 184);
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v35) = 0;
            ++*(_DWORD *)(a1 + 184);
            goto LABEL_20;
          case 4LL:
            v30 = v49.m128i_i32[1] & 0x7FFFFFFF;
            v31 = (unsigned __int8)v49.m128i_i8[7] >> 7;
            if ( (unsigned int)v30 > 0x40 )
            {
              sub_21E18C0(&v51, v30, v20, ((unsigned __int64)(unsigned int)v30 + 63) >> 6);
              v46 = v31;
              v45 = v51.m128i_u32[2];
              v44 = (void *)v51.m128i_i64[0];
            }
            else
            {
              v45 = v49.m128i_i32[1] & 0x7FFFFFFF;
              v44 = v20;
              v46 = (unsigned __int8)v49.m128i_i8[7] >> 7;
            }
            sub_21E8930(&v44, v41);
            if ( v45 > 0x40 && v44 )
              operator delete[](v44);
            goto LABEL_20;
          case 5LL:
            sub_E847E0(a1, v21, v23, v18, v10, v11);
            sub_E82150(a1, v20);
            goto LABEL_20;
          case 6LL:
          case 7LL:
            sub_EFED50(&v51, v20);
            sub_E84660(a1, v51.m128i_i64[0]);
            goto LABEL_20;
          case 8LL:
            sub_EF6790(v20, v41);
            goto LABEL_20;
          case 9LL:
            v24 = (unsigned int)v23;
            v25 = *(unsigned int *)(a1 + 188);
            v26 = v49.m128i_u32[1];
            v27 = (unsigned int)v23 + 1LL;
            if ( v27 > v25 )
            {
              LODWORD(v25) = a1 + 192;
              sub_22134E0(v41, v42, v27, 4);
              v24 = *(unsigned int *)(a1 + 184);
            }
            *(_DWORD *)(*(_QWORD *)(a1 + 176) + 4 * v24) = v26;
            v28 = (__m128i *)((char *)v20 + 24 * v26);
            ++*(_DWORD *)(a1 + 184);
            if ( v20 == v28 )
              goto LABEL_20;
            do
            {
              v29 = _mm_loadu_si128(v20);
              v20 = (__m128i *)((char *)v20 + 24);
              v51 = v29;
              v52 = (_QWORD *)v20[-1].m128i_i64[1];
              sub_E84950(a1, v25, (_DWORD)v52, v24, v10, v11, v29.m128i_i64[0], v29.m128i_i64[1], (__int64)v52);
            }
            while ( v28 != v20 );
            v17 = (const __m128i *)((char *)v17 + 24);
            if ( v16 == v17 )
              return;
            continue;
          default:
LABEL_20:
            v17 = (const __m128i *)((char *)v17 + 24);
            if ( v16 == v17 )
              return;
            continue;
        }
      }
    }
  }
}

