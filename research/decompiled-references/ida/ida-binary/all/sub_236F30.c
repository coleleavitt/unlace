__int64 __fastcall sub_236F30(
        const char *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10,
        __int64 a11,
        __int64 a12)
{
  __int64 v12; // rdx
  const char *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // r12
  int v18; // eax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  int v24; // eax
  const char *v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __m128 v28; // xmm4
  __m128 v29; // xmm5
  unsigned int v30; // r14d
  char *v31; // rcx
  int v32; // r13d
  const char *v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  const char *v38; // rsi
  unsigned int v39; // eax
  double v41; // xmm4_8
  double v42; // xmm5_8
  char v43; // [rsp+0h] [rbp-38h]
  char v44; // [rsp+0h] [rbp-38h]
  char v45; // [rsp+3h] [rbp-35h] BYREF
  int v46; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v47; // [rsp+8h] [rbp-30h]

  v12 = HIDWORD(qword_8CC340);
  v47 = __readfsqword(0x28u);
  v13 = a1;
  if ( HIDWORD(qword_8CC340)
    && (v14 = qword_8CC430, v15 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8), qword_8CC430 != v15) )
  {
    while ( HIDWORD(qword_8CC340) != *(_DWORD *)v14 )
    {
      v14 += 256;
      if ( v15 == v14 )
        goto LABEL_17;
    }
    if ( v14 )
    {
      if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) != 5 )
        goto LABEL_57;
      *(_QWORD *)(v14 + 224) = xmmword_8CC358;
    }
  }
  else
  {
LABEL_17:
    v14 = 0;
  }
  v16 = *((_DWORD *)a1 + 11) == 3;
  v17 = qword_8CC348;
  v45 = 1;
  if ( !v16 )
    v17 = *((_QWORD *)a1 + 7);
  v18 = *((_DWORD *)a1 + 17);
  if ( v18 > 0 )
  {
    *((_DWORD *)a1 + 17) = v18 - 1;
    v45 = 0;
    mark_builtin_widgets(0x2000, 0, 1);
  }
  else
  {
    if ( *((_QWORD *)a1 + 2) <= 1u )
      goto LABEL_20;
    v19 = *((_DWORD *)a1 + 18);
    if ( (v19 & 4) == 0 )
    {
      if ( (v19 & 0x10) != 0 )
        goto LABEL_20;
      goto LABEL_15;
    }
    invalidate_dbgmem_contents(-1, 0);
    *(double *)a3.m128_u64 = invalidate_dbgmem_config();
    sub_236B50(*(double *)a3.m128_u64, a4, a5, a6, v41, v42, a9, a10);
    is_mapped(0);
    if ( (a1[72] & 0x10) == 0 )
    {
LABEL_15:
      if ( !(unsigned __int8)sub_19DBE0(
                               (__int64)a1,
                               v17,
                               (bool *)&v45,
                               (__int64)"breakpoint",
                               *(double *)a3.m128_u64,
                               a4,
                               a5,
                               a6,
                               a7,
                               a8,
                               a9,
                               a10) )
      {
        byte_8CC5EC = 0;
        return v47 - __readfsqword(0x28u);
      }
    }
  }
  if ( !v45 )
    return v47 - __readfsqword(0x28u);
LABEL_20:
  a2 = (__int64)&qword_8CC340;
  a1 = byte_9 + 4;
  sub_22FC60(0xDu, &qword_8CC340, v13);
  v24 = *((_DWORD *)v13 + 18);
  if ( (v24 & 1) != 0 )
    byte_8CC5EC = 0;
  if ( (dword_8BA5B0 & 0x10) != 0 && (v13[76] & 2) != 0 )
  {
    if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 5 )
    {
      v25 = (const char *)&unk_5C2F25;
      a2 = qword_8CC348;
      if ( xmmword_8CC358 != (void *)-1LL )
        v25 = "hardware ";
      a1 = "%a: hit %sbreakpoint";
      sub_169700(
        (int)"%a: hit %sbreakpoint",
        qword_8CC348,
        (__int64)v25,
        a12,
        v20,
        v21,
        a3,
        a4,
        a5,
        a6,
        v22,
        v23,
        a9,
        a10,
        v43);
      if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 5 )
      {
        a2 = (__int64)xmmword_8CC358;
        if ( xmmword_8CC358 != (void *)-1LL )
          sub_169700((int)" -> %a", (__int64)xmmword_8CC358, v12, a12, v26, v27, a3, a4, a5, a6, v28, v29, a9, a10, v44);
        sub_169700((int)"\n", a2, v12, a12, v26, v27, a3, a4, a5, a6, v28, v29, a9, a10, v44);
        v24 = *((_DWORD *)v13 + 18);
        goto LABEL_31;
      }
    }
LABEL_57:
    sub_2276C0(*(double *)a3.m128_u64, (__int64)a1, a2, v12, a12);
    goto LABEL_58;
  }
LABEL_31:
  if ( (v24 & 0x1C0) == 0 || !v14 )
    goto LABEL_41;
  if ( (v24 & 0x40) != 0 )
  {
    v30 = 2;
    v31 = "instruction";
    goto LABEL_38;
  }
  if ( (v24 & 0x80u) != 0 )
  {
    v30 = 4;
    v31 = "function";
    goto LABEL_38;
  }
  if ( (v24 & 0x100) != 0 )
  {
    v30 = 8;
    v31 = "basic block";
LABEL_38:
    v32 = 1;
    v33 = "En";
    if ( (v24 & 0x20) == 0 )
    {
      v32 = 0;
      v33 = "Dis";
    }
    sub_169700(
      (int)"%a: %sabling %s tracing\n",
      qword_8CC348,
      (__int64)v33,
      (__int64)v31,
      v20,
      v21,
      a3,
      a4,
      a5,
      a6,
      v22,
      v23,
      a9,
      a10,
      v43);
    sub_210D40((unsigned int *)v14, v30, v32, 1);
LABEL_41:
    a2 = HIDWORD(qword_8CC340);
    a1 = byte_9 + 3;
    v46 = -1;
    sub_236E30(0xCu, HIDWORD(qword_8CC340), v17, &v46);
    if ( (HIDWORD(qword_8CC350) & 0xFFFFFFF) == 5 )
    {
      if ( v46 == -1 )
      {
        if ( byte_8CC5EC || xmmword_8CC358 == (void *)-1LL || *((_DWORD *)v13 + 16) == 8 )
        {
          v46 = 0;
          goto LABEL_47;
        }
        v46 = 1;
        v39 = dword_8CC560;
        v38 = "Hardware";
      }
      else
      {
        if ( !v46 )
        {
LABEL_47:
          sub_19A650();
          return v47 - __readfsqword(0x28u);
        }
        v38 = "Software";
        v39 = dword_8CC560;
        if ( xmmword_8CC358 != (void *)-1LL )
          v38 = "Hardware";
      }
      sub_233B00(
        (int)"ICON INFO\nAUTOHIDE DATABASE\n%s breakpoint at %0*a has been triggered",
        (__int64)v38,
        v39,
        v17,
        v34,
        v35,
        a3,
        a4,
        a5,
        a6,
        v36,
        v37,
        a9,
        a10,
        v43);
      goto LABEL_47;
    }
    goto LABEL_57;
  }
LABEL_58:
  if ( under_debugger )
    BUG();
  interr(40243, a2, v12, a12, *(double *)a3.m128_u64);
  return sub_237310();
}
