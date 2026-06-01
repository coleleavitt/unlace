__int64 __fastcall sub_1586D0(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, char a5)
{
  int flags; // eax
  __int64 v9; // r15
  unsigned int v11; // ebx
  int v12; // [rsp+8h] [rbp-B0h]
  unsigned int v13; // [rsp+1Ch] [rbp-9Ch]
  unsigned int v14; // [rsp+30h] [rbp-88h]

  if ( (a5 & 4) == 0 )
    return sub_1585A0(a1, (__int64)a2, a3, a4, a5);
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2);
  flags = get_flags_ex();
  v9 = flags & 0x600;
  if ( v9 == 1536 )
  {
    if ( (unsigned __int8)(sub_13BB40(a1, 0, byte_1D6060) - 41) > 7u )
      return sub_1585A0(a1, (__int64)a2, a3, a4, a5);
    goto LABEL_8;
  }
  v12 = flags;
  if ( (flags & 0x200) != 0 || (unsigned __int8)sub_13BB40(a1, 0, byte_1D604C) != 31 )
    return sub_1585A0(a1, (__int64)a2, a3, a4, a5);
  if ( v9 != 1024 )
    return (unsigned int)get_wide_byte();
  if ( (v12 & 0xF0000000) != 0xB0000000LL )
  {
LABEL_8:
    if ( get_immvals() )
    {
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
          return (unsigned int)-1;
        }
      }
      return v11;
    }
    return sub_1585A0(a1, (__int64)a2, a3, a4, a5);
  }
  get_item_end();
  return get_final_alignment();
}

