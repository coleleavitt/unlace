unsigned __int64 __fastcall sub_4AA980(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 m128i_i64; // rbp
  unsigned __int32 v8; // eax
  __int64 v9; // r15
  int v10; // eax
  void *v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm2
  unsigned __int64 v15; // rbx
  void *v16; // rdi
  int v17; // eax
  __int64 v18; // rdi
  __m128i v19; // xmm0
  void *v20; // rdi
  __int64 v21; // r14
  __m128i v22; // xmm0
  int v23; // eax
  void *v24; // rdi
  __int32 v25; // eax
  __m128i v26; // xmm0
  __int64 v27; // rax
  void *v28; // rdi
  __m128i v29; // xmm5
  __int32 v30; // eax
  void *v32; // rdi
  __m128i v33; // xmm6
  __int32 v34; // eax
  __m128i v35; // xmm7
  __m128i v36; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v37; // [rsp+18h] [rbp-C0h]
  __int64 v38; // [rsp+20h] [rbp-B8h]
  __int32 v39; // [rsp+2Ch] [rbp-ACh]
  __m128i v40; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v41; // [rsp+40h] [rbp-98h] BYREF
  __m128i v42; // [rsp+50h] [rbp-88h] BYREF
  __int32 v43; // [rsp+60h] [rbp-78h]
  __int64 v44; // [rsp+70h] [rbp-68h]
  __m128i v45; // [rsp+78h] [rbp-60h]
  __int32 v46; // [rsp+88h] [rbp-50h]
  int v47; // [rsp+8Ch] [rbp-4Ch]
  unsigned __int64 v48; // [rsp+98h] [rbp-40h]

  v37 = a2;
  v48 = __readfsqword(0x28u);
  if ( a1 != (__m128i *)a2 )
  {
    m128i_i64 = (__int64)a1[5].m128i_i64;
    if ( (__m128i *)a2 != &a1[5] )
    {
      do
      {
        while ( 1 )
        {
          v8 = *(_DWORD *)(m128i_i64 + 72);
          v9 = m128i_i64;
          m128i_i64 += 80;
          if ( v8 < a1[4].m128i_i32[2] )
            break;
          sub_4AA590(v9, a2, a3, a4, a5, a6);
LABEL_5:
          if ( v37 == m128i_i64 )
            return v48 - __readfsqword(0x28u);
        }
        v10 = *(_DWORD *)(m128i_i64 - 48);
        v11 = *(void **)(m128i_i64 - 40);
        v41 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 80));
        v12 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 64));
        v43 = v10;
        v42 = v12;
        if ( v11 )
          v11 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
        v13 = *(_QWORD *)(m128i_i64 - 32);
        v14 = _mm_loadu_si128((const __m128i *)(m128i_i64 - 24));
        a3 = 0xCCCCCCCCCCCCCCCDLL;
        *(_QWORD *)(m128i_i64 - 32) = 0;
        v38 = v13;
        v44 = v13;
        LODWORD(v13) = *(_DWORD *)(m128i_i64 - 8);
        v40 = v14;
        v46 = v13;
        LODWORD(v13) = *(_DWORD *)(m128i_i64 - 4);
        v45 = v14;
        v39 = v13;
        v47 = v13;
        *(_OWORD *)(m128i_i64 - 24) = 0;
        v15 = 0xCCCCCCCCCCCCCCCDLL * ((v9 - (__int64)a1) >> 4);
        if ( v9 - (__int64)a1 > 0 )
        {
          do
          {
            v16 = *(void **)(v9 + 40);
            v9 -= 80;
            if ( v16 )
            {
              qfree(v16);
              *(_QWORD *)(v9 + 120) = 0;
            }
            v17 = *(_DWORD *)(v9 + 32);
            v18 = *(_QWORD *)(v9 + 40);
            *(__m128i *)(v9 + 80) = _mm_loadu_si128((const __m128i *)v9);
            v19 = _mm_loadu_si128((const __m128i *)(v9 + 16));
            *(_DWORD *)(v9 + 112) = v17;
            *(__m128i *)(v9 + 96) = v19;
            if ( v18 )
              *(_QWORD *)(v9 + 120) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            v20 = *(void **)(v9 + 128);
            v21 = *(_QWORD *)(v9 + 48);
            *(_QWORD *)(v9 + 48) = 0;
            v22 = _mm_loadu_si128((const __m128i *)(v9 + 56));
            *(_OWORD *)(v9 + 56) = 0;
            if ( v20 )
            {
              *(_QWORD *)(v9 + 136) = 0;
              v36 = v22;
              qfree(v20);
              v22 = _mm_load_si128(&v36);
            }
            v23 = *(_DWORD *)(v9 + 72);
            *(_QWORD *)(v9 + 128) = v21;
            *(__m128i *)(v9 + 136) = v22;
            *(_DWORD *)(v9 + 152) = v23;
            *(_DWORD *)(v9 + 156) = *(_DWORD *)(v9 + 76);
            --v15;
          }
          while ( v15 );
        }
        v24 = (void *)a1[2].m128i_i64[1];
        if ( v24 )
        {
          qfree(v24);
          a1[2].m128i_i64[1] = 0;
        }
        v25 = v43;
        *a1 = _mm_load_si128(&v41);
        v26 = _mm_load_si128(&v42);
        a1[2].m128i_i32[0] = v25;
        a1[1] = v26;
        if ( !v11 )
        {
          v32 = (void *)a1[3].m128i_i64[0];
          v44 = 0;
          v45 = 0;
          if ( v32 )
          {
            a1[3].m128i_i64[1] = 0;
            qfree(v32);
            v33 = _mm_load_si128(&v40);
            a1[3].m128i_i64[0] = v38;
            v34 = v46;
            *(__m128i *)((char *)a1 + 56) = v33;
          }
          else
          {
            v35 = _mm_load_si128(&v40);
            a1[3].m128i_i64[0] = v38;
            v34 = v46;
            *(__m128i *)((char *)a1 + 56) = v35;
          }
          a1[4].m128i_i32[2] = v34;
          a1[4].m128i_i32[3] = v39;
          goto LABEL_5;
        }
        v27 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
        v28 = (void *)a1[3].m128i_i64[0];
        a1[2].m128i_i64[1] = v27;
        v44 = 0;
        v45 = 0;
        if ( v28 )
        {
          a1[3].m128i_i64[1] = 0;
          qfree(v28);
        }
        v29 = _mm_load_si128(&v40);
        a1[3].m128i_i64[0] = v38;
        v30 = v46;
        *(__m128i *)((char *)a1 + 56) = v29;
        a1[4].m128i_i32[2] = v30;
        a1[4].m128i_i32[3] = v39;
        qfree(v11);
      }
      while ( v37 != m128i_i64 );
    }
  }
  return v48 - __readfsqword(0x28u);
}

