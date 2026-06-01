unsigned __int64 __fastcall sub_1400A10(__int64 a1, __int64 a2, __m128i *a3, unsigned int a4, char a5)
{
  __int64 v5; // r15
  unsigned __int64 v10; // rbx
  unsigned __int64 result; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rsi
  unsigned __int64 *v14; // r8
  __int64 v15; // rdi
  _QWORD *v16; // rdi
  _QWORD *v17; // rcx
  unsigned __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __m128i *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __m128i *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rsi
  __m128i *v29; // rcx
  unsigned __int64 v30; // rdx
  __m128i *v31; // rax
  __m128i *v32; // rsi
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rsi
  _QWORD *v36; // r13
  __int64 v37; // r15
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __m128i *v41; // rax
  char v42; // al
  _QWORD *v43; // rbx
  _QWORD *i; // rbp
  __int64 *v45; // rsi
  void (*v46)(); // rcx
  __int64 v47; // rdx
  _QWORD *v48; // rsi
  void *v49; // r13
  __int8 *v50; // r15
  int v51; // edx
  void *v52; // rdi
  int v53; // r15d
  void *v54; // rdi
  __int64 v55; // rdx
  unsigned __int64 v57; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v58; // [rsp+10h] [rbp-B8h]
  __m128i *v59; // [rsp+10h] [rbp-B8h]
  __m128i *v60; // [rsp+10h] [rbp-B8h]
  __m128i *v61; // [rsp+18h] [rbp-B0h]
  int v62; // [rsp+18h] [rbp-B0h]
  unsigned int v63; // [rsp+20h] [rbp-A8h]
  int v64; // [rsp+24h] [rbp-A4h]
  __m128i *v65; // [rsp+28h] [rbp-A0h]
  __int64 *v66; // [rsp+30h] [rbp-98h] BYREF
  __int64 v67; // [rsp+38h] [rbp-90h] BYREF
  __m128i v68; // [rsp+40h] [rbp-88h] BYREF
  __m128i v69; // [rsp+50h] [rbp-78h] BYREF
  __m128i *v70; // [rsp+60h] [rbp-68h]
  __int64 v71; // [rsp+68h] [rbp-60h]
  __m128i v72; // [rsp+70h] [rbp-58h] BYREF
  __int64 v73; // [rsp+80h] [rbp-48h]

  v5 = a4;
  v10 = a4 | a2 & 0xFFFFFFFFFFFFFFF8LL;
  v66 = (__int64 *)a3[4].m128i_i64[0];
  result = (unsigned __int64)sub_13FE460(a1 + 368, (unsigned __int64 *)&v66);
  v12 = *(unsigned int *)(result + 8);
  v13 = *(_QWORD **)result;
  v14 = (unsigned __int64 *)(*(_QWORD *)result + 8 * v12);
  v15 = (8 * v12) >> 3;
  if ( (8 * v12) >> 5 )
  {
    if ( v10 == *v13 )
    {
      v17 = *(_QWORD **)result;
    }
    else if ( v10 == v13[1] )
    {
      v17 = v13 + 1;
    }
    else if ( v10 == v13[2] )
    {
      v17 = v13 + 2;
    }
    else
    {
      v16 = &v13[4 * ((8 * v12) >> 5)];
      v17 = v13 + 3;
      if ( v10 != v13[3] )
      {
        while ( 1 )
        {
          v17 = v13 + 4;
          if ( v16 == v13 + 4 )
          {
            v15 = v14 - v17;
            goto LABEL_14;
          }
          if ( v10 == v13[4] )
            goto LABEL_57;
          if ( v10 == v13[5] )
          {
            v17 = v13 + 5;
            goto LABEL_57;
          }
          if ( v10 == v13[6] )
          {
            v17 = v13 + 6;
            goto LABEL_57;
          }
          if ( v10 == v13[7] )
            break;
          v13 += 4;
        }
        v17 = v13 + 7;
      }
    }
LABEL_57:
    if ( v14 != v17 )
      return result;
    goto LABEL_18;
  }
  v17 = *(_QWORD **)result;
LABEL_14:
  if ( v15 != 2 )
  {
    if ( v15 != 3 )
    {
      if ( v15 != 1 )
        goto LABEL_18;
      goto LABEL_17;
    }
    if ( v10 == *v17 )
      goto LABEL_57;
    ++v17;
  }
  if ( v10 == *v17 )
    goto LABEL_57;
  ++v17;
LABEL_17:
  if ( v10 == *v17 )
    goto LABEL_57;
LABEL_18:
  v18 = v12 + 1;
  if ( v18 > *(unsigned int *)(result + 12) )
  {
    v57 = result;
    sub_2237220(result, result + 16, v18, 8);
    result = v57;
    v14 = (unsigned __int64 *)(*(_QWORD *)v57 + 8LL * *(unsigned int *)(v57 + 8));
  }
  *v14 = v10;
  ++*(_DWORD *)(result + 8);
  v19 = a3->m128i_i64[0];
  v68.m128i_i64[0] = (__int64)&v69;
  if ( (__m128i *)v19 == &a3[1] )
  {
    v69 = _mm_loadu_si128(a3 + 1);
  }
  else
  {
    v68.m128i_i64[0] = v19;
    v69.m128i_i64[0] = a3[1].m128i_i64[0];
  }
  v20 = a3->m128i_i64[1];
  a3->m128i_i64[0] = (__int64)a3[1].m128i_i64;
  a3->m128i_i64[1] = 0;
  v68.m128i_i64[1] = v20;
  v21 = (__m128i *)a3[2].m128i_i64[0];
  a3[1].m128i_i8[0] = 0;
  v70 = &v72;
  if ( v21 == &a3[3] )
  {
    v72 = _mm_loadu_si128(a3 + 3);
  }
  else
  {
    v70 = v21;
    v72.m128i_i64[0] = a3[3].m128i_i64[0];
  }
  a3[2].m128i_i64[0] = (__int64)a3[3].m128i_i64;
  v22 = a3[4].m128i_i64[0];
  v23 = a3[2].m128i_i64[1];
  a3[3].m128i_i8[0] = 0;
  v73 = v22;
  LODWORD(v22) = dword_2614760[v5];
  v71 = v23;
  a3[2].m128i_i64[1] = 0;
  LODWORD(v23) = v22;
  v64 = v22;
  v24 = *(__m128i **)(a2 + 448);
  v63 = v23 + 1;
  v25 = 9LL * *(unsigned int *)(a2 + 4LL * ((int)v23 + 1) + 420);
  v26 = *(unsigned int *)(a2 + 456);
  v27 = v25;
  v28 = 72 * v26;
  v58 = (unsigned __int64)&v24->m128i_u64[v27];
  v29 = (__m128i *)((char *)v24 + 72 * v26);
  if ( &v24->m128i_i8[v27 * 8] == (__int8 *)v29 )
  {
    sub_1400880(a2 + 448, &v68);
  }
  else
  {
    v30 = v26 + 1;
    v65 = &v68;
    v61 = &v68;
    if ( v30 > *(unsigned int *)(a2 + 460) )
    {
      v49 = (void *)(a2 + 464);
      if ( v24 > &v68 || v29 <= &v68 )
      {
        v60 = (__m128i *)sub_2237400(a2 + 448, a2 + 464, v30, 72, &v67);
        sub_1400730(a2 + 448, v60);
        v53 = v67;
        v24 = v60;
        v54 = *(void **)(a2 + 448);
        if ( v54 != v49 )
        {
          free(v54);
          v24 = v60;
        }
        *(_QWORD *)(a2 + 448) = v24;
        v58 = (unsigned __int64)&v24->m128i_u64[v27];
        v55 = *(unsigned int *)(a2 + 456);
        *(_DWORD *)(a2 + 460) = v53;
        v28 = 72 * v55;
        v29 = (__m128i *)((char *)v24 + 72 * v55);
        v61 = &v68;
      }
      else
      {
        v50 = (__int8 *)((char *)&v68 - (char *)v24);
        v59 = (__m128i *)sub_2237400(a2 + 448, a2 + 464, v30, 72, &v67);
        sub_1400730(a2 + 448, v59);
        v51 = v67;
        v24 = v59;
        v52 = *(void **)(a2 + 448);
        if ( v52 == v49 )
        {
          *(_QWORD *)(a2 + 448) = v59;
          *(_DWORD *)(a2 + 460) = v51;
        }
        else
        {
          v62 = v67;
          free(v52);
          v24 = v59;
          *(_QWORD *)(a2 + 448) = v59;
          *(_DWORD *)(a2 + 460) = v62;
        }
        v58 = (unsigned __int64)&v24->m128i_u64[v27];
        v61 = (__m128i *)&v50[(_QWORD)v24];
        v65 = (__m128i *)&v50[(_QWORD)v24];
        v28 = 72LL * *(unsigned int *)(a2 + 456);
        v29 = (__m128i *)((char *)v24 + v28);
      }
    }
    v31 = (__m128i *)((char *)v24 + v28 - 72);
    v29->m128i_i64[0] = (__int64)v29[1].m128i_i64;
    if ( (__m128i *)v31->m128i_i64[0] == &v31[1] )
    {
      v29[1] = _mm_loadu_si128(v31 + 1);
    }
    else
    {
      v29->m128i_i64[0] = v31->m128i_i64[0];
      v29[1].m128i_i64[0] = v31[1].m128i_i64[0];
    }
    v29->m128i_i64[1] = v31->m128i_i64[1];
    v31->m128i_i64[0] = (__int64)v31[1].m128i_i64;
    v31->m128i_i64[1] = 0;
    v31[1].m128i_i8[0] = 0;
    v29[2].m128i_i64[0] = (__int64)v29[3].m128i_i64;
    v32 = (__m128i *)v31[2].m128i_i64[0];
    if ( v32 == &v31[3] )
    {
      v29[3] = _mm_loadu_si128(v31 + 3);
    }
    else
    {
      v29[2].m128i_i64[0] = (__int64)v32;
      v29[3].m128i_i64[0] = v31[3].m128i_i64[0];
    }
    v29[2].m128i_i64[1] = v31[2].m128i_i64[1];
    v31[2].m128i_i64[0] = (__int64)v31[3].m128i_i64;
    v31[3].m128i_i8[0] = 0;
    v33 = *(unsigned int *)(a2 + 456);
    v31[2].m128i_i64[1] = 0;
    v29[4].m128i_i64[0] = v31[4].m128i_i64[0];
    v34 = v33;
    v35 = *(_QWORD *)(a2 + 448);
    v33 *= 72;
    v36 = (_QWORD *)(v35 + v33 - 72);
    v37 = v35 + v33;
    v38 = 0x8E38E38E38E38E39LL * ((__int64)((__int64)v36 - v58) >> 3);
    if ( (__int64)((__int64)v36 - v58) > 0 )
    {
      do
      {
        v36 -= 9;
        v37 -= 72;
        sub_A0AAD0(v37, v36);
        sub_A0AAD0(v37 + 32, v36 + 4);
        *(_QWORD *)(v37 + 64) = v36[8];
        --v38;
      }
      while ( v38 );
      v34 = *(_DWORD *)(a2 + 456);
      v35 = *(_QWORD *)(a2 + 448);
    }
    v39 = (unsigned int)(v34 + 1);
    *(_DWORD *)(a2 + 456) = v39;
    if ( v58 <= (unsigned __int64)v65 )
    {
      v40 = v35 + 72 * v39;
      v41 = (__m128i *)((char *)v61 + 72);
      if ( v40 <= (unsigned __int64)v65 )
        v41 = v61;
      v61 = v41;
    }
    sub_A0AAD0(v58, v61);
    sub_A0AAD0(v58 + 32, (__m128i *)v61[2].m128i_i64);
    *(_QWORD *)(v58 + 64) = v61[4].m128i_i64[0];
  }
  if ( v63 != 6 )
  {
    ++*(_DWORD *)(a2 + 4LL * v63 + 420);
    if ( v64 != 4 )
    {
      ++*(_DWORD *)(a2 + 4LL * (unsigned int)(v64 + 2) + 420);
      if ( v64 != 3 )
      {
        ++*(_DWORD *)(a2 + 4LL * (unsigned int)(v64 + 3) + 420);
        if ( v64 != 2 )
        {
          ++*(_DWORD *)(a2 + 4LL * (unsigned int)(v64 + 4) + 420);
          if ( v64 != 1 )
          {
            ++*(_DWORD *)(a2 + 4LL * (unsigned int)(v64 + 5) + 420);
            if ( v64 )
              ++*(_DWORD *)(a2 + 4LL * (unsigned int)(v64 + 6) + 420);
          }
        }
      }
    }
  }
  sub_13F29E0((__int64)&v68);
  v42 = sub_FEED10((char **)a2, *(_QWORD *)(a1 + 16));
  if ( a5 != 1 || v42 )
    sub_13C2980(*(_QWORD *)(a1 + 32), (unsigned __int64)v66, a4, v42);
  v43 = *(_QWORD **)(a1 + 40);
  result = *(unsigned int *)(a1 + 48);
  for ( i = &v43[result]; i != v43; ++v43 )
  {
    v45 = v66;
    v46 = *(void (**)())(*(_QWORD *)*v43 + 32LL);
    for ( result = v66[1]; result; result = *(_QWORD *)(result + 8) )
    {
      if ( (result & 4) == 0 )
        break;
      result &= 0xFFFFFFFFFFFFFFF8LL;
      if ( !result )
        break;
      v45 = (__int64 *)result;
    }
    v47 = *v45;
    v48 = v45 + 4;
    if ( v46 != nullsub_640 )
      result = ((__int64 (__fastcall *)(_QWORD, _QWORD *, __int64))v46)(*v43, v48, v47);
  }
  return result;
}
