unsigned __int64 __fastcall sub_4C1890(__m128i *a1, __m128i *a2)
{
  __int64 v2; // rbp
  __int32 v4; // r14d
  __int64 v5; // r15
  int v6; // eax
  void *v7; // rdi
  __m128i v8; // xmm0
  void *v9; // rax
  __int64 v10; // rax
  __m128i v11; // xmm2
  __int64 v12; // rax
  __int64 v13; // rbx
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
  __m128i v37; // [rsp+0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+18h] [rbp-C0h]
  __m128i *v39; // [rsp+20h] [rbp-B8h]
  __int64 v40; // [rsp+28h] [rbp-B0h]
  __m128i v41; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v42; // [rsp+40h] [rbp-98h] BYREF
  __m128i v43; // [rsp+50h] [rbp-88h] BYREF
  __int32 v44; // [rsp+60h] [rbp-78h]
  __int64 v45; // [rsp+70h] [rbp-68h]
  __m128i v46; // [rsp+78h] [rbp-60h]
  __int64 v47; // [rsp+88h] [rbp-50h]
  __int32 v48; // [rsp+90h] [rbp-48h]
  unsigned __int64 v49; // [rsp+98h] [rbp-40h]

  v39 = a2;
  v49 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v2 = (__int64)&a1[5].m128i_i64[1];
    if ( a2 != (__m128i *)&a1[5].m128i_u64[1] )
    {
      do
      {
        v4 = *(_DWORD *)(v2 + 80);
        v5 = v2;
        v2 += 88;
        if ( v4 >= a1[5].m128i_i32[0] )
        {
          sub_4C12A0(v5);
        }
        else
        {
          v6 = *(_DWORD *)(v2 - 56);
          v7 = *(void **)(v2 - 48);
          v42 = _mm_loadu_si128((const __m128i *)(v2 - 88));
          v8 = _mm_loadu_si128((const __m128i *)(v2 - 72));
          v44 = v6;
          ptr = v7;
          v43 = v8;
          if ( v7 )
          {
            v9 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
            v4 = *(_DWORD *)(v2 - 8);
            ptr = v9;
          }
          v10 = *(_QWORD *)(v2 - 40);
          v11 = _mm_loadu_si128((const __m128i *)(v2 - 32));
          *(_QWORD *)(v2 - 40) = 0;
          v40 = v10;
          v45 = v10;
          v12 = *(_QWORD *)(v2 - 16);
          v48 = v4;
          v47 = v12;
          v41 = v11;
          v46 = v11;
          *(_OWORD *)(v2 - 32) = 0;
          v13 = 0x2E8BA2E8BA2E8BA3LL * ((v5 - (__int64)a1) >> 3);
          if ( v5 - (__int64)a1 > 0 )
          {
            do
            {
              v14 = *(void **)(v5 + 40);
              v5 -= 88;
              if ( v14 )
              {
                qfree(v14);
                *(_QWORD *)(v5 + 128) = 0;
              }
              v15 = *(_DWORD *)(v5 + 32);
              v16 = *(_QWORD *)(v5 + 40);
              *(__m128i *)(v5 + 88) = _mm_loadu_si128((const __m128i *)v5);
              v17 = _mm_loadu_si128((const __m128i *)(v5 + 16));
              *(_DWORD *)(v5 + 120) = v15;
              *(__m128i *)(v5 + 104) = v17;
              if ( v16 )
                *(_QWORD *)(v5 + 128) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
              v18 = *(void **)(v5 + 136);
              v19 = *(_QWORD *)(v5 + 48);
              *(_QWORD *)(v5 + 48) = 0;
              v20 = _mm_loadu_si128((const __m128i *)(v5 + 56));
              *(_OWORD *)(v5 + 56) = 0;
              if ( v18 )
              {
                *(_QWORD *)(v5 + 144) = 0;
                v37 = v20;
                qfree(v18);
                v20 = _mm_load_si128(&v37);
              }
              v21 = *(_QWORD *)(v5 + 72);
              *(_QWORD *)(v5 + 136) = v19;
              *(__m128i *)(v5 + 144) = v20;
              *(_QWORD *)(v5 + 160) = v21;
              *(_DWORD *)(v5 + 168) = *(_DWORD *)(v5 + 80);
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
            a1[5].m128i_i32[0] = v4;
            v30 = ptr;
            a1[3].m128i_i64[0] = v28;
            v31 = v47;
            *(__m128i *)((char *)a1 + 56) = v29;
            a1[4].m128i_i64[1] = v31;
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
            a1[5].m128i_i32[0] = v4;
            a1[3].m128i_i64[0] = v34;
            v36 = v47;
            *(__m128i *)((char *)a1 + 56) = v35;
            a1[4].m128i_i64[1] = v36;
          }
        }
      }
      while ( v39 != (__m128i *)v2 );
    }
  }
  return v49 - __readfsqword(0x28u);
}
