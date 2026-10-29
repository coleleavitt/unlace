unsigned __int64 __fastcall sub_3FE180(_QWORD *a1, unsigned __int64 *a2)
{
  __int64 v4; // rsi
  __m128i *v5; // rdi
  unsigned int v6; // eax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  __int64 v15; // r14
  char v16; // al
  __int64 v17; // rbx
  char v18; // al
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rbp
  char v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rax
  const char *v27; // rax
  const char *v28; // rbp
  size_t v29; // rax
  const char *v30; // rax
  const char *v31; // rbp
  size_t v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // r15
  _QWORD *v36; // rbx
  void *v37; // rdi
  __m128i v38; // xmm1
  __int64 v39; // rax
  unsigned __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp+8h] [rbp-E0h]
  char v44[8]; // [rsp+18h] [rbp-D0h] BYREF
  __m128i v45; // [rsp+20h] [rbp-C8h] BYREF
  void *v46; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v47; // [rsp+38h] [rbp-B0h]
  __m128i v48; // [rsp+50h] [rbp-98h] BYREF
  __int64 v49; // [rsp+60h] [rbp-88h]
  __int128 v50; // [rsp+68h] [rbp-80h]
  __int64 v51; // [rsp+78h] [rbp-70h]
  __int128 v52; // [rsp+80h] [rbp-68h]
  __int128 v53; // [rsp+90h] [rbp-58h]
  unsigned __int64 v54; // [rsp+A8h] [rbp-40h]

  v54 = __readfsqword(0x28u);
  netnode_check(v44, "$ dbgmemregs", 0, 0);
  if ( (unsigned __int8)sub_7BE6E0(*a1, v44) )
  {
    v4 = *a1;
    v46 = nullptr;
    v47 = 0;
    if ( sub_7BEED0(v44, v4, &v46, 1, 0, 82) > 0 )
    {
      v5 = &v45;
      v45 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v46, (__m128i)(unsigned __int64)((unsigned __int64)v46 + v47));
      v6 = unpack_dd(&v45);
      if ( (int)v6 > 0 )
      {
        v8 = *a2;
        v9 = a2[1];
        v10 = v6;
        v11 = *a2;
        if ( v6 != v9 )
        {
          v49 = 0;
          v53 = 0;
          v51 = 0;
          v48 = 0;
          v50 = 0;
          v52 = 0;
          if ( v6 < v9 )
          {
            v35 = v6;
            while ( 1 )
            {
              v36 = (_QWORD *)(v8 + 80 * v35);
              v37 = (void *)v36[5];
              if ( v37 )
              {
                v36[6] = 0;
                qfree(v37);
              }
              v5 = (__m128i *)v36[2];
              if ( v5 )
              {
                v36[3] = 0;
                qfree(v5);
              }
              if ( ++v35 >= v9 )
                break;
              v8 = *a2;
            }
            a2[1] = v10;
            v11 = *a2;
          }
          else
          {
            v12 = a2[2];
            if ( (unsigned __int64)&v48 < v8 || (v7 = v8 + 80 * v12, (unsigned __int64)&v48 >= v7) )
            {
              if ( v12 < v10 )
              {
                v5 = (__m128i *)a2;
                v41 = qvector_reserve(a2, v8, v10, 80);
                *a2 = v41;
                v9 = a2[1];
                v11 = v41;
              }
              if ( v9 < v10 )
              {
                v38 = _mm_load_si128(&v48);
                v39 = 80 * v9;
                do
                {
                  v40 = v39 + v11;
                  v7 = 0;
                  ++v9;
                  v39 += 80;
                  *(_QWORD *)(v40 + 16) = 0;
                  *(_QWORD *)(v40 + 40) = 0;
                  *(_QWORD *)(v40 + 64) = 0;
                  *(_WORD *)(v40 + 72) = 0;
                  *(__m128i *)v40 = v38;
                  *(_OWORD *)(v40 + 24) = 0;
                  *(_OWORD *)(v40 + 48) = 0;
                  v11 = *a2;
                }
                while ( v10 != v9 );
              }
              a2[1] = v10;
            }
            else
            {
              if ( v12 < v10 )
              {
                v5 = (__m128i *)a2;
                v42 = qvector_reserve(a2, v8, v10, 80);
                *a2 = v42;
                v9 = a2[1];
                v11 = v42;
              }
              if ( v9 >= v10 )
              {
                v8 = *a2;
              }
              else
              {
                v13 = 80 * v9;
                do
                {
                  v14 = v13 + v11;
                  ++v9;
                  v13 += 80;
                  *(_QWORD *)(v14 + 16) = 0;
                  *(_QWORD *)(v14 + 40) = 0;
                  *(_QWORD *)(v14 + 64) = 0;
                  *(_WORD *)(v14 + 72) = 0;
                  *(_OWORD *)v14 = 0;
                  *(_OWORD *)(v14 + 24) = 0;
                  *(_OWORD *)(v14 + 48) = 0;
                  v11 = *a2;
                  v8 = *a2;
                }
                while ( v10 != v9 );
              }
              a2[1] = v10;
              v11 = v8;
            }
          }
        }
        v15 = 0;
        v43 = 80 * v10;
        while ( 1 )
        {
          v17 = v15 + v11;
          v18 = is_cvt64(v5, v8, v7);
          v19 = v45.m128i_i64[1];
          if ( v18 )
          {
            v21 = (unsigned int)unpack_dd(&v45);
            if ( v21 == 0xFFFFFFFFLL )
              v21 = -1;
          }
          else
          {
            v21 = unpack_dq(&v45);
          }
          *(_QWORD *)v17 = v21;
          v22 = is_cvt64(&v45, v19, v20);
          v23 = v45.m128i_i64[1];
          if ( v22 )
          {
            v25 = (unsigned int)unpack_dd(&v45) + (unsigned int)v21;
            if ( (unsigned int)v25 == 0xFFFFFFFFLL )
              v25 = -1;
          }
          else
          {
            v25 = unpack_dq(&v45) + v21;
          }
          *(_QWORD *)(v17 + 8) = v25;
          if ( (unsigned __int8)is_cvt64(&v45, v23, v24) )
          {
            v26 = (unsigned int)unpack_dd(&v45);
            if ( (unsigned int)v26 == 0xFFFFFFFFLL )
              v26 = -1;
          }
          else
          {
            v26 = unpack_dq(&v45);
          }
          *(_QWORD *)(v17 + 64) = v26;
          v27 = (const char *)unpack_ds(&v45, v45.m128i_i64[1], 1);
          v28 = v27;
          if ( v27 )
          {
            v29 = strlen(v27);
            *(_QWORD *)(v17 + 16) = v28;
            *(__m128i *)(v17 + 24) = _mm_unpacklo_epi64((__m128i)(v29 + 1), (__m128i)(v29 + 1));
          }
          v8 = v45.m128i_u64[1];
          v5 = &v45;
          v30 = (const char *)unpack_ds(&v45, v45.m128i_i64[1], 1);
          v31 = v30;
          if ( v30 )
          {
            v5 = (__m128i *)v30;
            v32 = strlen(v30);
            *(_QWORD *)(v17 + 40) = v31;
            *(__m128i *)(v17 + 48) = _mm_unpacklo_epi64((__m128i)(v32 + 1), (__m128i)(v32 + 1));
          }
          v33 = v45.m128i_u64[1];
          v34 = v45.m128i_i64[0];
          if ( v45.m128i_i64[0] >= (unsigned __int64)v45.m128i_i64[1] )
          {
            *(_BYTE *)(v17 + 73) = 0;
            v7 = v34;
            v16 = 0;
          }
          else
          {
            v8 = *(unsigned __int8 *)v45.m128i_i64[0];
            v7 = ++v45.m128i_i64[0];
            *(_BYTE *)(v17 + 73) = v8;
            if ( v34 + 1 >= v33 )
            {
              v16 = 0;
            }
            else
            {
              v7 = v34 + 2;
              v16 = *(_BYTE *)(v34 + 1);
            }
          }
          v45.m128i_i64[0] = v7;
          v15 += 80;
          *(_BYTE *)(v17 + 72) = v16;
          if ( v43 == v15 )
            break;
          v11 = *a2;
        }
      }
    }
    if ( v46 )
    {
      *(_QWORD *)&v47 = 0;
      qfree(v46);
    }
  }
  return v54 - __readfsqword(0x28u);
}
