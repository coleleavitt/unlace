unsigned __int64 __fastcall sub_1842C0(__int64 a1, __int64 a2)
{
  bool v2; // zf
  __int64 v4; // r12
  void (*v5)(); // rax
  _QWORD *v6; // rbp
  std::__detail::_List_node_base *v7; // rax
  void (*v8)(); // rax
  unsigned __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v2 = *(_BYTE *)(a1 + 1200) == 0;
  v10 = __readfsqword(0x28u);
  if ( v2 && *(_QWORD *)(a1 + 1192) )
  {
    if ( under_debugger )
      BUG();
    interr();
  }
  sub_1770B0((__int64 *)(a1 + 1136), a2);
  if ( !*(_BYTE *)(a1 + 1200) )
  {
    v4 = *(_QWORD *)(a1 + 1192);
    if ( v4 )
    {
      v5 = *(void (**)())(*(_QWORD *)(v4 + 8) + 16LL);
      if ( v5 != nullsub_1 )
        ((void (__fastcall *)(__int64))v5)(v4 + 8);
      v6 = (_QWORD *)operator new(0x20u);
      *v6 = off_235CD0;
      v6[1] = a1 + 1072;
      v6[2] = &loc_17EA00;
      v6[3] = 0;
      v7 = (std::__detail::_List_node_base *)operator new(0x18u);
      *((_QWORD *)v7 + 2) = v6;
      std::__detail::_List_node_base::_M_hook(v7, (std::__detail::_List_node_base *)(v4 + 16));
      v9 = v4 + 8;
      sub_99EC0((_QWORD *)(a1 + 1080), &v9);
      v8 = *(void (**)())(*(_QWORD *)(v4 + 8) + 24LL);
      if ( v8 != nullsub_2 )
        ((void (__fastcall *)(__int64))v8)(v4 + 8);
    }
  }
  return v10 - __readfsqword(0x28u);
}

