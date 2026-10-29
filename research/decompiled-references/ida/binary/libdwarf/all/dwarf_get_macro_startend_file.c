__int64 __fastcall dwarf_get_macro_startend_file(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        const char **a5,
        __int64 a6)
{
  __int64 v7; // r14
  __int64 result; // rax
  unsigned __int8 *v11; // rcx
  int v12; // edx
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // r9
  __int64 v16; // rdi
  int v17; // eax
  const char **v18; // r8
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  const char *v22; // rbp
  _BYTE *v23; // rax
  int is_full_path; // eax
  const char *v25; // r12
  size_t v26; // r13
  size_t v27; // rax
  char *v28; // rax
  char *v29; // rdx
  char i; // cl
  char *v31; // rax
  char *j; // rdx
  __int64 v33; // [rsp+0h] [rbp-78h]
  const char **v34; // [rsp+0h] [rbp-78h]
  __int64 v36; // [rsp+10h] [rbp-68h]
  __int64 v38; // [rsp+28h] [rbp-50h] BYREF
  _QWORD v39[9]; // [rsp+30h] [rbp-48h] BYREF

  v39[1] = __readfsqword(0x28u);
  if ( !a1 )
  {
    v7 = 0;
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a1 + 168);
  if ( *(_QWORD *)a1 != 2778 )
  {
LABEL_3:
    _dwarf_error_string(v7, a6, 322, "DW_DLE_BAD_MACRO_HEADER_POINTER  NULL header or corrupt header");
    return 1;
  }
  if ( a2 >= *(_QWORD *)(a1 + 88) )
  {
    _dwarf_error(*(_QWORD *)(a1 + 168), a6, 323);
    return 1;
  }
  v11 = (unsigned __int8 *)(*(_QWORD *)(a1 + 104) + 24 * a2);
  result = 0xFFFFFFFFLL;
  v12 = *v11;
  if ( (unsigned int)(v12 - 3) <= 1 )
  {
    if ( v12 != 3 )
      return 0;
    v13 = *(_QWORD *)(a1 + 112) + *(_QWORD *)(a1 + 32);
    v33 = *((_QWORD *)v11 + 2);
    v38 = 0;
    v39[0] = 0;
    v14 = dwarf_decode_leb128(v33, &v38, v39, v13);
    v15 = a6;
    if ( v14 == 1
      || (v16 = v38 + v33,
          v34 = a5,
          v36 = v39[0],
          v38 = 0,
          v39[0] = 0,
          v17 = dwarf_decode_leb128(v16, &v38, v39, v13),
          v18 = v34,
          v15 = a6,
          v17 == 1) )
    {
      _dwarf_error_string(v7, v15, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
      return 1;
    }
    v19 = v39[0];
    *a3 = v36;
    *a4 = v19;
    if ( *(_WORD *)(a1 + 8) != 5 )
    {
      if ( v19 >= 0 )
      {
        v20 = *(_QWORD *)(a1 + 136);
        if ( v20 + 1 < v19 )
        {
          *v34 = "<source-file-index-high-no-name-available>";
          return 0;
        }
        v21 = v19 - 1;
        if ( v20 >= v19 - 1 )
        {
          if ( !v19 )
          {
LABEL_28:
            v22 = *(const char **)(a1 + 160);
            if ( v22 )
            {
LABEL_29:
              *v18 = v22;
              return 0;
            }
            v23 = *(_BYTE **)(a1 + 144);
            v22 = *(const char **)(a1 + 152);
            if ( !v23 || !*v23 )
              goto LABEL_46;
            if ( !v22 || !*v22 )
              goto LABEL_47;
            is_full_path = _dwarf_file_name_is_full_path(*(_QWORD *)(a1 + 152));
            v22 = *(const char **)(a1 + 152);
            v18 = v34;
            if ( !is_full_path )
            {
              v25 = *(const char **)(a1 + 144);
              v26 = strlen(v25);
              v27 = strlen(v22);
              v28 = (char *)malloc(v26 + v27 + 2);
              v18 = v34;
              v29 = v28;
              if ( v28 )
              {
                *v28 = 0;
                for ( i = *v25; *v25; i = *v25 )
                {
                  ++v25;
                  *v28++ = i;
                }
                *v28 = 0;
                v31 = strcat(v29, "/");
                v18 = v34;
                for ( j = v31; *v31; ++v31 )
                  ;
                while ( *v22 )
                  *v31++ = *v22++;
                *v31 = 0;
                v22 = j;
                *(_QWORD *)(a1 + 160) = j;
                goto LABEL_29;
              }
              *(_QWORD *)(a1 + 160) = 0;
            }
            else
            {
LABEL_46:
              if ( v22 )
                goto LABEL_29;
            }
LABEL_47:
            *v18 = "<no-source-file-name-available>";
            return 0;
          }
        }
        else
        {
          *v34 = "<adjusted-source-file-index-high-no-name-available>";
          v20 = *(_QWORD *)(a1 + 136);
        }
        if ( v21 < v20 )
        {
          *v34 = *(const char **)(*(_QWORD *)(a1 + 128) + 8 * v21);
          return 0;
        }
        goto LABEL_28;
      }
LABEL_26:
      *v34 = "<source-file-index-low-no-name-available>";
      return 0;
    }
    if ( v19 < 0 )
      goto LABEL_26;
    if ( *(_QWORD *)(a1 + 136) <= v19 )
      *v34 = "<src-index-high-no-source-file-name-available>";
    else
      *v34 = *(const char **)(*(_QWORD *)(a1 + 128) + 8 * v19);
    return 0;
  }
  return result;
}

