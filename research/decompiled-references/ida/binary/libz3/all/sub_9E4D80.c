__int64 __fastcall sub_9E4D80(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v5; // rdx
  __int64 v6; // rax
  void *v7; // rbp
  __int64 v8; // rcx
  unsigned int v9; // edx
  _QWORD *v10; // rsi
  unsigned int *v11; // rdx
  __int64 v12; // rax
  unsigned int *v13; // rax
  unsigned int *v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdx
  void *v18; // rbx
  __int64 result; // rax
  __int64 v20; // rax
  unsigned int v21; // esi
  __int64 v22; // r13
  _QWORD *v23; // rdx
  __int64 v24; // rbp
  char *v25; // rax
  int *v26; // rdi
  unsigned __int64 v27; // rax
  __int64 v28; // r8
  __int64 v29; // rbx
  char *v30; // rax
  int *v31; // rdi
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  char *v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // r9
  unsigned __int64 v40; // rax
  __int64 v41; // r8
  unsigned __int64 v42; // rax
  __int64 v43; // r8
  int v46[2]; // [rsp+10h] [rbp-128h]
  int v47[2]; // [rsp+10h] [rbp-128h]
  unsigned int *v48; // [rsp+10h] [rbp-128h]
  unsigned int *v49; // [rsp+10h] [rbp-128h]
  int v50[2]; // [rsp+10h] [rbp-128h]
  __int64 v51; // [rsp+18h] [rbp-120h]
  int v52[2]; // [rsp+18h] [rbp-120h]
  unsigned int *v53; // [rsp+18h] [rbp-120h]
  unsigned int *v54; // [rsp+18h] [rbp-120h]
  int v55[2]; // [rsp+20h] [rbp-118h] BYREF
  int v56[2]; // [rsp+28h] [rbp-110h] BYREF
  _QWORD v57[2]; // [rsp+30h] [rbp-108h] BYREF
  _QWORD v58[2]; // [rsp+40h] [rbp-F8h] BYREF
  int v59[2]; // [rsp+50h] [rbp-E8h] BYREF
  int v60[2]; // [rsp+58h] [rbp-E0h]
  int v61[2]; // [rsp+60h] [rbp-D8h] BYREF
  int v62[2]; // [rsp+68h] [rbp-D0h]
  void *ptr; // [rsp+70h] [rbp-C8h]
  int v64[2]; // [rsp+78h] [rbp-C0h]
  int v65[46]; // [rsp+80h] [rbp-B8h] BYREF

  v3 = a2;
  ptr = v65;
  *(_QWORD *)v64 = 0x1000000000LL;
  *(_QWORD *)v55 = 0;
  sub_9E4980((__int64)(a1 + 161));
  v5 = **(_QWORD **)(a1[4] + 8LL * a2);
  *(_QWORD *)v59 = 1;
  *(_QWORD *)v56 = v5;
  v51 = v5;
  *(_QWORD *)v60 = 0;
  *(_QWORD *)v61 = 1;
  *(_QWORD *)v62 = 0;
  sub_182CBA0(qword_1C7F2C0, v61);
  LOBYTE(v61[1]) &= ~1u;
  v61[0] = 1;
  v6 = sub_9E2570((__int64)a1, (__int64)v59, v51, a3, (__int64)v55, (__int64)(a1 + 161));
  v7 = qword_1C7F2C0;
  *(_QWORD *)v52 = v6;
  sub_182CBA0(qword_1C7F2C0, v59);
  sub_182CBA0(v7, v61);
  v8 = *(_QWORD *)v52;
  if ( *(_QWORD *)v52 )
  {
    v9 = v64[0];
    if ( v64[0] >= (unsigned int)v64[1] )
    {
      v24 = (unsigned int)(2 * v64[1]);
      v25 = (char *)sub_186B270(8 * v24);
      v9 = v64[0];
      v26 = (int *)ptr;
      v10 = v25;
      v8 = *(_QWORD *)v52;
      if ( v64[0] )
      {
        if ( (unsigned int)(v64[0] - 1) <= 2 || v25 == (char *)ptr + 8 )
        {
          v38 = 0;
          v39 = 8LL * (unsigned int)v64[0];
          do
          {
            v10[v38 / 8] = *(_QWORD *)&v26[v38 / 4];
            v38 += 8LL;
          }
          while ( v39 != v38 );
        }
        else
        {
          v27 = 0;
          v28 = 16LL * ((unsigned int)v64[0] >> 1);
          do
          {
            *(__m128i *)&v10[v27 / 8] = _mm_loadu_si128((const __m128i *)&v26[v27 / 4]);
            v27 += 16LL;
          }
          while ( v27 != v28 );
          if ( (v9 & 1) != 0 )
            v10[v9 & 0xFFFFFFFE] = *(_QWORD *)&v26[2 * (v9 & 0xFFFFFFFE)];
        }
      }
      if ( v26 != v65 && v26 )
      {
        sub_186B220(v26);
        v9 = v64[0];
        v8 = *(_QWORD *)v52;
      }
      ptr = v10;
      v64[1] = v24;
    }
    else
    {
      v10 = ptr;
    }
    v10[v9] = v8;
    v64[0] = v9 + 1;
  }
  v57[1] = 0;
  v57[0] = 0xFFFFFFFFLL;
  v58[0] = 1;
  v58[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v58);
  BYTE4(v58[0]) &= ~1u;
  LODWORD(v58[0]) = 1;
  if ( !sub_9B2ED0((__int64)a1, a2) )
  {
    v20 = sub_15947E0(a3, v57, 1, v56);
    v21 = v64[0];
    v22 = v20;
    if ( v64[0] >= (unsigned int)v64[1] )
    {
      v29 = (unsigned int)(2 * v64[1]);
      v30 = (char *)sub_186B270(8 * v29);
      v21 = v64[0];
      v31 = (int *)ptr;
      v23 = v30;
      if ( v64[0] )
      {
        if ( (unsigned int)(v64[0] - 1) <= 2 || v30 == (char *)ptr + 8 )
        {
          v40 = 0;
          v41 = 8LL * (unsigned int)v64[0];
          do
          {
            v23[v40 / 8] = *(_QWORD *)&v31[v40 / 4];
            v40 += 8LL;
          }
          while ( v40 != v41 );
        }
        else
        {
          v32 = 0;
          v33 = 16LL * ((unsigned int)v64[0] >> 1);
          do
          {
            *(__m128i *)&v23[v32 / 8] = _mm_loadu_si128((const __m128i *)&v31[v32 / 4]);
            v32 += 16LL;
          }
          while ( v32 != v33 );
          if ( (v21 & 1) != 0 )
            v23[v21 & 0xFFFFFFFE] = *(_QWORD *)&v31[2 * (v21 & 0xFFFFFFFE)];
        }
      }
      if ( !v31 || v31 == v65 )
        goto LABEL_40;
LABEL_39:
      *(_QWORD *)v50 = v23;
      sub_186B220(v31);
      v21 = v64[0];
      v23 = *(_QWORD **)v50;
LABEL_40:
      ptr = v23;
      v64[1] = v29;
      goto LABEL_18;
    }
LABEL_17:
    v23 = ptr;
LABEL_18:
    v23[v21] = v22;
    v64[0] = v21 + 1;
    goto LABEL_12;
  }
  *(_QWORD *)v46 = *(_QWORD *)(a1[86] + 8 * v3);
  v11 = (unsigned int *)sub_180C100(a1[104], 16);
  *(_QWORD *)v11 = 0x80000000LL;
  v12 = a1[85];
  *((_QWORD *)v11 + 1) = *(_QWORD *)v46;
  v53 = v11;
  *(_QWORD *)v47 = *(_QWORD *)(v12 + 8 * v3);
  v13 = (unsigned int *)sub_180C100(a1[104], 16);
  *(_QWORD *)v13 = 0x80000000LL;
  *((_QWORD *)v13 + 1) = *(_QWORD *)v47;
  v48 = v13;
  if ( v53 == v13 )
  {
    v14 = v53;
  }
  else
  {
    v14 = (unsigned int *)sub_180C100(a1[104], 24);
    *v48 = (*v48 + 1) & 0x3FFFFFFF | *v48 & 0xC0000000;
    *v53 = (*v53 + 1) & 0x3FFFFFFF | *v53 & 0xC0000000;
    *(_QWORD *)v14 = 0;
    *((_QWORD *)v14 + 1) = v48;
    *((_QWORD *)v14 + 2) = v53;
  }
  if ( *(_QWORD *)v55 )
  {
    v49 = *(unsigned int **)v55;
    if ( *(unsigned int **)v55 != v14 )
    {
      v54 = v14;
      v15 = sub_180C100(a1[104], 24);
      *v49 = (*v49 + 1) & 0x3FFFFFFF | *v49 & 0xC0000000;
      *v54 = (*v54 + 1) & 0x3FFFFFFF | *v54 & 0xC0000000;
      v14 = (unsigned int *)v15;
      *(_QWORD *)v15 = 0;
      *(__m128i *)(v15 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v54);
    }
  }
  v16 = a1[85];
  *(_QWORD *)v55 = v14;
  v17 = *(_QWORD *)(v16 + 8 * v3);
  LOBYTE(v59[1]) &= 0xFCu;
  LOBYTE(v61[1]) &= 0xFCu;
  v59[0] = 0;
  *(_QWORD *)v60 = 0;
  v61[0] = 1;
  *(_QWORD *)v62 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)v59, (int *)(v17 + 16));
  sub_9AF730((__int64)qword_1C7F2C0, (__int64)v57, (__int64)v59, (__int64)v57);
  sub_25A130((char *)v59);
  if ( LODWORD(v57[0]) )
  {
    v34 = sub_15947E0(a3, v57, 0, 0);
    v21 = v64[0];
    v22 = v34;
    if ( v64[0] >= (unsigned int)v64[1] )
    {
      v29 = (unsigned int)(2 * v64[1]);
      v35 = (char *)sub_186B270(8 * v29);
      v21 = v64[0];
      v31 = (int *)ptr;
      v23 = v35;
      if ( v64[0] )
      {
        if ( (unsigned int)(v64[0] - 1) <= 2 || v35 == (char *)ptr + 8 )
        {
          v42 = 0;
          v43 = 8LL * (unsigned int)v64[0];
          do
          {
            v23[v42 / 8] = *(_QWORD *)&v31[v42 / 4];
            v42 += 8LL;
          }
          while ( v42 != v43 );
        }
        else
        {
          v36 = 0;
          v37 = 16LL * ((unsigned int)v64[0] >> 1);
          do
          {
            *(__m128i *)&v23[v36 / 8] = _mm_loadu_si128((const __m128i *)&v31[v36 / 4]);
            v36 += 16LL;
          }
          while ( v37 != v36 );
          if ( (v21 & 1) != 0 )
            v23[v21 & 0xFFFFFFFE] = *(_QWORD *)&v31[2 * (v21 & 0xFFFFFFFE)];
        }
      }
      if ( v31 == v65 || !v31 )
        goto LABEL_40;
      goto LABEL_39;
    }
    goto LABEL_17;
  }
LABEL_12:
  sub_15995B0(a3);
  v18 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v57);
  result = sub_182CBA0(v18, v58);
  if ( ptr )
  {
    if ( ptr != v65 )
      return sub_186B220(ptr);
  }
  return result;
}

