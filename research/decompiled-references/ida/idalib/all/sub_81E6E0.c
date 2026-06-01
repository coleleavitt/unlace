__int64 __fastcall sub_81E6E0(__int64 a1, __m128i *a2)
{
  __int8 v3; // al
  __m128i *v4; // r12
  __int64 *v5; // r14
  size_t v6; // r15
  char *v7; // r13
  size_t v8; // rdi
  size_t v9; // rbx
  const void *v10; // rsi
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // rdx
  _BOOL4 v14; // eax
  unsigned __int64 v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v24; // rdx
  __int64 v25; // rax
  char v26; // dl
  __int64 *v27; // r15
  _BYTE *v28; // rbx
  __int64 v29; // rdi
  size_t v30; // r14
  size_t v31; // rdx
  size_t v32; // r13
  __int64 v33; // rdx
  __int64 *v34; // rax
  __int64 *v35; // rsi
  __int8 v36; // bl
  __int64 v37; // rax
  __int64 v38; // rdx
  __int8 v39; // al
  __int64 v40; // rcx
  __int64 v41; // rsi
  char v42; // bl
  __int64 *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // rdx
  __m128i *v46; // rax
  _QWORD *v47; // rdx
  _QWORD *v48; // rax
  __m128i *v50; // rax
  _QWORD *v51; // rdx
  unsigned __int8 v52; // al
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // rdx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  __int64 *v57; // rax
  __int64 *v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 *v61; // rax
  bool v62; // zf
  __int64 v63; // rax
  __int64 v64; // rsi
  unsigned __int64 v65; // rcx
  int v66; // edi
  __int64 v67; // rdi
  __int64 *v68; // rax
  unsigned __int64 v69; // [rsp+0h] [rbp-78h]
  __int64 v70; // [rsp+8h] [rbp-70h]
  char v71; // [rsp+18h] [rbp-60h]
  _BYTE v72[9]; // [rsp+2Eh] [rbp-4Ah] BYREF
  char v73; // [rsp+37h] [rbp-41h]
  unsigned __int64 v74; // [rsp+38h] [rbp-40h]

  v3 = a2->m128i_i8[0];
  v74 = __readfsqword(0x28u);
  v4 = a2;
  if ( v3 != 2 )
  {
    if ( v3 != 3 )
    {
      if ( v3 == 1 )
      {
        v5 = *(__int64 **)(a1 + 720);
        v6 = a2[1].m128i_u64[0];
        v7 = (char *)(*(_QWORD *)a1 + a2->m128i_i64[1]);
        v8 = v5[1];
        do
        {
          v11 = v5[2];
          if ( v11 == v8 )
          {
            v12 = sub_81BFF0(a1, (__int64)v5);
            v5 = v12;
            if ( !v12 )
              return 12;
            *(_QWORD *)(a1 + 720) = v12;
            v11 = v12[2];
            v8 = v12[1];
          }
          v9 = v11 - v8;
          v10 = v7;
          if ( v9 > v6 )
            v9 = v6;
          v7 += v9;
          memcpy((void *)(*v5 + v8), v10, v9);
          v8 = v9 + v5[1];
          v5[1] = v8;
          v6 -= v9;
        }
        while ( v6 );
        ++*(_QWORD *)(a1 + 1480);
        *(_QWORD *)(a1 + 1512) += v4[1].m128i_i64[0];
      }
      goto LABEL_40;
    }
    v13 = *(_QWORD *)(a1 + 72);
    if ( v13 )
    {
      if ( *(_DWORD *)(a1 + 536) )
      {
        v14 = 1;
        if ( *(_DWORD *)(v13 + 128) )
          v14 = *(_QWORD *)(a1 + 544) < *(_QWORD *)(v13 + 120) + (*(_QWORD *)(v13 + 112) << *(_QWORD *)(v13 + 72));
        *(_DWORD *)(a1 + 540) = v14;
        v15 = *(_QWORD *)(a1 + 504);
      }
      else
      {
        v62 = *(_DWORD *)(a1 + 496) == 3;
        v63 = *(_QWORD *)(a1 + 584);
        *(_DWORD *)(a1 + 536) = 1;
        if ( v62 )
        {
          if ( v63 )
          {
            v15 = v63 - *(_QWORD *)(a1 + 576);
            *(__m128 *)(v13 + 56) = _mm_loadh_ps((const double *)(a1 + 576));
          }
          else
          {
            v15 = *(_QWORD *)(v13 + 56);
          }
        }
        else
        {
          v64 = *(_QWORD *)(a1 + 576);
          *(_QWORD *)(v13 + 64) = v64;
          v15 = v63 - v64;
          v65 = *(_QWORD *)(a1 + 8) + (*(_QWORD *)(a1 + 8) >> 2);
          v66 = *(_DWORD *)(v13 + 128);
          if ( v65 >= v15 )
            v15 = v65;
          *(_QWORD *)(v13 + 56) = v15;
          if ( v66 )
          {
            v67 = *(_QWORD *)(v13 + 120) - v64;
            if ( v15 > v67 + (*(_QWORD *)(v13 + 112) << *(_QWORD *)(v13 + 72)) )
              v15 = v67 + (*(_QWORD *)(v13 + 112) << *(_QWORD *)(v13 + 72));
            *(_QWORD *)(v13 + 56) = v15;
          }
        }
        *(_QWORD *)(a1 + 504) = v15;
      }
      v16 = v4[1].m128i_i64[1];
      if ( v4->m128i_i8[1] )
      {
        v17 = v16 - *(_QWORD *)(v13 + 64);
        ++*(_QWORD *)(a1 + 1464);
        *(_QWORD *)(a1 + 1496) += v4[1].m128i_i64[0];
        v69 = v17;
      }
      else
      {
        ++*(_QWORD *)(a1 + 1472);
        v69 = v15 + v16;
        *(_QWORD *)(a1 + 1504) += v4[1].m128i_i64[0];
      }
    }
    else
    {
      v56 = a2[1].m128i_u64[1];
      ++*(_QWORD *)(a1 + 1472);
      v69 = v56;
      *(_QWORD *)(a1 + 1504) += a2[1].m128i_i64[0];
      v15 = *(_QWORD *)(a1 + 504);
    }
    LOBYTE(v70) = v69 & 0x80;
    if ( (v69 & 0xFFFFFF80) == 0 )
    {
      v19 = v69;
      goto LABEL_29;
    }
    v18 = v4->m128i_i64[1] + v15;
    v19 = v18 - v69;
    if ( v18 - v69 >= v69 )
    {
      LOBYTE(v70) = 0;
      v19 = v69;
    }
    else
    {
      LOBYTE(v70) = 1;
      if ( (v19 & 0xFFFFFF80) == 0 )
        goto LABEL_29;
    }
    v20 = *(_QWORD *)(a1 + 456);
    if ( v20 )
    {
      v21 = 2;
      while ( 1 )
      {
        v22 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 8 * v21 - 16);
        if ( v69 >= v22 && v69 - v22 < v19 )
        {
          LOBYTE(v70) = v21;
          v19 = v69 - v22;
          if ( (((_DWORD)v69 - (_DWORD)v22) & 0xFFFFFF80) == 0 )
            break;
        }
        if ( ++v21 == v20 + 2 )
          goto LABEL_27;
      }
    }
    else
    {
LABEL_27:
      v23 = *(_QWORD *)(a1 + 464);
      if ( v23 )
      {
        v24 = v69 % (v23 << 8);
        if ( v69 == *(_QWORD *)(*(_QWORD *)(a1 + 488) + 8 * v24) )
        {
          v58 = *(__int64 **)(a1 + 736);
          v59 = v58[1];
          v70 = v20 + (v24 >> 8) + 2;
          if ( v59 == v58[2] )
          {
            v71 = v24;
            v68 = sub_81BFF0(a1, (__int64)v58);
            LOBYTE(v24) = v71;
            v58 = v68;
            if ( !v68 )
              return 12;
            *(_QWORD *)(a1 + 736) = v68;
            v59 = v68[1];
          }
          v60 = *v58;
          v58[1] = v59 + 1;
          *(_BYTE *)(v60 + v59) = v24;
          goto LABEL_74;
        }
      }
    }
LABEL_29:
    v25 = 10;
    do
    {
      --v25;
      v26 = v19 | 0x80;
      v19 >>= 7;
      v72[v25] = v26;
    }
    while ( v19 );
    v27 = *(__int64 **)(a1 + 736);
    v73 &= ~0x80u;
    v28 = &v72[v25];
    v29 = v27[1];
    v30 = 10 - v25;
    do
    {
      v33 = v27[2];
      if ( v33 == v29 )
      {
        v34 = sub_81BFF0(a1, (__int64)v27);
        v27 = v34;
        if ( !v34 )
          return 12;
        *(_QWORD *)(a1 + 736) = v34;
        v33 = v34[2];
        v29 = v34[1];
      }
      v31 = v33 - v29;
      if ( v31 > v30 )
        v31 = v30;
      v32 = v31;
      memcpy((void *)(*v27 + v29), v28, v31);
      v28 += v32;
      v29 = v32 + v27[1];
      v27[1] = v29;
      v30 -= v32;
    }
    while ( v30 );
LABEL_74:
    sub_816F80((_QWORD *)(a1 + 456), v69);
    v4->m128i_i8[0] += v70;
    goto LABEL_40;
  }
  v35 = *(__int64 **)(a1 + 720);
  v36 = v4->m128i_i8[1];
  v37 = v35[1];
  if ( v37 == v35[2] )
  {
    v57 = sub_81BFF0(a1, (__int64)v35);
    v35 = v57;
    if ( !v57 )
      return 12;
    *(_QWORD *)(a1 + 720) = v57;
    v37 = v57[1];
  }
  v38 = *v35;
  v35[1] = v37 + 1;
  *(_BYTE *)(v38 + v37) = v36;
  ++*(_QWORD *)(a1 + 1488);
  *(_QWORD *)(a1 + 1520) += v4[1].m128i_i64[0];
LABEL_40:
  *(_QWORD *)(a1 + 528) += v4[1].m128i_i64[0];
  v39 = v4->m128i_i8[0];
  v4->m128i_i8[3] = 0;
  v40 = *(_QWORD *)(a1 + 784);
  if ( v39 == 1 )
  {
    v55 = v4[1].m128i_u64[0];
    v4->m128i_i8[2] = 1;
    if ( v55 <= 0x11 )
    {
      v4->m128i_i8[2] = v55 + 1;
      if ( v55 == 1 && v40 && *(_QWORD *)(v40 + 16) == 4 && *(_BYTE *)v40 > 2u )
        *(_BYTE *)(v40 + 3) = *(_BYTE *)v40 - 12;
    }
  }
  else if ( v39 == 2 )
  {
    v4->m128i_i8[2] = 0;
  }
  else
  {
    v52 = v39 - 3;
    v53 = v4[1].m128i_u64[0];
    v4->m128i_i8[2] = 16 * v52 + 19;
    if ( v53 - 4 <= 0xE )
    {
      v4->m128i_i8[2] = 16 * v52 + 19 + v53 - 3;
      if ( v40 )
      {
        if ( *(_BYTE *)v40 == 1 )
        {
          v54 = *(_QWORD *)(v40 + 16);
          if ( v53 <= 6 && v54 <= 4 )
          {
            if ( v52 > 5u )
            {
              if ( v53 == 4 )
                *(_BYTE *)(v40 + 3) = v54 + 4 * v52 - 46;
            }
            else
            {
              *(_BYTE *)(v40 + 3) = 3 * v54 + v53 + 12 * v52 - 100;
            }
          }
        }
      }
    }
  }
  v41 = *(_QWORD *)(a1 + 784);
  if ( !v41 )
    goto LABEL_51;
  v42 = *(_BYTE *)(v41 + 3);
  if ( v42 )
  {
    v43 = *(__int64 **)(a1 + 728);
    v44 = v43[1];
    if ( v44 != v43[2] )
    {
LABEL_46:
      v45 = *v43;
      v43[1] = v44 + 1;
      *(_BYTE *)(v45 + v44) = v42;
      v46 = *(__m128i **)(a1 + 784);
      if ( v46->m128i_i8[0] != 1 )
      {
        v47 = *(_QWORD **)(a1 + 776);
        *(_QWORD *)(a1 + 776) = v46 + 2;
        *v47 = v46 + 2;
        v46[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 768), (__m128i)(unsigned __int64)v47);
      }
      if ( v4->m128i_i8[0] != 1 )
      {
        v48 = *(_QWORD **)(a1 + 776);
        *(_QWORD *)(a1 + 776) = v4 + 2;
        *v48 = v4 + 2;
        v4[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 768), (__m128i)(unsigned __int64)v48);
      }
      v4 = nullptr;
LABEL_51:
      *(_QWORD *)(a1 + 784) = v4;
      return 0;
    }
    v61 = sub_81BFF0(a1, (__int64)v43);
    v43 = v61;
    if ( v61 )
    {
      *(_QWORD *)(a1 + 728) = v61;
      v44 = v61[1];
      goto LABEL_46;
    }
  }
  else if ( !(unsigned int)sub_81E080(a1, v41, *(_BYTE *)(v41 + 2)) )
  {
    v50 = *(__m128i **)(a1 + 784);
    if ( v50->m128i_i8[0] != 1 )
    {
      v51 = *(_QWORD **)(a1 + 776);
      *(_QWORD *)(a1 + 776) = v50 + 2;
      *v51 = v50 + 2;
      v50[2] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)(a1 + 768), (__m128i)(unsigned __int64)v51);
    }
    goto LABEL_51;
  }
  return 12;
}
