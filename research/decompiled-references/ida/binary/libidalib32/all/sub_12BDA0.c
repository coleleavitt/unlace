__int64 __fastcall sub_12BDA0(int a1, __int64 *a2)
{
  unsigned __int64 v3; // r12
  void (__fastcall **v4)(_QWORD *, __int64, int *); // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rsi
  void (__fastcall **v11)(__int64 *, __int64, void **); // rax
  const char *v12; // rdi
  __int64 v13; // rax
  __int64 srclang_parser; // rax
  __int64 v15; // rbx
  void (__fastcall *v16)(const char *, __int64); // rax
  const char *v17; // rdi
  __int64 v18; // rax
  char v19; // r13
  const char *cc_parm; // rax
  const char *v21; // rax
  size_t n; // [rsp+8h] [rbp-A0h]
  size_t na; // [rsp+8h] [rbp-A0h]
  const char *src; // [rsp+18h] [rbp-90h]
  const char *srca; // [rsp+18h] [rbp-90h]
  int v26; // [rsp+2Ch] [rbp-7Ch] BYREF
  void *v27; // [rsp+30h] [rbp-78h] BYREF
  __int128 v28; // [rsp+38h] [rbp-70h]
  void *v29; // [rsp+50h] [rbp-58h] BYREF
  __int128 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v3 = (unsigned int)(a1 + 1);
  v4 = (void (__fastcall **)(_QWORD *, __int64, int *))*a2;
  v31 = __readfsqword(0x28u);
  v6 = ((__int64 (__fastcall *)(__int64 *))v4[9])(a2);
  switch ( a1 )
  {
    case -1:
    case 1:
    case 19:
      (*(void (__fastcall **)(__int64 *, __int64, int *))*a2)(a2, 1, &v26);
      v7 = v26;
      if ( !v26 )
      {
        sub_128060((__int64 *)v6);
        v7 = v26;
      }
      if ( a1 == 1 )
      {
        v19 = *(_BYTE *)(**(_QWORD **)(v6 + 152) + v7);
        cc_parm = (const char *)cfg_get_cc_parm();
        v27 = nullptr;
        v28 = 0;
        if ( cc_parm )
        {
          src = cc_parm;
          n = strlen(cc_parm);
          v27 = (void *)qvector_reserve();
          *(_QWORD *)&v28 = n + 1;
          memmove(v27, src, n);
          *((_BYTE *)v27 + n) = 0;
        }
        (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 8))(a2, 13, &v27);
        v21 = (const char *)cfg_get_cc_parm();
        v29 = nullptr;
        v30 = 0;
        if ( v21 )
        {
          srca = v21;
          na = strlen(v21);
          v29 = (void *)qvector_reserve();
          *(_QWORD *)&v30 = na + 1;
          memmove(v29, srca, na);
          *((_BYTE *)v29 + na) = 0;
        }
        (*(void (__fastcall **)(__int64 *, __int64, void **))(*a2 + 8))(a2, 14, &v29);
        if ( v26 > 0 )
        {
          calc_default_sizeof_ldbl();
          setinf();
          if ( (unsigned __int8)sub_128F90((__int64 *)v6) )
          {
            (*(void (__fastcall **)(__int64 *, __int64))(*a2 + 56))(a2, 16);
            sub_125140(a2, v19);
          }
          sub_125330((__int64)a2);
        }
        if ( v29 )
        {
          *(_QWORD *)&v30 = 0;
          qfree();
        }
        if ( v27 )
        {
          *(_QWORD *)&v28 = 0;
          qfree();
        }
        LODWORD(v7) = v26;
      }
      v8 = 2;
      while ( 1 )
      {
        v9 = v8++;
        (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, v9, (int)v7 > 0);
        if ( v8 == 16 )
          break;
        LODWORD(v7) = v26;
      }
      sub_12AA60(v6, a2, a1);
      if ( a1 == 1 )
        goto LABEL_9;
      goto LABEL_10;
    case 16:
      (*(void (__fastcall **)(__int64 *, __int64, void **))*a2)(a2, 16, &v27);
      if ( (unsigned __int8)sub_128D50(v6, (int)v27) )
      {
        (*(void (__fastcall **)(__int64 *, __int64, void **))*a2)(a2, 1, &v29);
        sub_125140(a2, *(_BYTE *)(**(_QWORD **)(v6 + 152) + (int)v29));
        sub_125330((__int64)a2);
      }
      goto LABEL_9;
    case 17:
      v29 = nullptr;
      v30 = 0;
      if ( (unsigned __int8)sub_12BBB0((_QWORD *)v6, (__int64 *)&v29) )
      {
        LOWORD(v27) = sub_1294B0(v6);
        v17 = s1;
        if ( (_QWORD)v30 )
          v17 = (const char *)v29;
        if ( (unsigned int)sub_8F730((__int64)v17, &v27) )
          sub_129840(v6, (unsigned __int16)v27);
      }
      if ( v29 )
      {
        *(_QWORD *)&v30 = 0;
        qfree();
      }
LABEL_9:
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 8))(a2, 18, v6 + 120);
LABEL_10:
      if ( (unsigned int)v3 <= 0x11 )
        goto LABEL_11;
      return 1;
    case 22:
      v11 = (void (__fastcall **)(__int64 *, __int64, void **))*a2;
      LODWORD(v29) = 0;
      (*v11)(a2, 19, &v29);
      v12 = s1;
      v13 = **(_QWORD **)(v6 + 160) + 24LL * (int)v29;
      if ( *(_QWORD *)(v13 + 8) )
        v12 = *(const char **)v13;
      srclang_parser = find_srclang_parser();
      v15 = srclang_parser;
      if ( !srclang_parser )
        goto LABEL_47;
      v16 = *(void (__fastcall **)(const char *, __int64))(srclang_parser + 56);
      if ( !v16 )
      {
        if ( !under_debugger )
        {
          interr();
LABEL_47:
          if ( !under_debugger )
            interr();
        }
        BUG();
      }
      v16(v12, 1);
      --*(_DWORD *)(v15 + 12);
      break;
    case 23:
      sub_12AA60(v6, a2, 23);
      return 1;
    default:
      if ( (unsigned int)v3 <= 0x11 )
      {
        v18 = 131077;
        if ( _bittest64(&v18, v3) )
        {
LABEL_11:
          (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 16, *(_QWORD *)(v6 + 32) != 0);
          (*(void (__fastcall **)(__int64 *, __int64, bool))(*a2 + 16))(a2, 17, *(_QWORD *)(v6 + 80) != 0);
          if ( a1 == 1 )
            (*(void (__fastcall **)(__int64 *, __int64, __int64))(*a2 + 8))(a2, 16, v6 + 144);
        }
      }
      break;
  }
  return 1;
}

