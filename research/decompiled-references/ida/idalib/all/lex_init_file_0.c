__int64 __fastcall lex_init_file_0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rax

  while ( *(_QWORD *)(a1 + 272) )
    sub_79E810(a1);
  *(_QWORD *)(a1 + 224) = a1;
  *(_QWORD *)(a1 + 216) = sub_79EF50;
  *(_DWORD *)(a1 + 304) = 0;
  *(_BYTE *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 348) = 0;
  *(_QWORD *)(a1 + 340) = 0;
  if ( !a2 )
  {
    set_qerrno(1);
    *__errno_location() = 2;
  }
  qfree(*(void **)(a1 + 296));
  v3 = qstrdup(a2);
  *(_QWORD *)(a1 + 296) = v3;
  v4 = v3;
  if ( !v3 )
    return get_qerrno(v4);
  v5 = fopenRT(v3);
  *(_QWORD *)(a1 + 288) = v5;
  if ( !v5 )
    return get_qerrno(v4);
  if ( *(_BYTE *)(a1 + 648) )
    return sub_7A71C0(a1, 0, 0);
  return 0;
}
