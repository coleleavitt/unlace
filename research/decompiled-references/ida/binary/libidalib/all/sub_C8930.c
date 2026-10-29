__int64 __fastcall sub_C8930(__int64 a1, __int64 *a2, double a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  bool v5; // zf
  __int64 v6; // r12
  int v7; // eax
  int v8; // eax
  int v9; // eax
  unsigned int v10; // r14d
  int v11; // r13d
  const char *v12; // rdx
  const char *v13; // rsi
  int v14; // eax
  char v16; // [rsp+3h] [rbp-35h] BYREF
  int v17; // [rsp+4h] [rbp-34h]
  unsigned __int64 v18; // [rsp+8h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( HIDWORD(qword_2524A0)
    && (v3 = qword_252590, v4 = qword_252590 + ((_QWORD)xmmword_252598 << 8), qword_252590 != v4) )
  {
    while ( HIDWORD(qword_2524A0) != *(_DWORD *)v3 )
    {
      v3 += 256;
      if ( v4 == v3 )
        goto LABEL_17;
    }
    if ( v3 )
    {
      if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) != 5 )
        goto LABEL_55;
      *(_QWORD *)(v3 + 224) = xmmword_2524B8;
    }
  }
  else
  {
LABEL_17:
    v3 = 0;
  }
  v5 = *(_DWORD *)(a1 + 44) == 3;
  v6 = qword_2524A8;
  v16 = 1;
  if ( !v5 )
    v6 = *(_QWORD *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 68);
  if ( v7 > 0 )
  {
    *(_DWORD *)(a1 + 68) = v7 - 1;
    v16 = 0;
    mark_builtin_widgets();
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16) <= 1u )
      goto LABEL_20;
    v8 = *(_DWORD *)(a1 + 72);
    if ( (v8 & 4) == 0 )
    {
      if ( (v8 & 0x10) != 0 )
        goto LABEL_20;
      goto LABEL_15;
    }
    invalidate_dbgmem_contents();
    invalidate_dbgmem_config();
    sub_C8550();
    is_mapped();
    if ( (*(_BYTE *)(a1 + 72) & 0x10) == 0 )
    {
LABEL_15:
      if ( !(unsigned __int8)sub_98C00(a1, v6, (bool *)&v16, "breakpoint") )
      {
        byte_252748 = 0;
        return v18 - __readfsqword(0x28u);
      }
    }
  }
  if ( !v16 )
    return v18 - __readfsqword(0x28u);
LABEL_20:
  a2 = &qword_2524A0;
  sub_C14A0();
  v9 = *(_DWORD *)(a1 + 72);
  if ( (v9 & 1) != 0 )
    byte_252748 = 0;
  if ( (dword_245190 & 0x10) != 0 && (*(_BYTE *)(a1 + 76) & 2) != 0 )
  {
    if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) == 5 )
    {
      a2 = (__int64 *)qword_2524A8;
      sub_8F740((__int64)"%a: hit %sbreakpoint", a3, (const char *)qword_2524A8);
      if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) == 5 )
      {
        a2 = (__int64 *)xmmword_2524B8;
        if ( xmmword_2524B8 != (void *)-1LL )
          sub_8F740((__int64)" -> %a", a3);
        sub_8F740((__int64)"\n");
        v9 = *(_DWORD *)(a1 + 72);
        goto LABEL_29;
      }
    }
LABEL_55:
    sub_B8350();
    goto LABEL_56;
  }
LABEL_29:
  if ( (v9 & 0x1C0) == 0 || !v3 )
    goto LABEL_39;
  if ( (v9 & 0x40) != 0 )
  {
    v10 = 2;
    goto LABEL_36;
  }
  if ( (v9 & 0x80u) != 0 )
  {
    v10 = 4;
    goto LABEL_36;
  }
  if ( (v9 & 0x100) != 0 )
  {
    v10 = 8;
LABEL_36:
    v11 = 1;
    v12 = "En";
    if ( (v9 & 0x20) == 0 )
    {
      v11 = 0;
      v12 = "Dis";
    }
    sub_8F740((__int64)"%a: %sabling %s tracing\n", a3, (const char *)qword_2524A8, v12);
    sub_A2380((unsigned int *)v3, v10, v11, 1);
LABEL_39:
    a2 = (__int64 *)HIDWORD(qword_2524A0);
    v17 = -1;
    sub_C8830();
    if ( (HIDWORD(qword_2524B0) & 0xFFFFFFF) == 5 )
    {
      if ( v17 == -1 )
      {
        if ( byte_252748 || xmmword_2524B8 == (void *)-1LL || *(_DWORD *)(a1 + 64) == 8 )
        {
          v17 = 0;
          goto LABEL_45;
        }
        v17 = 1;
        v14 = dword_2526C0;
        v13 = "Hardware";
      }
      else
      {
        if ( !v17 )
        {
LABEL_45:
          nullsub_13();
          return v18 - __readfsqword(0x28u);
        }
        v13 = "Software";
        v14 = dword_2526C0;
        if ( xmmword_2524B8 != (void *)-1LL )
          v13 = "Hardware";
      }
      sub_C64D0("ICON INFO\nAUTOHIDE DATABASE\n%s breakpoint at %0*a has been triggered", v13, v14, a3);
      goto LABEL_45;
    }
    goto LABEL_55;
  }
LABEL_56:
  if ( under_debugger )
    BUG();
  interr();
  return sub_C8D10(40243, a2);
}

