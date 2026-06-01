__int64 __fastcall sub_19736B0(__int64 a1, int *a2, double a3, __m128 a4)
{
  int *v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // eax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // rbp
  unsigned __int64 *v13; // r13
  __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int16 **v24; // r13
  unsigned __int16 *v25; // rdx
  unsigned __int16 *v26; // rsi
  unsigned __int16 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int16 *v30; // r12
  unsigned __int16 *i; // rbx
  unsigned int v32; // ecx
  __int64 *v33; // rsi
  __int64 v34; // r8
  unsigned __int64 v35; // r14
  _QWORD *v36; // rdx
  unsigned __int64 v37; // rbp
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rbp
  unsigned __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rbp
  __int64 v43; // rax
  __int64 v44; // rdx
  int v45; // esi
  int v46; // r9d
  void *v47; // rbx
  void **v48; // rbp
  __int64 v49; // rax
  __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  int v54; // r14d
  int v55; // r13d
  int v56; // r12d
  int v57; // ebp
  __m128i v58; // xmm1
  __int64 v59; // r10
  __m128i v60; // xmm2
  __int64 v61; // rbx
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int64 v65; // [rsp+8h] [rbp-2C0h]
  void *v66; // [rsp+8h] [rbp-2C0h]
  unsigned __int64 v67; // [rsp+8h] [rbp-2C0h]
  __int64 v68; // [rsp+18h] [rbp-2B0h]
  unsigned __int16 **v69; // [rsp+30h] [rbp-298h]
  void *v70; // [rsp+30h] [rbp-298h]
  int v71; // [rsp+38h] [rbp-290h]
  __int64 v72; // [rsp+40h] [rbp-288h]
  unsigned __int16 **v73; // [rsp+50h] [rbp-278h]
  int *v74; // [rsp+60h] [rbp-268h]
  __m128i v75; // [rsp+70h] [rbp-258h] BYREF
  __int64 v76; // [rsp+80h] [rbp-248h]
  unsigned __int64 v77; // [rsp+98h] [rbp-230h]
  _DWORD v78[3]; // [rsp+A4h] [rbp-224h] BYREF
  __m128i v79; // [rsp+B0h] [rbp-218h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-208h]
  __m128 v81; // [rsp+D0h] [rbp-1F8h] BYREF
  __int64 v82; // [rsp+E0h] [rbp-1E8h]
  __int128 v83; // [rsp+F0h] [rbp-1D8h] BYREF
  void *v84[2]; // [rsp+100h] [rbp-1C8h]
  __m128i v85; // [rsp+110h] [rbp-1B8h] BYREF
  void *ptr; // [rsp+120h] [rbp-1A8h] BYREF
  __int64 v87; // [rsp+128h] [rbp-1A0h] BYREF
  void *v88; // [rsp+130h] [rbp-198h] BYREF
  int v89; // [rsp+13Ch] [rbp-18Ch]
  __m128i v90; // [rsp+140h] [rbp-188h]
  void *v91; // [rsp+170h] [rbp-158h] BYREF
  __int64 v92; // [rsp+178h] [rbp-150h]
  _BYTE v93[128]; // [rsp+180h] [rbp-148h] BYREF
  void *v94; // [rsp+200h] [rbp-C8h] BYREF
  __int64 v95; // [rsp+208h] [rbp-C0h]
  _BYTE v96[184]; // [rsp+210h] [rbp-B8h] BYREF

  v4 = a2;
  v5 = a2[3];
  v6 = *a2;
  v78[2] = a2[1];
  v91 = v93;
  v92 = 0x1000000000LL;
  v7 = a2[4];
  v78[0] = v6;
  v78[1] = v5;
  v8 = *(_QWORD *)&a2[4 * v7 + 38];
  v71 = v8;
  if ( v8 )
  {
    v9 = sub_1933BC0((__int64 *)a1, v8, a3, a4);
    if ( v9 == 1 )
    {
      v61 = 0;
      goto LABEL_50;
    }
    v71 = v9 & 0xFFFFFFFE;
    v10 = HIDWORD(v92);
  }
  else
  {
    v10 = 16;
  }
  v79.m128i_i64[0] = 0;
  v94 = v96;
  v11 = (unsigned int)a2[4];
  v83 = 0;
  *(_OWORD *)v84 = 0;
  v85 = 0;
  v79.m128i_i32[2] = 0;
  v80 = 0;
  v95 = 0x1000000000LL;
  if ( v11 > v10 )
  {
    sub_2237220(&v91, v93, v11, 8);
    v11 = (unsigned int)a2[4];
  }
  v12 = (__int64)&a2[2 * v11 + 38];
  v13 = (unsigned __int64 *)(a2 + 38);
  if ( (int *)v12 == a2 + 38 )
  {
LABEL_12:
    v17 = *((_QWORD *)a2 + 5);
    v18 = 0;
    if ( !v17 || (v17 = sub_1969B50(a1, v17, *((void **)v4 + 6), 0, 0)) != 0 )
    {
      sub_15AB8B0((__int64)&v83, v17, v18);
      v21 = *((_QWORD *)v4 + 9);
      v22 = *((_QWORD *)v4 + 7);
      v79 = _mm_loadu_si128((const __m128i *)(v4 + 14));
      v80 = v21;
      if ( !v22
        || (sub_19431F0(&v75, (__int64 *)a1, &v79, (__m128)0LL, a4),
            v79 = _mm_loadu_si128(&v75),
            v80 = v76,
            v75.m128i_i64[0]) )
      {
        v23 = 2LL * (unsigned int)v4[4];
        v73 = (unsigned __int16 **)&v4[v23 + 38 + v23];
        if ( v73 != (unsigned __int16 **)&v4[v23 + 38] )
        {
          v74 = v4;
          v24 = (unsigned __int16 **)&v4[v23 + 38];
          do
          {
            v25 = *v24;
            if ( *v24 )
            {
              v26 = v25 + 32;
              ptr = &v88;
              v87 = 0x800000000LL;
              v29 = *v25;
              v27 = v25 + 40;
              v28 = *((unsigned int *)v25 + 1);
              LOWORD(v29) = v29 & 0x1FF;
              if ( (_WORD)v29 == 24 )
                v27 = v26;
              v30 = &v27[4 * v28];
              if ( v27 != v30 )
              {
                v69 = v24;
                v65 = a1 + 8;
                for ( i = v27 + 4; ; i += 4 )
                {
                  v42 = *(_QWORD *)v27;
                  v43 = *(unsigned int *)(a1 + 24);
                  v44 = *(_QWORD *)(a1 + 8);
                  v37 = v42 & 0xFFFFFFFFFFFFFFF8LL;
                  v38 = v37;
                  if ( (_DWORD)v43 )
                  {
                    v32 = (v43 - 1) & (((unsigned int)v37 >> 9) ^ ((unsigned int)v37 >> 4));
                    v33 = (__int64 *)(v44 + 16LL * v32);
                    v34 = *v33;
                    if ( v37 == *v33 )
                      goto LABEL_24;
                    v45 = 1;
                    if ( v34 != -4096 )
                      break;
                  }
LABEL_32:
                  sub_AEAAD0(
                    &v81,
                    (_QWORD *)(v44 + 16LL * (unsigned int)v43),
                    (_QWORD *)(v44 + 16LL * (unsigned int)v43),
                    v65,
                    1);
                  v35 = v81.m128_u64[0];
LABEL_25:
                  v36 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
                  sub_AEAAD0(&v81, v36, v36, v65, 1);
                  if ( v81.m128_u64[0] != v35 )
                  {
                    v37 = *(_QWORD *)(v35 + 8);
                    v38 = v37;
                  }
                  v39 = v38 | (*(_BYTE *)(v37 + 29) >> 5) & 3;
                  v77 = v39;
                  v29 = HIDWORD(v87);
                  v40 = (unsigned int)v87 + 1LL;
                  if ( v40 > HIDWORD(v87) )
                  {
                    sub_2237220(&ptr, &v88, v40, 8);
                    v28 = (unsigned int)v87;
                  }
                  else
                  {
                    v28 = (__int64)ptr;
                  }
                  *((_QWORD *)ptr + (unsigned int)v87) = v39;
                  v41 = (unsigned int)(v87 + 1);
                  LODWORD(v87) = v87 + 1;
                  if ( v30 == i )
                  {
                    v47 = ptr;
                    v24 = v69;
                    v48 = (void **)((char *)ptr + 8 * v41);
                    goto LABEL_38;
                  }
                  v27 = i;
                }
                while ( 1 )
                {
                  v46 = v45 + 1;
                  v32 = (v43 - 1) & (v45 + v32);
                  v33 = (__int64 *)(v44 + 16LL * v32);
                  if ( v37 == *v33 )
                    break;
                  if ( *v33 == -4096 )
                    goto LABEL_32;
                  v45 = v46;
                }
LABEL_24:
                sub_AEAAD0(&v81, v33, (_QWORD *)(16 * v43 + v44), v65, 1);
                v35 = v81.m128_u64[0];
                goto LABEL_25;
              }
              v47 = &v88;
              v48 = &v88;
LABEL_38:
              v49 = sub_15AB9E0((__int64)&v83, *(_QWORD **)(*(_QWORD *)a1 + 248LL), v28, v29, v19, v20);
              v51 = sub_C98860(*(_QWORD **)(*(_QWORD *)a1 + 248LL), 0, v49, v50, &v79, 1, v47, (__int64)v48, 0, 0);
              v52 = (unsigned int)v95;
              v53 = (unsigned int)v95 + 1LL;
              if ( v53 > HIDWORD(v95) )
              {
                v67 = v51;
                sub_2237220(&v94, v96, v53, 8);
                v52 = (unsigned int)v95;
                v51 = v67;
              }
              *((_QWORD *)v94 + v52) = v51;
              LODWORD(v95) = v95 + 1;
              if ( ptr != &v88 )
                free(ptr);
            }
            else
            {
              v63 = (unsigned int)v95;
              v64 = (unsigned int)v95 + 1LL;
              if ( v64 > HIDWORD(v95) )
              {
                sub_2237220(&v94, v96, v64, 8);
                v63 = (unsigned int)v95;
              }
              *((_QWORD *)v94 + v63) = 0;
              LODWORD(v95) = v95 + 1;
            }
            ++v24;
          }
          while ( v73 != v24 );
          v4 = v74;
        }
        v70 = v94;
        v68 = (unsigned int)v92;
        ptr = (void *)v83;
        v66 = v91;
        v54 = v4[37];
        v72 = (unsigned int)v95;
        v55 = v4[36];
        v56 = *((unsigned __int8 *)v4 + 140);
        v57 = v4[34];
        sub_E90750((__int64)&v87, (__int64 *)&v83 + 1);
        v58 = _mm_load_si128(&v85);
        v59 = *(_QWORD *)(*(_QWORD *)a1 + 760LL);
        v82 = v80;
        v60 = _mm_load_si128(&v79);
        v90 = v58;
        v81 = (__m128)v60;
        v61 = sub_1B64ED0(
                v59,
                v71,
                (int)v4 + 80,
                7,
                (int)v4 + 108,
                7,
                (__int64)&ptr,
                (__int64)&v81,
                v57,
                v56,
                v55,
                v54,
                (__int64)v66,
                v68,
                (__int64)v78,
                0,
                (__int64)v70,
                v72);
        if ( v89 )
          free(v88);
        goto LABEL_46;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v14 = sub_1933BC0((__int64 *)a1, *v13, 0.0, a4);
      if ( v14 == 1 )
        break;
      v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
      v16 = (unsigned int)v92 + 1LL;
      if ( v16 <= HIDWORD(v92) )
      {
        ++v13;
        *((_QWORD *)v91 + (unsigned int)v92) = v15;
        LODWORD(v92) = v92 + 1;
        if ( (unsigned __int64 *)v12 == v13 )
          goto LABEL_12;
      }
      else
      {
        ++v13;
        sub_2237220(&v91, v93, v16, 8);
        *((_QWORD *)v91 + (unsigned int)v92) = v15;
        LODWORD(v92) = v92 + 1;
        if ( (unsigned __int64 *)v12 == v13 )
          goto LABEL_12;
      }
    }
  }
  v61 = 0;
LABEL_46:
  if ( v94 != v96 )
    free(v94);
  if ( HIDWORD(v84[1]) )
    free(v84[0]);
LABEL_50:
  if ( v91 != v93 )
    free(v91);
  return v61;
}
