void __fastcall sub_66C060(_QWORD *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rdx
  const char *v7; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  char v14; // al
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r13
  __int64 v18; // rax
  __m128 v19; // xmm5
  __m128 v20; // xmm1
  unsigned __int64 v21; // r12
  __int64 v22; // rax
  int v23; // esi
  bool v24; // al
  int v25; // eax
  _QWORD *v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm2
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rsi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 *v37; // r15
  unsigned __int64 v38; // rax
  __int64 *v39; // rax
  __int64 v40; // rbx
  unsigned int *v41; // rcx
  __int64 v42; // rax
  char v43; // al
  void *v44[2]; // [rsp+10h] [rbp-2A8h] BYREF
  __int64 *v45; // [rsp+20h] [rbp-298h]
  _QWORD *v46; // [rsp+28h] [rbp-290h]
  const char *v47; // [rsp+30h] [rbp-288h]
  __int64 v48; // [rsp+38h] [rbp-280h]
  __int64 *v49; // [rsp+40h] [rbp-278h]
  _BYTE *v50; // [rsp+48h] [rbp-270h]
  _BYTE *v51; // [rsp+50h] [rbp-268h]
  __m128i *v52; // [rsp+58h] [rbp-260h]
  char v53; // [rsp+6Eh] [rbp-24Ah] BYREF
  bool v54; // [rsp+6Fh] [rbp-249h] BYREF
  _BYTE v55[32]; // [rsp+70h] [rbp-248h] BYREF
  __m128i v56; // [rsp+90h] [rbp-228h] BYREF
  __int64 v57; // [rsp+A0h] [rbp-218h]
  __int64 v58[4]; // [rsp+B0h] [rbp-208h] BYREF
  _BYTE v59[32]; // [rsp+D0h] [rbp-1E8h] BYREF
  _OWORD v60[3]; // [rsp+F0h] [rbp-1C8h] BYREF
  __int64 v61; // [rsp+120h] [rbp-198h]
  __m128i v62; // [rsp+130h] [rbp-188h] BYREF
  __int128 v63; // [rsp+140h] [rbp-178h]
  __int128 v64; // [rsp+150h] [rbp-168h]
  __int64 v65; // [rsp+160h] [rbp-158h]
  void *ptr[2]; // [rsp+170h] [rbp-148h] BYREF
  __int64 v67; // [rsp+180h] [rbp-138h]
  char v68; // [rsp+188h] [rbp-130h] BYREF
  void *v69; // [rsp+1E0h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+1E8h] [rbp-D0h]
  _BYTE v71[192]; // [rsp+1F8h] [rbp-C0h] BYREF

  v6 = 0;
  v7 = &byte_3B9466E;
  v10 = *(_QWORD *)(a2 + 40);
  if ( (v10 & 7) == 0 )
  {
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v6 = v11;
    if ( v11 )
    {
      v41 = *(unsigned int **)(v11 + 16);
      v6 = *v41;
      v7 = (const char *)(v41 + 4);
    }
  }
  v47 = v7;
  v48 = v6;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v51 = v71;
  v69 = v71;
  sub_11240B0(a2, &v69);
  v12 = *(unsigned int *)(a2 + 24);
  v13 = *(_QWORD *)(*a1 + 2152LL);
  v50 = v55;
  sub_CAE550(v55, v13, v12, 1);
  v14 = sub_790090(a2);
  v15 = *a1;
  v16 = a2;
  v53 = v14;
  v17 = sub_6B37C0(v15);
  if ( v17
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 0x11
    && (v42 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (v16 = v42) != 0)
    && (v43 = *(_BYTE *)(v42 + 74), (v43 & 4) != 0)
    && (v43 & 1) != 0
    && (v17 = sub_6B37C0(*a1)) != 0
    || (v16 = a2, (v17 = sub_6F4910(*a1, a2, 0)) != 0) )
  {
    v18 = sub_6BB140(*a1, v16);
    v52 = &v62;
    sub_AA92F0(&v62, v17, *(_QWORD *)(*a1 + 2152LL), v18);
    a6 = (__m128)_mm_load_si128(&v62);
    v17 = v63;
    *(_OWORD *)ptr = 0;
    v67 = 0;
    *(_QWORD *)&v63 = 0;
    *(__m128 *)v44 = a6;
    v62 = 0;
    sub_646A80((__int64 *)ptr);
    sub_646A80(v62.m128i_i64);
  }
  else
  {
    v52 = &v62;
    *(_OWORD *)v44 = 0;
  }
  v20 = (__m128)_mm_load_si128((const __m128i *)v44);
  v21 = _mm_movehl_ps(v19, v20).m128_u64[0];
  sub_FD77B0(v58, a2);
  v45 = (__int64 *)v59;
  sub_FCD270(v59, a2);
  v61 = 0;
  memset(v60, 0, sizeof(v60));
  v22 = sub_7BACE0(a2);
  v49 = (__int64 *)v60;
  if ( v22 )
    sub_63E460((__int64)v60, (__int64)a1, v22);
  v23 = *(_DWORD *)(a2 + 24);
  v46 = (_QWORD *)a1[1];
  v24 = 0;
  if ( v23 )
  {
    v25 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
    v24 = v25 != 3 && v25 != 0;
  }
  v54 = v24;
  sub_766420(ptr, a2);
  v26 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v26 = (_QWORD *)*v26;
  if ( v26 && (v27 = sub_79A2E0(v26)) != 0 && (*(_BYTE *)(v27 + 28) & 0x7F) != 0 )
  {
    sub_63E460((__int64)v52, (__int64)a1, v27);
  }
  else
  {
    v65 = 0;
    v62 = 0;
    v63 = 0;
    v64 = 0;
  }
  v57 = v17;
  v28 = _mm_load_si128((const __m128i *)v44);
  v56 = v28;
  v44[0] = (void *)sub_64F400(
                     v46,
                     (__int64)v69,
                     si128.m128i_i64[0],
                     (__int64)v47,
                     v48,
                     v52->m128i_i64,
                     (__int64)v50,
                     (__int64)ptr,
                     &v53,
                     v56.m128i_i64,
                     v58,
                     v45,
                     v49,
                     (char *)&v54);
  if ( ptr[0] != &v68 )
    free(ptr[0]);
  v29 = sub_79C190(a2 + 48);
  if ( v29 )
  {
    while ( (*(_BYTE *)(v29 + 28) & 0x7F) != 0x10 )
    {
      v30 = *(_QWORD *)(v29 + 8);
      v29 = v30 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v30 <= 7 )
      {
        v29 = 0;
        break;
      }
    }
  }
  sub_6696E0(a1, v29, 0.0, *(double *)v20.m128_u64, v28, a6);
  v31 = sub_79C190(a2 + 48);
  if ( v31 )
  {
    while ( (*(_BYTE *)(v31 + 28) & 0x7F) != 0x49 )
    {
      v32 = *(_QWORD *)(v31 + 8);
      v31 = v32 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v32 <= 7 )
      {
        v31 = 0;
        break;
      }
    }
  }
  sub_667A20(a1, v31);
  v33 = *(_QWORD *)(a2 + 120);
  if ( !v33 )
  {
    sub_63E750((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
    v33 = *(_QWORD *)(a2 + 120);
    if ( !v33 )
    {
      sub_63E750((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
      v33 = *(_QWORD *)(a2 + 120);
    }
  }
  v34 = 0;
  if ( v33 > 7 )
  {
    v34 = *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v34 )
    {
      v34 = sub_79C190(v34 + 48);
      if ( v34 )
      {
        while ( (*(_BYTE *)(v34 + 28) & 0x7F) != 0x30 )
        {
          v35 = *(_QWORD *)(v34 + 8);
          v34 = v35 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v35 <= 7 )
          {
            v34 = 0;
            break;
          }
        }
      }
    }
  }
  sub_64D440(a1, v34, 0);
  v36 = *(_QWORD *)(a2 + 120);
  if ( v36 )
  {
    if ( v36 > 7 )
      goto LABEL_35;
LABEL_62:
    v37 = nullptr;
    v39 = nullptr;
    goto LABEL_40;
  }
  sub_63E750((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
  v36 = *(_QWORD *)(a2 + 120);
  if ( v36 <= 7 )
  {
    v37 = nullptr;
    if ( !v36 )
    {
LABEL_64:
      sub_63E750((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96));
      v36 = *(_QWORD *)(a2 + 120);
      goto LABEL_65;
    }
    goto LABEL_62;
  }
LABEL_35:
  if ( (*(_BYTE *)((v36 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
  {
    v37 = (__int64 *)(*(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFF8LL) + 16)
                    + 8LL * *(unsigned int *)((v36 & 0xFFFFFFFFFFFFFFF8LL) + 24));
    goto LABEL_37;
  }
  sub_7B7DB0(a2);
  v36 = *(_QWORD *)(a2 + 120);
  v37 = (__int64 *)(*(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFF8LL) + 16)
                  + 8LL * *(unsigned int *)((v36 & 0xFFFFFFFFFFFFFFF8LL) + 24));
  if ( !v36 )
    goto LABEL_64;
LABEL_65:
  if ( v36 <= 7 )
  {
    v39 = nullptr;
    goto LABEL_40;
  }
LABEL_37:
  v38 = v36 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v38 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a2);
    v38 = *(_QWORD *)(a2 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v39 = *(__int64 **)(v38 + 16);
LABEL_40:
  v40 = v20.m128_u64[0];
  sub_63E860((__int64)a1, (__int64)v44[0], v39, v37);
  sub_6441A0(v45);
  sub_6441A0(v58);
  if ( v21 != v20.m128_u64[0] )
  {
    do
    {
      if ( *(_QWORD *)v40 != v40 + 16 )
        operator delete(*(void **)v40, *(_QWORD *)(v40 + 16) + 1LL);
      v40 += 80;
    }
    while ( v40 != v21 );
  }
  if ( v20.m128_u64[0] )
    operator delete((void *)v20.m128_u64[0], v17 - v20.m128_u64[0]);
  if ( v69 != v51 )
    free(v69);
}

