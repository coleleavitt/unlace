__int64 __fastcall sub_197FA0(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // r13
  _QWORD *v3; // r12
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  char *v9; // r11
  __int64 *v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 result; // rax
  __int64 *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // rbx
  __m128i v27; // xmm1
  __int64 v28; // rbx
  __int64 v29; // r12
  __int64 v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // r14
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __m128i v37; // xmm0
  __int64 v38; // rcx
  __int64 v39; // rdi
  size_t v41; // rbx
  void *v42; // rax
  const void *v43; // rsi
  __m128i v44; // [rsp+0h] [rbp-C8h] BYREF
  void *v45; // [rsp+18h] [rbp-B0h]
  __m128i v46; // [rsp+20h] [rbp-A8h] BYREF
  int v47; // [rsp+34h] [rbp-94h]
  __int64 v48; // [rsp+38h] [rbp-90h]
  __int64 v49; // [rsp+40h] [rbp-88h]
  int v50; // [rsp+48h] [rbp-80h]
  int v51; // [rsp+4Ch] [rbp-7Ch]
  __int64 v52; // [rsp+50h] [rbp-78h]
  __int64 v53; // [rsp+58h] [rbp-70h] BYREF
  __int64 v54; // [rsp+60h] [rbp-68h]
  __int64 v55; // [rsp+68h] [rbp-60h]
  __int64 v56; // [rsp+70h] [rbp-58h]
  _QWORD *v57; // [rsp+78h] [rbp-50h]
  __int64 *v58; // [rsp+80h] [rbp-48h]
  __int64 *v59; // [rsp+88h] [rbp-40h]

  v2 = a2;
  v3 = a1;
  v46.m128i_i64[1] = *a2;
  v47 = *((_DWORD *)a2 + 2);
  v48 = a2[4];
  v50 = *((_DWORD *)a2 + 10);
  v49 = a2[7];
  v51 = *((_DWORD *)a2 + 16);
  v52 = a2[9];
  v53 = a2[10];
  v54 = a2[11];
  v4 = a2[13];
  v45 = nullptr;
  v46.m128i_i64[0] = v4;
  if ( v4 )
  {
    v41 = 8 * v4;
    v42 = (void *)qalloc_or_throw(8 * v4);
    v43 = (const void *)a2[12];
    v45 = v42;
    memcpy(v42, v43, v41);
  }
  v5 = a1[16];
  v6 = a1[17];
  v7 = v2[15];
  if ( v6 < v5 + 1 )
  {
    v44.m128i_i64[0] = v2[15];
    v21 = (__int64 *)&unk_4AE800;
    v22 = qvector_reserve(a1 + 15, 0, v5 + 1, 128);
    v23 = a1[15];
    v24 = v44.m128i_i64[0];
    v25 = a1[17];
    a1[17] = v6;
    v26 = a1[16];
    v27 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4AE810, (__m128i)(unsigned __int64)off_4AE7F0);
    v55 = v25;
    v28 = v26 - 1;
    if ( v28 >= 0 )
    {
      v56 = v24;
      v59 = (__int64 *)&unk_4AE800;
      v57 = a1;
      v29 = v28;
      v30 = v22;
      v58 = v2;
      v31 = v23;
      v32 = v22;
      do
      {
        *(_QWORD *)v30 = *(_QWORD *)v31;
        v33 = *(_DWORD *)(v31 + 8);
        *(__m128i *)(v30 + 16) = v27;
        *(_DWORD *)(v30 + 8) = v33;
        *(_QWORD *)(v30 + 32) = *(_QWORD *)(v31 + 32);
        v34 = *(_DWORD *)(v31 + 40);
        *(_QWORD *)(v30 + 48) = off_4AE7F0;
        *(_DWORD *)(v30 + 40) = v34;
        *(_QWORD *)(v30 + 56) = *(_QWORD *)(v31 + 56);
        *(_DWORD *)(v30 + 64) = *(_DWORD *)(v31 + 64);
        v35 = *(_QWORD *)(v31 + 88);
        *(__m128i *)(v30 + 72) = _mm_loadu_si128((const __m128i *)(v31 + 72));
        *(_QWORD *)(v30 + 88) = v35;
        v36 = *(_QWORD *)(v31 + 96);
        v37 = _mm_loadu_si128((const __m128i *)(v31 + 104));
        *(_QWORD *)(v31 + 96) = 0;
        *(_QWORD *)(v30 + 96) = v36;
        *(__m128i *)(v30 + 104) = v37;
        v38 = *(_QWORD *)(v31 + 120);
        *(_QWORD *)(v31 + 112) = 0;
        *(_QWORD *)(v30 + 120) = v38;
        v39 = *(_QWORD *)(v31 + 96);
        if ( v39 )
        {
          *(_QWORD *)(v31 + 104) = 0;
          v44 = v27;
          qfree(v39);
          v27 = _mm_load_si128(&v44);
        }
        v31 += 128;
        v30 += 128;
      }
      while ( v29-- != 0 );
      v3 = v57;
      v22 = v32;
      v24 = v56;
      v2 = v58;
      v21 = v59;
      v23 = v57[15];
    }
    v58 = v21;
    v57 = &unk_4AE7E0;
    v56 = v22;
    v44.m128i_i64[0] = v24;
    qfree(v23);
    v8 = v56;
    v10 = v58;
    v9 = (char *)v57;
    v3[17] = v55;
    v7 = v44.m128i_i64[0];
    v3[15] = v8;
    v5 = v3[16];
  }
  else
  {
    v8 = a1[15];
    v9 = (char *)&unk_4AE7E0;
    v10 = (__int64 *)&unk_4AE800;
  }
  v11 = (v5 << 7) + v8;
  v12 = v46.m128i_i64[1];
  v13 = v48;
  *(_DWORD *)(v11 + 40) = v50;
  *(_QWORD *)v11 = v12;
  LODWORD(v12) = v47;
  *(_QWORD *)(v11 + 32) = v13;
  *(_DWORD *)(v11 + 8) = v12;
  *(_QWORD *)(v11 + 48) = v9 + 16;
  v14 = v49;
  *(_QWORD *)(v11 + 120) = v7;
  *(_QWORD *)(v11 + 56) = v14;
  LODWORD(v14) = v51;
  *(__m128i *)(v11 + 16) = _mm_unpacklo_epi64(
                             (__m128i)(unsigned __int64)(v10 + 2),
                             (__m128i)(unsigned __int64)(v9 + 16));
  *(_DWORD *)(v11 + 64) = v14;
  v15 = v54;
  *(__m128 *)(v11 + 72) = _mm_loadh_ps((const double *)&v53);
  v16 = _mm_loadl_epi64(&v46);
  *(_QWORD *)(v11 + 88) = v15;
  *(_QWORD *)(v11 + 96) = v45;
  *(__m128i *)(v11 + 104) = _mm_unpacklo_epi64(v16, v16);
  ++v3[16];
  v17 = v2[10];
  if ( v17 != -1 )
  {
    v18 = v3[44];
    if ( v18 > v17 || v18 == -1 )
      v3[44] = v17;
  }
  if ( v3[38] == -1 )
    v3[38] = v2[4];
  if ( v3[41] == -1 )
    v3[41] = v2[7];
  v19 = *((_DWORD *)v2 + 10);
  if ( v19 != -1 && v19 < *((_DWORD *)v3 + 78) )
    *((_DWORD *)v3 + 78) = v19;
  result = *((unsigned int *)v2 + 16);
  if ( (_DWORD)result != -1 && (int)result < *((_DWORD *)v3 + 84) )
    *((_DWORD *)v3 + 84) = result;
  return result;
}
