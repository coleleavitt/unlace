__int64 __fastcall sub_407A0(size_t *a1, int a2, __int64 a3)
{
  size_t *v3; // rcx
  int v4; // r11d
  char *v5; // r9
  size_t v6; // r15
  const char *v7; // r12
  size_t v8; // rsi
  unsigned __int64 v9; // r13
  int v10; // r10d
  size_t *v11; // r11
  unsigned __int8 v12; // dl
  const char *v13; // rax
  __int64 *v16; // r8
  _BYTE *v17; // rbx
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r8
  const char *v21; // r14
  int v22; // eax
  const char *v23; // rbp
  int v24; // eax
  unsigned int v25; // eax
  char *v26; // rax
  __int64 v27; // rdx
  const char *v28; // rax
  _BYTE *v29; // [rsp+8h] [rbp-A0h]
  size_t *v31; // [rsp+18h] [rbp-90h]
  char *v32; // [rsp+20h] [rbp-88h]
  const char *v33; // [rsp+30h] [rbp-78h]
  __int64 *v34; // [rsp+38h] [rbp-70h]
  unsigned __int8 v35; // [rsp+43h] [rbp-65h]
  int v36; // [rsp+44h] [rbp-64h]
  __int64 v37; // [rsp+48h] [rbp-60h]
  __int64 v38; // [rsp+48h] [rbp-60h]
  __int64 v39; // [rsp+58h] [rbp-50h] BYREF
  _QWORD v40[9]; // [rsp+60h] [rbp-48h] BYREF

  v3 = a1;
  v4 = a2;
  v5 = nullptr;
  v40[1] = __readfsqword(0x28u);
  v6 = a1[21];
  if ( a2 )
  {
    v26 = (char *)calloc(a1[11], 0x18u);
    v3 = a1;
    v4 = a2;
    v5 = v26;
    if ( !v26 )
    {
      _dwarf_error(v6, a3, 62);
      return 1;
    }
    a1[13] = (size_t)v26;
  }
  v7 = (const char *)v3[15];
  v8 = 0;
  v9 = *(_QWORD *)(v6 + 2216) + *(_QWORD *)(v6 + 2224);
  if ( (unsigned __int64)v7 >= v9 )
  {
LABEL_23:
    _dwarf_error(v6, a3, 325);
    return 1;
  }
  v10 = v4;
  v11 = v3;
  while ( 1 )
  {
    v12 = *v7;
    ++v8;
    v13 = v7 + 1;
    if ( !*v7 )
      break;
    if ( (unsigned __int8)(v12 - 1) > 0xBu )
    {
      _dwarf_error(v6, a3, 324);
      return 1;
    }
    v16 = &dw5formsarray[2 * v12];
    v17 = (_BYTE *)v16[1];
    if ( *((_BYTE *)v16 + 1) )
    {
      v32 = v5;
      v18 = 0;
      v19 = (__int64)&v17[*((unsigned __int8 *)v16 + 1)];
      v35 = v12;
      v29 = (_BYTE *)v19;
      v33 = v13;
      v31 = v11;
      v36 = v10;
      v34 = &dw5formsarray[2 * v12];
      v20 = 0;
      v21 = v13;
      while ( 1 )
      {
        if ( (unsigned __int64)v21 >= v9 )
          goto LABEL_45;
        switch ( *v17 )
        {
          case 3:
            v40[0] = 0;
            if ( v9 < (unsigned __int64)(v21 + 2) )
              goto LABEL_51;
            (*(void (__fastcall **)(_QWORD *, const char *, __int64, __int64, __int64))(v6 + 8296))(
              v40,
              v21,
              2,
              v19,
              v20);
            v20 = v40[0] + 2LL;
            v18 += v40[0] + 2LL;
            v21 += v40[0] + 2;
            goto LABEL_16;
          case 4:
            v40[0] = 0;
            if ( v9 < (unsigned __int64)(v21 + 4) )
            {
LABEL_51:
              _dwarf_error_string(v6, a3, 331, "DW_DLE_READ_LITTLEENDIAN_ERROR Read would end past the end of section");
              return 1;
            }
            (*(void (__fastcall **)(_QWORD *, const char *, __int64, __int64, __int64))(v6 + 8296))(
              v40,
              v21,
              4,
              v19,
              v20);
            v20 = v40[0] + 4LL;
            v18 += v40[0] + 4LL;
            v21 += v40[0] + 4;
            goto LABEL_16;
          case 5:
            v18 += 2;
            v21 += 2;
            v20 = 2;
            goto LABEL_16;
          case 6:
            v18 += 4;
            v21 += 4;
            v20 = 4;
            goto LABEL_16;
          case 7:
          case 0x1E:
            v18 += 8;
            v21 += 8;
            v20 = 8;
            goto LABEL_16;
          case 8:
            v25 = _dwarf_check_string_valid(v6, v21, v21, v9, 366, a3);
            if ( v25 )
              return v25;
            v20 = strlen(v21) + 1;
            v18 += v20;
            v21 += v20;
LABEL_16:
            if ( v29 == ++v17 )
            {
              v5 = v32;
              v12 = v35;
              v23 = v21;
              v13 = v33;
              v16 = v34;
              v11 = v31;
              v10 = v36;
              goto LABEL_18;
            }
            break;
          case 9:
            v39 = 0;
            v40[0] = 0;
            if ( (unsigned int)dwarf_decode_leb128(v21, &v39, v40, v9) == 1 )
              goto LABEL_49;
            v21 += v39;
            v20 = v40[0] + v39;
            v18 += v40[0] + v39;
            goto LABEL_16;
          case 0xA:
            v20 = *(unsigned __int8 *)v21;
            v18 += v20 + 1;
            v21 += v20 + 1;
            goto LABEL_16;
          case 0xB:
          case 0xC:
            ++v18;
            ++v21;
            v20 = 1;
            goto LABEL_16;
          case 0xD:
            v38 = v20;
            v39 = 0;
            v40[0] = 0;
            v24 = dwarf_decode_leb128(v21, &v39, v40, v9);
            v20 = v38;
            if ( v24 == 1 )
              goto LABEL_49;
            v21 += v39;
            v18 += v38;
            goto LABEL_16;
          case 0xE:
            v20 = *((unsigned __int8 *)v31 + 64);
            v21 += v20;
            v18 += v20;
            goto LABEL_16;
          case 0xF:
          case 0x1A:
            v37 = v20;
            v39 = 0;
            v40[0] = 0;
            v22 = dwarf_decode_leb128(v21, &v39, v40, v9);
            v20 = v37;
            if ( v22 == 1 )
            {
LABEL_49:
              _dwarf_error_string(v6, a3, 329, "DW_DLE_LEB_IMPROPER: decode uleb w/len runs past allowed area.d");
              return 1;
            }
            v21 += v39;
            v18 += v39;
            goto LABEL_16;
          case 0x17:
            v20 = *((unsigned __int8 *)v31 + 64);
            v18 += v20;
            v21 += v20;
            goto LABEL_16;
          default:
            _dwarf_error(v6, a3, 251);
            return 1;
        }
      }
    }
    v23 = v7 + 1;
    v18 = 0;
LABEL_18:
    if ( v9 < (unsigned __int64)v23 )
    {
LABEL_45:
      _dwarf_error(v6, a3, 318);
      return 1;
    }
    v7 = &v13[v18];
    if ( v10 )
    {
      *v5 = v12;
      *((_QWORD *)v5 + 1) = v16;
      *((_QWORD *)v5 + 2) = v13;
      if ( v9 < (unsigned __int64)v7 )
        goto LABEL_23;
      v5 += 24;
    }
    else if ( v9 < (unsigned __int64)v7 )
    {
      goto LABEL_23;
    }
    if ( (unsigned __int64)v7 >= v9 )
      goto LABEL_23;
  }
  v27 = *((unsigned __int16 *)v11 + 20);
  v28 = &v13[-v11[15]];
  v11[11] = v8;
  v11[12] = (size_t)v28;
  v11[4] = (size_t)&v28[v27];
  if ( v10 )
  {
    *v5 = 0;
    *(_OWORD *)(v5 + 8) = 0;
  }
  return 0;
}

