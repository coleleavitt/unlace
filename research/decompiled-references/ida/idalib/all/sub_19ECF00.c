__int64 __fastcall sub_19ECF00(__int64 a1, __int64 a2, __m128 a3)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r13
  __int64 *v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edx
  int v19; // eax
  __int64 v20; // rax
  unsigned __int8 *v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int8 v23; // cl
  __int64 v24; // r13
  __int64 *v25; // r14
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdi
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rdi
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // rdx
  __m128i *v40; // rcx
  __int64 v41; // rax
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // [rsp+10h] [rbp-78h]
  __int64 v50; // [rsp+10h] [rbp-78h]
  __int64 v51; // [rsp+18h] [rbp-70h]
  __int8 v52; // [rsp+2Fh] [rbp-59h] BYREF
  __m128i v53; // [rsp+30h] [rbp-58h] BYREF
  int v54; // [rsp+40h] [rbp-48h]
  __int64 v55; // [rsp+48h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 32);
  v6 = sub_BFBC70(v5);
  if ( v6 )
  {
    v13 = v6;
    sub_19EC960((__int64)&v53, v6, 0, v8, v9);
    if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
    {
      v17 = *(_DWORD *)(a2 + 24);
    }
    else if ( *(char *)(a2 + 2) >= 0
           || (v17 = sub_EEB7E0(
                       *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                       v13,
                       *(double *)a3.m128_u64)) == 0 )
    {
      v17 = sub_EEB7E0(*(_QWORD *)(a2 + 32), v13, *(double *)a3.m128_u64);
      if ( !v17 )
      {
        v16 = *(unsigned int *)(a2 + 16);
        if ( (_DWORD)v16 )
        {
          v30 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
          if ( v30 )
            v17 = sub_EEB7E0(v30, v13, *(double *)a3.m128_u64);
        }
      }
    }
    sub_19EC1F0(a1, v53.m128i_i64, v17, v14, v15, v16);
  }
  else if ( (*(_WORD *)v5 & 0x1FF) != 0x66 )
  {
    v10 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_4:
    while ( 1 )
    {
      v11 = (__int64 *)(sub_F68450(v10, a2, v7, v8, v9) & 0xFFFFFFFFFFFFFFF0LL);
      v12 = (__int64)v11;
      if ( !v11 )
        break;
      v10 = *v11;
    }
    v19 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    v7 = (unsigned int)(v19 - 2);
    if ( (unsigned __int8)(v19 - 2) <= 4u )
    {
      while ( 1 )
      {
        if ( (unsigned __int8)(*(_BYTE *)(v10 + 16) - 2) > 4u )
        {
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
            goto LABEL_4;
          v20 = sub_F63050(v10, a2, v7, v8);
          if ( !v20 )
            goto LABEL_4;
          v10 = v20;
        }
        v10 = *(_QWORD *)(*(_QWORD *)(v10 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      }
    }
    if ( (*(_BYTE *)(v10 + 16) == 26 || (_BYTE)v19 == 26 && (v10 = sub_F63050(v10, a2, v7, v8)) != 0)
      && (sub_A5DD60(&v53, v10), v21 = (unsigned __int8 *)v53.m128i_i64[0], v53.m128i_i64[1])
      && v53.m128i_i64[0] + v53.m128i_i64[1] != v53.m128i_i64[0] )
    {
      v22 = *(unsigned __int8 *)v53.m128i_i64[0];
      v23 = *(_BYTE *)v53.m128i_i64[0];
      if ( v22 > 3 )
LABEL_24:
        std::__throw_out_of_range_fmt("%s: __position (which is %zu) >= _Nb (which is %zu)", "bitset::set", v22, 4u);
      v24 = 0;
      while ( 1 )
      {
        ++v21;
        v24 |= 1LL << v23;
        if ( (unsigned __int8 *)(v53.m128i_i64[0] + v53.m128i_i64[1]) == v21 )
          break;
        v22 = *v21;
        v23 = *v21;
        if ( v22 > 3 )
          goto LABEL_24;
      }
    }
    else
    {
      v24 = 0;
    }
    v25 = *(__int64 **)(a1 + 24);
    v26 = *v25;
    if ( (*v25 & 1) != 0 )
    {
      v27 = 0;
      goto LABEL_60;
    }
    if ( (v26 & 2) != 0 )
    {
      v27 = 1;
      goto LABEL_60;
    }
    if ( (v26 & 4) != 0 )
    {
      v27 = 2;
      while ( 1 )
      {
LABEL_60:
        v52 = v27;
        if ( (unsigned __int8)sub_F5EE50((unsigned __int8 *)&v52, 0, v24) )
        {
          if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
          {
            v37 = *(_DWORD *)(a2 + 24);
          }
          else if ( *(char *)(a2 + 2) >= 0
                 || (v37 = sub_EEB7E0(
                             *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                             0,
                             *(double *)a3.m128_u64)) == 0 )
          {
            v37 = sub_EEB7E0(*(_QWORD *)(a2 + 32), 0, *(double *)a3.m128_u64);
            if ( !v37 )
            {
              if ( *(_DWORD *)(a2 + 16) )
              {
                v45 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
                if ( v45 )
                  v37 = sub_EEB7E0(v45, 0, *(double *)a3.m128_u64);
              }
            }
          }
          v38 = *(_QWORD *)(a1 + 24);
          v39 = *(_QWORD *)(a1 + 40);
          v54 = v37;
          v53.m128i_i16[1] = 2048;
          v53.m128i_i64[1] = v39;
          v53.m128i_i8[0] = v52;
          v40 = &v53;
          v55 = 0;
          v41 = *(unsigned int *)(v38 + 24);
          v42 = *(_QWORD *)(v38 + 16);
          v43 = v41 + 1;
          v44 = v42 + 32 * v41;
          if ( v43 > *(unsigned int *)(v38 + 28) )
          {
            v46 = v38 + 16;
            v47 = v38 + 32;
            v49 = *(_QWORD *)(v38 + 16);
            if ( v42 > (unsigned __int64)&v53 || v44 <= (unsigned __int64)&v53 )
            {
              v50 = v38;
              sub_2237220(v46, v47, v43, 32);
              v38 = v50;
              v40 = &v53;
              v44 = *(_QWORD *)(v50 + 16) + 32LL * *(unsigned int *)(v50 + 24);
            }
            else
            {
              v51 = v38;
              sub_2237220(v46, v47, v43, 32);
              v38 = v51;
              v48 = *(_QWORD *)(v51 + 16);
              v40 = (__m128i *)((char *)&v53 + v48 - v49);
              v44 = v48 + 32LL * *(unsigned int *)(v51 + 24);
            }
          }
          a3 = (__m128)_mm_loadu_si128(v40);
          *(__m128 *)v44 = a3;
          *(__m128i *)(v44 + 16) = _mm_loadu_si128(v40 + 1);
          ++*(_DWORD *)(v38 + 24);
        }
        if ( v27 == 3 )
          break;
        v36 = *v25;
        if ( _bittest64(&v36, v27 + 1) )
        {
          ++v27;
        }
        else
        {
          if ( v27 == 2 )
            break;
          if ( (v36 & (1LL << ((unsigned __int8)v27 + 2))) != 0 )
          {
            v27 += 2;
          }
          else
          {
            if ( v27 || (v36 & 8) == 0 )
              break;
            v27 = 3;
          }
        }
      }
      v25 = *(__int64 **)(a1 + 24);
    }
    else
    {
      v27 = 3;
      if ( (v26 & 8) != 0 )
        goto LABEL_60;
    }
    v28 = v25[1];
    if ( (v28 & 1) != 0 )
      goto LABEL_36;
    if ( (v28 & 2) != 0 )
    {
      v12 = 1;
      goto LABEL_36;
    }
    if ( (v28 & 4) != 0 )
    {
      v12 = 2;
      while ( 1 )
      {
LABEL_36:
        v52 = v12;
        if ( (unsigned __int8)sub_F5EE50((unsigned __int8 *)&v52, 0, v24) )
        {
          if ( (*(_BYTE *)(a2 + 3) & 1) != 0 )
          {
            v31 = *(_DWORD *)(a2 + 24);
          }
          else if ( *(char *)(a2 + 2) >= 0
                 || (v31 = sub_EEB7E0(
                             *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32),
                             0,
                             *(double *)a3.m128_u64)) == 0 )
          {
            v31 = sub_EEB7E0(*(_QWORD *)(a2 + 32), 0, *(double *)a3.m128_u64);
            if ( !v31 )
            {
              v34 = *(unsigned int *)(a2 + 16);
              if ( (_DWORD)v34 )
              {
                v35 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
                if ( v35 )
                  v31 = sub_EEB7E0(v35, v34, *(double *)a3.m128_u64);
              }
            }
          }
          v32 = *(_QWORD *)(a1 + 40);
          v54 = v31;
          v55 = 0;
          v33 = *(_QWORD *)(a1 + 24);
          v53.m128i_i8[0] = v52;
          v53.m128i_i16[1] = 2048;
          v53.m128i_i64[1] = v32;
          sub_19EAB70((void ***)(v33 + 32), &v53);
        }
        if ( v12 == 3 )
          break;
        v29 = v25[1];
        if ( _bittest64(&v29, v12 + 1) )
        {
          ++v12;
        }
        else
        {
          if ( v12 == 2 )
            return 1;
          if ( (v29 & (1LL << ((unsigned __int8)v12 + 2))) != 0 )
          {
            v12 += 2;
          }
          else
          {
            if ( v12 || (v29 & 8) == 0 )
              return 1;
            v12 = 3;
          }
        }
      }
    }
    else
    {
      v12 = 3;
      if ( (v28 & 8) != 0 )
        goto LABEL_36;
    }
  }
  return 1;
}
