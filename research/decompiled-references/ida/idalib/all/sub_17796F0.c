__int64 __fastcall sub_17796F0(__int64 a1, int *a2)
{
  int *v2; // rbx
  int v3; // edx
  int v4; // eax
  int v5; // ecx
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  unsigned __int16 **v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned __int16 **v19; // r13
  unsigned __int16 *v20; // rdx
  unsigned __int16 *v21; // rsi
  unsigned __int16 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned __int16 *v25; // r12
  unsigned __int16 *i; // rbx
  unsigned int v27; // ecx
  __int64 *v28; // rsi
  __int64 v29; // r8
  unsigned __int64 v30; // r14
  _QWORD *v31; // rdx
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // r13
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rdx
  int v40; // esi
  int v41; // r9d
  _BYTE *v42; // rbx
  char *v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned __int64 v46; // rax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int64 v49; // rbx
  __int64 v51; // rax
  unsigned __int64 v52; // rdx
  __int64 v53; // [rsp+8h] [rbp-2A0h]
  unsigned __int64 v54; // [rsp+8h] [rbp-2A0h]
  unsigned __int16 **v55; // [rsp+28h] [rbp-280h]
  unsigned __int16 **v56; // [rsp+48h] [rbp-260h]
  int *v57; // [rsp+58h] [rbp-250h]
  __m128i v58; // [rsp+60h] [rbp-248h] BYREF
  __int64 v59; // [rsp+70h] [rbp-238h]
  unsigned __int64 v60; // [rsp+88h] [rbp-220h]
  _DWORD v61[3]; // [rsp+94h] [rbp-214h] BYREF
  __m128 v62; // [rsp+A0h] [rbp-208h] BYREF
  __m128i v63; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-1E8h]
  __int128 v65; // [rsp+D0h] [rbp-1D8h] BYREF
  void *v66[2]; // [rsp+E0h] [rbp-1C8h]
  __int128 v67; // [rsp+F0h] [rbp-1B8h]
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v69; // [rsp+108h] [rbp-1A0h]
  _BYTE v70[64]; // [rsp+110h] [rbp-198h] BYREF
  void *v71; // [rsp+150h] [rbp-158h] BYREF
  __int64 v72; // [rsp+158h] [rbp-150h]
  _BYTE v73[128]; // [rsp+160h] [rbp-148h] BYREF
  void *v74; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+1E8h] [rbp-C0h]
  _BYTE v76[184]; // [rsp+1F0h] [rbp-B8h] BYREF

  v2 = a2;
  v3 = a2[3];
  v4 = a2[1];
  v5 = *a2;
  v65 = 0;
  v61[1] = v3;
  v61[2] = v4;
  v74 = v76;
  v6 = (unsigned int)a2[4];
  v61[0] = v5;
  v71 = v73;
  v72 = 0x1000000000LL;
  *(_OWORD *)v66 = 0;
  v67 = 0;
  v63.m128i_i64[0] = 0;
  v63.m128i_i32[2] = 0;
  v64 = 0;
  v75 = 0x1000000000LL;
  if ( v6 > 0x10 )
  {
    sub_2237220(&v71, v73, v6, 8);
    v6 = (unsigned int)a2[4];
  }
  v7 = (__int64)&a2[2 * v6 + 26];
  v8 = (unsigned __int16 **)(a2 + 26);
  if ( (int *)v7 != a2 + 26 )
  {
    while ( 1 )
    {
      v9 = sub_175B800((__int64 *)a1, *v8);
      if ( v9 == 1 )
        goto LABEL_53;
      v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
      v11 = (unsigned int)v72 + 1LL;
      if ( v11 <= HIDWORD(v72) )
      {
        ++v8;
        *((_QWORD *)v71 + (unsigned int)v72) = v10;
        LODWORD(v72) = v72 + 1;
        if ( (unsigned __int16 **)v7 == v8 )
          break;
      }
      else
      {
        ++v8;
        sub_2237220(&v71, v73, v11, 8);
        *((_QWORD *)v71 + (unsigned int)v72) = v10;
        LODWORD(v72) = v72 + 1;
        if ( (unsigned __int16 **)v7 == v8 )
          break;
      }
    }
  }
  v12 = *((_QWORD *)a2 + 5);
  v13 = 0;
  if ( v12 && (v12 = sub_176EE90((__int64 *)a1, v12, *((void **)v2 + 6), 0, 0)) == 0
    || (sub_15AB8B0((__int64)&v65, v12, v13),
        v16 = *((_QWORD *)v2 + 9),
        v17 = *((_QWORD *)v2 + 7),
        v63 = _mm_loadu_si128((const __m128i *)(v2 + 14)),
        v64 = v16,
        v17)
    && (sub_176AF20(&v58, (_QWORD *)a1, &v63, (__m128)0LL), v63 = _mm_loadu_si128(&v58), v64 = v59, !v58.m128i_i64[0]) )
  {
LABEL_53:
    v49 = 0;
    goto LABEL_42;
  }
  v18 = 2LL * (unsigned int)v2[4];
  v56 = (unsigned __int16 **)&v2[v18 + 26 + v18];
  if ( v56 != (unsigned __int16 **)&v2[v18 + 26] )
  {
    v57 = v2;
    v19 = (unsigned __int16 **)&v2[v18 + 26];
    do
    {
      v20 = *v19;
      if ( *v19 )
      {
        v21 = v20 + 32;
        ptr = v70;
        v69 = 0x800000000LL;
        v24 = *v20;
        v22 = v20 + 40;
        v23 = *((unsigned int *)v20 + 1);
        LOWORD(v24) = v24 & 0x1FF;
        if ( (_WORD)v24 == 24 )
          v22 = v21;
        v25 = &v22[4 * v23];
        if ( v22 != v25 )
        {
          v55 = v19;
          v53 = a1 + 8;
          for ( i = v22 + 4; ; i += 4 )
          {
            v37 = *(_QWORD *)v22;
            v38 = *(unsigned int *)(a1 + 24);
            v39 = *(_QWORD *)(a1 + 8);
            v32 = v37 & 0xFFFFFFFFFFFFFFF8LL;
            v33 = v32;
            if ( (_DWORD)v38 )
            {
              v27 = (v38 - 1) & (((unsigned int)v32 >> 9) ^ ((unsigned int)v32 >> 4));
              v28 = (__int64 *)(v39 + 16LL * v27);
              v29 = *v28;
              if ( v32 == *v28 )
                goto LABEL_21;
              v40 = 1;
              if ( v29 != -4096 )
                break;
            }
LABEL_29:
            sub_AEAAD0(
              &v62,
              (_QWORD *)(v39 + 16LL * (unsigned int)v38),
              (_QWORD *)(v39 + 16LL * (unsigned int)v38),
              v53,
              1);
            v30 = v62.m128_u64[0];
LABEL_22:
            v31 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
            sub_AEAAD0(&v62, v31, v31, v53, 1);
            if ( v62.m128_u64[0] != v30 )
            {
              v32 = *(_QWORD *)(v30 + 8);
              v33 = v32;
            }
            v34 = v33 | (*(_BYTE *)(v32 + 29) >> 5) & 3;
            v60 = v34;
            v24 = HIDWORD(v69);
            v35 = (unsigned int)v69 + 1LL;
            if ( v35 > HIDWORD(v69) )
            {
              sub_2237220(&ptr, v70, v35, 8);
              v23 = (unsigned int)v69;
            }
            else
            {
              v23 = (__int64)ptr;
            }
            *((_QWORD *)ptr + (unsigned int)v69) = v34;
            v36 = (unsigned int)(v69 + 1);
            LODWORD(v69) = v69 + 1;
            if ( v25 == i )
            {
              v42 = ptr;
              v19 = v55;
              v43 = (char *)ptr + 8 * v36;
              goto LABEL_35;
            }
            v22 = i;
          }
          while ( 1 )
          {
            v41 = v40 + 1;
            v27 = (v38 - 1) & (v40 + v27);
            v28 = (__int64 *)(v39 + 16LL * v27);
            if ( v32 == *v28 )
              break;
            if ( *v28 == -4096 )
              goto LABEL_29;
            v40 = v41;
          }
LABEL_21:
          sub_AEAAD0(&v62, v28, (_QWORD *)(16 * v38 + v39), v53, 1);
          v30 = v62.m128_u64[0];
          goto LABEL_22;
        }
        v42 = v70;
        v43 = v70;
LABEL_35:
        v44 = sub_15AB9E0((__int64)&v65, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v23, v24, v14, v15);
        v46 = sub_C98860(*(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, v44, v45, &v63, 1, v42, (__int64)v43, 0, 0);
        v47 = (unsigned int)v75;
        v48 = (unsigned int)v75 + 1LL;
        if ( v48 > HIDWORD(v75) )
        {
          v54 = v46;
          sub_2237220(&v74, v76, v48, 8);
          v47 = (unsigned int)v75;
          v46 = v54;
        }
        *((_QWORD *)v74 + v47) = v46;
        LODWORD(v75) = v75 + 1;
        if ( ptr != v70 )
          free(ptr);
      }
      else
      {
        v51 = (unsigned int)v75;
        v52 = (unsigned int)v75 + 1LL;
        if ( v52 > HIDWORD(v75) )
        {
          sub_2237220(&v74, v76, v52, 8);
          v51 = (unsigned int)v75;
        }
        *((_QWORD *)v74 + v51) = 0;
        LODWORD(v75) = v75 + 1;
      }
      ++v19;
    }
    while ( v56 != v19 );
    v2 = v57;
  }
  v49 = sub_1B606F0(
          *(_QWORD *)(*(_QWORD *)a1 + 760LL),
          (int)v2 + 80,
          2,
          (int)v2 + 88,
          2,
          (unsigned int)&v65,
          (__int64)&v63,
          v2[24],
          (__int64)v71,
          (unsigned int)v72,
          (__int64)v61,
          (__int64)v74,
          (unsigned int)v75);
LABEL_42:
  if ( v74 != v76 )
    free(v74);
  if ( HIDWORD(v66[1]) )
    free(v66[0]);
  if ( v71 != v73 )
    free(v71);
  return v49;
}
