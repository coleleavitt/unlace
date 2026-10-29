__int64 __fastcall edit_type_form_data_t__::vfunc_2(
        __int64 a1,
        __int64 *a2,
        void (__fastcall ***a3)(_QWORD, __int64, int *))
{
  __int64 idati; // rax
  __int64 v7; // r13
  __int64 v8; // rsi
  void (__fastcall **v9)(_QWORD, __int64, int *); // rax
  __int64 v10; // rdx
  char v11; // r12
  unsigned int v12; // ebx
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // r12
  const char *v16; // rsi
  int type_ordinal; // ecx
  __int64 v18; // rdx
  const char *v19; // rdx
  const char *v20; // rcx
  unsigned int v21; // eax
  unsigned int *v22; // rax
  unsigned int *v23; // rdx
  const char *v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // r15
  size_t v27; // r8
  const void *v28; // r9
  void *v29; // rdi
  __int16 v30; // ax
  __int64 v31; // rdi
  char v32; // al
  __int64 v33; // rdi
  __int16 v34; // r12
  __int64 v35; // rdx
  unsigned int v36; // eax
  const char *v37; // rax
  const char *v38; // rsi
  char *v39; // rdx
  __int64 v40; // r12
  _QWORD *v41; // r15
  __int64 v42; // rdi
  __int64 v43; // rdi
  unsigned __int64 v44; // rdx
  unsigned int v45; // eax
  const char *v46; // rax
  const void *v47; // r8
  void *v48; // rdi
  const void *v49; // r8
  void *v50; // rdi
  __m128i si128; // xmm0
  __m128i v52; // xmm0
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // [rsp+0h] [rbp-D8h]
  const void *v56; // [rsp+0h] [rbp-D8h]
  const void *v57; // [rsp+0h] [rbp-D8h]
  char v58; // [rsp+8h] [rbp-D0h]
  const void *v59; // [rsp+8h] [rbp-D0h]
  int v60; // [rsp+14h] [rbp-C4h] BYREF
  __int64 v61; // [rsp+18h] [rbp-C0h] BYREF
  void *dest; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v63; // [rsp+28h] [rbp-B0h]
  void *v64; // [rsp+40h] [rbp-98h] BYREF
  __int128 v65; // [rsp+48h] [rbp-90h]
  __int64 v66; // [rsp+60h] [rbp-78h] BYREF
  __int128 v67; // [rsp+68h] [rbp-70h]
  __int128 v68; // [rsp+78h] [rbp-60h]
  __int64 v69; // [rsp+88h] [rbp-50h]
  int v70; // [rsp+90h] [rbp-48h]
  unsigned __int64 v71; // [rsp+98h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  idati = get_idati(a1);
  v61 = 0;
  v7 = idati;
  v60 = 0;
  v8 = 100;
  dest = nullptr;
  v64 = nullptr;
  v63 = 0;
  v9 = *a3;
  v65 = 0;
  (*v9)(a3, 100, &v60);
  v11 = v60;
  if ( v60 <= 1 )
  {
    if ( v60 < 0 )
      goto LABEL_14;
    v25 = a1 + 8;
    if ( v60 == 1 )
      v25 = a1 + 64;
    v26 = *(_QWORD *)(v25 + 8);
    if ( !v26 || (v27 = v26 - 1, v26 == 1) )
    {
      *(_QWORD *)&v63 = 0;
    }
    else
    {
      v28 = *(const void **)v25;
      v29 = dest;
      if ( *((_QWORD *)&v63 + 1) < v26 )
      {
        v59 = *(const void **)v25;
        dest = (void *)qvector_reserve(&dest, dest, v26, 1);
        v28 = v59;
        v29 = dest;
        v27 = v26 - 1;
      }
      *(_QWORD *)&v63 = v26;
      memmove(v29, v28, v27);
      *((char *)dest + v26 - 1) = 0;
    }
    v30 = *(_WORD *)(a1 + 56) & 0xFFF7;
    if ( *(_BYTE *)(a1 + 296) == 29 )
      v30 = *(_WORD *)(a1 + 56) | 8;
    *(_WORD *)(a1 + 56) = v30;
    v58 = v11 & 1;
    if ( (v11 & 1) != 0 )
    {
      v8 = a1 + 64;
      if ( !(unsigned __int8)sub_3A8180((__int64)&v61, a1 + 64, a2, (_QWORD *)(a1 + 136)) )
        goto LABEL_4;
LABEL_58:
      v38 = *(const char **)(a1 + 136);
      if ( ((unsigned __int64)v38 <= 0xFF || !(unsigned int)get_tinfo_pdata(&v64, v38, 5)) && v64 )
      {
        *(_QWORD *)&v65 = 0;
        qfree(v64, v38);
        v64 = nullptr;
        *((_QWORD *)&v65 + 1) = 0;
      }
      goto LABEL_14;
    }
    v31 = *(_QWORD *)(a1 + 136);
    v67 = 0;
    v66 = 0;
    v69 = 0;
    v70 = 1;
    v68 = 0;
    if ( !(unsigned __int8)get_tinfo_details(v31, 13, &v66) )
      goto LABEL_61;
    sub_3A5BB0(a1 + 8, (__int64)&v66);
    v8 = 13;
    if ( HIBYTE(v70) )
      v8 = 29;
    v32 = create_tinfo(&v61, v8, 13, &v66);
    if ( v32 )
    {
      v33 = v66;
      if ( !v66 )
      {
LABEL_51:
        v34 = *(_WORD *)(a1 + 32) & 1;
        if ( (_BYTE)v34 != ((get_tinfo_property(v61, 306) & 0x400) != 0) )
          set_tinfo_property4(&v61, 28, (unsigned __int8)v34, 0, 0, 0);
        if ( v34 )
        {
          v35 = *(_QWORD *)(a1 + 40);
          if ( v35 < 0 )
          {
            v8 = *a2;
            if ( (unsigned __int64)a2[2] <= 0x21 )
            {
              v53 = qvector_reserve(a2, v8, 34, 1);
              *a2 = v53;
              v8 = v53;
            }
            si128 = _mm_load_si128((const __m128i *)&xmmword_5DD560);
            a2[1] = 34;
            *(_BYTE *)(v8 + 32) = 101;
            *(__m128i *)v8 = si128;
            *(__m128i *)(v8 + 16) = _mm_load_si128((const __m128i *)&xmmword_5DD570);
            *(_BYTE *)(*a2 + 33) = 0;
            goto LABEL_4;
          }
          v36 = set_tinfo_property4(&v61, 29, v35, 0, 0, 0);
          if ( v36 )
          {
            v37 = (const char *)tinfo_errstr(v36);
            v8 = (__int64)"Cannot set struct size: %s";
            sub_169A50(a2, (__int64)"Cannot set struct size: %s", v37);
            goto LABEL_4;
          }
        }
        goto LABEL_58;
      }
      v58 = v32;
      v55 = v67;
      if ( !(_QWORD)v67 )
      {
        qfree(v66, (const char *)v8);
        goto LABEL_51;
      }
    }
    else
    {
LABEL_61:
      v39 = (char *)"structure";
      v8 = (__int64)"Invalid %s data";
      if ( (*(_BYTE *)(a1 + 56) & 8) != 0 )
        v39 = "union";
      sub_169A50(a2, (__int64)"Invalid %s data", v39);
      v33 = v66;
      if ( !v66 )
        goto LABEL_4;
      v55 = v67;
      if ( !(_QWORD)v67 )
      {
        qfree(v66, "Invalid %s data");
        goto LABEL_4;
      }
    }
    v40 = 0;
    do
    {
      v41 = (_QWORD *)(v33 + 144 * v40);
      clear_tinfo_t(v41 + 8);
      v42 = v41[5];
      if ( v42 )
      {
        v41[6] = 0;
        qfree(v42, (const char *)v8);
      }
      v43 = v41[2];
      if ( v43 )
      {
        v41[3] = 0;
        qfree(v43, (const char *)v8);
      }
      v33 = v66;
      ++v40;
    }
    while ( v55 != v40 );
    *(_QWORD *)&v67 = 0;
    qfree(v66, (const char *)v8);
    if ( !v58 )
      goto LABEL_4;
    goto LABEL_51;
  }
  if ( v60 == 2 )
  {
    if ( !*(_BYTE *)(a1 + 136) )
    {
LABEL_4:
      v12 = 0;
      goto LABEL_5;
    }
    copy_tinfo_t(&v61, a1 + 136, v10);
    v14 = *(_QWORD *)(a1 + 152);
    if ( v14 > 1 )
    {
      v49 = *(const void **)(a1 + 144);
      v50 = dest;
      if ( *((_QWORD *)&v63 + 1) < v14 )
      {
        v57 = *(const void **)(a1 + 144);
        dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a1 + 152), 1);
        v49 = v57;
        v50 = dest;
      }
      *(_QWORD *)&v63 = v14;
      memmove(v50, v49, v14 - 1);
      *((char *)dest + v14 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v63 = 0;
    }
    v15 = *(_QWORD *)(a1 + 176);
    if ( v15 > 1 )
    {
      v47 = *(const void **)(a1 + 168);
      v48 = v64;
      if ( *((_QWORD *)&v65 + 1) < v15 )
      {
        v56 = *(const void **)(a1 + 168);
        v64 = (void *)qvector_reserve(&v64, v64, *(_QWORD *)(a1 + 176), 1);
        v47 = v56;
        v48 = v64;
      }
      *(_QWORD *)&v65 = v15;
      memmove(v48, v47, v15 - 1);
      *((char *)v64 + v15 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&v65 = 0;
    }
  }
LABEL_14:
  v16 = &s1;
  if ( (_QWORD)v63 )
    v16 = (const char *)dest;
  type_ordinal = get_type_ordinal(v7, v16);
  v18 = *(unsigned int *)(a1 + 312);
  if ( type_ordinal && type_ordinal != (_DWORD)v18 )
  {
    v19 = &s1;
    if ( (_QWORD)v63 )
      v19 = (const char *)dest;
    v8 = (__int64)"A type named '%s' already exists (with ordinal %u)";
    sub_169A50(a2, (__int64)"A type named '%s' already exists (with ordinal %u)", v19, type_ordinal);
    goto LABEL_4;
  }
  v20 = &s1;
  if ( (_QWORD)v63 )
    v20 = (const char *)dest;
  v21 = save_tinfo(&v61, v7, v18, v20, 5);
  if ( v21 )
  {
    v24 = (const char *)tinfo_errstr(v21);
    v8 = (__int64)"Could not save type: %s";
    sub_169A50(a2, (__int64)"Could not save type: %s", v24);
    goto LABEL_4;
  }
  set_tinfo_property4(&v61, 5, v64, 0, 0, 0);
  v22 = *(unsigned int **)(a1 + 272);
  v23 = &v22[*(_QWORD *)(a1 + 280)];
  if ( v22 == v23 )
    goto LABEL_78;
  while ( 1 )
  {
    v8 = *v22;
    if ( !(_DWORD)v8 )
      break;
    if ( v23 == ++v22 )
      goto LABEL_78;
  }
  if ( v23 == v22 )
  {
LABEL_78:
    v8 = *(unsigned int *)(a1 + 312);
    set_type_choosable(v7, v8, *(_WORD *)(a1 + 56) & 1);
  }
  if ( !v60 )
  {
    v44 = *(_QWORD *)(a1 + 48);
    if ( (v44 & (v44 - 1)) != 0 )
    {
      v8 = *a2;
      if ( (unsigned __int64)a2[2] <= 0x1E )
      {
        v54 = qvector_reserve(a2, v8, 31, 1);
        *a2 = v54;
        v8 = v54;
      }
      v52 = _mm_load_si128((const __m128i *)&xmmword_5DD580);
      a2[1] = 31;
      *(__m128i *)v8 = v52;
      *(__m128i *)(v8 + 14) = _mm_load_si128((const __m128i *)&xmmword_5DD590);
      *(_BYTE *)(*a2 + 30) = 0;
      goto LABEL_4;
    }
    if ( v44 )
    {
      _BitScanReverse64(&v44, v44);
      v44 = (int)v44 + 1;
    }
    v8 = 26;
    v45 = set_tinfo_property4(&v61, 26, v44, 0, 0, 0);
    if ( v45 )
    {
      v46 = (const char *)tinfo_errstr(v45);
      v8 = (__int64)"Could not set alignment: %s";
      sub_169A50(a2, (__int64)"Could not set alignment: %s", v46);
      goto LABEL_4;
    }
  }
  v12 = 1;
LABEL_5:
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64, (const char *)v8);
  }
  if ( dest )
  {
    *(_QWORD *)&v63 = 0;
    qfree(dest, (const char *)v8);
  }
  clear_tinfo_t(&v61);
  return v12;
}
