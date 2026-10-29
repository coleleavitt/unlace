__int64 __fastcall sub_1955530(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int64 v4; // rdx
  __int64 v5; // rbp
  unsigned __int16 **v6; // r13
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128 v11; // xmm1
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _BYTE *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int16 *v18; // rdx
  unsigned __int16 *v19; // rsi
  unsigned __int16 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned __int16 *i; // rbp
  unsigned int v24; // ecx
  __int64 *v25; // rsi
  __int64 v26; // r8
  unsigned __int64 v27; // r15
  _QWORD *v28; // rdx
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rax
  _BYTE *v36; // r12
  char *v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rdx
  unsigned __int64 v40; // rax
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // r9
  __int64 v44; // rbx
  int v46; // esi
  int v47; // r8d
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  unsigned __int64 v50; // [rsp+0h] [rbp-2A8h]
  unsigned __int16 *v51; // [rsp+10h] [rbp-298h]
  unsigned __int64 v52; // [rsp+10h] [rbp-298h]
  unsigned __int16 **v53; // [rsp+20h] [rbp-288h]
  unsigned __int16 **v54; // [rsp+38h] [rbp-270h]
  unsigned __int64 v56; // [rsp+48h] [rbp-260h]
  __m128i v57; // [rsp+70h] [rbp-238h] BYREF
  __int64 v58; // [rsp+80h] [rbp-228h]
  unsigned __int64 v59; // [rsp+98h] [rbp-210h]
  __m128 v60; // [rsp+A0h] [rbp-208h] BYREF
  __m128i v61; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v62; // [rsp+C0h] [rbp-1E8h]
  __int128 v63; // [rsp+D0h] [rbp-1D8h] BYREF
  void *v64[2]; // [rsp+E0h] [rbp-1C8h]
  __int128 v65; // [rsp+F0h] [rbp-1B8h]
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v67; // [rsp+108h] [rbp-1A0h]
  _BYTE v68[64]; // [rsp+110h] [rbp-198h] BYREF
  void *v69; // [rsp+150h] [rbp-158h] BYREF
  __int64 v70; // [rsp+158h] [rbp-150h]
  _BYTE v71[128]; // [rsp+160h] [rbp-148h] BYREF
  void *v72; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+1E8h] [rbp-C0h]
  _BYTE v74[184]; // [rsp+1F0h] [rbp-B8h] BYREF

  v4 = *(unsigned int *)(a2 + 16);
  v69 = v71;
  v70 = 0x1000000000LL;
  if ( v4 > 0x10 )
  {
    sub_2237220(&v69, v71, v4, 8);
    v4 = *(unsigned int *)(a2 + 16);
  }
  v5 = a2 + 8 * v4 + 96;
  v6 = (unsigned __int16 **)(a2 + 96);
  if ( v5 == a2 + 96 )
  {
LABEL_9:
    v63 = 0;
    v11 = (__m128)_mm_loadu_si128((const __m128i *)(a2 + 56));
    *(_OWORD *)v64 = 0;
    v65 = 0;
    sub_15AB8B0((__int64)&v63, v11.m128_i64[0], v11.m128_i64[1]);
    v14 = *(_QWORD *)(a2 + 88);
    v61 = _mm_loadu_si128((const __m128i *)(a2 + 72));
    v62 = v14;
    if ( v61.m128i_i64[0]
      && (sub_1947EF0(&v57, a1, &v61, (__m128)0LL, v11), v61 = _mm_loadu_si128(&v57), v62 = v58, !v57.m128i_i64[0]) )
    {
      v44 = 0;
    }
    else
    {
      v73 = 0x1000000000LL;
      v15 = v74;
      v16 = *(unsigned int *)(a2 + 16);
      v72 = v74;
      v17 = a2 + 32 * v16 + 96;
      v54 = (unsigned __int16 **)(v17 + 8 * v16);
      if ( (unsigned __int16 **)v17 == v54 )
      {
        v43 = 0;
      }
      else
      {
        v53 = (unsigned __int16 **)(a2 + 32 * v16 + 96);
        do
        {
          v18 = *v53;
          if ( *v53 )
          {
            v19 = v18 + 32;
            ptr = v68;
            v67 = 0x800000000LL;
            v22 = *v18;
            v20 = v18 + 40;
            v21 = *((unsigned int *)v18 + 1);
            LOWORD(v22) = v22 & 0x1FF;
            if ( (_WORD)v22 == 24 )
              v20 = v19;
            v51 = &v20[4 * v21];
            if ( v20 != v51 )
            {
              for ( i = v20; ; v20 = i )
              {
                v34 = a1[1];
                v30 = *(_QWORD *)v20 & 0xFFFFFFFFFFFFFFF8LL;
                v29 = v30;
                v35 = *((unsigned int *)a1 + 6);
                if ( (_DWORD)v35 )
                {
                  v24 = (v35 - 1) & (((unsigned int)v30 >> 9) ^ ((unsigned int)v30 >> 4));
                  v25 = (__int64 *)(v34 + 16LL * v24);
                  v26 = *v25;
                  if ( v30 == *v25 )
                    goto LABEL_19;
                  v46 = 1;
                  if ( v26 != -4096 )
                    break;
                }
LABEL_27:
                sub_AEAAD0(
                  &v60,
                  (_QWORD *)(v34 + 16LL * (unsigned int)v35),
                  (_QWORD *)(v34 + 16LL * (unsigned int)v35),
                  (__int64)(a1 + 1),
                  1);
                v27 = v60.m128_u64[0];
LABEL_20:
                v28 = (_QWORD *)(a1[1] + 16LL * *((unsigned int *)a1 + 6));
                sub_AEAAD0(&v60, v28, v28, (__int64)(a1 + 1), 1);
                if ( v27 != v60.m128_u64[0] )
                {
                  v29 = *(_QWORD *)(v27 + 8);
                  v30 = v29;
                }
                v31 = v30 | (*(_BYTE *)(v29 + 29) >> 5) & 3;
                v59 = v31;
                v22 = (unsigned int)v67;
                v32 = (unsigned int)v67 + 1LL;
                if ( v32 > HIDWORD(v67) )
                {
                  v56 = v31;
                  sub_2237220(&ptr, v68, v32, 8);
                  v22 = (unsigned int)v67;
                  v31 = v56;
                }
                v21 = (__int64)ptr;
                *((_QWORD *)ptr + v22) = v31;
                i += 4;
                v33 = (unsigned int)(v67 + 1);
                LODWORD(v67) = v67 + 1;
                if ( v51 == i )
                {
                  v36 = ptr;
                  v37 = (char *)ptr + 8 * v33;
                  goto LABEL_29;
                }
              }
              while ( 1 )
              {
                v47 = v46 + 1;
                v24 = (v35 - 1) & (v46 + v24);
                v25 = (__int64 *)(v34 + 16LL * v24);
                if ( v30 == *v25 )
                  break;
                if ( *v25 == -4096 )
                  goto LABEL_27;
                v46 = v47;
              }
LABEL_19:
              sub_AEAAD0(&v60, v25, (_QWORD *)(16 * v35 + v34), (__int64)(a1 + 1), 1);
              v27 = v60.m128_u64[0];
              goto LABEL_20;
            }
            v36 = v68;
            v37 = v68;
LABEL_29:
            v38 = sub_15AB9E0((__int64)&v63, *(_QWORD **)(*a1 + 248), v21, v22, v12, v13);
            v40 = sub_C98860(*(_QWORD **)(*a1 + 248), 0, v38, v39, &v61, 1, v36, (__int64)v37, 0, 0);
            v41 = (unsigned int)v73;
            v42 = (unsigned int)v73 + 1LL;
            if ( v42 > HIDWORD(v73) )
            {
              v52 = v40;
              sub_2237220(&v72, v74, v42, 8);
              v41 = (unsigned int)v73;
              v40 = v52;
            }
            *((_QWORD *)v72 + v41) = v40;
            LODWORD(v73) = v73 + 1;
            if ( ptr != v68 )
              free(ptr);
          }
          else
          {
            v48 = (unsigned int)v73;
            v49 = (unsigned int)v73 + 1LL;
            if ( v49 > HIDWORD(v73) )
            {
              sub_2237220(&v72, v74, v49, 8);
              v48 = (unsigned int)v73;
            }
            *((_QWORD *)v72 + v48) = 0;
            LODWORD(v73) = v73 + 1;
          }
          ++v53;
        }
        while ( v54 != v53 );
        v15 = v72;
        v43 = (unsigned int)v73;
      }
      v44 = sub_1B79350(
              *(_QWORD *)(*a1 + 760),
              (_DWORD)v69,
              v70,
              *(_DWORD *)a2,
              *(_DWORD *)(a2 + 12),
              *(_DWORD *)(a2 + 48),
              *(_DWORD *)(a2 + 4),
              (__int64)&v63,
              (__int64)&v61,
              (__int64)v15,
              v43);
      if ( v72 != v74 )
        free(v72);
    }
    if ( HIDWORD(v64[1]) )
      free(v64[0]);
  }
  else
  {
    while ( 1 )
    {
      v7 = sub_1944E10(a1, *v6, a3, a4);
      if ( v7 == 1 )
        break;
      v8 = (unsigned int)v70;
      v9 = v7 & 0xFFFFFFFFFFFFFFFELL;
      v10 = (unsigned int)v70 + 1LL;
      if ( v10 > HIDWORD(v70) )
      {
        v50 = v9;
        sub_2237220(&v69, v71, v10, 8);
        v8 = (unsigned int)v70;
        v9 = v50;
      }
      ++v6;
      *((_QWORD *)v69 + v8) = v9;
      LODWORD(v70) = v70 + 1;
      if ( (unsigned __int16 **)v5 == v6 )
        goto LABEL_9;
    }
    v44 = 0;
  }
  if ( v69 != v71 )
    free(v69);
  return v44;
}
