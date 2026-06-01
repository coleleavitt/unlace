unsigned __int64 __fastcall sub_1AA1E60(_BYTE *a1, __int64 a2, int a3, int a4, _QWORD *a5, __int64 a6, __int128 a7)
{
  void *v8; // r8
  int v11; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r12d
  const __m128i *v16; // r12
  bool v17; // dl
  __int64 v18; // rax
  bool v19; // zf
  unsigned int v20; // eax
  __int8 v21; // al
  __m128i v22; // xmm1
  unsigned __int64 result; // rax
  __m128i v24; // xmm3
  __int64 v25; // r10
  _QWORD *v26; // r12
  _QWORD *i; // r9
  __int64 v28; // rax
  __int64 v29; // rax
  _QWORD *v30; // r9
  _QWORD *v31; // rax
  __int64 v32; // rax
  _BYTE *v33; // rdi
  size_t v34; // rdx
  __int64 *v35; // r12
  __int64 *v36; // r14
  __int64 v37; // r13
  __int64 v38; // rax
  __m128i v39; // xmm2
  __int64 v40; // rax
  _QWORD *v41; // rax
  int v42; // edx
  __int64 v43; // rax
  char v44; // dl
  _QWORD *v45; // r12
  __int64 v46; // r10
  _QWORD *v47; // r9
  __int64 v48; // r8
  __int64 v49; // rax
  __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // r8
  int v53; // eax
  __int64 v54; // r8
  char v55; // dl
  _QWORD *v56; // [rsp+8h] [rbp-50h]
  _QWORD *v57; // [rsp+8h] [rbp-50h]
  bool v58; // [rsp+8h] [rbp-50h]
  _QWORD *v59; // [rsp+8h] [rbp-50h]
  __int64 v60; // [rsp+8h] [rbp-50h]
  __int64 v61; // [rsp+8h] [rbp-50h]
  _QWORD *v62; // [rsp+10h] [rbp-48h]
  _QWORD *v63; // [rsp+10h] [rbp-48h]
  __int64 v64; // [rsp+18h] [rbp-40h]
  __int64 v65; // [rsp+18h] [rbp-40h]

  v8 = a1 + 80;
  v11 = a3;
  *(_QWORD *)a1 = a2;
  *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 8));
  v13 = *(_QWORD *)(a2 + 24);
  a1[32] = a3;
  *((_QWORD *)a1 + 3) = v13;
  *(_QWORD *)(a1 + 36) = *(_QWORD *)(a2 + 272);
  *((_DWORD *)a1 + 11) = *(_DWORD *)(a2 + 280);
  *((_DWORD *)a1 + 12) = *(_DWORD *)(a2 + 284);
  v14 = *(_QWORD *)(a2 + 288);
  *((_QWORD *)a1 + 8) = a1 + 80;
  *(_QWORD *)(a1 + 52) = v14;
  *((_QWORD *)a1 + 9) = 0x600000000LL;
  v15 = *(_DWORD *)(a2 + 112);
  if ( v15 )
  {
    v33 = a1 + 64;
    if ( v33 != (_BYTE *)(a2 + 104) )
    {
      v34 = 8LL * v15;
      if ( v15 <= 6uLL
        || (sub_2237220(v33, v8, v15, 8), v8 = *((void **)a1 + 8), (v34 = 8LL * *(unsigned int *)(a2 + 112)) != 0) )
      {
        memcpy(v8, *(const void **)(a2 + 104), v34);
      }
      *((_DWORD *)a1 + 18) = v15;
      v11 = (unsigned __int8)a1[32];
    }
  }
  v16 = *(const __m128i **)a1;
  *((_QWORD *)a1 + 16) = *(_QWORD *)a1;
  v17 = ((1LL << v11) & 0xE87) == 0;
  *((_DWORD *)a1 + 34) = v16[2].m128i_i32[0];
  v18 = v16[2].m128i_i64[1];
  a1[168] = 0;
  v19 = v16[4].m128i_i8[0] == 0;
  *((_QWORD *)a1 + 18) = v18;
  if ( !v19 )
  {
    v20 = v16[3].m128i_u32[2];
    *((_DWORD *)a1 + 40) = v20;
    if ( v20 > 0x40 )
    {
      v58 = ((1LL << v11) & 0xE87) == 0;
      sub_2205510(a1 + 152);
      v11 = (unsigned __int8)a1[32];
      v17 = v58;
    }
    else
    {
      *((_QWORD *)a1 + 19) = v16[3].m128i_i64[0];
    }
    v21 = v16[3].m128i_i8[12];
    a1[168] = 1;
    a1[164] = v21;
  }
  a1[176] = v16[4].m128i_i8[8];
  a1[177] = v16[4].m128i_i8[9];
  v22 = _mm_loadu_si128(v16 + 5);
  a1[200] = v17;
  *(__m128i *)(a1 + 184) = v22;
  if ( (unsigned __int8)v11 > 2u )
  {
    result = (unsigned int)(v11 - 9);
    if ( (unsigned __int8)(v11 - 9) <= 2u )
    {
      v24 = _mm_loadu_si128((const __m128i *)&a7);
      v25 = a2 + 120;
      v26 = (_QWORD *)a7;
      *(_BYTE *)(*(_QWORD *)a1 + 8LL) = v11;
      *(__m128i *)(*(_QWORD *)a1 + 16LL) = v24;
      for ( i = &v26[*((_QWORD *)&a7 + 1)]; i != v26; ++v26 )
      {
        v54 = *v26;
        if ( *(_BYTE *)(*v26 + 8LL) == 41 && *(_QWORD *)(v54 + 32) )
        {
          v32 = *(unsigned int *)(a2 + 112);
          if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 116) )
          {
            v64 = *v26;
            v62 = i;
            v60 = v25;
            sub_2237220(a2 + 104, v25, v32 + 1, 8);
            v32 = *(unsigned int *)(a2 + 112);
            v54 = v64;
            i = v62;
            v25 = v60;
          }
          *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8 * v32) = v54;
          ++*(_DWORD *)(a2 + 112);
        }
      }
      v56 = i;
      sub_1AA1820(a1, a5, a6, (_QWORD *)a7, *((__int64 *)&a7 + 1));
      sub_1AA1B70(a1, (__int64)a5, a6, (char *)a7, *((__int64 *)&a7 + 1));
      v28 = *(_QWORD *)a1;
      *(_DWORD *)(v28 + 272) = 0;
      *(_BYTE *)(v28 + 276) = 20;
      *(_DWORD *)(*(_QWORD *)a1 + 280LL) = 0;
      *(_DWORD *)(*(_QWORD *)a1 + 284LL) = 0;
      v29 = *(_QWORD *)a1;
      *(_BYTE *)(v29 + 288) = 20;
      *(_DWORD *)(v29 + 292) = 0;
      result = (unsigned __int64)sub_1AA0ED0((__int64)&a7);
      v30 = v56;
      if ( (_QWORD *)result == v56 )
      {
        result = *(_QWORD *)a1;
        v44 = a1[32];
        *(_DWORD *)(result + 292) = a4;
        *(_BYTE *)(result + 288) = v44;
      }
      if ( a1[32] == 11 )
      {
        if ( a6 )
          return result;
        v41 = sub_1AA1010((__int64)&a7);
        v30 = v56;
        if ( v41 != v56 )
        {
          v42 = *(_DWORD *)(*v41 + 12LL);
          v43 = *(_QWORD *)a1;
          *(_DWORD *)(v43 + 272) = v42;
          *(_BYTE *)(v43 + 276) = 11;
        }
        goto LABEL_15;
      }
    }
    else
    {
      if ( (_BYTE)v11 != 7 )
        return result;
      v45 = (_QWORD *)a7;
      v46 = a2 + 120;
      v47 = (_QWORD *)(a7 + 8LL * *((_QWORD *)&a7 + 1));
      if ( v47 != (_QWORD *)a7 )
      {
        do
        {
          v48 = *v45;
          if ( *(_BYTE *)(*v45 + 8LL) == 41 && *(_QWORD *)(v48 + 32) )
          {
            v49 = *(unsigned int *)(a2 + 112);
            if ( v49 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 116) )
            {
              v65 = *v45;
              v63 = v47;
              v61 = v46;
              sub_2237220(a2 + 104, v46, v49 + 1, 8);
              v49 = *(unsigned int *)(a2 + 112);
              v48 = v65;
              v47 = v63;
              v46 = v61;
            }
            *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8 * v49) = v48;
            ++*(_DWORD *)(a2 + 112);
          }
          ++v45;
        }
        while ( v47 != v45 );
      }
      v59 = v47;
      sub_1AA1820(a1, a5, a6, (_QWORD *)a7, *((__int64 *)&a7 + 1));
      sub_1AA1B70(a1, (__int64)a5, a6, (char *)a7, *((__int64 *)&a7 + 1));
      v50 = *(_QWORD *)a1;
      *(_BYTE *)(v50 + 288) = 20;
      *(_DWORD *)(v50 + 292) = 0;
      result = (unsigned __int64)sub_1AA0ED0((__int64)&a7);
      v30 = v59;
      if ( (_QWORD *)result == v59 )
      {
        result = *(_QWORD *)a1;
        v55 = a1[32];
        *(_DWORD *)(result + 292) = a4;
        *(_BYTE *)(result + 288) = v55;
      }
      if ( *(_BYTE *)(*(_QWORD *)a1 + 8LL) == 2 )
      {
        if ( a6 )
          return result;
        v51 = sub_1AA1010((__int64)&a7);
        v30 = v59;
        if ( v51 != v59 )
        {
          v53 = *(_DWORD *)(*v51 + 12LL);
          *(_BYTE *)(v52 + 276) = 2;
          *(_DWORD *)(v52 + 272) = v53;
        }
        goto LABEL_15;
      }
    }
    if ( a6 )
      return result;
LABEL_15:
    v57 = v30;
    v31 = sub_1AA1150((__int64)&a7);
    if ( v31 != v57 )
      *(_DWORD *)(*(_QWORD *)a1 + 280LL) = *(_DWORD *)(*v31 + 12LL);
    result = (unsigned __int64)sub_1AA1290((__int64)&a7);
    if ( (_QWORD *)result != v57 )
    {
      result = *(unsigned int *)(*(_QWORD *)result + 12LL);
      *(_DWORD *)(*(_QWORD *)a1 + 284LL) = result;
    }
    return result;
  }
  v35 = (__int64 *)a7;
  v36 = (__int64 *)(a7 + 8LL * *((_QWORD *)&a7 + 1));
  if ( v36 != (__int64 *)a7 )
  {
    do
    {
      while ( 1 )
      {
        v37 = *v35;
        if ( *(_BYTE *)(*v35 + 8) == 41 )
        {
          if ( *(_QWORD *)(v37 + 32) )
            break;
        }
        if ( v36 == ++v35 )
          goto LABEL_38;
      }
      v38 = *(unsigned int *)(a2 + 112);
      if ( v38 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 116) )
      {
        sub_2237220(a2 + 104, a2 + 120, v38 + 1, 8);
        v38 = *(unsigned int *)(a2 + 112);
      }
      ++v35;
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8 * v38) = v37;
      ++*(_DWORD *)(a2 + 112);
    }
    while ( v36 != v35 );
LABEL_38:
    LOBYTE(v11) = a1[32];
  }
  v39 = _mm_loadu_si128((const __m128i *)&a7);
  *(_BYTE *)(*(_QWORD *)a1 + 8LL) = v11;
  *(__m128i *)(*(_QWORD *)a1 + 16LL) = v39;
  v40 = *(_QWORD *)a1;
  *(_DWORD *)(v40 + 272) = 0;
  *(_BYTE *)(v40 + 276) = 20;
  *(_DWORD *)(*(_QWORD *)a1 + 280LL) = 0;
  *(_DWORD *)(*(_QWORD *)a1 + 284LL) = 0;
  result = *(_QWORD *)a1;
  *(_BYTE *)(result + 288) = 20;
  *(_DWORD *)(result + 292) = 0;
  return result;
}
