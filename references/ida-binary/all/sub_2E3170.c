__int64 __fastcall sub_2E3170(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, char a5)
{
  __int64 flags; // rax
  __int64 v9; // r15
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned int v14; // r15d
  __int64 v15; // rbx
  unsigned __int8 v16; // al
  __int64 item_end; // rsi
  __int64 v18; // r8
  __int64 v19; // [rsp+0h] [rbp-108h]
  __int64 v20; // [rsp+8h] [rbp-100h]
  __int64 v21; // [rsp+8h] [rbp-100h]
  __int64 v22; // [rsp+8h] [rbp-100h]
  __int64 v23; // [rsp+18h] [rbp-F0h] BYREF
  _BYTE v24[32]; // [rsp+20h] [rbp-E8h] BYREF
  _QWORD v25[25]; // [rsp+40h] [rbp-C8h] BYREF

  v25[17] = __readfsqword(0x28u);
  if ( (a5 & 4) == 0 )
    return sub_1ED6B0(a1, (__int64)a2, a3, a4, a5);
  v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 128LL))(*a2);
  flags = get_flags_ex(v19, 0);
  v9 = flags & 0x600;
  if ( v9 == 1536 )
  {
    v22 = flags;
    v16 = sub_330EE0(a1, 0, &unk_5E7EC0);
    if ( (unsigned __int8)(v16 - 41) > 7u )
      return sub_1ED6B0(a1, (__int64)a2, a3, a4, a5);
    v12 = v22;
    v14 = v16 - 41;
  }
  else
  {
    v20 = flags;
    if ( (flags & 0x200) != 0 )
      return sub_1ED6B0(a1, (__int64)a2, a3, a4, a5);
    v10 = sub_330EE0(a1, 0, &unk_5E7EB7);
    v12 = v20;
    if ( v10 != 31 )
      return sub_1ED6B0(a1, (__int64)a2, a3, a4, a5);
    if ( v9 != 1024 )
      return get_wide_byte(v19, 0, v11);
    v14 = 0;
    if ( (v20 & 0xF0000000) == 0xB0000000LL )
    {
      item_end = get_item_end(v19);
      return get_final_alignment(v19, item_end - v19);
    }
  }
  v21 = v12;
  if ( !get_immvals(v25, v19, v14, v12, 0) )
    return sub_1ED6B0(a1, (__int64)a2, a3, a4, a5);
  v15 = v25[0];
  if ( (unsigned __int8)is_off(v21, v14) )
  {
    if ( (unsigned __int8)get_refinfo(v24, v19, v14) )
    {
      v18 = v15;
      v15 = -1;
      if ( (unsigned __int8)calc_reference_data(&v23, 0, v19, v24, v18) )
        return v23;
    }
    else
    {
      return -1;
    }
  }
  return v15;
}
