__int64 __fastcall dwarf_load_macho_commands(__int64 a1, char *a2)
{
  __int64 v2; // r15
  size_t v3; // rdi
  unsigned __int64 v4; // rdx
  char *v5; // r9
  unsigned __int64 v6; // r14
  int v7; // eax
  unsigned int v8; // edx
  __int64 *v10; // rax
  __int64 *v11; // rbx
  unsigned __int64 v12; // rbp
  __int64 v13; // r13
  unsigned __int64 v14; // r15
  __int64 v15; // r14
  unsigned int i; // eax
  bool v17; // al
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // eax
  char *v23; // rax
  char *v24; // r12
  _QWORD *v25; // rbx
  unsigned __int64 v26; // rbp
  int random; // edx
  char *v28; // rdx
  int segment_command_content64; // eax
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r13
  int v33; // ecx
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rdx
  int dwarf_section_details64; // edx
  unsigned __int64 v37; // rax
  __int64 v38; // r14
  const char *v39; // r13
  __int64 v40; // r8
  __int64 v41; // r9
  char v42; // al
  void *v43; // r13
  __int64 v44; // rax
  char *v45; // rcx
  char *v46; // rax
  char *v47; // rbx
  unsigned __int64 v48; // rcx
  char *v49; // r13
  char *v50; // r14
  unsigned __int64 v51; // rdx
  char *v52; // rbx
  size_t v53; // rax
  char *v54; // rcx
  size_t v55; // r8
  size_t v56; // rax
  int v57; // eax
  int is_known_segname; // eax
  __int64 v59; // r8
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  char *v65; // rdi
  _QWORD *v66; // rax
  unsigned int v67; // [rsp+8h] [rbp-D0h]
  char *v68; // [rsp+8h] [rbp-D0h]
  int v69; // [rsp+8h] [rbp-D0h]
  int v70; // [rsp+8h] [rbp-D0h]
  char *v71; // [rsp+8h] [rbp-D0h]
  int v72; // [rsp+10h] [rbp-C8h]
  char *v73; // [rsp+10h] [rbp-C8h]
  char *v74; // [rsp+10h] [rbp-C8h]
  char *s1; // [rsp+18h] [rbp-C0h]
  unsigned int v76; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v77; // [rsp+20h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+28h] [rbp-B0h]
  unsigned __int64 v79; // [rsp+38h] [rbp-A0h]
  __int64 v80; // [rsp+38h] [rbp-A0h]
  size_t size; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v82[4]; // [rsp+48h] [rbp-90h] BYREF
  char v83[4]; // [rsp+4Ch] [rbp-8Ch] BYREF
  _BYTE buf[4]; // [rsp+50h] [rbp-88h] BYREF
  char v85[4]; // [rsp+54h] [rbp-84h] BYREF
  char v86[8]; // [rsp+58h] [rbp-80h] BYREF
  char v87[8]; // [rsp+60h] [rbp-78h] BYREF
  char v88[4]; // [rsp+68h] [rbp-70h] BYREF
  char v89[4]; // [rsp+6Ch] [rbp-6Ch] BYREF
  _BYTE v90[4]; // [rsp+70h] [rbp-68h] BYREF
  _BYTE v91[4]; // [rsp+74h] [rbp-64h] BYREF
  _BYTE v92[4]; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v93[4]; // [rsp+7Ch] [rbp-5Ch] BYREF
  _BYTE v94[4]; // [rsp+80h] [rbp-58h] BYREF
  _BYTE v95[4]; // [rsp+84h] [rbp-54h] BYREF
  char v96[16]; // [rsp+88h] [rbp-50h] BYREF
  unsigned __int64 v97; // [rsp+98h] [rbp-40h]

  v2 = a1;
  v3 = *(unsigned int *)(a1 + 152);
  v4 = *(_QWORD *)(v2 + 24);
  v97 = __readfsqword(0x28u);
  v5 = a2;
  if ( v3 >= v4 )
  {
    v7 = 416;
LABEL_3:
    *(_DWORD *)v5 = v7;
    return 1;
  }
  v6 = *(_QWORD *)(v2 + 160);
  v7 = 416;
  if ( v6 + 8 * v3 >= v4 )
    goto LABEL_3;
  v10 = (__int64 *)calloc(v3, 0x18u);
  v5 = a2;
  *(_QWORD *)(v2 + 168) = v10;
  v11 = v10;
  if ( !v10 )
  {
    v7 = 62;
    goto LABEL_3;
  }
  if ( !*(_QWORD *)(v2 + 120) )
  {
    *(_OWORD *)(v2 + 184) = 0;
    goto LABEL_30;
  }
  v12 = 0;
  v13 = v2;
  v14 = v6;
  v15 = 0;
  v76 = 0;
  for ( i = _dwarf_object_read_random(*(_DWORD *)(v13 + 16), v82);
        ;
        i = _dwarf_object_read_random(*(_DWORD *)(v13 + 16), v82) )
  {
    if ( i )
    {
      v67 = i;
      free(*(void **)(v13 + 168));
      v8 = v67;
      *(_QWORD *)(v13 + 168) = 0;
      return v8;
    }
    *v11 = 0;
    (*(void (__fastcall **)(__int64 *, _BYTE *, __int64))(v13 + 80))(v11, v82, 4);
    v11[1] = 0;
    (*(void (__fastcall **)(__int64 *, char *, __int64))(v13 + 80))(v11 + 1, v83, 4);
    v20 = v11[1];
    v21 = *(_QWORD *)(v13 + 24);
    v11[2] = v14;
    v14 += v20;
    v15 += v20;
    if ( v20 < v14 )
      v20 = v14;
    if ( v21 < v20 )
    {
      free(*(void **)(v13 + 168));
      v5 = a2;
      v7 = 417;
      *(_QWORD *)(v13 + 168) = 0;
      goto LABEL_3;
    }
    v18 = *v11;
    v17 = *v11 == 1;
    LOBYTE(v18) = *v11 == 25;
    ++v12;
    v11 += 3;
    v76 += (unsigned __int8)(v18 | v17);
    if ( v12 >= *(_QWORD *)(v13 + 120) )
      break;
  }
  *(_QWORD *)(v13 + 192) = v15;
  v2 = v13;
  size = 0;
  v5 = a2;
  *(_QWORD *)(v13 + 184) = v76;
  if ( !v76 )
    goto LABEL_30;
  v22 = _dwarf_uint64_mult(v76, 120, &size, v18, v19, a2);
  v5 = a2;
  v72 = v22;
  if ( v22 == 1 )
  {
    v57 = 487;
LABEL_79:
    *(_DWORD *)v5 = v57;
    dwarf_section_details64 = 1;
    goto LABEL_38;
  }
  v23 = (char *)calloc(1u, size);
  v5 = a2;
  *(_QWORD *)(v13 + 200) = v23;
  v24 = v23;
  if ( !v23 )
  {
    v57 = 62;
    goto LABEL_79;
  }
  if ( *(_QWORD *)(v13 + 128) > 0x7530u )
  {
    v57 = 507;
    goto LABEL_79;
  }
  if ( *(_DWORD *)(v13 + 152) )
  {
    v25 = *(_QWORD **)(v13 + 168);
    v26 = 0;
    random = v72;
    if ( (unsigned int)*v25 == 1 )
      goto LABEL_33;
    if ( (unsigned int)*v25 == 25 )
    {
LABEL_28:
      v28 = v24;
      v68 = v5;
      v24 += 120;
      segment_command_content64 = _dwarf_load_segment_command_content64(v2, v25, v28, v26, v5);
      v5 = v68;
      random = segment_command_content64;
    }
    if ( !random )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          ++v26;
          v25 += 3;
          if ( v26 >= *(unsigned int *)(v2 + 152) )
            goto LABEL_30;
          if ( (unsigned int)*v25 == 1 )
            break;
          if ( (unsigned int)*v25 == 25 )
            goto LABEL_28;
        }
LABEL_33:
        v31 = v25[1];
        v32 = v25[2];
        v33 = 416;
        v34 = *(_QWORD *)(v2 + 24);
        v35 = v32;
        if ( v31 >= v32 )
          v35 = v25[1];
        if ( v34 < v35 || v34 < v32 + v31 )
          goto LABEL_36;
        v74 = v5;
        random = _dwarf_object_read_random(*(_DWORD *)(v2 + 16), buf);
        if ( random )
          goto LABEL_37;
        *(_QWORD *)v24 = 0;
        (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v24, buf, 4);
        *((_QWORD *)v24 + 1) = 0;
        (*(void (__fastcall **)(char *, char *, __int64))(v2 + 80))(v24 + 8, v85, 4);
        _dwarf_safe_strcpy(v24 + 16, 24, v86, 16);
        is_known_segname = _dwarf_is_known_segname(v24 + 16);
        v5 = v74;
        if ( !is_known_segname )
          break;
        *((_QWORD *)v24 + 5) = 0;
        (*(void (__fastcall **)(char *, char *, __int64))(v2 + 80))(v24 + 40, v88, 4);
        *((_QWORD *)v24 + 6) = 0;
        (*(void (__fastcall **)(char *, char *, __int64))(v2 + 80))(v24 + 48, v89, 4);
        *((_QWORD *)v24 + 7) = 0;
        (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v24 + 56, v90, 4);
        *((_QWORD *)v24 + 8) = 0;
        (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v24 + 64, v91, 4);
        v60 = *((_QWORD *)v24 + 7);
        v61 = *(_QWORD *)(v2 + 24);
        v5 = v74;
        if ( v61 < v60 )
          break;
        v62 = *((_QWORD *)v24 + 8);
        if ( v61 < v62 )
          break;
        if ( v34 < v62 + v60 )
          break;
        *((_QWORD *)v24 + 9) = 0;
        (*(void (__fastcall **)(char *, _BYTE *, __int64, unsigned __int64, __int64, char *))(v2 + 80))(
          v24 + 72,
          v92,
          4,
          v61,
          v59,
          v74);
        *((_QWORD *)v24 + 10) = 0;
        (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v24 + 80, v93, 4);
        *((_QWORD *)v24 + 11) = 0;
        (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v24 + 88, v94, 4);
        v5 = v74;
        if ( *((_QWORD *)v24 + 11) >= *(_QWORD *)(v2 + 24) )
          break;
        v65 = v24 + 96;
        *((_QWORD *)v24 + 12) = 0;
        v24 += 120;
        (*(void (__fastcall **)(char *, _BYTE *, __int64, __int64, __int64, char *))(v2 + 80))(
          v65,
          v95,
          4,
          v63,
          v64,
          v74);
        *((_QWORD *)v24 - 2) = v26;
        v5 = v74;
        *((_QWORD *)v24 - 1) = v32 + 56;
      }
      v33 = 487;
LABEL_36:
      *(_DWORD *)v5 = v33;
      random = 1;
    }
LABEL_37:
    v69 = random;
    free(*(void **)(v2 + 200));
    dwarf_section_details64 = v69;
    *(_QWORD *)(v2 + 200) = 0;
    goto LABEL_38;
  }
LABEL_30:
  v30 = *(_QWORD *)(v2 + 112);
  if ( v30 != 10 && v30 != 1 )
    return 0;
  v37 = *(_QWORD *)(v2 + 184);
  if ( v37 <= 0x7530 )
  {
    if ( !v37 )
      return 0;
    v73 = v5;
    v38 = 0;
    v71 = *(char **)(v2 + 200);
    while ( 2 )
    {
      v39 = v71 + 16;
      if ( !strcmp(v71 + 16, "__PAGEZERO") || !strcmp(v39, "__LINKEDIT") || !strcmp(v39, "__DATA") )
      {
LABEL_50:
        v71 += 120;
        if ( (unsigned __int64)++v38 >= *(_QWORD *)(v2 + 184) )
          return 0;
        continue;
      }
      break;
    }
    v42 = *(_BYTE *)(v2 + 56);
    if ( v42 != 32 )
    {
      if ( v42 != 64 )
      {
        *(_DWORD *)v73 = 415;
        goto LABEL_48;
      }
      dwarf_section_details64 = _dwarf_macho_load_dwarf_section_details64(v2, v71, v38, v73);
      if ( dwarf_section_details64 )
        goto LABEL_38;
      goto LABEL_50;
    }
    v43 = *(void **)(v2 + 216);
    v44 = *((_QWORD *)v71 + 11);
    v45 = *((char **)v71 + 14);
    s1 = v45;
    if ( v43 )
    {
      size = 0;
      if ( !v44 )
        goto LABEL_50;
      v78 = *(_QWORD *)(v2 + 208) + v44;
      if ( (unsigned int)_dwarf_uint64_mult(v78, 160, &size, v45, v40, v41) || *(_QWORD *)(v2 + 24) < size )
        goto LABEL_90;
      v46 = (char *)calloc(1u, size);
      v47 = v46;
      if ( v46 )
      {
        v79 = *(_QWORD *)(v2 + 208);
        memcpy(v46, *(const void **)(v2 + 216), 160 * v79);
        *(_QWORD *)(v2 + 216) = v47;
        *(_QWORD *)(v2 + 208) = v78;
        free(v43);
        v48 = v79;
        v49 = &v47[160 * v79];
        *((_QWORD *)v49 + 18) = s1;
        goto LABEL_58;
      }
    }
    else
    {
      size = 0;
      v78 = v44 + 1;
      if ( (unsigned int)_dwarf_uint64_mult(v44 + 1, 160, &size, v45, v40, v41) || *(_QWORD *)(v2 + 24) < size )
      {
LABEL_90:
        *(_DWORD *)v73 = 488;
        goto LABEL_48;
      }
      v66 = calloc(1u, size);
      if ( v66 )
      {
        *(_QWORD *)(v2 + 216) = v66;
        v48 = 1;
        v49 = (char *)(v66 + 20);
        *(_QWORD *)(v2 + 208) = v78;
        v66[18] = s1;
        v66[6] = "";
LABEL_58:
        if ( v48 < v78 )
        {
          v77 = v48;
          v80 = v38;
          v50 = s1;
          while ( 1 )
          {
            v51 = *(_QWORD *)(v2 + 24);
            v52 = v50;
            v53 = *(_QWORD *)(v2 + 48);
            v50 += 68;
            if ( (unsigned __int64)v52 >= v51 || v51 < (unsigned __int64)v50 )
              break;
            v54 = v52;
            if ( v53 >= (unsigned __int64)v52 )
              v54 = *(char **)(v2 + 48);
            if ( &v52[v53] < v54 )
              break;
            v55 = v53 + v51;
            if ( v53 < v51 )
              v53 = *(_QWORD *)(v2 + 24);
            size = v55;
            if ( v55 < v53 )
              break;
            dwarf_section_details64 = _dwarf_object_read_random(*(_DWORD *)(v2 + 16), buf);
            if ( dwarf_section_details64 )
              goto LABEL_38;
            _dwarf_safe_strcpy(v49, 24, buf, 16);
            if ( (unsigned int)_dwarf_not_ascii(v49) )
              break;
            _dwarf_safe_strcpy(v49 + 24, 24, v87, 16);
            if ( !(unsigned int)_dwarf_is_known_segname(v49 + 24) )
              break;
            *((_QWORD *)v49 + 7) = 0;
            (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v49 + 56, v90, 4);
            *((_QWORD *)v49 + 8) = 0;
            (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v49 + 64, v91, 4);
            *((_QWORD *)v49 + 9) = 0;
            (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v49 + 72, v92, 4);
            *((_QWORD *)v49 + 10) = 0;
            (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v49 + 80, v93, 4);
            *((_QWORD *)v49 + 11) = 0;
            (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v49 + 88, v94, 4);
            *((_QWORD *)v49 + 12) = 0;
            (*(void (__fastcall **)(char *, _BYTE *, __int64))(v2 + 80))(v49 + 96, v95, 4);
            *((_QWORD *)v49 + 13) = 0;
            (*(void (__fastcall **)(char *, char *, __int64))(v2 + 80))(v49 + 104, v96, 4);
            if ( (unsigned int)_dwarf_uint64_add(*((_QWORD *)v49 + 9), *((_QWORD *)v49 + 8), &size) == 1 )
              break;
            if ( !strcmp(v49 + 24, "__DWARF") )
            {
              v56 = *(_QWORD *)(v2 + 24);
              if ( v56 < *((_QWORD *)v49 + 9) || v56 < *((_QWORD *)v49 + 8) || v56 < size )
                break;
            }
            ++v77;
            v49 += 160;
            *((_OWORD *)v49 - 3) = 0;
            *((_QWORD *)v49 - 3) = v80;
            *((_QWORD *)v49 - 4) = 0;
            *((_QWORD *)v49 - 2) = v52;
            if ( v77 == v78 )
            {
              v38 = v80;
              goto LABEL_50;
            }
          }
          dwarf_section_details64 = 1;
          *(_DWORD *)v73 = 488;
          goto LABEL_38;
        }
        goto LABEL_50;
      }
    }
    *(_DWORD *)v73 = 62;
    goto LABEL_50;
  }
  *(_DWORD *)v5 = 488;
LABEL_48:
  dwarf_section_details64 = 1;
LABEL_38:
  v70 = dwarf_section_details64;
  free(*(void **)(v2 + 168));
  v8 = v70;
  *(_QWORD *)(v2 + 168) = 0;
  return v8;
}

