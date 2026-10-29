unsigned __int64 __fastcall sub_4A9780(__m128i *a1, __m128i *a2)
{
  __int64 m128i_i64; // rbp
  __int32 v4; // r14d
  __int64 v5; // r15
  int v6; // eax
  void *v7; // rdi
  __m128i v8; // xmm0
  void *v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm2
  __m128i v12; // xmm0
  unsigned __int64 v13; // rbx
  void *v14; // rdi
  int v15; // eax
  __int64 v16; // rdi
  __m128i v17; // xmm0
  void *v18; // rdi
  __int64 v19; // r13
  __m128i v20; // xmm0
  __int64 v21; // rax
  void *v22; // rdi
  __int32 v23; // eax
  void *v24; // rdi
  __m128i v25; // xmm0
  __int64 v26; // rax
  void *v27; // rdi
  __int64 v28; // rax
  __m128i v29; // xmm5
  void *v30; // rdi
  __int64 v31; // rax
  void *v33; // rdi
  __int64 v34; // rax
  __m128i v35; // xmm7
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+18h] [rbp-D0h]
  __m128i *v39; // [rsp+20h] [rbp-C8h]
  __int64 v40; // [rsp+28h] [rbp-C0h]
  __m128i v41; // [rsp+30h] [rbp-B8h] BYREF
  __m128i v42; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v43; // [rsp+50h] [rbp-98h] BYREF
  __int32 v44; // [rsp+60h] [rbp-88h]
  __int64 v45; // [rsp+70h] [rbp-78h]
  __m128i v46; // [rsp+78h] [rbp-70h]
  __m128i v47; // [rsp+88h] [rbp-60h]
  __int32 v48; // [rsp+98h] [rbp-50h]
  unsigned __int64 v49; // [rsp+A8h] [rbp-40h]

  v39 = a2;
  v49 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    m128i_i64 = (__int64)a1[6].m128i_i64;
    if ( a2 != &a1[6] )
    {
      do
      {
        v4 = *(_DWORD *)(m128i_i64 + 88);
        v5 = m128i_i64;
        m128i_i64 += 96;
        if ( v4 >= a1[5].m128i_i32[2] )
        {
          sub_4A9140(v5);
        }
        else
        {
          v6 = *(_DWORD *)(m128i_i64 - 64);
          v7 = *(void **)(m128i_i64 - 56);
          v42 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 96));
          v8 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 80));
          v44 = v6;
          ptr = v7;
          v43 = v8;
          if ( v7 )
          {
            v9 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
            v4 = *(_DWORD *)(m128i_i64 - 8);
            ptr = v9;
          }
          v10 = *(_QWORD *)(m128i_i64 - 48);
          v11 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 40));
          v12 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 24));
          *(_QWORD *)(m128i_i64 - 48) = 0;
          v40 = v10;
          v45 = v10;
          v48 = v4;
          v41 = v11;
          v46 = v11;
          v13 = 0xAAAAAAAAAAAAAAABLL * ((v5 - (__int64)a1) >> 5);
          *(_OWORD *)(m128i_i64 - 40) = 0;
          v47 = v12;
          if ( v5 - (__int64)a1 > 0 )
          {
            do
            {
              v14 = *(void **)(v5 + 40);
              v5 -= 96;
              if ( v14 )
              {
                qfree(v14);
                *(_QWORD *)(v5 + 136) = 0;
              }
              v15 = *(_DWORD *)(v5 + 32);
              v16 = *(_QWORD *)(v5 + 40);
              *(__m128i *)(v5 + 96) = _mm_loadu_si128((const __m128i *)v5);
              v17 = _mm_loadu_si128((const __m128i *)(v5 + 16));
              *(_DWORD *)(v5 + 128) = v15;
              *(__m128i *)(v5 + 112) = v17;
              if ( v16 )
                *(_QWORD *)(v5 + 136) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              v18 = *(void **)(v5 + 144);
              v19 = *(_QWORD *)(v5 + 48);
              *(_QWORD *)(v5 + 48) = 0;
              v20 = _mm_loadu_si128((const __m128i *)(v5 + 56));
              *(_OWORD *)(v5 + 56) = 0;
              if ( v18 )
              {
                *(_QWORD *)(v5 + 152) = 0;
                v37 = v20;
                qfree(v18);
                v20 = _mm_load_si128(&v37);
              }
              v21 = *(_QWORD *)(v5 + 72);
              *(_QWORD *)(v5 + 144) = v19;
              *(__m128i *)(v5 + 152) = v20;
              *(_QWORD *)(v5 + 168) = v21;
              *(_DWORD *)(v5 + 176) = *(_DWORD *)(v5 + 80);
              *(_DWORD *)(v5 + 184) = *(_DWORD *)(v5 + 88);
              --v13;
            }
            while ( v13 );
          }
          v22 = (void *)a1[2].m128i_i64[1];
          if ( v22 )
          {
            qfree(v22);
            a1[2].m128i_i64[1] = 0;
          }
          v23 = v44;
          v24 = ptr;
          *a1 = _mm_load_si128(&v42);
          v25 = _mm_load_si128(&v43);
          a1[2].m128i_i32[0] = v23;
          a1[1] = v25;
          if ( v24 )
          {
            v26 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v24 + 16LL))(v24);
            v27 = (void *)a1[3].m128i_i64[0];
            a1[2].m128i_i64[1] = v26;
            v45 = 0;
            v46 = 0;
            if ( v27 )
            {
              a1[3].m128i_i64[1] = 0;
              qfree(v27);
            }
            v28 = v40;
            v29 = _mm_load_si128(&v41);
            a1[5].m128i_i32[2] = v4;
            v30 = ptr;
            a1[3].m128i_i64[0] = v28;
            v31 = v47.m128i_i64[0];
            *(__m128i *)((char *)a1 + 56) = v29;
            a1[4].m128i_i64[1] = v31;
            a1[5].m128i_i32[0] = v47.m128i_i32[2];
            qfree(v30);
          }
          else
          {
            v33 = (void *)a1[3].m128i_i64[0];
            v45 = 0;
            v46 = 0;
            if ( v33 )
            {
              a1[3].m128i_i64[1] = 0;
              qfree(v33);
            }
            v34 = v40;
            v35 = _mm_load_si128(&v41);
            a1[5].m128i_i32[2] = v4;
            a1[3].m128i_i64[0] = v34;
            v36 = v47.m128i_i64[0];
            *(__m128i *)((char *)a1 + 56) = v35;
            a1[4].m128i_i64[1] = v36;
            a1[5].m128i_i32[0] = v47.m128i_i32[2];
          }
        }
      }
      while ( v39 != (__m128i *)m128i_i64 );
    }
  }
  return v49 - __readfsqword(0x28u);
}

