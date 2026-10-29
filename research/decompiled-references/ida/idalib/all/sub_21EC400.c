__int64 __fastcall sub_21EC400(__int64 a1, const char *a2, _DWORD *a3, int **a4, __int64 *a5, __int64 **a6)
{
  __m128 v10; // xmm0
  size_t v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 *v17; // r15
  __int64 v18; // rcx
  int v19; // eax
  const __m128i *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r10
  __int64 v23; // r14
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int32 v30; // eax
  __m128i v31; // xmm4
  __int64 v32; // rdi
  unsigned __int64 v34; // r13
  __int64 v35; // rax
  __m128i *v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rdx
  const __m128i *v39; // rsi
  const __m128i *v40; // r11
  __m128i v41; // xmm1
  __int32 v42; // r9d
  __m128i v43; // xmm2
  int v44; // ecx
  __m128i *v45; // [rsp+0h] [rbp-B8h]
  __int64 v47; // [rsp+8h] [rbp-B0h]
  char v48; // [rsp+17h] [rbp-A1h]
  __int64 v49; // [rsp+28h] [rbp-90h]
  __int64 v50; // [rsp+28h] [rbp-90h]
  int v51; // [rsp+30h] [rbp-88h]
  __int64 v52; // [rsp+38h] [rbp-80h]
  __int64 v53; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v54[5]; // [rsp+50h] [rbp-68h] BYREF
  int v55; // [rsp+78h] [rbp-40h]
  char v56; // [rsp+7Ch] [rbp-3Ch]

  sub_200F820(a1, 0, 0);
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  v10 = _mm_loadh_ps((const double *)off_2C78C80);
  *(_BYTE *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 128) = off_2C750D8;
  *(_QWORD *)a1 = &off_2C75148;
  *(_QWORD *)(a1 + 152) = a1;
  *(__m128 *)(a1 + 576) = v10;
  *(_QWORD *)(a1 + 144) = &off_2C750F8;
  v45 = (__m128i *)(a1 + 176);
  *(_QWORD *)(a1 + 160) = a1 + 176;
  *(_QWORD *)(a1 + 168) = 0x800000000LL;
  v11 = j__strlen(a2);
  sub_2217250(a1, a2, v11);
  *(_BYTE *)(a1 + 10) = (32 * (*a3 & 3)) | *(_BYTE *)(a1 + 10) & 0x9F;
  v12 = *a5;
  v13 = **a4;
  *(_BYTE *)(a1 + 140) = 1;
  *(_DWORD *)(a1 + 120) = v13;
  *(_DWORD *)(a1 + 136) = v13;
  v14 = a5[1];
  *(_QWORD *)(a1 + 32) = v12;
  v15 = *((unsigned int *)a6 + 2);
  *(_QWORD *)(a1 + 40) = v14;
  v16 = (__int64)&(*a6)[5 * v15];
  if ( *a6 != (__int64 *)v16 )
  {
    v17 = *a6;
    v47 = v16;
    do
    {
      v18 = v17[3];
      v19 = *((_DWORD *)v17 + 4);
      v54[4] = off_2C750D8;
      v20 = (const __m128i *)v54;
      v21 = v17[4];
      v22 = *v17;
      v56 = 1;
      v23 = v17[1];
      v24 = *(unsigned int *)(a1 + 172);
      v55 = v19;
      v54[2] = v18;
      v25 = *(unsigned int *)(a1 + 168);
      v54[3] = v21;
      v26 = *(_QWORD *)(a1 + 160);
      LODWORD(v27) = v25;
      v28 = v25 + 1;
      v54[0] = v22;
      v54[1] = v23;
      v29 = v26 + 48 * v25;
      if ( v28 > v24 )
      {
        v34 = -1;
        v48 = 0;
        if ( v26 <= (unsigned __int64)v54 && v29 > (unsigned __int64)v54 )
        {
          v48 = 1;
          v34 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v54 - v26) >> 4);
        }
        v49 = v22;
        v35 = sub_2237400(a1 + 160, v45, v28, 48, &v53);
        v22 = v49;
        v36 = *(__m128i **)(a1 + 160);
        v37 = v35;
        v27 = *(unsigned int *)(a1 + 168);
        v38 = 48 * v27;
        v39 = v36;
        v40 = &v36[3 * v27];
        if ( v36 != v40 )
        {
          do
          {
            v41 = _mm_loadu_si128(v39);
            v42 = v39[2].m128i_i32[2];
            v39 += 3;
            v37 += 48;
            *(__m128i *)(v37 - 48) = v41;
            v43 = _mm_loadu_si128(v39 - 2);
            *(_DWORD *)(v37 - 8) = v42;
            LOBYTE(v42) = v39[-1].m128i_i8[12];
            *(__m128i *)(v37 - 32) = v43;
            *(_BYTE *)(v37 - 4) = v42;
            *(_QWORD *)(v37 - 16) = off_2C750D8;
          }
          while ( v40 != v39 );
        }
        v44 = v53;
        if ( v45 != v36 )
        {
          v52 = v49;
          v51 = v53;
          v50 = v35;
          free(v36);
          v22 = v52;
          v44 = v51;
          v35 = v50;
          v27 = *(unsigned int *)(a1 + 168);
          v38 = 48 * v27;
        }
        *(_DWORD *)(a1 + 172) = v44;
        v20 = (const __m128i *)v54;
        v29 = v35 + v38;
        *(_QWORD *)(a1 + 160) = v35;
        if ( v48 )
          v20 = (const __m128i *)(v35 + 48 * v34);
      }
      v30 = v20[2].m128i_i32[2];
      v17 += 5;
      *(__m128i *)v29 = _mm_loadu_si128(v20);
      v31 = _mm_loadu_si128(v20 + 1);
      *(_DWORD *)(v29 + 40) = v30;
      LOBYTE(v30) = v20[2].m128i_i8[12];
      *(__m128i *)(v29 + 16) = v31;
      *(_BYTE *)(v29 + 44) = v30;
      *(_QWORD *)(v29 + 32) = off_2C750D8;
      v32 = *(_QWORD *)(a1 + 152);
      *(_DWORD *)(a1 + 168) = v27 + 1;
      sub_2216D40(v32, v22, v23);
    }
    while ( (__int64 *)v47 != v17 );
  }
  return sub_2218140(a1);
}
