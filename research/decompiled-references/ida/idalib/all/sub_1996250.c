__int64 __fastcall sub_1996250(__int64 a1, int *a2, double a3, __m128 a4)
{
  int *v4; // rbx
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  unsigned __int16 **v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm1
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  unsigned __int16 **v22; // r13
  unsigned __int16 *v23; // rdx
  unsigned __int16 *v24; // rsi
  unsigned __int16 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  unsigned __int16 *v28; // r12
  unsigned __int16 *i; // rbx
  unsigned int v30; // ecx
  __int64 *v31; // rsi
  __int64 v32; // r8
  unsigned __int64 v33; // r14
  _QWORD *v34; // rdx
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // r13
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // rax
  __int64 v42; // rdx
  int v43; // esi
  int v44; // r9d
  _BYTE *v45; // rbx
  char *v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 v52; // rbx
  __int64 v54; // rax
  unsigned __int64 v55; // rdx
  __int64 v56; // [rsp+8h] [rbp-2A0h]
  unsigned __int64 v57; // [rsp+8h] [rbp-2A0h]
  unsigned __int16 **v58; // [rsp+28h] [rbp-280h]
  unsigned __int16 **v59; // [rsp+48h] [rbp-260h]
  int *v60; // [rsp+58h] [rbp-250h]
  __m128i v61; // [rsp+60h] [rbp-248h] BYREF
  __int64 v62; // [rsp+70h] [rbp-238h]
  unsigned __int64 v63; // [rsp+88h] [rbp-220h]
  _DWORD v64[3]; // [rsp+94h] [rbp-214h] BYREF
  __m128 v65; // [rsp+A0h] [rbp-208h] BYREF
  __m128i v66; // [rsp+B0h] [rbp-1F8h] BYREF
  __int64 v67; // [rsp+C0h] [rbp-1E8h]
  __int128 v68; // [rsp+D0h] [rbp-1D8h] BYREF
  void *v69[2]; // [rsp+E0h] [rbp-1C8h]
  __int128 v70; // [rsp+F0h] [rbp-1B8h]
  void *ptr; // [rsp+100h] [rbp-1A8h] BYREF
  __int64 v72; // [rsp+108h] [rbp-1A0h]
  _BYTE v73[64]; // [rsp+110h] [rbp-198h] BYREF
  void *v74; // [rsp+150h] [rbp-158h] BYREF
  __int64 v75; // [rsp+158h] [rbp-150h]
  _BYTE v76[128]; // [rsp+160h] [rbp-148h] BYREF
  void *v77; // [rsp+1E0h] [rbp-C8h] BYREF
  __int64 v78; // [rsp+1E8h] [rbp-C0h]
  _BYTE v79[184]; // [rsp+1F0h] [rbp-B8h] BYREF

  v4 = a2;
  v5 = a2[3];
  v6 = a2[1];
  v7 = *a2;
  v68 = 0;
  v64[1] = v5;
  v64[2] = v6;
  v77 = v79;
  v8 = (unsigned int)a2[4];
  v64[0] = v7;
  v74 = v76;
  v75 = 0x1000000000LL;
  *(_OWORD *)v69 = 0;
  v70 = 0;
  v66.m128i_i64[0] = 0;
  v66.m128i_i32[2] = 0;
  v67 = 0;
  v78 = 0x1000000000LL;
  if ( v8 > 0x10 )
  {
    sub_2237220(&v74, v76, v8, 8);
    v8 = (unsigned int)a2[4];
  }
  v9 = (__int64)&a2[2 * v8 + 26];
  v10 = (unsigned __int16 **)(a2 + 26);
  if ( (int *)v9 != a2 + 26 )
  {
    while ( 1 )
    {
      v11 = sub_190CCA0((__int64 *)a1, *v10, 0.0, a4);
      if ( v11 == 1 )
        goto LABEL_53;
      v12 = v11 & 0xFFFFFFFFFFFFFFFELL;
      v13 = (unsigned int)v75 + 1LL;
      if ( v13 <= HIDWORD(v75) )
      {
        ++v10;
        *((_QWORD *)v74 + (unsigned int)v75) = v12;
        LODWORD(v75) = v75 + 1;
        if ( (unsigned __int16 **)v9 == v10 )
          break;
      }
      else
      {
        ++v10;
        sub_2237220(&v74, v76, v13, 8);
        *((_QWORD *)v74 + (unsigned int)v75) = v12;
        LODWORD(v75) = v75 + 1;
        if ( (unsigned __int16 **)v9 == v10 )
          break;
      }
    }
  }
  v14 = *((_QWORD *)a2 + 5);
  v15 = 0;
  if ( v14 && (v14 = sub_198CB00(a1, v14, *((void **)v4 + 6), 0, 0)) == 0
    || (sub_15AB8B0((__int64)&v68, v14, v15),
        v18 = (__m128)_mm_loadu_si128((const __m128i *)(v4 + 14)),
        v19 = *((_QWORD *)v4 + 9),
        v20 = *((_QWORD *)v4 + 7),
        v66 = (__m128i)v18,
        v67 = v19,
        v20)
    && (sub_1989150(&v61, (__int64 *)a1, &v66, (__m128)0LL, v18),
        v66 = _mm_loadu_si128(&v61),
        v67 = v62,
        !v61.m128i_i64[0]) )
  {
LABEL_53:
    v52 = 0;
    goto LABEL_42;
  }
  v21 = 2LL * (unsigned int)v4[4];
  v59 = (unsigned __int16 **)&v4[v21 + 26 + v21];
  if ( v59 != (unsigned __int16 **)&v4[v21 + 26] )
  {
    v60 = v4;
    v22 = (unsigned __int16 **)&v4[v21 + 26];
    do
    {
      v23 = *v22;
      if ( *v22 )
      {
        v24 = v23 + 32;
        ptr = v73;
        v72 = 0x800000000LL;
        v27 = *v23;
        v25 = v23 + 40;
        v26 = *((unsigned int *)v23 + 1);
        LOWORD(v27) = v27 & 0x1FF;
        if ( (_WORD)v27 == 24 )
          v25 = v24;
        v28 = &v25[4 * v26];
        if ( v25 != v28 )
        {
          v58 = v22;
          v56 = a1 + 8;
          for ( i = v25 + 4; ; i += 4 )
          {
            v40 = *(_QWORD *)v25;
            v41 = *(unsigned int *)(a1 + 24);
            v42 = *(_QWORD *)(a1 + 8);
            v35 = v40 & 0xFFFFFFFFFFFFFFF8LL;
            v36 = v35;
            if ( (_DWORD)v41 )
            {
              v30 = (v41 - 1) & (((unsigned int)v35 >> 9) ^ ((unsigned int)v35 >> 4));
              v31 = (__int64 *)(v42 + 16LL * v30);
              v32 = *v31;
              if ( v35 == *v31 )
                goto LABEL_21;
              v43 = 1;
              if ( v32 != -4096 )
                break;
            }
LABEL_29:
            sub_AEAAD0(
              &v65,
              (_QWORD *)(v42 + 16LL * (unsigned int)v41),
              (_QWORD *)(v42 + 16LL * (unsigned int)v41),
              v56,
              1);
            v33 = v65.m128_u64[0];
LABEL_22:
            v34 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
            sub_AEAAD0(&v65, v34, v34, v56, 1);
            if ( v65.m128_u64[0] != v33 )
            {
              v35 = *(_QWORD *)(v33 + 8);
              v36 = v35;
            }
            v37 = v36 | (*(_BYTE *)(v35 + 29) >> 5) & 3;
            v63 = v37;
            v27 = HIDWORD(v72);
            v38 = (unsigned int)v72 + 1LL;
            if ( v38 > HIDWORD(v72) )
            {
              sub_2237220(&ptr, v73, v38, 8);
              v26 = (unsigned int)v72;
            }
            else
            {
              v26 = (__int64)ptr;
            }
            *((_QWORD *)ptr + (unsigned int)v72) = v37;
            v39 = (unsigned int)(v72 + 1);
            LODWORD(v72) = v72 + 1;
            if ( v28 == i )
            {
              v45 = ptr;
              v22 = v58;
              v46 = (char *)ptr + 8 * v39;
              goto LABEL_35;
            }
            v25 = i;
          }
          while ( 1 )
          {
            v44 = v43 + 1;
            v30 = (v41 - 1) & (v43 + v30);
            v31 = (__int64 *)(v42 + 16LL * v30);
            if ( v35 == *v31 )
              break;
            if ( *v31 == -4096 )
              goto LABEL_29;
            v43 = v44;
          }
LABEL_21:
          sub_AEAAD0(&v65, v31, (_QWORD *)(16 * v41 + v42), v56, 1);
          v33 = v65.m128_u64[0];
          goto LABEL_22;
        }
        v45 = v73;
        v46 = v73;
LABEL_35:
        v47 = sub_15AB9E0((__int64)&v68, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v26, v27, v16, v17);
        v49 = sub_C98860(*(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, v47, v48, &v66, 1, v45, (__int64)v46, 0, 0);
        v50 = (unsigned int)v78;
        v51 = (unsigned int)v78 + 1LL;
        if ( v51 > HIDWORD(v78) )
        {
          v57 = v49;
          sub_2237220(&v77, v79, v51, 8);
          v50 = (unsigned int)v78;
          v49 = v57;
        }
        *((_QWORD *)v77 + v50) = v49;
        LODWORD(v78) = v78 + 1;
        if ( ptr != v73 )
          free(ptr);
      }
      else
      {
        v54 = (unsigned int)v78;
        v55 = (unsigned int)v78 + 1LL;
        if ( v55 > HIDWORD(v78) )
        {
          sub_2237220(&v77, v79, v55, 8);
          v54 = (unsigned int)v78;
        }
        *((_QWORD *)v77 + v54) = 0;
        LODWORD(v78) = v78 + 1;
      }
      ++v22;
    }
    while ( v59 != v22 );
    v4 = v60;
  }
  v52 = sub_1B606F0(
          *(_QWORD *)(*(_QWORD *)a1 + 760LL),
          (int)v4 + 80,
          2,
          (int)v4 + 88,
          2,
          (unsigned int)&v68,
          (__int64)&v66,
          v4[24],
          (__int64)v74,
          (unsigned int)v75,
          (__int64)v64,
          (__int64)v77,
          (unsigned int)v78);
LABEL_42:
  if ( v77 != v79 )
    free(v77);
  if ( HIDWORD(v69[1]) )
    free(v69[0]);
  if ( v74 != v76 )
    free(v74);
  return v52;
}
