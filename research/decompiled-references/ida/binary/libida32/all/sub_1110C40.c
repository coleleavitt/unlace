void __fastcall sub_1110C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rdi
  __m128i si128; // xmm2
  int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __m128i *v13; // rbx
  __m128i *v14; // rbp
  __int64 v15; // r14
  void **v16; // r13
  __int64 v17; // rsi
  bool v18; // zf
  int v19; // edx
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // rax
  __m128i *v23; // rbx
  __int64 v24; // r13
  void **v25; // rdx
  __int64 v26; // rsi
  unsigned __int8 v27; // al
  char *v28; // rax
  __int64 v29; // rax
  char *v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  void **v35; // rbx
  void **v36; // r14
  void **v37; // rbp
  __int64 v38; // rdi
  unsigned __int8 (__fastcall *v39)(__int64, char **); // rax
  __int64 v40; // rdi
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rsi
  void **v43; // rdi
  void **v44; // rbp
  __int64 v45; // rdi
  unsigned __int64 v46; // rbx
  void **v47; // rax
  unsigned __int64 v48; // rsi
  void **v49; // rdi
  __int64 v50; // rdi
  unsigned __int64 v51; // rbx
  void **v52; // rax
  unsigned __int64 v53; // rsi
  void **v54; // rdi
  char *v55; // rbp
  __int64 v56; // rdx
  bool v57; // cc
  __int64 v58; // rdi
  __int64 v59; // rdi
  __int64 v60; // rdi
  __m128i *v61; // [rsp+8h] [rbp-2B0h] BYREF
  __m128i *v62; // [rsp+10h] [rbp-2A8h]
  __int64 v63; // [rsp+18h] [rbp-2A0h]
  __int64 v64; // [rsp+20h] [rbp-298h]
  void **v65; // [rsp+28h] [rbp-290h] BYREF
  char **v66; // [rsp+30h] [rbp-288h] BYREF
  __int64 v67; // [rsp+38h] [rbp-280h]
  char *v68; // [rsp+40h] [rbp-278h] BYREF
  __int64 v69; // [rsp+48h] [rbp-270h]
  __int64 v70; // [rsp+50h] [rbp-268h]
  __int64 v71; // [rsp+58h] [rbp-260h]
  __int16 v72; // [rsp+60h] [rbp-258h]
  void *v73[2]; // [rsp+70h] [rbp-248h] BYREF
  __m128i v74; // [rsp+80h] [rbp-238h] BYREF
  char v75; // [rsp+90h] [rbp-228h]

  v5 = (_QWORD *)(a1 + 16);
  *(v5 - 1) = a2;
  v63 = a4;
  *(v5 - 2) = &off_2C0C398;
  *(_QWORD *)(a1 + 16) = a1 + 32;
  sub_11078F0(v5, *(_BYTE **)a3, *(_QWORD *)a3 + *(_QWORD *)(a3 + 8));
  si128 = _mm_load_si128((const __m128i *)&xmmword_23858E0);
  *(__m128i *)(a1 + 48) = _mm_loadu_si128((const __m128i *)(a3 + 32));
  v9 = *(_DWORD *)(a3 + 48);
  *(__m128i *)v73 = si128;
  *(_DWORD *)(a1 + 64) = v9;
  v10 = *(_DWORD *)(a3 + 52);
  *(_QWORD *)(a1 + 72) = a4;
  *(_DWORD *)(a1 + 68) = v10;
  v11 = sub_2193060(a4, v73, 4);
  v12 = *(_QWORD *)(a4 + 8);
  v13 = (__m128i *)(v12 + 8LL * (unsigned int)v11);
  v14 = (__m128i *)(v12 + 8 * HIDWORD(v11));
  v74 = _mm_load_si128((const __m128i *)&xmmword_23858E0);
  v61 = v14;
  *(__m128 *)v73 = _mm_loadh_ps((const double *)&v61);
  if ( v13 != v14 )
  {
    v61 = &v74;
    do
    {
      v15 = v13->m128i_i64[0];
      v16 = v73;
      if ( v13->m128i_i64[0] )
      {
        do
        {
          v17 = *((unsigned int *)v16 + 4);
          if ( !(_DWORD)v17 )
            break;
          if ( (unsigned __int8)sub_2195AD0(v15, v17) )
          {
            v61 = v14;
            v74 = _mm_load_si128((const __m128i *)&xmmword_23858E0);
            *(__m128 *)v73 = _mm_loadh_ps((const double *)&v61);
            if ( v14 == v13 )
              goto LABEL_8;
            v62 = &v74;
LABEL_12:
            v21 = v13->m128i_i64[0];
            v22 = *(_QWORD *)(v13->m128i_i64[0] + 16);
            if ( !v22 )
              v22 = v13->m128i_i64[0];
            v23 = (__m128i *)&v13->m128i_u64[1];
            *(_BYTE *)(v22 + 44) |= 1u;
            for ( v73[0] = v23; v14 != v23; v73[0] = v23 )
            {
              v24 = v23->m128i_i64[0];
              v25 = v73;
              if ( v23->m128i_i64[0] )
              {
                do
                {
                  v26 = *((unsigned int *)v25 + 4);
                  v61 = (__m128i *)v25;
                  if ( !(_DWORD)v26 )
                    break;
                  if ( (unsigned __int8)sub_2195AD0(v24, v26) )
                  {
                    v13 = (__m128i *)v73[0];
                    if ( v14 != v73[0] )
                      goto LABEL_12;
                    goto LABEL_20;
                  }
                  v25 = (void **)((char *)v61->m128i_i64 + 4);
                }
                while ( (__m128i *)((char *)v61->m128i_i64 + 4) != v62 );
              }
              v23 = (__m128i *)((char *)v23 + 8);
            }
LABEL_20:
            *(_QWORD *)(a1 + 80) = v21;
            v20 = (unsigned __int8)sub_2195AD0(v21, 1709) ^ 1;
            goto LABEL_21;
          }
          v16 = (void **)((char *)v16 + 4);
        }
        while ( v16 != (void **)v61 );
      }
      v13 = (__m128i *)((char *)v13 + 8);
      v73[0] = v13;
    }
    while ( v14 != v13 );
  }
LABEL_8:
  v18 = *(_DWORD *)(a1 + 48) == 38;
  v19 = *(_DWORD *)(a1 + 60);
  *(_QWORD *)(a1 + 80) = 0;
  if ( !v18 || *(_DWORD *)(a1 + 56) != 3 || (v20 = 1, (unsigned int)(v19 - 24) > 1) )
    v20 = v19 == 30;
LABEL_21:
  *(_DWORD *)(a1 + 88) = v20;
  v27 = sub_2193B10(v63, 663, 1121, 1);
  *(_OWORD *)(a1 + 1792) = 0;
  *(_QWORD *)(a1 + 624) = a1 + 640;
  *(_DWORD *)(a1 + 92) = v27 ^ 1;
  *(_QWORD *)(a1 + 96) = a1 + 112;
  *(_QWORD *)(a1 + 104) = 0x1000000000LL;
  *(_QWORD *)(a1 + 632) = 0x1000000000LL;
  *(_QWORD *)(a1 + 1160) = 0x1000000000LL;
  *(_QWORD *)(a1 + 1152) = a1 + 1168;
  *(_QWORD *)(a1 + 1760) = a1 + 1776;
  *(_QWORD *)(a1 + 1864) = a1 + 1880;
  *(_QWORD *)(a1 + 1936) = a1 + 1952;
  *(_OWORD *)(a1 + 1840) = 0;
  *(_QWORD *)(a1 + 1872) = 0x100000000LL;
  *(_QWORD *)(a1 + 1944) = 0x100000000LL;
  *(_QWORD *)(a1 + 1680) = 0;
  *(_QWORD *)(a1 + 1688) = 0;
  *(_QWORD *)(a1 + 1696) = 0;
  *(_QWORD *)(a1 + 1704) = 0;
  *(_QWORD *)(a1 + 1712) = 0;
  *(_QWORD *)(a1 + 1720) = 0;
  *(_QWORD *)(a1 + 1728) = 0;
  *(_QWORD *)(a1 + 1736) = 0;
  *(_QWORD *)(a1 + 1744) = 0;
  *(_BYTE *)(a1 + 1752) = 0;
  *(_QWORD *)(a1 + 1768) = 0;
  *(_BYTE *)(a1 + 1776) = 0;
  *(_QWORD *)(a1 + 1808) = 0;
  *(_BYTE *)(a1 + 1820) = 0;
  *(_BYTE *)(a1 + 1828) = 0;
  *(_BYTE *)(a1 + 1836) = 0;
  *(_QWORD *)(a1 + 1856) = 0;
  *(_QWORD *)(a1 + 2128) = 0;
  *(_QWORD *)(a1 + 2160) = 0;
  *(_QWORD *)(a1 + 2176) = a1 + 2192;
  *(_QWORD *)(a1 + 2184) = 0x100000000LL;
  sub_110D6D0((__m128i *)v73, a1);
  if ( v75 )
  {
    v50 = *(unsigned int *)(a1 + 104);
    v51 = *(_QWORD *)(a1 + 96);
    v52 = v73;
    v53 = v50 + 1;
    v54 = (void **)(v51 + 32 * v50);
    if ( v53 <= *(unsigned int *)(a1 + 108) )
    {
LABEL_45:
      *v54 = v54 + 2;
      sub_11078F0(v54, *v52, (__int64)v52[1] + (_QWORD)*v52);
      ++*(_DWORD *)(a1 + 104);
      if ( v75 && v73[0] != &v74 )
        operator delete(v73[0]);
      goto LABEL_22;
    }
    if ( v51 > (unsigned __int64)v73 )
    {
      v58 = a1 + 96;
    }
    else
    {
      v57 = v54 <= v73;
      v58 = a1 + 96;
      if ( !v57 )
      {
        sub_A684B0(v58, v53);
        v59 = *(_QWORD *)(a1 + 96);
        v52 = (void **)((char *)v73 + v59 - v51);
        v54 = (void **)(32LL * *(unsigned int *)(a1 + 104) + v59);
        goto LABEL_45;
      }
    }
    sub_A684B0(v58, v53);
    v52 = v73;
    v54 = (void **)(*(_QWORD *)(a1 + 96) + 32LL * *(unsigned int *)(a1 + 104));
    goto LABEL_45;
  }
LABEL_22:
  sub_110D5D0((__int64)v73, a1);
  if ( v75 )
  {
    v45 = *(unsigned int *)(a1 + 632);
    v46 = *(_QWORD *)(a1 + 624);
    v47 = v73;
    v48 = v45 + 1;
    v49 = (void **)(v46 + 32 * v45);
    if ( v48 > *(unsigned int *)(a1 + 636) )
    {
      if ( v46 > (unsigned __int64)v73 || v49 <= v73 )
      {
        sub_A684B0(a1 + 624, v48);
        v47 = v73;
        v49 = (void **)(*(_QWORD *)(a1 + 624) + 32LL * *(unsigned int *)(a1 + 632));
      }
      else
      {
        sub_A684B0(a1 + 624, v48);
        v60 = *(_QWORD *)(a1 + 624);
        v47 = (void **)((char *)v73 + v60 - v46);
        v49 = (void **)(32LL * *(unsigned int *)(a1 + 632) + v60);
      }
    }
    *v49 = v49 + 2;
    sub_11078F0(v49, *v47, (__int64)v47[1] + (_QWORD)*v47);
    ++*(_DWORD *)(a1 + 632);
    if ( v75 && v73[0] != &v74 )
      operator delete(v73[0]);
  }
  v64 = a1;
  v73[0] = &v74;
  v73[1] = (void *)0x1000000000LL;
  v28 = *(char **)(a1 + 16);
  v65 = v73;
  v68 = v28;
  v29 = *(_QWORD *)(a1 + 24);
  v66 = &v68;
  v69 = v29;
  v67 = 1;
  sub_11108D0(a1, (__int64 *)&v65, (__int64 **)&v66);
  v30 = sub_1107BB0(a1, (__int64)&v65);
  v31 = *(unsigned int *)(a1 + 48);
  v68 = v30;
  v69 = v32;
  v33 = sub_2291AE0(v31);
  v66 = &v68;
  v71 = v34;
  v70 = v33;
  v67 = 2;
  sub_11108D0(v64, (__int64 *)&v65, (__int64 **)&v66);
  v35 = (void **)((char *)v73[0] + 32 * LODWORD(v73[1]));
  if ( v73[0] != v35 )
  {
    v36 = (void **)v73[0];
    v61 = (__m128i *)(a1 + 624);
    do
    {
      while ( 1 )
      {
        v37 = v36;
        v38 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL);
        v39 = *(unsigned __int8 (__fastcall **)(__int64, char **))(*(_QWORD *)v38 + 96LL);
        v72 = 260;
        v68 = (char *)v36;
        if ( v39(v38, &v68) )
          break;
        v36 += 4;
        if ( v35 == v36 )
          goto LABEL_29;
      }
      v40 = *(unsigned int *)(a1 + 632);
      v41 = *(_QWORD *)(a1 + 624);
      v42 = v40 + 1;
      v43 = (void **)(v41 + 32 * v40);
      if ( v42 > *(unsigned int *)(a1 + 636) )
      {
        if ( v41 > (unsigned __int64)v36 || v43 <= v36 )
        {
          sub_A684B0((__int64)v61, v42);
          v43 = (void **)(*(_QWORD *)(a1 + 624) + 32LL * *(unsigned int *)(a1 + 632));
        }
        else
        {
          v55 = (char *)v36 - v41;
          sub_A684B0((__int64)v61, v42);
          v56 = *(_QWORD *)(a1 + 624);
          v37 = (void **)&v55[v56];
          v43 = (void **)(v56 + 32LL * *(unsigned int *)(a1 + 632));
        }
      }
      v36 += 4;
      *v43 = v43 + 2;
      sub_11078F0(v43, *v37, (__int64)v37[1] + (_QWORD)*v37);
      ++*(_DWORD *)(a1 + 632);
    }
    while ( v35 != v36 );
LABEL_29:
    v44 = (void **)v73[0];
    v35 = (void **)((char *)v73[0] + 32 * LODWORD(v73[1]));
    if ( v73[0] != v35 )
    {
      do
      {
        while ( 1 )
        {
          v35 -= 4;
          if ( *v35 == v35 + 2 )
            break;
          operator delete(*v35);
          if ( v44 == v35 )
          {
            v35 = (void **)v73[0];
            goto LABEL_33;
          }
        }
      }
      while ( v44 != v35 );
      v35 = (void **)v73[0];
    }
  }
LABEL_33:
  if ( v35 != (void **)&v74 )
    free(v35);
}

