__int64 __fastcall sub_4F5B00(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax
  __int64 v10; // r14
  __int64 v11; // r12
  __int64 *v12; // r14
  __m128i v13; // xmm1
  __int64 v14; // rdx
  __int64 *v15; // r15
  __int64 *v16; // r12
  __int64 v17; // r13
  unsigned int v18; // edx
  __int64 *v19; // r14
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // r12
  __int64 *v26; // r13
  unsigned int v27; // edx
  _QWORD *v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rax
  char *v31; // rax
  char *v32; // rdi
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r12
  char *v36; // rdi
  unsigned __int64 v37; // rax
  __int64 v38; // r8
  __int64 i; // rax
  __int64 *v40; // rsi
  unsigned __int64 v41; // r13
  __int64 v42; // r12
  __int64 v43; // rdx
  __int64 *v44; // r15
  char *v45; // rdi
  unsigned __int64 v46; // rdx
  __int64 v47; // r10
  unsigned __int64 v48; // rdx
  __int64 v49; // r11
  char *v50; // [rsp+0h] [rbp-F8h]
  int v51; // [rsp+8h] [rbp-F0h]
  __int64 *v52; // [rsp+8h] [rbp-F0h]
  int v53; // [rsp+10h] [rbp-E8h]
  int v54; // [rsp+18h] [rbp-E0h]
  __int64 v55; // [rsp+18h] [rbp-E0h]
  void *ptr; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v57; // [rsp+28h] [rbp-D0h]
  _BYTE v58[64]; // [rsp+30h] [rbp-C8h] BYREF
  void *v59; // [rsp+70h] [rbp-88h]
  unsigned __int64 v60; // [rsp+78h] [rbp-80h]
  _BYTE v61[120]; // [rsp+80h] [rbp-78h] BYREF

  result = *(unsigned int *)(a1 + 8);
  v50 = v58;
  ptr = v58;
  v57 = 0x800000000LL;
  if ( !(_DWORD)result )
  {
    v12 = *(__int64 **)a1;
    v59 = v61;
    v60 = 0x800000000LL;
    v52 = (__int64 *)(a1 + 16);
    if ( (__int64 *)(a1 + 16) == v12 )
    {
      v12 = (__int64 *)v61;
      goto LABEL_76;
    }
    goto LABEL_5;
  }
  v10 = 0;
  v11 = 8LL * (unsigned int)result;
  do
  {
    sub_557DA0(
      a2,
      *(_QWORD *)(*(_QWORD *)a1 + v10),
      a3,
      (unsigned int)&ptr,
      a5,
      a6,
      (_DWORD)v50,
      v51,
      v53,
      v54,
      (__int64)ptr);
    v10 += 8;
  }
  while ( v11 != v10 );
  v12 = *(__int64 **)a1;
  result = *(unsigned int *)(a1 + 8);
  v59 = v61;
  v60 = 0x800000000LL;
  v52 = (__int64 *)(a1 + 16);
  if ( v12 != (__int64 *)(a1 + 16) )
  {
LABEL_5:
    v13 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12));
    v59 = v12;
    *(_DWORD *)(a1 + 12) = 8;
    *(_QWORD *)a1 = v52;
    v60 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(result), v13).m128i_u64[0];
    goto LABEL_6;
  }
  if ( (_DWORD)result )
  {
    v40 = v12;
    v41 = 0;
    v12 = (__int64 *)v61;
    v55 = 8 * result;
    LODWORD(v42) = 8;
    LODWORD(result) = 0;
    while ( 1 )
    {
      v44 = &v40[v41 / 8];
      if ( (unsigned int)result >= (unsigned int)v42 )
      {
        v42 = (unsigned int)(2 * v42);
        result = sub_186B270(8 * v42);
        v45 = (char *)v59;
        v12 = (__int64 *)result;
        LODWORD(result) = v60;
        if ( (_DWORD)v60 )
        {
          if ( (unsigned int)(v60 - 1) <= 2 || v12 == (__int64 *)((char *)v59 + 8) )
          {
            v48 = 0;
            v49 = 8LL * (unsigned int)v60;
            do
            {
              v12[v48 / 8] = *(_QWORD *)&v45[v48];
              v48 += 8LL;
            }
            while ( v49 != v48 );
          }
          else
          {
            v46 = 0;
            v47 = 16LL * ((unsigned int)v60 >> 1);
            do
            {
              *(__m128i *)&v12[v46 / 8] = _mm_loadu_si128((const __m128i *)&v45[v46]);
              v46 += 16LL;
            }
            while ( v47 != v46 );
            if ( (result & 1) != 0 )
              v12[(unsigned int)result & 0xFFFFFFFE] = *(_QWORD *)&v45[8 * (result & 0xFFFFFFFE)];
          }
        }
        if ( v45 != v61 && v45 )
        {
          sub_186B220(v45);
          LODWORD(result) = v60;
        }
        v59 = v12;
        HIDWORD(v60) = v42;
      }
      v43 = (unsigned int)result;
      result = (unsigned int)(result + 1);
      v41 += 8LL;
      v12[v43] = *v44;
      LODWORD(v60) = result;
      if ( v55 == v41 )
        break;
      v40 = *(__int64 **)a1;
    }
LABEL_6:
    v14 = (unsigned int)v57;
    v15 = (__int64 *)ptr;
    *(_DWORD *)(a1 + 8) = 0;
    if ( !(_DWORD)v14 )
      goto LABEL_23;
    goto LABEL_7;
  }
  v36 = (char *)ptr;
  v14 = (unsigned int)v57;
  v15 = (__int64 *)ptr;
  if ( (_DWORD)v57 )
  {
LABEL_7:
    v16 = &v15[v14];
    LODWORD(v17) = *(_DWORD *)(a1 + 12);
    v18 = 0;
    do
    {
      if ( v18 < (unsigned int)v17 )
      {
        v19 = *(__int64 **)a1;
      }
      else
      {
        v17 = (unsigned int)(2 * v17);
        v22 = sub_186B270(8 * v17);
        v18 = *(_DWORD *)(a1 + 8);
        v23 = *(__int64 **)a1;
        v19 = (__int64 *)v22;
        if ( v18 )
        {
          if ( v18 - 1 <= 2 || (__int64 *)v22 == v23 + 1 )
          {
            for ( i = 0; i != v18; ++i )
              v19[i] = v23[i];
          }
          else
          {
            v24 = 0;
            do
            {
              *(__m128i *)&v19[v24] = _mm_loadu_si128((const __m128i *)&v23[v24]);
              v24 += 2;
            }
            while ( v24 != 2LL * (v18 >> 1) );
            if ( (v18 & 1) != 0 )
              v19[v18 & 0xFFFFFFFE] = v23[v18 & 0xFFFFFFFE];
          }
        }
        if ( v52 != v23 && v23 )
        {
          sub_186B220(v23);
          v18 = *(_DWORD *)(a1 + 8);
        }
        *(_QWORD *)a1 = v19;
        *(_DWORD *)(a1 + 12) = v17;
      }
      v20 = *v15;
      v21 = v18;
      ++v15;
      ++v18;
      v19[v21] = v20;
      *(_DWORD *)(a1 + 8) = v18;
    }
    while ( v15 != v16 );
    v12 = (__int64 *)v59;
    result = (unsigned int)v60;
LABEL_23:
    LODWORD(v57) = 0;
    if ( (_DWORD)result )
    {
      LODWORD(v25) = HIDWORD(v57);
      v26 = &v12[result];
      v27 = 0;
      do
      {
        if ( v27 < (unsigned int)v25 )
        {
          v28 = ptr;
        }
        else
        {
          v25 = (unsigned int)(2 * v25);
          v31 = (char *)sub_186B270(8 * v25);
          v27 = v57;
          v32 = (char *)ptr;
          v28 = v31;
          if ( (_DWORD)v57 )
          {
            if ( (unsigned int)(v57 - 1) <= 2 || v31 == (char *)ptr + 8 )
            {
              v37 = 0;
              v38 = 8LL * (unsigned int)v57;
              do
              {
                v28[v37 / 8] = *(_QWORD *)&v32[v37];
                v37 += 8LL;
              }
              while ( v37 != v38 );
            }
            else
            {
              v33 = 0;
              v34 = 16LL * ((unsigned int)v57 >> 1);
              do
              {
                *(__m128i *)&v28[v33 / 8] = _mm_loadu_si128((const __m128i *)&v32[v33]);
                v33 += 16LL;
              }
              while ( v34 != v33 );
              if ( (v27 & 1) != 0 )
                v28[v27 & 0xFFFFFFFE] = *(_QWORD *)&v32[8 * (v27 & 0xFFFFFFFE)];
            }
          }
          if ( v32 != v50 && v32 )
          {
            sub_186B220(v32);
            v27 = v57;
          }
          ptr = v28;
          HIDWORD(v57) = v25;
        }
        v29 = *v12;
        v30 = v27;
        ++v12;
        ++v27;
        v28[v30] = v29;
        LODWORD(v57) = v27;
      }
      while ( v26 != v12 );
      v12 = (__int64 *)v59;
      result = (__int64)v61;
      if ( v59 == v61 || !v59 )
        goto LABEL_42;
      goto LABEL_41;
    }
LABEL_76:
    if ( !v12 || (result = (__int64)v61, v12 == (__int64 *)v61) )
    {
LABEL_44:
      v36 = (char *)ptr;
      goto LABEL_45;
    }
LABEL_41:
    result = sub_186B220(v12);
    v27 = v57;
LABEL_42:
    v35 = 0;
    if ( v27 )
    {
      do
        result = sub_553300(a2, *((_QWORD *)ptr + v35++));
      while ( (unsigned int)v35 < (unsigned int)v57 );
    }
    goto LABEL_44;
  }
LABEL_45:
  LODWORD(v57) = 0;
  if ( v36 )
  {
    result = (__int64)v50;
    if ( v36 != v50 )
      return sub_186B220(v36);
  }
  return result;
}

