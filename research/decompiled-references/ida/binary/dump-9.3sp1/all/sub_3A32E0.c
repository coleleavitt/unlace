bool __fastcall sub_3A32E0(__int64 a1)
{
  __int64 that; // rax
  unsigned __int64 *func; // rax
  unsigned __int64 *v4; // rbp
  unsigned __int64 v5; // rsi
  unsigned __int64 *next_func; // rax

  if ( *(_DWORD *)(a1 + 48) != 2 )
  {
    if ( *(_QWORD *)(a1 + 40) != -1 || (*(_QWORD *)(a1 + 40) = 0, (get_flags_ex() & 0x600) != 0x400) )
    {
      that = next_that();
      *(_QWORD *)(a1 + 40) = that;
      return that != -1;
    }
    return 1;
  }
  if ( *(_BYTE *)(a1 + 52) && (func = (unsigned __int64 *)get_func(), (v4 = func) != nullptr) )
  {
    v5 = *func;
    if ( *func >= *(_QWORD *)(a1 + 32) )
      return 0;
  }
  else
  {
    next_func = (unsigned __int64 *)get_next_func();
    v4 = next_func;
    if ( !next_func )
      return 0;
    v5 = *next_func;
    if ( *next_func >= *(_QWORD *)(a1 + 32) )
      return 0;
  }
  if ( !sub_13DCA0(*(_QWORD *)(a1 + 16), v5) )
    return 0;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 40) = *v4;
  return 1;
}
