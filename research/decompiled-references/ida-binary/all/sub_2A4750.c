__int64 __fastcall sub_2A4750(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)a1;
  v5[3] = __readfsqword(0x28u);
  result = (*(__int64 (__fastcall **)(__int64))(v3 + 128))(a1);
  if ( !(_BYTE)result )
  {
    v5[0] = drawable_graph_t::clear_layout_info;
    sub_298EA0(a1, v5, 1, a3);
    *(_BYTE *)(a1 + 32) = 0;
    *(_DWORD *)(a1 + 36) = 0;
    result = sub_2A3D40(a1, a2, 500);
    *(_DWORD *)(a1 + 36) = 6;
  }
  return result;
}
