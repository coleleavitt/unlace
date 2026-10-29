unsigned __int64 __fastcall sub_299780(__int64 a1, __int64 a2, __int64 a3, double a4, __m128i a5)
{
  __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v8; // rbp
  __int64 v10[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v11[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v10[0] = a1;
  v10[1] = a2;
  v11[0] = drawable_graph_t::clear_layout_info;
  sub_298EA0(a1, v11, 1, a4);
  *(_DWORD *)(a1 + 36) = 0;
  *(_BYTE *)(a1 + 32) = 0;
  v6 = *(_QWORD *)(a3 + 24);
  v7 = a3 + 8;
  if ( v6 != v7 )
  {
    v8 = 0xA0000000ALL;
    do
    {
      sub_292E80((__int64)v11, v10, v8, *(_DWORD *)(v6 + 32), a4, a5);
      v8 = (unsigned int)(*(_DWORD *)(v11[0] + 4LL) + 20) | v8 & 0xFFFFFFFF00000000LL;
      if ( v11[0] )
      {
        v11[1] = 0;
        a4 = qfree(v11[0], (const char *)v10);
      }
      v6 = std::_Rb_tree_increment(v6);
    }
    while ( v6 != v7 );
  }
  return v12 - __readfsqword(0x28u);
}
