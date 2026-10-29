__int64 __fastcall sub_C74B0(__int64 a1, unsigned __int64 a2, double a3)
{
  unsigned int *v3; // rbx
  unsigned int *v4; // rax
  bool v5; // zf
  unsigned int v6; // r12d
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
  if ( HIDWORD(qword_251320)
    && (v3 = (unsigned int *)qword_251410,
        v4 = (unsigned int *)(qword_251410 + 232 * xmmword_251418),
        (unsigned int *)qword_251410 != v4) )
  {
    while ( HIDWORD(qword_251320) != *v3 )
    {
      v3 += 58;
      if ( v4 == v3 )
        goto LABEL_17;
    }
    if ( v3 )
    {
      if ( (qword_251330 & 0xFFFFFFF) != 5 )
        goto LABEL_55;
      v3[51] = HIDWORD(qword_251330);
    }
  }
  else
  {
LABEL_17:
    v3 = nullptr;
  }
  v5 = *(_DWORD *)(a1 + 40) == 3;
  v6 = qword_251328;
  v16 = 1;
  if ( !v5 )
    v6 = *(_DWORD *)(a1 + 52);
  v7 = *(_DWORD *)(a1 + 60);
  if ( v7 > 0 )
  {
    *(_DWORD *)(a1 + 60) = v7 - 1;
    v16 = 0;
    mark_builtin_widgets();
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16) <= 1u )
      goto LABEL_20;
    v8 = *(_DWORD *)(a1 + 64);
    if ( (v8 & 4) == 0 )
    {
      if ( (v8 & 0x10) != 0 )
        goto LABEL_20;
      goto LABEL_15;
    }
    invalidate_dbgmem_contents();
    invalidate_dbgmem_config();
    sub_C70D0();
    is_mapped();
    if ( (*(_BYTE *)(a1 + 64) & 0x10) == 0 )
    {
LABEL_15:
      if ( !(unsigned __int8)sub_98B20(a1, v6, (bool *)&v16, "breakpoint") )
      {
        byte_2515A0 = 0;
        return v18 - __readfsqword(0x28u);
      }
    }
  }
  if ( !v16 )
    return v18 - __readfsqword(0x28u);
LABEL_20:
  a2 = (unsigned __int64)&qword_251320;
  sub_C0300();
  v9 = *(_DWORD *)(a1 + 64);
  if ( (v9 & 1) != 0 )
    byte_2515A0 = 0;
  if ( (dword_24412C & 0x10) != 0 && (*(_BYTE *)(a1 + 68) & 2) != 0 )
  {
    if ( (qword_251330 & 0xFFFFFFF) == 5 )
    {
      a2 = (unsigned int)qword_251328;
      sub_8F660((__int64)"%a: hit %sbreakpoint", a3, (const char *)(unsigned int)qword_251328);
      if ( (qword_251330 & 0xFFFFFFF) == 5 )
      {
        a2 = HIDWORD(qword_251330);
        if ( HIDWORD(qword_251330) != -1 )
          sub_8F660((__int64)" -> %a", a3);
        sub_8F660((__int64)"\n");
        v9 = *(_DWORD *)(a1 + 64);
        goto LABEL_29;
      }
    }
LABEL_55:
    sub_B7DE0();
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
    sub_8F660((__int64)"%a: %sabling %s tracing\n", a3, (const char *)(unsigned int)qword_251328, v12);
    sub_A2020(v3, v10, v11, 1);
LABEL_39:
    a2 = HIDWORD(qword_251320);
    v17 = -1;
    sub_C73B0();
    if ( (qword_251330 & 0xFFFFFFF) == 5 )
    {
      if ( v17 == -1 )
      {
        if ( byte_2515A0 || HIDWORD(qword_251330) == -1 || *(_DWORD *)(a1 + 56) == 8 )
        {
          v17 = 0;
          goto LABEL_45;
        }
        v17 = 1;
        v14 = dword_25153C;
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
        v14 = dword_25153C;
        if ( HIDWORD(qword_251330) != -1 )
          v13 = "Hardware";
      }
      sub_C5070("ICON INFO\nAUTOHIDE DATABASE\n%s breakpoint at %0*a has been triggered", v13, v14, a3);
      goto LABEL_45;
    }
    goto LABEL_55;
  }
LABEL_56:
  if ( under_debugger )
    BUG();
  interr();
  return sub_C7890(40243, a2);
}

