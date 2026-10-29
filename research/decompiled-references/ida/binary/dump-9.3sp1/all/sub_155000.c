__int64 __fastcall sub_155000(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned int data_value; // r13d
  int flags; // r15d
  __int64 v7; // r14
  int v8; // eax
  int v9; // ecx
  __int16 v10; // r14
  __int64 v11; // r15
  __int64 v12; // rdx
  int v13; // r14d
  __int64 v14; // rcx
  __int64 _64bit; // [rsp+0h] [rbp-88h]
  unsigned __int64 v16; // [rsp+10h] [rbp-78h]
  __int64 v17; // [rsp+18h] [rbp-70h]

  if ( (unsigned __int8)is_spec_ea() )
    return 0;
  if ( (get_flags_ex() & 0x600) == 0x200 )
    prev_not_tail();
  flags = get_flags_ex();
  if ( (flags & 0x600) != 0x400 )
    return 0;
  if ( (flags & 0xF0000000) == 0x50000000 )
    return 0;
  data_value = get_data_value();
  if ( !(_BYTE)data_value )
    return 0;
  _64bit = v16;
  if ( *(_DWORD *)(a1 + 4) > *(_DWORD *)(a2 + 84) )
    _64bit = get_64bit();
  v7 = *(_QWORD *)(a2 + 96);
  v8 = sub_343460(v7, *(_QWORD *)(a1 + 8));
  if ( v8 == 1 )
  {
    if ( (flags & 0xC000) != 0x4000 )
      goto LABEL_14;
    return 0;
  }
  if ( v8 != 3 )
  {
    if ( v8 )
      goto LABEL_14;
    return 0;
  }
  if ( *(_DWORD *)(a1 + 4) > *(_DWORD *)(a2 + 84)
    || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 24LL) + 16LL) < v16
    || !(unsigned __int8)is_mapped() )
  {
    return 0;
  }
LABEL_14:
  v9 = *(_DWORD *)(a1 + 4);
  if ( v9 != *(_DWORD *)(a2 + 80) && v9 != *(unsigned __int8 *)(v7 + 130) )
    goto LABEL_16;
  if ( !(unsigned __int8)is_off() && !(unsigned __int8)is_off() )
  {
    v9 = *(_DWORD *)(a1 + 4);
LABEL_16:
    v10 = *(_WORD *)(a1 + 2);
    sub_120A10(a1, a2, _64bit, v9, a3, 0);
    *(_WORD *)(a1 + 2) = v10;
    return data_value;
  }
  v11 = -1;
  if ( (unsigned __int8)get_refinfo() && (unsigned __int8)calc_reference_data() )
    v11 = v17;
  if ( !(unsigned __int8)is_mapped() )
    return 0;
  *(_BYTE *)a1 = 6;
  v13 = *(_DWORD *)(a1 + 4);
  v14 = (unsigned int)(8 * *(_DWORD *)(a2 + 84));
  if ( (unsigned __int64)(int)v14 <= 0x3F )
    v11 &= ~(-1LL << (8 * *(_BYTE *)(a2 + 84)));
  *(_QWORD *)(a1 + 8) = v11;
  sub_11C950((unsigned __int8 *)a1, a2, v12, v14);
  if ( *(_DWORD *)(a1 + 4) > v13 )
  {
    sub_1273B0(a1, a2, a3, v13);
  }
  else if ( *(_DWORD *)(a1 + 4) < v13 )
  {
    sub_1207E0((char *)a1, a2, 9, a3, v13);
  }
  return data_value;
}
