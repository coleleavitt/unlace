__int64 __fastcall dwarf_macho_setup(
        int fd,
        const char *a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        unsigned __int64 a7,
        unsigned int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v13; // r12d
  __int64 v15; // r13
  _WORD *v16; // rax
  char v17; // r9
  int v18; // ecx
  _WORD *v19; // rbx
  size_t v20; // r8
  __int16 v21; // ax
  void *(*v22)(void *, const void *, size_t); // rax
  char v23; // dl
  unsigned int v24; // ebx
  __int64 v26; // r14
  unsigned __int64 v27; // rbp
  __int64 v28; // r13
  const char **v29; // r15
  int v30; // r14d
  _BYTE *v31; // rax
  void **v32; // rax
  void **v33; // r12
  unsigned int inited; // eax
  _QWORD *v35; // r15
  char *v36; // rax
  __int64 v37; // rdx
  unsigned __int64 v38; // rax
  int v39; // r14d
  void *v40; // rax
  void *v41; // rax
  void *v42; // rcx
  void *v43; // r14
  __m128i *v44; // rax
  __m128i *v45; // r14
  __int64 v46; // rax
  unsigned __int64 v47; // r8
  void *v48; // r11
  unsigned __int64 v49; // rax
  char *v50; // rax
  char *v51; // rsi
  _QWORD *v52; // r12
  unsigned int v53; // r13d
  char *v54; // rbp
  char *v55; // rdx
  int v57; // [rsp+8h] [rbp-C0h]
  void *(*v58)(void *, const void *, size_t); // [rsp+8h] [rbp-C0h]
  int v59; // [rsp+8h] [rbp-C0h]
  unsigned int v61; // [rsp+18h] [rbp-B0h]
  size_t v62; // [rsp+18h] [rbp-B0h]
  size_t v63; // [rsp+18h] [rbp-B0h]
  __int64 v65; // [rsp+38h] [rbp-90h]
  void *v66; // [rsp+40h] [rbp-88h]
  void *v67; // [rsp+40h] [rbp-88h]
  char *v68; // [rsp+40h] [rbp-88h]
  int v69; // [rsp+50h] [rbp-78h] BYREF
  int v70; // [rsp+54h] [rbp-74h] BYREF
  int v71; // [rsp+58h] [rbp-70h] BYREF
  int v72; // [rsp+5Ch] [rbp-6Ch] BYREF
  size_t nmemb[2]; // [rsp+60h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+70h] [rbp-58h] BYREF
  _QWORD buf[9]; // [rsp+80h] [rbp-48h] BYREF

  v13 = fd;
  v15 = a11;
  buf[1] = __readfsqword(0x28u);
  v69 = 0;
  v16 = calloc(0xE0u, 1u);
  v17 = a6;
  v18 = a4;
  if ( !v16 )
    goto LABEL_73;
  v70 = a4;
  v19 = v16;
  v71 = a5;
  v72 = a6;
  if ( a4 != 5 )
  {
    v57 = 0;
    v20 = 0;
    goto LABEL_4;
  }
  *(__m128i *)nmemb = _mm_load_si128((const __m128i *)&xmmword_A39E0);
  buf[0] = 0;
  ptr[1] = (void *)_mm_load_si128((const __m128i *)&xmmword_A39F0).m128i_i64[1];
  ptr[0] = (void *)a7;
  if ( a7 <= 8 )
    goto LABEL_28;
  if ( (unsigned int)_dwarf_object_read_random(fd, buf) )
    goto LABEL_7;
  v38 = ((((((unsigned __int64)LOBYTE(buf[0]) << 8) | BYTE1(buf[0])) << 8) | BYTE2(buf[0])) << 8) | BYTE3(buf[0]);
  nmemb[0] = v38;
  switch ( v38 )
  {
    case 0xCAFEBABEuLL:
      v39 = 32;
      v58 = (void *(*)(void *, const void *, size_t))dwarf_memcpy_swap_bytes;
      break;
    case 0xBEBAFECAuLL:
      v39 = 32;
      v58 = dwarf_memcpy_noswap_bytes;
      break;
    case 0xCAFEBABFuLL:
      v39 = 64;
      v58 = (void *(*)(void *, const void *, size_t))dwarf_memcpy_swap_bytes;
      break;
    case 0xBFBAFECAuLL:
      v39 = 64;
      v58 = dwarf_memcpy_noswap_bytes;
      break;
    default:
      v69 = 412;
      goto LABEL_7;
  }
  nmemb[1] = 0;
  v58(&nmemb[1], (char *)buf + 4, 4);
  if ( nmemb[1] >= a7 >> 1 )
  {
LABEL_28:
    v69 = 502;
LABEL_7:
    sub_3E5A0(v19);
LABEL_8:
    v24 = 1;
    _dwarf_error(0, a12, v69);
    return v24;
  }
  v62 = nmemb[1];
  v40 = calloc(nmemb[1], 0x30u);
  ptr[1] = v40;
  if ( !v40 )
  {
    v69 = 62;
    goto LABEL_7;
  }
  v66 = v40;
  if ( v39 == 32 )
  {
    v50 = (char *)calloc(v62, 0x14u);
    v42 = v66;
    v51 = v50;
    if ( v50 )
    {
      if ( 20 * v62 + 8 >= a7 )
      {
        free(v66);
        free(v51);
        v69 = 417;
        goto LABEL_7;
      }
      if ( (unsigned int)_dwarf_object_read_random(fd, v50) )
      {
        free(ptr[1]);
        free(v51);
        goto LABEL_7;
      }
      v68 = nullptr;
      if ( nmemb[1] )
      {
        v52 = ptr[1];
        v53 = a3;
        v54 = v51;
        do
        {
          *v52 = 0;
          v58(v52, v54, 4);
          v52[1] = 0;
          v58(v52 + 1, v54 + 4, 4);
          v52[2] = 0;
          v58(v52 + 2, v54 + 8, 4);
          if ( (void *)v52[2] >= ptr[0]
            || (v52[3] = 0, v58(v52 + 3, v54 + 12, 4), v55 = (char *)v52[3], v55 >= ptr[0])
            || ptr[0] < &v55[v52[2]]
            || (v52[4] = 0, v58(v52 + 4, v54 + 16, 4), v52[4] > 0x1Fu) )
          {
            v69 = 503;
            free(v51);
            goto LABEL_65;
          }
          ++v68;
          v54 += 20;
          v52 += 6;
          *(v52 - 1) = 0;
        }
        while ( (unsigned __int64)v68 < nmemb[1] );
        a3 = v53;
        v15 = a11;
        v13 = fd;
      }
      free(v51);
      goto LABEL_43;
    }
LABEL_76:
    v69 = 62;
    free(v42);
    goto LABEL_7;
  }
  v41 = calloc(v62, 0x20u);
  v42 = v66;
  v43 = v41;
  if ( !v41 )
    goto LABEL_76;
  if ( 32 * v62 + 8 >= a7 )
  {
    free(v66);
    free(v43);
    v69 = 417;
    goto LABEL_7;
  }
  if ( (unsigned int)_dwarf_object_read_random(fd, v41) == 1 )
  {
    free(ptr[1]);
    free(v43);
    goto LABEL_7;
  }
  v59 = _dwarf_fill_in_uni_arch_64(v43, nmemb, v58, &v69);
  free(v43);
  if ( v59 )
  {
LABEL_65:
    free(ptr[1]);
    goto LABEL_7;
  }
LABEL_43:
  v44 = (__m128i *)malloc(0x20u);
  v45 = v44;
  if ( !v44 )
  {
    free(ptr[1]);
LABEL_51:
    v69 = 502;
    _dwarf_dealloc_universal_head(v45);
    goto LABEL_7;
  }
  *v44 = _mm_load_si128((const __m128i *)nmemb);
  v44[1] = _mm_load_si128((const __m128i *)ptr);
  v57 = nmemb[1];
  if ( a3 >= LODWORD(nmemb[1]) )
    goto LABEL_51;
  v46 = v44[1].m128i_i64[1] + 48LL * a3;
  v47 = *(_QWORD *)(v46 + 16);
  v49 = *(_QWORD *)(v46 + 24);
  v48 = (void *)v49;
  if ( v47 >= v49 )
    v49 = v47;
  if ( v49 >= a7 )
    goto LABEL_51;
  v67 = v48;
  nmemb[0] = 0;
  v63 = v47;
  if ( (unsigned int)_dwarf_object_detector_fd_a(
                       v13,
                       (__int64)&v70,
                       (__int64)&v71,
                       (__int64)&v72,
                       v47,
                       (__int64)nmemb,
                       (__int64)&v69) )
  {
    _dwarf_dealloc_universal_head(v45);
    goto LABEL_7;
  }
  _dwarf_dealloc_universal_head(v45);
  a5 = v71;
  v17 = v72;
  v18 = v70;
  a7 = (unsigned __int64)v67;
  v20 = v63;
LABEL_4:
  *((_DWORD *)v19 + 4) = v13;
  *v19 = 12621;
  LOBYTE(v21) = v17;
  HIBYTE(v21) = v17;
  *((_QWORD *)v19 + 6) = v20;
  v19[28] = v21;
  *((_DWORD *)v19 + 15) = v18;
  *((_QWORD *)v19 + 3) = a7;
  *((_DWORD *)v19 + 17) = a3;
  *((_DWORD *)v19 + 18) = v57;
  if ( a5 == 2 )
  {
    v22 = dwarf_memcpy_noswap_bytes;
    v23 = 2;
  }
  else
  {
    v22 = (void *(*)(void *, const void *, size_t))dwarf_memcpy_swap_bytes;
    v23 = 1;
  }
  *((_BYTE *)v19 + 64) = v23;
  *((_QWORD *)v19 + 10) = v22;
  if ( (unsigned int)_dwarf_load_macho_header(v19, &v69) || (unsigned int)_dwarf_load_macho_commands(v19, &v69) )
    goto LABEL_7;
  v26 = *((_QWORD *)v19 + 27);
  if ( v26 )
    v26 += 160;
  if ( *((_QWORD *)v19 + 26) > 1u )
  {
    v61 = a3;
    v27 = 1;
    v65 = v15;
    v28 = v26;
    do
    {
      *(_QWORD *)(v28 + 48) = "";
      v29 = (const char **)off_B73F0;
      v30 = 1;
      while ( strcmp((const char *)v28, *v29) )
      {
        ++v30;
        v29 += 2;
        if ( v30 == 21 )
          goto LABEL_24;
      }
      v31 = *(&off_B73E0 + 2 * v30 + 1);
      *(_QWORD *)(v28 + 48) = v31;
      if ( *v31 )
        goto LABEL_19;
LABEL_24:
      *(_QWORD *)(v28 + 48) = v28;
LABEL_19:
      ++v27;
      v28 += 160;
    }
    while ( v27 < *((_QWORD *)v19 + 26) );
    a3 = v61;
    v15 = v65;
  }
  v32 = (void **)malloc(0x10u);
  v33 = v32;
  if ( !v32 )
  {
    sub_3E5A0(v19);
LABEL_73:
    v69 = 62;
    goto LABEL_8;
  }
  *v32 = v19;
  v32[1] = &off_B7380;
  inited = dwarf_object_init_b(v32, a9, a10, a8, v15, a12);
  v35 = *v33;
  v24 = inited;
  if ( inited )
  {
    sub_3E5A0(*v33);
    free(v33);
  }
  else
  {
    v36 = strdup(a2);
    v37 = v35[5];
    v35[1] = v36;
    *(_QWORD *)(*(_QWORD *)v15 + 272LL) = v37;
    *(_QWORD *)(*(_QWORD *)v15 + 248LL) = v35[4];
    *(_DWORD *)(*(_QWORD *)v15 + 8356LL) = a3;
    *(_DWORD *)(*(_QWORD *)v15 + 8352LL) = v57;
  }
  return v24;
}

