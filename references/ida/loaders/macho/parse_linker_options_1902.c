__int64 __fastcall sub_373A0(__int64 *a1, char *a2, __int64 a3, char a4, char a5, __int64 a6, __int64 a7, char *s1)
{
  __int64 v9; // r14
  int v11; // ebp
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 result; // rax
  __int64 range; // rax
  unsigned __int8 v18; // al
  int v19; // eax
  __int64 v20; // rdi
  char *v21; // rsi
  unsigned int v22; // eax
  int v23; // edx
  int v24; // r9d
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  __int16 v27; // ax
  char v28; // al
  __int64 v29; // rax
  unsigned int fixup; // eax
  __int64 v31; // rax
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r8
  _BYTE *v38; // rax
  char byte; // al
  unsigned __int64 v40; // rbx
  int v41; // eax
  char *v42; // rax
  __int64 v43; // [rsp+0h] [rbp-508h]
  __int64 name_ea; // [rsp+0h] [rbp-508h]
  __int64 v45; // [rsp+0h] [rbp-508h]
  bool v46; // [rsp+8h] [rbp-500h]
  __int64 v47; // [rsp+8h] [rbp-500h]
  unsigned int v48; // [rsp+10h] [rbp-4F8h]
  unsigned int v49; // [rsp+10h] [rbp-4F8h]
  unsigned int v50; // [rsp+10h] [rbp-4F8h]
  unsigned int v51; // [rsp+10h] [rbp-4F8h]
  int v52; // [rsp+1Ch] [rbp-4ECh]
  unsigned int v53; // [rsp+2Ch] [rbp-4DCh] BYREF
  __int64 v54; // [rsp+30h] [rbp-4D8h] BYREF
  _BYTE v55[24]; // [rsp+38h] [rbp-4D0h]
  __int64 v56; // [rsp+50h] [rbp-4B8h]
  __int16 v57; // [rsp+58h] [rbp-4B0h]
  __int128 v58; // [rsp+60h] [rbp-4A8h]
  __int64 v59; // [rsp+70h] [rbp-498h]
  __int64 v60; // [rsp+78h] [rbp-490h]
  int v61; // [rsp+80h] [rbp-488h]
  __int64 v62; // [rsp+88h] [rbp-480h]
  int v63; // [rsp+90h] [rbp-478h]
  __int64 v64; // [rsp+98h] [rbp-470h]
  int v65; // [rsp+A0h] [rbp-468h]
  __int64 v66; // [rsp+A8h] [rbp-460h]
  int v67; // [rsp+B0h] [rbp-458h]
  __int64 v68; // [rsp+B8h] [rbp-450h]
  char v69; // [rsp+C0h] [rbp-448h] BYREF
  int v70; // [rsp+C1h] [rbp-447h]
  unsigned __int64 v71; // [rsp+4C8h] [rbp-40h]

  v9 = a3;
  v11 = (int)a2;
  v71 = __readfsqword(0x28u);
  if ( a3 != -1 )
    v9 = *(_QWORD *)(*(_QWORD *)(a1[4] + 8) + 16LL) & a3;
  v13 = (_QWORD *)a1[5];
  v14 = v13[1];
  v15 = v13[30];
  if ( *(_QWORD *)(v14 + 16) != v15 && v15 != -1 )
  {
    if ( !v13[23] )
      return 0;
    a2 = (char *)v9;
    v43 = a6;
    range = rangeset_t_find_range(v13 + 22, v9);
    a6 = v43;
    if ( !range )
      return 0;
  }
  v18 = a4 - 102;
  if ( !a6 )
  {
    if ( v18 > 1u )
      goto LABEL_11;
LABEL_41:
    v36 = a1[4];
    if ( (*(_BYTE *)(v36 + 13689) & 8) == 0 )
    {
      if ( a7 != get_qword(v9) )
        patch_qword(v9, a7);
      v36 = a1[4];
    }
    sub_1DF00(v36, a1[5], v9, a7, 3, 0, 0, 0);
    return 0;
  }
  if ( a6 == -1 )
  {
    if ( v18 <= 1u )
      goto LABEL_41;
    a6 = 255;
    if ( v11 != 1 )
    {
LABEL_11:
      if ( !s1 )
        return 0;
      name_ea = get_name_ea(-1, s1);
      if ( name_ea == -1 )
        return 0;
      v46 = strcmp(s1, "__mh_execute_header") != 0;
LABEL_14:
      v19 = 4;
      if ( *(_BYTE *)(a1[4] + 13692) )
        v19 = 8;
      v20 = a1[6];
      v21 = (char *)v9;
      v53 = v19;
      v22 = sub_28F70(v20, v9, &v53);
      v25 = v22;
      if ( v22 != 8 )
      {
LABEL_17:
        if ( (*(_BYTE *)(a1[5] + 364) & 0x50) == 0 && (*(_BYTE *)(a1[4] + 13689) & 8) == 0 )
        {
          if ( a4 == 3 )
          {
            v21 = (char *)(name_ea - v9 + a7 - 4);
            put_dword(v9, v21);
          }
          else
          {
            if ( a4 <= 3 )
            {
              if ( a4 != 1 )
              {
                if ( a4 == 2 )
                {
                  v21 = (char *)(a7 + name_ea);
                  put_dword(v9, a7 + name_ea);
                }
                goto LABEL_18;
              }
LABEL_75:
              if ( v11 != 1 )
              {
                v50 = v25;
                v21 = (char *)(a7 + name_ea);
                if ( *(_BYTE *)(a1[6] + 161) )
                  put_qword(v9, v21);
                else
                  put_dword(v9, v21);
                v25 = v50;
              }
              if ( !a7 )
              {
                v21 = "___CFConstantStringClassReference";
                v51 = v25;
                v41 = strcmp(s1, "___CFConstantStringClassReference");
                v25 = v51;
                if ( !v41 )
                {
                  v21 = (char *)v9;
                  sub_36B20(a1[4], v9);
                  v25 = v51;
                }
              }
              if ( (int)v25 <= 16 )
              {
                v42 = (char *)&loc_106DB + 5;
                if ( _bittest64((const __int64 *)&v42, v25) )
                {
                  qsnprintf(&v69, 1024, "%s_ptr", s1);
                  set_name(v9, &v69, 6144);
                  v21 = s1;
                  sub_12040(v9, s1, 1);
                }
              }
              goto LABEL_18;
            }
            if ( (unsigned __int8)(a4 - 100) <= 1u )
              goto LABEL_75;
          }
        }
LABEL_18:
        if ( v46 )
        {
          v26 = a1[6];
          v27 = 4;
          if ( *(_BYTE *)(v26 + 161) )
            v27 = 12;
          LOWORD(v54) = v27;
          HIDWORD(v54) = 0;
          *(__m128i *)v55 = _mm_load_si128((const __m128i *)&xmmword_57480);
          *(_QWORD *)&v55[16] = name_ea;
          v56 = a7;
          v28 = segtype(name_ea, v21, v26);
          if ( v28 == 1 )
          {
            HIDWORD(v54) |= 2u;
          }
          else if ( v28 == 2 )
          {
            v40 = *(_QWORD *)&v55[16];
            if ( (*(_BYTE *)(*(_QWORD *)a1[4] + 12LL) & 8) != 0 )
            {
              v40 = *(_QWORD *)&v55[16] & 0xFFFFFFFFFFFFFFFELL;
              v56 += v55[16] & 1;
              *(_QWORD *)&v55[16] &= ~1uLL;
            }
            auto_mark_range(v40, v40 + 1, 20);
            auto_mark_range(v40, v40 + 1, 30);
          }
          v29 = v56;
          if ( *(_DWORD *)(*(_QWORD *)(a1[4] + 8) + 24LL) != 8 )
            v29 = (int)v56;
          v56 = v29;
          set_fixup(v9, &v54);
          if ( (a5 & 1) != 0 || v11 == 1 && (a5 & 8) == 0 )
            make_name_weak(*(_QWORD *)&v55[16]);
        }
        return 0;
      }
      v37 = v53;
      if ( v53 )
      {
        if ( a7 )
        {
          v49 = v53;
          sub_19510((unsigned int)"Import stub with addend != 0.", v9, v23, v22, v53, v24);
          LODWORD(v25) = 8;
          v37 = v49;
        }
        v38 = (_BYTE *)a1[4];
        if ( !*(_DWORD *)(*(_QWORD *)v38 + 4LL) && (v38[13689] & 8) == 0 && (_DWORD)v37 == 5 )
        {
          v52 = v25;
          v21 = &v69;
          v69 = -23;
          v70 = name_ea - v9 - 5;
          put_bytes(v9, &v69, 5);
          byte = get_byte(name_ea);
          v37 = 5;
          LODWORD(v25) = v52;
          if ( byte == -12 )
          {
            v21 = (_BYTE *)(off_C0 + 3);
            put_byte(name_ea, 195);
            LODWORD(v25) = v52;
            v37 = 5;
          }
        }
        v48 = v25;
        v57 = 0;
        v54 = v9;
        *(__m128i *)&v55[8] = _mm_load_si128((const __m128i *)&xmmword_574D0);
        *(_QWORD *)v55 = v9 + v37;
        v56 = 0;
        v59 = 0xFFFFFFFFLL;
        v60 = 0;
        v61 = 0;
        v62 = 0;
        v63 = 0;
        v64 = 0;
        v65 = 0;
        v66 = 0;
        v67 = 0;
        v68 = 0;
        v58 = 0;
        add_func_ex(&v54);
        v25 = v48;
        goto LABEL_17;
      }
      return 0;
    }
  }
  else
  {
    if ( v18 <= 1u )
      goto LABEL_41;
    if ( v11 != 1 )
    {
LABEL_33:
      if ( !s1 || (a2 = s1, v47 = a6, v31 = get_name_ea(-1, s1), a6 = v47, name_ea = v31, v31 == -1) )
      {
        if ( a6 == 255 )
          return 0;
        if ( (unsigned __int8)segtype(-1, a2, v14) == 1 )
          return 0;
        qsnprintf(&v69, 1024, "__imp_%s", s1);
        name_ea = get_name_ea(-1, &v69);
        if ( name_ea == -1 )
          return 0;
        v46 = 1;
        goto LABEL_14;
      }
      v32 = strcmp(s1, "__mh_execute_header");
      v34 = v47;
      if ( v32 )
      {
        v46 = 1;
        if ( v34 == 255 )
          goto LABEL_14;
      }
      else
      {
        v46 = 0;
        if ( v34 == 255 )
          goto LABEL_14;
      }
      if ( (unsigned __int8)segtype(name_ea, "__mh_execute_header", v33) != 1 )
      {
        qsnprintf(&v69, 1024, "__imp_%s", s1);
        v35 = get_name_ea(-1, &v69);
        if ( v35 == -1 )
          v35 = name_ea;
        name_ea = v35;
      }
      goto LABEL_14;
    }
  }
  a2 = (char *)v9;
  v45 = a6;
  fixup = get_fixup(0, v9);
  a6 = v45;
  v14 = fixup;
  result = 1;
  if ( !(_BYTE)v14 )
    goto LABEL_33;
  return result;
}
