unsigned __int64 __fastcall sub_4AAD10(__m128i *a1, __m128i *a2)
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
  unsigned __int64 v12; // rbx
  void *v13; // rdi
  int v14; // eax
  __int64 v15; // rdi
  __m128i v16; // xmm0
  void *v17; // rdi
  __int64 v18; // r13
  __m128i v19; // xmm0
  int v20; // eax
  void *v21; // rdi
  __int32 v22; // eax
  void *v23; // rdi
  __m128i v24; // xmm0
  __int64 v25; // rax
  void *v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm5
  void *v29; // rdi
  void *v31; // rdi
  __int64 v32; // rax
  __m128i v33; // xmm7
  __m128i v34; // [rsp+0h] [rbp-D8h] BYREF
  void *ptr; // [rsp+18h] [rbp-C0h]
  __m128i *v36; // [rsp+20h] [rbp-B8h]
  __int64 v37; // [rsp+28h] [rbp-B0h]
  __m128i v38; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v39; // [rsp+40h] [rbp-98h] BYREF
  __m128i v40; // [rsp+50h] [rbp-88h] BYREF
  __int32 v41; // [rsp+60h] [rbp-78h]
  __int64 v42; // [rsp+70h] [rbp-68h]
  __m128i v43; // [rsp+78h] [rbp-60h]
  int v44; // [rsp+88h] [rbp-50h]
  __int32 v45; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v46; // [rsp+98h] [rbp-40h]

  v36 = a2;
  v46 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    m128i_i64 = (__int64)a1[5].m128i_i64;
    if ( a2 != &a1[5] )
    {
      do
      {
        v4 = *(_DWORD *)(m128i_i64 + 76);
        v5 = m128i_i64;
        m128i_i64 += 80;
        if ( v4 >= a1[4].m128i_i32[3] )
        {
          sub_4AA730(v5);
        }
        else
        {
          v6 = *(_DWORD *)(m128i_i64 - 48);
          v7 = *(void **)(m128i_i64 - 40);
          v39 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 80));
          v8 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 64));
          v41 = v6;
          ptr = v7;
          v40 = v8;
          if ( v7 )
          {
            v9 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
            v4 = *(_DWORD *)(m128i_i64 - 4);
            ptr = v9;
          }
          v10 = *(_QWORD *)(m128i_i64 - 32);
          v11 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 24));
          *(_QWORD *)(m128i_i64 - 32) = 0;
          v37 = v10;
          v42 = v10;
          LODWORD(v10) = *(_DWORD *)(m128i_i64 - 8);
          v45 = v4;
          v44 = v10;
          v38 = v11;
          v43 = v11;
          *(_OWORD *)(m128i_i64 - 24) = 0;
          v12 = 0xCCCCCCCCCCCCCCCDLL * ((v5 - (__int64)a1) >> 4);
          if ( v5 - (__int64)a1 > 0 )
          {
            do
            {
              v13 = *(void **)(v5 + 40);
              v5 -= 80;
              if ( v13 )
              {
                qfree(v13);
                *(_QWORD *)(v5 + 120) = 0;
              }
              v14 = *(_DWORD *)(v5 + 32);
              v15 = *(_QWORD *)(v5 + 40);
              *(__m128i *)(v5 + 80) = _mm_loadu_si128((const __m128i *)v5);
              v16 = _mm_loadu_si128((const __m128i *)(v5 + 16));
              *(_DWORD *)(v5 + 112) = v14;
              *(__m128i *)(v5 + 96) = v16;
              if ( v15 )
                *(_QWORD *)(v5 + 120) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
              v17 = *(void **)(v5 + 128);
              v18 = *(_QWORD *)(v5 + 48);
              *(_QWORD *)(v5 + 48) = 0;
              v19 = _mm_loadu_si128((const __m128i *)(v5 + 56));
              *(_OWORD *)(v5 + 56) = 0;
              if ( v17 )
              {
                *(_QWORD *)(v5 + 136) = 0;
                v34 = v19;
                qfree(v17);
                v19 = _mm_load_si128(&v34);
              }
              v20 = *(_DWORD *)(v5 + 72);
              *(_QWORD *)(v5 + 128) = v18;
              *(__m128i *)(v5 + 136) = v19;
              *(_DWORD *)(v5 + 152) = v20;
              *(_DWORD *)(v5 + 156) = *(_DWORD *)(v5 + 76);
              --v12;
            }
            while ( v12 );
          }
          v21 = (void *)a1[2].m128i_i64[1];
          if ( v21 )
          {
            qfree(v21);
            a1[2].m128i_i64[1] = 0;
          }
          v22 = v41;
          v23 = ptr;
          *a1 = _mm_load_si128(&v39);
          v24 = _mm_load_si128(&v40);
          a1[2].m128i_i32[0] = v22;
          a1[1] = v24;
          if ( v23 )
          {
            v25 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v23 + 16LL))(v23);
            v26 = (void *)a1[3].m128i_i64[0];
            a1[2].m128i_i64[1] = v25;
            v42 = 0;
            v43 = 0;
            if ( v26 )
            {
              a1[3].m128i_i64[1] = 0;
              qfree(v26);
            }
            v27 = v37;
            v28 = _mm_load_si128(&v38);
            a1[4].m128i_i32[3] = v4;
            v29 = ptr;
            a1[3].m128i_i64[0] = v27;
            LODWORD(v27) = v44;
            *(__m128i *)((char *)a1 + 56) = v28;
            a1[4].m128i_i32[2] = v27;
            qfree(v29);
          }
          else
          {
            v31 = (void *)a1[3].m128i_i64[0];
            v42 = 0;
            v43 = 0;
            if ( v31 )
            {
              a1[3].m128i_i64[1] = 0;
              qfree(v31);
            }
            v32 = v37;
            v33 = _mm_load_si128(&v38);
            a1[4].m128i_i32[3] = v4;
            a1[3].m128i_i64[0] = v32;
            LODWORD(v32) = v44;
            *(__m128i *)((char *)a1 + 56) = v33;
            a1[4].m128i_i32[2] = v32;
          }
        }
      }
      while ( v36 != (__m128i *)m128i_i64 );
    }
  }
  return v46 - __readfsqword(0x28u);
}

