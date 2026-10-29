/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5991C
// Address: 0x000000000005991C

//----- (000000000005991C) ----------------------------------------------------
__int64 __fastcall sub_5991C(const char *a1, _DWORD *a2, char a3)
{
  _QWORD *v4; // x0
  void *v5; // x19
  unsigned int v6; // w24
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  __int64 align; // x24
  __int64 v17; // x1
  _QWORD *v18; // x23
  char *v19; // x2
  int v20; // w23
  int v21; // w8
  char *v22; // x1
  unsigned int v23; // w23
  unsigned __int64 v24; // x22
  __int64 v25; // x1
  unsigned int v26; // w0
  __int64 v27; // x1
  unsigned int v28; // w27
  char *v29; // x1
  int v30; // w24
  char *v31; // x1
  char v32; // w20
  _QWORD *v33; // x19
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  char v41; // [xsp+0h] [xbp-550h]
  unsigned int v42; // [xsp+14h] [xbp-53Ch] BYREF
  void *ptr; // [xsp+18h] [xbp-538h] BYREF
  __int64 v44; // [xsp+20h] [xbp-530h]
  __int64 v45; // [xsp+28h] [xbp-528h]
  pthread_mutex_t v46; // [xsp+30h] [xbp-520h] BYREF
  __int128 v47; // [xsp+58h] [xbp-4F8h]
  __int64 v48; // [xsp+68h] [xbp-4E8h]
  _OWORD v49[2]; // [xsp+70h] [xbp-4E0h] BYREF
  __int128 s; // [xsp+90h] [xbp-4C0h] BYREF
  __int128 v51; // [xsp+A0h] [xbp-4B0h]
  struct __pthread_internal_list *v52; // [xsp+B0h] [xbp-4A0h]
  __int64 v53; // [xsp+B8h] [xbp-498h]
  struct __pthread_internal_list *v54; // [xsp+C0h] [xbp-490h]
  unsigned __int16 v55; // [xsp+C8h] [xbp-488h]
  int v56; // [xsp+CCh] [xbp-484h]
  _OWORD v57[3]; // [xsp+278h] [xbp-2D8h] BYREF
  __int64 v58; // [xsp+2B0h] [xbp-2A0h]
  __int64 v59[4]; // [xsp+2C8h] [xbp-288h] BYREF
  __int64 v60; // [xsp+2E8h] [xbp-268h]
  unsigned __int64 v61; // [xsp+2F0h] [xbp-260h]
  unsigned int v62; // [xsp+318h] [xbp-238h]
  unsigned int v63; // [xsp+328h] [xbp-228h]
  unsigned int v64; // [xsp+338h] [xbp-218h]
  char v65; // [xsp+370h] [xbp-1E0h]
  __int128 v66; // [xsp+3D8h] [xbp-178h] BYREF
  __int128 v67; // [xsp+3E8h] [xbp-168h]
  bool (__fastcall *v68)(__int64, int); // [xsp+468h] [xbp-E8h]
  unsigned __int8 v69; // [xsp+474h] [xbp-DCh]
  unsigned __int8 v70; // [xsp+475h] [xbp-DBh]
  __int64 v71; // [xsp+490h] [xbp-C0h]
  __int64 v72; // [xsp+4E8h] [xbp-68h]
  int8x16x2_t v73; // 0:q0.32
  int8x16x2_t v74; // 0:q0.32

  v72 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v4 = open_linput(a1, a3 & 1);
  if ( !v4 )
    return (unsigned int)-1;
  v5 = v4;
  sub_9DBB4();
  sub_4ECD4((__int64)v57, (__int64)v5, 0, v73);
  v68 = sub_5B2F8;
  if ( !sub_4B3EC((__int64)v57) || (sub_4B520(v57) & 1) == 0 || (unsigned int)v69 - 1 > 1 || (unsigned int)v70 - 1 > 1 )
    goto LABEL_11;
  memset(v49, 0, 28);
  if ( !v71 )
    goto LABEL_9;
  if ( (sub_50350((__int64)v57) & 1) == 0 )
  {
LABEL_11:
    v6 = -1;
    goto LABEL_12;
  }
  qword_166A40 = v58;
LABEL_9:
  sub_4F984((__int64)v57);
  v49[0] = *(_OWORD *)v59;
  *(_OWORD *)((char *)v49 + 12) = *(_OWORD *)((char *)&v59[1] + 4);
  if ( v59[0] )
  {
    memset(&s, 0, 0x1E8u);
  }
  else
  {
    v49[0] = v57[0];
    v8 = *(_QWORD *)&v57[0];
    *(_OWORD *)((char *)v49 + 12) = *(_OWORD *)((char *)v57 + 12);
    v9 = (__int64)memset(&s, 0, 0x1E8u);
    if ( !v8 )
      goto LABEL_40;
  }
  memset(&v46, 0, 24);
  v46.__align = (__int64)qvector_reserve(&v46, nullptr, 0xAu, 0x10u);
  if ( (sub_54EA8((__int64)v57, (__int64)&v46, (__int64 *)v49, v74) & 1) != 0
    && (sub_5518C((__int64)v57, (__int64)&s, (__int64)&v46) & 1) != 0
    && (a2[2] & 4) != 0 )
  {
    v10 = s;
    if ( (__int64)s >= 1 && (_QWORD)v51 )
    {
      if ( (__int64)v66 >= 1 && (_QWORD)v67 )
      {
        if ( (_QWORD)v66 == (_QWORD)s )
          goto LABEL_26;
        sub_4EC28(
          (__int64)"The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one (%08llX), "
                   "using the latter",
          (_QWORD)v66,
          (_QWORD)s);
      }
      v66 = s;
      v67 = v51;
    }
LABEL_26:
    if ( 16 * *(&v46.__align + 1) )
    {
      align = v46.__align;
      while ( 1 )
      {
        v44 = 0;
        v45 = 0;
        ptr = nullptr;
        v17 = *(_QWORD *)align;
        if ( *(_QWORD *)align > 0x1Du || ((1LL << v17) & 0x2000C002) == 0 )
          break;
        v18 = (_QWORD *)(align + 8);
        sub_55D60((__int64)v57, (__int64)&ptr, (__int64 *)&v66, *(_DWORD *)(align + 8));
        v17 = *(_QWORD *)align;
        if ( !v44 )
          goto LABEL_33;
        v19 = (char *)ptr;
LABEL_34:
        v20 = (*(__int64 (__fastcall **)(_DWORD *, __int64, char *, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, v17, v19, *v18);
        if ( ptr )
        {
          v44 = 0;
          qfree(ptr);
          ptr = nullptr;
          v45 = 0;
        }
        if ( !v20 )
        {
          align += 16;
          if ( align != v46.__align + 16 * *(&v46.__align + 1) )
            continue;
        }
        goto LABEL_38;
      }
      v18 = (_QWORD *)(align + 8);
LABEL_33:
      v19 = &byte_F154B;
      goto LABEL_34;
    }
  }
LABEL_38:
  v9 = v46.__align;
  if ( v46.__align )
  {
    *(&v46.__align + 1) = 0;
    qfree((void *)v46.__align);
    v46.__align = 0;
    *(&v46.__align + 2) = 0;
  }
LABEL_40:
  v21 = a2[2];
  if ( (v21 & 2) != 0 && v63 )
  {
    if ( !v65 )
    {
      if ( under_debugger )
        goto LABEL_109;
      v9 = (__int64)interr(20099);
      goto LABEL_105;
    }
    if ( v61 > v63 && v60 + ((unsigned __int64)v63 << 6) )
    {
      memset(&v46, 0, 24);
      sub_52750((__int64)v57, (__int64)&v46, *(_QWORD *)(v60 + ((unsigned __int64)v63 << 6) + 24));
      if ( *(&v46.__align + 1) )
        v22 = (char *)v46.__align;
      else
        v22 = &byte_F154B;
      v6 = (*(__int64 (__fastcall **)(_DWORD *, char *))(*(_QWORD *)a2 + 8LL))(a2, v22);
      v9 = v46.__align;
      if ( v46.__align )
      {
        *(&v46.__align + 1) = 0;
        qfree((void *)v46.__align);
        v46.__align = 0;
        *(&v46.__align + 2) = 0;
      }
      if ( v6 )
        goto LABEL_12;
      v21 = a2[2];
    }
  }
  if ( (v21 & 1) == 0 )
  {
    v23 = 0;
    goto LABEL_75;
  }
  v24 = v62;
  if ( !(v62 | v64) )
  {
    if ( (__int64)v52 < 1 || !v54 )
    {
      v23 = 0;
      goto LABEL_74;
    }
    v47 = 0u;
    *(_OWORD *)&v46.__lock = 0u;
    *(&v46.__align + 2) = v53;
    v46.__list.__prev = v52;
    v46.__list.__next = v54;
    DWORD1(v47) = v56;
    v46.__count = 11;
    v48 = v55;
    v26 = sub_5B328(v57, (__int64)&v46, 2, (__int64 (__fastcall ***)(_QWORD, __int64, char *))a2);
    goto LABEL_72;
  }
  if ( !v64 )
  {
    v23 = 0;
    if ( !v62 )
      goto LABEL_74;
    goto LABEL_66;
  }
  if ( !v65 )
  {
LABEL_105:
    if ( under_debugger )
      goto LABEL_109;
    v9 = (__int64)interr(20099);
LABEL_107:
    if ( !under_debugger )
      v9 = (__int64)interr(20099);
LABEL_109:
    __break(1u);
    v33 = (_QWORD *)v9;
    sub_4BE70(v57);
    Unwind_Resume(v33, v34, v35, v36, v37, v38, v39, v40, v41);
  }
  if ( v61 <= v64 )
    v25 = 0;
  else
    v25 = v60 + ((unsigned __int64)v64 << 6);
  v9 = sub_5B328(v57, v25, 1, (__int64 (__fastcall ***)(_QWORD, __int64, char *))a2);
  v23 = v9;
  if ( !(_DWORD)v24 )
    goto LABEL_74;
LABEL_66:
  if ( !v23 )
  {
    if ( v65 )
    {
      if ( v61 <= v24 )
        v27 = 0;
      else
        v27 = v60 + (v24 << 6);
      v26 = sub_5B328(v57, v27, 2, (__int64 (__fastcall ***)(_QWORD, __int64, char *))a2);
LABEL_72:
      v23 = v26;
      goto LABEL_74;
    }
    goto LABEL_107;
  }
LABEL_74:
  v21 = a2[2];
LABEL_75:
  v46.__align = (__int64)v57;
  memset(&v46.__align + 1, 0, 25);
  if ( (v21 & 0x10) == 0 )
  {
    v28 = 0;
    if ( (v21 & 0x20) == 0 )
      goto LABEL_98;
LABEL_88:
    ptr = nullptr;
    v44 = 0;
    v45 = 0;
    if ( !v65
      || !sub_563A4(v59, (__int64)&ptr, &v42)
      || (v44 ? (v31 = (char *)ptr) : (v31 = &byte_F154B),
          v23 = (*(__int64 (__fastcall **)(_DWORD *, char *, _QWORD))(*(_QWORD *)a2 + 40LL))(a2, v31, v42),
          v32 = 0,
          (v6 = v23) == 0) )
    {
      v32 = 1;
      v6 = v28;
    }
    if ( ptr )
    {
      v44 = 0;
      qfree(ptr);
      ptr = nullptr;
      v45 = 0;
    }
    if ( (v32 & 1) != 0 )
    {
LABEL_98:
      v6 = v23;
      if ( !*(&v46.__align + 1) )
        goto LABEL_12;
      goto LABEL_102;
    }
    goto LABEL_101;
  }
  sub_50FE8((__int64)v57, (__int64)&v46, v10, v11, v12, v13, v14, v15);
  ptr = nullptr;
  v44 = 0;
  v45 = 0;
  if ( ((unsigned __int8)sub_5703C(&v46, (__int64)&ptr) & 1) == 0
    || (v44 ? (v29 = (char *)ptr) : (v29 = &byte_F154B),
        v23 = (*(__int64 (__fastcall **)(_DWORD *, char *))(*(_QWORD *)a2 + 32LL))(a2, v29),
        v30 = 0,
        (v28 = v23) == 0) )
  {
    v28 = 0;
    v30 = 1;
  }
  if ( ptr )
  {
    v44 = 0;
    qfree(ptr);
    ptr = nullptr;
    v45 = 0;
  }
  if ( v30 )
  {
    if ( (a2[2] & 0x20) == 0 )
      goto LABEL_98;
    goto LABEL_88;
  }
  v6 = v28;
LABEL_101:
  if ( *(&v46.__align + 1) )
  {
LABEL_102:
    sub_5A570(&v46.__align + 1, 0);
    qfree(*((void **)&v46.__align + 1));
    *(&v46.__align + 1) = 0;
    v46.__list.__prev = nullptr;
  }
LABEL_12:
  sub_4BE70(v57);
  sub_9DBBC();
  close_linput(v5);
  return v6;
}
// 5991C: too many cbuild loops
// 59970: variable 'v73' is possibly undefined
// 59AD0: variable 'v74' is possibly undefined
// 59DCC: variable 'v10' is possibly undefined
// 59DCC: variable 'v11' is possibly undefined
// 59DCC: variable 'v12' is possibly undefined
// 59DCC: variable 'v13' is possibly undefined
// 59DCC: variable 'v14' is possibly undefined
// 59DCC: variable 'v15' is possibly undefined
// 5A06C: variable 'v9' is possibly undefined
// 5A07C: variable 'v34' is possibly undefined
// 5A07C: variable 'v35' is possibly undefined
// 5A07C: variable 'v36' is possibly undefined
// 5A07C: variable 'v37' is possibly undefined
// 5A07C: variable 'v38' is possibly undefined
// 5A07C: variable 'v39' is possibly undefined
// 5A07C: variable 'v40' is possibly undefined
// 5A07C: variable 'v41' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 166A40: using guessed type __int64 qword_166A40;
// 168DF0: using guessed type char under_debugger;
