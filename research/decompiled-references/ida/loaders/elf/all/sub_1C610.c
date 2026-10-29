const char *__fastcall sub_1C610(__int64 a1, char *a2, __int64 a3, unsigned int dword, double a5, double a6, double a7)
{
  char *v9; // rdi
  char *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // edx
  const char *result; // rax
  __int64 v17; // rax
  char *v18; // r13
  unsigned int v19; // eax
  __int64 v20; // rax
  char *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rdx
  unsigned __int8 v24; // cl
  __int64 v25; // r14
  unsigned __int16 v26; // ax
  char *v27; // rdx
  char **p_s1; // rsi
  const char *v29; // rdi
  char *v30; // rdx
  unsigned int v31; // edx
  char **v32; // rax
  __int64 v33; // rdx
  char **segm_by_name; // rax
  __int64 v35; // rdx
  struct _Unwind_Exception *v36; // rbx
  unsigned __int8 v37; // [rsp+Fh] [rbp-69h]
  unsigned __int8 v38; // [rsp+Fh] [rbp-69h]
  __int64 v39; // [rsp+10h] [rbp-68h] BYREF
  __int64 v40; // [rsp+18h] [rbp-60h] BYREF
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v42; // [rsp+28h] [rbp-50h]
  unsigned __int64 v43; // [rsp+38h] [rbp-40h]

  v9 = (char *)&qword_58;
  v11 = a2;
  v43 = __readfsqword(0x28u);
  v12 = sub_101F0(0x58u);
  if ( ((unsigned __int8)a2 & 3) != 2 || v12 == 1 )
  {
    v15 = dword >> 26;
    if ( dword > 0x5FFFFFFF )
    {
      if ( v15 - 32 > 0x17 )
        return "Invalid SDA21 relocation (incompatible insn)";
    }
    else if ( v15 > 0x13 )
    {
      if ( v12 != 1 )
        return "Invalid SDA21 relocation (incompatible insn)";
    }
    else if ( v15 - 10 > 5 )
    {
      return "Invalid SDA21 relocation (incompatible insn)";
    }
LABEL_9:
    v17 = *(_QWORD *)(a1 + 16);
    if ( !*(_BYTE *)(v17 + 248) || !*(_QWORD *)(v17 + 120) || *(_WORD *)(v17 + 520) != 1 )
    {
      v18 = (char *)(a3 - (__int16)dword);
      if ( (BYTE2(dword) & 0x1F) == 2 )
      {
        if ( *(_DWORD *)(get_ph(v9, a2, (__int16)dword) + 4) == 15 )
        {
          p_s1 = &s1;
          v29 = (_BYTE *)(&stru_BB8 + 8);
          s1 = (char *)-1LL;
          sub_101F0(0xBC0u, &s1);
          v30 = s1;
          if ( s1 != (char *)-1LL )
          {
            if ( v18 == s1 )
              goto LABEL_15;
            p_s1 = (char **)v11;
            v29 = "%a: invalid SDA21 relocation (SDA2_BASE %a+%X!=target %a)\n";
            sub_EAA0((__int64)"%a: invalid SDA21 relocation (SDA2_BASE %a+%X!=target %a)\n", a5, a6, (_DWORD)v11, a7);
          }
          if ( *(_DWORD *)(get_ph(v29, p_s1, v30) + 4) == 15 )
          {
            sub_101F0(0xBB9u, a3 - (__int16)dword, 0);
            goto LABEL_15;
          }
LABEL_77:
          v36 = (struct _Unwind_Exception *)sub_1AAC0();
          if ( s1 )
          {
            *(_QWORD *)&v42 = 0;
            qfree(s1);
          }
          _Unwind_Resume(v36);
        }
LABEL_76:
        sub_1AAE0();
        goto LABEL_77;
      }
      if ( (BYTE2(dword) & 0x1F) != 0xD )
      {
        if ( (dword & 0x1F0000) != 0 )
          return "Invalid SDA21 relocation (illegal reg)";
        if ( !v18 )
        {
LABEL_15:
          sub_42050(a1, (_DWORD)v11, a3, dword, 0, 1, (__int64)v18, 0, 2);
          return nullptr;
        }
        sub_EAA0((__int64)"%a: invalid SDA21 relocation (0+%X!=target %a)\n", a5, (_DWORD)v11, a6);
LABEL_38:
        v18 = nullptr;
        goto LABEL_15;
      }
      if ( *(_DWORD *)(get_ph(v9, a2, (__int16)dword) + 4) != 15 )
      {
LABEL_75:
        sub_1AB20((__int64)v9, (__int64)a2);
        goto LABEL_76;
      }
      a2 = (char *)&s1;
      v9 = (_BYTE *)(&stru_BB8 + 7);
      s1 = (char *)-1LL;
      sub_101F0(0xBBFu, &s1);
      v27 = s1;
      if ( s1 != (char *)-1LL )
      {
        if ( v18 == s1 )
          goto LABEL_15;
        a2 = v11;
        v9 = "%a: invalid SDA21 relocation (SDA_BASE %a+%X!=target %a)\n";
        sub_EAA0((__int64)"%a: invalid SDA21 relocation (SDA_BASE %a+%X!=target %a)\n", a5, a6, (_DWORD)v11, a7);
      }
      if ( *(_DWORD *)(get_ph(v9, a2, v27) + 4) == 15 )
      {
        sub_101F0(0xBBEu, a3 - (__int16)dword);
        goto LABEL_15;
      }
LABEL_74:
      sub_1AB00();
      goto LABEL_75;
    }
    s1 = nullptr;
    v42 = 0;
    v20 = getseg(a3);
    if ( get_segm_name(&s1, v20, 0) > 0 )
    {
      v18 = (char *)v42;
      if ( (_QWORD)v42 )
      {
        v21 = s1;
        a2 = ".sdata";
        v9 = s1;
        if ( strcmp(s1, ".sdata") )
        {
          a2 = ".sbss";
          v9 = v21;
          if ( strcmp(v21, ".sbss") )
          {
            v9 = v21;
            a2 = ".sdata2";
            if ( !strcmp(v21, ".sdata2") || (a2 = ".sbss2", v9 = v21, !strcmp(v21, ".sbss2")) )
            {
              if ( *(_DWORD *)(get_ph(v9, a2, v23) + 4) != 15 )
              {
LABEL_72:
                sub_1AAE0();
LABEL_73:
                sub_1AB00();
                goto LABEL_74;
              }
              a2 = (char *)&v40;
              v40 = -1;
              sub_101F0(0xBC0u, &v40);
              v18 = (char *)v40;
              if ( v40 != -1 )
              {
LABEL_30:
                v24 = 2;
                v25 = a3 - (_QWORD)v18;
                goto LABEL_31;
              }
              v9 = ".sdata2";
              segm_by_name = (char **)get_segm_by_name(".sdata2");
              if ( !segm_by_name )
              {
                v9 = ".sbss2";
                segm_by_name = (char **)get_segm_by_name(".sbss2");
              }
              v18 = *segm_by_name;
              if ( *(_DWORD *)(get_ph(v9, &v40, v35) + 4) == 15 )
              {
                sub_101F0(0xBB9u, v18, 0);
                goto LABEL_30;
              }
              sub_1AAC0();
LABEL_71:
              sub_1AB20((__int64)v9, (__int64)a2);
              goto LABEL_72;
            }
            goto LABEL_57;
          }
        }
        if ( *(_DWORD *)(get_ph(v9, a2, v22) + 4) != 15 )
          goto LABEL_71;
        a2 = (char *)&v39;
        v39 = -1;
        sub_101F0(0xBBFu, &v39);
        v18 = (char *)v39;
        if ( v39 == -1 )
        {
          v9 = ".sdata";
          v32 = (char **)get_segm_by_name(".sdata");
          if ( !v32 )
          {
            v9 = ".sbss";
            v32 = (char **)get_segm_by_name(".sbss");
          }
          v18 = *v32;
          if ( *(_DWORD *)(get_ph(v9, &v39, v33) + 4) != 15 )
            goto LABEL_73;
          sub_101F0(0xBBEu, v18);
        }
        v24 = 13;
        v25 = a3 - (_QWORD)v18;
      }
      else
      {
        v25 = a3;
        v24 = 0;
      }
LABEL_31:
      v26 = v25;
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 16) + 464LL) != 8 )
      {
        v25 = (int)v25;
        v26 = v25;
      }
      if ( (unsigned __int64)(v25 + 0x8000) > 0xFFFF )
      {
        v38 = v24;
        sub_EAA0((__int64)"%a: SDA21 relocation overflow (target %a)\n", 0.0, a6);
        append_cmt(v11, "Relocation out of range", 0);
        v24 = v38;
        v26 = v25;
      }
      dword = v26 | (v24 << 16) | dword & 0xFFE00000;
      if ( s1 )
      {
        v37 = v24;
        *(_QWORD *)&v42 = 0;
        qfree(s1);
        v24 = v37;
      }
      if ( v24 )
        goto LABEL_15;
      goto LABEL_38;
    }
LABEL_57:
    v25 = a3;
    v24 = 0;
    v18 = nullptr;
    goto LABEL_31;
  }
  dword = get_dword(a2 - 2, a2, 2, v13, v14);
  v19 = dword >> 26;
  if ( dword <= 0x3FFFFFFF )
  {
    if ( v19 <= 9 )
      return "Invalid SDA21 relocation (not at the insn start)";
    goto LABEL_53;
  }
  v31 = v19 - 32;
  result = "Invalid SDA21 relocation (not at the insn start)";
  if ( v31 <= 0x17 )
  {
LABEL_53:
    v9 = "%a: adjusting relocation SDA21 to the insn start\n";
    v11 = a2 - 2;
    sub_EAA0((__int64)"%a: adjusting relocation SDA21 to the insn start\n", a5);
    goto LABEL_9;
  }
  return result;
}

