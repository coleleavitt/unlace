unsigned __int64 __fastcall sub_106CE0(unsigned __int64 **a1, __int64 a2, unsigned __int8 a3, int a4, __int64 *a5)
{
  __int64 v5; // r12
  unsigned __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r8
  int v11; // r13d
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int8 v14; // dl
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned __int64 *v17; // rsi
  __int64 v18; // rdx
  unsigned __int64 v19; // rdi
  unsigned __int8 v20; // al
  __int64 v21; // rax
  int v22; // r9d
  void *v23; // r10
  unsigned __int64 v24; // r14
  unsigned __int8 v25; // al
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 *v28; // rcx
  unsigned __int64 *v29; // r14
  unsigned __int8 v30; // al
  unsigned __int64 *v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rsi
  __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  unsigned __int64 v37; // rsi
  unsigned __int8 v38; // r9
  __int64 v39; // r11
  unsigned __int64 *v40; // rdx
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // r10
  void *v43; // rdi
  __m128i v44; // xmm0
  unsigned __int64 *v45; // rax
  unsigned __int64 v46; // rdx
  void *v47; // rax
  void *v48; // rax
  unsigned __int64 v49; // rsi
  size_t na; // [rsp+18h] [rbp-D0h]
  void *n; // [rsp+18h] [rbp-D0h]
  int nb; // [rsp+18h] [rbp-D0h]
  size_t v56; // [rsp+20h] [rbp-C8h]
  int v57; // [rsp+20h] [rbp-C8h]
  size_t v58; // [rsp+20h] [rbp-C8h]
  __int64 v59; // [rsp+20h] [rbp-C8h]
  __int64 v60; // [rsp+28h] [rbp-C0h]
  const void **v61; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v62; // [rsp+28h] [rbp-C0h]
  int v63; // [rsp+30h] [rbp-B8h]
  __int64 *v64; // [rsp+30h] [rbp-B8h]
  unsigned __int8 v65; // [rsp+38h] [rbp-B0h]
  __int64 v66; // [rsp+38h] [rbp-B0h]
  __m128i v67; // [rsp+40h] [rbp-A8h] BYREF
  int v68; // [rsp+50h] [rbp-98h]
  unsigned __int8 v69; // [rsp+57h] [rbp-91h]
  const void **v70; // [rsp+58h] [rbp-90h]
  void **v71; // [rsp+68h] [rbp-80h] BYREF
  void *v72; // [rsp+70h] [rbp-78h] BYREF
  __m128i v73; // [rsp+78h] [rbp-70h]
  __int64 v74; // [rsp+88h] [rbp-60h]
  __int64 v75; // [rsp+90h] [rbp-58h]
  unsigned __int64 v76; // [rsp+98h] [rbp-50h]
  char v77; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v78; // [rsp+A8h] [rbp-40h]

  v5 = a2;
  v8 = a5[1];
  v78 = __readfsqword(0x28u);
  v9 = 0;
  if ( !v8 )
  {
    v11 = 0;
    v12 = 0;
    goto LABEL_8;
  }
  v10 = *a5;
  v11 = 0;
  while ( 1 )
  {
    v13 = v10 + 16 * v9;
    v14 = *(_BYTE *)(v13 + 8);
    if ( v14 >= a3 && (a3 < v14 || a2 < *(_QWORD *)v13) )
      break;
    v12 = ++v11;
    v9 = v11;
    if ( v11 >= v8 )
      goto LABEL_8;
  }
  v12 = v11;
LABEL_8:
  while ( 2 )
  {
    v15 = a4;
    if ( v12 < v8 )
    {
      v16 = *a5 + 16 * v12;
      if ( *(_BYTE *)(v16 + 8) == a3 && *(_QWORD *)v16 - v5 <= a4 )
      {
        ++v11;
        v15 = *(_QWORD *)v16 - v5;
      }
    }
    v17 = *a1;
    if ( !*a1 )
      goto LABEL_13;
    v18 = 24;
    v19 = *v17 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v19 )
      goto LABEL_22;
    if ( (*(_BYTE *)(*v17 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_13:
      if ( !under_debugger )
        sub_37EA20(50151);
      BUG();
    }
    while ( 1 )
    {
      v20 = *(_BYTE *)(v19 + 56);
      v18 = v19 + 24;
      if ( a3 >= v20 )
      {
        if ( v20 < a3 )
          goto LABEL_30;
        if ( v5 >= *(_QWORD *)(v19 + 48) )
          break;
      }
      v19 = *(_QWORD *)(v19 + 8);
LABEL_16:
      if ( (*(_BYTE *)v19 & 2) != 0 )
        goto LABEL_13;
    }
    if ( v5 > *(_QWORD *)(v19 + 48) )
    {
LABEL_30:
      v19 = *(_QWORD *)(v19 + 16);
      goto LABEL_16;
    }
    if ( v17 == (unsigned __int64 *)v19 )
      goto LABEL_13;
LABEL_22:
    v21 = *(int *)(v18 + 40);
    v68 = v15;
    v22 = v21;
    if ( v15 == v21 )
      goto LABEL_28;
    v72 = 0;
    v74 = -1;
    v75 = 0;
    v76 = 0xFFFFFFFF00000000LL;
    v77 = 1;
    v73 = 0;
    *(_DWORD *)(v18 + 40) = v15;
    if ( v15 < v21 )
    {
      LOBYTE(v75) = a3;
      v23 = 0;
      v74 = v5 + (int)v15;
      v76 = *(_QWORD *)(v18 + 40);
      v77 = *(_BYTE *)(v18 + 48);
      v24 = *(_QWORD *)(v18 + 8);
      v25 = a3;
      if ( v24 )
      {
        v61 = (const void **)v18;
        v57 = v22;
        v47 = (void *)qalloc_or_throw();
        v48 = memcpy(v47, *v61, 4 * v24);
        v22 = v57;
        v23 = v48;
        if ( v72 )
        {
          v58 = (size_t)v48;
          nb = v22;
          v73.m128i_i64[0] = 0;
          qfree();
          v23 = (void *)v58;
          v22 = nb;
        }
        v25 = v75;
      }
      v72 = v23;
      LODWORD(v76) = v22 - v15;
      v73 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
      if ( v25 )
        goto LABEL_44;
      goto LABEL_26;
    }
    v26 = sub_105830((_QWORD *)v19);
    v27 = v15 + v5;
    v28 = v26;
    v29 = (unsigned __int64 *)v26;
    if ( v26 == (__int64 *)*a1 )
      goto LABEL_43;
LABEL_32:
    do
    {
      v30 = *((_BYTE *)v29 + 56);
      v31 = v29 + 3;
      if ( v30 >= a3 && (a3 < v30 || v27 <= (__int64)v29[6]) )
        break;
      v38 = *((_BYTE *)v29 + 56);
      if ( v38 >= a3 )
      {
        v39 = v29[6] + *((int *)v29 + 16);
        if ( a3 < v38 || v27 < (__int64)(v29[6] + *((int *)v29 + 16)) )
        {
          v41 = v29[8];
          v74 = v27;
          LOBYTE(v75) = a3;
          v76 = v41;
          v77 = *((_BYTE *)v29 + 72);
          v42 = v29[4];
          if ( v42 )
          {
            v70 = (const void **)(v29 + 3);
            v69 = v38;
            v67.m128i_i64[0] = v39;
            v66 = v27;
            v64 = v28;
            v62 = v42;
            v59 = 4 * v42;
            n = (void *)qalloc_or_throw();
            v17 = (unsigned __int64 *)*v70;
            memcpy(n, *v70, v59);
            v38 = v69;
            LODWORD(v39) = v67.m128i_i32[0];
            v27 = v66;
            v28 = v64;
            v42 = v62;
          }
          else
          {
            n = 0;
          }
          v43 = v72;
          v44 = _mm_unpacklo_epi64((__m128i)v42, (__m128i)v42);
          if ( v72 )
          {
            v65 = v38;
            v63 = v39;
            v60 = v27;
            v56 = (size_t)v28;
            v67 = v44;
            v73.m128i_i64[0] = 0;
            qfree();
            v44 = _mm_load_si128(&v67);
            v38 = v65;
            LODWORD(v39) = v63;
            v27 = v60;
            v28 = (__int64 *)v56;
          }
          v73 = v44;
          v72 = n;
          if ( v38 != a3 )
            sub_100540(v43, v17, v31, v28);
          LODWORD(v76) = v39 - v27;
        }
      }
      if ( (*v29 & 2) != 0 )
        goto LABEL_51;
      v40 = (unsigned __int64 *)v29[2];
      if ( (*(_BYTE *)v40 & 2) == 0 )
      {
        do
        {
          v29 = v40;
          v40 = (unsigned __int64 *)v40[1];
        }
        while ( (*(_BYTE *)v40 & 2) == 0 );
LABEL_51:
        if ( *a1 == v29 )
          break;
        goto LABEL_32;
      }
      v45 = (unsigned __int64 *)(*v29 & 0xFFFFFFFFFFFFFFFCLL);
      v46 = *v45;
      if ( (*v45 & 2) == 0 )
      {
        while ( v29 == (unsigned __int64 *)v45[2] )
        {
          v29 = v45;
          v17 = (unsigned __int64 *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
          v46 = *(_QWORD *)(v46 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v46 & 2) != 0 )
          {
            v29 = v17;
            if ( *a1 != v17 )
              goto LABEL_32;
            goto LABEL_35;
          }
          v45 = v17;
        }
      }
      v29 = v45;
    }
    while ( *a1 != v45 );
LABEL_35:
    if ( v28 != (__int64 *)v29 )
    {
      do
      {
        v32 = *v28;
        v33 = (unsigned __int64)v28;
        if ( (*v28 & 2) == 0 )
        {
          v34 = v28[2];
          if ( (*(_BYTE *)v34 & 2) != 0 )
          {
            v33 = v32 & 0xFFFFFFFFFFFFFFFCLL;
            v35 = *(_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v35 & 2) == 0 )
            {
              v36 = (unsigned __int64)v28;
              do
              {
                if ( v36 != *(_QWORD *)(v33 + 16) )
                  break;
                v36 = v33;
                v37 = v35 & 0xFFFFFFFFFFFFFFFCLL;
                v35 = *(_QWORD *)(v35 & 0xFFFFFFFFFFFFFFFCLL);
                v33 = v37;
              }
              while ( (v35 & 2) == 0 );
            }
          }
          else
          {
            do
            {
              v33 = v34;
              v49 = *(_QWORD *)(v34 + 8);
              if ( (*(_BYTE *)v49 & 2) != 0 )
                break;
              v33 = v49;
              v34 = *(_QWORD *)(v49 + 8);
            }
            while ( (*(_BYTE *)v34 & 2) == 0 );
          }
        }
        na = v33;
        sub_106A40(a1, v28);
        v28 = (__int64 *)na;
      }
      while ( (unsigned __int64 *)na != v29 );
    }
LABEL_43:
    if ( (_BYTE)v75 )
    {
LABEL_44:
      v71 = &v72;
      sub_106140((__m128i *)a1, (__int64)&v72, (__int64 *)&v71);
    }
LABEL_26:
    if ( v72 )
    {
      v73.m128i_i64[0] = 0;
      qfree();
    }
LABEL_28:
    v5 += v15;
    a4 -= v68;
    if ( a4 > 0 )
    {
      v12 = v11;
      v8 = a5[1];
      continue;
    }
    return v78 - __readfsqword(0x28u);
  }
}
