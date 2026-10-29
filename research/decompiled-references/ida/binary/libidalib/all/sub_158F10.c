__int64 __fastcall sub_158F10(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, char a5)
{
  int flags; // eax
  __int64 v9; // r15
  __int64 v11; // rbx
  int v12; // [rsp+8h] [rbp-100h]
  __int64 v13; // [rsp+18h] [rbp-F0h]
  __int64 v14; // [rsp+40h] [rbp-C8h]

  if ( (a5 & 4) == 0 )
    return sub_158DE0(a1, (__int64)a2, a3, a4, a5);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2);
  flags = get_flags_ex();
  v9 = flags & 0x600;
  if ( v9 == 1536 )
  {
    if ( (unsigned __int8)(sub_13C140(a1, 0, byte_1D7080) - 41) > 7u )
      return sub_158DE0(a1, (__int64)a2, a3, a4, a5);
  }
  else
  {
    v12 = flags;
    if ( (flags & 0x200) != 0 || (unsigned __int8)sub_13C140(a1, 0, byte_1D706C) != 31 )
      return sub_158DE0(a1, (__int64)a2, a3, a4, a5);
    if ( v9 != 1024 )
      return get_wide_byte();
    if ( (v12 & 0xF0000000) == 0xB0000000LL )
    {
      get_item_end();
      return get_final_alignment();
    }
  }
  if ( !get_immvals() )
    return sub_158DE0(a1, (__int64)a2, a3, a4, a5);
  v11 = v14;
  if ( (unsigned __int8)is_off() )
  {
    if ( (unsigned __int8)get_refinfo() )
    {
      v11 = -1;
      if ( (unsigned __int8)calc_reference_data() )
        return v13;
    }
    else
    {
      return -1;
    }
  }
  return v11;
}

