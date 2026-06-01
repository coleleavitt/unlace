__int64 __fastcall sub_14EBC90(__int64 a1)
{
  char v1; // r15
  int v2; // r14d
  __int64 v3; // r12
  __int64 v5; // rdi
  unsigned int v6; // esi
  _QWORD *v7; // rax
  __int64 v8; // r12
  int v9; // eax
  unsigned __int8 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  void **v13; // rbp
  __int64 v14; // rax
  void **v15; // r12
  void **v16; // rbx
  void **v17; // rdi
  void **v18; // rdi
  void **v19; // rbx
  void **v20; // r12
  __int64 v22; // rdi
  unsigned int v23; // esi
  __int64 v24; // r8
  __m128i v25; // xmm0
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  __int64 v30; // rsi
  __m128i si128; // xmm1
  int v32; // edx
  __m128i v33; // xmm2
  int v34; // eax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __m128i v37; // xmm1
  const __m128i *v38; // rax
  __m128i v39; // xmm2
  __int64 v40; // rsi
  __m128i v41; // xmm7
  _QWORD *v42; // rax
  __int64 v43; // r12
  int v44; // eax
  void **v45; // r12
  void **v46; // rbx
  void **v47; // rdi
  void **v48; // rdi
  void **v49; // rbx
  void **v50; // r12
  void *v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rdx
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // r12
  __int64 v57; // r13
  __int64 v58; // r12
  void *v59; // rdi
  int v60; // [rsp+0h] [rbp-178h]
  unsigned __int64 v61; // [rsp+0h] [rbp-178h]
  __int64 v62; // [rsp+0h] [rbp-178h]
  int v63; // [rsp+14h] [rbp-164h]
  __int64 v64; // [rsp+18h] [rbp-160h]
  __m128i v65; // [rsp+30h] [rbp-148h] BYREF
  __int64 v66; // [rsp+40h] [rbp-138h]
  __m128i v67; // [rsp+50h] [rbp-128h] BYREF
  __int64 v68; // [rsp+60h] [rbp-118h]
  __int32 v69; // [rsp+68h] [rbp-110h]
  char v70; // [rsp+6Ch] [rbp-10Ch]
  __m128i v71; // [rsp+70h] [rbp-108h]
  __m128i v72; // [rsp+80h] [rbp-F8h]
  __m128i v73; // [rsp+90h] [rbp-E8h]
  __int64 v74; // [rsp+A0h] [rbp-D8h]
  int v75; // [rsp+A8h] [rbp-D0h]
  __m128i v76; // [rsp+B0h] [rbp-C8h]
  __m128i v77; // [rsp+C0h] [rbp-B8h] BYREF
  __m128i v78; // [rsp+D0h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+E0h] [rbp-98h]
  int v80; // [rsp+E8h] [rbp-90h]
  _BYTE v81[60]; // [rsp+F0h] [rbp-88h] BYREF
  int v82; // [rsp+12Ch] [rbp-4Ch]
  __int16 v83; // [rsp+130h] [rbp-48h]

  v1 = 0;
  v2 = 0;
  v3 = a1 + 24;
  v63 = 0;
  while ( 1 )
  {
    *(_DWORD *)v81 = 9;
    if ( sub_14E3360(a1, v81, 1) )
      break;
    *(__m128i *)v81 = _mm_load_si128((const __m128i *)&xmmword_23AA740);
    if ( sub_14E3360(a1, v81, 4) )
    {
      sub_13DF9D0(&v65, v3);
      v22 = *(_QWORD *)(a1 + 16);
      *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v65);
      v23 = *(_DWORD *)(a1 + 92);
      *(_QWORD *)(a1 + 104) = v66;
      v60 = sub_C07A10(
              v22,
              v23,
              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 88LL),
              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 56LL),
              *(_QWORD *)(*(_QWORD *)(a1 + 80) + 64LL),
              nullptr,
              nullptr);
      sub_14EB580((__int64)&v67, a1);
      if ( !v70 )
      {
        *(_DWORD *)v81 = 9;
        sub_14EBAA0(a1, v81, 1);
        sub_13DF9D0(&v65, v3);
        v41 = _mm_loadu_si128(&v65);
        v81[8] = 0;
        *(__m128i *)(a1 + 88) = v41;
        *(_QWORD *)(a1 + 104) = v66;
        return *(_QWORD *)v81;
      }
      v24 = *(_QWORD *)(a1 + 8);
      v25 = _mm_load_si128(&v67);
      v26 = *(unsigned int *)(v24 + 8);
      v27 = *(_QWORD *)v24;
      v28 = *(unsigned int *)(v24 + 12);
      v29 = *(_QWORD *)v24 + (v26 << 6);
      if ( v26 >= v28 )
      {
        LOBYTE(v80) = 4;
        v36 = v26 + 1;
        v37 = _mm_load_si128(&v78);
        *(_DWORD *)v81 = v60;
        v38 = (const __m128i *)v81;
        v77.m128i_i64[0] = v68;
        v76 = v25;
        v77.m128i_i32[2] = v69;
        v39 = _mm_load_si128(&v77);
        v71 = v25;
        v73 = v37;
        v72 = v39;
        v74 = v79;
        v75 = v80;
        *(__m128i *)&v81[4] = v25;
        *(__m128i *)&v81[20] = v39;
        *(__m128i *)&v81[36] = v37;
        *(_QWORD *)&v81[52] = v79;
        v82 = v80;
        if ( v28 < v36 )
        {
          v40 = v24 + 16;
          v61 = v27;
          if ( v27 > (unsigned __int64)v81 || v29 <= (unsigned __int64)v81 )
          {
            v62 = v24;
            sub_2237220(v24, v40, v36, 64);
            v24 = v62;
            v38 = (const __m128i *)v81;
            v29 = *(_QWORD *)v62 + ((unsigned __int64)*(unsigned int *)(v62 + 8) << 6);
          }
          else
          {
            v64 = v24;
            sub_2237220(v24, v40, v36, 64);
            v24 = v64;
            v38 = (const __m128i *)&v81[*(_QWORD *)v64 - v61];
            v29 = ((unsigned __int64)*(unsigned int *)(v64 + 8) << 6) + *(_QWORD *)v64;
          }
        }
        *(__m128i *)v29 = _mm_loadu_si128(v38);
        *(__m128i *)(v29 + 16) = _mm_loadu_si128(v38 + 1);
        *(__m128i *)(v29 + 32) = _mm_loadu_si128(v38 + 2);
        *(__m128i *)(v29 + 48) = _mm_loadu_si128(v38 + 3);
        ++*(_DWORD *)(v24 + 8);
      }
      else
      {
        v81[56] = 4;
        v30 = *(_QWORD *)&v81[48];
        *(__m128i *)v81 = v25;
        si128 = _mm_load_si128((const __m128i *)&v81[32]);
        *(_QWORD *)&v81[16] = v68;
        v79 = *(_QWORD *)&v81[48];
        *(_DWORD *)&v81[24] = v69;
        v32 = *(_DWORD *)&v81[56];
        v33 = _mm_load_si128((const __m128i *)&v81[16]);
        *(_DWORD *)v29 = v60;
        *(__m128i *)(v29 + 4) = v25;
        *(__m128i *)(v29 + 20) = v33;
        *(__m128i *)(v29 + 36) = si128;
        *(_QWORD *)(v29 + 52) = v30;
        *(_DWORD *)(v29 + 60) = v32;
        ++*(_DWORD *)(v24 + 8);
        v80 = v32;
        v76 = v25;
        v77 = v33;
        v78 = si128;
      }
      ++v2;
    }
    else
    {
      *(_DWORD *)v81 = 26;
      if ( !sub_14E3360(a1, v81, 1) )
      {
        sub_13DF9D0(&v65, v3);
        v5 = *(_QWORD *)(a1 + 16);
        *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v65);
        v6 = *(_DWORD *)(a1 + 92);
        *(_QWORD *)(a1 + 104) = v66;
        v7 = *(_QWORD **)(a1 + 80);
        v8 = v7[6];
        v9 = sub_C07A10(v5, v6, v7[11], v7[7], v7[8], nullptr, nullptr);
        sub_FC70B0((__int64)v81, v8, v9, 1688);
        v10 = *(unsigned __int8 **)v81;
        if ( !*(_QWORD *)v81 )
        {
          v53 = *(_QWORD *)&v81[8];
          v54 = *(_DWORD *)(*(_QWORD *)&v81[8] + 14976LL);
          if ( v54 )
          {
            v55 = (unsigned int)(v54 - 1);
            *(_DWORD *)(*(_QWORD *)&v81[8] + 14976LL) = v55;
            v10 = *(unsigned __int8 **)(v53 + 8 * v55 + 14848);
            v56 = *((unsigned int *)v10 + 134);
            *v10 = 0;
            v57 = *((_QWORD *)v10 + 66);
            *((_DWORD *)v10 + 106) = 0;
            v58 = v57 + (v56 << 6);
            while ( v57 != v58 )
            {
              while ( 1 )
              {
                v58 -= 64;
                v59 = *(void **)(v58 + 24);
                if ( v59 == (void *)(v58 + 40) )
                  break;
                operator delete(v59);
                if ( v57 == v58 )
                  goto LABEL_85;
              }
            }
LABEL_85:
            *((_DWORD *)v10 + 134) = 0;
          }
          else
          {
            v10 = (unsigned __int8 *)operator new(0x3A0u);
            *v10 = 0;
            *((_QWORD *)v10 + 12) = v10 + 112;
            *((_QWORD *)v10 + 16) = v10 + 144;
            *((_QWORD *)v10 + 20) = v10 + 176;
            *((_QWORD *)v10 + 24) = v10 + 208;
            *((_QWORD *)v10 + 28) = v10 + 240;
            *((_QWORD *)v10 + 32) = v10 + 272;
            *((_QWORD *)v10 + 36) = v10 + 304;
            *((_QWORD *)v10 + 40) = v10 + 336;
            *((_QWORD *)v10 + 44) = v10 + 368;
            *((_QWORD *)v10 + 48) = v10 + 400;
            *((_QWORD *)v10 + 52) = v10 + 432;
            *((_QWORD *)v10 + 13) = 0;
            v10[112] = 0;
            *((_QWORD *)v10 + 17) = 0;
            v10[144] = 0;
            *((_QWORD *)v10 + 21) = 0;
            v10[176] = 0;
            *((_QWORD *)v10 + 25) = 0;
            v10[208] = 0;
            *((_QWORD *)v10 + 29) = 0;
            v10[240] = 0;
            *((_QWORD *)v10 + 33) = 0;
            v10[272] = 0;
            *((_QWORD *)v10 + 37) = 0;
            v10[304] = 0;
            *((_QWORD *)v10 + 41) = 0;
            v10[336] = 0;
            *((_QWORD *)v10 + 45) = 0;
            v10[368] = 0;
            *((_QWORD *)v10 + 49) = 0;
            v10[400] = 0;
            *((_QWORD *)v10 + 53) = 0x800000000LL;
            *((_QWORD *)v10 + 66) = v10 + 544;
            *((_QWORD *)v10 + 67) = 0x600000000LL;
          }
          *(_QWORD *)v81 = v10;
        }
        v10[*v10 + 1] = 2;
        v11 = *(_QWORD *)v81;
        v12 = (unsigned __int8)**(_BYTE **)v81;
        **(_BYTE **)v81 = v12 + 1;
        *(_QWORD *)(v11 + 8 * v12 + 16) = 0;
        sub_14DC730(v81, 17);
        if ( (_BYTE)v83 )
        {
          sub_FC7790(*(__int64 *)&v81[16], (__int64 *)v81, SHIBYTE(v83));
          *(_QWORD *)&v81[16] = 0;
          v83 = 0;
        }
        if ( *(_BYTE **)&v81[32] != &v81[48] )
          operator delete(*(void **)&v81[32]);
        v13 = *(void ***)v81;
        if ( !*(_QWORD *)v81 )
          goto LABEL_26;
        v14 = *(_QWORD *)&v81[8];
        if ( !*(_QWORD *)&v81[8] )
          goto LABEL_26;
        if ( *(_QWORD *)v81 < *(_QWORD *)&v81[8] || *(_QWORD *)v81 > (unsigned __int64)(*(_QWORD *)&v81[8] + 14848LL) )
        {
          v15 = *(void ***)(*(_QWORD *)v81 + 528LL);
          v16 = &v15[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v81 + 536LL)];
          if ( v15 != v16 )
          {
            do
            {
              while ( 1 )
              {
                v16 -= 8;
                v17 = (void **)v16[3];
                if ( v17 == v16 + 5 )
                  break;
                operator delete(v17);
                if ( v15 == v16 )
                  goto LABEL_17;
              }
            }
            while ( v15 != v16 );
LABEL_17:
            v16 = (void **)v13[66];
          }
          if ( v16 != v13 + 68 )
            free(v16);
          v18 = (void **)v13[52];
          v19 = v13 + 52;
          if ( v18 != v13 + 54 )
            free(v18);
          v20 = v13 + 12;
          do
          {
            while ( 1 )
            {
              v19 -= 4;
              if ( *v19 == v19 + 2 )
                break;
              operator delete(*v19);
              if ( v20 == v19 )
                goto LABEL_25;
            }
          }
          while ( v20 != v19 );
          goto LABEL_25;
        }
        goto LABEL_77;
      }
      sub_13DF9D0(&v65, v3);
      *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v65);
      *(_QWORD *)(a1 + 104) = v66;
      if ( v1 )
      {
        v42 = *(_QWORD **)(a1 + 80);
        v43 = v42[6];
        v44 = sub_C07A10(*(_QWORD *)(a1 + 16), *(_DWORD *)(a1 + 92), v42[11], v42[7], v42[8], nullptr, nullptr);
        sub_FC70B0((__int64)v81, v43, v44, 1694);
        sub_14DC730(v81, *(unsigned int *)(a1 + 88));
        if ( (_BYTE)v83 )
        {
          sub_FC7790(*(__int64 *)&v81[16], (__int64 *)v81, SHIBYTE(v83));
          *(_QWORD *)&v81[16] = 0;
          v83 = 0;
        }
        if ( *(_BYTE **)&v81[32] != &v81[48] )
          operator delete(*(void **)&v81[32]);
        v13 = *(void ***)v81;
        if ( !*(_QWORD *)v81 )
          goto LABEL_26;
        v14 = *(_QWORD *)&v81[8];
        if ( !*(_QWORD *)&v81[8] )
          goto LABEL_26;
        if ( *(_QWORD *)v81 < *(_QWORD *)&v81[8] || *(_QWORD *)v81 > (unsigned __int64)(*(_QWORD *)&v81[8] + 14848LL) )
        {
          v45 = *(void ***)(*(_QWORD *)v81 + 528LL);
          v46 = &v45[8 * (unsigned __int64)*(unsigned int *)(*(_QWORD *)v81 + 536LL)];
          if ( v45 != v46 )
          {
            do
            {
              while ( 1 )
              {
                v46 -= 8;
                v47 = (void **)v46[3];
                if ( v47 == v46 + 5 )
                  break;
                operator delete(v47);
                if ( v45 == v46 )
                  goto LABEL_59;
              }
            }
            while ( v45 != v46 );
LABEL_59:
            v46 = (void **)v13[66];
          }
          if ( v46 != v13 + 68 )
            free(v46);
          v48 = (void **)v13[52];
          v49 = v13 + 52;
          if ( v48 != v13 + 54 )
            free(v48);
          v50 = v13 + 12;
          while ( 1 )
          {
            v49 -= 4;
            v51 = *v49;
            if ( *v49 != v49 + 2 )
              break;
LABEL_68:
            if ( v49 == v50 )
              goto LABEL_25;
          }
          while ( 1 )
          {
            operator delete(v51);
            if ( v49 == v50 )
              break;
            v49 -= 4;
            v51 = *v49;
            if ( *v49 == v49 + 2 )
              goto LABEL_68;
          }
LABEL_25:
          operator delete(v13, 0x3A0u);
LABEL_26:
          v81[8] = 0;
          return *(_QWORD *)v81;
        }
LABEL_77:
        v52 = *(unsigned int *)(v14 + 14976);
        *(_DWORD *)(v14 + 14976) = v52 + 1;
        *(_QWORD *)(v14 + 8 * v52 + 14848) = v13;
        goto LABEL_26;
      }
      if ( (unsigned __int8)sub_14E12E0(a1) )
        goto LABEL_26;
      v35 = sub_14E61D0(a1, 0x1Au);
      v63 = v35;
      v1 = BYTE4(v35);
      if ( !BYTE4(v35) )
        goto LABEL_26;
    }
    *(_DWORD *)v81 = 10;
    if ( !sub_14E3360(a1, v81, 1) )
      break;
    sub_13DF9D0(&v65, v3);
    *(__m128i *)(a1 + 88) = _mm_loadu_si128(&v65);
    *(_QWORD *)(a1 + 104) = v66;
  }
  if ( (unsigned __int8)sub_14E5150(a1, 9u, 17, 0xAu) )
    goto LABEL_26;
  v34 = 0;
  if ( v1 )
    v34 = v63;
  *(_DWORD *)&v81[4] = v2;
  v81[8] = 1;
  *(_DWORD *)v81 = v34;
  return *(_QWORD *)v81;
}
