__int64 __fastcall sub_362F60(__m128i *a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  _QWORD *v6; // r13
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 v9; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rcx
  _QWORD *v15; // r10
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  size_t v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // r14
  char v31; // al
  __int64 (__fastcall *v32)(__m128i *, char); // rax
  __int64 v33; // r15
  unsigned __int64 v34; // r14
  __int64 v35; // rsi
  char *v36; // r14
  const char *v37; // rdi
  unsigned int v38; // eax
  char v39; // r15
  int v40; // ecx
  unsigned int v41; // esi
  const char *v42; // r14
  unsigned int v43; // eax
  __int64 v44; // rax
  const char *v45; // rdi
  char v46; // al
  char *v47; // rax
  __int64 v48; // rax
  unsigned int v49; // r15d
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rsi
  size_t v53; // r15
  void *v54; // r14
  __int64 v55; // rax
  void *ptr; // [rsp+38h] [rbp-4B0h]
  char *s2; // [rsp+40h] [rbp-4A8h]
  __int64 v58; // [rsp+48h] [rbp-4A0h]
  size_t v59; // [rsp+50h] [rbp-498h]
  unsigned int radix; // [rsp+5Ch] [rbp-48Ch]
  char *s1; // [rsp+60h] [rbp-488h]
  __int64 v62; // [rsp+68h] [rbp-480h]
  _QWORD *v63; // [rsp+68h] [rbp-480h]
  const char *v65; // [rsp+70h] [rbp-478h]
  size_t n; // [rsp+78h] [rbp-470h]
  unsigned int na; // [rsp+78h] [rbp-470h]
  size_t nb; // [rsp+78h] [rbp-470h]
  unsigned int v69; // [rsp+80h] [rbp-468h]
  unsigned int v70; // [rsp+84h] [rbp-464h]
  unsigned int v71; // [rsp+84h] [rbp-464h]
  unsigned int v72; // [rsp+8Ch] [rbp-45Ch] BYREF
  __int64 v73; // [rsp+90h] [rbp-458h] BYREF
  unsigned int *v74; // [rsp+98h] [rbp-450h] BYREF
  int v75; // [rsp+A0h] [rbp-448h]
  _BYTE v76[1032]; // [rsp+A8h] [rbp-440h] BYREF
  unsigned __int64 v77; // [rsp+4B0h] [rbp-38h]

  v70 = a3;
  v77 = __readfsqword(0x28u);
  v6 = (_QWORD *)a1[5].m128i_i64[1];
  v73 = 0;
  v7 = (__int64)(v6 + 3);
  v8 = *(_DWORD *)(v6[11] + 88LL);
  v9 = v6[4];
  v72 = v8;
  if ( !v9 )
    goto LABEL_15;
  do
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(v9 + 16);
      v12 = *(_QWORD *)(v9 + 24);
      if ( *(_DWORD *)(v9 + 32) < v8 )
        break;
      v7 = v9;
      v9 = *(_QWORD *)(v9 + 16);
      if ( !v11 )
        goto LABEL_6;
    }
    v9 = *(_QWORD *)(v9 + 24);
  }
  while ( v12 );
LABEL_6:
  v70 = a3;
  if ( v6 + 3 == (_QWORD *)v7 || v8 < *(_DWORD *)(v7 + 32) )
  {
LABEL_15:
    v74 = &v72;
    v7 = sub_359200(v6 + 2, v7, &v74);
  }
  v13 = v6[8];
  v14 = v6[9];
  v15 = (_QWORD *)(v7 + 40);
  v16 = (_QWORD *)(v13 + 8 * v14);
  if ( (_QWORD *)v13 != v16 )
  {
    v17 = (_QWORD *)v6[8];
    while ( v15 != (_QWORD *)*v17 )
    {
      if ( v16 == ++v17 )
        goto LABEL_16;
    }
    if ( v16 != v17 )
      goto LABEL_13;
  }
LABEL_16:
  if ( !*(_BYTE *)(v7 + 334) )
  {
    if ( !(_BYTE)v73 )
    {
      get_type_by_tid(&v73, v72);
      v15 = (_QWORD *)(v7 + 40);
    }
    n = (size_t)v15;
    if ( !(unsigned __int8)sub_35A3A0(v15, (__int64)a1, a2, &v73, 1) )
    {
LABEL_13:
      clear_tinfo_t(&v73);
      return 0;
    }
    v14 = v6[9];
    v13 = v6[8];
    v15 = (_QWORD *)n;
  }
  v19 = v6[11];
  if ( v6[10] < (unsigned __int64)(v14 + 1) )
  {
    v63 = v15;
    nb = v6[11];
    v44 = qvector_reserve(v6 + 8, v13, v14 + 1, 8);
    v6[8] = v44;
    v14 = v6[9];
    v13 = v44;
    v15 = v63;
    v19 = nb;
  }
  *(_QWORD *)(v13 + 8 * v14) = v19;
  ++v6[9];
  v6[11] = v15;
  *(_DWORD *)(v7 + 264) = a2;
  clear_tinfo_t(&v73);
  v24 = v6[11];
  v62 = v24;
  na = *(_DWORD *)(v24 + 228);
  if ( *(_BYTE *)(v24 + 292) )
  {
    if ( v70 < *(_DWORD *)(v24 + 228) )
      goto LABEL_26;
    v69 = a2 + v70;
    v59 = *(_QWORD *)(v24 + 272);
    if ( v59 )
    {
      ptr = (void *)qalloc_or_throw(v59, v13, v20, v21, v22, v23);
      memcpy(ptr, *(const void **)(v62 + 264), v59);
      if ( v59 == 1 )
      {
        v58 = 0;
      }
      else
      {
        v58 = (__int64)ptr;
        v59 = 1;
      }
    }
    else
    {
      v59 = 1;
      ptr = nullptr;
      v58 = 0;
    }
  }
  else
  {
    v25 = v70 / na;
    if ( v70 % na || (v59 = v25) == 0 )
    {
LABEL_26:
      v26 = v6[9];
      v27 = *(_QWORD *)(v6[8] + 8 * v26 - 8);
      if ( v26 )
        v6[9] = v26 - 1;
      v6[11] = v27;
      return 0;
    }
    ptr = nullptr;
    v58 = 0;
    v69 = a2 + v70;
    if ( *(_QWORD *)(v62 + 272) )
    {
      v53 = *(_QWORD *)(v62 + 272);
      v54 = (void *)qalloc_or_throw(v53, v13, v70 % na, v21, v22, v23);
      ptr = v54;
      memcpy(v54, *(const void **)(v62 + 264), v53);
      v55 = 0;
      if ( v53 != 1 )
        v55 = (__int64)v54;
      v58 = v55;
    }
    if ( v59 != 1 )
    {
      v45 = *(const char **)(a1[30].m128i_i64[0] + 152);
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
            goto LABEL_32;
        }
        radix = get_radix(a4, 0);
        if ( radix != -1 )
        {
          s1 = (char *)qalloc(2 * na);
          goto LABEL_33;
        }
      }
    }
  }
LABEL_32:
  radix = -1;
  s1 = nullptr;
LABEL_33:
  v74 = (unsigned int *)(&dword_0 + 1);
  v75 = -1;
  if ( get_array_parameters(&v74, a2) <= 0 )
  {
    v52 = a1[1].m128i_u32[0];
    if ( a2 != (_DWORD)v52 )
      get_array_parameters(&v74, v52);
  }
  while ( 1 )
  {
    v65 = (const char *)sub_359090(a2, v69);
    if ( v65 )
      break;
    if ( s1
      && ((unsigned __int8)v74 & 1) != 0
      && na == get_bytes(s1, na, a2, 0, 0)
      && (s2 = &s1[na], (unsigned int)v59 > 1) )
    {
      v71 = 1;
      v49 = a2;
      do
      {
        v49 += na;
        if ( na != get_bytes(s2, na, v49, 0, 0) )
          break;
        if ( memcmp(s1, s2, na) )
          break;
        ++v71;
      }
      while ( (_DWORD)v59 != v71 );
    }
    else
    {
      v71 = 1;
    }
    (*(void (__fastcall **)(__m128i *, __int64, __int64))(a1->m128i_i64[0] + 56))(a1, v58, 7);
    v32 = *(__int64 (__fastcall **)(__m128i *, char))(a1->m128i_i64[0] + 96);
    if ( (char *)v32 == (char *)sub_3598B0 )
    {
      v33 = a1[2].m128i_i64[0];
      v34 = 2;
      if ( v33 )
        v34 = v33-- + 1;
      v35 = a1[1].m128i_i64[1];
      if ( a1[2].m128i_i64[1] < v34 )
      {
        v48 = qvector_reserve(&a1[1].m128i_u64[1], v35, v34, 1);
        a1[1].m128i_i64[1] = v48;
        v35 = v48;
      }
      a1[2].m128i_i64[0] = v34;
      *(_BYTE *)(v35 + v33) = 32;
      *(_BYTE *)(a1[1].m128i_i64[1] + v33 + 1) = 0;
    }
    else
    {
      v32(a1, 32);
    }
    v36 = sub_35C8F0(a1, nullptr, v71, radix);
    v37 = haystack;
    if ( a1[2].m128i_i64[0] )
      v37 = (const char *)a1[1].m128i_i64[1];
    v38 = tag_strlen(v37);
    v39 = sub_3621A0(a1, a2, v38);
    if ( v39 )
    {
      sub_35C8F0(a1, v36, v71, radix);
      v40 = (int)v74;
      if ( ((unsigned __int8)v74 & 4) == 0 )
        goto LABEL_61;
    }
    else
    {
      v40 = (int)v74;
      if ( ((unsigned __int8)v74 & 4) == 0 )
        goto LABEL_35;
    }
    v41 = 10;
    if ( (v40 & 0xC0) == 0 )
      v41 = byte_2388074[(v40 >> 4) & 0xF];
    v42 = v76;
    if ( !btoa32(v76, 1024, (a2 - a1[1].m128i_i32[0]) / na, v41) )
      v42 = nullptr;
    v65 = v42;
    if ( v39 )
    {
LABEL_61:
      v43 = v69;
      if ( !*(_BYTE *)(v62 + 292) )
        v43 = a2 + na;
      a1[32].m128i_i32[3] = v43;
      v31 = sub_359C80(a1, v65, nullptr);
      goto LABEL_39;
    }
LABEL_35:
    v28 = a1[5].m128i_i64[1];
    v29 = *(_QWORD *)v28;
    v30 = *(_QWORD *)(*(_QWORD *)v28 + 984LL);
    if ( (unsigned int)nbits(a2) != 8 && *(_DWORD *)(v29 + 780) == 8 )
      v30 = *(_QWORD *)(v29 + 992);
    v31 = sub_35EA80((__int64)a1, a2, na, 1024, v30, 1u, 0xFFFFFFFF, (__int64)v74, v75, 0, nullptr, v65, nullptr);
LABEL_39:
    if ( v31 )
      goto LABEL_84;
    v59 -= v71;
    if ( !v59 )
      goto LABEL_84;
    a2 += na * v71;
    *(_DWORD *)(v62 + 224) += na * v71 - na;
    sub_37EF30(a1, a2, 0);
  }
  sub_35CB30(a1, a2, na, v58, v59, (__int64)v65, radix);
LABEL_84:
  qfree(s1);
  v50 = v6[9];
  v51 = *(_QWORD *)(v6[8] + 8 * v50 - 8);
  if ( v50 )
    v6[9] = v50 - 1;
  v6[11] = v51;
  if ( ptr )
    qfree(ptr);
  return 1;
}

