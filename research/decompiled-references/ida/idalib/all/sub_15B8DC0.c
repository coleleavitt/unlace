__int64 __fastcall sub_15B8DC0(__int64 *a1, __int64 a2, __int64 a3)
{
  _QWORD *v4; // rbp
  int v5; // r13d
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r10
  _QWORD *v10; // rsi
  unsigned __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  unsigned __int64 v23; // rsi
  __m128i v24; // xmm1
  __int64 v25; // rax
  __int64 v26; // rsi
  unsigned __int64 v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  void *v33; // rdx
  const __m128i *v34; // rax
  __int64 v35; // rcx
  __m128i v36; // xmm3
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v41; // [rsp+8h] [rbp-2B0h]
  unsigned __int64 v42; // [rsp+8h] [rbp-2B0h]
  _BYTE *v44; // [rsp+10h] [rbp-2A8h]
  __int64 v45; // [rsp+18h] [rbp-2A0h]
  __int128 v46; // [rsp+20h] [rbp-298h]
  __int64 v47; // [rsp+30h] [rbp-288h] BYREF
  __m128i v48; // [rsp+40h] [rbp-278h] BYREF
  __int64 v49; // [rsp+50h] [rbp-268h]
  __m128i v50; // [rsp+60h] [rbp-258h] BYREF
  void *v51; // [rsp+70h] [rbp-248h]
  __m128i v52; // [rsp+80h] [rbp-238h] BYREF
  __int64 v53; // [rsp+90h] [rbp-228h]
  __m128i v54; // [rsp+A0h] [rbp-218h] BYREF
  void *v55; // [rsp+B0h] [rbp-208h]
  __int64 v56; // [rsp+B8h] [rbp-200h]
  __m128i v57; // [rsp+C0h] [rbp-1F8h] BYREF
  __int64 v58; // [rsp+D0h] [rbp-1E8h]
  __int16 v59; // [rsp+120h] [rbp-198h]
  void *ptr; // [rsp+128h] [rbp-190h]
  __int64 v61; // [rsp+130h] [rbp-188h]
  _BYTE v62[40]; // [rsp+138h] [rbp-180h] BYREF
  void *v63; // [rsp+160h] [rbp-158h] BYREF
  __int64 v64; // [rsp+168h] [rbp-150h]
  _DWORD v65[82]; // [rsp+170h] [rbp-148h] BYREF

  v4 = *(_QWORD **)(a2 + 248);
  *(_QWORD *)&v46 = *(_QWORD *)(a3 + 40);
  v5 = *(_DWORD *)(*(_QWORD *)(*a1 + 8) + 56LL);
  DWORD2(v46) = v5;
  sub_B85890(&v47, v46);
  v6 = *a1;
  v7 = *(_QWORD *)(*(_QWORD *)(*a1 + 8) + 16LL);
  if ( (v7 & 4) != 0 )
    v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v41 = v8;
  v65[64] = v5;
  v65[65] = v5;
  v63 = v65;
  v64 = 0x800000000LL;
  v9 = *(_QWORD *)(*(_QWORD *)(a3 + 56) + 24LL);
  if ( (*(_BYTE *)(v9 + 28) & 0x7F) != 0x43 )
    v9 = 0;
  v10 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL) & 4) != 0 )
    v10 = (_QWORD *)*v10;
  v45 = v9;
  v11 = sub_BBE1D0(v4, (__int64)v10, 0, 0, 0, 0, 0, 1, 0, 0, 0);
  sub_B8C080(v11, v41);
  v16 = *(_QWORD *)(v45 + 48);
  if ( v16 )
    v17 = v16 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v17 = sub_A7AA70((__int64)v4, v45, v12, v13, v14, v15);
  sub_F1D250((__int64)&v48, v17, 0, 0);
  v22 = *(_QWORD *)(v11 + 48);
  if ( v22 )
    v23 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v23 = sub_A7AA70((__int64)v4, v11, v18, v19, v20, v21);
  sub_F1D250((__int64)&v50, v23, 0, 0);
  v24 = _mm_load_si128(&v50);
  v55 = v51;
  v25 = *a1;
  v54 = v24;
  v26 = *(_QWORD *)(*(_QWORD *)(v25 + 8) + 16LL);
  if ( (v26 & 4) != 0 )
    v27 = *(_QWORD *)(v26 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v27 = v26 & 0xFFFFFFFFFFFFFFF8LL;
  v42 = sub_BBF4F0(v4, v27, v5, &v54, 1);
  v28 = _mm_load_si128(&v48);
  v55 = &v57;
  v53 = v49;
  v58 = v49;
  v56 = 0x400000001LL;
  v59 = 0;
  ptr = v62;
  v52 = v28;
  v54.m128i_i64[0] = 0;
  v54.m128i_i64[1] = a3;
  v57 = v28;
  v61 = 0x400000000LL;
  sub_1D3AAD0(&v52, a2, &v48, 0, 0, 0);
  v31 = (unsigned int)v64;
  v32 = (unsigned int)v64 + 1LL;
  if ( v32 > HIDWORD(v64) )
  {
    if ( v63 > &v52 || &v52 >= (__m128i *)((char *)v63 + 32 * (unsigned int)v64) )
    {
      sub_2237220(&v63, v65, v32, 32);
      v33 = v63;
      v31 = (unsigned int)v64;
      v34 = &v52;
    }
    else
    {
      v44 = v63;
      sub_2237220(&v63, v65, v32, 32);
      v29 = (__int64)v44;
      v33 = v63;
      v31 = (unsigned int)v64;
      v34 = (const __m128i *)((char *)v63 + (char *)&v52 - v44);
    }
  }
  else
  {
    v33 = v63;
    v34 = &v52;
  }
  v35 = (__int64)v33 + 32 * v31;
  *(__m128i *)v35 = _mm_loadu_si128(v34);
  v36 = _mm_loadu_si128(v34 + 1);
  LODWORD(v64) = v64 + 1;
  *(__m128i *)(v35 + 16) = v36;
  v37 = sub_F1ED40(v4, (__int64 *)&v63, (__int64)v33, v35, v29, v30);
  v38 = sub_A55700(v4, 0, 0, v5, a3, a3, v46, v47, v37);
  v39 = sub_C0F0D0(v4, v38, v42, (__int64)&v54);
  if ( ptr != v62 )
    free(ptr);
  if ( v55 != &v57 )
    free(v55);
  if ( v63 != v65 )
    free(v63);
  return v39;
}
