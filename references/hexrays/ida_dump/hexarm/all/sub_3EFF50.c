__int64 __fastcall sub_3EFF50(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD v5[2]; // [rsp+0h] [rbp-28h] BYREF
  __int16 v6; // [rsp+10h] [rbp-18h]
  unsigned __int64 v7; // [rsp+18h] [rbp-10h]

  v1 = *(_BYTE *)(a1 + 736) == 0;
  v7 = __readfsqword(0x28u);
  if ( v1 )
  {
    parse_decls(
      0,
      "enum memory_order { memory_order_relaxed, memory_order_consume, memory_order_acquire, memory_order_release, memory"
      "_order_acq_rel, memory_order_seq_cst };",
      sub_6CAE0,
      0);
    v6 = 256;
    v5[1] = "memory_order";
    v5[0] = get_idati(
              0,
              "enum memory_order { memory_order_relaxed, memory_order_consume, memory_order_acquire, memory_order_release"
              ", memory_order_acq_rel, memory_order_seq_cst };",
              v3,
              v4);
    create_tinfo(a1 + 736, 45, 61, v5);
  }
  return a1 + 736;
}
