void *__fastcall sub_415900(__int64 a1, __int64 a2, double a3, double a4, __m128 a5)
{
  unsigned __int64 *v5; // rax
  unsigned __int64 *v6; // r15
  unsigned __int64 *v7; // r15
  __int64 v8; // rbx
  __int64 v9; // r8
  unsigned __int64 *v10; // r14
  unsigned __int64 *v11; // rbx
  unsigned __int64 v12; // r12
  __int64 v13; // rcx
  int v14; // edx
  __m128i v15; // xmm0
  __m128i *v16; // rbp
  __int32 v17; // r9d
  __int64 v18; // rcx
  __m128i *v19; // r13
  int v20; // esi
  __m128i v21; // xmm1
  __int64 v22; // r9
  __m128i *v23; // rdi
  __m128i *v24; // rax
  __m128i *v25; // rcx
  __int64 v26; // r9
  __int64 v27; // rax
  unsigned __int64 *v28; // rax
  void *result; // rax
  __int64 v30; // rax
  __int32 v31; // r10d
  __m128i *v32; // rdx
  __m128i *v33; // rax
  const __m128i *v34; // r15
  __m128i *v35; // r11
  __int64 v36; // rdx
  __m128i *v37; // rsi
  __m128i *v38; // rdx
  __m128i v39; // xmm1
  __m128i v40; // [rsp+0h] [rbp-98h] BYREF
  __m128i v41; // [rsp+10h] [rbp-88h] BYREF
  __int64 v42; // [rsp+20h] [rbp-78h]
  void *v43; // [rsp+28h] [rbp-70h]
  __int32 v44; // [rsp+34h] [rbp-64h]
  __m128i *v45; // [rsp+38h] [rbp-60h]
  unsigned __int64 *v46; // [rsp+40h] [rbp-58h] BYREF
  unsigned int v47; // [rsp+48h] [rbp-50h]
  __int64 v48; // [rsp+4Ch] [rbp-4Ch]

  v40.m128i_i64[0] = a1;
  v5 = (unsigned __int64 *)sub_186B270(0x80u);
  v48 = 0;
  *(_OWORD *)v5 = 0;
  v6 = v5;
  *((_OWORD *)v5 + 1) = 0;
  *((_OWORD *)v5 + 2) = 0;
  *((_OWORD *)v5 + 3) = 0;
  *((_OWORD *)v5 + 4) = 0;
  *((_OWORD *)v5 + 5) = 0;
  *((_OWORD *)v5 + 6) = 0;
  *((_OWORD *)v5 + 7) = 0;
  sub_3FFD00(a1);
  v46 = v6;
  v47 = 8;
  sub_414E70(v40.m128i_i64[0], a2, (__int64)&v46, (__m128)0LL, a4, a5);
  v7 = v46;
  v8 = v47;
  v43 = v46;
  sub_410520(v40.m128i_i64[0], (__int64)&v46, 0.0);
  sub_400CE0(v40.m128i_i64[0], 0.0);
  v9 = v40.m128i_i64[0];
  v10 = &v7[2 * v8];
  v11 = v7;
  if ( v10 == v7 )
    goto LABEL_30;
  while ( *v11 <= 1 )
  {
    v11 += 2;
    if ( v10 == v11 )
      goto LABEL_30;
  }
  if ( v10 != v11 )
  {
    v12 = *v11;
    while ( 1 )
    {
      v13 = *(unsigned int *)(v9 + 272);
      v14 = *(_DWORD *)(v9 + 280);
      v15 = _mm_loadl_epi64((const __m128i *)(v11 + 1));
      if ( 3 * (int)v13 < (unsigned int)(4 * (v14 + *(_DWORD *)(v9 + 276))) )
      {
        v41.m128i_i64[1] = v9;
        v40.m128i_i32[2] = 2 * v13;
        v40.m128i_i64[0] = 16LL * (unsigned int)(2 * v13);
        v41.m128i_i64[0] = v15.m128i_i64[0];
        v30 = sub_186B270(v40.m128i_u64[0]);
        v31 = v40.m128i_i32[2];
        v18 = v40.m128i_i64[0];
        v16 = (__m128i *)v30;
        v32 = (__m128i *)v30;
        v15 = _mm_loadl_epi64(&v41);
        v9 = v41.m128i_i64[1];
        v33 = (__m128i *)(v40.m128i_i64[0] + v30);
        if ( v40.m128i_i32[2] )
        {
          if ( (((_BYTE)v33 - (_BYTE)v16) & 0x10) == 0 || (v32 = v16 + 1, *v16 = 0, &v16[1] != v33) )
          {
            do
            {
              v32 += 2;
              v32[-2] = 0;
              v32[-1] = 0;
            }
            while ( v32 != v33 );
          }
        }
        v34 = *(const __m128i **)(v9 + 264);
        v17 = v31 - 1;
        v19 = v33;
        v35 = (__m128i *)&v34[*(unsigned int *)(v9 + 272)];
        if ( v34 != v35 )
        {
          do
          {
            while ( v34->m128i_i64[0] <= 1uLL )
            {
              if ( v35 == ++v34 )
                goto LABEL_46;
            }
            v36 = 16LL * (*(_DWORD *)(v34->m128i_i64[0] + 12) & (unsigned int)v17);
            v37 = &v16[(unsigned __int64)v36 / 0x10];
            if ( v18 == v36 )
            {
LABEL_50:
              if ( v16 == v37 )
              {
LABEL_58:
                v45 = v33;
                v44 = v31;
                v42 = v9;
                v41.m128i_i64[1] = v18;
                v41.m128i_i32[0] = v31 - 1;
                v40.m128i_i64[1] = (__int64)v35;
                v40.m128i_i64[0] = v15.m128i_i64[0];
                sub_1872CE0("");
                sub_1873130(114, 213);
              }
              v38 = v16;
              while ( v38->m128i_i64[0] )
              {
                if ( v37 == ++v38 )
                  goto LABEL_58;
              }
            }
            else
            {
              v38 = &v16[(unsigned __int64)v36 / 0x10];
              while ( v38->m128i_i64[0] )
              {
                if ( v33 == ++v38 )
                  goto LABEL_50;
              }
            }
            v39 = _mm_loadu_si128(v34++);
            *v38 = v39;
          }
          while ( v35 != v34 );
LABEL_46:
          v35 = *(__m128i **)(v9 + 264);
        }
        if ( v35 )
        {
          LODWORD(v42) = v31;
          v41.m128i_i64[1] = v9;
          v41.m128i_i64[0] = v18;
          v40.m128i_i32[2] = v31 - 1;
          v40.m128i_i64[0] = v15.m128i_i64[0];
          sub_186B220(v35);
          v31 = v42;
          v9 = v41.m128i_i64[1];
          v18 = v41.m128i_i64[0];
          v17 = v40.m128i_i32[2];
          v15 = _mm_loadl_epi64(&v40);
        }
        *(_QWORD *)(v9 + 264) = v16;
        v14 = 0;
        *(_DWORD *)(v9 + 272) = v31;
        *(_DWORD *)(v9 + 280) = 0;
      }
      else
      {
        v16 = *(__m128i **)(v9 + 264);
        v17 = v13 - 1;
        v18 = 16 * v13;
        v19 = (__m128i *)((char *)v16 + v18);
      }
      v20 = *(_DWORD *)(v12 + 12);
      v21 = _mm_unpacklo_epi64((__m128i)v12, v15);
      v22 = 16LL * (v20 & (unsigned int)v17);
      v23 = &v16[(unsigned __int64)v22 / 0x10];
      if ( v22 != v18 )
      {
        v24 = &v16[(unsigned __int64)v22 / 0x10];
        v25 = nullptr;
        while ( 1 )
        {
          v26 = v24->m128i_i64[0];
          if ( v24->m128i_i64[0] > 1uLL )
          {
            if ( *(_DWORD *)(v26 + 12) == v20 && v26 == v12 )
            {
              *v24 = v21;
              goto LABEL_25;
            }
          }
          else
          {
            if ( !v26 )
            {
              if ( v25 )
                goto LABEL_56;
              v25 = v24;
              goto LABEL_57;
            }
            v25 = v24;
          }
          if ( ++v24 == v19 )
            goto LABEL_20;
        }
      }
      v25 = nullptr;
      while ( 1 )
      {
LABEL_20:
        if ( v23 == v16 )
        {
          v40.m128i_i64[0] = v9;
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v27 = v16->m128i_i64[0];
        if ( v16->m128i_i64[0] <= 1uLL )
          break;
        if ( *(_DWORD *)(v27 + 12) == v20 && v27 == v12 )
        {
          *v16 = v21;
          goto LABEL_25;
        }
LABEL_19:
        ++v16;
      }
      if ( v27 )
        break;
      if ( v25 )
LABEL_56:
        *(_DWORD *)(v9 + 280) = v14 - 1;
      else
        v25 = v16;
LABEL_57:
      *v25 = v21;
      ++*(_DWORD *)(v9 + 276);
LABEL_25:
      v28 = v11 + 2;
      if ( v10 != v11 + 2 )
      {
        while ( 1 )
        {
          v12 = *v28;
          v11 = v28;
          if ( *v28 > 1 )
            break;
          v28 += 2;
          if ( v10 == v28 )
            goto LABEL_30;
        }
        if ( v10 != v28 )
          continue;
      }
      goto LABEL_30;
    }
    v25 = v16;
    goto LABEL_19;
  }
LABEL_30:
  sub_401E80(v9);
  result = v43;
  if ( v43 )
    return (void *)sub_186B220(v43);
  return result;
}

