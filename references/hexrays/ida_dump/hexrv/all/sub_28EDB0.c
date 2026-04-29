__int64 __fastcall sub_28EDB0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v4; // rax
  __int64 tinfo_size; // r12
  char tinfo_property; // r12
  _QWORD *v7; // r14
  const char *v8; // rdi
  const char *v9; // [rsp+0h] [rbp-40h] BYREF
  __int128 v10; // [rsp+8h] [rbp-38h]
  unsigned __int64 v11; // [rsp+18h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 48 )
    return 0;
  v2 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v2 + 8) != 57 )
    return 0;
  v4 = *(_QWORD *)(v2 + 24);
  if ( *(_DWORD *)(v4 + 8) != 68 )
    return 0;
  if ( strcmp(*(const char **)(v4 + 24), "va_arg") )
    return 0;
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(a2 + 48), 0);
  if ( get_tinfo_size(0, *(_QWORD *)(v2 + 48), 0) != tinfo_size )
    return 0;
  tinfo_property = get_tinfo_property(*(_QWORD *)(a2 + 48), 2);
  if ( ((get_tinfo_property(*(_QWORD *)(v2 + 48), 2) & 0xF) == 9) != ((tinfo_property & 0xF) == 9) )
    return 0;
  v7 = *(_QWORD **)(v2 + 32);
  if ( v7[1] != 2 )
  {
    if ( !under_debugger )
      sub_37DDE0(51553);
LABEL_20:
    BUG();
  }
  if ( *(_DWORD *)(*v7 + 80LL) != 68 )
    return 0;
  v9 = nullptr;
  v10 = 0;
  print_tinfo(&v9, 0, 0, 0, 0, a2 + 48, 0, 0);
  if ( (unsigned __int64)v10 <= 1 )
  {
    if ( !under_debugger )
      sub_37DDE0(51554);
    goto LABEL_20;
  }
  qfree(*(_QWORD *)(*v7 + 96LL));
  v8 = s1;
  if ( (_QWORD)v10 )
    v8 = v9;
  *(_QWORD *)(*v7 + 96LL) = qstrdup(v8);
  copy_tinfo_t(*(_QWORD *)(a2 + 24) + 48LL, a2 + 48);
  sub_250C50((__int64 *)a2, *(_QWORD *)(a2 + 24));
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return 1;
}
