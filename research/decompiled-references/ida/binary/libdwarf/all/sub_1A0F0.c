__int64 __fastcall sub_1A0F0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        _WORD *a5,
        unsigned __int64 *a6,
        __int64 a7)
{
  unsigned __int64 *v7; // r13
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  _WORD *v14; // r15
  __int64 v15; // rdx
  __int64 v16; // r8
  __int16 v17; // r13
  __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // r15
  unsigned __int64 v22; // rdi
  _WORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int16 v26; // r13
  __int64 v27; // rdi
  int v28; // eax
  unsigned __int64 v29; // rdx
  __int64 v30; // [rsp+0h] [rbp-98h]
  __int64 v31; // [rsp+0h] [rbp-98h]
  __int64 v34; // [rsp+10h] [rbp-88h]
  __int64 v35; // [rsp+10h] [rbp-88h]
  unsigned __int64 v36; // [rsp+18h] [rbp-80h]
  unsigned __int64 v37; // [rsp+18h] [rbp-80h]
  bool v38; // [rsp+27h] [rbp-71h]
  bool v39; // [rsp+27h] [rbp-71h]
  __int64 v40; // [rsp+28h] [rbp-70h]
  __int64 v41; // [rsp+30h] [rbp-68h]
  __int64 v44; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v45[9]; // [rsp+50h] [rbp-48h] BYREF

  v7 = a6;
  v9 = a2 + a3;
  v10 = *a6;
  v45[1] = __readfsqword(0x28u);
  v11 = a7;
  if ( !a5 )
  {
    if ( v10 )
      goto LABEL_34;
    if ( a4 )
    {
      if ( a2 < v9 )
        goto LABEL_5;
    }
    else if ( a2 < v9 )
    {
      goto LABEL_20;
    }
    v20 = 0;
    goto LABEL_18;
  }
  if ( !v10 )
  {
LABEL_34:
    _dwarf_error(a1, v11, 353);
    return 1;
  }
  if ( !a4 )
  {
    if ( a2 >= v9 )
      goto LABEL_34;
LABEL_20:
    v40 = a1;
    v22 = a2;
    v39 = a5 != nullptr;
    v23 = a5;
    v20 = 0;
    v37 = v10;
    v41 = a7;
LABEL_24:
    if ( v20 >= v37 && v39 )
      goto LABEL_33;
    while ( 1 )
    {
      v44 = 0;
      v45[0] = 0;
      if ( (unsigned int)dwarf_decode_signed_leb128(v22, &v44, v45, v9) == 1 )
        break;
      v26 = v45[0];
      v27 = v44 + v22;
      v44 = 0;
      if ( v45[0] )
      {
        v45[0] = 0;
        if ( (unsigned int)dwarf_decode_signed_leb128(v27, &v44, v45, v9) == 1 )
          break;
        v31 = v44 + v27;
        v35 = v45[0];
        v44 = 0;
        v45[0] = 0;
        v28 = dwarf_decode_signed_leb128(v31, &v44, v45, v9);
        v25 = v35;
        if ( v28 == 1 )
          break;
        v22 = v44 + v31;
        v24 = v45[0];
        if ( a5 )
          goto LABEL_23;
      }
      else
      {
        if ( (unsigned int)dwarf_decode_signed_leb128(v27, &v44, v45, v9) == 1 )
          break;
        v22 = v44 + v27;
        v24 = 0;
        v25 = v45[0];
        if ( a5 )
        {
LABEL_23:
          *v23 = v26;
          ++v20;
          v23 += 20;
          *((_QWORD *)v23 - 2) = v25;
          *((_QWORD *)v23 - 1) = v24;
          if ( v22 >= v9 )
          {
            v29 = v37;
            a1 = v40;
            v11 = a7;
            goto LABEL_45;
          }
          goto LABEL_24;
        }
      }
      ++v20;
      v23 += 20;
      if ( v22 >= v9 )
      {
        v7 = a6;
LABEL_18:
        *v7 = v20;
        return 0;
      }
    }
    _dwarf_error_string(v40, a7, 329, "DW_DLE_LEB_IMPROPER: decode sleb w/len  runs past allowed area.f");
    return 1;
  }
  if ( a2 >= v9 )
    goto LABEL_34;
LABEL_5:
  v40 = a1;
  v12 = a2;
  v38 = a5 != nullptr;
  v13 = 0;
  v36 = v10;
  v14 = a5;
  v41 = a7;
  while ( 2 )
  {
    if ( v13 >= v36 && v38 )
    {
LABEL_33:
      a1 = v40;
      v11 = v41;
      goto LABEL_34;
    }
    while ( 1 )
    {
      v44 = 0;
      v45[0] = 0;
      if ( (unsigned int)dwarf_decode_leb128(v12, &v44, v45, v9) == 1 )
      {
LABEL_40:
        _dwarf_error_string(v40, a7, 329, "DW_DLE_LEB_IMPROPER: decode uleb runs past allowed area.c");
        return 1;
      }
      v17 = v45[0];
      v18 = v44 + v12;
      v44 = 0;
      if ( !v45[0] )
        break;
      v45[0] = 0;
      if ( (unsigned int)dwarf_decode_leb128(v18, &v44, v45, v9) == 1 )
        goto LABEL_40;
      v30 = v44 + v18;
      v34 = v45[0];
      v44 = 0;
      v45[0] = 0;
      v19 = dwarf_decode_leb128(v30, &v44, v45, v9);
      v16 = v34;
      if ( v19 == 1 )
        goto LABEL_40;
      v12 = v44 + v30;
      v15 = v45[0];
      if ( a5 )
        goto LABEL_8;
LABEL_16:
      ++v13;
      v14 += 20;
      if ( v12 >= v9 )
      {
        v7 = a6;
        v20 = v13;
        goto LABEL_18;
      }
    }
    if ( (unsigned int)dwarf_decode_leb128(v18, &v44, v45, v9) == 1 )
      goto LABEL_40;
    v12 = v44 + v18;
    v15 = 0;
    v16 = v45[0];
    if ( !a5 )
      goto LABEL_16;
LABEL_8:
    *v14 = v17;
    ++v13;
    v14 += 20;
    *((_QWORD *)v14 - 4) = v16;
    *((_QWORD *)v14 - 3) = v15;
    if ( v12 < v9 )
      continue;
    break;
  }
  v29 = v36;
  a1 = v40;
  v20 = v13;
  v11 = a7;
LABEL_45:
  if ( v20 != v29 )
    goto LABEL_34;
  return 0;
}

