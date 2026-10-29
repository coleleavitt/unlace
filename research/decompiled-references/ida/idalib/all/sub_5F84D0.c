__int64 __fastcall sub_5F84D0(
        __int64 a1,
        _BYTE *a2,
        const char *a3,
        int a4,
        _QWORD *a5,
        const char *a6,
        double a7,
        double a8,
        const char *a9)
{
  char *v12; // r14
  const char *v13; // rsi
  unsigned int v14; // r13d
  __int64 v15; // rdi
  void (*v16)(const char *, ...); // r12
  int v17; // eax
  __int64 v19; // rbx
  int v20; // [rsp+4h] [rbp-DCh]
  const char *v22; // [rsp+10h] [rbp-D0h]
  int v23; // [rsp+20h] [rbp-C0h]
  void *v26; // [rsp+30h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+38h] [rbp-A8h]
  void *v28; // [rsp+50h] [rbp-90h] BYREF
  __int128 v29; // [rsp+58h] [rbp-88h]
  void *ptr; // [rsp+70h] [rbp-70h] BYREF
  __int128 v31; // [rsp+78h] [rbp-68h]
  void *v32; // [rsp+90h] [rbp-50h] BYREF
  __int128 v33; // [rsp+98h] [rbp-48h]
  unsigned __int64 v34; // [rsp+A8h] [rbp-38h]

  v34 = __readfsqword(0x28u);
  ptr = nullptr;
  v26 = nullptr;
  v28 = nullptr;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  if ( !(unsigned __int8)serialize_tinfo(&v26, &v28, &ptr, a2, 272) )
  {
    v19 = dstr_tinfo(a2);
    set_error_string(0, v19);
    sub_368890();
  }
  v12 = (char *)v26;
  v22 = (const char *)v28;
  v23 = *(_DWORD *)(a1 + 744) & 4;
  v20 = *(_DWORD *)(a1 + 744) & 2;
  if ( v20 )
  {
    if ( a4 == 1 || (v13 = "var", !a6) )
      v13 = "type";
    (*(void (**)(const char *, ...))(a1 + 272))("save_%s struni_tag=%s name=%s\n", v13, a3, a6);
    sub_6A7B30(*(_QWORD *)(a1 + 272), "descr", v12);
    sub_6A7B30(*(_QWORD *)(a1 + 272), "fldnames", v22);
    sub_6B1A00(*(_QWORD *)(a1 + 272), (int)v12);
    sub_6A7BC0(*(_QWORD *)(a1 + 272), "fields", v22);
  }
  if ( a3 )
  {
    if ( v23 )
      (*(void (**)(const char *, ...))(a1 + 272))("// struct tag: '%s'\n", a3);
    v32 = nullptr;
    copy_tinfo_t(&v32);
    if ( (*a2 & 0x40) != 0 )
    {
      set_tinfo_property((unsigned __int64 *)&v32, 6u, 64);
      *v12 &= ~0x40u;
    }
    v14 = sub_5F7CE0(a1, a3, (__int64)&v32, (__int64)v12, a9, v22, (const char *)ptr);
    if ( v14 )
    {
      clear_tinfo_t(&v32);
      goto LABEL_30;
    }
    if ( (*a2 & 0x40) != 0 )
      *v12 |= 0x40u;
    clear_tinfo_t(&v32);
  }
  if ( a4 == 1 )
  {
    if ( v23 )
      (*(void (**)(const char *, ...))(a1 + 272))("// typedef: %s = ", a6);
    v14 = sub_5F7CE0(a1, a6, (__int64)a2, (__int64)v12, a9, v22, (const char *)ptr);
LABEL_18:
    if ( v14 )
      goto LABEL_30;
    goto LABEL_19;
  }
  if ( a6 || *(_DWORD *)(a1 + 220) == 2 )
  {
    v14 = sub_5F8170(a1, a6, a4, (__int64)a5, (__int64)a2, v12, 0.0, a8, (__int64)a9, (int)v22, (__int64)ptr);
    goto LABEL_18;
  }
LABEL_19:
  if ( (*(_BYTE *)(a1 + 744) & 0x10) != 0 && (*v12 != 13 || v12[1] != 1) || v23 )
  {
    v32 = nullptr;
    if ( a4 == 1 )
      a6 = nullptr;
    v33 = 0;
    if ( !(unsigned __int8)print_tinfo(
                             (unsigned int)&v32,
                             (unsigned int)"// ",
                             2,
                             60,
                             1,
                             (_DWORD)a2,
                             (__int64)a6,
                             (__int64)a9) )
    {
      if ( !under_debugger )
        interr(905);
      BUG();
    }
    (*(void (**)(const char *, ...))(a1 + 272))("%s\n", (const char *)v32);
    if ( a5 )
      (*(void (**)(const char *, ...))(a1 + 272))("// = 0x%llX\n", *a5);
    if ( v20 )
    {
      (*(void (__fastcall **)(const char *, double))(a1 + 272))("//-------------------\n", 0.0);
      if ( v32 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v32);
      }
      goto LABEL_29;
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32);
    }
  }
  else if ( v20 )
  {
LABEL_29:
    v15 = *(_QWORD *)(a1 + 248);
    v32 = v12;
    v16 = *(void (**)(const char *, ...))(a1 + 272);
    v17 = sub_56BDB0(v15, (__int64 *)&v32, nullptr, 0.0, a8);
    v16("sizeof=%d\n", v17);
    v14 = 0;
    goto LABEL_30;
  }
  v14 = 0;
LABEL_30:
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28);
  }
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  return v14;
}
