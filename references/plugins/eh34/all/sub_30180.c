__int64 __fastcall sub_30180(__int64 a1, __int64 a2)
{
  __m128i v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __m128i v13; // xmm0
  int v14; // eax
  __m128i v15; // xmm0
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  char v19; // cl
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // di
  void *v25; // rax
  const void *v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r12
  __int64 v31; // r15
  __int64 v32; // r13
  int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // r10
  __int64 v39; // rbx
  __m128i v40; // xmm0
  int v41; // eax
  __int64 v42; // r11
  void *v43; // rax
  __int64 v44; // r10
  void *v45; // rax
  const void *v46; // rsi
  __int64 v47; // [rsp+0h] [rbp-68h]
  __int64 v48; // [rsp+0h] [rbp-68h]
  __int64 v49; // [rsp+0h] [rbp-68h]
  __int64 v50; // [rsp+8h] [rbp-60h]
  __int64 v51; // [rsp+8h] [rbp-60h]
  __int64 n; // [rsp+10h] [rbp-58h]
  __int64 v53; // [rsp+18h] [rbp-50h]
  __int64 v54; // [rsp+20h] [rbp-48h]
  __int64 v55; // [rsp+28h] [rbp-40h]

  v4 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a1 = *(_QWORD *)a2;
  v5 = *(_QWORD *)(a2 + 24);
  *(__m128i *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 24) = v5;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  LOWORD(v5) = *(_WORD *)(a2 + 36);
  *(_QWORD *)(a1 + 40) = 0;
  *(_WORD *)(a1 + 36) = v5;
  *(_OWORD *)(a1 + 48) = 0;
  v6 = *(_QWORD *)(a2 + 48);
  if ( v6 )
  {
    v17 = qalloc_or_throw(12 * v6);
    v18 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 56) = v6;
    *(_QWORD *)(a1 + 40) = v17;
    *(_WORD *)v17 = *(_WORD *)v18;
    *(_BYTE *)(v17 + 2) = *(_BYTE *)(v18 + 2);
    *(_DWORD *)(v17 + 4) = *(_DWORD *)(v18 + 4);
    v19 = *(_BYTE *)(v18 + 4);
    LODWORD(v18) = *(_DWORD *)(v18 + 8);
    *(_BYTE *)(v17 + 4) = v19;
    *(_DWORD *)(v17 + 8) = v18;
    if ( v6 != 1 )
    {
      v20 = 12;
      v21 = 1;
      do
      {
        ++v21;
        v22 = v20 + *(_QWORD *)(a2 + 40);
        v23 = v20 + *(_QWORD *)(a1 + 40);
        v20 += 12;
        *(_WORD *)v23 = *(_WORD *)v22;
        *(_BYTE *)(v23 + 2) = *(_BYTE *)(v22 + 2);
        *(_DWORD *)(v23 + 4) = *(_DWORD *)(v22 + 4);
        v24 = *(_BYTE *)(v22 + 4);
        LODWORD(v22) = *(_DWORD *)(v22 + 8);
        *(_BYTE *)(v23 + 4) = v24;
        *(_DWORD *)(v23 + 8) = v22;
      }
      while ( v6 != v21 );
    }
    *(_QWORD *)(a1 + 48) = v6;
  }
  v7 = *(_QWORD *)(a2 + 128);
  *(__m128i *)(a1 + 64) = _mm_loadu_si128((const __m128i *)(a2 + 64));
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 80));
  *(_QWORD *)(a1 + 128) = v7;
  *(__m128i *)(a1 + 80) = v8;
  *(__m128i *)(a1 + 96) = _mm_loadu_si128((const __m128i *)(a2 + 96));
  *(__m128i *)(a1 + 112) = _mm_loadu_si128((const __m128i *)(a2 + 112));
  *(_BYTE *)(a1 + 136) = *(_BYTE *)(a2 + 136);
  v9 = *(_QWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 144) = v9;
  *(_OWORD *)(a1 + 160) = 0;
  v10 = *(_QWORD *)(a2 + 160);
  if ( v10 )
  {
    v45 = (void *)qalloc_or_throw(32 * v10);
    *(_QWORD *)(a1 + 152) = v45;
    v46 = *(const void **)(a2 + 152);
    *(_QWORD *)(a1 + 168) = v10;
    memcpy(v45, v46, 32 * v10);
    *(_QWORD *)(a1 + 160) = v10;
  }
  *(_QWORD *)(a1 + 176) = 0;
  *(_OWORD *)(a1 + 184) = 0;
  v11 = *(_QWORD *)(a2 + 184);
  v55 = v11;
  if ( v11 )
  {
    v27 = *(_QWORD *)(a2 + 184);
    v28 = qalloc_or_throw(40 * v11);
    *(_QWORD *)(a1 + 176) = v28;
    v29 = v28;
    v30 = 0;
    *(_QWORD *)(a1 + 192) = v27;
    while ( 1 )
    {
      v31 = 40 * v30 + v29;
      v32 = *(_QWORD *)(a2 + 176) + 40 * v30;
      *(_QWORD *)v31 = *(_QWORD *)v32;
      v33 = *(_DWORD *)(v32 + 8);
      *(_QWORD *)(v31 + 16) = 0;
      *(_DWORD *)(v31 + 8) = v33;
      *(_OWORD *)(v31 + 24) = 0;
      v34 = *(_QWORD *)(v32 + 24);
      if ( v34 )
      {
        v47 = *(_QWORD *)(v32 + 24);
        v35 = qalloc_or_throw(72 * v34);
        v36 = v47;
        *(_QWORD *)(v31 + 16) = v35;
        v37 = 0;
        *(_QWORD *)(v31 + 32) = v47;
        while ( 1 )
        {
          v38 = v35 + 72 * v37;
          v39 = *(_QWORD *)(v32 + 16) + 72 * v37;
          v40 = _mm_loadu_si128((const __m128i *)(v39 + 8));
          *(_BYTE *)v38 = *(_BYTE *)v39;
          v41 = *(_DWORD *)(v39 + 24);
          *(__m128i *)(v38 + 8) = v40;
          *(_DWORD *)(v38 + 24) = v41;
          LOBYTE(v41) = *(_BYTE *)(v39 + 28);
          *(_QWORD *)(v38 + 32) = 0;
          *(_BYTE *)(v38 + 28) = v41;
          *(_OWORD *)(v38 + 40) = 0;
          v42 = *(_QWORD *)(v39 + 40);
          if ( v42 )
          {
            v50 = v38;
            v54 = v36;
            v53 = v37;
            v48 = *(_QWORD *)(v39 + 40);
            n = 8 * v42;
            v43 = (void *)qalloc_or_throw(8 * v42);
            v44 = v50;
            *(_QWORD *)(v50 + 48) = v48;
            *(_QWORD *)(v50 + 32) = v43;
            v51 = v48;
            v49 = v44;
            memcpy(v43, *(const void **)(v39 + 32), n);
            v38 = v49;
            v36 = v54;
            v37 = v53;
            *(_QWORD *)(v49 + 40) = v51;
          }
          ++v37;
          *(_DWORD *)(v38 + 56) = *(_DWORD *)(v39 + 56);
          *(_DWORD *)(v38 + 60) = *(_DWORD *)(v39 + 60);
          *(_BYTE *)(v38 + 64) = *(_BYTE *)(v39 + 64);
          if ( v36 == v37 )
            break;
          v35 = *(_QWORD *)(v31 + 16);
        }
        *(_QWORD *)(v31 + 24) = v36;
        if ( v55 == ++v30 )
        {
LABEL_22:
          *(_QWORD *)(a1 + 184) = v55;
          break;
        }
      }
      else if ( v55 == ++v30 )
      {
        goto LABEL_22;
      }
      v29 = *(_QWORD *)(a1 + 176);
    }
  }
  *(_QWORD *)(a1 + 200) = 0;
  *(_OWORD *)(a1 + 208) = 0;
  v12 = *(_QWORD *)(a2 + 208);
  if ( v12 )
  {
    v25 = (void *)qalloc_or_throw(16 * v12);
    *(_QWORD *)(a1 + 200) = v25;
    v26 = *(const void **)(a2 + 200);
    *(_QWORD *)(a1 + 216) = v12;
    memcpy(v25, v26, 16 * v12);
    *(_QWORD *)(a1 + 208) = v12;
  }
  *(_BYTE *)(a1 + 224) = *(_BYTE *)(a2 + 224);
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 232));
  *(_QWORD *)(a1 + 264) = *(_QWORD *)(a2 + 264);
  v14 = *(_DWORD *)(a2 + 272);
  *(__m128i *)(a1 + 232) = v13;
  v15 = _mm_loadu_si128((const __m128i *)(a2 + 248));
  *(_DWORD *)(a1 + 272) = v14;
  *(__m128i *)(a1 + 248) = v15;
  result = *(unsigned __int8 *)(a2 + 280);
  *(_BYTE *)(a1 + 280) = result;
  return result;
}
