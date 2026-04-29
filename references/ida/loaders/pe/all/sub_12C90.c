unsigned __int64 __fastcall sub_12C90(__int64 a1, __int64 a2)
{
  bool (__fastcall **v3)(__int64, _DWORD *, unsigned int); // rax
  _DWORD *v4; // r13
  unsigned int v5; // edi
  bool (__fastcall *v6)(__int64, _DWORD *, unsigned int); // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  bool (__fastcall *v10)(__int64, _DWORD *, unsigned int); // rax
  unsigned __int64 v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  char v19; // bp
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  char v24; // [rsp+0h] [rbp-78h]
  unsigned int v25; // [rsp+8h] [rbp-70h]
  unsigned int v26; // [rsp+Ch] [rbp-6Ch]
  int v27; // [rsp+14h] [rbp-64h]
  unsigned __int64 v28; // [rsp+48h] [rbp-30h]

  v3 = *(bool (__fastcall ***)(__int64, _DWORD *, unsigned int))a1;
  v28 = __readfsqword(0x28u);
  v4 = (_DWORD *)a2;
  qword_349B0 = a1;
  v5 = *(_DWORD *)(a1 + 304);
  v6 = *v3;
  qword_349A8 = a2;
  if ( v6 != sub_DAB0 )
  {
    if ( v6(a1, (_DWORD *)a2, v5) )
      goto LABEL_15;
    return sub_12A30((__int64)"Bad .NET header.", a2);
  }
  if ( !a2 || (a2 = v5, *v4 != 3) )
  {
    v7 = *(_QWORD *)(a1 + 16) - 1LL;
    if ( v7 < 0 )
      goto LABEL_9;
    v8 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
    while ( (unsigned __int64)v5 < *v8 || (unsigned __int64)v5 >= v8[1] )
    {
      --v7;
      v8 -= 4;
      if ( v7 == -1 )
        goto LABEL_9;
    }
    a2 = v5 + v8[2] - *v8;
    if ( a2 == -1 )
    {
LABEL_9:
      a2 = v5;
      if ( v5 < (__int64)(*(_QWORD *)(a1 + 592) + *(unsigned int *)(a1 + 156)) )
        goto LABEL_14;
      if ( !*(_BYTE *)(a1 + 985)
        && (int)sub_CFC0(
                  1u,
                  (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                  v5) <= 0 )
      {
        goto LABEL_39;
      }
      *(_BYTE *)(a1 + 985) = 1;
      a2 = v5;
      qlseek();
      return sub_12A30((__int64)"Bad .NET header.", a2);
    }
  }
LABEL_14:
  if ( qlseek() == -1 )
    return sub_12A30((__int64)"Bad .NET header.", a2);
LABEL_15:
  lread();
  if ( !v25 || !v26 )
  {
LABEL_34:
    create_filename_cmt();
    return v28 - __readfsqword(0x28u);
  }
  v10 = **(bool (__fastcall ***)(__int64, _DWORD *, unsigned int))a1;
  if ( v10 != sub_DAB0 )
  {
    v11 = (unsigned __int64)v4;
    if ( v10(a1, v4, v25) )
      goto LABEL_32;
    goto LABEL_29;
  }
  if ( !v4 || (v11 = v25, *v4 != 3) )
  {
    v12 = *(_QWORD *)(a1 + 16) - 1LL;
    if ( v12 < 0 )
      goto LABEL_25;
    v13 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL * *(_QWORD *)(a1 + 16) - 32);
    while ( (unsigned __int64)v25 < *v13 || (unsigned __int64)v25 >= v13[1] )
    {
      --v12;
      v13 -= 4;
      if ( v12 == -1 )
        goto LABEL_25;
    }
    v11 = v25 + v13[2] - *v13;
    if ( v11 == -1 )
    {
LABEL_25:
      v11 = v25;
      if ( v25 < (__int64)(*(_QWORD *)(a1 + 592) + *(unsigned int *)(a1 + 156)) )
        goto LABEL_31;
      if ( *(_BYTE *)(a1 + 985)
        || (int)sub_CFC0(
                  1u,
                  (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
                  v25) > 0 )
      {
        *(_BYTE *)(a1 + 985) = 1;
        v11 = v25;
        qlseek();
        goto LABEL_29;
      }
LABEL_39:
      sub_DA00(
        0,
        (__int64)"HIDECANCEL\nCan't find translation for relative virtual address %08X, continue?",
        v14,
        v15,
        v16,
        v17,
        v24);
    }
  }
LABEL_31:
  if ( qlseek() != -1 )
  {
LABEL_32:
    v18 = qalloc();
    if ( !v18 )
      sub_CE30((__int64)".NET metadata", v11);
    lread();
    netnode_check();
    dword_349A4 = v27;
    add_encoding();
    set_default_encoding_idx();
    add_encoding();
    set_default_encoding_idx();
    v19 = sub_21290(v18, v26);
    qfree();
    if ( !v19 )
      sub_DA00((__int64)"Corrupted .NET metadata", v26, v20, v21, v22, v23, v24);
    goto LABEL_34;
  }
LABEL_29:
  sub_12A30((__int64)"Failed to load .NET metadata", v11);
  return v28 - __readfsqword(0x28u);
}
