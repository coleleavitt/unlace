__int64 __fastcall sub_14E7FA0(__int64 a1, __int64 a2, __m128i a3)
{
  unsigned int v4; // r13d
  _QWORD *v5; // rax
  __int64 v6; // r14
  int v7; // eax
  __int64 v8; // rax
  void **v9; // r12
  __int64 v10; // rax
  void **v11; // r13
  void **v12; // rbx
  void **v13; // rdi
  void **v14; // rdi
  void **v15; // rbx
  void **v16; // r13
  __m128i v18; // xmm0
  int v19; // r8d
  int v20; // xmm4_4
  int v21; // edi
  int v22; // esi
  int v23; // ecx
  int v24; // xmm3_4
  int v25; // xmm2_4
  int v26; // edx
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // r12
  int v30; // eax
  __int64 v31; // r13
  __int64 v32; // rbx
  void *v33; // rdi
  void **v34; // rdi
  void **v35; // rdi
  void **v36; // rbx
  void **v37; // r13
  __int64 v38; // rdx
  unsigned int v39; // [rsp+4h] [rbp-114h]
  unsigned int v40; // [rsp+8h] [rbp-110h]
  unsigned int v41; // [rsp+Ch] [rbp-10Ch]
  __m128i v42; // [rsp+10h] [rbp-108h] BYREF
  __int64 v43; // [rsp+20h] [rbp-F8h]
  unsigned __int64 v44; // [rsp+30h] [rbp-E8h] BYREF
  unsigned __int64 v45; // [rsp+38h] [rbp-E0h]
  __int64 v46; // [rsp+40h] [rbp-D8h]
  void *v47; // [rsp+50h] [rbp-C8h]
  __int64 v48; // [rsp+60h] [rbp-B8h] BYREF
  __int16 v49; // [rsp+70h] [rbp-A8h]
  __m128i v50; // [rsp+80h] [rbp-98h] BYREF
  __int64 v51; // [rsp+90h] [rbp-88h]
  char v52; // [rsp+98h] [rbp-80h]
  unsigned int v53; // [rsp+9Ch] [rbp-7Ch]
  void *v54; // [rsp+A0h] [rbp-78h]
  char v55; // [rsp+A8h] [rbp-70h]
  int v56; // [rsp+ACh] [rbp-6Ch]
  char v57; // [rsp+B0h] [rbp-68h] BYREF
  int v58; // [rsp+B4h] [rbp-64h]
  char v59; // [rsp+B8h] [rbp-60h]
  int v60; // [rsp+BCh] [rbp-5Ch]
  __int16 v61; // [rsp+C0h] [rbp-58h]
  int v62; // [rsp+C4h] [rbp-54h]
  char v63; // [rsp+C8h] [rbp-50h]
  int v64; // [rsp+CCh] [rbp-4Ch]
  char v65; // [rsp+D0h] [rbp-48h]
  int v66; // [rsp+D4h] [rbp-44h]
  char v67; // [rsp+D8h] [rbp-40h]
  int v68; // [rsp+DCh] [rbp-3Ch]
  char v69; // [rsp+E0h] [rbp-38h]
  int v70; // [rsp+E4h] [rbp-34h]
  char v71; // [rsp+E8h] [rbp-30h]
  char v72; // [rsp+ECh] [rbp-2Ch]

  v4 = *(_DWORD *)(a2 + 88);
  v50.m128i_i32[0] = 8;
  if ( !sub_14E3360(a2, &v50, 1) )
  {
    v5 = *(_QWORD **)(a2 + 80);
    v6 = v5[6];
    v7 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v5[11], v5[7], v5[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v50, v6, v7, 15);
    v8 = sub_14DC730(&v50, v4);
    sub_14DC730(v8, 8);
    if ( (_BYTE)v61 )
    {
      sub_FC7790(v51, v50.m128i_i64, SHIBYTE(v61));
      v51 = 0;
      v61 = 0;
    }
    if ( v54 != &v57 )
      operator delete(v54);
    v9 = (void **)v50.m128i_i64[0];
    if ( !v50.m128i_i64[0] )
      goto LABEL_22;
    v10 = v50.m128i_i64[1];
    if ( !v50.m128i_i64[1] )
      goto LABEL_22;
    if ( v50.m128i_i64[0] < (unsigned __int64)v50.m128i_i64[1]
      || v50.m128i_i64[0] > (unsigned __int64)(v50.m128i_i64[1] + 14848) )
    {
      v11 = *(void ***)(v50.m128i_i64[0] + 528);
      v12 = &v11[8 * (unsigned __int64)*(unsigned int *)(v50.m128i_i64[0] + 536)];
      if ( v11 != v12 )
      {
        do
        {
          while ( 1 )
          {
            v12 -= 8;
            v13 = (void **)v12[3];
            if ( v13 == v12 + 5 )
              break;
            operator delete(v13);
            if ( v11 == v12 )
              goto LABEL_13;
          }
        }
        while ( v11 != v12 );
LABEL_13:
        v12 = (void **)v9[66];
      }
      if ( v12 != v9 + 68 )
        free(v12);
      v14 = (void **)v9[52];
      if ( v14 != v9 + 54 )
        free(v14);
      v15 = v9 + 48;
      v16 = v9 + 8;
      do
      {
        while ( *v15 != v15 + 2 )
        {
          operator delete(*v15);
          v15 -= 4;
          if ( v16 == v15 )
            goto LABEL_21;
        }
        v15 -= 4;
      }
      while ( v16 != v15 );
LABEL_21:
      operator delete(v9, 0x3A0u);
LABEL_22:
      *(_BYTE *)(a1 + 56) = 0;
      return a1;
    }
    goto LABEL_76;
  }
  sub_13DF9D0(&v42, a2 + 24);
  *(__m128i *)(a2 + 88) = _mm_loadu_si128(&v42);
  *(_QWORD *)(a2 + 104) = v43;
  sub_14E72C0(&v50, a2, a3);
  if ( !v72 || (unsigned __int8)sub_14E5150(a2, 9u, 17, 0xAu) )
    goto LABEL_22;
  if ( !v50.m128i_i8[8] )
  {
    v28 = *(_QWORD **)(a2 + 80);
    v29 = v28[6];
    v30 = sub_C07A10(*(_QWORD *)(a2 + 16), *(_DWORD *)(a2 + 92), v28[11], v28[7], v28[8], nullptr, nullptr);
    sub_FC70B0((__int64)&v44, v29, v30, 1692);
    sub_14DC730(&v44, 7);
    if ( (_BYTE)v49 )
    {
      sub_FC7790(v46, (__int64 *)&v44, SHIBYTE(v49));
      v46 = 0;
      v49 = 0;
    }
    if ( v47 != &v48 )
      operator delete(v47);
    v9 = (void **)v44;
    if ( !v44 )
      goto LABEL_22;
    v10 = v45;
    if ( !v45 )
      goto LABEL_22;
    if ( v44 < v45 || v44 > v45 + 14848 )
    {
      v31 = *(_QWORD *)(v44 + 528);
      v32 = v31 + ((unsigned __int64)*(unsigned int *)(v44 + 536) << 6);
      while ( v31 != v32 )
      {
        while ( 1 )
        {
          v32 -= 64;
          v33 = *(void **)(v32 + 24);
          if ( v33 == (void *)(v32 + 40) )
            break;
          operator delete(v33);
          if ( v31 == v32 )
            goto LABEL_67;
        }
      }
LABEL_67:
      v34 = (void **)v9[66];
      if ( v34 != v9 + 68 )
        free(v34);
      v35 = (void **)v9[52];
      if ( v35 != v9 + 54 )
        free(v35);
      v36 = v9 + 48;
      v37 = v9 + 8;
      do
      {
        while ( *v36 != v36 + 2 )
        {
          operator delete(*v36);
          v36 -= 4;
          if ( v37 == v36 )
            goto LABEL_21;
        }
        v36 -= 4;
      }
      while ( v37 != v36 );
      goto LABEL_21;
    }
LABEL_76:
    v38 = *(unsigned int *)(v10 + 14976);
    *(_DWORD *)(v10 + 14976) = v38 + 1;
    *(_QWORD *)(v10 + 8 * v38 + 14848) = v9;
    goto LABEL_22;
  }
  v39 = 85;
  v18 = _mm_cvtsi32_si128(v50.m128i_u32[1]);
  if ( (_BYTE)v51 )
    v39 = v50.m128i_u32[3];
  v40 = 1;
  if ( v52 )
    v40 = HIDWORD(v51);
  v41 = 1;
  if ( (_BYTE)v54 )
    v41 = v53;
  v19 = 1;
  if ( v55 )
    v19 = HIDWORD(v54);
  v20 = 0;
  if ( v57 )
    v20 = v56;
  v21 = 16;
  if ( v59 )
    v21 = v58;
  v22 = 4;
  if ( (_BYTE)v61 )
    v22 = v60;
  v23 = 2;
  if ( v63 )
    v23 = v62;
  v24 = 0;
  if ( v65 )
    v24 = v64;
  v25 = 2139095039;
  if ( v67 )
    v25 = v66;
  v26 = 0;
  if ( v69 )
    v26 = v68;
  v27 = 0;
  if ( v71 )
    v27 = v70;
  *(_DWORD *)a1 = v50.m128i_i32[0];
  *(_DWORD *)(a1 + 20) = v19;
  *(_DWORD *)(a1 + 24) = v20;
  *(_DWORD *)(a1 + 28) = v21;
  *(_DWORD *)(a1 + 32) = v22;
  *(__m128i *)(a1 + 4) = _mm_unpacklo_epi64(
                           _mm_unpacklo_epi32(v18, _mm_cvtsi32_si128(v39)),
                           _mm_unpacklo_epi32(_mm_cvtsi32_si128(v40), _mm_cvtsi32_si128(v41)));
  *(_DWORD *)(a1 + 36) = v23;
  *(_DWORD *)(a1 + 40) = v24;
  *(_DWORD *)(a1 + 44) = v25;
  *(_DWORD *)(a1 + 48) = v26;
  *(_DWORD *)(a1 + 52) = v27;
  *(_BYTE *)(a1 + 56) = 1;
  return a1;
}
