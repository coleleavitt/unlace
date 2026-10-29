__int64 __fastcall insn_add_dref(__int64 a1, __int64 a2, int a3, unsigned int a4)
{
  __int64 name_base_ea; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 not_tail; // r13
  __int64 result; // rax
  unsigned int v12; // esi
  _BYTE *v13; // rdx

  name_base_ea = get_name_base_ea(*(_QWORD *)(a1 + 16) + a3);
  v8 = *(_QWORD *)(a1 + 16);
  v9 = name_base_ea;
  not_tail = name_base_ea;
  if ( a2 != name_base_ea )
    a4 |= 0x40u;
  add_dref(v8, name_base_ea, a4);
  if ( (get_flags_ex(v9, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(v9);
  result = get_flags_ex(not_tail, 4);
  if ( (result & 0x600) == 0x400 )
  {
    result = (unsigned int)result & 0xF0000000;
    if ( result == 1610612736 )
    {
      v12 = 0;
      if ( (~((unsigned __int16)get_flags_ex(*(_QWORD *)(a1 + 16), 4) >> 8) & 6) == 0 )
      {
        v13 = (_BYTE *)(a1 + 41);
        do
        {
          if ( !*v13 )
            break;
          if ( (unsigned __int8)(*v13 - 2) <= 5u && (char)v13[1] == a3 )
            return sub_3E0940(a1, v12, v9 - not_tail, a4, a4 - 2 <= 1, not_tail);
          ++v12;
          v13 += 40;
        }
        while ( v12 != 8 );
        v12 = 0;
      }
      return sub_3E0940(a1, v12, v9 - not_tail, a4, a4 - 2 <= 1, not_tail);
    }
  }
  return result;
}
