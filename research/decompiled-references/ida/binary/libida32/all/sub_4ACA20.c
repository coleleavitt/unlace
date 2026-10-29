unsigned __int64 __fastcall sub_4ACA20(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  unsigned int place_class_id; // eax
  __int64 place_class; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  void **p_ptr; // rcx
  void *v10; // rdi
  __int32 v11; // r13d
  __int64 v12; // rax
  unsigned __int64 v13; // r12
  __m128i *v14; // r12
  __int64 v15; // rax
  void *v16; // rdx
  __m128i v17; // xmm0
  __m128i *v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rbp
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v28; // rax
  __int64 v29; // rcx
  __m128i *v30; // r15
  __int64 v31; // r12
  __int64 v32; // r14
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 *v35; // rdi
  __m128i v36; // xmm0
  __int64 m128i_i64; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // [rsp+Ch] [rbp-CCh]
  __m128i *v44; // [rsp+20h] [rbp-B8h]
  __int64 v45; // [rsp+28h] [rbp-B0h]
  int v46; // [rsp+3Ch] [rbp-9Ch] BYREF
  void *ptr; // [rsp+40h] [rbp-98h] BYREF
  __m128i v48; // [rsp+48h] [rbp-90h] BYREF
  __m128i v49; // [rsp+60h] [rbp-78h] BYREF
  __int64 v50; // [rsp+70h] [rbp-68h]
  __int64 v51; // [rsp+78h] [rbp-60h]
  __int64 v52; // [rsp+80h] [rbp-58h]
  void *v53; // [rsp+88h] [rbp-50h]
  unsigned __int64 v54; // [rsp+98h] [rbp-40h]

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 160) == 0;
  v54 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)(a1 + 152);
  place_class_id = get_place_class_id(v2);
  if ( place_class_id != -1 )
  {
    place_class = get_place_class(0, 0, place_class_id);
    if ( place_class )
    {
      v50 = 0;
      v51 = -1;
      v52 = 0;
      v53 = nullptr;
      v49 = 0;
      v53 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
      v43 = bookmarks_t_size(&v49, 0);
      v8 = 0;
      p_ptr = &ptr;
      if ( !v43 )
      {
LABEL_16:
        v18 = *(__m128i **)a2;
        v19 = 80LL * *(_QWORD *)(a2 + 8);
        v20 = *(_QWORD *)a2 + v19;
        if ( *(_QWORD *)a2 == v20 )
          goto LABEL_20;
        v21 = 0xCCCCCCCCCCCCCCCDLL * (v19 >> 4);
        if ( v21 )
        {
          _BitScanReverse64(&v22, v21);
          sub_4AC4C0((__int64)v18, v20, 2LL * (int)v22, (__int64)p_ptr, v6, v7);
          if ( v19 > 1280 )
          {
            m128i_i64 = (__int64)v18[80].m128i_i64;
            sub_4AA980(v18, (__int64)v18[80].m128i_i64, v23, v24, v25, v26);
            do
            {
              sub_4AA590(m128i_i64, (__int64)v18[80].m128i_i64, v39, v40, v41, v42);
              m128i_i64 += 80;
            }
            while ( v20 != m128i_i64 );
LABEL_20:
            if ( v53 )
              qfree(v53);
            return v54 - __readfsqword(0x28u);
          }
        }
        else
        {
          sub_4AC4C0((__int64)v18, v20, -2, (__int64)p_ptr, v6, v7);
        }
        sub_4AA980(v18, v20, v23, v24, v25, v26);
        goto LABEL_20;
      }
      while ( 1 )
      {
        v46 = v8;
        ptr = nullptr;
        v48 = 0;
        if ( (unsigned __int8)bookmarks_t_get(&v49, &ptr, &v46, 0) )
        {
          v11 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v53 + 128LL))(v53);
          if ( v11 == -1 )
          {
            v10 = ptr;
            if ( !ptr )
              goto LABEL_10;
LABEL_9:
            v48.m128i_i64[0] = 0;
            qfree(v10);
            goto LABEL_10;
          }
          v12 = *(_QWORD *)(a2 + 8);
          v13 = *(_QWORD *)(a2 + 16);
          if ( v13 < v12 + 1 )
          {
            v28 = qvector_reserve(a2, 0, v12 + 1, 80);
            v29 = *(_QWORD *)(a2 + 16);
            v30 = *(__m128i **)a2;
            *(_QWORD *)(a2 + 16) = v13;
            v44 = (__m128i *)v28;
            v45 = v29;
            v31 = *(_QWORD *)(a2 + 8) - 1LL;
            if ( v31 >= 0 )
            {
              v32 = v28;
              do
              {
                *(_QWORD *)(v32 + 16) = 0;
                *(_DWORD *)(v32 + 24) = -1;
                *(_QWORD *)(v32 + 28) = 0xFFFFFFFFLL;
                *(_QWORD *)(v32 + 40) = 0;
                *(_OWORD *)v32 = 0;
                if ( v30 != (__m128i *)v32 )
                {
                  *(__m128i *)v32 = _mm_loadu_si128(v30);
                  *(__m128i *)(v32 + 16) = _mm_loadu_si128(v30 + 1);
                  *(_DWORD *)(v32 + 32) = v30[2].m128i_i32[0];
                  v33 = v30[2].m128i_i64[1];
                  if ( v33 )
                    *(_QWORD *)(v32 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
                }
                v34 = v30[3].m128i_i64[0];
                v35 = (__int64 *)v30;
                v32 += 80;
                v36 = _mm_loadu_si128((__m128i *)((char *)v30 + 56));
                v30[3].m128i_i64[0] = 0;
                v30 += 5;
                *(_QWORD *)(v32 - 32) = v34;
                *(__m128i *)(v32 - 24) = v36;
                LODWORD(v34) = v30[-1].m128i_i32[2];
                *(__m128i *)((char *)&v30[-2] + 8) = 0;
                *(_DWORD *)(v32 - 8) = v34;
                *(_DWORD *)(v32 - 4) = v30[-1].m128i_i32[3];
                sub_4A9B00(v35);
              }
              while ( v31-- != 0 );
              v30 = *(__m128i **)a2;
            }
            qfree(v30);
            *(_QWORD *)a2 = v44;
            *(_QWORD *)(a2 + 16) = v45;
            v12 = *(_QWORD *)(a2 + 8);
          }
          else
          {
            v44 = *(__m128i **)a2;
          }
          v14 = &v44[5 * v12];
          v14[1].m128i_i64[0] = 0;
          v14[1].m128i_i64[1] = -1;
          v14[2].m128i_i64[0] = 0;
          v14[4].m128i_i64[1] = -1;
          *v14 = 0;
          *(__m128i *)((char *)&v14[2] + 8) = 0;
          *(__m128i *)((char *)&v14[3] + 8) = 0;
          ++*(_QWORD *)(a2 + 8);
          sub_49FBF0(v14, &v49);
          v10 = (void *)v14[3].m128i_i64[0];
          v15 = v14[4].m128i_i64[0];
          v14[4].m128i_i32[2] = v11;
          v16 = ptr;
          v17 = _mm_loadu_si128(&v48);
          ptr = v10;
          v14[3].m128i_i64[0] = (__int64)v16;
          v48.m128i_i64[1] = v15;
          *(__m128i *)((char *)v14 + 56) = v17;
        }
        else
        {
          v10 = ptr;
        }
        if ( v10 )
          goto LABEL_9;
LABEL_10:
        if ( v43 == ++v8 )
          goto LABEL_16;
      }
    }
  }
  return v54 - __readfsqword(0x28u);
}

