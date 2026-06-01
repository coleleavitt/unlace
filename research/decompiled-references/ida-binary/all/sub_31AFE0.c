unsigned __int64 __fastcall sub_31AFE0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  __int64 not_tail; // rbx
  __int64 eah; // rdx
  __int64 v6; // rax
  unsigned __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rbp

  v3 = a2;
  not_tail = a1;
  if ( (_DWORD)a2 == 1 )
  {
    a2 = 4;
    if ( (get_flags_ex(a1, 4) & 0x600) == 0x200 )
      not_tail = prev_not_tail(a1);
  }
  eah = get_eah(a1, a2, a3);
  v6 = 0x100000000LL;
  if ( *(_DWORD *)(eah + 24) == 8 )
    v6 = -1;
  result = v6 - not_tail;
  if ( result < v3 )
    v3 = result;
  v8 = not_tail + v3;
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      v9 = not_tail;
      v10 = not_tail++;
      result = get_flags_ex(v9, 4);
      if ( (~(_WORD)result & 0x600) == 0 )
        break;
      if ( (result & 0x400) != 0 )
      {
        result = auto_mark_range(v10, not_tail, 40);
        if ( v8 == not_tail )
          return result;
      }
      else
      {
LABEL_8:
        if ( v8 == not_tail )
          return result;
      }
    }
    del_items(v10, 0, 1, 0);
    result = auto_mark_range(v10, not_tail, 20);
    goto LABEL_8;
  }
  return result;
}
