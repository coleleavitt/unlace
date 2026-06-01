void __fastcall sub_17E3A0(_QWORD *a1)
{
  _QWORD **v1; // rbx

  v1 = (_QWORD **)a1[4];
  for ( *a1 = &off_22E4D8; a1 + 2 != v1; v1 = (_QWORD **)std::_Rb_tree_increment() )
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v1[4] + 32LL))(v1[4], a1);
  sub_17E180((_QWORD *)a1[3]);
  operator delete(a1, 0x40u);
}

