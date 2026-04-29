bool __fastcall sub_3A3820(__int64 a1)
{
  __int64 v2; // rdi
  __int64 that; // rax
  unsigned __int64 *func; // rax
  unsigned __int64 *v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 *next_func; // rax

  if ( *(_DWORD *)(a1 + 48) != 2 )
  {
    v2 = *(_QWORD *)(a1 + 40);
    if ( v2 != -1 )
    {
LABEL_3:
      that = next_that(v2, *(_QWORD *)(a1 + 32), sub_3A31A0, 0);
      *(_QWORD *)(a1 + 40) = that;
      return that != -1;
    }
    *(_QWORD *)(a1 + 40) = 0;
    if ( (get_flags_ex(0, 4) & 0x600) != 0x400 )
    {
      v2 = *(_QWORD *)(a1 + 40);
      goto LABEL_3;
    }
    return 1;
  }
  if ( *(_BYTE *)(a1 + 52) && (func = (unsigned __int64 *)get_func(*(_QWORD *)(a1 + 24)), (v6 = func) != nullptr) )
  {
    v7 = *func;
    if ( *func >= *(_QWORD *)(a1 + 32) )
      return 0;
  }
  else
  {
    next_func = (unsigned __int64 *)get_next_func(*(_QWORD *)(a1 + 40));
    v6 = next_func;
    if ( !next_func )
      return 0;
    v7 = *next_func;
    if ( *next_func >= *(_QWORD *)(a1 + 32) )
      return 0;
  }
  if ( !sub_13D6E0(*(_QWORD *)(a1 + 16), v7) )
    return 0;
  *(_BYTE *)(a1 + 52) = 0;
  *(_QWORD *)(a1 + 40) = *v6;
  return 1;
}
