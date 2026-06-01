__int64 __fastcall dwarf_macho_load_dwarf_section_details64(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int *a4,
        __int64 a5,
        __int64 a6)
{
  void *v6; // rbx
  size_t v7; // rbp
  __int64 v8; // r12
  unsigned int v9; // edx
  unsigned __int64 v11; // r12
  char *v12; // rax
  char *v13; // r15
  char *v14; // r13
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r12
  size_t v17; // rax
  size_t v18; // rbx
  size_t v19; // rdx
  size_t v20; // rcx
  size_t v21; // r8
  unsigned int random; // eax
  size_t v23; // rax
  _QWORD *v24; // rax
  int v25; // eax
  unsigned __int64 v28; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v29; // [rsp+18h] [rbp-B0h]
  size_t size; // [rsp+28h] [rbp-A0h] BYREF
  _BYTE buf[16]; // [rsp+30h] [rbp-98h] BYREF
  char v32[16]; // [rsp+40h] [rbp-88h] BYREF
  char v33[8]; // [rsp+50h] [rbp-78h] BYREF
  char v34[8]; // [rsp+58h] [rbp-70h] BYREF
  char v35[4]; // [rsp+60h] [rbp-68h] BYREF
  char v36[4]; // [rsp+64h] [rbp-64h] BYREF
  char v37[4]; // [rsp+68h] [rbp-60h] BYREF
  char v38[4]; // [rsp+6Ch] [rbp-5Ch] BYREF
  char v39[24]; // [rsp+70h] [rbp-58h] BYREF
  unsigned __int64 v40; // [rsp+88h] [rbp-40h]

  v6 = *(void **)(a1 + 216);
  v7 = *(_QWORD *)(a2 + 112);
  v40 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a2 + 88);
  if ( !v6 )
  {
    v11 = v8 + 1;
    size = 0;
    if ( (unsigned int)_dwarf_uint64_mult(v11, 160, &size, a4, a5, a6) || *(_QWORD *)(a1 + 24) < size )
    {
      v25 = 488;
      v9 = 1;
    }
    else
    {
      v24 = calloc(1u, size);
      v9 = 0;
      if ( v24 )
      {
        *(_QWORD *)(a1 + 216) = v24;
        v14 = (char *)(v24 + 20);
        v15 = 1;
        *(_QWORD *)(a1 + 208) = v11;
        v24[18] = v7;
        v24[6] = "";
        goto LABEL_10;
      }
      v25 = 62;
    }
    *a4 = v25;
    return v9;
  }
  size = 0;
  if ( v8 )
  {
    v11 = *(_QWORD *)(a1 + 208) + v8;
    if ( (unsigned int)_dwarf_uint64_mult(v11, 160, &size, a4, a5, a6) || *(_QWORD *)(a1 + 24) < size )
      goto LABEL_7;
    v12 = (char *)calloc(1u, size);
    v13 = v12;
    if ( !v12 )
    {
      *a4 = 62;
      return 0;
    }
    v28 = *(_QWORD *)(a1 + 208);
    memcpy(v12, *(const void **)(a1 + 216), 160 * v28);
    *(_QWORD *)(a1 + 216) = v13;
    v14 = &v13[160 * v28];
    *(_QWORD *)(a1 + 208) = v11;
    free(v6);
    *((_QWORD *)v14 + 18) = v7;
    v15 = v28;
LABEL_10:
    if ( v15 >= v11 )
      return 0;
    v29 = v11;
    v16 = v15;
    while ( 1 )
    {
      v17 = *(_QWORD *)(a1 + 24);
      v18 = v7;
      v19 = *(_QWORD *)(a1 + 48);
      v7 += 80LL;
      if ( v18 >= v17 || v17 < v7 )
        break;
      v20 = v18;
      if ( v19 >= v18 )
        v20 = *(_QWORD *)(a1 + 48);
      if ( v19 + v18 < v20 )
        break;
      v21 = v17 + v19;
      if ( v17 < v19 )
        v17 = *(_QWORD *)(a1 + 48);
      size = v21;
      if ( v21 < v17 )
        break;
      random = _dwarf_object_read_random(*(_DWORD *)(a1 + 16), buf);
      if ( random )
        return random;
      _dwarf_safe_strcpy(v14, 24, buf, 16);
      if ( (unsigned int)_dwarf_not_ascii(v14) )
        break;
      _dwarf_safe_strcpy(v14 + 24, 24, v32, 16);
      if ( !(unsigned int)_dwarf_is_known_segname(v14 + 24) )
        break;
      *((_QWORD *)v14 + 7) = 0;
      (*(void (__fastcall **)(char *, char *, __int64))(a1 + 80))(v14 + 56, v33, 8);
      *((_QWORD *)v14 + 8) = 0;
      (*(void (__fastcall **)(char *, char *, __int64))(a1 + 80))(v14 + 64, v34, 8);
      *((_QWORD *)v14 + 9) = 0;
      (*(void (__fastcall **)(char *, char *, __int64))(a1 + 80))(v14 + 72, v35, 4);
      *((_QWORD *)v14 + 10) = 0;
      (*(void (__fastcall **)(char *, char *, __int64))(a1 + 80))(v14 + 80, v36, 4);
      *((_QWORD *)v14 + 11) = 0;
      (*(void (__fastcall **)(char *, char *, __int64))(a1 + 80))(v14 + 88, v37, 4);
      *((_QWORD *)v14 + 12) = 0;
      (*(void (__fastcall **)(char *, char *, __int64))(a1 + 80))(v14 + 96, v38, 4);
      *((_QWORD *)v14 + 13) = 0;
      (*(void (__fastcall **)(char *, char *, __int64))(a1 + 80))(v14 + 104, v39, 4);
      if ( (unsigned int)_dwarf_uint64_add(*((_QWORD *)v14 + 9), *((_QWORD *)v14 + 8), &size) == 1 )
        break;
      if ( !strcmp(v14 + 24, "__DWARF") )
      {
        v23 = *(_QWORD *)(a1 + 24);
        if ( v23 < *((_QWORD *)v14 + 9) || v23 < *((_QWORD *)v14 + 8) || v23 < size )
          break;
      }
      ++v16;
      *((_QWORD *)v14 + 16) = 0;
      *((_QWORD *)v14 + 18) = v18;
      v14 += 160;
      *((_QWORD *)v14 - 3) = a3;
      *((_OWORD *)v14 - 3) = 0;
      if ( v16 == v29 )
        return 0;
    }
LABEL_7:
    v9 = 1;
    *a4 = 488;
    return v9;
  }
  return 0;
}

