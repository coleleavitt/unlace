__int64 __fastcall sub_175BCD0(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        bool *a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // ebp
  __int64 v12; // rdx
  __m128 v13; // xmm0
  __int64 v14; // rcx
  unsigned int v15; // edi
  __int64 v16; // rax
  unsigned int v17; // esi
  int v18; // r8d
  unsigned int i; // eax
  _QWORD *v20; // rsi
  unsigned int v21; // eax
  unsigned __int64 v22; // rbx
  unsigned int v23; // ebx
  unsigned int v24; // eax
  __int64 v25; // rbp
  unsigned int v26; // r13d
  unsigned __int16 *v27; // rsi
  __int64 v28; // rax
  unsigned __int16 *v29; // rsi
  __int64 v30; // rax
  unsigned __int64 v31; // rbp
  __int64 *v32; // r13
  __m128i si128; // xmm0
  __m128i *v34; // rax
  __int64 *v35; // rdx
  __int64 *v36; // rbx
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  char v41; // al
  __int64 *v42; // rdi
  char v43; // r13
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rsi
  _QWORD *v48; // rbx
  _QWORD *v49; // r12
  void *v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rbx
  __int64 v53; // r15
  char v54; // al
  int v55; // ebp
  __int64 v56; // rax
  void **v57; // rbp
  __int64 v58; // r12
  void **j; // r12
  _QWORD *v60; // rsi
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r8
  __int64 v64; // rcx
  bool v65; // zf
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  __int64 *v69; // r14
  __int64 *v71; // [rsp+10h] [rbp-278h] BYREF
  __int64 v72; // [rsp+18h] [rbp-270h]
  __m128 *v73; // [rsp+20h] [rbp-268h]
  unsigned __int64 v74; // [rsp+28h] [rbp-260h]
  bool *v75; // [rsp+30h] [rbp-258h]
  __int64 v76; // [rsp+38h] [rbp-250h]
  __int64 v77; // [rsp+40h] [rbp-248h]
  unsigned int v78; // [rsp+4Ch] [rbp-23Ch]
  __m128i v79; // [rsp+50h] [rbp-238h] BYREF
  void *v80[2]; // [rsp+60h] [rbp-228h] BYREF
  _DWORD v81[32]; // [rsp+70h] [rbp-218h] BYREF
  __m128 ptr; // [rsp+F0h] [rbp-198h] BYREF
  _DWORD v83[32]; // [rsp+100h] [rbp-188h] BYREF
  __m128 v84; // [rsp+180h] [rbp-108h] BYREF
  __int64 v85; // [rsp+190h] [rbp-F8h]
  __int64 v86; // [rsp+198h] [rbp-F0h]
  __int64 v87; // [rsp+1A0h] [rbp-E8h]
  unsigned int v88; // [rsp+1A8h] [rbp-E0h]
  _QWORD *v89; // [rsp+1B0h] [rbp-D8h]
  __int64 v90; // [rsp+1B8h] [rbp-D0h]
  unsigned int v91; // [rsp+1C0h] [rbp-C8h]
  __int64 v92; // [rsp+1C8h] [rbp-C0h]
  __int64 v93; // [rsp+1D0h] [rbp-B8h]
  unsigned int v94; // [rsp+1D8h] [rbp-B0h]
  __int64 v95; // [rsp+1E0h] [rbp-A8h]
  __int64 v96; // [rsp+1E8h] [rbp-A0h]
  unsigned int v97; // [rsp+1F0h] [rbp-98h]
  __int16 v98; // [rsp+248h] [rbp-40h]

  if ( !a4 )
  {
    *a6 = a8 == 0;
    return 0;
  }
  if ( a8 )
  {
    v71 = (__int64 *)a5;
    v12 = *(unsigned int *)(a1 + 15704);
    v75 = a6;
    v13 = _mm_loadh_ps((const double *)&v71);
    v76 = a5;
    v71 = (__int64 *)(a1 + 15688);
    v14 = *(_QWORD *)(a1 + 15688);
    v72 = a2;
    v79 = (__m128i)v13;
    if ( (_DWORD)v12 )
    {
      v15 = (unsigned int)a5 >> 9;
      v16 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
      v17 = a5;
      v18 = 1;
      for ( i = (v12 - 1)
              & (((0xBF58476D1CE4E5B9LL * (v15 ^ (v17 >> 4) | (unsigned __int64)(v16 << 32))) >> 31)
               ^ (484763065 * (v15 ^ (v17 >> 4)))); ; i = (v12 - 1) & v21 )
      {
        v20 = (_QWORD *)(v14 + 24LL * i);
        if ( v72 == *v20 && v76 == v20[1] )
          break;
        if ( *v20 == -4096 && v20[1] == -4096 )
          goto LABEL_16;
        v21 = v18 + i;
        ++v18;
      }
      sub_1745790(&v84, v20, (_QWORD *)(v14 + 24 * v12), (__int64)v71, 1);
      v22 = v84.m128_u64[0];
    }
    else
    {
LABEL_16:
      sub_1745790(&v84, (_QWORD *)(v14 + 24 * v12), (_QWORD *)(v14 + 24 * v12), (__int64)v71, 1);
      v22 = v84.m128_u64[0];
    }
    sub_1745790(
      &v84,
      (_QWORD *)(*(_QWORD *)(a1 + 15688) + 24LL * *(unsigned int *)(a1 + 15704)),
      (_QWORD *)(*(_QWORD *)(a1 + 15688) + 24LL * *(unsigned int *)(a1 + 15704)),
      (__int64)v71,
      1);
    if ( v84.m128_u64[0] != v22 )
    {
      v8 = 0;
      *v75 = *(_BYTE *)(v22 + 16);
      return v8;
    }
    v23 = sub_17408F0(a1, v72);
    v24 = sub_17408F0(a1, v76);
    v73 = &v84;
    v74 = a1;
    v25 = 0;
    v26 = v24;
    v78 = v23 - v24;
    while ( 1 )
    {
      if ( v23 >= v26 )
      {
        if ( v23 <= v26 )
          goto LABEL_19;
        v85 = 0;
        v84 = (__m128)v74;
        v29 = *(unsigned __int16 **)(a7 + 16 * v25);
        v77 = 16 * v25;
        LODWORD(v86) = 0;
        LODWORD(v87) = v78;
        v30 = sub_175B800((__int64 *)v73, v29);
        *(_QWORD *)(a7 + v77) = v30 & 0xFFFFFFFFFFFFFFFELL;
      }
      else
      {
        v85 = 0;
        v84 = (__m128)v74;
        v27 = *(unsigned __int16 **)(a3 + 16 * v25);
        v77 = 16 * v25;
        LODWORD(v86) = 0;
        LODWORD(v87) = v26 - v23;
        v28 = sub_175B800((__int64 *)v73, v27);
        *(_QWORD *)(a3 + v77) = v28 & 0xFFFFFFFFFFFFFFFELL;
      }
      operator delete(v84.m128_u64[1], 16LL * (unsigned int)v86, 8);
LABEL_19:
      if ( ++v25 == a4 || a8 == v25 )
      {
        v31 = v74;
        v32 = (__int64 *)v73;
        v85 = 0;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
        v84 = (__m128)v74;
        v34 = (__m128i *)&v73[6].m128_u16[4];
        v35 = &v73[12].m128_i64[1];
        v86 = 0;
        v87 = 0;
        v88 = 0;
        v89 = nullptr;
        v90 = 0;
        v91 = 0;
        v92 = 0;
        v93 = 0;
        v94 = 0;
        v95 = 1;
        do
        {
          *v34 = si128;
          v34 = (__m128i *)((char *)v34 + 24);
        }
        while ( v34 != (__m128i *)v35 );
        v98 = 1;
        v36 = (__int64 *)sub_1748570(v84.m128_i64[0], v72, a3, a4);
        if ( !v36 || (v37 = (__int64 *)sub_1748570(v84.m128_i64[0], v76, a7, a8)) == nullptr )
        {
          v8 = 1;
          goto LABEL_32;
        }
        v41 = sub_17565E0(v32, v36, v37, v38, v39, v40);
        v42 = v71;
        v43 = v41;
        *v75 = v41;
        if ( (unsigned __int8)sub_1744B30(v42, v79.m128i_i64, (__int64 **)v80) )
        {
          v45 = 3LL * *(unsigned int *)(v31 + 15704);
          v46 = *(_QWORD *)(v31 + 15688);
          v8 = 0;
          sub_1745790(&ptr, (_QWORD *)v80[0], (_QWORD *)(v46 + 8 * v45), (__int64)v71, 1);
          goto LABEL_32;
        }
        v60 = v80[0];
        v61 = (unsigned int)(*(_DWORD *)(v31 + 15696) + 1);
        v62 = *(unsigned int *)(v31 + 15704);
        ptr.m128_u64[0] = (unsigned __int64)v80[0];
        v63 = (unsigned int)(4 * v61);
        if ( (unsigned int)v63 >= 3 * (int)v62 )
        {
          v69 = v71;
          sub_1749240((__int64)v71, 2 * v62, v61, (unsigned int)(2 * v62), v63, v44);
        }
        else
        {
          v64 = (unsigned int)(v62 - *(_DWORD *)(v31 + 15700) - v61);
          if ( (unsigned int)v64 > (unsigned int)v62 >> 3 )
          {
LABEL_75:
            v65 = *v60 == -4096;
            *(_DWORD *)(v31 + 15696) = v61;
            if ( !v65 || v60[1] != -4096 )
              --*(_DWORD *)(v31 + 15700);
            *((_BYTE *)v60 + 16) = v43;
            v66 = 3 * v62;
            v67 = (__int64)v71;
            v68 = *(_QWORD *)(v31 + 15688);
            v8 = 0;
            *(__m128i *)v60 = _mm_load_si128(&v79);
            v80[0] = v60;
            sub_1745790(&ptr, v60, (_QWORD *)(v68 + 8 * v66), v67, 1);
LABEL_32:
            if ( (v95 & 1) == 0 )
              operator delete(v96, 24LL * v97, 8);
            operator delete(v92, 16LL * v94, 8);
            v47 = v91;
            if ( v91 )
            {
              v48 = v89;
              v49 = &v89[4 * v91];
              do
              {
                if ( *v48 != -8192 && *v48 != -4096 )
                {
                  v50 = (void *)v48[1];
                  if ( v50 )
                    operator delete(v50);
                }
                v48 += 4;
              }
              while ( v49 != v48 );
              v47 = v91;
            }
            operator delete(v89, 32 * v47, 8);
            v51 = v88;
            if ( !v88 )
            {
LABEL_68:
              operator delete(v86, 656 * v51, 8);
              return v8;
            }
            v52 = v86;
            LOBYTE(v71) = v8;
            v53 = v86 + 656LL * v88;
            while ( 2 )
            {
              if ( *(_QWORD *)v52 != -8192 && *(_QWORD *)v52 != -4096 )
              {
                v54 = *(_BYTE *)(v52 + 8);
                if ( (v54 & 1) != 0 || *(_DWORD *)(v52 + 24) )
                {
                  v81[0] = -1;
                  v55 = 35;
                  ptr.m128_u64[0] = (unsigned __int64)v83;
                  v80[0] = v81;
                  v80[1] = (void *)0x2000000001LL;
                  ptr.m128_u64[1] = 0x2000000001LL;
                  v56 = 1;
                  v83[0] = -1;
                  do
                  {
                    if ( v56 + 1 <= (unsigned __int64)ptr.m128_u32[3] )
                    {
                      *(_DWORD *)(ptr.m128_u64[0] + 4 * v56) = -1;
                    }
                    else
                    {
                      sub_2237220(&ptr, v83, v56 + 1, 4);
                      *(_DWORD *)(ptr.m128_u64[0] + 4LL * ptr.m128_u32[2]) = -1;
                    }
                    v56 = (unsigned int)++ptr.m128_i32[2];
                    --v55;
                  }
                  while ( v55 );
                  if ( (*(_BYTE *)(v52 + 8) & 1) != 0 )
                  {
                    v57 = (void **)(v52 + 16);
                    v58 = 80;
                  }
                  else
                  {
                    v57 = *(void ***)(v52 + 16);
                    v58 = 20LL * *(unsigned int *)(v52 + 24);
                  }
                  for ( j = &v57[v58]; j != v57; v57 += 20 )
                  {
                    if ( !(unsigned __int8)sub_2222ED0(v57, v80) )
                      goto LABEL_71;
                    while ( *v57 == v57 + 2 )
                    {
                      v57 += 20;
                      if ( j == v57 )
                        goto LABEL_59;
                      if ( !(unsigned __int8)sub_2222ED0(v57, v80) )
LABEL_71:
                        sub_2222ED0(v57, &ptr);
                    }
                    free(*v57);
                  }
LABEL_59:
                  if ( (_DWORD *)ptr.m128_u64[0] != v83 )
                    free((void *)ptr.m128_u64[0]);
                  if ( v80[0] != v81 )
                    free(v80[0]);
                  v54 = *(_BYTE *)(v52 + 8);
                }
                if ( (v54 & 1) == 0 )
                  operator delete(*(_QWORD *)(v52 + 16), 160LL * *(unsigned int *)(v52 + 24), 8);
              }
              v52 += 656;
              if ( v53 == v52 )
              {
                v8 = (unsigned __int8)v71;
                v51 = v88;
                goto LABEL_68;
              }
              continue;
            }
          }
          v69 = v71;
          sub_1749240((__int64)v71, v62, v61, v64, v63, v44);
        }
        sub_1744B30(v69, v79.m128i_i64, (__int64 **)&ptr);
        v62 = *(unsigned int *)(v31 + 15704);
        v60 = (_QWORD *)ptr.m128_u64[0];
        LODWORD(v61) = *(_DWORD *)(v31 + 15696) + 1;
        goto LABEL_75;
      }
    }
  }
  *a6 = 1;
  return 0;
}
