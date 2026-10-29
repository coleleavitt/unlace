__int64 __fastcall sub_2139590(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // edx
  int *v8; // rdx
  int v9; // eax
  __int64 v10; // rcx
  _DWORD *v11; // rbp
  int v12; // eax
  unsigned __int64 v13; // r13
  __m128i v14; // xmm1
  bool v15; // cc
  void *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  int *v19; // rax
  void *v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rbx
  __int64 v24; // rsi
  unsigned __int64 v25; // r15
  __int64 v26; // rcx
  unsigned __int64 v27; // rdi
  __m128 *v28; // r13
  __m128 *v29; // r14
  __int64 v30; // rdx
  __m128i v31; // xmm2
  int v32; // ecx
  __int64 v33; // rdi
  unsigned int v34; // edx
  __int64 v35; // rsi
  __int64 v36; // rbp
  __int64 v37; // rcx
  unsigned __int64 v38; // rsi
  __m128i v39; // xmm3
  void *v40; // rdi
  __int64 v41; // rdx
  __m128i v42; // xmm4
  unsigned int v43; // edx
  __m128i v44; // xmm5
  unsigned int v45; // eax
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  char *v48; // r13
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  __m128 *v51; // rsi
  unsigned int v52; // edx
  __int64 v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rax
  void *v56; // rax
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // rdi
  __int64 v60; // [rsp+0h] [rbp-108h]
  unsigned int v61; // [rsp+14h] [rbp-F4h]
  int v62; // [rsp+18h] [rbp-F0h]
  __int64 v63[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v64[2]; // [rsp+30h] [rbp-D8h] BYREF
  int v65; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v66; // [rsp+48h] [rbp-C0h]
  void *v67; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v68; // [rsp+60h] [rbp-A8h]
  int v69; // [rsp+70h] [rbp-98h] BYREF
  __m128i v70; // [rsp+78h] [rbp-90h]
  void *v71; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v72; // [rsp+90h] [rbp-78h]
  __m128 v73; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v74; // [rsp+B0h] [rbp-58h]
  void *v75; // [rsp+B8h] [rbp-50h] BYREF
  unsigned int v76; // [rsp+C0h] [rbp-48h]

  v62 = a2;
  v65 = 0;
  v66 = 0u;
  v68 = 1;
  v67 = nullptr;
  v3 = sub_2153C00(a1);
  v69 = *(_DWORD *)v3;
  v7 = *(_DWORD *)(v3 + 32);
  v70 = _mm_loadu_si128((const __m128i *)(v3 + 8));
  v72 = v7;
  if ( v7 > 0x40 )
  {
    a2 = v3 + 24;
    sub_2205510(&v71);
  }
  else
  {
    v71 = *(void **)(v3 + 24);
  }
  v8 = *(int **)(a1 + 48);
  v61 = 0;
  v9 = *v8;
  while ( *v8 )
  {
    if ( v9 != 2 )
      goto LABEL_5;
    v46 = sub_2153C00(a1);
    if ( *(_DWORD *)v46 == 2 )
    {
      v4 = *(_QWORD *)(v46 + 8);
      v47 = *(_QWORD *)(v46 + 16);
    }
    else
    {
      v49 = *(_QWORD *)(v46 + 16);
      if ( v49 < 2 )
        goto LABEL_44;
      v47 = v49 - 2;
      v4 = *(_QWORD *)(v46 + 8) + 1LL;
    }
    if ( v47 == 4 )
    {
      if ( *(_DWORD *)v4 != 1885696558 && *(_DWORD *)v4 != 1886546222 )
        goto LABEL_44;
    }
    else
    {
      if ( v47 != 5 )
        goto LABEL_44;
      if ( *(_DWORD *)v4 == 1885696558 )
      {
        if ( *(_BYTE *)(v4 + 4) == 116 )
          goto LABEL_56;
        if ( *(_DWORD *)v4 != 1886546222 )
          goto LABEL_65;
      }
      else if ( *(_DWORD *)v4 != 1886546222 )
      {
        goto LABEL_65;
      }
      if ( *(_BYTE *)(v4 + 4) != 99 )
      {
LABEL_65:
        if ( *(_DWORD *)v4 == 1684956462 && *(_BYTE *)(v4 + 4) == 114 )
        {
          v4 = v61;
          if ( !v61 )
          {
            v50 = sub_2153C00(a1);
            v51 = (__m128 *)(v50 + 24);
            v65 = *(_DWORD *)v50;
            v66 = _mm_loadu_si128((const __m128i *)(v50 + 8));
            if ( v68 <= 0x40 && (v52 = *(_DWORD *)(v50 + 32), v52 <= 0x40) )
            {
              v56 = *(void **)(v50 + 24);
              v68 = v52;
              v67 = v56;
            }
            else
            {
              sub_22056A0(&v67, v51);
            }
            sub_2132C70(a1, v51);
            if ( **(_DWORD **)(a1 + 48) == 9 )
            {
              v53 = sub_2124B50((__int64)&v69);
              v54 = sub_2124B50((__int64)&v65);
              v73 = 0;
              v63[0] = v53;
              v63[1] = v54 - v53;
              v74 = 0;
              v64[0] = 0;
              v64[1] = 0;
              sub_212DF80(a1 + 384, v64, v63, (__int64 *)&v73);
              sub_212DB80((__int64)&v73);
              v55 = *(_QWORD *)(a1 + 432);
              if ( v55 == *(_QWORD *)(a1 + 440) )
                v55 = *(_QWORD *)(*(_QWORD *)(a1 + 456) - 8LL) + 440LL;
              v22 = v55 - 88;
            }
            else
            {
              LOWORD(v76) = 259;
              v73.m128_u64[0] = (unsigned __int64)"expected newline";
              v57 = sub_2153C00(a1);
              v58 = sub_2124B50(v57);
              v59 = a1;
              v22 = 0;
              sub_2129C30(v59, v58, (int)&v73, 0, 0);
            }
            goto LABEL_20;
          }
          --v61;
        }
LABEL_44:
        v8 = *(int **)(a1 + 48);
        v9 = *v8;
        goto LABEL_5;
      }
    }
LABEL_56:
    v8 = *(int **)(a1 + 48);
    ++v61;
    v9 = *v8;
LABEL_5:
    if ( v9 != 9 )
    {
      while ( v9 )
      {
        v10 = *(unsigned int *)(a1 + 56);
        *(_BYTE *)(a1 + 177) = 0;
        v11 = v8 + 10;
        v12 = v10;
        a2 = 40 * v10;
        v4 = (40 * v10 - 40) >> 3;
        v13 = 0xCCCCCCCCCCCCCCCDLL * v4;
        if ( a2 > 0x28 )
        {
          do
          {
            v14 = _mm_loadu_si128((const __m128i *)(v11 + 2));
            v15 = *(v11 - 2) <= 0x40u;
            *(v11 - 10) = *v11;
            *((__m128i *)v11 - 2) = v14;
            if ( !v15 )
            {
              v16 = *((void **)v11 - 2);
              if ( v16 )
                operator delete[](v16);
            }
            v17 = *((_QWORD *)v11 + 3);
            v11 += 10;
            *((_QWORD *)v11 - 7) = v17;
            LODWORD(v17) = *(v11 - 2);
            *(v11 - 2) = 0;
            *(v11 - 12) = v17;
            --v13;
          }
          while ( v13 );
          v12 = *(_DWORD *)(a1 + 56);
          v8 = *(int **)(a1 + 48);
        }
        v18 = (unsigned int)(v12 - 1);
        *(_DWORD *)(a1 + 56) = v18;
        v19 = &v8[10 * v18];
        if ( (unsigned int)v19[8] > 0x40 )
        {
          v20 = *((void **)v19 + 3);
          if ( v20 )
            operator delete[](v20);
        }
        if ( !*(_DWORD *)(a1 + 56) )
        {
          sub_2127580(&v73, a1 + 48, (__int64)v8, v4, v5, v6);
          v24 = *(unsigned int *)(a1 + 56);
          v25 = *(_QWORD *)(a1 + 48);
          v26 = 5 * v24;
          a2 = v24 + 1;
          v4 = 8 * v26;
          v27 = v25 + v4;
          if ( v25 == v25 + v4 )
          {
            if ( a2 > *(unsigned int *)(a1 + 60) )
            {
              sub_2131530(a1 + 48, a2);
              v27 = *(_QWORD *)(a1 + 48) + 40LL * *(unsigned int *)(a1 + 56);
            }
            v44 = _mm_loadu_si128((const __m128i *)&v73.m128_u16[4]);
            *(_DWORD *)v27 = v73.m128_i32[0];
            v45 = v76;
            *(__m128i *)(v27 + 8) = v44;
            *(_DWORD *)(v27 + 32) = v45;
            if ( v45 > 0x40 )
            {
              a2 = (unsigned __int64)&v75;
              sub_2205510(v27 + 24);
            }
            else
            {
              *(_QWORD *)(v27 + 24) = v75;
            }
            ++*(_DWORD *)(a1 + 56);
          }
          else
          {
            v28 = &v73;
            v29 = &v73;
            if ( a2 > *(unsigned int *)(a1 + 60) )
            {
              if ( (unsigned __int64)&v73 < v25 || v27 <= (unsigned __int64)&v73 )
              {
                v29 = &v73;
                sub_2131530(a1 + 48, a2);
                v25 = *(_QWORD *)(a1 + 48);
                v4 = 40LL * *(unsigned int *)(a1 + 56);
                v27 = v25 + v4;
              }
              else
              {
                v48 = (char *)&v73 - v25;
                sub_2131530(a1 + 48, a2);
                v25 = *(_QWORD *)(a1 + 48);
                v29 = (__m128 *)&v48[v25];
                v4 = 40LL * *(unsigned int *)(a1 + 56);
                v28 = (__m128 *)&v48[v25];
                v27 = v25 + v4;
              }
            }
            v30 = v25 + v4 - 40;
            v31 = _mm_loadu_si128((const __m128i *)(v30 + 8));
            *(_DWORD *)v27 = *(_DWORD *)v30;
            v32 = *(_DWORD *)(v30 + 32);
            *(__m128i *)(v27 + 8) = v31;
            *(_DWORD *)(v27 + 32) = v32;
            *(_QWORD *)(v27 + 24) = *(_QWORD *)(v30 + 24);
            v33 = *(_QWORD *)(a1 + 48);
            *(_DWORD *)(v30 + 32) = 0;
            v34 = *(_DWORD *)(a1 + 56);
            v35 = 40LL * v34;
            v36 = v33 + v35 - 40;
            v37 = v33 + v35;
            v38 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v36 - v25) >> 3);
            if ( (__int64)(v36 - v25) > 0 )
            {
              do
              {
                v36 -= 40;
                v37 -= 40;
                v39 = _mm_loadu_si128((const __m128i *)(v36 + 8));
                v15 = *(_DWORD *)(v37 + 32) <= 0x40u;
                *(_DWORD *)v37 = *(_DWORD *)v36;
                *(__m128i *)(v37 + 8) = v39;
                if ( !v15 )
                {
                  v40 = *(void **)(v37 + 24);
                  if ( v40 )
                  {
                    v60 = v37;
                    operator delete[](v40);
                    v37 = v60;
                  }
                }
                *(_QWORD *)(v37 + 24) = *(_QWORD *)(v36 + 24);
                *(_DWORD *)(v37 + 32) = *(_DWORD *)(v36 + 32);
                *(_DWORD *)(v36 + 32) = 0;
                --v38;
              }
              while ( v38 );
              v34 = *(_DWORD *)(a1 + 56);
              v33 = *(_QWORD *)(a1 + 48);
            }
            v41 = v34 + 1;
            *(_DWORD *)(a1 + 56) = v41;
            if ( (unsigned __int64)v28 >= v25 && v33 + 40 * v41 > (unsigned __int64)v28 )
              v29 = (__m128 *)((char *)v29 + 40);
            a2 = (unsigned __int64)&v29[1].m128_u64[1];
            v15 = *(_DWORD *)(v25 + 32) <= 0x40u;
            v42 = _mm_loadu_si128((const __m128i *)&v29->m128_u16[4]);
            *(_DWORD *)v25 = v29->m128_i32[0];
            *(__m128i *)(v25 + 8) = v42;
            if ( v15 && (v43 = v29[2].m128_u32[0], v43 <= 0x40) )
            {
              v4 = v29[1].m128_i64[1];
              *(_DWORD *)(v25 + 32) = v43;
              *(_QWORD *)(v25 + 24) = v4;
            }
            else
            {
              sub_22056A0(v25 + 24, a2);
            }
          }
          if ( v76 > 0x40 && v75 )
            operator delete[](v75);
          goto LABEL_44;
        }
        v8 = *(int **)(a1 + 48);
        v9 = *v8;
        if ( *v8 == 9 )
          goto LABEL_18;
      }
      break;
    }
LABEL_18:
    sub_21318A0(a1 + 48, a2, (__int64)v8, v4, v5, v6);
    v8 = *(int **)(a1 + 48);
    v9 = *v8;
  }
  v21 = a1;
  LOWORD(v76) = 259;
  v22 = 0;
  v73.m128_u64[0] = (unsigned __int64)"no matching '.endr' in definition";
  sub_2129C30(v21, v62, (int)&v73, 0, 0);
LABEL_20:
  if ( v72 > 0x40 && v71 )
    operator delete[](v71);
  if ( v68 > 0x40 && v67 )
    operator delete[](v67);
  return v22;
}
