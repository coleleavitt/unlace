unsigned __int64 __fastcall sub_1B3E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  const char *v5; // rsi
  char *v6; // rbx
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // r14
  unsigned __int64 v16; // r12
  __int16 flags; // ax
  char *v18; // rdx
  unsigned __int64 v19; // r14
  const char *v20; // r15
  char *v21; // rax
  signed __int64 v22; // r12
  unsigned __int64 v23; // r12
  _BYTE *v24; // r15
  unsigned int v25; // edi
  _BYTE *v26; // r8
  _BYTE *v27; // r15
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // r14
  __int64 *i; // rax
  __int64 v32; // rdx
  int v33; // ecx
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  __int64 v45; // r15
  __int64 v46; // rsi
  unsigned __int64 v47; // r15
  _BYTE *v48; // r8
  __int64 v49; // rax
  __int64 v50; // r13
  void (__fastcall *hexdsp)(__int64, void **, __int64, __int64); // rax
  size_t v52; // r15
  __int64 v53; // r14
  __int64 v54; // r8
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // [rsp+0h] [rbp-70h]
  __int64 v61; // [rsp+8h] [rbp-68h]
  _BYTE *v62; // [rsp+8h] [rbp-68h]
  __int64 v63; // [rsp+8h] [rbp-68h]
  _BYTE *v64; // [rsp+8h] [rbp-68h]
  unsigned __int64 v65; // [rsp+8h] [rbp-68h]
  __int64 tinfo_property; // [rsp+18h] [rbp-58h] BYREF
  void *src; // [rsp+20h] [rbp-50h] BYREF
  __int128 v68; // [rsp+28h] [rbp-48h]
  unsigned __int64 v69; // [rsp+38h] [rbp-38h]

  v2 = a1;
  v3 = *(_QWORD *)(a1 + 32);
  v69 = __readfsqword(0x28u);
  v5 = *(const char **)(a1 + 24);
  if ( *(_QWORD *)(a1 + 40) < (unsigned __int64)(v3 + 1) )
  {
    v10 = a1;
    a1 += 24;
    v11 = qvector_reserve(a1, v5, v3 + 1, 88);
    *(_QWORD *)(v10 + 24) = v11;
    v5 = (const char *)v11;
    v3 = *(_QWORD *)(v2 + 32);
  }
  v6 = (char *)&v5[88 * v3];
  *((_QWORD *)v6 + 1) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)v6 = -1;
  *((_QWORD *)v6 + 2) = 0xFFFFFFFFLL;
  *((_QWORD *)v6 + 5) = 0;
  *((_QWORD *)v6 + 6) = 0;
  *((_DWORD *)v6 + 14) = 0;
  *((_QWORD *)v6 + 8) = 0;
  *(_OWORD *)(v6 + 24) = 0;
  *(_OWORD *)(v6 + 72) = 0;
  ++*(_QWORD *)(v2 + 32);
  if ( *(_DWORD *)(a2 + 8) == 57 )
  {
    v7 = *(_QWORD *)(a2 + 24);
    if ( *(_DWORD *)(v7 + 8) == 68 )
    {
      a1 = *(_QWORD *)(v7 + 24);
      v5 = "__eh34_catch_ellipsis";
      if ( !strcmp((const char *)a1, "__eh34_catch_ellipsis") )
        return v69 - __readfsqword(0x28u);
    }
  }
  v8 = *(__int64 **)(a2 + 32);
  if ( (unsigned __int64)v8[1] > 2 )
  {
    v28 = *v8;
    v29 = *(_DWORD *)(v28 + 152);
    v30 = v28;
    if ( v29 == 61 )
    {
      v50 = *(_QWORD *)(v28 + 168);
      hexdsp = (void (__fastcall *)(__int64, void **, __int64, __int64))get_hexdsp(a1, v5);
      hexdsp(451, &src, v50, v30 + 192);
      if ( !src )
        goto LABEL_6;
      v29 = *(_DWORD *)(v30 + 152);
    }
    for ( i = (__int64 *)(v30 + 144); v29 == 48; v29 = *((_DWORD *)i + 2) )
      i = (__int64 *)i[3];
    if ( v29 == 52 )
      i = (__int64 *)i[3];
    v32 = *i;
    *i = *(_QWORD *)v6;
    v33 = *((_DWORD *)v6 + 2);
    *(_QWORD *)v6 = v32;
    LODWORD(v32) = *((_DWORD *)i + 2);
    *((_DWORD *)i + 2) = v33;
    v34 = *((_DWORD *)v6 + 3);
    *((_DWORD *)v6 + 2) = v32;
    LODWORD(v32) = *((_DWORD *)i + 3);
    *((_DWORD *)i + 3) = v34;
    v35 = *((_QWORD *)v6 + 3);
    *((_DWORD *)v6 + 3) = v32;
    v36 = i[3];
    i[3] = v35;
    v37 = *((_QWORD *)v6 + 4);
    *((_QWORD *)v6 + 3) = v36;
    v38 = i[4];
    i[4] = v37;
    v39 = *((_QWORD *)v6 + 5);
    *((_QWORD *)v6 + 4) = v38;
    v40 = i[5];
    i[5] = v39;
    v41 = *((_QWORD *)v6 + 6);
    *((_QWORD *)v6 + 5) = v40;
    v42 = i[6];
    i[6] = v41;
    LODWORD(v41) = *((_DWORD *)v6 + 14);
    *((_QWORD *)v6 + 6) = v42;
    LODWORD(v42) = *((_DWORD *)i + 14);
    *((_DWORD *)i + 14) = v41;
    *((_DWORD *)v6 + 14) = v42;
    tinfo_property = 0;
    tinfo_property = get_tinfo_property(*(_QWORD *)(v30 + 192), 10);
    v68 = 0;
    src = nullptr;
    if ( (unsigned __int8)print_tinfo(&src, 0, 2, 40, 64, &tinfo_property, 0, 0) )
    {
      v65 = v68;
      if ( (_QWORD)v68 )
      {
        v52 = v68 - 1;
        if ( (_QWORD)v68 != 1 )
        {
          v53 = *((_QWORD *)v6 + 9);
          v54 = v68 - 1;
          if ( v53 )
          {
            --v53;
            v54 = v68 - 1 + v53;
            v65 = v68 + v53;
          }
          v55 = *((_QWORD *)v6 + 8);
          if ( *((_QWORD *)v6 + 10) < v65 )
          {
            v60 = v54;
            v59 = qvector_reserve(v6 + 64, v55, v65, 1);
            *((_QWORD *)v6 + 8) = v59;
            v54 = v60;
            v55 = v59;
          }
          *((_QWORD *)v6 + 9) = v65;
          *(_BYTE *)(v55 + v54) = 0;
          memcpy((void *)(v53 + *((_QWORD *)v6 + 8)), src, v52);
        }
      }
    }
    else
    {
      v43 = *((_QWORD *)v6 + 9);
      v63 = v43;
      if ( v43 )
      {
        v44 = v43 + 1;
        v45 = *((_QWORD *)v6 + 9);
        v63 = v43 - 1;
      }
      else
      {
        v44 = 2;
        v45 = 1;
      }
      v46 = *((_QWORD *)v6 + 8);
      if ( *((_QWORD *)v6 + 10) < v44 )
      {
        v56 = qvector_reserve(v6 + 64, v46, v44, 1);
        *((_QWORD *)v6 + 8) = v56;
        v46 = v56;
      }
      *((_QWORD *)v6 + 9) = v44;
      *(_BYTE *)(v46 + v45) = 0;
      *(_BYTE *)(*((_QWORD *)v6 + 8) + v63) = 63;
    }
    if ( src )
    {
      *(_QWORD *)&v68 = 0;
      qfree(src);
    }
    clear_tinfo_t(&tinfo_property);
  }
LABEL_6:
  if ( *((_QWORD *)v6 + 9) > 1u )
    return v69 - __readfsqword(0x28u);
  v12 = *(_QWORD **)(a2 + 32);
  if ( v12[1] <= 1u )
  {
    if ( under_debugger )
      goto LABEL_81;
    interr(30780);
LABEL_79:
    if ( !under_debugger )
      interr(30781);
LABEL_81:
    BUG();
  }
  v13 = *v12;
  v14 = *(_DWORD *)(*v12 + 80LL);
  if ( v14 == 35 )
  {
    v15 = *(_QWORD *)(v13 + 96);
    v14 = *(_DWORD *)(v15 + 8);
  }
  else
  {
    v15 = v13 + 72;
  }
  if ( v14 == 52 )
  {
    v15 = *(_QWORD *)(v15 + 24);
    v14 = *(_DWORD *)(v15 + 8);
  }
  if ( v14 != 64 )
    goto LABEL_79;
  v16 = *(_QWORD *)(v15 + 24);
  flags = get_flags_ex(v16, 4);
  if ( (flags & 0xC000u) == 0 && (flags & 0x600) != 0x200 )
    set_dummy_name(-1, v16);
  if ( get_ea_name(v6 + 64, v16, 0, 0) > 0 )
  {
    calc_c_cpp_name(v6 + 64, *((_QWORD *)v6 + 8), v15 + 48, 1);
  }
  else
  {
    v18 = "0x";
    if ( v16 <= 9 )
      v18 = "";
    sub_FB10((__int64 *)v6 + 8, (__int64)"MEMORY[%s%a]", v18, v16);
  }
  v19 = *((_QWORD *)v6 + 9);
  if ( v19 )
  {
    v20 = *((const char **)v6 + 8);
    v61 = (__int64)v20;
    v21 = strchr(v20, 96);
    if ( v21 )
    {
      v22 = v21 - v20;
      if ( v21 - v20 != -1 )
      {
        if ( v22 )
        {
          v47 = v22 + 1;
          if ( v19 < v22 + 1 )
          {
            if ( *((_QWORD *)v6 + 10) < v47 )
            {
              v58 = qvector_reserve(v6 + 64, v61, v22 + 1, 1);
              v19 = *((_QWORD *)v6 + 9);
              v61 = v58;
              *((_QWORD *)v6 + 8) = v58;
            }
            memset((void *)(v19 + v61), 0, v47 - v19);
            v49 = *((_QWORD *)v6 + 8);
            *((_QWORD *)v6 + 9) = v47;
            v21 = (char *)(v22 + v49);
          }
          else if ( v19 != v22 + 1 )
          {
            *((_QWORD *)v6 + 9) = v47;
          }
          *v21 = 0;
          v19 = *((_QWORD *)v6 + 9);
        }
        else if ( v20 )
        {
          *((_QWORD *)v6 + 9) = 0;
          qfree(v20);
          *((_QWORD *)v6 + 8) = 0;
          v19 = *((_QWORD *)v6 + 9);
          *((_QWORD *)v6 + 10) = 0;
        }
      }
    }
    if ( v19 > 1 )
    {
      v23 = *((_QWORD *)v6 + 8);
      v62 = (_BYTE *)(v23 + v19 - 1);
      if ( v23 < (unsigned __int64)v62 )
      {
        while ( 1 )
        {
          v24 = v62;
          v25 = (char)*(v62 - 1);
          if ( v25 > 0x7F || !isspace(v25) )
            break;
          --v62;
          if ( (_BYTE *)v23 == v24 - 1 )
            goto LABEL_54;
        }
      }
      v26 = &v62[-v23];
      if ( v62 == (_BYTE *)v23 )
      {
LABEL_54:
        if ( v23 )
        {
          *((_QWORD *)v6 + 9) = 0;
          qfree(v23);
          *((_QWORD *)v6 + 8) = 0;
          *((_QWORD *)v6 + 10) = 0;
        }
      }
      else
      {
        v27 = v26 + 1;
        if ( v19 < (unsigned __int64)(v26 + 1) )
        {
          if ( *((_QWORD *)v6 + 10) < (unsigned __int64)v27 )
          {
            v57 = qvector_reserve(v6 + 64, v23, v26 + 1, 1);
            v19 = *((_QWORD *)v6 + 9);
            v26 = &v62[-v23];
            *((_QWORD *)v6 + 8) = v57;
            v23 = v57;
          }
          v64 = v26;
          memset((void *)(v23 + v19), 0, (size_t)&v27[-v19]);
          v48 = &v64[*((_QWORD *)v6 + 8)];
          *((_QWORD *)v6 + 9) = v27;
          v62 = v48;
        }
        else if ( v27 != (_BYTE *)v19 )
        {
          *((_QWORD *)v6 + 9) = v27;
        }
        *v62 = 0;
      }
    }
  }
  return v69 - __readfsqword(0x28u);
}
