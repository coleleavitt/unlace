__int64 __fastcall sub_19DD80(char *a1, const char *a2, char a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int16 v7; // cx
  unsigned __int16 v8; // r15
  TMenuItem *v9; // r13
  const char *v10; // rsi
  TMenuItem **v12; // rdx
  TMenuItem *i; // rax
  __int64 v14; // rax
  unsigned __int16 v15; // [rsp+4h] [rbp-45Ch]
  TMenuItem *v16; // [rsp+8h] [rbp-458h]
  TMenuItem **v17; // [rsp+18h] [rbp-448h] BYREF
  char v18[1032]; // [rsp+20h] [rbp-440h] BYREF
  unsigned __int64 v19; // [rsp+428h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v16 = (TMenuItem *)sub_19D310(a1, &v17, 1);
  if ( !v16 )
    return 0;
  v4 = sub_19DCF0(a2);
  v5 = v4;
  if ( !v4 )
    return 0;
  sub_19C680(*(_WORD *)(v4 + 170), v18, &elf_gnu_hash_indexes[50]);
  v6 = operator new(0x28u);
  v7 = *(_WORD *)(v5 + 170);
  v8 = *(_WORD *)(v5 + 168);
  v9 = (TMenuItem *)v6;
  if ( *(_QWORD *)(v5 + 184) <= 1u )
  {
    v15 = *(_WORD *)(v5 + 170);
    v14 = itext();
    v7 = v15;
    v10 = (const char *)v14;
  }
  else
  {
    v10 = *(const char **)(v5 + 176);
  }
  TMenuItem::TMenuItem(v9, v10, v8, v7, 0, v18, nullptr);
  if ( (a3 & 1) != 0 )
  {
    *(_QWORD *)v9 = *(_QWORD *)v16;
    *(_QWORD *)v16 = v9;
  }
  else
  {
    v12 = v17;
    *(_QWORD *)v9 = v16;
    for ( i = *v12; i != v16; i = *(TMenuItem **)i )
      v12 = (TMenuItem **)i;
    *v12 = v9;
  }
  return 1;
}

