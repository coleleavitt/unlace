/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: BOOL8
// Address: 0x0000000000413190

//----- (0000000000413190) ----------------------------------------------------
__int64 __fastcall sub_413190(
        _BOOL8 (__fastcall ***a1)(__int64 a1, int a2),
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  bool v9; // zf
  _BOOL8 (__fastcall **v11)(__int64, int); // rbx
  _BOOL8 (__fastcall **v12)(__int64, int); // rax
  __int64 v13; // r12
  void *v14; // rsi
  unsigned __int64 v15; // rbx
  __int64 v16; // r14
  char *v17; // rax
  _BOOL8 (__fastcall **v18)(__int64, int); // rbx
  const char *v19; // r9
  const char *v20; // r8
  unsigned __int8 *v21; // rdx
  _BOOL8 (__fastcall *v22)(__int64, int); // rax
  __int64 v23; // r9
  __m128 v24; // xmm4
  __m128 v25; // xmm5
  unsigned int v26; // r8d
  const char *v27; // rdx
  const char *v29; // rcx
  _BOOL8 (__fastcall *v30)(__int64, int); // rax
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  const char *v34; // r8
  _BOOL8 (__fastcall *v35)(__int64, int); // rax
  const char *v36; // r8
  unsigned __int8 *v37; // rdx
  _BOOL8 (__fastcall *v38)(__int64, int); // rax
  unsigned __int64 v39; // rax
  __int64 v40; // rsi
  _BOOL8 (__fastcall **v41)(__int64, int); // r12
  size_t v42; // rax
  size_t v43; // rbx
  void *v44; // rdi
  size_t v45; // r13
  int v46; // r13d
  int v47; // r13d
  unsigned int v48; // eax
  __int64 v49; // r9
  __m128 v50; // xmm4
  __m128 v51; // xmm5
  unsigned int v52; // eax
  __int64 v53; // r9
  __m128 v54; // xmm4
  __m128 v55; // xmm5
  unsigned int v56; // eax
  __int64 v57; // r9
  __m128 v58; // xmm4
  __m128 v59; // xmm5
  unsigned int v60; // eax
  __int64 v61; // r9
  __m128 v62; // xmm4
  __m128 v63; // xmm5
  char v64; // [rsp+0h] [rbp-10B0h]
  void *v65; // [rsp+8h] [rbp-10A8h]
  int v66; // [rsp+14h] [rbp-109Ch]
  unsigned int v67; // [rsp+14h] [rbp-109Ch]
  unsigned int v68; // [rsp+28h] [rbp-1088h]
  unsigned int v69; // [rsp+28h] [rbp-1088h]
  unsigned __int8 **v70; // [rsp+28h] [rbp-1088h]
  void *v71; // [rsp+28h] [rbp-1088h]
  void *v72; // [rsp+28h] [rbp-1088h]
  unsigned int v73; // [rsp+28h] [rbp-1088h]
  unsigned int v74; // [rsp+28h] [rbp-1088h]
  unsigned int v75; // [rsp+28h] [rbp-1088h]
  void *v76; // [rsp+30h] [rbp-1080h] BYREF
  __int128 v77; // [rsp+38h] [rbp-1078h]
  void *ptr; // [rsp+50h] [rbp-1060h] BYREF
  __int128 v79; // [rsp+58h] [rbp-1058h]
  unsigned __int8 dest[4104]; // [rsp+70h] [rbp-1040h] BYREF
  unsigned __int64 v81; // [rsp+1078h] [rbp-38h]

  v9 = a1[130] == nullptr;
  v81 = __readfsqword(0x28u);
  if ( v9 || (unsigned __int64)a1[139] <= 3 )
    goto LABEL_28;
  v11 = a1[138];
  v76 = nullptr;
  v77 = 0;
  v76 = sub_481540((__int64)&v76, nullptr, 3u, 1u);
  *(_QWORD *)&v77 = 3;
  *(_WORD *)v76 = *(_WORD *)v11;
  *((_BYTE *)v76 + 2) = 0;
  v12 = a1[139];
  if ( !v12 )
  {
    ptr = nullptr;
    a2 = 0;
    v79 = 0;
LABEL_5:
    v13 = 6;
    v14 = nullptr;
    v15 = 7;
    v16 = 0;
LABEL_6:
    ptr = sub_481540((__int64)&ptr, v14, v15, 1u);
    v14 = ptr;
    goto LABEL_7;
  }
  v39 = (unsigned __int64)v12 - 1;
  v40 = 2;
  a2 = 0;
  ptr = nullptr;
  v41 = a1[138];
  v79 = 0;
  if ( v39 <= 2 )
    v40 = v39;
  v42 = v39 - v40;
  v43 = v42;
  if ( !v42 )
    goto LABEL_5;
  v44 = nullptr;
  v45 = v42 + 1;
  if ( v42 != -1 )
  {
    ptr = sub_481540((__int64)&ptr, nullptr, v42 + 1, 1u);
    v44 = ptr;
  }
  *(_QWORD *)&v79 = v45;
  memmove(v44, (char *)v41 + v40, v43);
  *((_BYTE *)ptr + v43) = 0;
  v14 = ptr;
  if ( (_QWORD)v79 )
  {
    v13 = v79 + 5;
    v15 = v79 + 6;
    v16 = v79 - 1;
  }
  else
  {
    v16 = 0;
    v15 = 7;
    v13 = 6;
  }
  if ( *((_QWORD *)&v79 + 1) < v15 )
    goto LABEL_6;
LABEL_7:
  *(_QWORD *)&v79 = v15;
  *((_BYTE *)v14 + v13) = 0;
  v17 = (char *)ptr + v16;
  *(_DWORD *)v17 = 1650811950;
  *((_WORD *)v17 + 2) = 26485;
  v18 = a1[129];
  if ( !(24LL * (_QWORD)a1[130]) )
  {
LABEL_24:
    if ( ptr )
    {
      *(_QWORD *)&v79 = 0;
      j__free(ptr);
    }
    if ( v76 )
    {
      *(_QWORD *)&v77 = 0;
      j__free(v76);
    }
LABEL_28:
    if ( (unsigned __int64)a1[136] <= 1 )
      return 0;
    v27 = s1;
    if ( a1[133] )
      v27 = (const char *)a1[132];
    if ( !(unsigned __int8)sub_480530((char *)dest, 0x1000u, v27) )
      return 0;
    v29 = s1;
    if ( a1[136] )
      v29 = (const char *)a1[135];
    sub_480480((char *)a1 + 8, 1024, dest, v29, 0);
    v30 = **a1;
    if ( v30 == sub_40D850 )
    {
      if ( sub_480B00((char *)a1 + 8) )
      {
        v71 = (void *)sub_47F560((const char *)a1 + 8, 0);
        v46 = sub_476CD0((__int64)v71);
        sub_47F680(v71);
        if ( v46 == *((_DWORD *)a1 + 282) )
          goto LABEL_66;
      }
      sub_4130C0(
        a2,
        a3,
        a4,
        a5,
        v32,
        v33,
        a8,
        a9,
        (__int64)a1,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        (__int64)"DEBUGLINK",
        (__int64)(a1 + 1),
        0,
        v31,
        v64);
    }
    else
    {
      *(double *)a2.m128_u64 = ((double (__fastcall *)(_BOOL8 (__fastcall ***)(__int64, int), __int64))v30)(a1, 1);
      v73 = v52;
      sub_4130C0(
        a2,
        a3,
        a4,
        a5,
        v54,
        v55,
        a8,
        a9,
        (__int64)a1,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        (__int64)"DEBUGLINK",
        (__int64)(a1 + 1),
        v52,
        v53,
        v64);
      v26 = v73;
      if ( v73 )
        return v26;
    }
    v34 = s1;
    if ( a1[136] )
      v34 = (const char *)a1[135];
    sub_480480((char *)a1 + 8, 1024, dest, ".debug", v34, 0);
    v35 = **a1;
    if ( v35 == sub_40D850 )
    {
      if ( sub_480B00((char *)a1 + 8) )
      {
        v72 = (void *)sub_47F560((const char *)a1 + 8, 0);
        v47 = sub_476CD0((__int64)v72);
        sub_47F680(v72);
        if ( v47 == *((_DWORD *)a1 + 282) )
        {
LABEL_66:
          sub_4130C0(
            a2,
            a3,
            a4,
            a5,
            v32,
            v33,
            a8,
            a9,
            (__int64)a1,
            (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            (__int64)"DEBUGLINK",
            (__int64)(a1 + 1),
            1,
            v31,
            v64);
          return 1;
        }
      }
      sub_4130C0(
        a2,
        a3,
        a4,
        a5,
        v32,
        v33,
        a8,
        a9,
        (__int64)a1,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        (__int64)"DEBUGLINK",
        (__int64)(a1 + 1),
        0,
        v31,
        v64);
    }
    else
    {
      *(double *)a2.m128_u64 = ((double (__fastcall *)(_BOOL8 (__fastcall ***)(__int64, int), __int64))v35)(a1, 1);
      v75 = v60;
      sub_4130C0(
        a2,
        a3,
        a4,
        a5,
        v62,
        v63,
        a8,
        a9,
        (__int64)a1,
        (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
        (__int64)"DEBUGLINK",
        (__int64)(a1 + 1),
        v60,
        v61,
        v64);
      v26 = v75;
      if ( v75 )
        return v26;
    }
    v70 = (unsigned __int8 **)a1[129];
    if ( 24LL * (_QWORD)a1[130] )
    {
      while ( 1 )
      {
        v36 = s1;
        if ( a1[136] )
          v36 = (const char *)a1[135];
        v37 = (unsigned __int8 *)s1;
        if ( v70[1] )
          v37 = *v70;
        sub_480480((char *)a1 + 8, 1024, v37, dest, v36, 0);
        v38 = **a1;
        if ( v38 == sub_40D850 )
        {
          if ( sub_480B00((char *)a1 + 8) )
          {
            v65 = (void *)sub_47F560((const char *)a1 + 8, 0);
            v66 = sub_476CD0((__int64)v65);
            sub_47F680(v65);
            if ( v66 == *((_DWORD *)a1 + 282) )
              goto LABEL_66;
          }
          sub_4130C0(
            a2,
            a3,
            a4,
            a5,
            v32,
            v33,
            a8,
            a9,
            (__int64)a1,
            (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            (__int64)"DEBUGLINK",
            (__int64)(a1 + 1),
            0,
            v31,
            v64);
        }
        else
        {
          *(double *)a2.m128_u64 = ((double (__fastcall *)(_BOOL8 (__fastcall ***)(__int64, int), __int64))v38)(a1, 1);
          v67 = v48;
          sub_4130C0(
            a2,
            a3,
            a4,
            a5,
            v50,
            v51,
            a8,
            a9,
            (__int64)a1,
            (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            (__int64)"DEBUGLINK",
            (__int64)(a1 + 1),
            v48,
            v49,
            v64);
          v26 = v67;
          if ( v67 )
            return v26;
        }
        v70 += 3;
        if ( v70 == (unsigned __int8 **)&a1[129][3 * (_QWORD)a1[130]] )
          return 0;
      }
    }
    return 0;
  }
  while ( 1 )
  {
    v19 = s1;
    if ( (_QWORD)v79 )
      v19 = (const char *)ptr;
    v20 = s1;
    if ( (_QWORD)v77 )
      v20 = (const char *)v76;
    v21 = (unsigned __int8 *)s1;
    if ( v18[1] )
      v21 = (unsigned __int8 *)*v18;
    sub_480480((char *)a1 + 8, 1024, v21, ".build-id", v20, v19, 0);
    v22 = **a1;
    if ( v22 == sub_40D850 )
      break;
    *(double *)a2.m128_u64 = ((double (__fastcall *)(_BOOL8 (__fastcall ***)(__int64, int), _QWORD))v22)(a1, 0);
    v74 = v56;
    sub_4130C0(
      a2,
      a3,
      a4,
      a5,
      v58,
      v59,
      a8,
      a9,
      (__int64)a1,
      (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      (__int64)"BUILDID",
      (__int64)(a1 + 1),
      v56,
      v57,
      v64);
    v26 = v74;
    if ( v74 )
      goto LABEL_20;
LABEL_10:
    v18 += 3;
    if ( v18 == &a1[129][3 * (_QWORD)a1[130]] )
      goto LABEL_24;
  }
  if ( !sub_480B00((char *)a1 + 8) )
  {
    sub_4130C0(
      a2,
      a3,
      a4,
      a5,
      v24,
      v25,
      a8,
      a9,
      (__int64)a1,
      (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      (__int64)"BUILDID",
      (__int64)(a1 + 1),
      0,
      v23,
      v64);
    goto LABEL_10;
  }
  sub_4130C0(
    a2,
    a3,
    a4,
    a5,
    v24,
    v25,
    a8,
    a9,
    (__int64)a1,
    (int)"debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
    (__int64)"BUILDID",
    (__int64)(a1 + 1),
    1,
    v23,
    v64);
  v26 = 1;
LABEL_20:
  if ( ptr )
  {
    v68 = v26;
    *(_QWORD *)&v79 = 0;
    j__free(ptr);
    v26 = v68;
  }
  if ( v76 )
  {
    v69 = v26;
    *(_QWORD *)&v77 = 0;
    j__free(v76);
    return v69;
  }
  return v26;
}
// 4132EF: variable 'v24' is possibly undefined
// 4132EF: variable 'v25' is possibly undefined
// 4132EF: variable 'v23' is possibly undefined
// 4132EF: variable 'v64' is possibly undefined
// 413531: variable 'v32' is possibly undefined
// 413531: variable 'v33' is possibly undefined
// 413531: variable 'v31' is possibly undefined
// 4138A9: variable 'v48' is possibly undefined
// 4138B1: variable 'v50' is possibly undefined
// 4138B1: variable 'v51' is possibly undefined
// 4138B1: variable 'v49' is possibly undefined
// 4138E3: variable 'v52' is possibly undefined
// 41390D: variable 'v54' is possibly undefined
// 41390D: variable 'v55' is possibly undefined
// 41390D: variable 'v53' is possibly undefined
// 41395F: variable 'v56' is possibly undefined
// 41397E: variable 'v58' is possibly undefined
// 41397E: variable 'v59' is possibly undefined
// 41397E: variable 'v57' is possibly undefined
// 4139C1: variable 'v60' is possibly undefined
// 4139C9: variable 'v62' is possibly undefined
// 4139C9: variable 'v63' is possibly undefined
// 4139C9: variable 'v61' is possibly undefined
