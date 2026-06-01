__int64 __fastcall expr_node_t__::vfunc_4(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rsi
  void *v3; // rsi
  char v4; // dl
  __int64 result; // rax
  _DWORD v6[2]; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  if ( (unsigned __int8)get_tinfo_property(*(_QWORD *)(a1 + 72), 2) )
    return get_tinfo_size(0, *(_QWORD *)(a1 + 72), 0);
  v1 = *(_DWORD *)(a1 + 376);
  v2 = 0;
  if ( v1 >= 0 )
    v2 = *(int *)(a1 + 376);
  if ( *(_QWORD *)(a1 + 88) )
  {
    v3 = (void *)(*(_QWORD *)(a1 + 80) + v2);
    if ( v3 )
      goto LABEL_6;
    return 0xFFFFFFFFLL;
  }
  if ( v1 <= 0 )
  {
    v3 = &unk_5E03A7;
    if ( !&unk_5E03A7 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    v3 = (void *)(*(_QWORD *)(a1 + 80) + v2);
  }
LABEL_6:
  v4 = parse_reg_name(v6, v3);
  result = 0xFFFFFFFFLL;
  if ( v4 )
    return v6[1];
  return result;
}
