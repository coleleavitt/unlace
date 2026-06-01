unsigned __int64 __fastcall sub_4C50E0(__int64 a1, __int64 a2)
{
  const char *v2; // rax
  bool v3; // zf
  int place_class_id; // eax
  __int64 place_class; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  void *v11; // rdi
  __int64 v12; // rax
  __m128i *v13; // r12
  __int64 v14; // rbx
  __m128i *v15; // rbp
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 m128i_i64; // rbx
  unsigned __int64 v20; // r12
  __int64 v21; // rax
  __m128i *v22; // r12
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rdx
  __m128i *v26; // r13
  __int64 v27; // r12
  __int64 v28; // r14
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 *v31; // rdi
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  int v35; // [rsp+10h] [rbp-C8h]
  __int32 v36; // [rsp+14h] [rbp-C4h]
  __m128i *v37; // [rsp+18h] [rbp-C0h]
  __int64 v38; // [rsp+20h] [rbp-B8h]
  __int64 v39; // [rsp+28h] [rbp-B0h]
  int v40; // [rsp+3Ch] [rbp-9Ch] BYREF
  void *ptr; // [rsp+40h] [rbp-98h] BYREF
  __m128i v42; // [rsp+48h] [rbp-90h] BYREF
  __m128i v43; // [rsp+60h] [rbp-78h] BYREF
  __int64 v44; // [rsp+70h] [rbp-68h]
  __int64 v45; // [rsp+78h] [rbp-60h]
  __int64 v46; // [rsp+80h] [rbp-58h]
  void *v47; // [rsp+88h] [rbp-50h]
  unsigned __int64 v48; // [rsp+98h] [rbp-40h]

  v2 = haystack;
  v3 = *(_QWORD *)(a1 + 160) == 0;
  v48 = __readfsqword(0x28u);
  if ( !v3 )
    v2 = *(const char **)(a1 + 152);
  place_class_id = get_place_class_id(v2);
  if ( place_class_id != -1 )
  {
    place_class = get_place_class(nullptr, nullptr, place_class_id);
    if ( place_class )
    {
      v44 = 0;
      v45 = -1;
      v46 = 0;
      v47 = nullptr;
      v43 = 0;
      v47 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)place_class + 16LL))(place_class);
      v6 = sub_55C400(qword_2CCB598);
      v35 = bookmarks_t_size((__int64)&v43, v6, 0.0);
      v10 = 0;
      if ( !v35 )
      {
LABEL_15:
        v13 = *(__m128i **)a2;
        v14 = 96LL * *(_QWORD *)(a2 + 8);
        v15 = (__m128i *)(*(_QWORD *)a2 + v14);
        if ( *(__m128i **)a2 == v15 )
          goto LABEL_20;
        v16 = 0xAAAAAAAAAAAAAAABLL * (v14 >> 5);
        if ( v16 )
        {
          _BitScanReverse64(&v17, v16);
          sub_4C4C70((__int64)v13, (unsigned __int64)v15, 2LL * (int)v17, v7, v8, v9);
          if ( v14 > 1536 )
          {
            m128i_i64 = (__int64)v13[96].m128i_i64;
            sub_4BFE50(v13, v13 + 96);
            do
            {
              sub_4BF940(m128i_i64);
              m128i_i64 += 96;
            }
            while ( v15 != (__m128i *)m128i_i64 );
LABEL_20:
            if ( v47 )
              qfree(v47);
            return v48 - __readfsqword(0x28u);
          }
        }
        else
        {
          sub_4C4C70((__int64)v13, (unsigned __int64)v15, -2, v7, v8, v9);
        }
        sub_4BFE50(v13, v15);
        goto LABEL_20;
      }
      while ( 1 )
      {
        v40 = v10;
        ptr = nullptr;
        v42 = 0;
        v12 = sub_55C400(qword_2CCB598);
        if ( !(unsigned __int8)bookmarks_t_get(&v43, &ptr, &v40, v12) )
          break;
        v7 = *((unsigned int *)v47 + 3);
        v36 = v7;
        if ( (_DWORD)v7 )
        {
          v20 = *(_QWORD *)(a2 + 16);
          v38 = *((_QWORD *)v47 + 2);
          v21 = *(_QWORD *)(a2 + 8);
          if ( v20 < v21 + 1 )
          {
            v24 = qvector_reserve(a2, 0, v21 + 1, 96);
            v25 = *(_QWORD *)(a2 + 16);
            v26 = *(__m128i **)a2;
            *(_QWORD *)(a2 + 16) = v20;
            v37 = (__m128i *)v24;
            v39 = v25;
            v27 = *(_QWORD *)(a2 + 8) - 1LL;
            if ( v27 >= 0 )
            {
              v28 = v24;
              do
              {
                *(_QWORD *)(v28 + 16) = 0;
                *(_DWORD *)(v28 + 24) = -1;
                *(_QWORD *)(v28 + 28) = 0xFFFFFFFFLL;
                *(_QWORD *)(v28 + 40) = 0;
                *(_OWORD *)v28 = 0;
                if ( v26 != (__m128i *)v28 )
                {
                  *(__m128i *)v28 = _mm_loadu_si128(v26);
                  *(__m128i *)(v28 + 16) = _mm_loadu_si128(v26 + 1);
                  *(_DWORD *)(v28 + 32) = v26[2].m128i_i32[0];
                  v29 = v26[2].m128i_i64[1];
                  if ( v29 )
                    *(_QWORD *)(v28 + 40) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
                }
                v30 = v26[3].m128i_i64[0];
                v31 = (__int64 *)v26;
                v28 += 96;
                v32 = _mm_loadu_si128((__m128i *)((char *)v26 + 56));
                v26[3].m128i_i64[0] = 0;
                v26 += 6;
                *(_QWORD *)(v28 - 48) = v30;
                *(__m128i *)(v28 - 40) = v32;
                LODWORD(v30) = v26[-1].m128i_i32[2];
                v33 = _mm_loadu_si128((__m128i *)((char *)v26 - 24));
                *(__m128i *)((char *)&v26[-3] + 8) = 0;
                *(_DWORD *)(v28 - 8) = v30;
                *(__m128i *)(v28 - 24) = v33;
                sub_4BED10(v31);
              }
              while ( v27-- != 0 );
              v26 = *(__m128i **)a2;
            }
            qfree(v26);
            *(_QWORD *)a2 = v37;
            *(_QWORD *)(a2 + 16) = v39;
            v21 = *(_QWORD *)(a2 + 8);
          }
          else
          {
            v37 = *(__m128i **)a2;
          }
          v22 = &v37[6 * v21];
          v22[1].m128i_i64[0] = 0;
          v22[1].m128i_i64[1] = -1;
          v22[2].m128i_i64[0] = 0;
          v22[4].m128i_i64[1] = -2;
          v22[5].m128i_i32[0] = 0;
          v22[5].m128i_i32[2] = -1;
          *v22 = 0;
          *(__m128i *)((char *)&v22[2] + 8) = 0;
          *(__m128i *)((char *)&v22[3] + 8) = 0;
          ++*(_QWORD *)(a2 + 8);
          sub_4B50E0(v22, &v43);
          v23 = _mm_loadu_si128(&v42);
          v11 = (void *)v22[3].m128i_i64[0];
          v42.m128i_i64[1] = v22[4].m128i_i64[0];
          v22[3].m128i_i64[0] = (__int64)ptr;
          v22[4].m128i_i64[1] = v38;
          ptr = v11;
          v22[5].m128i_i32[0] = v36;
          *(__m128i *)((char *)v22 + 56) = v23;
          goto LABEL_8;
        }
        if ( ptr )
        {
          v42.m128i_i64[0] = 0;
          ++v10;
          qfree(ptr);
          if ( v35 == v10 )
            goto LABEL_15;
        }
        else
        {
LABEL_10:
          if ( v35 == ++v10 )
            goto LABEL_15;
        }
      }
      v11 = ptr;
LABEL_8:
      if ( v11 )
      {
        v42.m128i_i64[0] = 0;
        qfree(v11);
      }
      goto LABEL_10;
    }
  }
  return v48 - __readfsqword(0x28u);
}
