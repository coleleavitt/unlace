__int64 __fastcall sub_393E80(__int64 a1, double a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  __int64 v8; // rdx
  _DWORD *v9; // r12
  int v10; // r13d
  int v11; // eax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rdx
  const char *v15; // rsi
  unsigned int v16; // ebx
  __int64 v18; // rax
  __int64 *v19; // r12
  int v20; // r13d
  char op_tinfo; // r14
  int v22; // eax
  __int64 v23; // rdi
  __int64 v24; // r12
  double v25; // xmm0_8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  _QWORD *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // ecx
  _DWORD *v35; // rax
  const char *v36; // rsi
  __int64 v37; // [rsp+8h] [rbp-50h] BYREF
  _QWORD v38[9]; // [rsp+10h] [rbp-48h] BYREF

  v6 = *(_DWORD *)(a1 + 80);
  v38[1] = __readfsqword(0x28u);
  v37 = 0;
  if ( (unsigned int)(v6 - 2) <= 1 )
  {
    if ( v6 != 2 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      v9 = nullptr;
      v10 = -1;
LABEL_4:
      if ( (unsigned __int8)sub_37DB80(
                              *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL),
                              *(_QWORD *)(v8 + 40),
                              (unsigned __int64)&v37,
                              2,
                              a6)
        && (unsigned __int8)sub_3851B0(&v37, *(_QWORD *)(a1 + 128), *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL), v10) )
      {
        if ( v10 != -1 )
        {
          v11 = v9[6];
          BYTE1(v11) &= 0x7Eu;
          v9[6] = v11 | 0x100000;
          v12 = *(_QWORD *)(a1 + 24);
          v13 = *(_QWORD *)(v12 + 456) + 4LL * v10;
          memmove((void *)v13, (const void *)(v13 + 4), 4 * (*(_QWORD *)(v12 + 464) - v10) - 4LL);
          --*(_QWORD *)(v12 + 464);
        }
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 40LL);
        goto LABEL_9;
      }
      if ( v10 == -1 )
      {
        v15 = "return value";
        goto LABEL_12;
      }
LABEL_11:
      v15 = "this argument";
LABEL_12:
      sub_2B11F0((__int64)"AUTOHIDE NONE\nSorry, cannot remove %s.\nPlease edit the function prototype instead", v15);
      goto LABEL_13;
    }
    v30 = *(_QWORD *)(a1 + 88);
    if ( !v30 || (*(_BYTE *)(v30 + 25) & 1) == 0 )
      goto LABEL_13;
    v31 = sub_1EC820((__int64 *)(*(_QWORD *)(a1 + 24) + 432LL), v30);
    v9 = (_DWORD *)v31;
    if ( v31 && (*(_BYTE *)(v31 + 25) & 1) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      v32 = *(_QWORD *)(v8 + 456);
      v33 = v32 + 4LL * *(_QWORD *)(v8 + 464);
      v34 = -991146299 * ((v31 - *(_QWORD *)(v8 + 432)) >> 3);
      if ( v32 != v33 )
      {
        v35 = *(_DWORD **)(v8 + 456);
        while ( v34 != *v35 )
        {
          if ( (_DWORD *)v33 == ++v35 )
            goto LABEL_49;
        }
        v10 = ((__int64)v35 - v32) >> 2;
        if ( v10 != -1 )
        {
          if ( *(int *)(v8 + 68) > 0 && *v9 == 1 )
            goto LABEL_11;
          goto LABEL_4;
        }
      }
LABEL_49:
      if ( !under_debugger )
        sub_37EEE0(0xCCB8u, v33, a2);
    }
    else if ( !under_debugger )
    {
      sub_37EEE0(0xCCB7u, v30, a2);
    }
    BUG();
  }
  v18 = sub_389B40(*(_QWORD *)(a1 + 32), a1 + 80, a2);
  v19 = (__int64 *)v18;
  if ( v18 && *(_DWORD *)(*(_QWORD *)(v18 + 24) + 8LL) != 68 )
  {
    v20 = sub_387640(a1, *(_QWORD **)(v18 + 32));
    op_tinfo = get_op_tinfo(&v37, *v19, 0);
    if ( !op_tinfo )
      copy_tinfo_t(&v37, v19[3] + 48);
    v38[0] = 0;
    v38[0] = get_tinfo_property(v37, 10);
    copy_tinfo_t(&v37, v38);
    clear_tinfo_t(v38);
    v22 = get_tinfo_property(v37, 20) & 0xFFFFFFF0;
    if ( (v22 == 64 || v22 == 208) && v20 >= (int)get_tinfo_property(v37, 23) )
    {
      sub_2B11F0((__int64)"AUTOHIDE NONE\n"
                          "Sorry, cannot remove variadic arguments\n"
                          "Please use 'Delete variadic argument' instead");
    }
    else
    {
      if ( (unsigned __int8)sub_3851B0(&v37, *(_QWORD *)(a1 + 128), *v19, v20) )
      {
        v23 = *v19;
        if ( op_tinfo || (v24 = v19[3], *(_DWORD *)(v24 + 8) != 64) )
        {
          v25 = set_op_tinfo(v23, 0, &v37);
          sub_391910(a1, 0, v25, v26, v27, v28);
          v29 = sub_1CAFA0(*(_QWORD *)(a1 + 24));
          reanalyze_function(v29, 0, -1, 0);
          goto LABEL_25;
        }
        if ( (~((unsigned __int16)get_flags_ex(*(_QWORD *)(v24 + 24), 4) >> 8) & 6) != 0 )
        {
          sub_328210(v38, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 112LL), &v37);
          copy_tinfo_t(&v37, v38);
          clear_tinfo_t(v38);
        }
        v14 = *(_QWORD *)(v24 + 24);
LABEL_9:
        sub_393580(a1, (const char *)&v37, v14, 0, 0, a2);
LABEL_25:
        v16 = 1;
        goto LABEL_14;
      }
      v36 = "remove this argument";
      if ( v20 == -1 )
        v36 = "convert function to 'void'";
      sub_2B11F0((__int64)"AUTOHIDE NONE\nSorry, cannot %s.\n", v36);
    }
  }
LABEL_13:
  v16 = 0;
LABEL_14:
  clear_tinfo_t(&v37);
  return v16;
}
