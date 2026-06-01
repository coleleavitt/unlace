__int64 __fastcall sub_49EB0(__int64 a1, int *a2)
{
  unsigned __int64 v2; // r8
  unsigned int random; // r15d
  __int64 v7; // rax
  void (__fastcall *v8)(void *, const void *, size_t); // rbp
  int v9; // eax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  char v12; // cl
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r8
  unsigned int v16; // eax
  __int16 v17; // ax
  __int64 v18; // rax
  __m128i v19; // xmm0
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdx
  int v23; // edi
  unsigned int v24; // r12d
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r13
  void *v27; // rax
  unsigned int v28; // eax
  _BYTE *v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // r12
  unsigned int v32; // eax
  __int16 v33; // ax
  int v34; // eax
  _QWORD *v35; // rax
  unsigned __int64 *v36; // r13
  unsigned int v37; // eax
  const char *v38; // rdx
  char *v39; // rax
  bool v40; // zf
  const char *v41; // rcx
  _UNKNOWN **v42; // rdx
  const char *v43; // rsi
  unsigned __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rdx
  size_t v49; // rax
  int v50; // eax
  __int64 v51; // rdx
  unsigned __int64 v52; // rsi
  __int64 v53; // rcx
  __int64 i; // [rsp+0h] [rbp-1D8h]
  __int64 v55; // [rsp+8h] [rbp-1D0h]
  char *s; // [rsp+10h] [rbp-1C8h]
  _UNKNOWN **v57; // [rsp+18h] [rbp-1C0h]
  __int64 dest; // [rsp+20h] [rbp-1B8h] BYREF
  __int64 v59; // [rsp+28h] [rbp-1B0h] BYREF
  _BYTE v60[2]; // [rsp+30h] [rbp-1A8h] BYREF
  char v61[2]; // [rsp+32h] [rbp-1A6h] BYREF
  char v62[4]; // [rsp+34h] [rbp-1A4h] BYREF
  char v63[4]; // [rsp+38h] [rbp-1A0h] BYREF
  char v64[4]; // [rsp+3Ch] [rbp-19Ch] BYREF
  char v65[2]; // [rsp+40h] [rbp-198h] BYREF
  char v66[14]; // [rsp+42h] [rbp-196h] BYREF
  _BYTE buf[60]; // [rsp+50h] [rbp-188h] BYREF
  char src[4]; // [rsp+8Ch] [rbp-14Ch] BYREF
  _BYTE v69[2]; // [rsp+90h] [rbp-148h] BYREF
  __int16 v70; // [rsp+92h] [rbp-146h]
  _BYTE v71[4]; // [rsp+94h] [rbp-144h] BYREF
  char v72[4]; // [rsp+98h] [rbp-140h] BYREF
  char v73[4]; // [rsp+9Ch] [rbp-13Ch] BYREF
  char v74[4]; // [rsp+A0h] [rbp-138h] BYREF
  char v75[4]; // [rsp+A4h] [rbp-134h] BYREF
  _BYTE v76[4]; // [rsp+A8h] [rbp-130h] BYREF
  _BYTE v77[4]; // [rsp+ACh] [rbp-12Ch] BYREF
  char v78[2]; // [rsp+B0h] [rbp-128h] BYREF
  char v79[2]; // [rsp+B2h] [rbp-126h] BYREF
  char v80[20]; // [rsp+B4h] [rbp-124h] BYREF
  _BYTE v81[4]; // [rsp+C8h] [rbp-110h] BYREF
  _BYTE v82[182]; // [rsp+CCh] [rbp-10Ch] BYREF
  _BYTE v83[4]; // [rsp+182h] [rbp-56h] BYREF
  char v84; // [rsp+186h] [rbp-52h] BYREF
  char v85[8]; // [rsp+187h] [rbp-51h] BYREF
  char v86[9]; // [rsp+18Fh] [rbp-49h] BYREF
  unsigned __int64 v87; // [rsp+198h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 32);
  v87 = __readfsqword(0x28u);
  dest = 0;
  if ( v2 > 0x54 )
  {
    random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), buf);
    if ( random )
      return random;
    v7 = ((__int64)buf[0] << 8) | buf[1];
    if ( v7 == 23117 )
    {
      v8 = (void (__fastcall *)(void *, const void *, size_t))dwarf_memcpy_swap_bytes;
      v9 = 1;
    }
    else
    {
      if ( v7 != 19802 )
        goto LABEL_18;
      v8 = (void (__fastcall *)(void *, const void *, size_t))dwarf_memcpy_noswap_bytes;
      v9 = 2;
    }
    if ( *(_DWORD *)(a1 + 64) == v9 )
    {
      *(_QWORD *)(a1 + 72) = v8;
      dest = 0;
      v8(&dest, src, 4u);
      if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(dest + 4) )
        goto LABEL_20;
      random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v83);
      if ( random )
        return random;
      v59 = 0;
      v8(&v59, v83, 4u);
      if ( v59 == 17744 )
      {
        v10 = *(_QWORD *)(a1 + 32);
        v11 = dest + 24;
        *(_QWORD *)(a1 + 80) = dest + 4;
        if ( v10 < v11 )
          goto LABEL_20;
        random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v60);
        if ( random )
          return random;
        *(_QWORD *)(a1 + 136) = 0;
        v8((void *)(a1 + 136), v60, 2u);
        *(_QWORD *)(a1 + 144) = 0;
        v8((void *)(a1 + 144), v61, 2u);
        *(_QWORD *)(a1 + 152) = 0;
        v8((void *)(a1 + 152), v62, 4u);
        *(_QWORD *)(a1 + 160) = 0;
        v8((void *)(a1 + 160), v63, 4u);
        *(_QWORD *)(a1 + 168) = 0;
        v8((void *)(a1 + 168), v64, 4u);
        *(_QWORD *)(a1 + 176) = 0;
        v8((void *)(a1 + 176), v65, 2u);
        *(_QWORD *)(a1 + 184) = 0;
        v8((void *)(a1 + 184), v66, 2u);
        v12 = *(_BYTE *)(a1 + 56);
        *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 136);
        *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 184);
        v13 = *(_QWORD *)(a1 + 80);
        *(_QWORD *)(a1 + 88) = v13 + 20;
        if ( v12 == 32 )
        {
          v15 = *(_QWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 96) = 224;
          if ( v15 < v13 + 244 )
          {
            *a2 = 423;
            *(_QWORD *)(a1 + 96) = 224;
            return 1;
          }
          v32 = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v69);
          if ( v32 )
          {
            *(_QWORD *)(a1 + 96) = 224;
            return v32;
          }
          *(_QWORD *)(a1 + 192) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 72))(a1 + 192, v69, 2);
          v33 = v70;
          *(_QWORD *)(a1 + 256) = 0;
          *(_WORD *)(a1 + 200) = v33;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 72))(a1 + 256, v77, 4);
          *(_QWORD *)(a1 + 208) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 72))(a1 + 208, v71, 4);
          *(_QWORD *)(a1 + 336) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 72))(a1 + 336, v81, 4);
          *(_QWORD *)(a1 + 344) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 72))(a1 + 344, v82, 4);
          v18 = 224;
          *(_QWORD *)(a1 + 424) = 8;
        }
        else
        {
          if ( v12 != 64 )
          {
LABEL_17:
            *a2 = 415;
            return 1;
          }
          v14 = *(_QWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 96) = 240;
          if ( v14 < v13 + 260 )
          {
            *a2 = 423;
            *(_QWORD *)(a1 + 96) = 240;
            return 1;
          }
          v16 = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v69);
          if ( v16 )
          {
            *(_QWORD *)(a1 + 96) = 240;
            return v16;
          }
          *(_QWORD *)(a1 + 192) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 72))(a1 + 192, v69, 2);
          v17 = v70;
          *(_QWORD *)(a1 + 256) = 0;
          *(_WORD *)(a1 + 200) = v17;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 72))(a1 + 256, v76, 8);
          *(_QWORD *)(a1 + 208) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 72))(a1 + 208, v71, 4);
          *(_QWORD *)(a1 + 336) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 72))(a1 + 336, v81, 4);
          *(_QWORD *)(a1 + 344) = 0;
          (*(void (__fastcall **)(__int64, _BYTE *, __int64))(a1 + 72))(a1 + 344, v82, 4);
          v18 = 240;
          *(_QWORD *)(a1 + 424) = 8;
        }
        *(_QWORD *)(a1 + 96) = v18;
        v19 = _mm_loadu_si128((const __m128i *)(a1 + 88));
        v20 = *(_QWORD *)(a1 + 160);
        v21 = *(_QWORD *)(a1 + 32);
        *(_QWORD *)(a1 + 104) = v20;
        *(_QWORD *)(a1 + 120) = _mm_add_epi64(v19, _mm_srli_si128(v19, 8)).m128i_u64[0];
        if ( v20 >= v21 )
          goto LABEL_17;
        if ( v20 )
          *(_QWORD *)(a1 + 112) = 18LL * *(_QWORD *)(a1 + 168) + v20;
        v22 = *(_QWORD *)(a1 + 112);
        if ( v22 >= v21 )
        {
          *a2 = 415;
          *(_QWORD *)(a1 + 704) = 0;
          return 1;
        }
        if ( !v22 )
          goto LABEL_39;
        if ( v21 < v22 + 4 )
          goto LABEL_44;
        v23 = *(_DWORD *)(a1 + 16);
        *(_DWORD *)v86 = 0;
        v24 = _dwarf_object_read_random(v23, v86);
        if ( v24 )
          return v24;
        *(_QWORD *)(a1 + 704) = 0;
        (*(void (__fastcall **)(__int64, char *, __int64))(a1 + 72))(a1 + 704, v86, 4);
        v25 = *(_QWORD *)(a1 + 704);
        v26 = *(_QWORD *)(a1 + 32);
        if ( v25 >= v26 )
        {
          v34 = 427;
          goto LABEL_45;
        }
        if ( v26 < v25 + *(_QWORD *)(a1 + 112) )
        {
LABEL_44:
          v34 = 423;
        }
        else
        {
          v27 = calloc(1u, v25 + 1);
          *(_QWORD *)(a1 + 712) = v27;
          if ( v27 )
          {
            v28 = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v27);
            v29 = *(_BYTE **)(a1 + 712);
            v24 = v28;
            if ( !v28 )
            {
              v29[*(_QWORD *)(a1 + 704)] = 0;
LABEL_39:
              v30 = *(_QWORD *)(a1 + 144);
              v31 = *(_QWORD *)(a1 + 120);
              v55 = v30;
              *(_QWORD *)(a1 + 688) = v30 + 1;
              if ( *(_QWORD *)(a1 + 32) >= v31 + 40 * v30 )
              {
                if ( !v31 )
                {
                  *a2 = 427;
                  return 1;
                }
                v35 = calloc(v30 + 1, 0x70u);
                *(_QWORD *)(a1 + 696) = v35;
                if ( !v35 )
                {
                  *a2 = 62;
                  return 1;
                }
                v36 = v35 + 20;
                *v35 = strdup("");
                *(v36 - 19) = (unsigned __int64)strdup("");
                for ( i = 0; ; ++i )
                {
                  if ( v55 == i )
                    return random;
                  v37 = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), v69);
                  if ( v37 )
                    return v37;
                  _dwarf_safe_strcpy(&v84, 9, v69, 8);
                  *(v36 - 6) = (unsigned __int64)strdup(&v84);
                  v38 = &v84;
                  if ( v84 == 47 )
                  {
                    v49 = strlen(&v84);
                    _dwarf_safe_strcpy(v86, 9, v85, v49 - 1);
                    v50 = strtol(v86, nullptr, 10);
                    if ( v50 < 0 || (v51 = *(_QWORD *)(a1 + 712)) == 0 || (v52 = *(_QWORD *)(a1 + 704), v50 >= v52) )
                    {
LABEL_85:
                      *a2 = 53;
                      return 1;
                    }
                    v53 = v50;
                    while ( *(_BYTE *)(v51 + v53) )
                    {
                      if ( v52 == ++v53 )
                        goto LABEL_85;
                    }
                    v38 = (const char *)(v50 + v51);
                  }
                  v39 = strdup(v38);
                  v40 = *(v36 - 6) == 0;
                  *(v36 - 5) = (unsigned __int64)v39;
                  if ( v40 || !v39 )
                  {
                    *a2 = 62;
                    return 1;
                  }
                  *(v36 - 4) = v31;
                  *(v36 - 3) = 0;
                  (*(void (__fastcall **)(unsigned __int64 *, char *, __int64))(a1 + 72))(v36 - 3, v72, 4);
                  *(v36 - 2) = 0;
                  (*(void (__fastcall **)(unsigned __int64 *, char *, __int64))(a1 + 72))(v36 - 2, v73, 4);
                  *(v36 - 1) = 0;
                  (*(void (__fastcall **)(unsigned __int64 *, char *, __int64))(a1 + 72))(v36 - 1, v74, 4);
                  v41 = (const char *)*(v36 - 5);
                  if ( v41 )
                    break;
LABEL_64:
                  v44 = *(v36 - 3);
                  if ( !v44 )
                    goto LABEL_62;
                  *((_DWORD *)v36 + 14) = 0;
                  v45 = *(_QWORD *)(a1 + 32);
                  v46 = 100 * v45;
                  if ( 100 * v45 < v45 )
                    goto LABEL_75;
                  if ( v45 < 0x77359400 )
                    v45 = 2000000000;
                  if ( v45 < v44 || v46 < v44 && !*(_DWORD *)(a1 + 24) )
                  {
LABEL_75:
                    *a2 = 504;
                    return 1;
                  }
                  *v36 = 0;
                  (*(void (__fastcall **)(unsigned __int64 *, char *, __int64))(a1 + 72))(v36, v75, 4);
                  v47 = *(v36 - 1);
                  v48 = *(_QWORD *)(a1 + 32);
                  if ( v48 < v47 || v48 < *v36 || v48 < *v36 + v47 )
                  {
                    *a2 = 423;
                    return 1;
                  }
                  v36[1] = 0;
                  (*(void (__fastcall **)(unsigned __int64 *, _BYTE *, __int64))(a1 + 72))(v36 + 1, v76, 4);
                  v36[2] = 0;
                  (*(void (__fastcall **)(unsigned __int64 *, _BYTE *, __int64))(a1 + 72))(v36 + 2, v77, 4);
                  v36[3] = 0;
                  (*(void (__fastcall **)(unsigned __int64 *, char *, __int64))(a1 + 72))(v36 + 3, v78, 2);
                  v36[4] = 0;
                  (*(void (__fastcall **)(unsigned __int64 *, char *, __int64))(a1 + 72))(v36 + 4, v79, 2);
                  v36[5] = 0;
                  (*(void (__fastcall **)(unsigned __int64 *, char *, __int64))(a1 + 72))(v36 + 5, v80, 4);
LABEL_63:
                  v31 += 40LL;
                  v36 += 14;
                }
                v42 = &off_B75A0;
                v43 = ".text";
                while ( 1 )
                {
                  v57 = v42;
                  s = (char *)v41;
                  if ( !strcmp(v41, v43) )
                    break;
                  v41 = s;
                  v43 = (const char *)v57[1];
                  v42 = v57 + 1;
                  if ( !v43 )
                    goto LABEL_64;
                }
LABEL_62:
                *((_DWORD *)v36 + 14) = 1;
                goto LABEL_63;
              }
LABEL_20:
              *a2 = 423;
              return 1;
            }
            free(v29);
            *(_QWORD *)(a1 + 712) = 0;
            return v24;
          }
          v34 = 62;
        }
LABEL_45:
        *a2 = v34;
        return 1;
      }
    }
LABEL_18:
    *a2 = 412;
    return 1;
  }
  *a2 = 426;
  return 1;
}

