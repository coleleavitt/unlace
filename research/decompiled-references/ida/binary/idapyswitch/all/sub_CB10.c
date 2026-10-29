void __fastcall sub_CB10(__int64 a1, __int64 a2, unsigned __int8 (__fastcall *a3)(__int64 *, __int64 *))
{
  __int64 v3; // r13
  __int64 v5; // rbp
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i v10; // xmm6
  __m128i v11; // xmm7
  __int64 v12; // r12
  __m128i v13; // xmm6
  int v14; // edi
  __int64 v15; // rax
  __int64 v16; // r9
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  int v19; // edx
  void *v20; // rdi
  __int64 v21; // r12
  __m128i v22; // xmm0
  int v23; // edx
  void *v24; // rdi
  __int64 v25; // r12
  __m128i v26; // xmm0
  __m128i v27; // xmm3
  bool v28; // zf
  __int64 v29; // r12
  __int64 v30; // r13
  char *v31; // rsi
  __int64 i; // rbp
  char *v33; // rax
  void *v34; // rdi
  __m128i v35; // xmm5
  char v36; // dl
  void *v37; // rdi
  __m128i v38; // xmm7
  void *v39; // rdi
  __m128i v40; // xmm7
  char *v41; // rcx
  __int64 v42; // r14
  __int64 v43; // rbx
  __int64 v44; // r13
  char *v45; // rdx
  void *v46; // rdi
  __m128i v47; // xmm7
  char v48; // al
  __m128i v49; // [rsp+0h] [rbp-B8h] BYREF
  __int64 v50; // [rsp+10h] [rbp-A8h]
  __int64 v51; // [rsp+18h] [rbp-A0h]
  __m128i v52; // [rsp+20h] [rbp-98h] BYREF
  __m128i v53; // [rsp+30h] [rbp-88h] BYREF
  __m128i v54; // [rsp+40h] [rbp-78h] BYREF
  __int64 v55; // [rsp+50h] [rbp-68h]
  __int64 v56; // [rsp+58h] [rbp-60h]
  char v57; // [rsp+63h] [rbp-55h]
  int v58; // [rsp+64h] [rbp-54h]
  __int64 v59; // [rsp+68h] [rbp-50h]
  __int64 v60; // [rsp+70h] [rbp-48h]
  __int64 v61; // [rsp+78h] [rbp-40h]

  if ( a1 != a2 && a2 != a1 + 96 )
  {
    v3 = a1 + 96;
    v5 = a1;
    v6 = a2;
    while ( 1 )
    {
      v7 = a3((__int64 *)v3, (__int64 *)v5);
      v8 = v3 + 96;
      if ( v7 )
      {
        v9 = *(_QWORD *)(v3 + 16);
        v10 = _mm_loadu_si128((const __m128i *)(v3 + 24));
        v11 = _mm_loadu_si128((const __m128i *)(v3 + 48));
        v12 = *(_QWORD *)(v3 + 64);
        *(_OWORD *)(v3 + 24) = 0;
        v53 = v10;
        v13 = _mm_loadu_si128((const __m128i *)(v3 + 72));
        v14 = *(_DWORD *)(v3 + 8);
        v50 = v9;
        v15 = *(_QWORD *)(v3 + 40);
        v16 = *(_QWORD *)v3;
        *(_OWORD *)(v3 + 48) = 0;
        v51 = v15;
        LOBYTE(v15) = *(_BYTE *)(v3 + 88);
        *(_QWORD *)(v3 + 16) = 0;
        *(_QWORD *)(v3 + 40) = 0;
        v17 = 0xAAAAAAAAAAAAAAABLL * ((v3 - v5) >> 5);
        *(_QWORD *)(v3 + 64) = 0;
        v57 = v15;
        v52 = v11;
        v54 = v13;
        *(_OWORD *)(v3 + 72) = 0;
        if ( v3 - v5 > 0 )
        {
          v55 = v16;
          v56 = v12;
          v58 = v14;
          v59 = v3 + 96;
          v60 = v5;
          v61 = v6;
          v18 = v3;
          do
          {
            v19 = *(_DWORD *)(v18 - 96);
            v20 = *(void **)(v18 + 16);
            v18 -= 96;
            v21 = *(_QWORD *)(v18 + 16);
            v22 = _mm_loadu_si128((const __m128i *)(v18 + 24));
            *(_OWORD *)(v18 + 24) = 0;
            *(_DWORD *)(v18 + 96) = v19;
            v23 = *(_DWORD *)(v18 + 4);
            *(_QWORD *)(v18 + 16) = 0;
            *(_DWORD *)(v18 + 100) = v23;
            *(_DWORD *)(v18 + 104) = *(_DWORD *)(v18 + 8);
            if ( v20 )
            {
              *(_QWORD *)(v18 + 120) = 0;
              v49 = v22;
              j__free(v20);
              v22 = _mm_load_si128(&v49);
            }
            v24 = *(void **)(v18 + 136);
            *(_QWORD *)(v18 + 112) = v21;
            *(__m128i *)(v18 + 120) = v22;
            v25 = *(_QWORD *)(v18 + 40);
            v26 = _mm_loadu_si128((const __m128i *)(v18 + 48));
            *(_QWORD *)(v18 + 40) = 0;
            *(_OWORD *)(v18 + 48) = 0;
            if ( v24 )
            {
              *(_QWORD *)(v18 + 144) = 0;
              v49 = v26;
              j__free(v24);
              v26 = _mm_load_si128(&v49);
            }
            v27 = _mm_loadu_si128((const __m128i *)(v18 + 72));
            v28 = *(_QWORD *)(v18 + 160) == 0;
            *(_QWORD *)(v18 + 136) = v25;
            *(__m128i *)(v18 + 144) = v26;
            v29 = *(_QWORD *)(v18 + 64);
            v49 = v27;
            *(_QWORD *)(v18 + 64) = 0;
            *(_OWORD *)(v18 + 72) = 0;
            if ( !v28 )
            {
              v30 = *(_QWORD *)(v18 + 168);
              if ( v30 )
              {
                v31 = *(char **)(v18 + 160);
                for ( i = 0; i != v30; ++i )
                {
                  v33 = &v31[24 * i];
                  v34 = *(void **)v33;
                  if ( *(_QWORD *)v33 )
                  {
                    *((_QWORD *)v33 + 1) = 0;
                    j__free(v34);
                    v31 = *(char **)(v18 + 160);
                  }
                }
              }
              else
              {
                v31 = *(char **)(v18 + 160);
              }
              *(_QWORD *)(v18 + 168) = 0;
              j__free(v31);
            }
            v35 = _mm_load_si128(&v49);
            v36 = *(_BYTE *)(v18 + 88);
            *(_QWORD *)(v18 + 160) = v29;
            *(_BYTE *)(v18 + 184) = v36;
            *(__m128i *)(v18 + 168) = v35;
            --v17;
          }
          while ( v17 );
          v16 = v55;
          v12 = v56;
          v14 = v58;
          v8 = v59;
          v5 = v60;
          v6 = v61;
        }
        *(_DWORD *)(v5 + 8) = v14;
        v37 = *(void **)(v5 + 16);
        *(_QWORD *)v5 = v16;
        if ( v37 )
        {
          *(_QWORD *)(v5 + 24) = 0;
          v49.m128i_i64[0] = v8;
          j__free(v37);
          v8 = v49.m128i_i64[0];
        }
        v38 = _mm_load_si128(&v53);
        v39 = *(void **)(v5 + 40);
        *(_QWORD *)(v5 + 16) = v50;
        *(__m128i *)(v5 + 24) = v38;
        if ( v39 )
        {
          *(_QWORD *)(v5 + 48) = 0;
          v49.m128i_i64[0] = v8;
          j__free(v39);
          v8 = v49.m128i_i64[0];
        }
        v40 = _mm_load_si128(&v52);
        v41 = *(char **)(v5 + 64);
        *(_QWORD *)(v5 + 40) = v51;
        *(__m128i *)(v5 + 48) = v40;
        if ( v41 )
        {
          v42 = *(_QWORD *)(v5 + 72);
          if ( v42 )
          {
            v49.m128i_i64[0] = v6;
            v43 = 0;
            v44 = v8;
            do
            {
              v45 = &v41[24 * v43];
              v46 = *(void **)v45;
              if ( *(_QWORD *)v45 )
              {
                *((_QWORD *)v45 + 1) = 0;
                j__free(v46);
                v41 = *(char **)(v5 + 64);
              }
              ++v43;
            }
            while ( v42 != v43 );
            v6 = v49.m128i_i64[0];
            v8 = v44;
          }
          *(_QWORD *)(v5 + 72) = 0;
          v49.m128i_i64[0] = v8;
          j__free(v41);
          v8 = v49.m128i_i64[0];
        }
        v47 = _mm_load_si128(&v54);
        v48 = v57;
        *(_QWORD *)(v5 + 64) = v12;
        *(_BYTE *)(v5 + 88) = v48;
        *(__m128i *)(v5 + 72) = v47;
      }
      else
      {
        v49.m128i_i64[0] = v3 + 96;
        sub_C6E0((__int64 *)v3, a3);
        v8 = v49.m128i_i64[0];
      }
      if ( v6 == v8 )
        break;
      v3 = v8;
    }
  }
}

