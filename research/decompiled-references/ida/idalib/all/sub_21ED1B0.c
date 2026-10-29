__int64 __fastcall sub_21ED1B0(__int64 a1, const char *a2, int **a3, __int64 *a4, __int64 **a5)
{
  __m128 v9; // xmm0
  size_t v10; // rax
  __int64 v11; // rdx
  int v12; // eax
  __int64 v13; // rax
  __int64 *v14; // r15
  __int64 v15; // rcx
  int v16; // eax
  const __m128i *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r10
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  __int64 v22; // rcx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rcx
  __int32 v27; // eax
  __m128i v28; // xmm4
  __int64 v29; // rdi
  unsigned __int64 v31; // r13
  __int64 v32; // rax
  __m128i *v33; // rdi
  __int64 v34; // rcx
  __int64 v35; // rdx
  const __m128i *v36; // rsi
  const __m128i *v37; // r11
  __m128i v38; // xmm1
  __int32 v39; // r9d
  __m128i v40; // xmm2
  int v41; // ecx
  __m128i *v42; // [rsp+0h] [rbp-B8h]
  __int64 v43; // [rsp+8h] [rbp-B0h]
  char v44; // [rsp+17h] [rbp-A1h]
  __int64 v45; // [rsp+28h] [rbp-90h]
  __int64 v46; // [rsp+28h] [rbp-90h]
  int v47; // [rsp+30h] [rbp-88h]
  __int64 v48; // [rsp+38h] [rbp-80h]
  __int64 v49; // [rsp+48h] [rbp-70h] BYREF
  _QWORD v50[5]; // [rsp+50h] [rbp-68h] BYREF
  int v51; // [rsp+78h] [rbp-40h]
  char v52; // [rsp+7Ch] [rbp-3Ch]

  sub_200F820(a1, 0, 0);
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  v9 = _mm_loadh_ps((const double *)off_2C78C30);
  *(_BYTE *)(a1 + 140) = 0;
  *(_QWORD *)(a1 + 128) = off_2C751B0;
  *(_QWORD *)a1 = &off_2C75220;
  *(_QWORD *)(a1 + 152) = a1;
  *(__m128 *)(a1 + 576) = v9;
  *(_QWORD *)(a1 + 144) = &off_2C751D0;
  v42 = (__m128i *)(a1 + 176);
  *(_QWORD *)(a1 + 160) = a1 + 176;
  *(_QWORD *)(a1 + 168) = 0x800000000LL;
  v10 = j__strlen(a2);
  sub_2217250(a1, a2, v10);
  v11 = *a4;
  v12 = **a3;
  *(_BYTE *)(a1 + 140) = 1;
  *(_DWORD *)(a1 + 120) = v12;
  *(_DWORD *)(a1 + 136) = v12;
  v13 = a4[1];
  *(_QWORD *)(a1 + 32) = v11;
  *(_QWORD *)(a1 + 40) = v13;
  v14 = *a5;
  if ( *a5 != &(*a5)[5 * *((unsigned int *)a5 + 2)] )
  {
    v43 = (__int64)&(*a5)[5 * *((unsigned int *)a5 + 2)];
    do
    {
      v15 = v14[3];
      v16 = *((_DWORD *)v14 + 4);
      v50[4] = off_2C751B0;
      v17 = (const __m128i *)v50;
      v18 = v14[4];
      v19 = *v14;
      v52 = 1;
      v20 = v14[1];
      v21 = *(unsigned int *)(a1 + 172);
      v51 = v16;
      v50[2] = v15;
      v22 = *(unsigned int *)(a1 + 168);
      v50[3] = v18;
      v23 = *(_QWORD *)(a1 + 160);
      LODWORD(v24) = v22;
      v25 = v22 + 1;
      v50[0] = v19;
      v50[1] = v20;
      v26 = v23 + 48 * v22;
      if ( v25 > v21 )
      {
        v31 = -1;
        v44 = 0;
        if ( v23 <= (unsigned __int64)v50 && v26 > (unsigned __int64)v50 )
        {
          v44 = 1;
          v31 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v50 - v23) >> 4);
        }
        v45 = v19;
        v32 = sub_2237400(a1 + 160, v42, v25, 48, &v49);
        v19 = v45;
        v33 = *(__m128i **)(a1 + 160);
        v34 = v32;
        v24 = *(unsigned int *)(a1 + 168);
        v35 = 48 * v24;
        v36 = v33;
        v37 = &v33[3 * v24];
        if ( v33 != v37 )
        {
          do
          {
            v38 = _mm_loadu_si128(v36);
            v39 = v36[2].m128i_i32[2];
            v36 += 3;
            v34 += 48;
            *(__m128i *)(v34 - 48) = v38;
            v40 = _mm_loadu_si128(v36 - 2);
            *(_DWORD *)(v34 - 8) = v39;
            LOBYTE(v39) = v36[-1].m128i_i8[12];
            *(__m128i *)(v34 - 32) = v40;
            *(_BYTE *)(v34 - 4) = v39;
            *(_QWORD *)(v34 - 16) = off_2C751B0;
          }
          while ( v37 != v36 );
        }
        v41 = v49;
        if ( v42 != v33 )
        {
          v48 = v45;
          v47 = v49;
          v46 = v32;
          free(v33);
          v19 = v48;
          v41 = v47;
          v32 = v46;
          v24 = *(unsigned int *)(a1 + 168);
          v35 = 48 * v24;
        }
        *(_DWORD *)(a1 + 172) = v41;
        v17 = (const __m128i *)v50;
        v26 = v32 + v35;
        *(_QWORD *)(a1 + 160) = v32;
        if ( v44 )
          v17 = (const __m128i *)(v32 + 48 * v31);
      }
      v27 = v17[2].m128i_i32[2];
      v14 += 5;
      *(__m128i *)v26 = _mm_loadu_si128(v17);
      v28 = _mm_loadu_si128(v17 + 1);
      *(_DWORD *)(v26 + 40) = v27;
      LOBYTE(v27) = v17[2].m128i_i8[12];
      *(__m128i *)(v26 + 16) = v28;
      *(_BYTE *)(v26 + 44) = v27;
      *(_QWORD *)(v26 + 32) = off_2C751B0;
      v29 = *(_QWORD *)(a1 + 152);
      *(_DWORD *)(a1 + 168) = v24 + 1;
      sub_2216D40(v29, v19, v20);
    }
    while ( (__int64 *)v43 != v14 );
  }
  return sub_2218140(a1);
}
