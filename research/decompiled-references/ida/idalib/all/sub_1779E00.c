__int64 __fastcall sub_1779E00(__int64 a1, int *a2)
{
  int *v2; // rbx
  int v3; // edx
  int v4; // ecx
  int v5; // eax
  unsigned __int16 *v6; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  __int64 v10; // rbp
  unsigned __int16 **v11; // r13
  __int64 v12; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
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
  void *v45; // rbx
  void **v46; // rbp
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  int v52; // r14d
  int v53; // r13d
  int v54; // r12d
  int v55; // ebp
  __m128i v56; // xmm1
  __int64 v57; // r10
  __m128i v58; // xmm2
  __int64 v59; // rbx
  __int64 v61; // rax
  unsigned __int64 v62; // rdx
  __int64 v63; // [rsp+8h] [rbp-2C0h]
  void *v64; // [rsp+8h] [rbp-2C0h]
  unsigned __int64 v65; // [rsp+8h] [rbp-2C0h]
  __int64 v66; // [rsp+18h] [rbp-2B0h]
  unsigned __int16 **v67; // [rsp+30h] [rbp-298h]
  void *v68; // [rsp+30h] [rbp-298h]
  int v69; // [rsp+38h] [rbp-290h]
  __int64 v70; // [rsp+40h] [rbp-288h]
  unsigned __int16 **v71; // [rsp+50h] [rbp-278h]
  int *v72; // [rsp+60h] [rbp-268h]
  __m128i v73; // [rsp+70h] [rbp-258h] BYREF
  __int64 v74; // [rsp+80h] [rbp-248h]
  unsigned __int64 v75; // [rsp+98h] [rbp-230h]
  _DWORD v76[3]; // [rsp+A4h] [rbp-224h] BYREF
  __m128i v77; // [rsp+B0h] [rbp-218h] BYREF
  __int64 v78; // [rsp+C0h] [rbp-208h]
  __m128 v79; // [rsp+D0h] [rbp-1F8h] BYREF
  __int64 v80; // [rsp+E0h] [rbp-1E8h]
  __int128 v81; // [rsp+F0h] [rbp-1D8h] BYREF
  void *v82[2]; // [rsp+100h] [rbp-1C8h]
  __m128i v83; // [rsp+110h] [rbp-1B8h] BYREF
  void *ptr; // [rsp+120h] [rbp-1A8h] BYREF
  __int64 v85; // [rsp+128h] [rbp-1A0h] BYREF
  void *v86; // [rsp+130h] [rbp-198h] BYREF
  int v87; // [rsp+13Ch] [rbp-18Ch]
  __m128i v88; // [rsp+140h] [rbp-188h]
  void *v89; // [rsp+170h] [rbp-158h] BYREF
  __int64 v90; // [rsp+178h] [rbp-150h]
  _BYTE v91[128]; // [rsp+180h] [rbp-148h] BYREF
  void *v92; // [rsp+200h] [rbp-C8h] BYREF
  __int64 v93; // [rsp+208h] [rbp-C0h]
  _BYTE v94[184]; // [rsp+210h] [rbp-B8h] BYREF

  v2 = a2;
  v3 = a2[3];
  v4 = *a2;
  v76[2] = a2[1];
  v89 = v91;
  v90 = 0x1000000000LL;
  v5 = a2[4];
  v76[0] = v4;
  v76[1] = v3;
  v6 = *(unsigned __int16 **)&a2[4 * v5 + 38];
  v69 = (int)v6;
  if ( v6 )
  {
    v7 = sub_175B800((__int64 *)a1, v6);
    if ( v7 == 1 )
    {
      v59 = 0;
      goto LABEL_50;
    }
    v69 = v7 & 0xFFFFFFFE;
    v8 = HIDWORD(v90);
  }
  else
  {
    v8 = 16;
  }
  v77.m128i_i64[0] = 0;
  v92 = v94;
  v9 = (unsigned int)a2[4];
  v81 = 0;
  *(_OWORD *)v82 = 0;
  v83 = 0;
  v77.m128i_i32[2] = 0;
  v78 = 0;
  v93 = 0x1000000000LL;
  if ( v9 > v8 )
  {
    sub_2237220(&v89, v91, v9, 8);
    v9 = (unsigned int)a2[4];
  }
  v10 = (__int64)&a2[2 * v9 + 38];
  v11 = (unsigned __int16 **)(a2 + 38);
  if ( (int *)v10 == a2 + 38 )
  {
LABEL_12:
    v15 = *((_QWORD *)a2 + 5);
    v16 = 0;
    if ( !v15 || (v15 = sub_176EE90((__int64 *)a1, v15, *((void **)v2 + 6), 0, 0)) != 0 )
    {
      sub_15AB8B0((__int64)&v81, v15, v16);
      v19 = *((_QWORD *)v2 + 9);
      v20 = *((_QWORD *)v2 + 7);
      v77 = _mm_loadu_si128((const __m128i *)(v2 + 14));
      v78 = v19;
      if ( !v20
        || (sub_176AF20(&v73, (_QWORD *)a1, &v77, (__m128)0LL), v77 = _mm_loadu_si128(&v73), v78 = v74, v73.m128i_i64[0]) )
      {
        v21 = 2LL * (unsigned int)v2[4];
        v71 = (unsigned __int16 **)&v2[v21 + 38 + v21];
        if ( v71 != (unsigned __int16 **)&v2[v21 + 38] )
        {
          v72 = v2;
          v22 = (unsigned __int16 **)&v2[v21 + 38];
          do
          {
            v23 = *v22;
            if ( *v22 )
            {
              v24 = v23 + 32;
              ptr = &v86;
              v85 = 0x800000000LL;
              v27 = *v23;
              v25 = v23 + 40;
              v26 = *((unsigned int *)v23 + 1);
              LOWORD(v27) = v27 & 0x1FF;
              if ( (_WORD)v27 == 24 )
                v25 = v24;
              v28 = &v25[4 * v26];
              if ( v25 != v28 )
              {
                v67 = v22;
                v63 = a1 + 8;
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
                      goto LABEL_24;
                    v43 = 1;
                    if ( v32 != -4096 )
                      break;
                  }
LABEL_32:
                  sub_AEAAD0(
                    &v79,
                    (_QWORD *)(v42 + 16LL * (unsigned int)v41),
                    (_QWORD *)(v42 + 16LL * (unsigned int)v41),
                    v63,
                    1);
                  v33 = v79.m128_u64[0];
LABEL_25:
                  v34 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
                  sub_AEAAD0(&v79, v34, v34, v63, 1);
                  if ( v79.m128_u64[0] != v33 )
                  {
                    v35 = *(_QWORD *)(v33 + 8);
                    v36 = v35;
                  }
                  v37 = v36 | (*(_BYTE *)(v35 + 29) >> 5) & 3;
                  v75 = v37;
                  v27 = HIDWORD(v85);
                  v38 = (unsigned int)v85 + 1LL;
                  if ( v38 > HIDWORD(v85) )
                  {
                    sub_2237220(&ptr, &v86, v38, 8);
                    v26 = (unsigned int)v85;
                  }
                  else
                  {
                    v26 = (__int64)ptr;
                  }
                  *((_QWORD *)ptr + (unsigned int)v85) = v37;
                  v39 = (unsigned int)(v85 + 1);
                  LODWORD(v85) = v85 + 1;
                  if ( v28 == i )
                  {
                    v45 = ptr;
                    v22 = v67;
                    v46 = (void **)((char *)ptr + 8 * v39);
                    goto LABEL_38;
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
                    goto LABEL_32;
                  v43 = v44;
                }
LABEL_24:
                sub_AEAAD0(&v79, v31, (_QWORD *)(16 * v41 + v42), v63, 1);
                v33 = v79.m128_u64[0];
                goto LABEL_25;
              }
              v45 = &v86;
              v46 = &v86;
LABEL_38:
              v47 = sub_15AB9E0((__int64)&v81, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v26, v27, v17, v18);
              v49 = sub_C98860(*(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, v47, v48, &v77, 1, v45, (__int64)v46, 0, 0);
              v50 = (unsigned int)v93;
              v51 = (unsigned int)v93 + 1LL;
              if ( v51 > HIDWORD(v93) )
              {
                v65 = v49;
                sub_2237220(&v92, v94, v51, 8);
                v50 = (unsigned int)v93;
                v49 = v65;
              }
              *((_QWORD *)v92 + v50) = v49;
              LODWORD(v93) = v93 + 1;
              if ( ptr != &v86 )
                free(ptr);
            }
            else
            {
              v61 = (unsigned int)v93;
              v62 = (unsigned int)v93 + 1LL;
              if ( v62 > HIDWORD(v93) )
              {
                sub_2237220(&v92, v94, v62, 8);
                v61 = (unsigned int)v93;
              }
              *((_QWORD *)v92 + v61) = 0;
              LODWORD(v93) = v93 + 1;
            }
            ++v22;
          }
          while ( v71 != v22 );
          v2 = v72;
        }
        v68 = v92;
        v66 = (unsigned int)v90;
        ptr = (void *)v81;
        v64 = v89;
        v52 = v2[37];
        v70 = (unsigned int)v93;
        v53 = v2[36];
        v54 = *((unsigned __int8 *)v2 + 140);
        v55 = v2[34];
        sub_E90750((__int64)&v85, (__int64 *)&v81 + 1);
        v56 = _mm_load_si128(&v83);
        v57 = *(_QWORD *)(*(_QWORD *)a1 + 760LL);
        v80 = v78;
        v58 = _mm_load_si128(&v77);
        v88 = v56;
        v79 = (__m128)v58;
        v59 = sub_1B64ED0(
                v57,
                v69,
                (int)v2 + 80,
                7,
                (int)v2 + 108,
                7,
                (__int64)&ptr,
                (__int64)&v79,
                v55,
                v54,
                v53,
                v52,
                (__int64)v64,
                v66,
                (__int64)v76,
                0,
                (__int64)v68,
                v70);
        if ( v87 )
          free(v86);
        goto LABEL_46;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v12 = sub_175B800((__int64 *)a1, *v11);
      if ( v12 == 1 )
        break;
      v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
      v14 = (unsigned int)v90 + 1LL;
      if ( v14 <= HIDWORD(v90) )
      {
        ++v11;
        *((_QWORD *)v89 + (unsigned int)v90) = v13;
        LODWORD(v90) = v90 + 1;
        if ( (unsigned __int16 **)v10 == v11 )
          goto LABEL_12;
      }
      else
      {
        ++v11;
        sub_2237220(&v89, v91, v14, 8);
        *((_QWORD *)v89 + (unsigned int)v90) = v13;
        LODWORD(v90) = v90 + 1;
        if ( (unsigned __int16 **)v10 == v11 )
          goto LABEL_12;
      }
    }
  }
  v59 = 0;
LABEL_46:
  if ( v92 != v94 )
    free(v92);
  if ( HIDWORD(v82[1]) )
    free(v82[0]);
LABEL_50:
  if ( v89 != v91 )
    free(v89);
  return v59;
}
