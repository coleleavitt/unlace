unsigned __int64 __fastcall sub_1AB7A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rdi
  unsigned int v6; // ebx
  const char *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // r12
  __int64 v11; // r15
  __int64 *v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdi
  __m128i v16; // xmm3
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rax
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int8 max_serial; // r15
  __int64 v24; // rax
  unsigned __int8 i; // r12
  char *v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int ordinal_limit; // [rsp+Ch] [rbp-ECh]
  __m128i v35; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v36; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v37[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v38; // [rsp+40h] [rbp-B8h]
  __int64 v39; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v40; // [rsp+58h] [rbp-A0h]
  __int64 v41; // [rsp+68h] [rbp-90h]
  __int128 v42; // [rsp+70h] [rbp-88h]
  int v43; // [rsp+80h] [rbp-78h]
  char v44; // [rsp+84h] [rbp-74h]
  __int128 v45; // [rsp+90h] [rbp-68h] BYREF
  __m128i v46; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v47; // [rsp+B8h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( (int)a3 <= 0 )
    a3 = 8;
  v5 = nullptr;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = a3;
  *(_OWORD *)(a1 + 8) = 0;
  ordinal_limit = get_ordinal_limit(0, a2, a3, a4);
  if ( ordinal_limit > 1 )
  {
    v6 = 1;
    v35 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_85CAD8), (__m128i)(unsigned __int64)sub_1AAE60);
    do
    {
      v36 = 0;
      v39 = 0;
      v41 = 0;
      v43 = 0;
      v44 = 0x80;
      v38 = 257;
      v37[1] = v6;
      v40 = 0;
      v42 = 0;
      v7 = (_BYTE *)(&word_3C + 1);
      v37[0] = get_idati(v5);
      if ( (unsigned __int8)create_tinfo(&v36, 61, 189, v37) )
      {
        v7 = (_BYTE *)(&qword_28 + 5);
        if ( (unsigned __int8)get_tinfo_details(v36, 45, &v39) )
        {
          v16 = _mm_load_si128(&v35);
          v17 = *(unsigned int *)(a1 + 40);
          v7 = *(const char **)(a1 + 24);
          v45 = 0;
          v46 = v16;
          v18 = visit_edms(&v36, v7, v17, 0, &v45);
          if ( v46.m128i_i64[0] )
          {
            v7 = (const char *)&v45;
            ((void (__fastcall *)(__int128 *, __int128 *, __int64))v46.m128i_i64[0])(&v45, &v45, 3);
          }
          if ( v18 == 1 )
          {
            v19 = *(_QWORD *)(a1 + 8);
            v20 = *(_QWORD *)a1;
            LODWORD(v37[0]) = v6;
            BYTE4(v37[0]) = 0;
            v21 = *(_QWORD *)(a1 + 16);
            v22 = v19 + 1;
            if ( (unsigned __int64)v37 >= v20 && (unsigned __int64)v37 < v20 + 8 * v21 )
            {
              if ( v21 < v22 )
              {
                v33 = qvector_reserve(a1, v20, v22, 8);
                *(_QWORD *)a1 = v33;
                v20 = v33;
                v19 = *(_QWORD *)(a1 + 8);
              }
              v31 = v20 + 8 * v19;
              *(_DWORD *)v31 = v6;
              *(_BYTE *)(v31 + 4) = 0;
            }
            else
            {
              if ( v21 < v22 )
              {
                v32 = qvector_reserve(a1, v20, v22, 8);
                *(_QWORD *)a1 = v32;
                v20 = v32;
                v19 = *(_QWORD *)(a1 + 8);
              }
              *(_QWORD *)(v20 + 8 * v19) = v37[0];
            }
            ++*(_QWORD *)(a1 + 8);
            v7 = *(const char **)(a1 + 24);
            max_serial = enum_type_data_t__get_max_serial(&v39, v7);
            if ( max_serial )
            {
              v24 = *(_QWORD *)(a1 + 8);
              for ( i = 1; i <= max_serial; ++i )
              {
                v7 = *(const char **)a1;
                v27 = *(_QWORD *)(a1 + 16);
                LODWORD(v37[0]) = v6;
                v28 = v24 + 1;
                BYTE4(v37[0]) = i;
                if ( v37 < (_QWORD *)v7 || v37 >= (_QWORD *)&v7[8 * v27] )
                {
                  if ( v27 < v28 )
                  {
                    v29 = qvector_reserve(a1, v7, v24 + 1, 8);
                    *(_QWORD *)a1 = v29;
                    v7 = (const char *)v29;
                    v24 = *(_QWORD *)(a1 + 8);
                  }
                  *(_QWORD *)&v7[8 * v24] = v37[0];
                }
                else
                {
                  if ( v27 < v28 )
                  {
                    v30 = qvector_reserve(a1, v7, v24 + 1, 8);
                    *(_QWORD *)a1 = v30;
                    v7 = (const char *)v30;
                    v24 = *(_QWORD *)(a1 + 8);
                  }
                  v26 = (char *)&v7[8 * v24];
                  *(_DWORD *)v26 = v6;
                  v26[4] = i;
                }
                v24 = *(_QWORD *)(a1 + 8) + 1LL;
                *(_QWORD *)(a1 + 8) = v24;
              }
            }
          }
        }
      }
      if ( v41 )
      {
        *(_QWORD *)&v42 = 0;
        qfree(v41, v7, 0.0);
      }
      v8 = v39;
      if ( v39 )
      {
        v9 = v40;
        if ( (_QWORD)v40 )
        {
          v10 = 0;
          v11 = 0;
          do
          {
            v12 = (__int64 *)(v8 + v10);
            v13 = *(_QWORD *)(v8 + v10 + 24);
            if ( v13 )
            {
              v12[4] = 0;
              qfree(v13, v7, 0.0);
            }
            v14 = *v12;
            if ( *v12 )
            {
              v12[1] = 0;
              qfree(v14, v7, 0.0);
            }
            ++v11;
            v8 = v39;
            v10 += 56;
          }
          while ( v9 != v11 );
        }
        *(_QWORD *)&v40 = 0;
        qfree(v8, v7, 0.0);
      }
      v5 = &v36;
      ++v6;
      clear_tinfo_t(&v36);
    }
    while ( ordinal_limit != v6 );
  }
  return v47 - __readfsqword(0x28u);
}
