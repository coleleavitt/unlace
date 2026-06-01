unsigned __int64 __fastcall sub_1FCF3C0(__int64 a1, __m128 si128)
{
  unsigned __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  int v6; // ecx
  int v7; // r12d
  int v8; // r15d
  unsigned int v9; // ecx
  unsigned int v10; // r15d
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v16; // r15d
  _QWORD *v17; // r12
  __int64 v18; // rcx
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ecx
  unsigned int v22; // r15d
  _QWORD *v23; // rax
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // r15
  int v28; // eax
  _QWORD *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rsi
  _QWORD *j; // rsi
  int v33; // eax
  _QWORD *v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned __int64 v37; // rdx
  unsigned int v38; // edx
  __int64 v39; // rsi
  unsigned int v40; // edx
  __int64 v41; // rsi
  _QWORD *v42; // rax
  __int64 v43; // rcx
  int v44; // eax
  unsigned int v45; // eax
  int v46; // eax
  _QWORD *v47; // rax
  unsigned int v48; // eax
  __int64 v49; // rdx
  __m128i *v50; // rax
  unsigned __int64 v51; // rcx
  __int64 v52; // r14
  int v53; // r12d
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  _QWORD *v58; // rax
  __int64 v59; // rdx
  _QWORD *i; // rdx
  __int64 v61; // r14
  int v62; // r12d
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned __int64 v69; // rdx
  unsigned __int64 v70; // rsi
  unsigned int v71; // edx
  unsigned __int64 v72; // rax
  unsigned int v73; // edx
  unsigned __int64 v74; // rax
  __int64 v75; // [rsp+0h] [rbp-48h]
  _QWORD *v76; // [rsp+8h] [rbp-40h]
  _QWORD *v77; // [rsp+8h] [rbp-40h]
  _QWORD *v78; // [rsp+8h] [rbp-40h]

  result = *(unsigned int *)(a1 + 32);
  if ( (_DWORD)result )
  {
    v4 = 0;
    v75 = 8LL * (unsigned int)(result - 1) + 8;
    do
    {
      sub_1FCE250(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(a1 + 24) + v4), *(double *)si128.m128_u64);
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
      v6 = *(_DWORD *)(v5 + 48);
      v7 = *(_DWORD *)(v5 + 56);
      v8 = 3 << v6;
      v9 = v7 + v6;
      v10 = *(_DWORD *)(v5 + 52) | v8;
      *(_DWORD *)(v5 + 52) = v10;
      if ( v9 > 0x1F )
      {
        v11 = *(_QWORD **)(v5 + 24);
        v12 = v11[1];
        if ( (unsigned __int64)(v12 + 4) > v11[2] )
        {
          v76 = *(_QWORD **)(v5 + 24);
          sub_2236E10(v76, v11 + 3, v12 + 4, 1);
          v11 = v76;
          v12 = v76[1];
        }
        *(_DWORD *)(*v11 + v12) = v10;
        v10 = 0;
        v11[1] += 4LL;
        v13 = *(_DWORD *)(v5 + 48);
        if ( v13 )
          v10 = 3u >> (32 - v13);
        v9 = ((_BYTE)v7 + (_BYTE)v13) & 0x1F;
      }
      *(_DWORD *)(v5 + 48) = v9;
      v14 = 51 << v9;
      v15 = v9 + 6;
      v16 = v14 | v10;
      *(_DWORD *)(v5 + 52) = v16;
      if ( v15 > 0x1F )
      {
        v17 = *(_QWORD **)(v5 + 24);
        v18 = v17[1];
        if ( (unsigned __int64)(v18 + 4) > v17[2] )
        {
          sub_2236E10(*(_QWORD *)(v5 + 24), v17 + 3, v18 + 4, 1);
          v18 = v17[1];
        }
        *(_DWORD *)(*v17 + v18) = v16;
        v19 = *(_DWORD *)(v5 + 48);
        v16 = 0;
        v17[1] += 4LL;
        if ( v19 )
          v16 = 0x33u >> (32 - v19);
        v15 = ((_BYTE)v19 + 6) & 0x1F;
      }
      *(_DWORD *)(v5 + 48) = v15;
      v20 = 4 << v15;
      v21 = v15 + 6;
      v22 = v20 | v16;
      *(_DWORD *)(v5 + 52) = v22;
      if ( v21 > 0x1F )
      {
        v23 = *(_QWORD **)(v5 + 24);
        v24 = v23[1];
        if ( (unsigned __int64)(v24 + 4) > v23[2] )
        {
          v77 = *(_QWORD **)(v5 + 24);
          sub_2236E10(v77, v23 + 3, v24 + 4, 1);
          v23 = v77;
          v24 = v77[1];
        }
        *(_DWORD *)(*v23 + v24) = v22;
        v22 = 0;
        v23[1] += 4LL;
        v25 = *(_DWORD *)(v5 + 48);
        if ( v25 )
          v22 = 4u >> (32 - v25);
        *(_DWORD *)(v5 + 52) = v22;
        v21 = ((_BYTE)v25 + 6) & 0x1F;
      }
      *(_DWORD *)(v5 + 48) = v21;
      v26 = v21 + 6;
      if ( v26 > 0x1F )
      {
        v42 = *(_QWORD **)(v5 + 24);
        v43 = v42[1];
        if ( (unsigned __int64)(v43 + 4) > v42[2] )
        {
          v78 = *(_QWORD **)(v5 + 24);
          sub_2236E10(v78, v42 + 3, v43 + 4, 1);
          v42 = v78;
          v43 = v78[1];
        }
        *(_DWORD *)(*v42 + v43) = v22;
        v42[1] += 4LL;
        v44 = *(_DWORD *)(v5 + 48);
        *(_DWORD *)(v5 + 52) = 0;
        *(_DWORD *)(v5 + 48) = ((_BYTE)v44 + 6) & 0x1F;
      }
      else
      {
        *(_DWORD *)(v5 + 48) = v26;
      }
      v27 = *(_QWORD *)(a1 + 8);
      v28 = *(_DWORD *)(v27 + 1040);
      if ( v28 )
      {
        v40 = 4 * v28;
        v41 = *(unsigned int *)(v27 + 1048);
        v29 = *(_QWORD **)(v27 + 1032);
        if ( (unsigned int)(4 * v28) < 0x40 )
          v40 = 64;
        if ( (unsigned int)v41 > v40 )
        {
          v45 = v28 - 1;
          if ( v45 )
          {
            _BitScanReverse(&v45, v45);
            v46 = 1 << (33 - (v45 ^ 0x1F));
            if ( v46 < 64 )
              v46 = 64;
            if ( (_DWORD)v41 == v46 )
            {
              *(_QWORD *)(v27 + 1040) = 0;
              v47 = &v29[2 * v41];
              do
              {
                *v29 = -4096;
                v29 += 2;
              }
              while ( v47 != v29 );
              goto LABEL_52;
            }
            v73 = 4 * v46 / 3u;
            v74 = (((((v73 + 1) | ((unsigned __int64)(v73 + 1) >> 1)) >> 2)
                  | (v73 + 1)
                  | ((unsigned __int64)(v73 + 1) >> 1)
                  | (((((v73 + 1) | ((unsigned __int64)(v73 + 1) >> 1)) >> 2)
                    | (v73 + 1)
                    | ((unsigned __int64)(v73 + 1) >> 1)) >> 4)) >> 8)
                | (((v73 + 1) | ((unsigned __int64)(v73 + 1) >> 1)) >> 2)
                | (v73 + 1)
                | ((unsigned __int64)(v73 + 1) >> 1)
                | (((((v73 + 1) | ((unsigned __int64)(v73 + 1) >> 1)) >> 2)
                  | (v73 + 1)
                  | ((unsigned __int64)(v73 + 1) >> 1)) >> 4);
            v53 = (v74 | (v74 >> 16)) + 1;
            v52 = 16 * ((v74 | (v74 >> 16)) + 1);
          }
          else
          {
            v52 = 2048;
            v53 = 128;
          }
          operator delete(v29, 16 * v41, 8);
          *(_DWORD *)(v27 + 1048) = v53;
          v58 = (_QWORD *)sub_22300B0(v52, 8, v54, v55, v56, v57);
          v59 = *(unsigned int *)(v27 + 1048);
          *(_QWORD *)(v27 + 1040) = 0;
          *(_QWORD *)(v27 + 1032) = v58;
          for ( i = &v58[2 * v59]; i != v58; v58 += 2 )
            *v58 = -4096;
          goto LABEL_52;
        }
        v31 = 2 * v41;
      }
      else
      {
        if ( !*(_DWORD *)(v27 + 1044) )
          goto LABEL_29;
        v29 = *(_QWORD **)(v27 + 1032);
        v30 = *(unsigned int *)(v27 + 1048);
        v31 = 2 * v30;
        if ( (unsigned int)v30 > 0x40 )
        {
          operator delete(v29, v31 * 8, 8);
          *(_QWORD *)(v27 + 1032) = 0;
          *(_QWORD *)(v27 + 1040) = 0;
          *(_DWORD *)(v27 + 1048) = 0;
LABEL_52:
          v27 = *(_QWORD *)(a1 + 8);
          goto LABEL_29;
        }
      }
      for ( j = &v29[v31]; j != v29; v29 += 2 )
        *v29 = -4096;
      *(_QWORD *)(v27 + 1040) = 0;
      v27 = *(_QWORD *)(a1 + 8);
LABEL_29:
      v33 = *(_DWORD *)(v27 + 1016);
      if ( v33 )
      {
        v38 = 4 * v33;
        v39 = *(unsigned int *)(v27 + 1024);
        v34 = *(_QWORD **)(v27 + 1008);
        if ( (unsigned int)(4 * v33) < 0x40 )
          v38 = 64;
        if ( (unsigned int)v39 <= v38 )
        {
          v36 = v39;
LABEL_32:
          result = (unsigned __int64)&v34[v36];
          if ( v34 != &v34[v36] )
          {
            result = (unsigned __int64)v34;
            v37 = ((unsigned __int64)(v36 * 8 - 8) >> 3) + 1;
            if ( v36 == 1 )
              goto LABEL_36;
            do
            {
              si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_23A8C80);
              result += 16LL;
              *(__m128 *)(result - 16) = si128;
            }
            while ( (_QWORD *)result != &v34[2 * (v37 >> 1)] );
            result = v37 & 0xFFFFFFFFFFFFFFFELL;
            v34 += v37 & 0xFFFFFFFFFFFFFFFELL;
            if ( v37 != (v37 & 0xFFFFFFFFFFFFFFFELL) )
LABEL_36:
              *v34 = -4096;
          }
          *(_QWORD *)(v27 + 1016) = 0;
          goto LABEL_38;
        }
        v48 = v33 - 1;
        if ( v48 )
        {
          _BitScanReverse(&v48, v48);
          v49 = (unsigned int)(1 << (33 - (v48 ^ 0x1F)));
          if ( (int)v49 < 64 )
            v49 = 64;
          if ( (_DWORD)v49 == (_DWORD)v39 )
          {
            v50 = *(__m128i **)(v27 + 1008);
            *(_QWORD *)(v27 + 1016) = 0;
            v51 = ((unsigned __int64)(8 * v49 - 8) >> 3) + 1;
            do
            {
              ++v50;
              v50[-1] = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
            }
            while ( v50 != (__m128i *)&v34[2 * (v51 >> 1)] );
            result = (unsigned __int64)&v34[v51 & 0xFFFFFFFFFFFFFFFELL];
            if ( (v51 & 0xFFFFFFFFFFFFFFFELL) == v51 )
              goto LABEL_38;
LABEL_67:
            *(_QWORD *)result = -4096;
            goto LABEL_38;
          }
          v71 = 4 * (int)v49 / 3u;
          v72 = (((((v71 + 1) | ((unsigned __int64)(v71 + 1) >> 1)) >> 2)
                | (v71 + 1)
                | ((unsigned __int64)(v71 + 1) >> 1)
                | (((((v71 + 1) | ((unsigned __int64)(v71 + 1) >> 1)) >> 2)
                  | (v71 + 1)
                  | ((unsigned __int64)(v71 + 1) >> 1)) >> 4)) >> 8)
              | (((v71 + 1) | ((unsigned __int64)(v71 + 1) >> 1)) >> 2)
              | (v71 + 1)
              | ((unsigned __int64)(v71 + 1) >> 1)
              | (((((v71 + 1) | ((unsigned __int64)(v71 + 1) >> 1)) >> 2)
                | (v71 + 1)
                | ((unsigned __int64)(v71 + 1) >> 1)) >> 4);
          v62 = (v72 | (v72 >> 16)) + 1;
          v61 = 8 * ((v72 | (v72 >> 16)) + 1);
        }
        else
        {
          v61 = 1024;
          v62 = 128;
        }
        operator delete(v34, 8 * v39, 8);
        *(_DWORD *)(v27 + 1024) = v62;
        result = sub_22300B0(v61, 8, v63, v64, v65, v66);
        v67 = *(unsigned int *)(v27 + 1024);
        *(_QWORD *)(v27 + 1016) = 0;
        *(_QWORD *)(v27 + 1008) = result;
        v68 = 8 * v67;
        if ( result == result + v68 )
          goto LABEL_38;
        v69 = result;
        v70 = ((unsigned __int64)(v68 - 8) >> 3) + 1;
        if ( v68 != 8 )
        {
          do
          {
            v69 += 16LL;
            *(__m128i *)(v69 - 16) = _mm_load_si128((const __m128i *)&xmmword_23A8C80);
          }
          while ( result + 16 * (v70 >> 1) != v69 );
          result += 8 * (v70 & 0xFFFFFFFFFFFFFFFELL);
          if ( (v70 & 0xFFFFFFFFFFFFFFFELL) != v70 )
            *(_QWORD *)result = -4096;
          goto LABEL_38;
        }
        goto LABEL_67;
      }
      result = *(unsigned int *)(v27 + 1020);
      if ( (_DWORD)result )
      {
        v34 = *(_QWORD **)(v27 + 1008);
        v35 = *(unsigned int *)(v27 + 1024);
        v36 = v35;
        if ( (unsigned int)v35 <= 0x40 )
          goto LABEL_32;
        result = operator delete(v34, v36 * 8, 8);
        *(_QWORD *)(v27 + 1008) = 0;
        *(_QWORD *)(v27 + 1016) = 0;
        *(_DWORD *)(v27 + 1024) = 0;
      }
LABEL_38:
      v4 += 8;
    }
    while ( v75 != v4 );
  }
  *(_DWORD *)(a1 + 32) = 0;
  return result;
}
