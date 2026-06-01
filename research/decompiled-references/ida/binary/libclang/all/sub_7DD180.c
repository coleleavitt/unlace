__int64 __fastcall sub_7DD180(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  char v3; // cl
  unsigned __int64 v4; // rdx
  const __m128i *v5; // r15
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // r8
  bool v9; // zf
  const __m128i *v10; // r13
  __int64 v11; // rsi
  __int64 i; // rsi
  const __m128i *v13; // rbx
  __int64 result; // rax
  int v15; // eax
  __m128i *v16; // rbp
  __m128i *v17; // r13
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __m128i v21; // xmm1
  __m128i v22; // xmm0
  __int64 v23; // rcx
  int v24; // r14d
  bool v25; // al
  int v26; // r10d
  int v27; // edx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned int v30; // edx
  int v31; // r11d
  __m128i *v32; // rcx
  __m128i *v33; // r9
  int v34; // eax
  int v35; // esi
  unsigned int j; // eax
  int v37; // edx
  int v38; // r14d
  __int64 v39; // rax
  __m128i v40; // xmm0
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // rdx
  __m128i v45; // xmm0
  __int64 v46; // rax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // eax
  bool v51; // al
  __int64 v52; // rsi
  unsigned int v53; // edx
  const __m128i *v54; // rsi
  __int64 v55; // rcx
  _DWORD *v56; // rdi
  __int64 v57; // [rsp+0h] [rbp-E8h]
  __int64 v58; // [rsp+8h] [rbp-E0h]
  int v59; // [rsp+8h] [rbp-E0h]
  int v60; // [rsp+8h] [rbp-E0h]
  __int64 v61; // [rsp+10h] [rbp-D8h]
  __m128i *v62; // [rsp+10h] [rbp-D8h]
  unsigned int v63; // [rsp+1Ch] [rbp-CCh]
  __m128i *v64; // [rsp+20h] [rbp-C8h]
  __int64 v65; // [rsp+28h] [rbp-C0h]
  __m128i v66; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v67; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+50h] [rbp-98h]
  __m128i v69; // [rsp+60h] [rbp-88h] BYREF
  __m128i v70; // [rsp+70h] [rbp-78h] BYREF
  __int64 v71; // [rsp+80h] [rbp-68h]
  char v72; // [rsp+88h] [rbp-60h] BYREF

  LODWORD(v2) = a2;
  v3 = *(_BYTE *)a1 & 1;
  if ( a2 <= 2 )
  {
    if ( !v3 )
    {
      v7 = *(_QWORD *)(a1 + 8);
      v6 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      LODWORD(v2) = v6;
      v5 = (const __m128i *)v7;
LABEL_6:
      v69.m128i_i32[0] = 0;
      v8 = 40LL * v6;
      v9 = (*(_QWORD *)a1 & 1LL) == 0;
      *(_QWORD *)a1 &= 1uLL;
      v10 = (const __m128i *)((char *)v5 + v8);
      if ( v9 )
      {
        v11 = 40LL * (unsigned int)v2;
      }
      else
      {
        v7 = a1 + 8;
        v11 = 80;
      }
      for ( i = v7 + v11; i != v7; *(_QWORD *)(v7 - 8) = v71 )
      {
        v7 += 40;
        *(__m128i *)(v7 - 40) = _mm_load_si128(&v69);
        *(__m128i *)(v7 - 24) = _mm_load_si128(&v70);
      }
      v13 = v5;
      if ( v10 == v5 )
        return operator delete();
      while ( 1 )
      {
        if ( !v13->m128i_i32[0] || v13->m128i_i32[0] == 1045 )
          goto LABEL_13;
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v24 = 1;
          v57 = a1 + 8;
        }
        else
        {
          v38 = *(_DWORD *)(a1 + 16);
          v57 = *(_QWORD *)(a1 + 8);
          if ( !v38 )
          {
            v54 = v13;
            v55 = 10;
            v56 = nullptr;
            while ( v55 )
            {
              *v56 = v54->m128i_i32[0];
              v54 = (const __m128i *)((char *)v54 + 4);
              ++v56;
              --v55;
            }
            BUG();
          }
          v24 = v38 - 1;
        }
        v69.m128i_i32[0] = 73;
        v58 = v8;
        v25 = sub_7204C0(v69.m128i_i32, v13->m128i_i32[0]);
        v26 = v13->m128i_i32[0];
        v8 = v58;
        if ( v25 )
        {
          v46 = v13->m128i_i64[1];
          v61 = v58;
          v59 = v13->m128i_i32[0];
          v69.m128i_i64[0] = v13[1].m128i_i64[0];
          v66.m128i_i64[0] = v46;
          v47 = sub_7DB4D0(&v66, &v69);
          v26 = v59;
          v8 = v61;
          v27 = v47;
        }
        else if ( v26 == 5 )
        {
          v49 = v13->m128i_i64[1];
          v66.m128i_i64[0] = v13[1].m128i_i64[0];
          v69.m128i_i64[0] = v49;
          v50 = sub_7DB530(&v69, &v66);
          v26 = 5;
          v8 = v58;
          v27 = v50;
        }
        else
        {
          v27 = -1916529075;
          if ( v26 > 73 )
          {
            v28 = v13->m128i_u64[1];
            v29 = 0x9DDFEA08EB382D69LL
                * (((0x9DDFEA08EB382D69LL * (HIDWORD(v28) ^ (8LL * (unsigned int)v28 - 0xAE502812AA7333LL))) >> 47)
                 ^ (0x9DDFEA08EB382D69LL * (HIDWORD(v28) ^ (8LL * (unsigned int)v28 - 0xAE502812AA7333LL)))
                 ^ HIDWORD(v28));
            v27 = -348639895 * (v29 ^ (v29 >> 47));
          }
        }
        v30 = v24 & v27;
        v31 = 1;
        v32 = nullptr;
        while ( 1 )
        {
          while ( 1 )
          {
            v33 = (__m128i *)(v57 + 40LL * v30);
            v34 = v33->m128i_i32[0];
            if ( !v26 )
            {
              if ( v34 )
              {
                v35 = v31 + 1;
                for ( j = v24 & (v30 + v31); ; j = v24 & (v37 + j) )
                {
                  v33 = (__m128i *)(v57 + 40LL * j);
                  if ( !v33->m128i_i32[0] )
                    break;
                  v37 = v35++;
                }
              }
              goto LABEL_51;
            }
            if ( v26 == 1045 )
              break;
            if ( v26 == v34 )
            {
              if ( v34 == 6 )
              {
                if ( v13->m128i_i64[1] == v33->m128i_i64[1] )
                  goto LABEL_51;
                goto LABEL_72;
              }
              v69.m128i_i32[0] = 73;
              v65 = v8;
              v64 = (__m128i *)(v57 + 40LL * v30);
              v63 = v30;
              v62 = v32;
              v60 = v31;
              v51 = sub_7204C0(v69.m128i_i32, v13->m128i_i32[0]);
              v31 = v60;
              v32 = v62;
              v30 = v63;
              v33 = v64;
              v8 = v65;
              if ( v51 || v13->m128i_i32[0] == 5 )
              {
                if ( v13->m128i_i64[1] == v64->m128i_i64[1] && v13[1].m128i_i64[0] == v64[1].m128i_i64[0] )
                  goto LABEL_51;
                v34 = v64->m128i_i32[0];
              }
              else
              {
                v34 = v64->m128i_i32[0];
                if ( v13->m128i_i32[0] <= 73 )
                {
                  if ( v34 <= 73 || !v64->m128i_i64[1] )
                    goto LABEL_51;
                  goto LABEL_72;
                }
                v52 = v13->m128i_i64[1];
                if ( v34 > 73 )
                {
                  if ( v64->m128i_i64[1] == v52 )
                    goto LABEL_51;
                  goto LABEL_72;
                }
                if ( !v52 )
                  goto LABEL_51;
              }
            }
            if ( !v34 )
              goto LABEL_49;
LABEL_72:
            v26 = v13->m128i_i32[0];
            v30 = v24 & (v31 + v30);
            if ( v34 == 1045 && !v32 )
              v32 = v33;
            ++v31;
          }
          if ( v34 == 1045 )
            goto LABEL_51;
          if ( !v34 )
            break;
          v53 = v31 + v30;
          v26 = v13->m128i_i32[0];
          ++v31;
          v30 = v24 & v53;
        }
LABEL_49:
        if ( v32 )
          v33 = v32;
LABEL_51:
        *v33 = _mm_loadu_si128(v13);
        v33[1] = _mm_loadu_si128(v13 + 1);
        v33[2].m128i_i64[0] = v13[2].m128i_i64[0];
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
LABEL_13:
        v13 = (const __m128i *)((char *)v13 + 40);
        if ( v10 == v13 )
          return operator delete();
      }
    }
  }
  else
  {
    v4 = (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1) | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)) >> 4);
    v2 = (v4 | (v4 >> 8) | ((v4 | (v4 >> 8)) >> 16)) + 1;
    if ( (unsigned int)v2 < 0x40 )
      LODWORD(v2) = 64;
    if ( !v3 )
    {
      v5 = *(const __m128i **)(a1 + 8);
      v6 = *(_DWORD *)(a1 + 16);
      v7 = sub_25CC9C0(40LL * (unsigned int)v2, 8);
      *(_DWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 8) = v7;
      goto LABEL_6;
    }
  }
  v15 = *(_DWORD *)(a1 + 8);
  if ( v15 != 1045 && v15 )
  {
    v41 = *(_QWORD *)(a1 + 40);
    v16 = &v69;
    v17 = (__m128i *)&v72;
    v69 = _mm_loadu_si128((const __m128i *)(a1 + 8));
    v42 = _mm_loadu_si128((const __m128i *)(a1 + 24));
    v71 = v41;
    v70 = v42;
  }
  else
  {
    v16 = &v69;
    v17 = &v69;
  }
  v18 = *(_DWORD *)(a1 + 48);
  if ( v18 && v18 != 1045 )
  {
    v39 = *(_QWORD *)(a1 + 80);
    v17 = (__m128i *)((char *)v17 + 40);
    *(__m128i *)((char *)v17 - 40) = _mm_loadu_si128((const __m128i *)(a1 + 48));
    v40 = _mm_loadu_si128((const __m128i *)(a1 + 64));
    v17[-1].m128i_i64[1] = v39;
    *(__m128i *)((char *)v17 - 24) = v40;
  }
  if ( (unsigned int)v2 > 2 )
  {
    *(_BYTE *)a1 &= ~1u;
    v48 = sub_25CC9C0(40LL * (unsigned int)v2, 8);
    *(_DWORD *)(a1 + 16) = v2;
    *(_QWORD *)(a1 + 8) = v48;
  }
  v9 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  v66.m128i_i32[0] = 0;
  if ( v9 )
  {
    result = *(_QWORD *)(a1 + 8);
    v19 = 40LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    result = a1 + 8;
    v19 = 80;
  }
  v20 = result + v19;
  if ( v20 != result )
  {
    v21 = _mm_load_si128(&v66);
    v22 = _mm_load_si128(&v67);
    v23 = v68;
    do
    {
      *(_QWORD *)(result + 32) = v23;
      result += 40;
      *(__m128i *)(result - 40) = v21;
      *(__m128i *)(result - 24) = v22;
    }
    while ( v20 != result );
  }
  if ( v17 != &v69 )
  {
    do
    {
      result = v16->m128i_u32[0];
      if ( (_DWORD)result && (_DWORD)result != 1045 )
      {
        sub_7DB920(a1, (__int64)v16, &v66);
        v43 = v66.m128i_i64[0];
        v44 = v16[2].m128i_i64[0];
        *(__m128i *)v66.m128i_i64[0] = _mm_loadu_si128(v16);
        v45 = _mm_loadu_si128(v16 + 1);
        *(_QWORD *)(v43 + 32) = v44;
        *(__m128i *)(v43 + 16) = v45;
        result = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1u;
        *(_DWORD *)a1 = result;
      }
      v16 = (__m128i *)((char *)v16 + 40);
    }
    while ( v17 != v16 );
  }
  return result;
}

