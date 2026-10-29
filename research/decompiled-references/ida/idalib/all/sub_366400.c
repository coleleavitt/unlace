__int64 __fastcall sub_366400(__m128i *a1, unsigned __int64 a2, size_t a3, __int64 a4)
{
  _QWORD *v6; // r14
  _QWORD *v7; // r15
  unsigned __int64 v8; // rsi
  _QWORD *v9; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // r10
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  size_t v21; // r13
  size_t v22; // r8
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rax
  unsigned int v26; // esi
  const char *v27; // r15
  unsigned __int64 v28; // rax
  char v29; // al
  __int64 (__fastcall *v30)(__m128i *, char); // rax
  char *v31; // r8
  unsigned __int64 v32; // r15
  __int64 v33; // rsi
  char *v34; // r15
  const char *v35; // rdi
  unsigned int v36; // eax
  char v37; // al
  char v38; // r8
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // r15
  int v42; // eax
  __int64 v43; // r8
  __int64 v44; // rax
  const char *v45; // rdi
  char v46; // al
  char *v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // r15
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  size_t v53; // r15
  __int64 v54; // rcx
  void *ptr; // [rsp+38h] [rbp-4B0h]
  char s2; // [rsp+40h] [rbp-4A8h]
  void *s2d; // [rsp+40h] [rbp-4A8h]
  char s2a; // [rsp+40h] [rbp-4A8h]
  char *s2c; // [rsp+40h] [rbp-4A8h]
  char *s2b; // [rsp+40h] [rbp-4A8h]
  __int64 v61; // [rsp+48h] [rbp-4A0h]
  unsigned int radix; // [rsp+54h] [rbp-494h]
  size_t n; // [rsp+58h] [rbp-490h]
  unsigned __int64 v64; // [rsp+60h] [rbp-488h]
  char *s1; // [rsp+68h] [rbp-480h]
  _QWORD *s1a; // [rsp+68h] [rbp-480h]
  __int64 v67; // [rsp+70h] [rbp-478h]
  __int64 v68; // [rsp+70h] [rbp-478h]
  const char *v70; // [rsp+78h] [rbp-470h]
  size_t v71; // [rsp+80h] [rbp-468h]
  unsigned __int64 v72; // [rsp+80h] [rbp-468h]
  size_t v73; // [rsp+80h] [rbp-468h]
  __int64 v74; // [rsp+88h] [rbp-460h] BYREF
  unsigned __int64 v75; // [rsp+90h] [rbp-458h] BYREF
  unsigned __int64 *v76; // [rsp+98h] [rbp-450h] BYREF
  int v77; // [rsp+A0h] [rbp-448h]
  _BYTE v78[1032]; // [rsp+A8h] [rbp-440h] BYREF
  unsigned __int64 v79; // [rsp+4B0h] [rbp-38h]

  v71 = a3;
  v79 = __readfsqword(0x28u);
  v6 = (_QWORD *)a1[5].m128i_i64[1];
  v74 = 0;
  v7 = v6 + 4;
  v8 = *(_QWORD *)(v6[12] + 88LL);
  v9 = (_QWORD *)v6[5];
  v75 = v8;
  if ( !v9 )
    goto LABEL_15;
  do
  {
    while ( 1 )
    {
      v11 = v9[2];
      v12 = v9[3];
      if ( v9[4] < v8 )
        break;
      v7 = v9;
      v9 = (_QWORD *)v9[2];
      if ( !v11 )
        goto LABEL_6;
    }
    v9 = (_QWORD *)v9[3];
  }
  while ( v12 );
LABEL_6:
  v71 = a3;
  if ( v6 + 4 == v7 || v8 < v7[4] )
  {
LABEL_15:
    v76 = &v75;
    v7 = sub_35C600(v6 + 3, v7, &v76);
  }
  v13 = v6[9];
  v14 = v6[10];
  v15 = v7 + 5;
  v16 = (_QWORD *)(v13 + 8 * v14);
  if ( (_QWORD *)v13 != v16 )
  {
    v17 = (_QWORD *)v6[9];
    while ( v15 != (_QWORD *)*v17 )
    {
      if ( v16 == ++v17 )
        goto LABEL_16;
    }
    if ( v16 != v17 )
      goto LABEL_13;
  }
LABEL_16:
  if ( !*((_BYTE *)v7 + 478) )
  {
    get_type_by_tid(&v74, v75);
    if ( !(unsigned __int8)sub_35D690(v7 + 5, (__int64)a1, a2, &v74, 1) )
    {
LABEL_13:
      clear_tinfo_t(&v74);
      return 0;
    }
    v14 = v6[10];
    v13 = v6[9];
    v15 = v7 + 5;
  }
  v19 = v6[12];
  if ( v6[11] < (unsigned __int64)(v14 + 1) )
  {
    s1a = v15;
    v68 = v6[12];
    v44 = qvector_reserve(v6 + 9, v13, v14 + 1, 8);
    v6[9] = v44;
    v14 = v6[10];
    v13 = v44;
    v15 = s1a;
    v19 = v68;
  }
  *(_QWORD *)(v13 + 8 * v14) = v19;
  ++v6[10];
  v6[12] = v15;
  v7[50] = a2;
  clear_tinfo_t(&v74);
  v20 = v6[12];
  v67 = v20;
  v21 = *(_QWORD *)(v20 + 368);
  if ( *(_BYTE *)(v20 + 436) )
  {
    if ( v71 < v21 )
      goto LABEL_24;
    v64 = a2 + v71;
    n = *(_QWORD *)(v20 + 416);
    if ( n )
    {
      ptr = (void *)qalloc_or_throw(n);
      memcpy(ptr, *(const void **)(v67 + 408), n);
      if ( n == 1 )
      {
        v61 = 0;
      }
      else
      {
        n = 1;
        v61 = (__int64)ptr;
      }
    }
    else
    {
      n = 1;
      ptr = nullptr;
      v61 = 0;
    }
  }
  else
  {
    v22 = v71 / v21;
    if ( v71 % v21 || v71 < v21 )
    {
LABEL_24:
      v23 = v6[10];
      v24 = *(_QWORD *)(v6[9] + 8 * v23 - 8);
      if ( v23 )
        v6[10] = v23 - 1;
      v6[12] = v24;
      return 0;
    }
    n = v71 / v21;
    v64 = a2 + v71;
    if ( *(_QWORD *)(v20 + 416) )
    {
      v73 = v71 / v21;
      v53 = *(_QWORD *)(v20 + 416);
      ptr = (void *)qalloc_or_throw(v53);
      memcpy(ptr, *(const void **)(v67 + 408), v53);
      v54 = 0;
      if ( v53 != 1 )
        v54 = (__int64)ptr;
      v22 = v73;
      v61 = v54;
    }
    else
    {
      ptr = nullptr;
      v61 = 0;
    }
    if ( v22 != 1 )
    {
      v45 = *(const char **)(a1[39].m128i_i64[1] + 152);
      if ( v45 )
      {
        while ( 1 )
        {
          v47 = strchr(v45, 35);
          if ( !v47 )
            break;
          v45 = v47 + 1;
          v46 = v47[1];
          if ( v46 == 104 || v46 == 115 )
            goto LABEL_30;
        }
        radix = get_radix(a4, 0);
        if ( radix != -1 )
        {
          s1 = (char *)qalloc(2 * v21);
          goto LABEL_31;
        }
      }
    }
  }
LABEL_30:
  radix = -1;
  s1 = nullptr;
LABEL_31:
  v76 = (_QWORD *)(&dword_0 + 1);
  v77 = -1;
  if ( get_array_parameters(&v76, a2) <= 0 )
  {
    v52 = a1[1].m128i_i64[0];
    if ( a2 != v52 )
      get_array_parameters(&v76, v52);
  }
  while ( 1 )
  {
    v70 = (const char *)sub_35C4C0(a2, v64);
    if ( v70 )
      break;
    if ( s1 && ((unsigned __int8)v76 & 1) != 0 && get_bytes(s1, v21, a2, 0, 0) == v21 && (s2b = &s1[v21], n != 1) )
    {
      v72 = 1;
      v49 = a2;
      do
      {
        v49 += v21;
        if ( v21 != get_bytes(s2b, v21, v49, 0, 0) )
          break;
        if ( memcmp(s1, s2b, v21) )
          break;
        ++v72;
      }
      while ( n != v72 );
    }
    else
    {
      v72 = 1;
    }
    (*(void (__fastcall **)(__m128i *, __int64, __int64))(a1->m128i_i64[0] + 56))(a1, v61, 7);
    v30 = *(__int64 (__fastcall **)(__m128i *, char))(a1->m128i_i64[0] + 96);
    if ( (char *)v30 == (char *)sub_35CB90 )
    {
      v31 = (char *)a1[2].m128i_i64[0];
      v32 = 2;
      if ( v31 )
        v32 = (unsigned __int64)(v31-- + 1);
      v33 = a1[1].m128i_i64[1];
      if ( a1[2].m128i_i64[1] < v32 )
      {
        s2c = v31;
        v48 = qvector_reserve(&a1[1].m128i_u64[1], v33, v32, 1);
        a1[1].m128i_i64[1] = v48;
        v31 = s2c;
        v33 = v48;
      }
      a1[2].m128i_i64[0] = v32;
      v31[v33] = 32;
      v31[a1[1].m128i_i64[1] + 1] = 0;
    }
    else
    {
      v30(a1, 32);
    }
    v34 = sub_35FCA0(a1, nullptr, v72, radix);
    v35 = haystack;
    if ( a1[2].m128i_i64[0] )
      v35 = (const char *)a1[1].m128i_i64[1];
    v36 = tag_strlen(v35);
    v37 = sub_365640(a1, a2, v36);
    v38 = v37;
    if ( v37 )
    {
      s2a = v37;
      sub_35FCA0(a1, v34, v72, radix);
      v39 = (int)v76;
      if ( ((unsigned __int8)v76 & 4) == 0 )
        goto LABEL_39;
      v38 = s2a;
      v25 = (a2 - a1[1].m128i_i64[0]) / v21;
    }
    else
    {
      v39 = (int)v76;
      if ( ((unsigned __int8)v76 & 4) == 0 )
        goto LABEL_59;
      v25 = (a2 - a1[1].m128i_i64[0]) / v21;
    }
    v26 = 10;
    if ( (v39 & 0xC0) == 0 )
      v26 = byte_23AC0A4[(v39 >> 4) & 0xF];
    v27 = v78;
    s2 = v38;
    if ( !btoa64(v78, 1024, v25, v26) )
      v27 = nullptr;
    v70 = v27;
    if ( !s2 )
    {
LABEL_59:
      v40 = a1[5].m128i_i64[1];
      v41 = *(_QWORD *)v40;
      s2d = *(void **)(*(_QWORD *)v40 + 1152LL);
      v42 = nbits(a2);
      v43 = (__int64)s2d;
      if ( v42 != 8 && *(_DWORD *)(v41 + 948) == 8 )
        v43 = *(_QWORD *)(v41 + 1160);
      v29 = sub_361EB0((__int64)a1, a2, v21, 1024, v43, 1u, -1, (__int64)v76, v77, 0, nullptr, v70, nullptr);
      goto LABEL_42;
    }
LABEL_39:
    v28 = v64;
    if ( !*(_BYTE *)(v67 + 436) )
      v28 = a2 + v21;
    a1[44].m128i_i64[1] = v28;
    v29 = sub_35CF70(a1, v70, nullptr);
LABEL_42:
    if ( v29 )
      goto LABEL_84;
    n -= v72;
    if ( !n )
      goto LABEL_84;
    a2 += v21 * v72;
    *(_QWORD *)(v67 + 360) += v21 * (v72 - 1);
    sub_382A40(a1, a2, 0);
  }
  sub_35FEF0(a1, a2, v21, v61, n, (__int64)v70, radix);
LABEL_84:
  qfree(s1);
  v50 = v6[10];
  v51 = *(_QWORD *)(v6[9] + 8 * v50 - 8);
  if ( v50 )
    v6[10] = v50 - 1;
  v6[12] = v51;
  if ( ptr )
    qfree(ptr);
  return 1;
}
