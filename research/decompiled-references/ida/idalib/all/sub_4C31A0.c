unsigned __int64 __fastcall sub_4C31A0(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  int place_class_id; // eax
  __int64 place_class; // rax
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __m128i *v9; // rcx
  int v10; // ebx
  void *v11; // rdi
  __int64 v12; // r13
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  __m128i *v15; // r12
  void *v16; // rdi
  __int64 v17; // rax
  void *v18; // rdx
  __m128i v19; // xmm0
  __m128i *v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rbp
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v30; // rax
  __int64 v31; // rcx
  __m128i *v32; // r15
  __int64 v33; // r12
  __int64 v34; // r14
  __int64 v35; // rdi
  __int64 v36; // rax
  __int64 *v37; // rdi
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 m128i_i64; // rbx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // [rsp+Ch] [rbp-CCh]
  __m128i *v47; // [rsp+20h] [rbp-B8h]
  __int64 v48; // [rsp+28h] [rbp-B0h]
  int v49; // [rsp+3Ch] [rbp-9Ch] BYREF
  void *ptr; // [rsp+40h] [rbp-98h] BYREF
  __m128i v51; // [rsp+48h] [rbp-90h] BYREF
  __m128i v52; // [rsp+60h] [rbp-78h] BYREF
  __m128i v53; // [rsp+70h] [rbp-68h] BYREF
  __int64 v54; // [rsp+80h] [rbp-58h]
  void *v55; // [rsp+88h] [rbp-50h]
  unsigned __int64 v56; // [rsp+98h] [rbp-40h]

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 160) == 0;
  v56 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)(a1 + 152);
  place_class_id = get_place_class_id(v2);
  if ( place_class_id != -1 )
  {
    place_class = get_place_class(nullptr, nullptr, place_class_id);
    if ( place_class )
    {
      v53.m128i_i64[0] = 0;
      v53.m128i_i64[1] = -1;
      v54 = 0;
      v55 = nullptr;
      v52 = 0;
      v55 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
      v6 = bookmarks_t_size((__int64)&v52, 0, 0.0);
      v9 = (__m128i *)&v49;
      v46 = v6;
      v10 = 0;
      if ( !v6 )
      {
LABEL_21:
        v20 = *(__m128i **)a2;
        v21 = 88LL * *(_QWORD *)(a2 + 8);
        v22 = *(_QWORD *)a2 + v21;
        if ( *(_QWORD *)a2 == v22 )
          goto LABEL_25;
        v23 = 0x2E8BA2E8BA2E8BA3LL * (v21 >> 3);
        if ( v23 )
        {
          _BitScanReverse64(&v24, v23);
          sub_4C2BE0((__int64)v20, v22, 2LL * (int)v24, (__int64)v9, v7, v8);
          if ( v21 > 1408 )
          {
            m128i_i64 = (__int64)v20[88].m128i_i64;
            sub_4C1500(v20, (__int64)v20[88].m128i_i64, v25, v26, v27, v28);
            do
            {
              sub_4C10A0(m128i_i64, (__int64)v20[88].m128i_i64, v42, v43, v44, v45);
              m128i_i64 += 88;
            }
            while ( v22 != m128i_i64 );
LABEL_25:
            if ( v55 )
              qfree(v55);
            return v56 - __readfsqword(0x28u);
          }
        }
        else
        {
          sub_4C2BE0((__int64)v20, v22, -2, (__int64)v9, v7, v8);
        }
        sub_4C1500(v20, v22, v25, v26, v27, v28);
        goto LABEL_25;
      }
      while ( 1 )
      {
        v49 = v10;
        ptr = nullptr;
        v51 = 0;
        if ( (unsigned __int8)bookmarks_t_get(&v52, &ptr, &v49, 0) )
        {
          v12 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v55 + 128LL))(v55);
          if ( v12 == -1 )
          {
            v11 = ptr;
            if ( !ptr )
              goto LABEL_10;
LABEL_9:
            v51.m128i_i64[0] = 0;
            qfree(v11);
            goto LABEL_10;
          }
          v13 = *(_QWORD *)(a2 + 8);
          v14 = *(_QWORD *)(a2 + 16);
          if ( v14 < v13 + 1 )
          {
            v30 = qvector_reserve(a2, 0, v13 + 1, 88);
            v31 = *(_QWORD *)(a2 + 16);
            v32 = *(__m128i **)a2;
            *(_QWORD *)(a2 + 16) = v14;
            v47 = (__m128i *)v30;
            v48 = v31;
            v33 = *(_QWORD *)(a2 + 8) - 1LL;
            if ( v33 >= 0 )
            {
              v34 = v30;
              do
              {
                *(_QWORD *)(v34 + 16) = 0;
                *(_DWORD *)(v34 + 24) = -1;
                *(_QWORD *)(v34 + 28) = 0xFFFFFFFFLL;
                *(_QWORD *)(v34 + 40) = 0;
                *(_OWORD *)v34 = 0;
                if ( v32 != (__m128i *)v34 )
                {
                  *(__m128i *)v34 = _mm_loadu_si128(v32);
                  *(__m128i *)(v34 + 16) = _mm_loadu_si128(v32 + 1);
                  *(_DWORD *)(v34 + 32) = v32[2].m128i_i32[0];
                  v35 = v32[2].m128i_i64[1];
                  if ( v35 )
                    *(_QWORD *)(v34 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                }
                v36 = v32[3].m128i_i64[0];
                v37 = (__int64 *)v32;
                v34 += 88;
                v38 = _mm_loadu_si128((__m128i *)((char *)v32 + 56));
                v32[3].m128i_i64[0] = 0;
                v32 = (__m128i *)((char *)v32 + 88);
                *(_QWORD *)(v34 - 40) = v36;
                *(__m128i *)(v34 - 32) = v38;
                v39 = v32[-1].m128i_i64[0];
                v32[-2] = 0;
                *(_QWORD *)(v34 - 16) = v39;
                *(_DWORD *)(v34 - 8) = v32[-1].m128i_i32[2];
                sub_4C0590(v37);
              }
              while ( v33-- != 0 );
              v32 = *(__m128i **)a2;
            }
            qfree(v32);
            *(_QWORD *)a2 = v47;
            *(_QWORD *)(a2 + 16) = v48;
            v13 = *(_QWORD *)(a2 + 8);
          }
          else
          {
            v47 = *(__m128i **)a2;
          }
          v9 = v47;
          v15 = (__m128i *)((char *)v47 + 88 * v13);
          v15[1].m128i_i64[0] = 0;
          v15[1].m128i_i64[1] = -1;
          v15[2].m128i_i64[0] = 0;
          v15[4].m128i_i64[1] = -1;
          v15[5].m128i_i32[0] = -1;
          *v15 = 0;
          *(__m128i *)((char *)&v15[2] + 8) = 0;
          *(__m128i *)((char *)&v15[3] + 8) = 0;
          ++*(_QWORD *)(a2 + 8);
          if ( v15 != &v52 )
          {
            v16 = (void *)v15[2].m128i_i64[1];
            if ( v16 )
            {
              qfree(v16);
              v15[2].m128i_i64[1] = 0;
            }
            *v15 = _mm_load_si128(&v52);
            v15[1] = _mm_load_si128(&v53);
            v15[2].m128i_i32[0] = v54;
            if ( v55 )
              v15[2].m128i_i64[1] = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v55 + 16LL))(v55);
          }
          v11 = (void *)v15[3].m128i_i64[0];
          v17 = v15[4].m128i_i64[0];
          v15[4].m128i_i64[1] = v12;
          v18 = ptr;
          v19 = _mm_loadu_si128(&v51);
          ptr = v11;
          v15[3].m128i_i64[0] = (__int64)v18;
          v51.m128i_i64[1] = v17;
          *(__m128i *)((char *)v15 + 56) = v19;
        }
        else
        {
          v11 = ptr;
        }
        if ( v11 )
          goto LABEL_9;
LABEL_10:
        if ( v46 == ++v10 )
          goto LABEL_21;
      }
    }
  }
  return v56 - __readfsqword(0x28u);
}
