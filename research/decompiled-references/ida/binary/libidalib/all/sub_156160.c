unsigned __int64 __fastcall sub_156160(__int64 a1, __int64 a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r15
  _QWORD *v9; // r13
  __m128i v11; // xmm3
  __int64 v12; // r12
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  unsigned __int8 max_serial; // r15
  __int64 v18; // rax
  unsigned __int8 i; // r12
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned int ordinal_limit; // [rsp+Ch] [rbp-ECh]
  __m128i v30; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+28h] [rbp-D0h]
  _QWORD v32[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int16 v33; // [rsp+40h] [rbp-B8h]
  __int64 v34; // [rsp+50h] [rbp-A8h]
  __int128 v35; // [rsp+58h] [rbp-A0h]
  __int64 v36; // [rsp+68h] [rbp-90h]
  __int128 v37; // [rsp+70h] [rbp-88h]
  int v38; // [rsp+80h] [rbp-78h]
  char v39; // [rsp+84h] [rbp-74h]
  __int128 v40; // [rsp+90h] [rbp-68h] BYREF
  __m128i v41; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v42; // [rsp+B8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  if ( a3 <= 0 )
    a3 = 8;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = a2;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 40) = a3;
  *(_OWORD *)(a1 + 8) = 0;
  ordinal_limit = get_ordinal_limit();
  if ( ordinal_limit > 1 )
  {
    v4 = 1;
    v30 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_235518), (__m128i)(unsigned __int64)sub_1553F0);
    do
    {
      v31 = 0;
      v34 = 0;
      v36 = 0;
      v38 = 0;
      v39 = 0x80;
      v33 = 257;
      v32[1] = v4;
      v35 = 0;
      v37 = 0;
      v32[0] = get_idati();
      if ( (unsigned __int8)create_tinfo() && (unsigned __int8)get_tinfo_details() )
      {
        v11 = _mm_load_si128(&v30);
        v40 = 0;
        v41 = v11;
        v12 = visit_edms();
        if ( v41.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v41.m128i_i64[0])(&v40, &v40, 3);
        if ( v12 == 1 )
        {
          v13 = *(_QWORD *)(a1 + 8);
          v14 = *(_QWORD *)a1;
          LODWORD(v32[0]) = v4;
          BYTE4(v32[0]) = 0;
          v15 = *(_QWORD *)(a1 + 16);
          v16 = v13 + 1;
          if ( (unsigned __int64)v32 >= v14 && (unsigned __int64)v32 < v14 + 8 * v15 )
          {
            if ( v15 < v16 )
            {
              v28 = qvector_reserve();
              *(_QWORD *)a1 = v28;
              v14 = v28;
              v13 = *(_QWORD *)(a1 + 8);
            }
            v26 = v14 + 8 * v13;
            *(_DWORD *)v26 = v4;
            *(_BYTE *)(v26 + 4) = 0;
          }
          else
          {
            if ( v15 < v16 )
            {
              v27 = qvector_reserve();
              *(_QWORD *)a1 = v27;
              v14 = v27;
              v13 = *(_QWORD *)(a1 + 8);
            }
            *(_QWORD *)(v14 + 8 * v13) = v32[0];
          }
          ++*(_QWORD *)(a1 + 8);
          max_serial = enum_type_data_t__get_max_serial();
          if ( max_serial )
          {
            v18 = *(_QWORD *)(a1 + 8);
            for ( i = 1; i <= max_serial; ++i )
            {
              v25 = *(_QWORD *)a1;
              v21 = *(_QWORD *)(a1 + 16);
              LODWORD(v32[0]) = v4;
              v22 = v18 + 1;
              BYTE4(v32[0]) = i;
              if ( (unsigned __int64)v32 < v25 || (unsigned __int64)v32 >= v25 + 8 * v21 )
              {
                if ( v21 < v22 )
                {
                  v23 = qvector_reserve();
                  *(_QWORD *)a1 = v23;
                  v25 = v23;
                  v18 = *(_QWORD *)(a1 + 8);
                }
                *(_QWORD *)(v25 + 8 * v18) = v32[0];
              }
              else
              {
                if ( v21 < v22 )
                {
                  v24 = qvector_reserve();
                  *(_QWORD *)a1 = v24;
                  v25 = v24;
                  v18 = *(_QWORD *)(a1 + 8);
                }
                v20 = v25 + 8 * v18;
                *(_DWORD *)v20 = v4;
                *(_BYTE *)(v20 + 4) = i;
              }
              v18 = *(_QWORD *)(a1 + 8) + 1LL;
              *(_QWORD *)(a1 + 8) = v18;
            }
          }
        }
      }
      if ( v36 )
      {
        *(_QWORD *)&v37 = 0;
        qfree();
      }
      v5 = v34;
      if ( v34 )
      {
        v6 = v35;
        if ( (_QWORD)v35 )
        {
          v7 = 0;
          v8 = 0;
          do
          {
            v9 = (_QWORD *)(v5 + v7);
            if ( *(_QWORD *)(v5 + v7 + 24) )
            {
              v9[4] = 0;
              qfree();
            }
            if ( *v9 )
            {
              v9[1] = 0;
              qfree();
            }
            ++v8;
            v5 = v34;
            v7 += 56;
          }
          while ( v6 != v8 );
        }
        *(_QWORD *)&v35 = 0;
        qfree();
      }
      ++v4;
      clear_tinfo_t();
    }
    while ( ordinal_limit != v4 );
  }
  return v42 - __readfsqword(0x28u);
}

