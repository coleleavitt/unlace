__int64 __fastcall sub_150440(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdi
  unsigned int data_value; // r13d
  __int64 not_tail; // r13
  __int64 v9; // rdx
  __int64 flags; // r15
  __int64 v11; // r14
  int v12; // eax
  int v13; // ecx
  __int16 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r15
  int v18; // r14d
  int v19; // ecx
  __int64 _64bit; // [rsp+0h] [rbp-88h]
  unsigned __int64 v21; // [rsp+10h] [rbp-78h] BYREF
  __int64 v22; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v23[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v24 = __readfsqword(0x28u);
  if ( (unsigned __int8)is_spec_ea(v4) )
    return 0;
  not_tail = *(_QWORD *)(a1 + 8);
  if ( (get_flags_ex(not_tail, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(not_tail, 4, v9);
  flags = get_flags_ex(not_tail, 0);
  if ( (flags & 0x600) != 0x400 )
    return 0;
  if ( (flags & 0xF0000000) == 0x50000000 )
    return 0;
  data_value = get_data_value(&v21, *(_QWORD *)(a1 + 8), *(int *)(a1 + 4));
  if ( !(_BYTE)data_value )
    return 0;
  _64bit = v21;
  if ( *(_DWORD *)(a1 + 4) > *(_DWORD *)(a2 + 84) )
    _64bit = get_64bit(*(_QWORD *)(a1 + 8));
  v11 = *(_QWORD *)(a2 + 96);
  v12 = sub_33D3E0(v11, *(_QWORD *)(a1 + 8));
  if ( v12 == 1 )
  {
    if ( (flags & 0xC000) != 0x4000 )
      goto LABEL_14;
    return 0;
  }
  if ( v12 != 3 )
  {
    if ( v12 )
      goto LABEL_14;
    return 0;
  }
  if ( *(_DWORD *)(a1 + 4) > *(_DWORD *)(a2 + 84)
    || *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 24LL) + 16LL) < v21
    || !(unsigned __int8)is_mapped(v21) )
  {
    return 0;
  }
LABEL_14:
  v13 = *(_DWORD *)(a1 + 4);
  if ( v13 != *(_DWORD *)(a2 + 80) && v13 != *(unsigned __int8 *)(v11 + 130) )
    goto LABEL_16;
  if ( (unsigned __int8)is_off(flags, 0) )
  {
    v15 = 0;
  }
  else
  {
    if ( !(unsigned __int8)is_off(flags, 1) )
    {
      v13 = *(_DWORD *)(a1 + 4);
LABEL_16:
      v14 = *(_WORD *)(a1 + 2);
      sub_11BE50(a1, a2, _64bit, v13, a3, 0);
      *(_WORD *)(a1 + 2) = v14;
      return data_value;
    }
    v15 = 1;
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = -1;
  if ( (unsigned __int8)get_refinfo(v23, v16, v15) && (unsigned __int8)calc_reference_data(&v22, 0, v16, v23) )
    v17 = v22;
  if ( !(unsigned __int8)is_mapped(v17) )
    return 0;
  *(_BYTE *)a1 = 6;
  v18 = *(_DWORD *)(a1 + 4);
  v19 = 8 * *(_DWORD *)(a2 + 84);
  if ( (unsigned __int64)v19 <= 0x3F )
    v17 &= ~(-1LL << v19);
  *(_QWORD *)(a1 + 8) = v17;
  sub_117D90((char *)a1, a2);
  if ( *(_DWORD *)(a1 + 4) > v18 )
  {
    sub_1227F0(a1, a2, a3, v18);
  }
  else if ( *(_DWORD *)(a1 + 4) < v18 )
  {
    sub_11BC20((char *)a1, a2, 9, a3, v18);
  }
  return data_value;
}
