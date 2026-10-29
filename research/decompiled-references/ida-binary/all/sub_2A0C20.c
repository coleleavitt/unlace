__int64 __fastcall sub_2A0C20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rax
  const char *v9; // rbx
  int v10; // eax
  __int64 v11; // r15
  int v12; // eax
  int v13; // esi
  int v14; // r9d
  __int64 (__fastcall *v15)(__int64, unsigned int); // r8
  __int64 (__fastcall *v16)(__int64); // rax
  int v17; // eax
  __m128i *v18; // rax
  unsigned int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(__int64); // rax
  int v23; // eax
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // r14
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rax
  int v29; // r9d
  unsigned __int64 v30; // rdx
  __int64 v31; // rdi
  __int64 v32; // r15
  __int64 v33; // r12
  unsigned int v34; // ebx
  __int64 v36; // rcx
  __int64 v37; // [rsp+0h] [rbp-90h]
  int v38; // [rsp+0h] [rbp-90h]
  int v39; // [rsp+8h] [rbp-88h]
  unsigned int v40; // [rsp+10h] [rbp-80h]
  int v41; // [rsp+10h] [rbp-80h]
  int v42; // [rsp+10h] [rbp-80h]
  unsigned __int64 v43; // [rsp+18h] [rbp-78h] BYREF
  __int64 v44; // [rsp+20h] [rbp-70h] BYREF
  __int64 *v45; // [rsp+28h] [rbp-68h] BYREF
  __int64 v46; // [rsp+30h] [rbp-60h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-58h] BYREF
  __int128 v48; // [rsp+40h] [rbp-50h]
  unsigned __int64 v49; // [rsp+50h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v48 = 0;
  v47 = 0;
  v5 = *(_QWORD *)(a1 + 72);
  v6 = (const char *)a1;
  v7 = sub_29C080(v5, a1, 0.0, a3, a4);
  if ( v7 )
  {
    v8 = ea2node(v5);
    v6 = (const char *)&v47;
    if ( netnode_qgetblob(v8, &v47, 1, v7, 108) > 0 )
    {
      v43 = v47;
      v9 = (const char *)(v48 + v47);
      v10 = unpack_dd(&v43, v48 + v47);
      v11 = 0;
      v37 = (unsigned int)v10;
      if ( v10 > 0 )
      {
        do
        {
          v19 = unpack_dd(&v43, v9);
          v21 = (unsigned int)unpack_dd(&v43, v9);
          v22 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
          if ( v22 == interactive_graph_t__::vfunc_7 )
          {
            v12 = *(_DWORD *)(a1 + 184);
          }
          else
          {
            v40 = v21;
            v12 = v22(a1);
            v21 = v40;
          }
          v13 = v11;
          if ( (int)v11 < v12 )
          {
            v14 = v11;
            v15 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)a1 + 152LL);
            if ( v15 == interactive_graph_t__::vfunc_19 )
            {
              v16 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
              if ( v16 == interactive_graph_t__::vfunc_7 )
              {
                v17 = *(_DWORD *)(a1 + 184);
              }
              else
              {
                v39 = v21;
                v17 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64 (__fastcall *)(__int64, unsigned int), _QWORD))v16)(
                        a1,
                        (unsigned int)v11,
                        v20,
                        v21,
                        v15,
                        (unsigned int)v11);
                v14 = v11;
                LODWORD(v21) = v39;
                v13 = v11;
              }
              if ( v13 >= v17 )
                sub_16B930((__int64)"nrect(%d) failed", v14);
              v18 = (__m128i *)(*(_QWORD *)(a1 + 224) + 16 * v11);
            }
            else
            {
              v42 = v21;
              v18 = (__m128i *)((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int64, __int64 (__fastcall *)(__int64, unsigned int), _QWORD))v15)(
                                 a1,
                                 (unsigned int)v11,
                                 v20,
                                 v21,
                                 v15,
                                 (unsigned int)v11);
              LODWORD(v21) = v42;
            }
            *v18 = _mm_unpacklo_epi64(
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128(v21)),
                     _mm_unpacklo_epi32(
                       _mm_cvtsi32_si128(v19 + v18->m128i_i32[2] - v18->m128i_i32[0]),
                       _mm_cvtsi32_si128((int)v21 + v18->m128i_i32[3] - v18->m128i_i32[1])));
          }
          ++v11;
        }
        while ( v37 != v11 );
      }
      v6 = v9;
      v41 = unpack_dd(&v43, v9);
      v38 = 0;
      if ( v41 <= 0 )
        goto LABEL_40;
      while ( 1 )
      {
        if ( v43 >= (unsigned __int64)v9 )
          goto LABEL_40;
        v44 = 0;
        LODWORD(v44) = unpack_dd(&v43, v9);
        v23 = unpack_dd(&v43, v9);
        v24 = *(_QWORD **)(a1 + 248);
        HIDWORD(v44) = v23;
        v25 = v24[2];
        v26 = (__int64)(v24 + 1);
        if ( !v25 )
          goto LABEL_52;
        do
        {
          while ( 1 )
          {
            if ( (int)v44 > *(_DWORD *)(v25 + 32) )
            {
              v25 = *(_QWORD *)(v25 + 24);
              goto LABEL_24;
            }
            if ( (_DWORD)v44 == *(_DWORD *)(v25 + 32) && v23 > *(_DWORD *)(v25 + 36) )
              break;
            v26 = v25;
            v25 = *(_QWORD *)(v25 + 16);
            if ( !v25 )
              goto LABEL_25;
          }
          v25 = *(_QWORD *)(v25 + 24);
LABEL_24:
          ;
        }
        while ( v25 );
LABEL_25:
        if ( v24 + 1 == (_QWORD *)v26
          || *(_DWORD *)(v26 + 32) > (int)v44
          || *(_DWORD *)(v26 + 32) == (_DWORD)v44 && v23 < *(_DWORD *)(v26 + 36) )
        {
LABEL_52:
          v45 = &v44;
          v26 = sub_2A06F0(v24, v26, &v45);
        }
        *(_DWORD *)(v26 + 48) = unpack_dd(&v43, v9);
        *(_DWORD *)(v26 + 52) = unpack_dd(&v43, v9);
        *(_DWORD *)(v26 + 40) = unpack_dd(&v43, v9);
        v6 = v9;
        v27 = (int)unpack_dd(&v43, v9);
        v28 = *(_QWORD *)(v26 + 64);
        v29 = v27;
        if ( v27 != v28 )
        {
          v46 = 0;
          if ( v27 >= v28 )
          {
            v6 = *(const char **)(v26 + 56);
            v30 = *(_QWORD *)(v26 + 72);
            v31 = v26 + 56;
            if ( &v46 < (__int64 *)v6 || &v46 >= (__int64 *)&v6[8 * v30] )
            {
              if ( v30 < v27 )
              {
                *(_QWORD *)(v26 + 56) = qvector_reserve(v31, v6, v27, 8);
                v29 = v27;
                v28 = *(_QWORD *)(v26 + 64);
              }
              v36 = v46;
              if ( v28 < v27 )
              {
                do
                  *(_QWORD *)(*(_QWORD *)(v26 + 56) + 8 * v28++) = v36;
                while ( v27 != v28 );
              }
            }
            else
            {
              if ( v30 < v27 )
              {
                *(_QWORD *)(v26 + 56) = qvector_reserve(v31, v6, v27, 8);
                v29 = v27;
                v28 = *(_QWORD *)(v26 + 64);
              }
              if ( v28 < v27 )
              {
                do
                  *(_QWORD *)(*(_QWORD *)(v26 + 56) + 8 * v28++) = 0;
                while ( v27 != v28 );
              }
            }
          }
          *(_QWORD *)(v26 + 64) = v27;
        }
        v32 = 0;
        v33 = 8LL * (unsigned int)v29;
        if ( v29 > 0 )
        {
          do
          {
            v6 = v9;
            *(_DWORD *)(*(_QWORD *)(v26 + 56) + v32) = unpack_dd(&v43, v9);
            *(_DWORD *)(*(_QWORD *)(v26 + 56) + v32 + 4) = unpack_dd(&v43, v9);
            v32 += 8;
          }
          while ( v33 != v32 );
        }
        if ( v41 == ++v38 )
        {
LABEL_40:
          v34 = 1;
          goto LABEL_41;
        }
      }
    }
  }
  v34 = 0;
LABEL_41:
  if ( v47 )
  {
    *(_QWORD *)&v48 = 0;
    qfree(v47, v6);
  }
  return v34;
}
