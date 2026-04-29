__int64 __fastcall sub_394740(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rbp
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  char *v10; // rsi
  int v11; // eax
  unsigned int v13; // r14d
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rsi
  const char *v18; // rax
  const char *v19; // r15
  size_t v20; // rax
  size_t v21; // r14
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rsi
  int v25; // edx
  const char *v26; // rsi
  __int64 *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 idati; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // r13d
  _DWORD *v36; // rdi
  __int64 v37; // rsi
  unsigned int v38; // eax
  __int64 v39; // r8
  __int64 v40; // r9
  const char *v41; // rsi
  signed int v42; // eax
  int v43; // eax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r14
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  _QWORD *v55; // rax
  __int64 v56; // r8
  __int64 v57; // r9
  int v58; // eax
  _QWORD *v59; // rax
  void *v60; // rdi
  size_t v61; // rdx
  __int64 local_types_tlc; // rax
  unsigned int v63; // eax
  __int64 v64; // r9
  __int64 v65; // [rsp+0h] [rbp-A8h]
  __int64 v66; // [rsp+0h] [rbp-A8h]
  __int64 v67; // [rsp+0h] [rbp-A8h]
  char *v68; // [rsp+8h] [rbp-A0h]
  size_t v69; // [rsp+8h] [rbp-A0h]
  __int64 v70; // [rsp+8h] [rbp-A0h]
  __int64 v71; // [rsp+10h] [rbp-98h]
  __int64 v72; // [rsp+10h] [rbp-98h]
  __int64 v73; // [rsp+10h] [rbp-98h]
  __int64 v74; // [rsp+18h] [rbp-90h] BYREF
  __int64 v75; // [rsp+20h] [rbp-88h] BYREF
  __int64 v76; // [rsp+28h] [rbp-80h] BYREF
  void *dest; // [rsp+30h] [rbp-78h] BYREF
  __int128 v78; // [rsp+38h] [rbp-70h]
  unsigned __int64 v79; // [rsp+50h] [rbp-58h] BYREF
  __int128 v80; // [rsp+58h] [rbp-50h]
  unsigned __int64 v81; // [rsp+68h] [rbp-40h]

  LODWORD(v3) = a2;
  v81 = __readfsqword(0x28u);
  v74 = -1;
  if ( !(unsigned __int8)sub_385410(a1, a2) )
    goto LABEL_17;
  v9 = *(_DWORD *)(a1 + 80);
  if ( v9 == 1 )
  {
    v33 = *(_QWORD *)(a1 + 88);
    if ( *(_DWORD *)(v33 + 8) != 65 )
      goto LABEL_4;
    v34 = *(_QWORD *)(*(_QWORD *)(v33 + 24) + 432LL) + 104LL * *(int *)(v33 + 32);
  }
  else
  {
    if ( v9 != 2 )
      goto LABEL_4;
    v34 = *(_QWORD *)(a1 + 88);
  }
  if ( !v34 )
    goto LABEL_4;
  if ( *(_DWORD *)v34 == 1 )
  {
    v45 = sub_1CAED0(*(_QWORD **)(a1 + 24), *(_QWORD *)(v34 + 8));
    v50 = v45;
    if ( v45 >= 0 )
    {
      v76 = v45;
      v3 = *(_QWORD **)(a1 + 24);
      if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, void **, __int64, __int64, __int64, __int64))callui)(
                              1090,
                              &dest,
                              v46,
                              v47,
                              v48,
                              v49)
        && (unsigned __int8)callui(1091, &v79, v51, v52, v53, v54, v67, v70, v73, v74)
        && (unsigned __int8)sub_32C960(v3, &v76, v79, 0) )
      {
        v10 = (char *)dest + v76;
        v74 = (__int64)dest + v76;
        if ( (char *)dest + v76 != (void *)-1LL )
          goto LABEL_6;
      }
      else
      {
        v74 = -1;
      }
      v55 = sub_1C9B60(*(_QWORD *)(a1 + 24));
      LOBYTE(v3) = callui(79, 25, v55, v50, v56, v57, v67, v70, v73, v74) != 0;
      return (unsigned int)v3;
    }
    goto LABEL_4;
  }
  if ( *(_DWORD *)v34 != 3
    || (v35 = *(_DWORD *)(v34 + 88), v36 = *(_DWORD **)(*(_QWORD *)(a1 + 128) + 112LL), v35 != v36[21]) )
  {
LABEL_4:
    v10 = (char *)v74;
    goto LABEL_5;
  }
  v37 = *(unsigned int *)(v34 + 8);
  v79 = 0;
  v80 = 0;
  v38 = (*(__int64 (__fastcall **)(_DWORD *, __int64, _QWORD))(*(_QWORD *)v36 + 176LL))(v36, v37, v35);
  if ( get_reg_name(&v79, v38, (int)v35, 0xFFFFFFFFLL) > 0 )
  {
    v41 = s1;
    if ( (_QWORD)v80 )
      v41 = (const char *)v79;
    if ( (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                            1197,
                            v41,
                            &dest,
                            &callui,
                            v39,
                            v40) )
    {
      v10 = (char *)dest;
      if ( v79 )
      {
        v68 = (char *)dest;
        *(_QWORD *)&v80 = 0;
        qfree(v79);
        v10 = v68;
      }
      v74 = (__int64)v10;
LABEL_5:
      if ( v10 != (char *)-1LL )
      {
LABEL_6:
        LOBYTE(v11) = sub_3945B0(a1, (unsigned __int64)v10, -1, 0, 0, a3 | 1);
        LODWORD(v3) = v11;
        return (unsigned int)v3;
      }
      goto LABEL_52;
    }
  }
  if ( v79 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(v79);
  }
  v74 = -1;
LABEL_52:
  v42 = sub_3A6B80(a1);
  v43 = sub_385B70(*(_QWORD *)(a1 + 32), v42);
  if ( v43 != -1 )
  {
    LOBYTE(v44) = sub_3945B0(a1, **(_QWORD **)(a1 + 32), v43, 0, 0, a3 | 1);
    LODWORD(v3) = v44;
    return (unsigned int)v3;
  }
  v76 = 0;
  dest = (void *)-1LL;
  v13 = sub_3870B0(a1 + 80, (__int64)&v76);
  if ( v13 == -1 )
    v13 = sub_387350(a1 + 80, nullptr, &v76, (__int64 *)&dest);
  if ( (_BYTE)v76 )
  {
    v79 = -2;
    local_types_tlc = get_local_types_tlc();
    v63 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *, __int64 *, _QWORD, void *))(*(_QWORD *)local_types_tlc
                                                                                            + 104LL))(
            local_types_tlc,
            &v79,
            &v76,
            v13,
            dest);
    if ( v63 )
    {
      LOBYTE(v3) = callui(194, 10, v63, &v79, &callui, v64, v65, v68, v71, v74) != 0;
      clear_tinfo_t(&v76);
      return (unsigned int)v3;
    }
  }
  v14 = *(_DWORD *)(a1 + 80);
  if ( v14 != 3 )
  {
    v15 = -1;
    if ( v14 == 1 )
    {
      v16 = *(_QWORD *)(a1 + 88);
      if ( *(_DWORD *)(v16 + 8) == 64 )
        v15 = *(_QWORD *)(v16 + 24);
    }
    v74 = v15;
  }
  clear_tinfo_t(&v76);
LABEL_17:
  v10 = (char *)v74;
  if ( v74 != -1 || !*(_QWORD *)(a1 + 8) )
    goto LABEL_6;
  v17 = *(_QWORD *)(a1 + 8);
  v78 = 0;
  dest = nullptr;
  v18 = (const char *)callui(70, v17, (_DWORD)v3 != 0, v6, v7, v8, v65, v68, v71, v74);
  v19 = v18;
  if ( !v18 )
    goto LABEL_32;
  v20 = strlen(v18);
  v21 = v20;
  if ( v20 )
  {
    v60 = dest;
    v61 = v20 + 1;
    if ( *((_QWORD *)&v78 + 1) < v20 + 1 )
    {
      v69 = v20 + 1;
      dest = (void *)qvector_reserve(&dest, dest, v61, 1);
      v61 = v69;
      v60 = dest;
    }
    *(_QWORD *)&v78 = v61;
    memmove(v60, v19, v21);
    *((_BYTE *)dest + v21) = 0;
    if ( (unsigned __int64)v78 > 1 )
    {
      v22 = tag_remove(&dest, dest, 0);
      goto LABEL_23;
    }
  }
  else
  {
    *(_QWORD *)&v78 = 0;
  }
  v22 = 0;
LABEL_23:
  v23 = *(_DWORD *)(a1 + 48);
  if ( a3 | (unsigned int)v3
    || (v24 = *(_QWORD *)(a1 + 32), v25 = *(_DWORD *)(a1 + 44), v25 < *(_DWORD *)(v24 + 152))
    || (unsigned __int64)(v25 + 1) >= *(_QWORD *)(v24 + 136)
    || (int)v23 < v22 )
  {
    v79 = 0;
    v26 = s1;
    v80 = 0;
    if ( (_QWORD)v78 )
      v26 = (const char *)dest;
    v27 = (__int64 *)&v79;
    if ( extract_name(&v79, v26, v23) > 0 )
    {
      v26 = (const char *)v79;
      v27 = &v74;
      str2ea(&v74, v79, -1);
    }
    v75 = 0;
    idati = get_idati(v27, v26, v28, v29);
    LODWORD(v3) = sub_37E580((__int64)&v75, idati, (__int64)&v79);
    if ( (_BYTE)v3 )
    {
      v76 = -2;
      callui(194, 59, &v75, &v76, v31, v32, v66, v69, v72, v74);
      clear_tinfo_t(&v75);
      if ( v79 )
      {
        *(_QWORD *)&v80 = 0;
        qfree(v79);
      }
      goto LABEL_62;
    }
    clear_tinfo_t(&v75);
    if ( v79 )
    {
      *(_QWORD *)&v80 = 0;
      qfree(v79);
    }
LABEL_32:
    if ( dest )
    {
      *(_QWORD *)&v78 = 0;
      qfree(dest);
    }
    v10 = (char *)v74;
    goto LABEL_6;
  }
  LODWORD(v79) = 0;
  LOBYTE(v58) = sub_3857C0(a1, &v79, 0.0);
  LODWORD(v3) = v58;
  if ( (_BYTE)v58 )
  {
    v59 = (_QWORD *)operator new(8u);
    *v59 = off_4BA340;
    sub_381E40((__int64)v59, 0);
  }
LABEL_62:
  if ( dest )
  {
    *(_QWORD *)&v78 = 0;
    qfree(dest);
  }
  return (unsigned int)v3;
}
