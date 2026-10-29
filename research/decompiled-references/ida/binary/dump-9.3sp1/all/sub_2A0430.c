__int64 __fastcall sub_2A0430(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+18h] [rbp-70h] BYREF
  char *s1; // [rsp+20h] [rbp-68h]
  __int128 v14; // [rsp+28h] [rbp-60h]
  unsigned int v15; // [rsp+40h] [rbp-48h] BYREF
  __int64 v16; // [rsp+44h] [rbp-44h]
  int v17; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v18; // [rsp+58h] [rbp-30h]

  v2 = *(_DWORD *)a1;
  v18 = __readfsqword(0x28u);
  v12 = 0;
  if ( v2 == 1 )
  {
    if ( (get_tinfo_property() & 0xF) != 0xA )
      goto LABEL_4;
    v7 = *(_QWORD *)(a1 + 8);
    s1 = nullptr;
    v14 = 0;
    if ( (v7 & 0x100) != 0 && get_tinfo_pdata() && (_QWORD)v14 && !strcmp(s1, "va_list") )
      goto LABEL_4;
    s1 = (char *)get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    if ( sub_32DA30(&v12) )
      goto LABEL_4;
    v8 = v12;
    v12 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)(a1 + 8) = v8;
LABEL_18:
    v5 = 1;
    goto LABEL_5;
  }
  if ( v2 != 6 || (get_tinfo_property() & 0xF) != 0xA )
    goto LABEL_4;
  v9 = *(_QWORD *)(a1 + 8);
  s1 = nullptr;
  v14 = 0;
  if ( (*(_QWORD *)(v9 + 48) & 0x100LL) != 0 )
  {
    if ( get_tinfo_pdata() && (_QWORD)v14 && !strcmp(s1, "va_list") )
      goto LABEL_4;
    v9 = *(_QWORD *)(a1 + 8);
  }
  if ( *(_DWORD *)(v9 + 8) == 52 )
  {
    v10 = *(_QWORD *)(v9 + 24);
LABEL_20:
    *(_QWORD *)(a1 + 8) = v10;
    goto LABEL_18;
  }
  v10 = sub_256D70(a2 + 16, v9);
  if ( !v10 )
  {
    if ( !under_debugger )
      sub_383060(0xC528u, 0.0);
    BUG();
  }
  if ( *(_DWORD *)(v10 + 8) == 51 )
    goto LABEL_20;
  s1 = (char *)get_tinfo_property();
  copy_tinfo_t();
  clear_tinfo_t();
  if ( !sub_32DA30(&v12) )
  {
    v11 = *(_DWORD *)(a1 + 4);
    v15 = 1;
    v17 = 0;
    v16 = v11 & 4;
    copy_tinfo_t();
    sub_29F770(a1, &v15);
    sub_29EC30((__int64)&v15);
    goto LABEL_18;
  }
LABEL_4:
  v5 = 0;
LABEL_5:
  clear_tinfo_t();
  return v5;
}
