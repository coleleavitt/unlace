unsigned __int64 __fastcall sub_108180(unsigned __int64 **a1, __int64 a2, unsigned __int8 a3, int a4, __int64 *a5)
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
  __int64 v23; // r10
  unsigned __int64 v24; // r14
  unsigned __int8 v25; // al
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 *v28; // rcx
  unsigned __int64 *v29; // r14
  unsigned __int8 v30; // al
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rsi
  __int64 v34; // rdx
  unsigned __int64 v35; // rdi
  unsigned __int64 v36; // rsi
  unsigned __int8 v37; // r9
  __int64 v38; // r11
  unsigned __int64 *v39; // rdx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // r10
  __m128i v42; // xmm0
  unsigned __int64 *v43; // rax
  unsigned __int64 v44; // rdx
  void *v45; // rax
  void *v46; // rax
  unsigned __int64 v47; // rsi
  size_t na; // [rsp+18h] [rbp-D0h]
  void *n; // [rsp+18h] [rbp-D0h]
  int nb; // [rsp+18h] [rbp-D0h]
  size_t v54; // [rsp+20h] [rbp-C8h]
  int v55; // [rsp+20h] [rbp-C8h]
  size_t v56; // [rsp+20h] [rbp-C8h]
  __int64 v57; // [rsp+20h] [rbp-C8h]
  __int64 v58; // [rsp+28h] [rbp-C0h]
  const void **v59; // [rsp+28h] [rbp-C0h]
  unsigned __int64 v60; // [rsp+28h] [rbp-C0h]
  int v61; // [rsp+30h] [rbp-B8h]
  __int64 *v62; // [rsp+30h] [rbp-B8h]
  unsigned __int8 v63; // [rsp+38h] [rbp-B0h]
  __int64 v64; // [rsp+38h] [rbp-B0h]
  __m128i v65; // [rsp+40h] [rbp-A8h] BYREF
  int v66; // [rsp+50h] [rbp-98h]
  unsigned __int8 v67; // [rsp+57h] [rbp-91h]
  const void **v68; // [rsp+58h] [rbp-90h]
  __int64 *v69; // [rsp+68h] [rbp-80h] BYREF
  __int64 v70; // [rsp+70h] [rbp-78h] BYREF
  __m128i v71; // [rsp+78h] [rbp-70h]
  __int64 v72; // [rsp+88h] [rbp-60h]
  __int64 v73; // [rsp+90h] [rbp-58h]
  unsigned __int64 v74; // [rsp+98h] [rbp-50h]
  char v75; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v76; // [rsp+A8h] [rbp-40h]

  v5 = a2;
  v8 = a5[1];
  v76 = __readfsqword(0x28u);
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
        sub_383060(50151);
      goto LABEL_81;
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
    v66 = v15;
    v22 = v21;
    if ( v15 == v21 )
      goto LABEL_28;
    v70 = 0;
    v72 = -1;
    v73 = 0;
    v74 = 0xFFFFFFFF00000000LL;
    v75 = 1;
    v71 = 0;
    *(_DWORD *)(v18 + 40) = v15;
    if ( v15 < v21 )
    {
      LOBYTE(v73) = a3;
      v23 = 0;
      v72 = v5 + (int)v15;
      v74 = *(_QWORD *)(v18 + 40);
      v75 = *(_BYTE *)(v18 + 48);
      v24 = *(_QWORD *)(v18 + 8);
      v25 = a3;
      if ( v24 )
      {
        v59 = (const void **)v18;
        v55 = v22;
        v45 = (void *)qalloc_or_throw(4 * v24, (__int64)v17, v18, 4 * v24);
        v46 = memcpy(v45, *v59, 4 * v24);
        v22 = v55;
        v23 = (__int64)v46;
        if ( v70 )
        {
          v56 = (size_t)v46;
          nb = v22;
          v71.m128i_i64[0] = 0;
          qfree(v70);
          v23 = v56;
          v22 = nb;
        }
        v25 = v73;
      }
      v70 = v23;
      LODWORD(v74) = v22 - v15;
      v71 = _mm_unpacklo_epi64((__m128i)v24, (__m128i)v24);
      if ( v25 )
        goto LABEL_44;
      goto LABEL_26;
    }
    v26 = sub_106CC0((_QWORD *)v19);
    v27 = v15 + v5;
    v28 = v26;
    v29 = (unsigned __int64 *)v26;
    if ( v26 == (__int64 *)*a1 )
      goto LABEL_43;
    while ( 1 )
    {
      v30 = *((_BYTE *)v29 + 56);
      if ( v30 >= a3 && (a3 < v30 || v27 <= (__int64)v29[6]) )
        break;
      v37 = *((_BYTE *)v29 + 56);
      if ( v37 >= a3 )
      {
        v38 = v29[6] + *((int *)v29 + 16);
        if ( a3 < v37 || v27 < (__int64)(v29[6] + *((int *)v29 + 16)) )
        {
          v40 = v29[8];
          v72 = v27;
          LOBYTE(v73) = a3;
          v74 = v40;
          v75 = *((_BYTE *)v29 + 72);
          v41 = v29[4];
          if ( v41 )
          {
            v68 = (const void **)(v29 + 3);
            v67 = v37;
            v65.m128i_i64[0] = v38;
            v64 = v27;
            v62 = v28;
            v60 = v41;
            v57 = 4 * v41;
            n = (void *)qalloc_or_throw(4 * v41, (__int64)v17, (__int64)(v29 + 3), (__int64)v28);
            v17 = (unsigned __int64 *)*v68;
            memcpy(n, *v68, v57);
            v37 = v67;
            LODWORD(v38) = v65.m128i_i32[0];
            v27 = v64;
            v28 = v62;
            v41 = v60;
          }
          else
          {
            n = nullptr;
          }
          v42 = _mm_unpacklo_epi64((__m128i)v41, (__m128i)v41);
          if ( v70 )
          {
            v63 = v37;
            v61 = v38;
            v58 = v27;
            v54 = (size_t)v28;
            v65 = v42;
            v71.m128i_i64[0] = 0;
            qfree(v70);
            v42 = _mm_load_si128(&v65);
            v37 = v63;
            LODWORD(v38) = v61;
            v27 = v58;
            v28 = (__int64 *)v54;
          }
          v71 = v42;
          v70 = (__int64)n;
          if ( v37 != a3 )
          {
            if ( !under_debugger )
              sub_383060(51894);
LABEL_81:
            BUG();
          }
          LODWORD(v74) = v38 - v27;
        }
      }
      if ( (*v29 & 2) != 0 )
        goto LABEL_51;
      v39 = (unsigned __int64 *)v29[2];
      if ( (*(_BYTE *)v39 & 2) == 0 )
      {
        do
        {
          v29 = v39;
          v39 = (unsigned __int64 *)v39[1];
        }
        while ( (*(_BYTE *)v39 & 2) == 0 );
LABEL_51:
        if ( *a1 == v29 )
          break;
        continue;
      }
      v43 = (unsigned __int64 *)(*v29 & 0xFFFFFFFFFFFFFFFCLL);
      v44 = *v43;
      if ( (*v43 & 2) != 0 )
      {
LABEL_60:
        v29 = v43;
        if ( *a1 == v43 )
          break;
      }
      else
      {
        while ( 1 )
        {
          if ( v29 != (unsigned __int64 *)v43[2] )
            goto LABEL_60;
          v29 = v43;
          v17 = (unsigned __int64 *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
          v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (v44 & 2) != 0 )
            break;
          v43 = v17;
        }
        v29 = v17;
        if ( *a1 == v17 )
          break;
      }
    }
    if ( v28 != (__int64 *)v29 )
    {
      do
      {
        v31 = *v28;
        v32 = (unsigned __int64)v28;
        if ( (*v28 & 2) == 0 )
        {
          v33 = v28[2];
          if ( (*(_BYTE *)v33 & 2) != 0 )
          {
            v32 = v31 & 0xFFFFFFFFFFFFFFFCLL;
            v34 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFFCLL);
            if ( (v34 & 2) == 0 )
            {
              v35 = (unsigned __int64)v28;
              do
              {
                if ( v35 != *(_QWORD *)(v32 + 16) )
                  break;
                v35 = v32;
                v36 = v34 & 0xFFFFFFFFFFFFFFFCLL;
                v34 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFFCLL);
                v32 = v36;
              }
              while ( (v34 & 2) == 0 );
            }
          }
          else
          {
            do
            {
              v32 = v33;
              v47 = *(_QWORD *)(v33 + 8);
              if ( (*(_BYTE *)v47 & 2) != 0 )
                break;
              v32 = v47;
              v33 = *(_QWORD *)(v47 + 8);
            }
            while ( (*(_BYTE *)v33 & 2) == 0 );
          }
        }
        na = v32;
        sub_107EB0(a1, v28);
        v28 = (__int64 *)na;
      }
      while ( (unsigned __int64 *)na != v29 );
    }
LABEL_43:
    if ( (_BYTE)v73 )
    {
LABEL_44:
      v69 = &v70;
      sub_1075D0((__m128i *)a1, (__int64)&v70, (__int64 *)&v69);
    }
LABEL_26:
    if ( v70 )
    {
      v71.m128i_i64[0] = 0;
      qfree(v70);
    }
LABEL_28:
    v5 += v15;
    a4 -= v66;
    if ( a4 > 0 )
    {
      v12 = v11;
      v8 = a5[1];
      continue;
    }
    return v76 - __readfsqword(0x28u);
  }
}
