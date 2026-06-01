__int64 __fastcall sub_5DC630(
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
  int v19; // [rsp+4h] [rbp-DCh]
  const char *v21; // [rsp+10h] [rbp-D0h]
  int v22; // [rsp+20h] [rbp-C0h]
  void *v25; // [rsp+30h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+38h] [rbp-A8h]
  void *v27; // [rsp+50h] [rbp-90h] BYREF
  __int128 v28; // [rsp+58h] [rbp-88h]
  void *ptr; // [rsp+70h] [rbp-70h] BYREF
  __int128 v30; // [rsp+78h] [rbp-68h]
  void *v31; // [rsp+90h] [rbp-50h] BYREF
  __int128 v32; // [rsp+98h] [rbp-48h]
  unsigned __int64 v33; // [rsp+A8h] [rbp-38h]

  v33 = __readfsqword(0x28u);
  ptr = nullptr;
  v25 = nullptr;
  v27 = nullptr;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  if ( !(unsigned __int8)serialize_tinfo(&v25, &v27, &ptr, a2, 272) )
  {
    dstr_tinfo(a2);
    set_error_string();
    sub_365330();
  }
  v12 = (char *)v25;
  v21 = (const char *)v27;
  v22 = *(_DWORD *)(a1 + 728) & 4;
  v19 = *(_DWORD *)(a1 + 728) & 2;
  if ( v19 )
  {
    if ( a4 == 1 || (v13 = "var", !a6) )
      v13 = "type";
    (*(void (**)(const char *, ...))(a1 + 264))("save_%s struni_tag=%s name=%s\n", v13, a3, a6);
    sub_6873F0(*(_QWORD *)(a1 + 264), "descr", v12);
    sub_6873F0(*(_QWORD *)(a1 + 264), "fldnames", v21);
    sub_691220(*(_QWORD *)(a1 + 264), (int)v12);
    sub_687480(*(_QWORD *)(a1 + 264), "fields", v21);
  }
  if ( a3 )
  {
    if ( v22 )
      (*(void (**)(const char *, ...))(a1 + 264))("// struct tag: '%s'\n", a3);
    v31 = nullptr;
    copy_tinfo_t(&v31);
    if ( (*a2 & 0x40) != 0 )
    {
      set_tinfo_property(&v31, 6, 64);
      *v12 &= ~0x40u;
    }
    v14 = sub_5DBE40(a1, a3, (__int64)&v31, (__int64)v12, a9, v21, (const char *)ptr);
    if ( v14 )
    {
      clear_tinfo_t(&v31);
      goto LABEL_30;
    }
    if ( (*a2 & 0x40) != 0 )
      *v12 |= 0x40u;
    clear_tinfo_t(&v31);
  }
  if ( a4 == 1 )
  {
    if ( v22 )
      (*(void (**)(const char *, ...))(a1 + 264))("// typedef: %s = ", a6);
    v14 = sub_5DBE40(a1, a6, (__int64)a2, (__int64)v12, a9, v21, (const char *)ptr);
LABEL_18:
    if ( v14 )
      goto LABEL_30;
    goto LABEL_19;
  }
  if ( a6 || *(_DWORD *)(a1 + 212) == 2 )
  {
    v14 = sub_5DC2D0(a1, a6, a4, (__int64)a5, (__int64)a2, v12, 0.0, a8, (__int64)a9, (int)v21, (__int64)ptr);
    goto LABEL_18;
  }
LABEL_19:
  if ( (*(_BYTE *)(a1 + 728) & 0x10) != 0 && (*v12 != 13 || v12[1] != 1) || v22 )
  {
    v31 = nullptr;
    if ( a4 == 1 )
      a6 = nullptr;
    v32 = 0;
    if ( !(unsigned __int8)print_tinfo((int)&v31, (int)"// ", 2, 60, 1, (int)a2, (__int64)a6, (__int64)a9) )
    {
      if ( !under_debugger )
        interr(905);
      BUG();
    }
    (*(void (**)(const char *, ...))(a1 + 264))("%s\n", (const char *)v31);
    if ( a5 )
      (*(void (**)(const char *, ...))(a1 + 264))("// = 0x%llX\n", *a5);
    if ( v19 )
    {
      (*(void (__fastcall **)(const char *, double))(a1 + 264))("//-------------------\n", 0.0);
      if ( v31 )
      {
        *(_QWORD *)&v32 = 0;
        qfree(v31);
      }
      goto LABEL_29;
    }
    if ( v31 )
    {
      *(_QWORD *)&v32 = 0;
      qfree(v31);
    }
  }
  else if ( v19 )
  {
LABEL_29:
    v15 = *(_QWORD *)(a1 + 240);
    v31 = v12;
    v16 = *(void (**)(const char *, ...))(a1 + 264);
    v17 = sub_552550(v15, (__int64 *)&v31, nullptr, 0.0, a8);
    v16("sizeof=%d\n", v17);
    v14 = 0;
    goto LABEL_30;
  }
  v14 = 0;
LABEL_30:
  if ( ptr )
  {
    *(_QWORD *)&v30 = 0;
    qfree(ptr);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25);
  }
  return v14;
}

