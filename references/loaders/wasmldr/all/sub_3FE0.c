__int64 __fastcall sub_3FE0(__int64 a1)
{
  __int64 result; // rax

  add_segm(0, 0, 8, "header", "DATA", 0);
  create_strlit(0, 4, 0);
  set_name(0, "WASM_MAGIC", 0);
  create_data(4, 0x20000000, 4, -1);
  result = set_name(4, "WASM_VERSION", 0);
  *(_QWORD *)(a1 + 40) = 8;
  *(_QWORD *)(a1 + 24) = 8;
  return result;
}
