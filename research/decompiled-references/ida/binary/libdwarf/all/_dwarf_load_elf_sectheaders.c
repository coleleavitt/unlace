__int64 __fastcall dwarf_load_elf_sectheaders(__int64 a1, _DWORD *a2)
{
  char v3; // al
  _DWORD *v4; // r12
  __int64 result; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  _QWORD *v8; // rbp
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  void *v12; // rsi
  void *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r15
  __int64 i; // r8
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rcx
  const char *v20; // rcx
  const char *v21; // rsi
  const char *v22; // rdx
  __int64 v23; // rbp
  __int64 v24; // r12
  _QWORD *v25; // r14
  const char *v26; // r13
  __int64 v27; // r15
  size_t v28; // r14
  size_t v29; // rbp
  size_t v30; // r13
  size_t v31; // r8
  unsigned int random; // eax
  unsigned __int64 v33; // rbp
  unsigned __int64 *v34; // r15
  __int64 v35; // r12
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rdi
  unsigned __int64 v38; // rax
  int v39; // edx
  int v40; // edi
  unsigned __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // rcx
  __int64 v44; // r10
  __int64 v45; // rax
  size_t v46; // rcx
  unsigned int *v47; // rax
  void *v48; // rsi
  unsigned int v49; // eax
  size_t v50; // rdi
  _QWORD *v51; // rax
  unsigned __int64 v52; // r11
  unsigned int *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r15
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rax
  __int64 v59; // r12
  unsigned __int64 v60; // r12
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // r14
  __int64 v64; // r12
  __int64 v65; // r15
  char *v66; // r13
  size_t v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rsi
  void *ptr; // [rsp+8h] [rbp-180h]
  unsigned int ptra; // [rsp+8h] [rbp-180h]
  _DWORD *v73; // [rsp+10h] [rbp-178h]
  void *v74; // [rsp+10h] [rbp-178h]
  unsigned int *v75; // [rsp+10h] [rbp-178h]
  void *v76; // [rsp+10h] [rbp-178h]
  _DWORD *v77; // [rsp+10h] [rbp-178h]
  unsigned __int64 v78; // [rsp+18h] [rbp-170h]
  unsigned __int64 v79; // [rsp+18h] [rbp-170h]
  unsigned int v80; // [rsp+18h] [rbp-170h]
  unsigned __int64 v81; // [rsp+18h] [rbp-170h]
  _DWORD *v82; // [rsp+20h] [rbp-168h]
  unsigned int *v83; // [rsp+20h] [rbp-168h]
  size_t v84; // [rsp+28h] [rbp-160h]
  int v85; // [rsp+28h] [rbp-160h]
  _DWORD *v86; // [rsp+30h] [rbp-158h]
  __int64 v87; // [rsp+38h] [rbp-150h]
  _OWORD v88[3]; // [rsp+50h] [rbp-138h] BYREF
  __m128i si128; // [rsp+80h] [rbp-108h]
  __m128i v90; // [rsp+90h] [rbp-F8h]
  __m128i v91; // [rsp+A0h] [rbp-E8h]
  __m128i v92; // [rsp+B0h] [rbp-D8h]
  __m128i v93; // [rsp+C0h] [rbp-C8h]
  __m128i v94; // [rsp+D0h] [rbp-B8h]
  __m128i v95; // [rsp+E0h] [rbp-A8h]
  __m128i v96; // [rsp+F0h] [rbp-98h]
  __int64 v97; // [rsp+100h] [rbp-88h]
  _OWORD buf[2]; // [rsp+110h] [rbp-78h] BYREF
  __int64 v99; // [rsp+130h] [rbp-58h]
  int v100; // [rsp+144h] [rbp-44h] BYREF
  unsigned __int64 v101; // [rsp+148h] [rbp-40h]

  v3 = *(_BYTE *)(a1 + 56);
  v101 = __readfsqword(0x28u);
  v4 = a2;
  if ( v3 == 32 )
  {
    v27 = *(_QWORD *)(a1 + 144);
    v28 = *(_QWORD *)(v27 + 96);
    if ( v28 <= 0x27 )
      goto LABEL_59;
    v29 = *(_QWORD *)(v27 + 56);
    if ( *(_DWORD *)(v27 + 112) && *(_DWORD *)(v27 + 128) )
    {
      v30 = *(_QWORD *)(v27 + 104);
      goto LABEL_37;
    }
    v40 = *(_DWORD *)(a1 + 16);
    v99 = 0;
    buf[0] = _mm_load_si128((const __m128i *)&xmmword_947E0);
    v97 = 0;
    buf[1] = _mm_load_si128((const __m128i *)&xmmword_947F0);
    v88[0] = _mm_load_si128((const __m128i *)&xmmword_94720);
    v88[1] = _mm_load_si128((const __m128i *)&xmmword_94730);
    v88[2] = _mm_load_si128((const __m128i *)&xmmword_94740);
    si128 = _mm_load_si128((const __m128i *)&xmmword_94750);
    v90 = _mm_load_si128((const __m128i *)&xmmword_94760);
    v91 = _mm_load_si128((const __m128i *)&xmmword_94770);
    v92 = _mm_load_si128((const __m128i *)&xmmword_94780);
    v93 = _mm_load_si128((const __m128i *)&xmmword_94790);
    v94 = _mm_load_si128((const __m128i *)&xmmword_947A0);
    v95 = _mm_load_si128((const __m128i *)&xmmword_947B0);
    v96 = _mm_load_si128((const __m128i *)&xmmword_947C0);
    result = _dwarf_object_read_random(v40, buf);
    if ( (_DWORD)result )
      return result;
    sub_1A9A0(a1, v88, (__int64)buf);
    if ( *(_DWORD *)(v27 + 116) )
    {
      v30 = si128.m128i_u64[1];
      *(_DWORD *)(v27 + 112) = 1;
      *(_QWORD *)(v27 + 104) = v30;
      if ( v30 <= 2 )
      {
        *a2 = 494;
        return 1;
      }
      if ( *(_DWORD *)(v27 + 132) )
      {
        v68 = v90.m128i_i64[0];
        *(_DWORD *)(v27 + 128) = 1;
        *(_QWORD *)(v27 + 120) = v68;
      }
      else if ( !*(_DWORD *)(v27 + 128) )
      {
LABEL_38:
        v31 = *(_QWORD *)(a1 + 40);
        if ( v28 > 0xC8 || v31 < v29 || v31 < v30 || v31 < v29 + v30 * v28 )
          goto LABEL_67;
        v82 = *(_DWORD **)(a1 + 144);
        ptr = calloc(v30, v28);
        if ( !ptr )
          goto LABEL_170;
        v74 = calloc(v30, 0xB8u);
        if ( !v74 )
        {
          free(ptr);
          goto LABEL_170;
        }
        random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), ptr);
        if ( random )
        {
          v80 = random;
          free(ptr);
          free(v74);
          return v80;
        }
        v84 = v29;
        v33 = 0;
        v34 = (unsigned __int64 *)v74;
        v35 = (__int64)ptr;
        while ( 1 )
        {
          *v34 = v33;
          sub_1A9A0(a1, v34, v35);
          v36 = v34[7];
          v37 = v34[3];
          if ( v36 >= *(_QWORD *)(a1 + 40) && v37 != 8 )
            break;
          if ( v33 )
          {
            v38 = v34[4];
            if ( v38 )
            {
              v39 = 0;
              do
              {
                v39 += *((_DWORD *)nibblecounts + (v38 & 0xF));
                v38 >>= 4;
              }
              while ( v38 );
              if ( v39 > 8 )
              {
                free(ptr);
                free(v74);
                *a2 = 496;
                return 1;
              }
            }
            if ( v37 == 9 || v37 == 4 )
              v34[9] = v34[10];
          }
          else
          {
            if ( v82[29] )
              v36 = 0;
            v41 = 0;
            if ( !v82[33] )
              v41 = v34[8];
            if ( (v37 & 0xFFFFFFFFFFFFFFF7LL) != 0 || v34[1] || v41 | v34[4] | v36 || v34[5] || v34[10] )
            {
              free(ptr);
              free(v74);
              *a2 = 497;
              return 1;
            }
          }
          ++v33;
          v35 += 40;
          v34 += 23;
          if ( v33 == v30 )
          {
            v4 = a2;
            free(ptr);
            *(_QWORD *)(a1 + 176) = 40;
            *(_QWORD *)(a1 + 192) = v74;
            *(_QWORD *)(a1 + 152) = "Section Header";
            *(__m128i *)(a1 + 160) = _mm_unpacklo_epi64((__m128i)v84, (__m128i)v33);
            *(_QWORD *)(a1 + 184) = 40 * v33;
            goto LABEL_7;
          }
        }
        v4 = a2;
        free(ptr);
        free(v74);
LABEL_59:
        *v4 = 435;
        return 1;
      }
LABEL_65:
      if ( *(_QWORD *)(v27 + 120) >= v30 )
      {
        *a2 = 493;
        return 1;
      }
      goto LABEL_38;
    }
    v30 = *(_QWORD *)(v27 + 104);
    v61 = *(_DWORD *)(v27 + 112);
    if ( *(_DWORD *)(v27 + 132) )
    {
      v62 = v90.m128i_i64[0];
      *(_DWORD *)(v27 + 128) = 1;
      *(_QWORD *)(v27 + 120) = v62;
      if ( v61 )
        goto LABEL_65;
    }
    else if ( v61 && *(_DWORD *)(v27 + 128) )
    {
      goto LABEL_65;
    }
LABEL_37:
    if ( !v30 )
      return 0xFFFFFFFFLL;
    goto LABEL_38;
  }
  if ( v3 != 64 )
  {
    *a2 = 415;
    return 1;
  }
  result = sub_1ABE0(
             a1,
             *(_QWORD *)(*(_QWORD *)(a1 + 144) + 56LL),
             *(_QWORD *)(*(_QWORD *)(a1 + 144) + 96LL),
             *(_QWORD *)(*(_QWORD *)(a1 + 144) + 104LL),
             a2);
  if ( (_DWORD)result )
    return result;
LABEL_7:
  v6 = *(_QWORD *)(a1 + 144);
  v7 = *(_QWORD *)(v6 + 120);
  *(_QWORD *)(a1 + 256) = 0;
  if ( v7 >= *(_QWORD *)(v6 + 104) )
  {
    *v4 = 438;
    return 1;
  }
  v8 = (_QWORD *)(*(_QWORD *)(a1 + 192) + 184 * v7);
  if ( (v8[3] & 0xFFFFFFFFFFFFFFF7LL) == 0 )
  {
    *v4 = 443;
    return 1;
  }
  v9 = v8[6];
  v10 = *(_QWORD *)(a1 + 40);
  if ( v9 >= v10 || (v11 = v8[7], v10 < v11) || v10 < v9 + v11 )
  {
LABEL_67:
    *v4 = 470;
    return 1;
  }
  v12 = *(void **)(a1 + 248);
  if ( *(_QWORD *)(a1 + 264) < v11 )
  {
    free(*(void **)(a1 + 248));
    v13 = malloc(v8[7]);
    *(_QWORD *)(a1 + 248) = v13;
    v11 = v8[7];
    v12 = v13;
    *(_QWORD *)(a1 + 264) = v11;
    if ( !v13 )
    {
      *(_QWORD *)(a1 + 264) = 0;
      *v4 = 62;
      return 1;
    }
  }
  *(_QWORD *)(a1 + 256) = v11;
  result = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v12);
  if ( !(_DWORD)result )
  {
    v14 = *(_QWORD *)(a1 + 168);
    v15 = *(_QWORD *)(a1 + 248);
    v16 = *(_QWORD *)(a1 + 192);
    if ( !v14 )
      goto LABEL_152;
    for ( i = 0; i != v14; ++i )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 144) + 120LL) && v15 )
      {
        v18 = *(_QWORD *)(v16 + 8);
        v19 = *(_QWORD *)(a1 + 256);
        if ( v18 >= v19 || (v20 = (const char *)(v15 + v19), v21 = (const char *)(v15 + v18), v21 >= v20) )
        {
LABEL_70:
          *v4 = 437;
          *(_QWORD *)(v16 + 16) = "<Invalid sh_name value. Corrupt Elf.>";
          return 1;
        }
        v22 = v21;
        while ( *v22 )
        {
          if ( v20 == ++v22 )
            goto LABEL_70;
        }
      }
      else
      {
        v21 = "<No valid Elf section strings exist>";
      }
      *(_QWORD *)(v16 + 16) = v21;
      v16 += 184;
    }
    v23 = *(_QWORD *)(a1 + 168);
    v16 = *(_QWORD *)(a1 + 192);
    if ( v23 )
    {
      v73 = v4;
      v24 = 0;
      v25 = *(_QWORD **)(a1 + 192);
      do
      {
        if ( (v25[3] & 0xFFFFFFFFFFFFFFF7LL) != 0 )
        {
          v26 = (const char *)v25[2];
          if ( !strcmp(v26, ".dynsym") )
          {
            *(_QWORD *)(a1 + 400) = v24;
            *(_QWORD *)(a1 + 336) = v25[6];
          }
          else if ( !strcmp(v26, ".dynstr") )
          {
            *(_QWORD *)(a1 + 392) = v24;
            *(_QWORD *)(a1 + 384) = v25[7];
          }
          else if ( !strcmp(v26, ".symtab") )
          {
            *(_QWORD *)(a1 + 480) = v24;
            *(_QWORD *)(a1 + 416) = v25[6];
          }
          else if ( !strcmp(v26, ".strtab") )
          {
            *(_QWORD *)(a1 + 472) = v24;
            *(_QWORD *)(a1 + 464) = v25[7];
          }
          else if ( !strcmp(v26, ".dynamic") )
          {
            *(_QWORD *)(a1 + 320) = v24;
            *(_QWORD *)(a1 + 280) = v25[6];
          }
        }
        ++v24;
        v25 += 23;
      }
      while ( v23 != v24 );
      v42 = *(_QWORD *)(a1 + 480);
      v4 = v73;
      if ( v42 )
      {
        v43 = *(_QWORD *)(a1 + 472);
        if ( v43 )
        {
          v44 = 184 * v42;
          v42 = 0;
          if ( v43 == *(_QWORD *)(v16 + v44 + 64) )
            goto LABEL_93;
LABEL_86:
          *v4 = 440;
          return 1;
        }
LABEL_141:
        *v4 = 447;
        return 1;
      }
      while ( 1 )
      {
LABEL_93:
        v45 = *(_QWORD *)(v16 + 24);
        if ( (v45 & 0xFFFFFFFFFFFFFFF7LL) == 0 )
          goto LABEL_92;
        if ( v45 != 17 && strcmp(*(const char **)(v16 + 16), ".group") )
        {
          if ( (*(_BYTE *)(v16 + 33) & 2) != 0 )
            ++*(_QWORD *)(a1 + 504);
          goto LABEL_92;
        }
        if ( *(_QWORD *)(v16 + 160) )
          goto LABEL_92;
        v46 = *(_QWORD *)(v16 + 56);
        if ( v46 >= *(_QWORD *)(a1 + 40) || v46 <= 3 )
          goto LABEL_117;
        v78 = *(_QWORD *)(v16 + 56);
        v47 = (unsigned int *)malloc(v46);
        v48 = v47;
        if ( !v47 )
          goto LABEL_170;
        if ( *(_QWORD *)(v16 + 96) != 4 )
        {
          *v4 = 441;
          free(v47);
          return 1;
        }
        if ( v78 >> 2 >= *(_QWORD *)(a1 + 168) )
          goto LABEL_157;
        v79 = v78 >> 2;
        v75 = v47;
        v49 = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v47);
        v48 = v75;
        if ( v49 )
        {
          ptra = v49;
          free(v75);
          return ptra;
        }
        v50 = 8 * v79 + 8;
        if ( v50 >= *(_QWORD *)(a1 + 40) )
        {
LABEL_157:
          free(v48);
          *v4 = 441;
          return 1;
        }
        v83 = v75;
        v51 = malloc(v50);
        v52 = v79;
        v53 = v75;
        v76 = v51;
        if ( !v51 )
          break;
        v54 = *v83;
        v100 = v54;
        if ( (_DWORD)v54 != 1 && v54 != 0x1000000 )
          goto LABEL_163;
        v55 = 1;
        *v51 = 1;
        if ( v79 == 1 )
          goto LABEL_166;
        v87 = v16;
        v56 = 1;
        v85 = 0;
        v86 = v4;
        do
        {
          v60 = v53[v56];
          *(_QWORD *)&v88[0] = 0;
          v100 = v60;
          _dwarf_memcpy_swap_bytes(v88, &v100, 4, v55);
          v58 = v60;
          if ( !v60 )
          {
LABEL_116:
            v4 = v86;
            free(v53);
            free(v76);
LABEL_117:
            *v4 = 441;
            return 1;
          }
          v57 = *(_QWORD *)(a1 + 168);
          if ( v60 >= v57 )
          {
            v58 = *(_QWORD *)&v88[0];
            if ( *(_QWORD *)&v88[0] >= v57 )
            {
              v4 = v86;
LABEL_163:
              *v4 = 441;
              free(v53);
              free(v76);
              return 1;
            }
          }
          v59 = *(_QWORD *)(a1 + 192) + 184 * v58;
          *((_QWORD *)v76 + v56) = v58;
          if ( !(unsigned int)_dwarf_ignorethissection(*(char **)(v59 + 16)) )
          {
            if ( *(_QWORD *)(v59 + 152) )
              goto LABEL_116;
            v85 = 1;
            *(_QWORD *)(v59 + 152) = *(_QWORD *)(a1 + 488);
          }
          ++v56;
        }
        while ( v79 != v56 );
        v52 = v79;
        v16 = v87;
        v4 = v86;
        if ( v85 )
          *(__m128i *)(a1 + 488) = _mm_add_epi64(
                                     _mm_unpacklo_epi64((__m128i)1uLL, (__m128i)1uLL),
                                     _mm_loadu_si128((const __m128i *)(a1 + 488)));
LABEL_166:
        v81 = v52;
        free(v53);
        *(_QWORD *)(v16 + 160) = v76;
        *(_QWORD *)(v16 + 168) = v81;
LABEL_92:
        v16 += 184;
        if ( v23 == ++v42 )
        {
          v77 = v4;
          v63 = *(_QWORD *)(a1 + 192);
          v64 = 0;
          while ( 1 )
          {
            v65 = *(_QWORD *)(v63 + 24);
            if ( (v65 & 0xFFFFFFFFFFFFFFF7LL) != 0 && v65 != 17 )
            {
              v66 = *(char **)(v63 + 16);
              if ( strcmp(v66, ".group") )
              {
                v67 = strlen(v66);
                if ( v67 > 3 && !strcmp(&v66[v67 - 4], ".dwo") )
                {
                  if ( *(_QWORD *)(v63 + 152) )
                  {
                    *v77 = 441;
                    return 1;
                  }
                  *(_BYTE *)(v63 + 176) = 1;
                  *(_QWORD *)(v63 + 152) = 2;
                  ++*(_QWORD *)(a1 + 512);
                }
                else if ( !(unsigned int)_dwarf_ignorethissection(v66) )
                {
                  if ( v65 == 4 )
                    goto LABEL_135;
                  if ( !strncmp(v66, ".rel", 4u) )
                  {
                    if ( !strncmp(v66, ".rela.", 6u) || !strncmp(v66, ".rel.", 5u) )
                      goto LABEL_135;
                  }
                  else if ( !strncmp(v66, ".debug_", 7u)
                         || !strncmp(v66, ".zdebug_", 8u)
                         || !strcmp(v66, ".eh_frame")
                         || !strncmp(v66, ".gdb_index", 0xAu) )
                  {
LABEL_135:
                    if ( !*(_QWORD *)(v63 + 152) )
                      *(_QWORD *)(v63 + 152) = 1;
                    *(_BYTE *)(v63 + 176) = 1;
                  }
                }
              }
            }
            ++v64;
            v63 += 184;
            if ( v23 == v64 )
              return 0;
          }
        }
      }
      free(v83);
LABEL_170:
      *v4 = 62;
      return 1;
    }
    else
    {
LABEL_152:
      v69 = *(_QWORD *)(a1 + 480);
      if ( v69 )
      {
        v70 = *(_QWORD *)(a1 + 472);
        if ( !v70 )
          goto LABEL_141;
        if ( v70 != *(_QWORD *)(v16 + 184 * v69 + 64) )
          goto LABEL_86;
      }
    }
  }
  return result;
}

