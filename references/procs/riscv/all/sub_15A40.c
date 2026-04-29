bool __fastcall sub_15A40(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int16 v3; // ax
  unsigned __int64 dtype_size; // r12
  unsigned __int64 tinfo_size; // rax
  __int64 v8; // rbx
  unsigned __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // ebx
  __int64 v15; // [rsp+8h] [rbp-190h] BYREF
  __int128 v16; // [rsp+10h] [rbp-188h] BYREF
  __int64 v17; // [rsp+20h] [rbp-178h]
  __int64 v18; // [rsp+28h] [rbp-170h]
  __int64 v19; // [rsp+30h] [rbp-168h]
  char v20; // [rsp+38h] [rbp-160h] BYREF
  unsigned __int64 v21; // [rsp+178h] [rbp-20h] BYREF

  v21 = __readfsqword(0x28u);
  if ( !*(_BYTE *)a3 )
    return 0;
  v3 = *(_WORD *)(a1 + 24);
  if ( v3 == 162 || v3 == 122 )
    return 1;
  dtype_size = get_dtype_size(*(unsigned __int8 *)(a2 + 5));
  if ( (get_tinfo_property(*a3, 2) & 0xF) != 0xC )
  {
    tinfo_size = get_tinfo_size(0, *a3, 0);
    if ( dtype_size >= tinfo_size )
      return 1;
    if ( *(_WORD *)(a1 + 24) == 13 && 2 * dtype_size >= tinfo_size )
    {
      v8 = *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26);
      v17 = -1;
      v18 = 0;
      v9 = (unsigned __int64 *)&v20;
      v19 = 0;
      v16 = -1;
      do
      {
        *(_WORD *)v9 = 0;
        v9 += 5;
        *((_WORD *)v9 - 19) = 0;
        *((_WORD *)v9 - 18) = 0;
        *((_DWORD *)v9 - 2) = 0;
        *((_WORD *)v9 - 17) = 0;
        *((_OWORD *)v9 - 2) = 0;
        *(v9 - 2) = 0;
      }
      while ( &v21 != v9 );
      if ( (get_flags_ex(v8, 4) & 0x10000) != 0
        && (int)decode_insn(&v16, v8, v10, v11, v12, v13, 0.0) > 0
        && sub_150A0(a1, (__int64)&v16) )
      {
        return 1;
      }
      if ( (get_flags_ex(*(_QWORD *)(a1 + 16), 4) & 0x10000) != 0 && decode_prev_insn(&v16, *(_QWORD *)(a1 + 16)) )
        return sub_150A0(a1, (__int64)&v16);
    }
    return 0;
  }
  v15 = 0;
  get_stock_tinfo(&v15, 7);
  v14 = get_tinfo_size(0, v15, 0);
  clear_tinfo_t(&v15);
  return v14 == dtype_size;
}
