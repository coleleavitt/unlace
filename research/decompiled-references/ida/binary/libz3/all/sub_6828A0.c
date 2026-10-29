__int64 __fastcall sub_6828A0(__int64 a1, __int64 a2)
{
  unsigned int *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbp
  unsigned __int32 v8; // r13d
  __int64 v9; // r14
  __int64 v10; // r15
  int v11; // eax
  unsigned int v12; // eax
  __m128i *v13; // rbx
  __m128i *v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rcx
  int v18; // r9d
  __int64 v19; // rax
  __m128i *v20; // r10
  __m128i *v21; // rbp
  __int32 v22; // eax
  __m128i v23; // xmm2
  char v24; // al
  __int32 v25; // eax
  __m128i v26; // xmm3
  char v27; // al
  __m128i v28; // xmm4
  __m128i v29; // xmm0
  __int64 v30; // rax
  unsigned __int64 v31; // rbx
  __int64 *v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rdi
  __m128i *v37; // rax
  int v38; // ecx
  size_t v39; // r10
  __m128i *v40; // rdx
  __int64 v41; // rdx
  const __m128i *v42; // rax
  __m128i *v43; // r9
  __int64 v44; // rdx
  __m128i *v45; // rsi
  __m128i *v46; // rdx
  __m128i v47; // xmm0
  __m128i v48; // xmm6
  __int64 v49; // [rsp+8h] [rbp-D0h]
  __m128i v50; // [rsp+10h] [rbp-C8h] BYREF
  size_t v51; // [rsp+20h] [rbp-B8h]
  size_t v52; // [rsp+28h] [rbp-B0h]
  __m128i *v53; // [rsp+30h] [rbp-A8h]
  __int64 v54; // [rsp+38h] [rbp-A0h]
  int v55; // [rsp+44h] [rbp-94h]
  size_t v56; // [rsp+48h] [rbp-90h]
  __int64 v57[2]; // [rsp+50h] [rbp-88h] BYREF
  __m128i v58; // [rsp+60h] [rbp-78h] BYREF
  __m128i v59; // [rsp+70h] [rbp-68h] BYREF
  __m128i v60; // [rsp+80h] [rbp-58h] BYREF
  __m128i v61; // [rsp+90h] [rbp-48h] BYREF

  v3 = *(unsigned int **)(a2 + 32);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 64LL);
  v5 = sub_67B850(*(__int64 **)(a1 + 16), v3);
  sub_1374250(v57, v4, v5);
  v6 = sub_15D1F10(v3);
  sub_681920((__int64)&v58, a1, v57[0], (unsigned int *)a2, v6);
  v7 = v58.m128i_i64[0];
  v8 = v59.m128i_u32[2];
  v49 = v59.m128i_i64[0];
  v9 = sub_678D40((const __m128i *)a1, v58.m128i_i64[0], v59.m128i_i64[0]);
  v10 = *(unsigned int *)(v9 + 24);
  v50.m128i_i64[0] = v58.m128i_i64[1];
  v11 = *(_DWORD *)(v9 + 32);
  v60 = _mm_load_si128(&v58);
  v12 = 4 * (*(_DWORD *)(v9 + 28) + v11);
  v61 = _mm_load_si128(&v59);
  if ( 3 * (int)v10 < v12 )
  {
    LODWORD(v53) = 2 * v10;
    v52 = 40LL * (unsigned int)(2 * v10);
    v51 = v52;
    v37 = (__m128i *)sub_186B270(v52);
    v38 = 2 * v10;
    v39 = v52;
    v13 = v37;
    if ( 2 * (_DWORD)v10 )
    {
      v40 = &v37[5 * (v10 & 0x7FFFFFFF)];
      do
      {
        v37->m128i_i64[0] = 0;
        v37 += 5;
        v37[-3].m128i_i64[1] = 0;
      }
      while ( v40 != v37 );
    }
    v41 = *(unsigned int *)(v9 + 24);
    v42 = *(const __m128i **)(v9 + 16);
    v14 = (__m128i *)((char *)v13 + v39);
    LODWORD(v51) = v38 - 1;
    v43 = (__m128i *)((char *)v42 + 40 * v41);
    if ( v42 != v43 )
    {
      do
      {
        while ( v42->m128i_i32[1] != 2 )
        {
          v42 = (const __m128i *)((char *)v42 + 40);
          if ( v43 == v42 )
            goto LABEL_50;
        }
        v44 = 40LL * (v42->m128i_i32[0] & (unsigned int)v51);
        v45 = (__m128i *)((char *)v13 + v44);
        if ( v39 == v44 )
        {
LABEL_54:
          if ( v13 == v45 )
          {
LABEL_63:
            v56 = v39;
            v55 = v38;
            v54 = (__int64)v43;
            v53 = (__m128i *)v42;
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v46 = v13;
          while ( v46->m128i_i32[1] )
          {
            v46 = (__m128i *)((char *)v46 + 40);
            if ( v45 == v46 )
              goto LABEL_63;
          }
        }
        else
        {
          v46 = (__m128i *)((char *)v13 + v44);
          while ( v46->m128i_i32[1] )
          {
            v46 = (__m128i *)((char *)v46 + 40);
            if ( v14 == v46 )
              goto LABEL_54;
          }
        }
        v47 = _mm_loadu_si128(v42);
        v42 = (const __m128i *)((char *)v42 + 40);
        *v46 = v47;
        v46[1] = _mm_loadu_si128((const __m128i *)((char *)v42 - 24));
        v46[2].m128i_i64[0] = v42[-1].m128i_i64[1];
      }
      while ( v43 != v42 );
LABEL_50:
      v43 = *(__m128i **)(v9 + 16);
    }
    if ( v43 )
    {
      LODWORD(v53) = v38;
      sub_186B220(v43);
      v38 = (int)v53;
    }
    *(_QWORD *)(v9 + 16) = v13;
    *(_DWORD *)(v9 + 24) = v38;
    *(_DWORD *)(v9 + 32) = 0;
  }
  else
  {
    v13 = *(__m128i **)(v9 + 16);
    LODWORD(v51) = v10 - 1;
    v52 = 40 * v10;
    v14 = (__m128i *)((char *)v13 + 40 * v10);
  }
  v15 = *(unsigned int *)(v50.m128i_i64[0] + 24);
  v16 = *(_QWORD *)v9;
  v54 = 8LL * v8;
  v17 = (_QWORD *)(*(_QWORD *)(v16 + 40) + v54);
  v50 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v7, (__m128i)v50.m128i_u64[0]);
  v18 = sub_675480(v17, v15);
  v19 = 40LL * (v18 & (unsigned int)v51);
  v20 = (__m128i *)((char *)v13 + v19);
  if ( v19 == v52 )
  {
    v21 = nullptr;
    goto LABEL_13;
  }
  v13 = (__m128i *)((char *)v13 + v19);
  v21 = nullptr;
  v53 = &v60;
  while ( 1 )
  {
    v22 = v13->m128i_i32[1];
    if ( v22 == 2 )
    {
      if ( v13->m128i_i32[0] == v18 )
      {
        v23 = _mm_load_si128(&v50);
        LODWORD(v52) = v18;
        v51 = (size_t)v20;
        v61.m128i_i64[0] = v49;
        v61.m128i_i32[2] = v8;
        v60 = v23;
        v24 = sub_675CE0(v9 + 8, (__int64)&v13->m128i_i64[1], (__int64)v53);
        v20 = (__m128i *)v51;
        v18 = v52;
        if ( v24 )
        {
LABEL_11:
          v21 = v13;
          goto LABEL_27;
        }
      }
      goto LABEL_7;
    }
    if ( !v22 )
      break;
    v21 = v13;
LABEL_7:
    v13 = (__m128i *)((char *)v13 + 40);
    if ( v13 == v14 )
    {
      v13 = *(__m128i **)(v9 + 16);
LABEL_13:
      if ( v20 == v13 )
      {
LABEL_22:
        sub_1872CE0("");
        sub_1873130(114, 461);
      }
      while ( 2 )
      {
        while ( 1 )
        {
          v25 = v13->m128i_i32[1];
          if ( v25 != 2 )
            break;
          if ( v13->m128i_i32[0] != v18 )
            goto LABEL_17;
          v26 = _mm_load_si128(&v50);
          LODWORD(v52) = v18;
          v51 = (size_t)v20;
          v61.m128i_i64[0] = v49;
          v61.m128i_i32[2] = v8;
          v60 = v26;
          v27 = sub_675CE0(v9 + 8, (__int64)&v13->m128i_i64[1], (__int64)&v60);
          v20 = (__m128i *)v51;
          v18 = v52;
          if ( v27 )
            goto LABEL_11;
          v13 = (__m128i *)((char *)v13 + 40);
          if ( (__m128i *)v51 == v13 )
            goto LABEL_22;
        }
        if ( !v25 )
        {
          if ( v21 )
            --*(_DWORD *)(v9 + 32);
          else
            v21 = v13;
          v48 = _mm_load_si128(&v50);
          v61.m128i_i32[2] = v8;
          v61.m128i_i64[0] = v49;
          v60 = v48;
          *(__m128i *)((char *)v21 + 8) = v48;
          goto LABEL_26;
        }
        v21 = v13;
LABEL_17:
        v13 = (__m128i *)((char *)v13 + 40);
        if ( v20 == v13 )
          goto LABEL_22;
        continue;
      }
    }
  }
  if ( v21 )
    --*(_DWORD *)(v9 + 32);
  else
    v21 = v13;
  v28 = _mm_load_si128(&v50);
  v61.m128i_i32[2] = v8;
  v61.m128i_i64[0] = v49;
  v60 = v28;
  *(__m128i *)((char *)v21 + 8) = v28;
LABEL_26:
  v29 = _mm_load_si128(&v61);
  v21->m128i_i32[1] = 2;
  v21->m128i_i32[0] = v18;
  *(__m128i *)((char *)v21 + 24) = v29;
  ++*(_DWORD *)(v9 + 28);
LABEL_27:
  if ( v21[2].m128i_i32[0] != v8 )
  {
    v30 = *(_QWORD *)(a1 + 40);
    if ( v30 )
    {
      v31 = v30 + 8LL * *(unsigned int *)(v30 - 4);
      v32 = (__int64 *)(v30 + v54);
      if ( v30 + v54 >= v31 )
        goto LABEL_36;
      do
      {
        while ( 1 )
        {
          v33 = *v32;
          if ( *v32 )
          {
            v34 = *(_QWORD *)(a1 + 32);
            if ( (*(_DWORD *)(v33 + 8))-- == 1 )
              break;
          }
          if ( (unsigned __int64)++v32 >= v31 )
            goto LABEL_35;
        }
        sub_15D7BC0(v34, v33);
        ++v32;
      }
      while ( (unsigned __int64)v32 < v31 );
LABEL_35:
      v30 = *(_QWORD *)(a1 + 40);
      if ( v30 )
LABEL_36:
        *(_DWORD *)(v30 - 4) = v8;
    }
  }
  return sub_675460(v57[0], v57[1]);
}

