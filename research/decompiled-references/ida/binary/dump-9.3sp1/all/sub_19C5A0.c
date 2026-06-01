__int64 __fastcall sub_19C5A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  _QWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  char *v11; // r11
  void *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 result; // rax
  void *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // r8
  __int64 v27; // rax
  __int64 v28; // rbx
  __m128i v29; // xmm1
  __int64 v30; // rbx
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // rbp
  __int64 v34; // r14
  int v35; // ecx
  int v36; // ecx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __m128i v39; // xmm0
  __int64 v40; // rcx
  __int64 v41; // rdi
  size_t v43; // rbx
  void *v44; // rax
  const void *v45; // rsi
  __m128i v46; // [rsp+0h] [rbp-C8h] BYREF
  void *v47; // [rsp+18h] [rbp-B0h]
  __m128i v48; // [rsp+20h] [rbp-A8h] BYREF
  int v49; // [rsp+34h] [rbp-94h]
  __int64 v50; // [rsp+38h] [rbp-90h]
  __int64 v51; // [rsp+40h] [rbp-88h]
  int v52; // [rsp+48h] [rbp-80h]
  int v53; // [rsp+4Ch] [rbp-7Ch]
  __int64 v54; // [rsp+50h] [rbp-78h]
  __int64 v55; // [rsp+58h] [rbp-70h] BYREF
  __int64 v56; // [rsp+60h] [rbp-68h]
  __int64 v57; // [rsp+68h] [rbp-60h]
  __int64 v58; // [rsp+70h] [rbp-58h]
  _QWORD *v59; // [rsp+78h] [rbp-50h]
  void *v60; // [rsp+80h] [rbp-48h]
  void *v61; // [rsp+88h] [rbp-40h]

  v4 = a2;
  v5 = a1;
  v48.m128i_i64[1] = *(_QWORD *)a2;
  v49 = *(_DWORD *)(a2 + 8);
  v50 = *(_QWORD *)(a2 + 32);
  v52 = *(_DWORD *)(a2 + 40);
  v51 = *(_QWORD *)(a2 + 56);
  v53 = *(_DWORD *)(a2 + 64);
  v54 = *(_QWORD *)(a2 + 72);
  v55 = *(_QWORD *)(a2 + 80);
  v56 = *(_QWORD *)(a2 + 88);
  v6 = *(_QWORD *)(a2 + 104);
  v47 = nullptr;
  v48.m128i_i64[0] = v6;
  if ( v6 )
  {
    v43 = 8 * v6;
    v44 = (void *)qalloc_or_throw(8 * v6, a2, a3, a4);
    v45 = *(const void **)(a2 + 96);
    v47 = v44;
    memcpy(v44, v45, v43);
  }
  v7 = a1[16];
  v8 = a1[17];
  v9 = *(_QWORD *)(v4 + 120);
  if ( v8 < v7 + 1 )
  {
    v46.m128i_i64[0] = *(_QWORD *)(v4 + 120);
    v23 = &unk_4DBD80;
    v24 = qvector_reserve((__int64)(a1 + 15), 0, v7 + 1, 128);
    v25 = a1[15];
    v26 = v46.m128i_i64[0];
    v27 = a1[17];
    a1[17] = v8;
    v28 = a1[16];
    v29 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4DBD90, (__m128i)(unsigned __int64)off_4DBD70);
    v57 = v27;
    v30 = v28 - 1;
    if ( v30 >= 0 )
    {
      v58 = v26;
      v61 = &unk_4DBD80;
      v59 = a1;
      v31 = v30;
      v32 = v24;
      v60 = (void *)v4;
      v33 = v25;
      v34 = v24;
      do
      {
        *(_QWORD *)v32 = *(_QWORD *)v33;
        v35 = *(_DWORD *)(v33 + 8);
        *(__m128i *)(v32 + 16) = v29;
        *(_DWORD *)(v32 + 8) = v35;
        *(_QWORD *)(v32 + 32) = *(_QWORD *)(v33 + 32);
        v36 = *(_DWORD *)(v33 + 40);
        *(_QWORD *)(v32 + 48) = off_4DBD70;
        *(_DWORD *)(v32 + 40) = v36;
        *(_QWORD *)(v32 + 56) = *(_QWORD *)(v33 + 56);
        *(_DWORD *)(v32 + 64) = *(_DWORD *)(v33 + 64);
        v37 = *(_QWORD *)(v33 + 88);
        *(__m128i *)(v32 + 72) = _mm_loadu_si128((const __m128i *)(v33 + 72));
        *(_QWORD *)(v32 + 88) = v37;
        v38 = *(_QWORD *)(v33 + 96);
        v39 = _mm_loadu_si128((const __m128i *)(v33 + 104));
        *(_QWORD *)(v33 + 96) = 0;
        *(_QWORD *)(v32 + 96) = v38;
        *(__m128i *)(v32 + 104) = v39;
        v40 = *(_QWORD *)(v33 + 120);
        *(_QWORD *)(v33 + 112) = 0;
        *(_QWORD *)(v32 + 120) = v40;
        v41 = *(_QWORD *)(v33 + 96);
        if ( v41 )
        {
          *(_QWORD *)(v33 + 104) = 0;
          v46 = v29;
          qfree(v41);
          v29 = _mm_load_si128(&v46);
        }
        v33 += 128;
        v32 += 128;
      }
      while ( v31-- != 0 );
      v5 = v59;
      v24 = v34;
      v26 = v58;
      v4 = (__int64)v60;
      v23 = v61;
      v25 = v59[15];
    }
    v60 = v23;
    v59 = &unk_4DBD60;
    v58 = v24;
    v46.m128i_i64[0] = v26;
    qfree(v25);
    v10 = v58;
    v12 = v60;
    v11 = (char *)v59;
    v5[17] = v57;
    v9 = v46.m128i_i64[0];
    v5[15] = v10;
    v7 = v5[16];
  }
  else
  {
    v10 = a1[15];
    v11 = (char *)&unk_4DBD60;
    v12 = &unk_4DBD80;
  }
  v13 = (v7 << 7) + v10;
  v14 = v48.m128i_i64[1];
  v15 = v50;
  *(_DWORD *)(v13 + 40) = v52;
  *(_QWORD *)v13 = v14;
  LODWORD(v14) = v49;
  *(_QWORD *)(v13 + 32) = v15;
  *(_DWORD *)(v13 + 8) = v14;
  *(_QWORD *)(v13 + 48) = v11 + 16;
  v16 = v51;
  *(_QWORD *)(v13 + 120) = v9;
  *(_QWORD *)(v13 + 56) = v16;
  LODWORD(v16) = v53;
  *(__m128i *)(v13 + 16) = _mm_unpacklo_epi64(
                             (__m128i)((unsigned __int64)v12 + 16),
                             (__m128i)(unsigned __int64)(v11 + 16));
  *(_DWORD *)(v13 + 64) = v16;
  v17 = v56;
  *(__m128 *)(v13 + 72) = _mm_loadh_ps((const double *)&v55);
  v18 = _mm_loadl_epi64(&v48);
  *(_QWORD *)(v13 + 88) = v17;
  *(_QWORD *)(v13 + 96) = v47;
  *(__m128i *)(v13 + 104) = _mm_unpacklo_epi64(v18, v18);
  ++v5[16];
  v19 = *(_QWORD *)(v4 + 80);
  if ( v19 != -1 )
  {
    v20 = v5[44];
    if ( v20 > v19 || v20 == -1 )
      v5[44] = v19;
  }
  if ( v5[38] == -1 )
    v5[38] = *(_QWORD *)(v4 + 32);
  if ( v5[41] == -1 )
    v5[41] = *(_QWORD *)(v4 + 56);
  v21 = *(_DWORD *)(v4 + 40);
  if ( v21 != -1 && v21 < *((_DWORD *)v5 + 78) )
    *((_DWORD *)v5 + 78) = v21;
  result = *(unsigned int *)(v4 + 64);
  if ( (_DWORD)result != -1 && (int)result < *((_DWORD *)v5 + 84) )
    *((_DWORD *)v5 + 84) = result;
  return result;
}
