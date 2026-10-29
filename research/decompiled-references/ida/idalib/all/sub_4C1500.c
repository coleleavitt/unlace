unsigned __int64 __fastcall sub_4C1500(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbp
  unsigned __int64 v8; // rax
  __int64 v9; // r15
  int v10; // eax
  void *v11; // r13
  __m128i v12; // xmm0
  __int64 v13; // rax
  __m128i v14; // xmm2
  __int64 v15; // rax
  __int64 v16; // rbx
  void *v17; // rdi
  int v18; // eax
  __int64 v19; // rdi
  __m128i v20; // xmm0
  void *v21; // rdi
  __int64 v22; // r14
  __m128i v23; // xmm0
  __int64 v24; // rax
  void *v25; // rdi
  __int32 v26; // eax
  __m128i v27; // xmm0
  __int64 v28; // rax
  void *v29; // rdi
  __m128i v30; // xmm5
  __int64 v31; // rax
  void *v33; // rdi
  __m128i v34; // xmm6
  __int64 v35; // rax
  __m128i v36; // xmm7
  __m128i v37; // [rsp+0h] [rbp-D8h] BYREF
  __int64 v38; // [rsp+18h] [rbp-C0h]
  __int64 v39; // [rsp+20h] [rbp-B8h]
  __int32 v40; // [rsp+2Ch] [rbp-ACh]
  __m128i v41; // [rsp+30h] [rbp-A8h] BYREF
  __m128i v42; // [rsp+40h] [rbp-98h] BYREF
  __m128i v43; // [rsp+50h] [rbp-88h] BYREF
  __int32 v44; // [rsp+60h] [rbp-78h]
  __int64 v45; // [rsp+70h] [rbp-68h]
  __m128i v46; // [rsp+78h] [rbp-60h]
  __int64 v47; // [rsp+88h] [rbp-50h]
  int v48; // [rsp+90h] [rbp-48h]
  unsigned __int64 v49; // [rsp+98h] [rbp-40h]

  v38 = a2;
  v49 = __readfsqword(0x28u);
  if ( a1 != (__m128i *)a2 )
  {
    v6 = (__int64)&a1[5].m128i_i64[1];
    if ( (unsigned __int64 *)a2 != &a1[5].m128i_u64[1] )
    {
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(v6 + 72);
          v9 = v6;
          v6 += 88;
          if ( v8 < a1[4].m128i_i64[1] )
            break;
          sub_4C10A0(v9, a2, a3, a4, a5, a6);
LABEL_5:
          if ( v38 == v6 )
            return v49 - __readfsqword(0x28u);
        }
        v10 = *(_DWORD *)(v6 - 56);
        v11 = *(void **)(v6 - 48);
        v42 = _mm_loadu_si128((const __m128i *)(v6 - 88));
        v12 = _mm_loadu_si128((const __m128i *)(v6 - 72));
        v44 = v10;
        v43 = v12;
        if ( v11 )
          v11 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
        v13 = *(_QWORD *)(v6 - 40);
        v14 = _mm_loadu_si128((const __m128i *)(v6 - 32));
        a3 = 0x2E8BA2E8BA2E8BA3LL;
        *(_QWORD *)(v6 - 40) = 0;
        v39 = v13;
        v45 = v13;
        v15 = *(_QWORD *)(v6 - 16);
        v41 = v14;
        v47 = v15;
        LODWORD(v15) = *(_DWORD *)(v6 - 8);
        v46 = v14;
        v40 = v15;
        v48 = v15;
        *(_OWORD *)(v6 - 32) = 0;
        v16 = 0x2E8BA2E8BA2E8BA3LL * ((v9 - (__int64)a1) >> 3);
        if ( v9 - (__int64)a1 > 0 )
        {
          do
          {
            v17 = *(void **)(v9 + 40);
            v9 -= 88;
            if ( v17 )
            {
              qfree(v17);
              *(_QWORD *)(v9 + 128) = 0;
            }
            v18 = *(_DWORD *)(v9 + 32);
            v19 = *(_QWORD *)(v9 + 40);
            *(__m128i *)(v9 + 88) = _mm_loadu_si128((const __m128i *)v9);
            v20 = _mm_loadu_si128((const __m128i *)(v9 + 16));
            *(_DWORD *)(v9 + 120) = v18;
            *(__m128i *)(v9 + 104) = v20;
            if ( v19 )
              *(_QWORD *)(v9 + 128) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            v21 = *(void **)(v9 + 136);
            v22 = *(_QWORD *)(v9 + 48);
            *(_QWORD *)(v9 + 48) = 0;
            v23 = _mm_loadu_si128((const __m128i *)(v9 + 56));
            *(_OWORD *)(v9 + 56) = 0;
            if ( v21 )
            {
              *(_QWORD *)(v9 + 144) = 0;
              v37 = v23;
              qfree(v21);
              v23 = _mm_load_si128(&v37);
            }
            v24 = *(_QWORD *)(v9 + 72);
            *(_QWORD *)(v9 + 136) = v22;
            *(__m128i *)(v9 + 144) = v23;
            *(_QWORD *)(v9 + 160) = v24;
            *(_DWORD *)(v9 + 168) = *(_DWORD *)(v9 + 80);
            --v16;
          }
          while ( v16 );
        }
        v25 = (void *)a1[2].m128i_i64[1];
        if ( v25 )
        {
          qfree(v25);
          a1[2].m128i_i64[1] = 0;
        }
        v26 = v44;
        *a1 = _mm_load_si128(&v42);
        v27 = _mm_load_si128(&v43);
        a1[2].m128i_i32[0] = v26;
        a1[1] = v27;
        if ( !v11 )
        {
          v33 = (void *)a1[3].m128i_i64[0];
          v45 = 0;
          v46 = 0;
          if ( v33 )
          {
            a1[3].m128i_i64[1] = 0;
            qfree(v33);
            v34 = _mm_load_si128(&v41);
            a1[3].m128i_i64[0] = v39;
            v35 = v47;
            *(__m128i *)((char *)a1 + 56) = v34;
          }
          else
          {
            v36 = _mm_load_si128(&v41);
            a1[3].m128i_i64[0] = v39;
            v35 = v47;
            *(__m128i *)((char *)a1 + 56) = v36;
          }
          a1[4].m128i_i64[1] = v35;
          a1[5].m128i_i32[0] = v40;
          goto LABEL_5;
        }
        v28 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
        v29 = (void *)a1[3].m128i_i64[0];
        a1[2].m128i_i64[1] = v28;
        v45 = 0;
        v46 = 0;
        if ( v29 )
        {
          a1[3].m128i_i64[1] = 0;
          qfree(v29);
        }
        v30 = _mm_load_si128(&v41);
        a1[3].m128i_i64[0] = v39;
        v31 = v47;
        *(__m128i *)((char *)a1 + 56) = v30;
        a1[4].m128i_i64[1] = v31;
        a1[5].m128i_i32[0] = v40;
        qfree(v11);
      }
      while ( v38 != v6 );
    }
  }
  return v49 - __readfsqword(0x28u);
}
